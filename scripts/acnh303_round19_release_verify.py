#!/usr/bin/env python3
"""Rehash every *new* R19 media, UI2D, BARS WAV and AMTA asset before Release."""
from __future__ import annotations
import argparse
from collections import Counter
import gzip
import hashlib
import json
from pathlib import Path, PurePosixPath

BASE = Path("derived/3.0.3")
MEDIA_OLD = BASE / "media_round18_cumulative/source_manifest.jsonl.gz"
MEDIA_NEW = BASE / "media_round19_cumulative/source_manifest.jsonl.gz"
BARS_NEW = BASE / "bars_round19_cumulative/source_manifest.jsonl.gz"
UI_NEW = BASE / "layout_semantic_round19_cumulative/coverage.json"

def rows(p):
    with gzip.open(p, "rt", encoding="utf-8") as f:
        for line in f:
            if line.strip():
                yield json.loads(line)

def verify(downloads: Path):
    roots = sorted(d for d in downloads.iterdir() if d.is_dir() and d.name.startswith("r19-data-"))
    if len(roots) != 30:
        raise ValueError(f"expected 30 original conversion artifact shards, got {len(roots)}")
    files = {}
    for root in roots:
        for p in root.rglob("*"):
            if p.is_symlink():
                raise ValueError("symlink in downloaded artifact: " + str(p))
            if not p.is_file():
                continue
            rel = p.relative_to(root).as_posix()
            if rel in files:
                raise ValueError("duplicate decoded target path across shards: " + rel)
            files[rel] = p
    def check(path, digest, size=None):
        q = PurePosixPath(path)
        if q.is_absolute() or ".." in q.parts or not q.parts or not q.parts[0].startswith("Unpack_"):
            raise ValueError("invalid output path: " + path)
        real = files.get(path)
        if not real:
            raise ValueError("actual decoded output not found in downloaded shards: " + path)
        if size is not None and real.stat().st_size != size:
            raise ValueError("output byte count differs: " + path)
        actual = hashlib.sha256(real.read_bytes()).hexdigest()
        if actual != digest:
            raise ValueError("output SHA256 differs: " + path)
    old = {r["source_path"] for r in rows(MEDIA_OLD)}
    if len(old) != 2974:
        raise ValueError("R16 baseline mismatch")
    fresh = [r for r in rows(MEDIA_NEW) if r["source_path"] not in old]
    if len(fresh) != 584 or len({r["source_path"] for r in fresh}) != 584:
        raise ValueError("R19 new media identities mismatch")
    counts = Counter()
    for r in fresh:
        for target in r["validated_outputs"]:
            check(target["path"], target["sha256"], target["size_bytes"])
            counts[target["validation"]["type"]] += 1
    bars = list(rows(BARS_NEW))
    if len(bars) != 160 or len({r["source_path"] for r in bars}) != 80:
        raise ValueError("missing R19 paired BARS/AMTA originals")
    seen_bars = set()
    for record in bars:
        ident = (record["source_type"], record["source_path"])
        if ident in seen_bars:
            raise ValueError("repeated BARS member report")
        seen_bars.add(ident)
        for m in record["members"]:
            if m["status"] == "converted_pcm_wav":
                check(m["output_path"], m["output_sha256"], m["output_size"])
                counts["bars_pcm_wav"] += 1
            elif m["status"] == "lossless_amta_extracted":
                check(m["output_path"], m["amta_sha256"], m["original_native_member_bytes"])
                counts["lossless_amta_v5"] += 1
    layouts = json.loads(UI_NEW.read_text("utf-8"))["source_records"]
    if len(layouts) != 72 or len({r["source_path"] for r in layouts}) != 72:
        raise ValueError("R19 UI2D source identities mismatch")
    media_by_path = {r["source_path"]: r["sha256"] for r in fresh}
    for row in layouts:
        if row["source_sha256"] != media_by_path[row["source_path"]]:
            raise ValueError("UI2D source SHA differs from media census")
        for leaf in row["leaves"]:
            if "output_path" in leaf:
                check(leaf["output_path"], leaf["output_sha256"])
                counts["ui2d_structured_json"] += 1
    if counts["wav"] != 0:
        raise ValueError("no standalone BWAV should be selected in R19")
    return {"schema": "acnh303-r19-permanent-release-rehash-v1",
            "artifact_shards_checked": len(roots),
            "fresh_core_media_sources": len(fresh),
            "fresh_bars_originals": 80,
            "fresh_layout_originals": len(layouts),
            "verified_outputs_by_type": dict(sorted(counts.items())),
            "limitations": "Exact output files verified. Native animation and AMTA playback semantics are not claimed."}

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--downloads", type=Path, required=True)
    p.add_argument("--out", type=Path, default=Path("release_validation.json"))
    a = p.parse_args()
    result = verify(a.downloads)
    a.out.write_text(json.dumps(result, ensure_ascii=False, sort_keys=True, indent=2) + "\n", "utf-8")
    print("R19_RELEASE_VERIFIED", json.dumps(result))

if __name__ == "__main__":
    main()
