# Shared Libraries Tutorial (Example 1): `meso`

## Purpose
This tutorial shows how to create and consume a simple shared library in C using position-independent code and runtime linker paths.

## Requirements
- C compiler (GCC/Clang)
- `make`
- Linux/Unix-like environment with dynamic linker support

## Files
- `meso.c` — library implementation
- `meso.h` — public header
- `main.c` — executable that calls library function
- `Makefile` — build pipeline for `.o`, `.so`, and executable

## How It Works
1. Compiles `meso.c` into PIC object: `-fpic`.
2. Links object into `libmeso.so`.
3. Compiles `main.c` and links it against `-lmeso`.
4. Sets runtime search path (`-Wl,-rpath=...`) so executable can find the shared object.

## Build and Run
From `shared_libs/ex1/`:

```bash
make all
./session/sharedtest
```

## What You Learn
- Shared object creation (`.so`)
- Header-based API exposure
- Linker search path and runtime loader behavior (`rpath`)

## Notes
- This example keeps everything local to the project directory and does not require installing to system library paths.
