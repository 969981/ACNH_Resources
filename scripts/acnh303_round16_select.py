#!/usr/bin/env python3
"""R16 exact no-repeat selection against R15 media + R14 BARS cumulative history.

This script selects original RomFS sources; it does NOT claim conversions.
No git cat-file or ls-tree -l: never download unrelated huge source blobs.
"""
from __future__ import annotations
import argparse
import gzip
import hashlib
import json
import subprocess
from pathlib import Path

NCA = "e10617820db06889e1638499478da0de_NCA"
ROOT = Path("derived/3.0.3")
MEDIA = ROOT / "media_round15_cumulative/source_manifest.jsonl.gz"
BARS14 = ROOT / "bars_round14_cumulative/source_manifest.jsonl.gz"
CANDIDATES = {("Model", ".zs"), ("Layout", ".zs"),
              ("Sound", ".bwav"), ("Sound", ".bars")}
BARS_TYPE = "acnh303-BARS-BWAV-real-PCM-v1"

def json_lines(path: Path):
    with gzip.open(path, "rt", encoding="utf-8") as file:
        for line in file:
            if line.strip():
                yield json.loads(line)

def load_exclusions(category: str, suffix: str):
    if suffix != ".bars":
        media = list(json_lines(MEDIA))
        old = {row["source_path"] for row in media}
        if len(media) != 1576 or len(old) != 1576:
            raise ValueError("R15 cumulative media baseline is not 1,576 unique sources")
        return old
    # R14 BARS manifest holds *new R14 sources*, not the older 104.
    r8 = json.loads((ROOT / "bars_audio_round8/report.json").read_text("utf-8"))
    by_stage = [
        {row["source_path"] for row in r8["records"]},
        {row["source_path"] for row in json_lines(ROOT / "round9_cumulative/source_manifest.jsonl.gz")
         if row.get("source_type") == BARS_TYPE},
        {row["source_path"] for row in json_lines(ROOT / "bars_round10_cumulative/source_manifest.jsonl.gz")
         if row.get("source_type") == BARS_TYPE},
        {row["source_path"] for row in json_lines(BARS14)
         if row.get("source_type") == BARS_TYPE},
    ]
    if [len(x) for x in by_stage] != [8, 32, 64, 16]:
        raise ValueError("R8/R9/R10/R14 BARS history does not match audited source counts")
    union = set().union(*by_stage)
    if len(union) != 120:
        raise ValueError("BARS source collision across historical stages")
    return union

def select(category: str, suffix: str, shard: int, shards: int,
           max_count: int, all_remaining: bool, checkout: bool = True):
    if ((category, suffix) not in CANDIDATES
            or shards < 1 or not 0 <= shard < shards or not 1 <= max_count <= 100):
        raise ValueError("invalid category, suffix, shard count, or limit")
    if all_remaining and (category, suffix) != ("Sound", ".bwav"):
        raise ValueError("all_remaining is allowed only for standalone BWAV")
    excluded = load_exclusions(category, suffix)
    prefix = f"{NCA}/1/{category}/"
    raw = subprocess.run(["git", "ls-tree", "-rz", "HEAD", "--", prefix],
                         capture_output=True, check=True).stdout
    remaining = []
    for entry in raw.split(b"\0"):
        if not entry:
            continue
        header, rawpath = entry.split(b"\t", 1)
        if not header.startswith(b"100644 blob "):
            continue
        if not rawpath.lower().endswith(suffix.encode("utf-8")):
            continue
        path = rawpath.decode("utf-8")
        if not path.startswith(prefix):
            continue
        relative = path[len(NCA) + 3:]
        if relative not in excluded:
            remaining.append(path)
    remaining.sort()
    if len(remaining) != len(set(remaining)):
        raise ValueError("duplicate source path in git tree")
    if all_remaining and len(remaining) != 222:
        raise ValueError(f"expected exactly 222 remaining standalone BWAV, got {len(remaining)}")
    # Index modulo the shard count balances final 222 BWAV: six shards
    # select 19 and six select 18. Unlike hash modulo, no shard is empty.
    chosen = [name for i, name in enumerate(remaining) if i % shards == shard]
    if not all_remaining:
        chosen = chosen[:max_count]
        if len(chosen) != max_count:
            raise ValueError(f"only {len(chosen)} fresh sources in shard {shard}/{shards}")
    if not chosen:
        raise ValueError("empty selection")
    if checkout:
        specs = ["/scripts/", "/derived/"] + ["/" + p for p in chosen]
        subprocess.run(["git", "sparse-checkout", "set", "--no-cone", "--stdin"],
                       input=("\n".join(specs) + "\n").encode(), check=True)
    result = {
        "schema": "acnh303-r16-no-repeat-originals-v1",
        "category": category, "suffix": suffix, "shard": shard, "shards": shards,
        "selected_files": len(chosen), "max_count": len(chosen),
        "paths": chosen, "remaining_before_r16": len(remaining),
        "excluded_prior_tested": len(excluded),
        "selection_rule": "sort all unmeasured Git tree originals, index mod shard count",
        "claims": "selected originals only; not proof of conversion",
    }
    return result

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--category", required=True, choices=["Model", "Layout", "Sound"])
    p.add_argument("--suffix", required=True, choices=[".zs", ".bwav", ".bars"])
    p.add_argument("--shard", type=int, required=True)
    p.add_argument("--shards", type=int, required=True)
    p.add_argument("--max-count", type=int, default=12)
    p.add_argument("--all-remaining", action="store_true")
    p.add_argument("--no-checkout", action="store_true")
    a = p.parse_args()
    chosen = select(a.category, a.suffix, a.shard, a.shards, a.max_count,
                    a.all_remaining, not a.no_checkout)
    Path("selection.json").write_text(json.dumps(chosen, indent=2, ensure_ascii=False,
                                                  sort_keys=True) + "\n", "utf-8")
    print("R16 SELECTED", a.category, a.suffix, a.shard,
          chosen["selected_files"], "of", chosen["remaining_before_r16"])

if __name__ == "__main__":
    main()
