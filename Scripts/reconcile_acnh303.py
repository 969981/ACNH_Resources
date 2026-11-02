#!/usr/bin/env python3
"""Overlay independently reverified ACNH 3.0.3 parser reruns on the 103,400-file base audit.

Never count an Actions "partial" as decoded GLB/PNG/WAV. Original SHA-256 and
size are checked against the immutable baseline before source status is replaced.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import gzip
import hashlib
import json
from pathlib import Path


def read_jsonlines_gz(path: Path):
    with gzip.open(path, "rt", encoding="utf-8") as stream:
        for line in stream:
            if line.strip():
                yield json.loads(line)


def dump_gzip_jsonlines(path: Path, items):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("wb") as raw:
        with gzip.GzipFile(filename="", mode="wb", fileobj=raw, compresslevel=9, mtime=0) as compressed:
            for record in items:
                compressed.write((json.dumps(record, sort_keys=True, ensure_ascii=False) + "\n").encode("utf-8"))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("."))
    args = parser.parse_args()
    root = args.root.resolve()
    original = root / "derived/3.0.3/asset_batch_runs/source_run_manifest.jsonl.gz"
    bdli = root / "derived/3.0.3/bdli_full/source_manifest.jsonl.gz"
    event = root / "derived/3.0.3/eventflow/EventFlow/complete/manifest.json"
    sound = root / "derived/3.0.3/sound_hotfix/Sound/five_bars/manifest.json"
    inv = root / "derived/3.0.3/inventory/source_manifest.csv.gz"
    for p in (original, bdli, event, sound, inv):
        if not p.is_file():
            parser.error(f"Missing validation input: {p}")

    with gzip.open(inv, "rt", encoding="utf-8") as f:
        expected = {row["source_relative_path"]: int(row["source_size"]) for row in csv.DictReader(f)}
    main_records = {}
    for record in read_jsonlines_gz(original):
        path = record["source_path"]
        if path in main_records:
            raise RuntimeError(f"Original manifest duplicate: {path}")
        main_records[path] = record

    overlay = [
        ("bdli_full", list(read_jsonlines_gz(bdli)), 36708, "BDLI/"),
        ("eventflow_complete", json.loads(event.read_text("utf-8")), 877, "EventFlow/"),
        ("sound_5_trailing_nul", json.loads(sound.read_text("utf-8")), 5, "Sound/"),
    ]
    replace_count = {}
    for label, records, size, prefix in overlay:
        if len(records) != size:
            raise RuntimeError(f"Overlay {label} expected {size}, got {len(records)}")
        seen = set()
        for record in records:
            name = record["source_path"]
            if name in seen or not name.startswith(prefix) or name not in main_records:
                raise RuntimeError(f"Invalid overlay {label} source: {name}")
            seen.add(name)
            old = main_records[name]
            if record["source_size"] != old["source_size"] or record["source_sha256"] != old["source_sha256"]:
                raise RuntimeError(f"Original SHA-256/size changed during overlay: {name}")
            main_records[name] = record
        replace_count[label] = len(records)

    paths = set(main_records)
    missing = sorted(set(expected) - paths)
    extra = sorted(paths - set(expected))
    mismatched = sorted(p for p in paths & set(expected) if main_records[p]["source_size"] != expected[p])
    count = Counter(record["status"] for record in main_records.values())
    folders = Counter(path.split("/", 1)[0] for path in main_records)
    errors = sorted((r for r in main_records.values() if r["status"] == "failed"), key=lambda r: r["source_path"])
    summary = {
        "baseline_source_count": len(expected),
        "processed_source_count": len(paths),
        "missing": len(missing),
        "extra": len(extra),
        "size_mismatch": len(mismatched),
        "status_counts": dict(count),
        "top_level_folders": dict(sorted(folders.items())),
        "rerun_overlays": replace_count,
        "semantic_boundary": "full L0 source coverage and error-free current L1/L2 parsers only; do NOT infer that 100k partial media files became PNG/GLB/WAV.",
        "source_manifest": "source_run_manifest.jsonl.gz",
        "remaining_failed_first_100": [{"path": r["source_path"], "error": r.get("notes", "")} for r in errors[:100]],
    }
    out = root / "derived/3.0.3/effective"
    out.mkdir(parents=True, exist_ok=True)
    dump_gzip_jsonlines(out / "source_run_manifest.jsonl.gz", (main_records[k] for k in sorted(main_records)))
    (out / "coverage.json").write_text(json.dumps(summary, sort_keys=True, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    with (out / "failed.csv").open("w", encoding="utf-8", newline="") as f:
        w = csv.writer(f)
        w.writerow(["source_path", "source_sha256", "error"])
        for r in errors:
            w.writerow([r["source_path"], r["source_sha256"], r.get("notes", "")])
    print(json.dumps(summary, ensure_ascii=False, indent=2))
    if len(expected) != 103400 or missing or extra or mismatched or errors:
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
