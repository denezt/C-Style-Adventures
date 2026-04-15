# C-Style-Adventures

A hands-on collection of small C tutorials focused on foundational systems programming patterns: arrays, command-line tools, JSON parsing, network scripting, and shared library workflows.

---

## Table of Contents
- [Project Goals](#project-goals)
- [Repository Layout](#repository-layout)
- [Prerequisites](#prerequisites)
- [Quick Start](#quick-start)
- [Tutorials](#tutorials)
  - [1) Arrays](#1-arrays)
  - [2) ASCII Tools](#2-ascii-tools)
  - [3) JSON Parser](#3-json-parser)
  - [4) Network Tools](#4-network-tools)
  - [5) Shared Libraries - Example 1](#5-shared-libraries---example-1)
  - [6) Shared Libraries - Example 2](#6-shared-libraries---example-2)
- [Build System Notes](#build-system-notes)
- [Coding and Runtime Notes](#coding-and-runtime-notes)
- [Troubleshooting](#troubleshooting)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [License](#license)

---

## Project Goals
This repository is designed for learners who want practical, minimal examples of C development workflows.

You will practice:
- Writing and compiling small C programs.
- Using `make` to automate build/clean/test scaffolding.
- Parsing command-line options.
- Integrating external C libraries (Jansson JSON parser).
- Building and consuming shared libraries (`.so`).

---

## Repository Layout

```text
C-Style-Adventures/
├── README.md
├── arrays/
├── ascii_tools/
├── json_parser/
├── network_tools/
└── shared_libs/
    ├── ex1/
    └── ex2/
```

Each tutorial directory includes source files, a `Makefile`, and local documentation (`README.md`).

---

## Prerequisites
- Linux/Unix-like environment (recommended)
- `gcc` (or another C compiler)
- `make`
- Standard shell utilities (`rm`, `cp`, `date`, `ping`, etc.)

### Additional dependency for JSON tutorial
- `libjansson-dev` (or equivalent package for your distribution)

Debian/Ubuntu example:

```bash
sudo apt-get update
sudo apt-get install -y build-essential libjansson-dev
```

---

## Quick Start
Clone and build a tutorial:

```bash
git clone <your-fork-or-repo-url>
cd C-Style-Adventures
cd arrays
make all
./session/multidimensional
```

Most tutorials follow this pattern:
1. `cd <tutorial-directory>`
2. `make all`
3. Run binary from `session/`

---

## Tutorials

### 1) Arrays
**Directory:** `arrays/`  
**Program:** `multidimensional`

Demonstrates declaration and traversal of a 2D integer array with nested loops.

Run:

```bash
cd arrays
make all
./session/multidimensional
```

See full tutorial details in `arrays/README.md`.

---

### 2) ASCII Tools
**Directory:** `ascii_tools/`  
**Program:** `charfinder`

Simple CLI utility demonstrating argument parsing and character-to-ASCII conversion.

Run:

```bash
cd ascii_tools
make all
./session/charfinder -h
./session/charfinder -i A
```

See full tutorial details in `ascii_tools/README.md`.

---

### 3) JSON Parser
**Directory:** `json_parser/`  
**Program:** `json_parser`

Introduces JSON parsing in C via Jansson (`json_loads`, object field lookup, cleanup).

Run:

```bash
cd json_parser
make all
./session/json_parser
```

If build fails with missing `jansson.h`, install Jansson development headers first.

See full tutorial details in `json_parser/README.md`.

---

### 4) Network Tools
**Directory:** `network_tools/`  
**Program:** `pingnet`

Demonstrates a switch-based command dispatcher for pinging hosts and appending output to a log.

Run:

```bash
cd network_tools
make all
./session/pingnet -h
./session/pingnet -p 5
./session/pingnet -v
```

See full tutorial details in `network_tools/README.md`.

---

### 5) Shared Libraries - Example 1
**Directory:** `shared_libs/ex1/`  
**Library:** `libmeso.so`  
**Executable:** `session/sharedtest`

Shows a local shared-library flow using PIC objects and runtime `rpath`.

Run:

```bash
cd shared_libs/ex1
make all
./session/sharedtest
```

See full tutorial details in `shared_libs/ex1/README.md`.

---

### 6) Shared Libraries - Example 2
**Directory:** `shared_libs/ex2/`  
**Library:** `libutils.so`  
**Executable:** `session/sharedtest`

Demonstrates a shared-library flow that copies the built library into `/usr/lib`.

Run:

```bash
cd shared_libs/ex2
make all
./session/sharedtest
```

> Note: this flow modifies system library paths and may require elevated privileges.

See full tutorial details in `shared_libs/ex2/README.md`.

---

## Build System Notes
- Most tutorial Makefiles expose: `clean`, `compile`/`build`, and `test` targets.
- Output binaries are generally placed in a local `session/` directory.
- Some examples use strict compile flags (`-Wall -Werror`), especially shared library examples.

---

## Coding and Runtime Notes
- Tutorials are intentionally minimal and educational rather than production-hardened.
- Some examples rely on shell commands executed from C (`system(...)`).
- Platform behavior can differ between Linux/macOS/Windows shells.
- For safer production code, prefer:
  - explicit input validation,
  - bounded string functions (`snprintf`),
  - and process APIs over shell command composition.

---

## Troubleshooting

### `jansson.h: No such file or directory`
Install Jansson development headers/libraries for your platform and re-run `make` in `json_parser/`.

### `ld: cannot find -l<name>`
The linker cannot find a required library. Verify the library is installed and in the expected library search path.

### Shared library runtime errors
If executable cannot load `.so` files, check:
- `rpath` usage in linker flags,
- system library cache/path configuration,
- file placement and permissions.

### Permission issues writing to `/usr/lib`
`shared_libs/ex2` may require privileges depending on your environment.

---

## Suggested Learning Path
1. `arrays/` (core syntax and iteration)
2. `ascii_tools/` (CLI argument basics)
3. `json_parser/` (external dependency integration)
4. `network_tools/` (multi-command utility patterns)
5. `shared_libs/ex1/` (local shared library fundamentals)
6. `shared_libs/ex2/` (system-level library deployment pattern)

---

## Contributing
Contributions are welcome. Helpful improvements include:
- hardening input validation and error handling,
- improving cross-platform behavior,
- expanding automated tests in `test` targets,
- and adding new focused C tutorials.

---

## License
Individual files may contain their own licensing notices. Review source headers before redistribution.
