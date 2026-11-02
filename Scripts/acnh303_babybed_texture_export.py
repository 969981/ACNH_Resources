#!/usr/bin/env python3
"""Decode actual Babybed embedded BNTX to validated model texture PNGs.

These are BNTX MATERIAL TEXTURES, not the 56 composite inventory icons.
Requires wimgt (nintoolbox) and Pillow, plus zstandard for original .zs.
Never remaps a renderer texture to an icon filename without proof.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

from acnh_formats import detect
from acnh303_media_l3 import validate_png
from acnh303_assets import png_info
from probe_acnh_babybed_textures import (
    NCA, MAX_SIZE, babybed_sources, nested_files, valid_bntx_slices, parse_bntx,
)
import acnh_formats as af


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def extract(path: Path, rom_rel: str):
    original = path.read_bytes()
    if len(original) > MAX_SIZE:
        raise ValueError("original compressed source exceeds size cap")
    items = []
    for leaf, data in nested_files(original, rom_rel, af):
        if detect(data) == "bntx":
            slices = [(0, data)]
        else:
            slices = list(valid_bntx_slices(data))
        for off, bntx in slices:
            textures = parse_bntx(bntx)
            items.append({
                "member": leaf, "embedded_offset": off,
                "native_textures": textures, "bntx_bytes": bntx,
            })
    return original, items


def convert(wimgt: Path, data: bytes, tempdir: Path, timeout: int):
    source = tempdir / "input.bntx"
    output = tempdir / "decoded.png"
    source.write_bytes(data)
    proc = subprocess.run(
        [str(wimgt), "DECODE", str(source), "--dest", str(output)],
        timeout=timeout, check=False, capture_output=True, text=True,
    )
    produced = sorted((p for p in tempdir.rglob("*.png") if p.is_file()),
                      key=lambda p: p.as_posix())
    if proc.returncode != 0 or not produced:
        raise ValueError(
            f"wimgt exit={proc.returncode}; outputs={len(produced)};"
            f" stdout={proc.stdout[-400:]}; stderr={proc.stderr[-400:]}"
        )
    verified = []
    for path in produced:
        raster = validate_png(path)
        native_png = png_info(path)
        verified.append((path, raster, native_png))
    return verified


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--wimgt", type=Path, required=True)
    p.add_argument("--out", type=Path, default=Path("assets/textures/babybed"))
    p.add_argument("--max-total-mb", type=int, default=100)
    p.add_argument("--timeout", type=int, default=180)
    args = p.parse_args()
    if not args.wimgt.is_file():
        p.error("wimgt binary missing; do not substitute fake PNGs")
    root = args.root.resolve()
    dst = (root / args.out).resolve()
    if dst == (root / NCA).resolve() or dst.is_relative_to((root / NCA).resolve()):
        p.error("cannot modify original game resources")
    total_bytes = 0
    manifest = {
        "schema": "acnh303_babybed_native_texture_export_v1",
        "output_kind": "native_bntx_texture_png_not_composite_item_icon",
        "icon_56_rendered": False,
        "native_material_binding_verified": False,
        "texture_to_converter_filename_binding_verified": False,
        "sources": [], "errors": [],
    }
    for rom_rel in babybed_sources():
        source = root / NCA / "1" / rom_rel
        record = {"source": str(source.relative_to(root))}
        manifest["sources"].append(record)
        if not source.is_file():
            manifest["errors"].append({"source": rom_rel, "error": "missing source"})
            continue
        try:
            original, embedded = extract(source, rom_rel)
            record.update(source_sha256=sha(original), source_bytes=len(original),
                          bntx_count=len(embedded), bntx=[])
            if not embedded:
                raise ValueError("no validated BNTX in actual original payload")
            for bidx, bn in enumerate(embedded):
                raw = bn["bntx_bytes"]
                native = bn["native_textures"]
                entry = {
                    "bntx_sha256": sha(raw), "bntx_count_index": bidx,
                    "embedded_offset": bn["embedded_offset"],
                    "member": bn["member"], "native_brti_names": native,
                    "pngs": [],
                }
                record["bntx"].append(entry)
                with tempfile.TemporaryDirectory(prefix="acnh-bntx-") as d:
                    checked = convert(args.wimgt.resolve(), raw, Path(d), args.timeout)
                    if len(checked) != len(native):
                        raise ValueError(
                            f"decoder returned {len(checked)} PNGs, native BRTI count={len(native)}; "
                            "cannot safely index-align"
                        )
                    # Deterministic numeric names. BRTI name and PNG ordering
                    # are recorded separately until decoder-specific index mapping is proven.
                    sub = dst / source.name.replace(".Nin_NX_NVN.zs", "") / f"bntx_{bidx:02d}"
                    sub.mkdir(parents=True, exist_ok=True)
                    for idx, (png, raster, meta) in enumerate(checked):
                        total_bytes += png.stat().st_size
                        if total_bytes > args.max_total_mb * 1024 * 1024:
                            raise ValueError("total verified texture PNGs exceed configured output cap")
                        target = sub / f"texture_{idx:03d}.png"
                        if target.is_file():
                            if png_info(target)["sha256"] != meta["sha256"]:
                                raise ValueError(f"existing texture hash mismatch: {target}")
                        else:
                            shutil.copyfile(png, target)
                        if png_info(target)["sha256"] != meta["sha256"]:
                            raise ValueError("post-copy PNG hash mismatch")
                        entry["pngs"].append({
                            "png": target.relative_to(root).as_posix(),
                            "sha256": meta["sha256"], "bytes": meta["bytes"],
                            "width": meta["width"], "height": meta["height"],
                            "full_pixel_decode": raster["pixel_decode"],
                            "decoder_output_name": png.name,
                            "brti_name_at_same_index_candidate_only": native[idx]["name"],
                            "index_to_name_proven": False,
                        })
            record["status"] = "converted_texture_pixels"
        except (ValueError, OSError, subprocess.TimeoutExpired) as e:
            record["status"] = "failed"
            manifest["errors"].append({"source": rom_rel, "error": str(e)})
    manifest["exported_png_count"] = sum(
        len(b["pngs"]) for src in manifest["sources"] for b in src.get("bntx", [])
    )
    out = dst / "_texture_evidence.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(manifest, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps({
        "sources": len(manifest["sources"]),
        "native_model_textures_exported": manifest["exported_png_count"],
        "errors": manifest["errors"],
        "result": str(out),
        "item_icon_pngs_generated": 0,
    }, ensure_ascii=False))
    return 1 if manifest["errors"] else 0


if __name__ == "__main__":
    sys.exit(main())
