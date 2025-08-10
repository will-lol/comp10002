{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixpkgs-unstable";
    systems.url = "systems";
  };

  outputs =
    {
      self,
      nixpkgs,
      systems,
    }@inputs:
    let
      forEachSystem = nixpkgs.lib.genAttrs (import systems);
    in
    {
      overlays = {
        default = final: prev: {
        };
      };

      packages = forEachSystem (
        system:
        let
          pkgs = import nixpkgs {
            inherit system;
            overlays = [ self.overlays.default ];
          };
        in
        {
          default = { };
          projects =
            let
              projectsManifest = builtins.fromJSON (builtins.readFile ./manifest.json);
            in
            (builtins.listToAttrs (
              map (s: {
                name = s;
                value = pkgs.stdenv.mkDerivation {
                  name = s;
                  src = ./projects/${s};
                  nativeBuildInputs = [ pkgs.gcc ];
                  buildPhase = ''
                    gcc -Wall -o ${s} main.c
                  '';
                  installPhase = ''
                    mkdir -p $out/bin
                    mv ${s} $out/bin/
                  '';
                };
              }) projectsManifest
            ));

          generate-manifest = pkgs.writeShellApplication {
            name = "generate-manifest";
            runtimeInputs = [
              pkgs.jq
              pkgs.git
            ];
            text = ''
              ROOT_DIRECTORY="$(git rev-parse --show-toplevel)"

              find "$ROOT_DIRECTORY/projects" -mindepth 1 -maxdepth 1 -type d -printf '%P\n' | git check-ignore --stdin --verbose --non-matching | awk '$1 == "::" {print $2}' | jq -R -s 'split("\n")[:-1]' > "$ROOT_DIRECTORY/manifest.json"
            '';
          };

          new-project = pkgs.writeShellApplication {
            name = "new-project";
            runtimeInputs = [
              self.packages.${system}.generate-manifest
              pkgs.git
            ];
            text = ''
              if [ -z "$1" ]; then
              printf "Error: No directory name provided.\n" >&2
              printf "Usage: %s <directory_name>\n" "$0" >&2
              exit 1
              fi

              ROOT_DIRECTORY="$(git rev-parse --show-toplevel)/projects"
              DIRECTORY="$ROOT_DIRECTORY/$1"

              mkdir "$DIRECTORY"
              cp --no-preserve=mode ${./boilerplate.c} "$DIRECTORY/main.c"
              generate-manifest

              git add "$DIRECTORY/main.c"
              git add "$ROOT_DIRECTORY/manifest.json"
            '';
          };
        }
      );

      devShells = forEachSystem (
        system:
        let
          pkgs = import nixpkgs {
            inherit system;
            overlays = [ self.overlays.default ];
          };
        in
        {
          default = pkgs.mkShell {
            packages = with pkgs; [
              nodejs
              self.packages.${system}.generate-manifest
              self.packages.${system}.new-project
            ];
          };
        }
      );
    };
}
