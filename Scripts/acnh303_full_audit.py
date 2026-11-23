#!/usr/bin/env python3
"""ACNH 3.0.3 L0-L3 source ledger reconciliation against the actual Git tree.

A Git blob ID is not an original SHA-256; L0 inventory is not conversion.
Full strict gate requires exact source set AND all original content independently
read/hash verified, never just 103,400 synthetic rows or optimistic counts.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path
import subprocess

from acnh303_unified import NCA, digest, checked_output, safe_read_ledger
from acnh303_recursive_archive import atomic_write, clean_source


def inventory_from_git(root: Path, git_ref: str = "HEAD") -> dict[str, str]:
    prefix = NCA + "/1/"
    raw = subprocess.check_output(["git", "ls-tree", "-rz", git_ref, "--", prefix], cwd=root)
    result: dict[str, str] = {}
    folded: set[str] = set()
    for entry in raw.split(b"\x00"):
        if not entry:
            continue
        meta, file = entry.split(b"\t", 1)
        pieces = meta.decode("ascii").split()
        if len(pieces) != 3 or pieces[1] != "blob" or pieces[0] != "100644":
            # Symlinks, submodules or unusual permissions must be inspected, not skipped.
            raise ValueError("unsupported file type in immutable Git tree")
        full = file.decode("utf8")
        if not full.startswith(prefix):
            raise ValueError("source escapes expected original root")
        rel = full[len(prefix):]
        if clean_source(rel).as_posix() != rel or rel in result or rel.casefold() in folded:
            raise ValueError("duplicate/nonportable original Git source path: " + rel)
        result[rel] = pieces[2]
        folded.add(rel.casefold())
    return result


def git_blob_sha1(source: Path) -> str:
    h = hashlib.sha1()
    h.update(f"blob {source.stat().st_size}\0".encode("ascii"))
    with source.open("rb") as file:
        for block in iter(lambda: file.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def reconcile(root: Path, out: Path, expected: dict[str, str],
              records: dict[str, dict], *, require_real_sources: bool = False) -> dict:
    source_dir = (root / NCA / "1").resolve()
    remaining = sorted(set(expected) - set(records))
    extra = sorted(set(records) - set(expected))
    errors: list[dict] = []
    levels = Counter()
    statuses = Counter()
    verified_sources = 0
    verified_outputs = 0
    checked_records = 0
    source_groups = defaultdict(lambda: {"original_sources": 0, "ledger_sources": 0,
                                        "sha_verified_sources": 0, "verified_outputs": 0,
                                        "status_counts": Counter()})
    for source_name in expected:
        source_groups[source_name.split("/", 1)[0]]["original_sources"] += 1
    output_owners = {}
    for name in sorted(records):
        row = records[name]
        status = row.get("status", "missing_status")
        level = row.get("evidence_level", "UNSPECIFIED")
        statuses[status] += 1
        levels[level] += 1
        group = source_groups[name.split("/", 1)[0]]
        group["ledger_sources"] += 1
        group["status_counts"][status] += 1
        if name not in expected:
            errors.append({"source": name, "kind": "not_in_original_git_tree"})
            continue
        checked_records += 1
        src = source_dir / clean_source(name)
        if src.is_symlink():
            errors.append({"source": name, "kind": "source_symlink"})
        elif src.is_file():
            if not src.resolve().is_relative_to(source_dir):
                errors.append({"source": name, "kind": "source_path_escape"})
            elif (row.get("source_bytes") != src.stat().st_size or
                  row.get("source_sha256") != digest(src) or
                  git_blob_sha1(src) != expected[name]):
                errors.append({"source": name, "kind": "source_sha_git_blob_or_size_mismatch"})
            else:
                verified_sources += 1
                group["sha_verified_sources"] += 1
        elif require_real_sources:
            errors.append({"source": name, "kind": "original_source_not_checked_out"})
        else:
            # Sparse checkout: source SHA remains unverified on this machine.
            pass
        if row.get("status") == "converted" and not row.get("outputs"):
            errors.append({"source": name, "kind": "false_converted_no_outputs"})
        if row.get("evidence_level") == "L3" and not row.get("outputs"):
            errors.append({"source": name, "kind": "false_l3_without_output"})
        if status == "raw_extracted" and not row.get("outputs"):
            errors.append({"source": name, "kind": "false_raw_extracted_without_outputs"})
        if level == "L1" and status == "converted":
            errors.append({"source": name, "kind": "false_l1_semantic_conversion"})
        for output in row.get("outputs", []):
            try:
                output_path = clean_source(output["path"])
                if output_path.parts[0] != "1":
                    raise ValueError("unexpected output location outside UnPack/1")
                folded_path = output_path.as_posix().casefold()
                previous = output_owners.get(folded_path)
                if previous is not None and previous != name:
                    errors.append({"source": name, "kind": "cross_source_output_collision",
                                   "output": output["path"], "previous_owner": previous})
                output_owners[folded_path] = name
                checked_output(out, output)
                verified_outputs += 1
                group["verified_outputs"] += 1
            except (ValueError, OSError, KeyError):
                errors.append({"source": name, "kind": "output_missing_or_checksum_mismatch",
                               "output": output.get("path", "")})
    by_category = {}
    for category, group in sorted(source_groups.items()):
        by_category[category] = {
            **{k: v for k, v in group.items() if k != "status_counts"},
            "missing_source_ledger_count": group["original_sources"] - group["ledger_sources"],
            "status_counts": dict(group["status_counts"]),
        }
    result = {
        "schema": "acnh303-full-source-git-audit-v1",
        "definition": "L0 Git inventory, L1 raw, L2 structure, L3 real media; never infer L4 native parity",
        "git_original_sources": len(expected),
        "ledger_source_count": len(records),
        "source_records_in_git": checked_records,
        "source_paths_missing_from_ledger": len(remaining),
        "unknown_ledger_source_paths": len(extra),
        "original_sources_byte_and_git_blob_verified": verified_sources,
        "verified_output_files": verified_outputs,
        "by_category": by_category,
        "status_counts": dict(statuses),
        "evidence_level_counts": dict(levels),
        "problems_count": len(errors),
        "problems": errors[:200],
        "missing_source_examples": remaining[:100],
        "unexpected_source_examples": extra[:100],
        "full_l0_record_coverage": (not remaining and not extra and len(records) == len(expected)),
        "full_original_bytes_verified": verified_sources == len(expected),
        "full_l4_semantic_parity": False,
    }
    result["strict_gate_pass"] = (
        result["full_l0_record_coverage"] and result["full_original_bytes_verified"]
        and not errors and statuses["failed"] == 0 and bool(expected)
    )
    return result


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--out", type=Path, default=Path("UnPack"))
    ap.add_argument("--ref", default="HEAD")
    ap.add_argument("--expected-count", type=int, default=103400)
    ap.add_argument("--strict-full", action="store_true",
                    help="Reject missing sources, unchecked bytes, failed/false-positive records")
    args = ap.parse_args()
    root = args.root.resolve()
    out = (root / args.out).resolve()
    expected = inventory_from_git(root, args.ref)
    records = safe_read_ledger(out / "_meta" / "unified" / "source_manifest.jsonl")
    result = reconcile(root, out, expected, records,
                       require_real_sources=args.strict_full)
    if len(expected) != args.expected_count:
        result["problems_count"] += 1
        result["problems"].append({"kind": "original_tree_count_mismatch",
                                   "expected": args.expected_count, "actual": len(expected)})
        result["strict_gate_pass"] = False
    destination = out / "_meta" / "unified"
    destination.mkdir(parents=True, exist_ok=True)
    atomic_write(destination / "coverage.json",
                 (json.dumps(result, ensure_ascii=False, indent=2, sort_keys=True) + "\n").encode())
    lines = [["source", "kind", "output", "expected", "actual"]]
    lines.extend([[str(row.get(field, "")) for field in lines[0]]
                  for row in result["problems"]])
    with (destination / "problems.csv").open("w", newline="", encoding="utf8") as file:
        csv.writer(file).writerows(lines)
    print(json.dumps({k: v for k, v in result.items()
                      if k not in ("problems", "missing_source_examples",
                                   "unexpected_source_examples")}, ensure_ascii=False, indent=2))
    return 1 if args.strict_full and not result["strict_gate_pass"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
