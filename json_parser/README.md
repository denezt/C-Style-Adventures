# JSON Parser Tutorial: `json_parser`

## Purpose
This tutorial introduces parsing JSON in C using the **Jansson** library.

## Requirements
- C compiler (GCC/Clang)
- `make`
- Jansson development package (`jansson.h` and linker library)

Example install (Debian/Ubuntu):

```bash
sudo apt-get install -y libjansson-dev
```

## Files
- `json_parser.c` — minimal JSON parse example
- `Makefile` — builds with `-ljansson`
- `install.sh` — helper install script for Debian-based systems

## How It Works
1. Defines a JSON string literal (`{"key": "value"}`).
2. Parses JSON with `json_loads(...)`.
3. Validates parser success and reports line/error text on failure.
4. Reads field `key` from root object.
5. Extracts string value and prints it.
6. Releases JSON object with `json_decref(...)`.

## Build and Run
From `json_parser/`:

```bash
make all
./session/json_parser
```

## What You Learn
- Third-party C library integration
- Basic JSON object field access
- Error handling for parse failures
- Memory lifecycle with reference-counted JSON nodes

## Notes
- This is a single-key demonstration; production code should validate object and type assumptions before reading fields.
