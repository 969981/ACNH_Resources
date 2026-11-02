#!/usr/bin/env python3
"""Independently reconcile committed original-ROM villager PNGs with .zs sources.

A named, single-BRTI texture is NOT proof of in-game UI composition parity.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import re

from PIL import Image

ROM = "e10617820db06889e1638499478da0de_NCA/1/Model/"
SUFFIX = ".Nin_NX_NVN.zs"
FAMILIES = {
    "photo": ("Layout_NpcBromide_", "assets/images/villager/photos"),
    "icon": ("Layout_NpcIcon_", "assets/images/villager/icons"),
    "poster": ("Layout_FtrIcon_", "assets/images/villager/posters"),
    "bromide_item": ("Layout_FtrIcon_", "assets/images/villager/bromide-items"),
}
BATCH = re.compile(r"batch-(\d+)-(\d+)\.json\Z")
SAFE_NAME = re.compile(r"[A-Za-z0-9_-]+\.png\Z")


class EvidenceError(ValueError):
    pass


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def ensure(ok: bool, why: str) -> None:
    if not ok:
        raise EvidenceError(why)


def verify(root: Path, evidence: Path, expect: int | None = 1934,
           verify_sources: bool = False) -> dict:
    root = root.resolve()
    batches = []
    for path in (root / evidence).glob("batch-*.json"):
        match = BATCH.fullmatch(path.name)
        ensure(match is not None, f"unexpected report name: {path.name}")
        batches.append((int(match[1]), int(match[2]), path))
    batches.sort()
    ensure(bool(batches), "no committed ROM villager batch reports")
    previous = 0
    total = None
    categories = None
    names: set[str] = set()
    sources: set[str] = set()
    counts = Counter()

    for begin, end, path in batches:
        report = json.loads(path.read_text("utf-8"))
        rows = report["results"]
        ensure(begin == previous and end > begin, f"missing/overlapping batch: {path.name}")
        ensure(report.get("schema") == "acnh303_real_rom_villager_texture_export_v1"
               and report.get("native_rom_sources") is True
               and report.get("not_community_cdn_images") is True
               and report.get("native_in_game_render_composition_verified") is False,
               f"invalid native source claims: {path.name}")
        ensure(report["source_offset"] == begin and report["next_offset"] == end
               and report["attempted"] == len(rows) == end - begin
               and report["single_rom_texture_png"] == len(rows)
               and report["multi_texture_component_sources"] == 0
               and not report["errors"],
               f"batch has missing/deferred/failed PNGs: {path.name}")
        if total is None:
            total, categories = report["total_source_count"], report["source_counts"]
        ensure(report["total_source_count"] == total and report["source_counts"] == categories
               and total == sum(categories.values()),
               f"inconsistent source catalog: {path.name}")
        for row in rows:
            kind = row.get("category")
            ensure(kind in FAMILIES, f"unrecognized villager family {kind}")
            prefix, folder = FAMILIES[kind]
            name = row.get("requested_png_name")
            ensure(isinstance(name, str) and SAFE_NAME.fullmatch(name) is not None,
                   f"unsafe filename: {name}")
            src = ROM + prefix + name[:-4] + SUFFIX
            dst = folder + "/" + name
            ensure(row.get("source") == src
                   and row.get("status") == "one_original_rom_texture_exported"
                   and row.get("native_rom_source") is True
                   and row.get("native_in_game_composition_verified") is False
                   and row.get("bntx_count") == 1
                   and row.get("native_texture_count") == 1
                   and row.get("native_bnti_name_matches_filename") is True,
                   f"not a verified single original ROM texture: {name}")
            ensure(src not in sources and dst not in names, f"duplicate source/output: {name}")
            pngs = row.get("pngs", [])
            ensure(len(pngs) == 1, f"not exactly one decoded PNG: {name}")
            info = pngs[0]
            ensure(info.get("output") == dst
                   and info.get("native_brti_name_at_same_index_candidate") == name[:-4]
                   and isinstance(info.get("sha256"), str),
                   f"nonmatching native texture name: {name}")
            image_file = root / dst
            ensure(image_file.is_file() and image_file.stat().st_size == info.get("bytes")
                   and sha256(image_file) == info["sha256"],
                   f"missing/changed original PNG bytes: {dst}")
            try:
                with Image.open(image_file) as png:
                    ensure(png.format == "PNG", f"not PNG: {dst}")
                    png.verify()
                with Image.open(image_file) as png:
                    png.load()
                    ensure(png.size == (info["width"], info["height"]),
                           f"dimensions disagree: {dst}")
            except OSError as error:
                raise EvidenceError(f"bad PNG pixel decode: {dst}: {error}") from error
            if verify_sources:
                raw = root / src
                ensure(raw.is_file() and raw.stat().st_size == row.get("original_source_bytes")
                       and sha256(raw) == row.get("original_source_sha256"),
                       f"missing/changed original .zs: {src}")
            names.add(dst)
            sources.add(src)
            counts[kind] += 1
        previous = end

    cursor = json.loads((root / evidence / "next-offset.json").read_text("utf-8"))
    ensure(cursor["next_offset"] == previous == total and cursor["total"] == total,
           "cursor does not match complete batch source range")
    ensure(dict(counts) == categories, f"family source coverage incorrect: {dict(counts)}")
    if expect is not None:
        ensure(total == expect, f"expected {expect} actual villager sources, got {total}")
    for _, folder in FAMILIES.values():
        actual = {p.relative_to(root).as_posix() for p in (root / folder).glob("*.png")}
        required = {name for name in names if name.startswith(folder + "/")}
        ensure(actual == required, f"untracked or missing PNGs in {folder}")
    return {
        "schema": "acnh303_verified_rom_villager_pngs_v1",
        "original_rom_only": True,
        "in_game_ui_composition_verified": False,
        "original_source_sha256_reverified": verify_sources,
        "verified_png_files": len(names),
        "verified_source_files": len(sources),
        "source_cursor": previous,
        "report_batches": len(batches),
        "family_counts": {family: counts[family] for family in FAMILIES},
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--evidence", type=Path, default=Path("assets/evidence/rom-villager"))
    p.add_argument("--out", type=Path, default=Path("assets/evidence/rom-villager/reconciliation.json"))
    p.add_argument("--expect", type=int, default=1934)
    p.add_argument("--require-source-files", action="store_true")
    args = p.parse_args()
    root = args.root.resolve()
    result = verify(root, args.evidence, args.expect, args.require_source_files)
    dst = root / args.out
    dst.parent.mkdir(parents=True, exist_ok=True)
    data = json.dumps(result, indent=2, ensure_ascii=False) + "\n"
    if not dst.is_file() or dst.read_text("utf-8") != data:
        dst.write_text(data, "utf-8")
    print(data, end="")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (EvidenceError, KeyError, TypeError, OSError, json.JSONDecodeError) as e:
        raise SystemExit(f"Villager original ROM verification failed: {e}")
