# ACNH 3.0.3 — ExeFS main conversion with nx2elf

## Conversion identity

Original NSO:
    e10617820db06889e1638499478da0de_NCA/0/main

Requested output:
    e10617820db06889e1638499478da0de_NCA/0/main.elf

Vendored source: tools/nx2elf/ (no submodule)
Upstream: https://github.com/shuffle2/nx2elf
Pinned upstream commit: a1760ba54e2aefb41444933f53b90e6e8b05c399
Local wrapper: Scripts/convert_acnh_main.py
CI: .github/workflows/acnh303-nx2elf.yml
SHA-256 manifest: UnPack/_meta/nx2elf-main-3.0.3.json

## Rebuild on Windows or Linux

Requires Python 3.10+, CMake and a C++17 toolchain. At repository root:

    python Scripts/convert_acnh_main.py --report UnPack/_meta/nx2elf-main-3.0.3.json

For an explicit prebuild:

    cmake -S tools/nx2elf -B build/nx2elf -DCMAKE_BUILD_TYPE=Release
    cmake --build build/nx2elf --config Release

The wrapper checks source NSO0 magic, builds the committed nx2elf source,
runs conversion, validates ELF64 little-endian/AArch64 headers, and records
both source and output SHA-256 hashes. An output is only replaced after
validation. CI additionally invokes file and readelf and commits the
validated ELF and generated manifest.

## Historic ELF already present

Before importing the nx2elf source, this branch already contained two
identical 79,000,340-byte ELF files:

- e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf
- UnPack/0/main.elf

Both Git blobs have SHA-1 a4f4f236baf8bb12b5d200024c71fb575674a037.

The initial requested main.elf is populated by referencing that identical
existing Git blob, avoiding a redundant 79 MB transfer. The committed
GitHub Actions workflow is responsible for independently rebuilding from
the source NSO with the imported nx2elf, verifying the generated ELF, and
recording its actual SHA-256. Do not assume byte-for-byte equivalence of
the older ELF and freshly generated output until CI has checked it.

The original main NSO, the old ACNH3.0.3.elf, and the UnPack/0 mirror are
preserved unchanged.
