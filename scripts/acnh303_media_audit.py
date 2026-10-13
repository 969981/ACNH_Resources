#!/usr/bin/env python3
"""Strict, cumulative 3.0.3 GLB/PNG/WAV run auditor.

This reports *measured L3 media coverage* against the immutable 103,400-source
inventory. It never upgrades a parent SARC to fully decoded merely because a
BFRES/BNTX leaf succeeded. Previous and current shard reports can be combined
only when their original paths do not overlap.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import gzip
import hashlib
import json
from pathlib import Path

NCA = "e10617820db06889e1638499478da0de_NCA"
TARGET_SUFFIX = {"Model": ".zs", "Layout": ".zs", "Sound": ".bwav"}
TARGET_FORMAT = {"Model": "bfres", "Layout": "bntx", "Sound": "bwav"}
STATES = {"converted_media", "partial_media", "failed", "no_target_leaf"}
TOTAL_ROMFS = 103400


def files_under(path: Path, name: str):
    return sorted(path.rglob(name)) if path.exists() else []


def error_category(message: str):
    s = message.lower()
    for pattern, name in (
        ("timed out", "timeout"), ("timeout", "timeout"),
        ("exceeds", "size_limit"), ("not found", "missing_tool_or_file"),
        ("no source conversion manifest", "no_manifest"),
        ("source sha", "hash_mismatch"), ("no output file", "no_output"),
        ("external converter error", "native_decoder_error"),
        ("png", "png_decode_or_validation"),
        ("glb", "glb_decode_or_validation"),
        ("wav", "wav_decode_or_validation"),
        ("unsupported", "unsupported_codec_or_type"),
    ):
        if pattern in s:
            return name
    return "other"


def do_audit(paths: list[Path], original_inventory: Path, expected_shards: int):
    with gzip.open(original_inventory, "rt", encoding="utf-8", newline="") as stream:
        original = {}
        for row in csv.DictReader(stream):
            key = row["source_relative_path"]
            if key in original:
                raise ValueError("duplicate original source inventory path: " + key)
            original[key] = int(row["source_size"])
    if len(original) != TOTAL_ROMFS:
        raise ValueError(f"original tree inventory count mismatch: {len(original)}")
    candidates = defaultdict(dict)
    for name, size in original.items():
        for group, suffix in TARGET_SUFFIX.items():
            if name.startswith(group + "/") and name.lower().endswith(suffix):
                candidates[group][name] = size

    reports = []
    total_shards = set()
    rows = {}
    for base in paths:
        manifests = files_under(base, "manifest.json")
        summaries = files_under(base, "summary.json")
        if not manifests or len(manifests) != len(summaries):
            raise ValueError(f"missing or unmatched manifests for {base}: {len(manifests)} / {len(summaries)}")
        for filename in manifests:
            shard_summary = filename.with_name("summary.json")
            if not shard_summary.is_file():
                raise ValueError(f"missing adjacent summary: {filename}")
            summary = json.loads(shard_summary.read_text(encoding="utf-8"))
            group = summary["group"]
            shard = (str(base), group, summary["shard"], summary["total_shards"])
            if shard in total_shards:
                raise ValueError(f"duplicate group/shard report: {shard}")
            total_shards.add(shard)
            expected_count = summary["selected_source_count"]
            items = json.loads(filename.read_text(encoding="utf-8"))
            if expected_count != len(items) or summary["actual_source_count"] != len(items):
                raise ValueError(f"manifest source count differs from selection: {filename}")
            if summary["target_format"] != TARGET_FORMAT.get(group) or summary["suffix"] != TARGET_SUFFIX[group]:
                raise ValueError(f"invalid target/suffix in shard: {filename}")
            for row in items:
                name = row["source_path"]
                if name not in candidates[group] or row["source_bytes"] != candidates[group][name]:
                    raise ValueError(f"not in Git tree/size mismatch: {name}")
                if name in rows:
                    raise ValueError(f"same source was selected twice across runs: {name}")
                if row["format"] != TARGET_FORMAT[group] or row["status"] not in STATES:
                    raise ValueError(f"bad conversion state or format: {name}")
                if len(row["sha256"]) != 64 or not all(c in "0123456789abcdef" for c in row["sha256"]):
                    raise ValueError(f"invalid SHA-256: {name}")
                for out in row["validated_outputs"]:
                    actual_type = out.get("validation", {}).get("type")
                    expected_type = {"bfres": "glb", "bntx": "png", "bwav": "wav"}[row["format"]]
                    # Switch BFRES may have no FMDL/FSHP/FVTX, yet embed a
                    # complete BNTX. Count its pixel-validated PNG as a
                    # texture-only media export, never as a GLB model.
                    legitimate_texture_only = (
                        group == "Model" and actual_type == "png"
                        and row.get("source_media_class") == "texture_only_fres_bntx"
                        and out.get("validation", {}).get("pixel_decode") == "Pillow.Image.load")
                    if actual_type != expected_type and not legitimate_texture_only:
                        raise ValueError(f"output format not verified: {name}")
                    if out.get("size_bytes",0) <= 0 or len(out.get("sha256","")) != 64:
                        raise ValueError(f"output size/hash missing: {name}")
                rows[name] = row
            reports.append({"source": str(filename), "group": group, "count": len(items),
                            "shard": summary["shard"], "total_shards": summary["total_shards"]})
    if expected_shards and len(reports) != expected_shards:
        raise ValueError(f"expected {expected_shards} shard reports, got {len(reports)}")
    if len(rows) != sum(r["count"] for r in reports):
        raise ValueError("source counts not unique")

    by_format = {}
    errors = []
    for group in TARGET_SUFFIX:
        source_rows = [r for k,r in rows.items() if k.startswith(group + "/")]
        states = Counter(r["status"] for r in source_rows)
        error_counts = Counter()
        sample_failed = []
        for record in source_rows:
            for error in record.get("parser_errors", []):
                category = error_category(error.get("error",""))
                error_counts[category] += 1
                errors.append({"source": record["source_path"],"format": record["format"],
                               "class": category, "member": error.get("member",""),
                               "message": error.get("error","")})
                if len(sample_failed) < 25:
                    sample_failed.append({"source":record["source_path"],"error":error.get("error","")})
        validated = [o for r in source_rows for o in r["validated_outputs"]]
        total_sources = len(candidates[group])
        successful = states["converted_media"] + states["partial_media"]
        by_format[group] = {
            "candidate_source_count": total_sources,
            "measured_source_count": len(source_rows),
            "not_yet_measured_sources": total_sources-len(source_rows),
            "valid_media_source_count": successful,
            "measured_source_success_rate": (successful / len(source_rows)) if source_rows else None,
            "full_candidate_media_coverage_lower_bound": successful / total_sources if total_sources else None,
            "unconverted_measured_sources": len(source_rows) - successful,
            "status_counts": dict(states),
            "verified_media_output_count": len(validated),
            "verified_media_output_bytes": sum(o["size_bytes"] for o in validated),
            "error_categories": dict(error_counts.most_common()),
            "example_errors": sample_failed,
        }
    total_outputs = sum(x["verified_media_output_count"] for x in by_format.values())
    audited_sources = sum(x["measured_source_count"] for x in by_format.values())
    if audited_sources != len(rows):
        raise ValueError("orphan source outside media format groups")
    result = {
        "schema":"acnh303-media-l3-coverage-v2",
        "original_romfs_file_count": TOTAL_ROMFS,
        "scope": "L3 media conversion by format, NOT L0/L1/L2 source coverage",
        "source_files_audited":audited_sources,
        "shard_reports":len(reports),
        "verified_media_output_files":total_outputs,
        "verified_media_output_bytes":sum(x["verified_media_output_bytes"] for x in by_format.values()),
        "by_format":by_format,
        "limitations": [
            "Not-yet-measured candidates remain unknown, never 'converted'",
            "no_target_leaf means the selected archive has no requested media type",
            "partial_media has at least one validated media leaf but some other media leaf failed",
            "nintoolbox GLB validation checks genuine geometry/accessors but not visual material/rig fidelity",
            "Native converter outputs are validated in each shard; aggregate relies on SHA-256-carrying shard reports",
        ],
        "reports": reports,
    }
    return result, rows, errors


def main():
    p=argparse.ArgumentParser()
    p.add_argument("--inventory",type=Path,required=True)
    p.add_argument("--reports",type=Path,action="append",required=True)
    p.add_argument("--expected-shards",type=int,required=True)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    result,rows,errors=do_audit(args.reports,args.inventory,args.expected_shards)
    args.out.mkdir(parents=True,exist_ok=True)
    (args.out/"coverage.json").write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    with (args.out/"problems.csv").open("w",encoding="utf-8",newline="") as file:
        writer=csv.writer(file)
        writer.writerow(["source","format","class","member","message"])
        for error in sorted(errors,key=lambda x:(x["format"],x["source"],x["member"])):
            writer.writerow([error[x] for x in ("source","format","class","member","message")])
    with (args.out/"source_status.csv").open("w",encoding="utf-8",newline="") as file:
        writer=csv.writer(file)
        writer.writerow(["source","format","status","sha256","source_bytes","media_files","output_bytes"])
        for name,r in sorted(rows.items()):
            writer.writerow([name,r["format"],r["status"],r["sha256"],r["source_bytes"],
                             len(r["validated_outputs"]),
                             sum(o["size_bytes"] for o in r["validated_outputs"])])
    with (args.out/"source_manifest.jsonl.gz").open("wb") as file:
        with gzip.GzipFile(filename="",mode="wb",fileobj=file,mtime=0,compresslevel=9) as stream:
            for name,row in sorted(rows.items()):
                stream.write((json.dumps(row,ensure_ascii=False,sort_keys=True)+"\n").encode())
    print(json.dumps({k:v for k,v in result.items() if k!="reports"},ensure_ascii=False,indent=2))
    return 0


if __name__=="__main__":
    raise SystemExit(main())
