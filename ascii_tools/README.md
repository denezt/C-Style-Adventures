# ASCII Tools Tutorial: `charfinder`

## Purpose
This tutorial shows how to parse simple command-line options and convert a character into its ASCII integer value.

## Requirements
- C compiler (GCC/Clang)
- `make`
- Terminal/shell

## Files
- `charfinder.c` — CLI tutorial program
- `Makefile` — build workflow

## How It Works
1. Parses command-line arguments.
2. Supports:
   - `-i <char>` to print character and numeric code
   - `-h` to show a help menu
3. Routes behavior through `selector()` and `ascii_to_int()`.

## Build and Run
From `ascii_tools/`:

```bash
make all
./session/charfinder -h
./session/charfinder -i A
```

## What You Learn
- Basic `argc`/`argv` usage
- Character handling and integer promotion in C
- Function decomposition for small CLI tools

## Notes
- The tutorial focuses on minimal option parsing.
- Suggested extension: support full strings and print code for each character.
