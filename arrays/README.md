# Arrays Tutorial: `multidimensional`

## Purpose
This tutorial demonstrates how to declare, initialize, and traverse a fixed-size two-dimensional integer array in C.

## Requirements
- C compiler (GCC/Clang)
- `make`
- POSIX-like shell (for the provided `Makefile` workflow)

## Files
- `multidimensional.c` — tutorial source code
- `Makefile` — build automation for compile/clean/test scaffolding

## How It Works
1. Declares a `3x4` integer array with inline initialization.
2. Uses nested `for` loops:
   - outer loop iterates rows
   - inner loop iterates columns
3. Prints each element with its index coordinates.

## Build and Run
From `arrays/`:

```bash
make all
./session/multidimensional
```

## What You Learn
- C multi-dimensional array declaration syntax
- Row/column traversal with nested loops
- Basic formatted output with `printf`

## Notes
- Array dimensions are hard-coded (`3` rows, `4` columns).
- Good follow-up exercise: parameterize dimensions with macros and print row sums.
