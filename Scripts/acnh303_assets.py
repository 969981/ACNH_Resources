#!/usr/bin/env python3
"""Auditable ACNH PNG catalog importer (not a texture-to-icon renderer).

Only actual, intact PNG files supplied with --images are copied into assets/.
The catalog is a list of expected PokerCore image NAMES, not image payloads.
Run on Python 3.10+; no third-party dependencies.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import shutil
import struct
import zlib
from collections import defaultdict
from pathlib import Path

PNG_SIG = b"\x89PNG\r\n\x1a\n"
MAX_PNG_BYTES = 64 * 1024 * 1024
MAX_PIXELS = 8192 * 8192
VARIANT = re.compile(r"^(?P<item>.+)_Remake_(?P<body>\d+)_(?P<fabric>\d+)\.png$", re.I)


def valid_name(name: str) -> bool:
    return bool(name and name.lower().endswith(".png") and
                Path(name).name == name and
                not any(c in name for c in ("\x00", "/", "\\", "\r", "\n")) and
                name not in (".", "..") and not name.startswith(".."))


def load_catalog(path: Path) -> list[str]:
    lines = path.read_text(encoding="utf-8-sig").splitlines()
    names = [s.strip() for s in lines if s.strip() and not s.lstrip().startswith("#")]
    bad = [s for s in names if not valid_name(s)]
    if bad:
        raise ValueError(f"{len(bad)} unsafe or non-PNG names, first={bad[0]!r}")
    return sorted(set(names), key=lambda s: (s.casefold(), s))


def listing_to_names(listing: Path) -> list[str]:
    """Parse UTF-16 Windows tree / UTF-8 plain listing; do not invent filenames."""
    raw = listing.read_bytes()
    if raw.startswith((b"\xff\xfe", b"\xfe\xff")):
        text = raw.decode("utf-16")
    else:
        text = raw.decode("utf-8-sig")
    candidates = []
    for line in text.splitlines():
        match = re.search(r"([^\\/\s│├└─]+\.png)\s*$", line, flags=re.I)
        if match and valid_name(match.group(1)):
            candidates.append(match.group(1))
    return sorted(set(candidates), key=lambda s: (s.casefold(), s))


def png_info(path: Path) -> dict:
    if not path.is_file() or path.is_symlink():
        raise ValueError("not a regular PNG file")
    size = path.stat().st_size
    if size < 45 or size > MAX_PNG_BYTES:
        raise ValueError(f"PNG size out of range: {size}")
    raw = path.read_bytes()
    if not raw.startswith(PNG_SIG):
        raise ValueError("wrong PNG signature")
    offset = 8
    chunks = []
    dimensions = None
    has_idat = False
    while offset + 12 <= len(raw):
        length = struct.unpack_from(">I", raw, offset)[0]
        end = offset + 12 + length
        if end > len(raw):
            raise ValueError("truncated PNG chunk")
        tag = raw[offset + 4:offset + 8]
        payload = raw[offset + 8:offset + 8 + length]
        crc = struct.unpack_from(">I", raw, offset + 8 + length)[0]
        if zlib.crc32(tag + payload) & 0xFFFFFFFF != crc:
            raise ValueError(f"PNG CRC mismatch in {tag!r}")
        if not chunks and tag != b"IHDR":
            raise ValueError("first PNG chunk is not IHDR")
        chunks.append(tag)
        if tag == b"IHDR":
            if dimensions is not None or length != 13:
                raise ValueError("invalid/duplicate IHDR")
            width, height, depth, color, compression, filtr, interlace = struct.unpack(">IIBBBBB", payload)
            if width < 1 or height < 1 or width * height > MAX_PIXELS:
                raise ValueError("unreasonable PNG dimensions")
            if compression != 0 or filtr != 0 or interlace > 1:
                raise ValueError("unsupported PNG IHDR")
            dimensions = (width, height)
        elif tag == b"IDAT":
            has_idat = True
        elif tag == b"IEND":
            if length != 0 or end != len(raw) or not has_idat:
                raise ValueError("invalid PNG terminator / no pixel data")
            return {
                "sha256": hashlib.sha256(raw).hexdigest(),
                "bytes": size,
                "width": dimensions[0],
                "height": dimensions[1],
            }
        offset = end
    raise ValueError("PNG missing IEND")


def locate_sources(image_root: Path, wanted: set[str]) -> dict[str, list[Path]]:
    if not image_root.is_dir():
        raise FileNotFoundError(image_root)
    found: dict[str, list[Path]] = defaultdict(list)
    for path in image_root.rglob("*"):
        if path.is_file() and path.name in wanted:
            found[path.name].append(path)
    return found


def build_report(catalog: list[str], dest: Path, provenance: dict[str, str] | None = None) -> dict:
    provenance = provenance or {}
    records = []
    missing = []
    bad = []
    for filename in catalog:
        path = dest / filename
        if not path.exists():
            missing.append(filename)
            continue
        try:
            meta = png_info(path)
        except ValueError as err:
            bad.append({"filename": filename, "error": str(err)})
            continue
        match = VARIANT.fullmatch(filename)
        records.append({
            "filename": filename,
            "asset_path": str(path.as_posix()),
            "verification": "actual_png_bytes_crc_sha256_only",
            "native_game_icon_verified": False,
            "source": provenance.get(filename, "preexisting_assets_file_origin_unverified"),
            "variant": ({"item": match["item"], "body": int(match["body"]),
                         "fabric": int(match["fabric"])} if match else None),
            **meta,
        })
    babybed = [s for s in catalog if s.startswith("FtrBabybed_Remake_")]
    babybed_present = [r["filename"] for r in records if r["filename"] in set(babybed)]
    return {
        "schema": "acnh303_assets_v1",
        "expected_names": len(catalog),
        "verified_png_files": len(records),
        "missing_png_files": len(missing),
        "invalid_png_files": len(bad),
        "babybed_expected": len(babybed),
        "babybed_verified_png_files": len(babybed_present),
        "note": "Expected filenames and valid PNG bytes do not establish game-native icon provenance.",
        "imported": records,
        "invalid": bad,
        "missing": missing,
    }


def report_to_disk(report: dict, report_path: Path):
    report_path.parent.mkdir(parents=True, exist_ok=True)
    report_path.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--catalog", type=Path, default=Path("assets/catalog/expected-png-names.txt"))
    p.add_argument("--dest", type=Path, default=Path("assets/images/items"))
    p.add_argument("--report", type=Path, default=Path("assets/evidence/png-import-report.json"))
    p.add_argument("--prefix", default="", help="Restrict to a prefix, e.g. FtrBabybed_")
    sub = p.add_subparsers(dest="command", required=True)
    imp = sub.add_parser("import", help="Validate and copy real source PNG bytes")
    imp.add_argument("--images", type=Path, required=True, help="Directory with actual PNG files, not a TXT")
    aud = sub.add_parser("audit", help="Audit destination PNGs against expected names")
    conv = sub.add_parser("catalog", help="Convert original UTF-16 TXT directory listing to names")
    conv.add_argument("--listing", type=Path, required=True)
    conv.add_argument("--output", type=Path, required=True)
    args = p.parse_args()
    if args.command == "catalog":
        names = listing_to_names(args.listing)
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text("\n".join(names) + "\n", encoding="utf-8")
        print(json.dumps({"unique_png_names": len(names), "output": str(args.output)}))
        return 0
    names = [s for s in load_catalog(args.catalog) if s.startswith(args.prefix)]
    if not names:
        p.error("no expected PNG names match --prefix / catalog")
    provenance = {}
    invalid_sources = []
    if args.command == "import":
        sources = locate_sources(args.images, set(names))
        args.dest.mkdir(parents=True, exist_ok=True)
        for name, paths in sorted(sources.items()):
            try:
                checked = [(png_info(x), x) for x in paths]
                hashes = {meta["sha256"] for meta, _ in checked}
                if len(hashes) != 1:
                    raise ValueError("multiple sources with the same name but DIFFERENT PNG contents")
                chosen_meta, source = sorted(checked, key=lambda x: str(x[1]))[0]
                output = args.dest / name
                if output.exists():
                    existing = png_info(output)
                    if existing["sha256"] != chosen_meta["sha256"]:
                        raise ValueError("destination exists with DIFFERENT contents; no overwrite")
                else:
                    shutil.copyfile(source, output)
                if png_info(output)["sha256"] != chosen_meta["sha256"]:
                    raise ValueError("post-copy SHA256 mismatch")
                provenance[name] = str(source)
            except (OSError, ValueError) as err:
                invalid_sources.append({"filename": name, "error": str(err)})
    report = build_report(names, args.dest, provenance)
    report["source_conflicts_or_invalid"] = invalid_sources
    report_to_disk(report, args.report)
    summary = {k: report[k] for k in ("expected_names", "verified_png_files",
                                     "missing_png_files", "invalid_png_files",
                                     "babybed_expected", "babybed_verified_png_files")}
    summary["source_errors"] = len(invalid_sources)
    print(json.dumps(summary, ensure_ascii=False))
    return 1 if report["invalid"] or invalid_sources else 0


if __name__ == "__main__":
    raise SystemExit(main())
