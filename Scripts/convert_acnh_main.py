#!/usr/bin/env python3
"""Convert ACNH 3.0.3 ExeFS main to ELF using bundled nx2elf sources."""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
EXEFS = ROOT / "e10617820db06889e1638499478da0de_NCA" / "0"
UPSTREAM_COMMIT = "a1760ba54e2aefb41444933f53b90e6e8b05c399"


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(4 * 1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def validate_elf(path: Path) -> dict[str, int]:
    with path.open("rb") as stream:
        header = stream.read(64)
    if len(header) < 64 or header[:4] != b"\x7fELF":
        raise ValueError("nx2elf did not produce an ELF file")
    if header[4] != 2 or header[5] != 1:
        raise ValueError("Expected little-endian ELF64")
    elf_type, machine = struct.unpack_from("<HH", header, 16)
    section_offset = struct.unpack_from("<Q", header, 40)[0]
    program_headers = struct.unpack_from("<H", header, 56)[0]
    section_headers = struct.unpack_from("<H", header, 60)[0]
    if machine != 183 or elf_type not in (2, 3):
        raise ValueError(f"Unexpected ELF machine/type: {machine}/{elf_type}")
    if not section_offset or not section_headers or not program_headers:
        raise ValueError("ELF is missing required section or program headers")
    if section_offset >= path.stat().st_size:
        raise ValueError("ELF section header table is outside the output")
    return {
        "elf_class": 64,
        "elf_machine": machine,
        "elf_type": elf_type,
        "program_header_count": program_headers,
        "section_header_count": section_headers,
    }


def build_nx2elf(build_dir: Path) -> Path:
    source = ROOT / "tools" / "nx2elf"
    if not (source / "nx2elf.cpp").is_file():
        raise FileNotFoundError("Vendored nx2elf.cpp is missing")
    subprocess.run(
        ["cmake", "-S", str(source), "-B", str(build_dir),
         "-DCMAKE_BUILD_TYPE=Release"],
        check=True,
    )
    subprocess.run(
        ["cmake", "--build", str(build_dir), "--config", "Release",
         "--parallel", "2"],
        check=True,
    )
    for name in ("nx2elf", "nx2elf.exe", "Release/nx2elf", "Release/nx2elf.exe"):
        candidate = build_dir / name
        if candidate.is_file():
            return candidate
    raise FileNotFoundError("Could not find CMake-built nx2elf")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--input", type=Path, default=EXEFS / "main")
    parser.add_argument("--output", type=Path, default=EXEFS / "main.elf")
    parser.add_argument("--nx2elf", type=Path, help="Prebuilt nx2elf executable")
    parser.add_argument("--report", type=Path, help="SHA-256 provenance JSON")
    args = parser.parse_args()
    source, output = args.input.resolve(), args.output.resolve()
    if source == output:
        parser.error("Input and output paths must be different")
    with source.open("rb") as stream:
        if stream.read(4) != b"NSO0":
            raise ValueError(f"Input is not a Nintendo Switch NSO: {source}")
    output.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="acnh-nx2elf-") as tmpdir:
        tmpdir = Path(tmpdir)
        tool = args.nx2elf.resolve() if args.nx2elf else build_nx2elf(tmpdir / "build")
        if not tool.is_file():
            raise FileNotFoundError(tool)
        generated = tmpdir / "main.elf"
        subprocess.run(
            [str(tool), str(source), "--export-elf", str(generated)],
            check=True,
        )
        if not generated.is_file():
            raise RuntimeError("nx2elf did not create main.elf")
        elf_info = validate_elf(generated)
        report = {
            "input": str(source.relative_to(ROOT)) if source.is_relative_to(ROOT) else str(source),
            "input_bytes": source.stat().st_size,
            "input_sha256": sha256_file(source),
            "output": str(output.relative_to(ROOT)) if output.is_relative_to(ROOT) else str(output),
            "output_bytes": generated.stat().st_size,
            "output_sha256": sha256_file(generated),
            "tool": "vendored nx2elf (full source, no Git submodule)",
            "upstream": "https://github.com/shuffle2/nx2elf",
            "upstream_commit": UPSTREAM_COMMIT,
            **elf_info,
        }
        with tempfile.TemporaryDirectory(prefix=".nx2elf-", dir=output.parent) as stage:
            staged = Path(stage) / "main.elf"
            shutil.copyfile(generated, staged)
            os.replace(staged, output)
    if args.report:
        report_path = args.report.resolve()
        report_path.parent.mkdir(parents=True, exist_ok=True)
        report_path.write_text(
            json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n",
            encoding="utf-8",
        )
    print(json.dumps(report, sort_keys=True, indent=2))


if __name__ == "__main__":
    main()
