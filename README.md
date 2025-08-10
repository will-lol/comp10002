## COMP10002 C exercises

Small C programs for the subject COMP10002. Each exercise lives in its own directory with a single `main.c`. A Nix flake is included to build and scaffold exercises consistently across systems.

### Project layout

- `boilerplate.c` — template used when creating a new exercise
- `flake.nix` — Nix flake with build rules and helper scripts
- `manifest.json` — list of exercise directories consumed by the flake

### Requirements

- With Nix: a recent Nix installation with flake support
- Without Nix: a C compiler such as `gcc`

### Build and run (Nix)

Enter the dev shell to get helper commands:

```sh
nix develop
```

Run exercises directly

```sh
nix run .#projects.helloworld

nix run .#projects.overflow
```

Build a specific exercise (targets derive from directory names in `manifest.json`):

```sh
# Examples
nix build .#projects.helloworld

nix build .#projects.overflow

nix build .#projects.rounding

nix build .#projects.spherevol
```

List available build targets:

```sh
nix flake show
```

### Build and run (manual GCC)

```sh
# From the repo root
gcc -Wall -Wextra -O2 -o helloworld/helloworld helloworld/main.c && ./helloworld/helloworld
gcc -Wall -Wextra -O2 -o overflow/overflow   overflow/main.c   && ./overflow/overflow
gcc -Wall -Wextra -O2 -o rounding/rounding   rounding/main.c   && ./rounding/rounding
gcc -Wall -Wextra -O2 -o spherevol/spherevol spherevol/main.c  && ./spherevol/spherevol
```

### Helper scripts (in the Nix dev shell)

- `generate-manifest` — regenerates `manifest.json` from the top-level directories in the repo.
- `new-project <name>` — scaffolds a new exercise directory with a copy of `boilerplate.c` as `main.c`, then updates the manifest.

Usage:

```sh
nix develop
new-project myexercise
generate-manifest
```
