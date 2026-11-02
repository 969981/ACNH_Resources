#!/usr/bin/env python3
"""Reconcile actual ROM-derived ACNH 3.0.3 icon batches; do not promote unmatched names."""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path

EXPORTED = {"new_original_rom_icon", "existing_cdn_preserved_native_separately", "existing_identical_png"}
QUARANTINE = "multiple_or_mismatched_native_textures"
FAILED = "rom_source_or_decoder_error"
STATUSES = EXPORTED | {QUARANTINE, FAILED}


class EvidenceError(ValueError):
    pass


def verify(root: Path, evidence: Path, audit: Path, expected_pending: int | None = None) -> dict:
    base = root / evidence
    paths = sorted(base.glob("batch-*.json"))
    if not paths:
        raise EvidenceError("no original ROM batch reports found")
    cursor = json.loads((base / "next-offset.json").read_text(encoding="utf-8"))
    previous_end = 0
    source_count = None
    seen_names, seen_sources = set(), set()
    counts = Counter()
    unresolved = []
    verified_paths = {}
    for path in paths:
        report = json.loads(path.read_text(encoding="utf-8"))
        start, end = int(report["offset"]), int(report["end"])
        total = int(report["source_count"])
        if source_count is None:
            source_count = total
        if source_count != total or start != previous_end or end <= start or end > total:
            raise EvidenceError(f"noncontiguous or inconsistent batch: {path.name}")
        rows = report["items"]
        if len(rows) != end - start or int(report["total_attempted"]) != len(rows):
            raise EvidenceError(f"incorrect evidence row count: {path.name}")
        per_report = Counter()
        for row in rows:
            name, source, status = row["filename"], row["source_path"], row["status"]
            if name in seen_names or source in seen_sources or status not in STATUSES:
                raise EvidenceError(f"duplicate name/source or unknown status: {name}")
            if not row.get("original_rom_native", False):
                raise EvidenceError(f"missing original ROM provenance: {name}")
            seen_names.add(name)
            seen_sources.add(source)
            per_report[status] += 1
            counts[status] += 1
            if status in EXPORTED:
                dest = row.get("output_path") if status != "existing_identical_png" else None
                dest = dest or "assets/images/items/" + name
                target = (root / dest).resolve()
                if not target.is_relative_to(root.resolve()) or not target.is_file():
                    raise EvidenceError(f"original PNG missing or path escapes repository: {dest}")
                actual = hashlib.sha256(target.read_bytes()).hexdigest()
                expected = row.get("native_png_sha256")
                if not expected or expected != actual:
                    raise EvidenceError(f"original PNG SHA-256 mismatch: {dest}")
                if dest in verified_paths and verified_paths[dest] != actual:
                    raise EvidenceError(f"conflicting PNG provenance: {dest}")
                verified_paths[dest] = actual
            elif status == QUARANTINE:
                if not row.get("quarantine_folder") or "native_brti_names" not in row:
                    raise EvidenceError(f"missing quarantine provenance: {name}")
                unresolved.append({"filename": name, "source_path": source, "status": status})
            else:
                if not row.get("error"):
                    raise EvidenceError(f"missing decoder failure: {name}")
                unresolved.append({"filename": name, "source_path": source, "status": status,
                                   "error": row["error"]})
        named = {"original_rom_icon_count": "new_original_rom_icon",
                 "preexisting_different_native_preserved": "existing_cdn_preserved_native_separately",
                 "preexisting_identical": "existing_identical_png",
                 "quarantined": QUARANTINE, "errors": FAILED}
        for field, status in named.items():
            if int(report[field]) != per_report[status]:
                raise EvidenceError(f"incorrect summary count: {path.name}: {field}")
        previous_end = end
    if int(cursor["next_offset"]) != previous_end or int(cursor["total"]) != source_count:
        raise EvidenceError("resume cursor differs from contiguous batch reports")
    pending = None
    if expected_pending is not None:
        doc = json.loads((root / audit).read_text(encoding="utf-8"))
        pending = doc["entries"]
        if len(pending) != expected_pending or int(doc["unmatched_names"]) != expected_pending:
            raise EvidenceError(f"unmatched count changed from {expected_pending}")
        for row in pending:
            if (row["status"] != "pending_original_rom_source_verification" or
                    row["native_png_extracted_for_this_entry"] is not False):
                raise EvidenceError(f"pending candidate incorrectly promoted: {row['filename']}")
            if row["filename"] in seen_names:
                raise EvidenceError(f"pending candidate duplicates direct-ROM batch: {row['filename']}")
    return {
        "schema": "acnh303_original_rom_item_batch_reconciliation_v1",
        "original_rom_batch_count": len(paths),
        "source_count": source_count,
        "sources_attempted": previous_end,
        "sources_not_yet_attempted": source_count - previous_end,
        "verified_original_pngs": sum(counts[s] for s in EXPORTED),
        "verified_distinct_png_paths": len(verified_paths),
        "statuses": dict(sorted(counts.items())),
        "unresolved_processed_sources": unresolved,
        "unmatched_names_pending_original_source_verification": len(pending) if pending is not None else None,
        "all_attempted_sources_exported": not unresolved,
        "pixel_equivalence_to_in_game_ui_verified": False,
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--evidence", type=Path, default=Path("assets/evidence/rom-items"))
    p.add_argument("--audit", type=Path, default=Path("assets/evidence/rom-items/unmatched-candidate-audit.json"))
    p.add_argument("--expect-pending", type=int, default=1254)
    p.add_argument("--out", type=Path, default=Path("assets/evidence/rom-items/reconciliation.json"))
    args = p.parse_args()
    root = args.root.resolve()
    result = verify(root, args.evidence, args.audit, args.expect_pending)
    output = root / args.out
    output.parent.mkdir(parents=True, exist_ok=True)
    serial = json.dumps(result, ensure_ascii=False, indent=2) + "\n"
    if not output.exists() or output.read_text(encoding="utf-8") != serial:
        output.write_text(serial, encoding="utf-8")
    print(json.dumps({k: v for k, v in result.items() if k != "unresolved_processed_sources"}, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (EvidenceError, OSError, KeyError, json.JSONDecodeError) as exc:
        raise SystemExit(f"ROM evidence verification failed: {exc}")
