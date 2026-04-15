# Shared Libraries Tutorial (Example 2): `utils`

## Purpose
This tutorial presents a second shared-library workflow that includes copying the built shared object to a system library directory.

## Requirements
- C compiler (GCC/Clang)
- `make`
- Linux/Unix-like environment
- Permission to copy library artifacts into `/usr/lib`

## Files
- `utils.c` — library implementation
- `utils.h` — public header
- `main.c` — executable using the shared library
- `Makefile` — build and link steps
- `tools.sh` — helper script for library cache inspection

## How It Works
1. Builds `utils.c` with `-fpic`.
2. Creates `libutils.so`.
3. Copies `libutils.so` into `/usr/lib`.
4. Compiles and links executable against `-lutils`.
5. Optional helper script checks loader-visible libraries.

## Build and Run
From `shared_libs/ex2/`:

```bash
make all
./session/sharedtest
```

## What You Learn
- Alternative shared-library deployment model
- Linking an app against a system-visible shared object
- Basic loader diagnostics workflow

## Notes
- Installing artifacts to `/usr/lib` modifies system state. In controlled environments, prefer packaging or local library paths.
