#!/usr/bin/env python3
"""Plan the next unattempted ACNH 3.0.3 batch from committed provenance.

Retries with the same source paths count only once. A source that failed or
had no target is still *attempted*, not converted; revisit it separately.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path

CATEGORIES = ("Param", "Model", "Layout", "Sound")
STATES = {"converted", "partial", "failed", "no_output"}


def plan_one(directory: Path, category: str, shard: int, shards: int, count: int) -> dict:
    seen = {}
    total = None
    duplicates = 0
    reports = sorted((directory / category / f"s{shard:03d}-of-{shards:03d}").glob("*.json"))
    for path in reports:
        report = json.loads(path.read_text(encoding="utf-8"))
        selection = report.get("selection", {})
        if (report.get("category") != category or selection.get("category") != category
                or selection.get("shard") != shard or selection.get("shards") != shards):
            raise ValueError(f"mismatched report category/shard: {path}")
        offset = selection["skip_count"]
        matched = selection["matched_in_shard"]
        rows = report["rows"]
        sources = selection["sources"]
        if (not isinstance(offset, int) or offset < 0 or
                not isinstance(matched, int) or matched < 1 or
                not 1 <= len(rows) == len(sources) == report["source_count"] <= 24 or
                offset + len(sources) > matched):
            raise ValueError(f"invalid report bounds: {path}")
        if total is not None and matched != total:
            raise ValueError(f"source candidate total changed for {category}; rebaseline")
        total = matched
        for index, (source, row) in enumerate(zip(sources, rows), offset):
            name = source["path"]
            if row.get("source_path") != name or row.get("status") not in STATES:
                raise ValueError(f"invalid per-source report: {path}")
            prior = seen.get(index)
            if prior is not None:
                if prior != name:
                    raise ValueError(f"overlapping report changed source identity at {index}")
                duplicates += 1
            seen[index] = name
    next_index = 0
    while next_index in seen:
        next_index += 1
    if total is not None and next_index >= total:
        raise ValueError(f"shard exhausted for {category}")
    return {
        "category": category, "shard": shard, "shards": shards,
        "skip_count": next_index, "max_count": count,
        "matched_in_shard": total, "unique_attempted_sources": len(seen),
        "duplicate_retry_rows": duplicates,
        "semantics": "attempted is not converted; zero-output and failures require a separate retry",
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--reports", type=Path, default=Path("UnPack/_meta/batches"))
    parser.add_argument("--shard", type=int, default=0)
    parser.add_argument("--shards", type=int, default=8)
    parser.add_argument("--count", type=int, default=8)
    parser.add_argument("--output", type=Path, default=Path("next-wave.json"))
    args = parser.parse_args()
    if not 1 <= args.count <= 24 or not 1 <= args.shards <= 4096 or not 0 <= args.shard < args.shards:
        parser.error("invalid shard or max_count")
    result = {"schema": "acnh303-resume-plan-v1",
              "categories": [plan_one(args.reports, cat, args.shard, args.shards, args.count)
                             for cat in CATEGORIES]}
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
