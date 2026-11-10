# Vendored nx2elf (complete source)

This folder is a direct source copy, not a Git submodule.

Upstream repository: https://github.com/shuffle2/nx2elf
Pinned commit: a1760ba54e2aefb41444933f53b90e6e8b05c399 (2026-04-10)

The original C/C++ sources, CMakeLists.txt, Makefile, README, configuration
and upstream GitHub workflow have been preserved. Original source file Git
blob SHA-1 values were verified against the upstream commit.

The upstream tree inspected for this import did not include a LICENSE or
COPYING file. Do not assume that its absence grants redistribution or reuse
rights; check with the authors as appropriate.

## Building locally

    cmake -S tools/nx2elf -B build/nx2elf -DCMAKE_BUILD_TYPE=Release
    cmake --build build/nx2elf --config Release

## Convert ACNH 3.0.3 main

Run at the repository root:

    python Scripts/convert_acnh_main.py --report UnPack/_meta/nx2elf-main-3.0.3.json

The wrapper can build this vendored source itself, requires no submodule or
external binary download, validates NSO0 input and ELF64 AArch64 output, and
records SHA-256 source and output identities.
