#!/usr/bin/env python3
"""Complete ACNH 3.0.3 Git tree inventory without downloading multi-GB blobs.

Inventory SHA is Git blob SHA-1 (NOT the byte-level SHA-256 of decoded sources).
Converters must later fill source_sha256 from actual bytes.
"""
from __future__ import annotations
from collections import Counter, defaultdict
import argparse
import csv
import gzip
import hashlib
import io
import json
from pathlib import Path
import subprocess
import unicodedata

NCA = "e10617820db06889e1638499478da0de_NCA"
ROOT_ROMFS = f"{NCA}/1/"
ROOT_EXEFS = f"{NCA}/0/"
SCRIPT_VERSION = "acnh303-tree-inventory-v1"


def all_tree_blobs(prefix: str):
    raw = subprocess.check_output(["git", "ls-tree", "-r", "-l", "-z", "HEAD", "--", prefix])
    files = []
    for item in raw.split(b"\0"):
        if not item:
            continue
        header, path = item.split(b"\t", 1)
        mode, kind, sha, size = header.decode("ascii").split()
        if kind != "blob":
            continue
        if size == "-":
            continue
        files.append({
            "path": path.decode("utf-8", "surrogateescape"),
            "mode": mode,
            "git_blob_sha1": sha,
            "size": int(size),
        })
    return sorted(files, key=lambda r: r["path"])


def extension(name: str) -> str:
    n = name.lower()
    if n.endswith(".sarc.zs"):
        return ".sarc.zs"
    if n.endswith(".bfres.zs"):
        return ".bfres.zs"
    if n.endswith(".release.szs"):
        return ".release.szs"
    if n.endswith(".szs"):
        return ".szs"
    if n.endswith(".zs"):
        return ".zs"
    return Path(n).suffix or "(no extension)"


def normalize_path(path: str) -> str:
    return unicodedata.normalize("NFC", path).casefold()


def summary(rows: list[dict], root: str) -> dict:
    by_folder = defaultdict(lambda: {"files": 0, "bytes": 0})
    by_extension = defaultdict(lambda: {"files": 0, "bytes": 0})
    by_combo = defaultdict(lambda: {"files": 0, "bytes": 0})
    collisions = defaultdict(list)
    for row in rows:
        rel = row["path"][len(root):]
        folder = rel.split("/", 1)[0] if "/" in rel else "(root)"
        ext = extension(rel)
        for obj, key in ((by_folder, folder), (by_extension, ext), (by_combo, f"{folder}|{ext}")):
            obj[key]["files"] += 1
            obj[key]["bytes"] += row["size"]
        collisions[normalize_path(rel)].append(rel)
    return {
        "file_count": len(rows),
        "total_bytes": sum(r["size"] for r in rows),
        "top_level_folders": {k: by_folder[k] for k in sorted(by_folder)},
        "extensions": {k: by_extension[k] for k in sorted(by_extension)},
        "folder_extensions": {k: by_combo[k] for k in sorted(by_combo)},
        "casefold_path_collisions": [v for v in collisions.values() if len(v) > 1],
        "largest_sources": [{"relative_path": r["path"][len(root):], "size": r["size"]}
                            for r in sorted(rows, key=lambda x: x["size"], reverse=True)[:25]],
    }


def csv_bytes(rows: list[dict], root: str) -> bytes:
    fp = io.StringIO(newline="")
    writer = csv.writer(fp, lineterminator="\n")
    writer.writerow(["source_relative_path", "folder", "extension", "git_blob_sha1", "source_size",
                     "git_file_mode", "source_sha256_status"])
    for r in rows:
        relative = r["path"][len(root):]
        writer.writerow([relative, relative.split("/", 1)[0] if "/" in relative else "(root)",
                         extension(relative), r["git_blob_sha1"], r["size"],
                         r["mode"], "pending_content_hash"])
    return fp.getvalue().encode("utf-8")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--out", type=Path, default=Path("derived/3.0.3/inventory"))
    args = parser.parse_args()
    romfs = all_tree_blobs(ROOT_ROMFS)
    exefs = all_tree_blobs(ROOT_EXEFS)
    romfs_s = summary(romfs, ROOT_ROMFS)
    exefs_s = summary(exefs, ROOT_EXEFS)
    report = {
        "schema": SCRIPT_VERSION,
        "input": {"romfs": ROOT_ROMFS, "exefs": ROOT_EXEFS},
        "romfs": romfs_s,
        "exefs": exefs_s,
        "notes": [
            "Enumerates ALL Git-tracked blobs for this revision via git ls-tree, even with sparse checkout.",
            "Git blob SHA-1 is provenance metadata, NOT original-content SHA-256.",
            "Output success/failure is NOT inferred from inventory: compare separately to conversion manifest.",
            "File extension is a coarse grouping, not verified content magic.",
            "Symlinks and submodules should be audited separately (non-regular Git modes).",
        ],
    }
    dest = args.out
    dest.mkdir(parents=True, exist_ok=True)
    payload = csv_bytes(romfs, ROOT_ROMFS)
    # mtime=0 prevents non-reproducible gzip outputs.
    (dest / "source_manifest.csv.gz").write_bytes(gzip.compress(payload, compresslevel=9, mtime=0))
    (dest / "source_inventory_summary.json").write_text(
        json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({
        "romfs_count": romfs_s["file_count"], "romfs_bytes": romfs_s["total_bytes"],
        "exefs_count": exefs_s["file_count"], "exefs_bytes": exefs_s["total_bytes"],
        "folders": romfs_s["top_level_folders"],
        "collision_count": len(romfs_s["casefold_path_collisions"]),
        "sha256": hashlib.sha256(payload).hexdigest(),
    }, ensure_ascii=False, indent=2))
    if len(romfs) == 0:
        raise SystemExit("ERROR: empty RomFS Git tree")
    if romfs_s["casefold_path_collisions"]:
        raise SystemExit("ERROR: Windows/casefold filename collisions detected")


if __name__ == "__main__":
    main()
