#!/usr/bin/env python3
"""Read-only R8 (1,112) vs R19 (3,558) cumulative media source reconciliation.

The Release SHA256SUMS authenticates the published manifests, not a new
rehash of the original ROM. Never import the R8 cumulative count directly.
"""
from __future__ import annotations

import argparse
from collections import Counter
import gzip
import json
from pathlib import Path

from acnh303_history_sha_merge import (
    canonical, checked_sha, checked_size, each_gz_row, release_sha,
)

R8_TAG = "acnh303-l3-layout-ui2d-bwav-round8-20261014"
R19_TAG = "acnh303-r19-animation-native-20261014"


def read_media(directory: Path, *, tag: str, expected_rows: int) -> tuple[dict, dict]:
    path = directory / "media_source_manifest.jsonl.gz"
    checksums = directory / "SHA256SUMS.txt"
    if not path.is_file() or not checksums.is_file():
        raise FileNotFoundError(f"missing published {tag} original-source evidence")
    digest = release_sha(path, checksums)
    records = {}
    for row in each_gz_row(path, max_rows=expected_rows):
        name = canonical(row["source_path"])
        if name in records or name.split("/", 1)[0] not in ("Model", "Layout", "Sound"):
            raise ValueError(f"duplicate or unsupported {tag} original source: {name}")
        outputs = row.get("validated_outputs", [])
        if not isinstance(outputs, list) or len(outputs) > 200000:
            raise ValueError(f"unbounded historical outputs: {name}")
        records[name] = {
            "source_path": name,
            "sha256": checked_sha(row.get("sha256"), "media original"),
            "source_bytes": checked_size(row.get("source_bytes")),
            "claimed_validated_media_count": len(outputs),
            "historical_status": row.get("status", "unknown"),
        }
    if len(records) != expected_rows:
        raise ValueError(f"unexpected {tag} source count: {len(records)} != {expected_rows}")
    return records, {
        "tag": tag,
        "asset_sha256": digest,
        "source_manifest_rows": len(records),
    }


def read_imported_ledger(path: Path) -> dict:
    rows = {}
    with gzip.open(path, "rt", encoding="utf8") as stream:
        for index, line in enumerate(stream):
            if index >= 103400:
                raise ValueError("unexpected oversized source ledger")
            if not line.strip():
                continue
            row = json.loads(line)
            name = canonical(row["source_path"])
            if name in rows:
                raise ValueError("duplicate existing historical ledger source")
            rows[name] = {
                "sha256": checked_sha(row.get("source_sha256")),
                "source_bytes": checked_size(row.get("source_bytes")),
            }
    return rows


def reconcile(r8: dict, r19: dict, ledger: dict, *,
              r8_proof: dict | None = None,
              r19_proof: dict | None = None) -> dict:
    """Preserve both historical lineages; never change any imported evidence."""
    def identity(row):
        return row["sha256"], row["source_bytes"]

    intersection = set(r8) & set(r19)
    in_ledger = set(r8) & set(ledger)
    for name in sorted(intersection):
        if identity(r8[name]) != identity(r19[name]):
            raise ValueError(f"CRITICAL R8/R19 original source identity conflict: {name}")
    for name in sorted(in_ledger):
        if identity(r8[name]) != identity(ledger[name]):
            raise ValueError(f"CRITICAL R8/imported-ledger identity conflict: {name}")
    by_category = Counter(name.split("/", 1)[0] for name in r8)
    missing_in_r19 = sorted(set(r8) - set(r19))
    missing_in_ledger = sorted(set(r8) - set(ledger))
    return {
        "schema": "acnh303-r8-r19-cumulative-media-identity-reconciliation-v1",
        "game_version": "3.0.3",
        "r8_release": r8_proof,
        "r19_release": r19_proof,
        "r8_sources": len(r8),
        "r19_media_sources": len(r19),
        "preexisting_imported_ledger_sources": len(ledger),
        "r8_by_category": dict(sorted(by_category.items())),
        "r8_in_r19_same_original_identity": len(intersection),
        "r8_not_in_r19": len(missing_in_r19),
        "r8_in_current_ledger_same_original_identity": len(in_ledger),
        "r8_not_in_current_ledger": len(missing_in_ledger),
        "r8_not_in_r19_paths": missing_in_r19,
        "r8_not_in_current_ledger_paths": missing_in_ledger,
        "new_imported_ledger_source_records": 0,
        "rom_bytes_rehashed_in_current_ci": False,
        "l3_new_conversion_performed": False,
        "native_runtime_semantics_verified": False,
        "warning": "R8 is a historical cumulative census. Missing paths are audit candidates, NOT counted new successes.",
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--r8", type=Path, required=True)
    p.add_argument("--r19", type=Path, required=True)
    p.add_argument("--ledger", type=Path, required=True)
    p.add_argument("--coverage", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    r8, r8_proof = read_media(args.r8, tag=R8_TAG, expected_rows=1112)
    r19, r19_proof = read_media(args.r19, tag=R19_TAG, expected_rows=3558)
    ledger = read_imported_ledger(args.ledger)
    coverage = json.loads(args.coverage.read_text("utf8"))
    if (len(ledger) != coverage.get("imported_unique_original_sources")
            or coverage.get("not_in_imported_per_source_evidence")
            != coverage.get("original_git_tree_sources", 0) - len(ledger)):
        raise ValueError("existing authoritative ledger/coverage disagree")
    output = reconcile(r8, r19, ledger, r8_proof=r8_proof, r19_proof=r19_proof)
    output["coverage_baseline"] = {
        "imported_unique_original_sources": len(ledger),
        "not_in_imported_per_source_evidence": coverage["not_in_imported_per_source_evidence"],
        "original_git_tree_sources": coverage["original_git_tree_sources"],
    }
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(output, ensure_ascii=False, indent=2, sort_keys=True) + "\n",
                        encoding="utf8")
    print(json.dumps({k: v for k, v in output.items()
                      if not k.endswith("_paths")}, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
