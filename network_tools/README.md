# Network Tools Tutorial: `pingnet`

## Purpose
This tutorial demonstrates building a simple command-driven network utility that runs ping commands and logs output.

## Requirements
- C compiler (GCC/Clang)
- `make`
- Unix-like shell utilities (`ping`, `date`, `rm`, `clear`)

## Files
- `pingnet.c` — command-driven ping/logger utility
- `Makefile` — build workflow

## How It Works
1. Reads a single option flag from the command line.
2. Option behavior:
   - `-d` prints debug information
   - `-f` flushes/removes log file
   - `-p [count]` pings two configured destinations and appends output to log
   - `-v` displays log
   - `-h` prints help menu
3. Uses `system(...)` to execute shell commands and append output to `ping_log.log`.

## Build and Run
From `network_tools/`:

```bash
make all
./session/pingnet -h
./session/pingnet -p 5
./session/pingnet -v
```

## What You Learn
- Command routing with `switch`
- Basic shell command composition from C
- Logging command output to a file

## Notes
- This tutorial is intentionally simple and shell-centric.
- For robust production tooling, consider safer process APIs and stronger argument validation.
