## COMP10002 C exercises

Small C programs for the subject COMP10002. Each exercise lives in its own directory with a single `main.c`. A Nix flake is included to build and scaffold exercises consistently across systems.

Many of these C programs are either identical or minimally modified to those from Alistair Moffat as part of his book. The original programs are published [here](https://people.eng.unimelb.edu.au/ammoffat/ppsaa/c/). I am required to reproduce the warranty and permission statements:

```
Warranty: These programs are supplied for educational purposes only. There is no absolutely no warranty of any kind that they are fit for any purpose whatsoever, and no permission or consent is granted for you to use them in any way that might put you at risk of financial or personal loss, real or implied. (Sorry to be so negative, that one is for any lawyers that happen to be looking.)

Permission: You may copy these programs onto any computer that you are using as part of your education. You may also reproduce them into any work of your own, including making them available on your personal or institutional web site, provided always that you continue to acknowledge my authorship of them by retaining unchanged the comment that appears at the end of each file, and provided that you reproduce both the "Warranty" and "Permission" statements that appear in this file in any electronic listing of them.
```

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
