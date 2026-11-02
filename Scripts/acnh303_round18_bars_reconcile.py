#!/usr/bin/env python3
"""Reconcile R18 BARS WAV/AMTA with R16 and the authoritative RomFS census."""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import gzip
import json
from pathlib import Path

ROOT = Path("derived/3.0.3")
BW = "acnh303-BARS-BWAV-real-PCM-v1"
AM = "acnh303-bars-amta-lossless-v1"

def issha(s):
    return isinstance(s, str) and len(s) == 64 and all(c in "0123456789abcdef" for c in s)

def records(path):
    with gzip.open(path, "rt", encoding="utf-8") as file:
        for line in file:
            if line.strip():
                yield json.loads(line)

def history():
    r8 = json.loads((ROOT / "bars_audio_round8/report.json").read_text("utf-8"))
    groups = [
        {r["source_path"] for r in r8["records"]},
        {r["source_path"] for r in records(ROOT / "round9_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type") == BW},
        {r["source_path"] for r in records(ROOT / "bars_round10_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type") == BW},
        {r["source_path"] for r in records(ROOT / "bars_round14_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type") == BW},
        {r["source_path"] for r in records(ROOT / "bars_round16_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type") == BW},
        {r["source_path"] for r in records(ROOT / "bars_round17_cumulative/source_manifest.jsonl.gz")
         if r.get("source_type") == BW},
    ]
    if list(map(len, groups)) != [8, 32, 64, 16, 36, 60]:
        raise ValueError("unexpected BARS baseline breakdown")
    names = set().union(*groups)
    if len(names) != 216:
        raise ValueError("historical BARS sources overlap")
    return names

def audit(collected: Path, output: Path, expected_shards: int, per_shard: int):
    base = json.loads((ROOT / "bars_round17_cumulative/coverage.json").read_text("utf-8"))
    if (base["bars_tested_total"], base["cumulative_bars_pcm_wav"],
        base["amta_v5_known_count"]) != (216, 2172, 2153):
        raise ValueError("R16 BARS coverage mismatch")
    old = history()
    with gzip.open(ROOT / "inventory/source_manifest.csv.gz", "rt",
                   encoding="utf-8", newline="") as file:
        inventory = {r["source_relative_path"]: int(r["source_size"])
                     for r in csv.DictReader(file)}
    if len(inventory) != 103400:
        raise ValueError("incomplete RomFS inventory")
    grouped = defaultdict(list)
    for filename in collected.rglob("report.json"):
        doc = json.loads(filename.read_text("utf-8"))
        if doc.get("schema") in (BW, AM):
            grouped[doc["schema"]].append(doc)
    if any(len(grouped[t]) != expected_shards for t in (BW, AM)):
        raise ValueError("missing report shard of BARS or AMTA")
    sources, counts = {}, Counter()
    for kind in (BW, AM):
        seen = set()
        for batch in grouped[kind]:
            if len(batch["records"]) != per_shard:
                raise ValueError("incomplete BARS/AMTA source shard")
            for row in batch["records"]:
                name = row["source_path"]
                if (not name.startswith("Sound/") or not name.endswith(".bars")
                        or name not in inventory or name in old or name in seen
                        or not issha(row.get("source_sha256"))):
                    raise ValueError("invalid, repeated or previously measured BARS source: " + name)
                seen.add(name)
                source_size = row["original_bytes"] if kind == BW else row["source_bytes"]
                if source_size != inventory[name]:
                    raise ValueError("original BARS source size mismatch " + name)
                if kind == BW and row.get("status") == "parse_failed":
                    counts["bars_parse_failed"] += 1
                if kind == AM and row.get("status") == "bars_parse_failed":
                    counts["amta_bars_parse_failed"] += 1
                for member in row["members"]:
                    state = member.get("status")
                    counts[kind + "_" + str(state)] += 1
                    if kind == BW and state == "converted_pcm_wav":
                        if (not issha(member.get("source_member_sha256")) or
                            not issha(member.get("output_sha256")) or
                            member.get("validation", {}).get("type") != "wav" or
                            member["validation"].get("frames", 0) < 1 or
                            member.get("output_size", 0) < 45):
                            raise ValueError("WAV output validation missing " + name)
                        counts["new_valid_pcm_wav"] += 1
                    if kind == AM and state == "lossless_amta_extracted":
                        if (not issha(member.get("amta_sha256")) or
                            member.get("native", {}).get("version_hex") != "0x0500"):
                            raise ValueError("AMTA v5 bytes not validated " + name)
                        counts["new_valid_amta_v5"] += 1
                sources.setdefault(name, {})[kind] = row
        if len(seen) != expected_shards * per_shard:
            raise ValueError("incomplete unique source set")
    if len(sources) != expected_shards * per_shard:
        raise ValueError("BARS and AMTA do not cover identical source names")
    for name, paired in sources.items():
        if set(paired) != {BW, AM} or paired[BW]["source_sha256"] != paired[AM]["source_sha256"]:
            raise ValueError("BARS/AMTA source SHA mismatch " + name)
    new = len(sources)
    result = {
        "schema": "acnh303-r18-bars-amta-audited-v1",
        "original_bars_inventory": 1696,
        "baseline_bars_tested": 216,
        "new_bars_tested": new,
        "bars_tested_total": 216 + new,
        "remaining_unmeasured_bars": 1696 - 216 - new,
        "prior_valid_bars_pcm_wav": base["cumulative_bars_pcm_wav"],
        "new_valid_bars_pcm_wav": counts["new_valid_pcm_wav"],
        "cumulative_bars_pcm_wav": base["cumulative_bars_pcm_wav"] + counts["new_valid_pcm_wav"],
        "prior_amta_v5": base["amta_v5_known_count"],
        "new_lossless_amta_v5": counts["new_valid_amta_v5"],
        "amta_v5_known_count": base["amta_v5_known_count"] + counts["new_valid_amta_v5"],
        "counts": dict(sorted(counts.items())),
        "limitations": "BARS WAV tracked separately from standalone BWAV. Native AMTA v5 semantics remain unknown.",
    }
    output.mkdir(parents=True, exist_ok=True)
    with (output / "source_manifest.jsonl.gz").open("wb") as file:
        with gzip.GzipFile(fileobj=file, filename="", mode="wb", mtime=0, compresslevel=9) as gz:
            for name in sorted(sources):
                for kind in (BW, AM):
                    row = {"source_type": kind, **sources[name][kind]}
                    gz.write((json.dumps(row, ensure_ascii=False, sort_keys=True) + "\n").encode())
    (output / "coverage.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2, sort_keys=True) + "\n", "utf-8")
    print("R18_BARS_AUDIT", json.dumps(result, ensure_ascii=False))
    return result

def main():
    p = argparse.ArgumentParser()
    p.add_argument("--collected", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--shards", type=int, default=6)
    p.add_argument("--per-shard", type=int, default=10)
    a = p.parse_args()
    audit(a.collected, a.out, a.shards, a.per_shard)

if __name__ == "__main__":
    main()
