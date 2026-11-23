#!/usr/bin/env python3
"""Bounded recursive Zstd/Yaz0/SARC extraction with immutable source provenance.

L1 extraction is NOT a claim of BFEVFL/BDLI/BFRES native semantics.
Every archive layer and raw leaf is SHA-256 addressed. No source tree writes.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import tempfile

from acnh_formats import FormatError, decompress, detect, parse_sarc, safe_member_name

NCA = "e10617820db06889e1638499478da0de_NCA"
DEFAULT_LIMIT = 256 * 1024 * 1024


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def clean_source(value: str) -> Path:
    name = safe_member_name(value.replace("\\", "/"))
    return Path(*name.split("/"))


def expand_archive(raw: bytes, *, max_depth: int = 8, max_bytes: int = DEFAULT_LIMIT,
                   max_leaves: int = 30000, max_members: int = 30000) -> tuple[list[dict], list[dict]]:
    """Return a bounded extraction plan; no writes and no fabricated decoding.

    Expansion budget counts each decompressed stream and emitted terminal leaf;
    nested archive members may be intentionally counted more than once.
    """
    if not 0 < max_depth <= 32 or not 0 < max_bytes <= (1 << 31):
        raise ValueError("invalid recursive bounds")
    if len(raw) > max_bytes:
        raise FormatError("input exceeds aggregate byte budget")
    layers: list[dict] = []
    leaves: list[dict] = []
    seen: set[str] = set()
    budget = max_bytes
    member_count = 0

    def charge(size: int) -> None:
        nonlocal budget
        if size > budget:
            raise FormatError("recursive aggregate expansion/leaf byte limit exceeded")
        budget -= size

    def walk(data: bytes, name: str, depth: int, parents: list[str]) -> None:
        nonlocal member_count
        if depth > max_depth:
            raise FormatError("archive recursion depth exceeded")
        kind = detect(data)
        info = {"virtual_path": name, "format": kind, "bytes": len(data),
                "sha256": sha(data), "depth": depth}
        layers.append(info)
        if kind in ("zstd", "yaz0"):
            decompressed, codec = decompress(data, limit=min(DEFAULT_LIMIT, budget))
            charge(len(decompressed))
            info["expanded_sha256"] = sha(decompressed)
            info["expanded_bytes"] = len(decompressed)
            info["codec"] = codec
            # Compression is a wrapper, not a claimed extracted file.
            walk(decompressed, name, depth + 1, parents + [kind])
            return
        if kind == "sarc":
            entries, members = parse_sarc(data, max_members=max_members)
            member_count += len(members)
            if member_count > max_members:
                raise FormatError("total nested archive member count exceeded")
            info["member_count"] = len(entries)
            for filename, payload in members:
                # The additional suffix namespaces identical member names in
                # distinct nested archives and preserves each nesting level.
                child = name + ".members/" + safe_member_name(filename)
                walk(payload, child, depth + 1, parents + [kind])
            return
        if len(leaves) >= max_leaves:
            raise FormatError("recursive terminal leaf limit exceeded")
        charge(len(data))
        portable = safe_member_name(name)
        key = portable.casefold()
        if key in seen or any(key.startswith(k + "/") or k.startswith(key + "/") for k in seen):
            raise FormatError("casefold / file-directory collision in recursive leaves")
        seen.add(key)
        leaves.append({"relative_path": portable, "sha256": sha(data),
                       "bytes": len(data), "format": kind,
                       "status": "raw_leaf_not_semantically_decoded",
                       "container_chain": parents, "_raw": data})

    walk(raw, "source", 0, [])
    return layers, leaves


def atomic_write(dest: Path, data: bytes) -> None:
    dest.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(dir=dest.parent, prefix=".acnh-stage-", delete=False) as file:
        temp = Path(file.name)
        try:
            file.write(data)
            file.flush()
            os.fsync(file.fileno())
            os.replace(temp, dest)
        finally:
            temp.unlink(missing_ok=True)


def materialize(root: Path, out: Path, relative: Path, leaves: list[dict]) -> list[dict]:
    source_dir = (root / NCA / "1").resolve()
    out = out.resolve()
    if out == source_dir or out.is_relative_to(source_dir) or source_dir.is_relative_to(out):
        raise FormatError("output overlaps source RomFS")
    base = out / "1" / relative.parent / (relative.name + ".unpacked")
    targets = []
    for leaf in leaves:
        target = base / "_members" / clean_source(leaf["relative_path"])
        if not target.resolve().is_relative_to(out):
            raise FormatError("recursive materialized path escapes UnPack")
        if target.exists() and (target.is_symlink() or not target.is_file()
                                or hashlib.sha256(target.read_bytes()).hexdigest() != leaf["sha256"]):
            raise FormatError("refusing to overwrite distinct/untracked leaf")
        targets.append((target, leaf["_raw"]))
    records = []
    for target, raw in targets:
        if not target.exists():
            atomic_write(target, raw)
        records.append({"path": target.relative_to(out).as_posix(), "size_bytes": len(raw),
                        "sha256": sha(raw), "level": "L1_RAW"})
    return records


def process_source(root: Path, rel: Path, out: Path, *, write_leaves: bool = False,
                   max_depth: int = 8, max_bytes: int = DEFAULT_LIMIT) -> dict:
    rel = clean_source(rel.as_posix())
    path = root / NCA / "1" / rel
    source_dir = (root / NCA / "1").resolve()
    if path.is_symlink() or not path.is_file() or not path.resolve().is_relative_to(source_dir):
        raise FormatError("original source file missing or symlink")
    if path.stat().st_size > max_bytes:
        raise FormatError("original source too large for bounded archive parse")
    data = path.read_bytes()
    layers, leaves = expand_archive(data, max_depth=max_depth, max_bytes=max_bytes)
    outputs = materialize(root, out, rel, leaves) if write_leaves else []
    for leaf in leaves:
        del leaf["_raw"]
    report = {
        "schema": "acnh303-recursive-archive-l1-v1",
        "source_path": rel.as_posix(),
        "source_sha256": sha(data),
        "source_bytes": len(data),
        "layers": layers,
        "raw_leaves": leaves,
        "outputs": outputs,
        "leaf_count": len(leaves),
        "status": "raw_extracted" if write_leaves and leaves else "indexed_raw_only",
        "provenance_level": "L1",
        "semantic_equivalent": False,
        "note": "Original compressed/archive layers proven; media/text/game semantics not inferred",
    }
    dst = out / "_meta" / "recursive" / rel.parent / (rel.name + ".json")
    atomic_write(dst, (json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n").encode())
    return report


def main() -> int:
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--source", required=True, help="RomFS/1 relative source")
    a.add_argument("--out", type=Path, default=Path("UnPack"))
    a.add_argument("--materialize", action="store_true", help="Store actual raw nested leaves")
    a.add_argument("--max-depth", type=int, default=8)
    a.add_argument("--max-mb", type=int, default=256)
    args = a.parse_args()
    root = args.root.resolve()
    out = (root / args.out).resolve()
    report = process_source(root, clean_source(args.source), out,
                            write_leaves=args.materialize,
                            max_depth=args.max_depth,
                            max_bytes=args.max_mb * 1024 * 1024)
    print(json.dumps({k: report[k] for k in
                      ("source_path", "source_sha256", "leaf_count", "status")}, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
