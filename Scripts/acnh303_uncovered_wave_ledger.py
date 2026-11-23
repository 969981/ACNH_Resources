#!/usr/bin/env python3
"""Import real CI Model/BDLI sharded source identities into the SHA dedup ledger.

All counts are per-original-path, not per converted GLB/PNG or LBLI section.
Current CI input is source SHA256/Git blob checked; future reconciliation does
NOT claim it re-read original bytes or re-ran the Nintendo game.
"""
from __future__ import annotations

from collections import Counter
import hashlib
import json
from pathlib import Path
import re

from acnh303_history_sha_merge import canonical, checked_sha, checked_size
from acnh303_uncovered_model_bdli_wave import SCHEMA, MODEL_COUNT, BDLI_COUNT, TOTAL_ORIGINALS

REPORT = re.compile(r"source_wave_shard_(\d{3})_run_(\d+)\.json$")


def read_reports(directory: Path, expected: dict[str, str]) -> tuple[list[dict], dict]:
    reports = sorted(Path(directory).glob("source_wave_shard_*.json"))
    if not reports:
        return [], {"status": "no_committed_CI_shard_reports"}
    if len(reports) > 64:
        raise ValueError("too many original-source CI shard report files")
    seen_reports = set()
    attempts = []
    summaries = []
    for path in reports:
        match = REPORT.fullmatch(path.name)
        if not match:
            raise ValueError("invalid/ambiguous original-source CI shard report filename")
        shard, run_id = map(int, match.groups())
        data = path.read_bytes()
        if not 0 < len(data) <= 5 * 1024 * 1024:
            raise ValueError("oversized/empty Model BDLI original-source report")
        report = json.loads(data)
        selection = report.get("selection", {})
        count = MODEL_COUNT + BDLI_COUNT
        if (report.get("schema") != SCHEMA or selection.get("schema") != SCHEMA
                or report.get("game_version") != "3.0.3"
                or report.get("producer_workflow_run_id") != run_id
                or run_id < 1 or report.get("shard") != shard
                or selection.get("shard") != shard
                or selection.get("original_git_tree_sources") != TOTAL_ORIGINALS
                or selection.get("per_category") != {"Model":MODEL_COUNT,"BDLI":BDLI_COUNT}
                or selection.get("selected") != count
                or report.get("sample_count") != count
                or report.get("actual_original_git_and_sha256_verified") != count
                or report.get("by_category") != {"Model": MODEL_COUNT, "BDLI": BDLI_COUNT}
                or len(report.get("rows", [])) != count
                or len(selection.get("sources", [])) != count
                or report.get("native_runtime_evidence_captured") is not False
                or report.get("full_model_l3_verified") is not False
                or report.get("complete_original_corpus_verified") is not False):
            raise ValueError("CI original-source Model/BDLI report provenance or counts invalid")
        selected = {x["source_path"]: x["source_git_blob_sha1"]
                    for x in selection["sources"]}
        if len(selected) != count:
            raise ValueError("source selection duplicated originals")
        marker = (run_id, shard)
        if marker in seen_reports:
            raise ValueError("same CI run/shard repeated")
        seen_reports.add(marker)
        per_category = Counter()
        fresh_l3_files = 0
        good_bdli = 0
        touched = set()
        for row in report["rows"]:
            name = canonical(row["source_path"])
            category = name.split("/", 1)[0]
            if (name in touched or category not in ("Model", "BDLI")
                    or expected.get(name) != row.get("source_git_blob_sha1")
                    or selected.get(name) != row["source_git_blob_sha1"]
                    or row.get("category") != category
                    or row.get("original_bytes_sha256_and_git_blob_verified") is not True
                    or row.get("native_runtime_parity_verified") is not False
                    or type(row.get("fresh_l3_files")) is not int
                    or not 0 <= row["fresh_l3_files"] <= 1000
                    or row.get("status") not in ("partial","raw_extracted","no_output","failed")):
                raise ValueError("original-source CI model/BDLI per-row identity mismatch")
            touched.add(name)
            per_category[category] += 1
            sha = checked_sha(row["source_sha256"])
            size = checked_size(row["source_bytes"])
            if size < 1:
                raise ValueError("empty source in authentic CI report")
            status = row["status"]
            level = row.get("evidence_level")
            if category == "Model":
                if status not in ("partial","no_output","failed"):
                    raise ValueError("Model cannot be raw-extracted BDLI")
                result = row.get("model_l3", {})
                outputs = result.get("outputs", [])
                if not isinstance(outputs, list) or len(outputs) != row["fresh_l3_files"]:
                    raise ValueError("Model output proof count changed")
                if status == "partial" and not outputs:
                    raise ValueError("Model L3 partial without real media")
                if status != "partial" and outputs:
                    raise ValueError("Model non-L3 status has claimed media")
                if level != ("L3_REAL_MEDIA_PARTIAL_SOURCE" if outputs else "L0_SOURCE_BYTES_ONLY"):
                    raise ValueError("Model L3/source evidence label mismatch")
                if result.get("whole_model_media_and_native_parity_verified") is not False and status == "partial":
                    raise ValueError("Model source report falsely claims full/native conversion")
                for out in outputs:
                    media_type = out.get("format")
                    validation = out.get("validation",{})
                    if (media_type not in ("glb","png")
                            or validation.get("type") != media_type
                            or checked_sha(out.get("sha256"), "fresh media") != out["sha256"]
                            or checked_size(out.get("bytes")) < 1):
                        raise ValueError("fake/unbounded media output in CI report")
                    if (media_type == "glb" and
                        (validation.get("meshes", 0) < 1 or validation.get("primitives", 0) < 1)):
                        raise ValueError("Model GLB has no validated geometry")
                    if (media_type == "png"
                            and validation.get("pixel_decode") != "Pillow.Image.load"):
                        raise ValueError("Model PNG was not fully raster decoded")
                fresh_l3_files += len(outputs)
            else:
                if status not in ("raw_extracted","no_output","failed") or row["fresh_l3_files"] != 0:
                    raise ValueError("BDLI falsely claims media conversion")
                parsed = row.get("bdli_static", {})
                if status == "raw_extracted":
                    if (parsed.get("native_consumers_verified") is not False
                            or parsed.get("status") != "raw_extracted"
                            or not 1 <= parsed.get("sections", 0) <= 32768
                            or not 0 <= parsed.get("nonempty_section_sha_verified",-1) <= parsed["sections"]
                            or level != "L2_LBLI_BOUNDS_AND_SECTION_SHA"):
                        raise ValueError("BDLI falsely claims Native success or lacks authentic LBLI structure")
                    checked_sha(parsed["uncompressed_sha256"], "BDLI uncompressed original")
                    good_bdli += 1
                elif level != "L0_SOURCE_BYTES_ONLY":
                    raise ValueError("BDLI source-only label mismatch")
            proof = ("fresh_real_Model_L3_media_SHA_checked_and_parsed_in_CI"
                     if category == "Model" and status == "partial"
                     else "source_original_SHA_Git_blob_checked_BDLI_LBLI_bounded"
                     if category == "BDLI" and status == "raw_extracted"
                     else "only_original_source_identity_checked_no_media")
            attempts.append({
                "source_path": name, "source_sha256": sha,
                "source_bytes": size, "source_git_blob_sha": row["source_git_blob_sha1"],
                "category": category, "status": status,
                "raw_status": "CI_unrepresented_real_shard_" + status,
                "source": f"CI-unrepresented-originals-run-{run_id}-shard-{shard}",
                "source_proof": "CI_actual_original_bytes_SHA256_and_Git_blob",
                "output_proof": proof,
                "claimed_verified_media_count": row["fresh_l3_files"],
                "evidence_level": level,
            })
        if dict(per_category) != {"BDLI": BDLI_COUNT, "Model": MODEL_COUNT}:
            raise ValueError("actual CI categories/sources do not equal selection")
        if (fresh_l3_files != report.get("fresh_l3_files")
                or good_bdli != report.get("bdli_sources_static_verified")
                or sum(1 for row in report["rows"]
                       if row["category"] == "Model" and row["fresh_l3_files"] > 0)
                != report.get("models_with_fresh_l3")):
            raise ValueError("original source actual media/BDLI counts inconsistent")
        summaries.append({
            "artifact_file": path.name,
            "report_sha256": hashlib.sha256(data).hexdigest(),
            "source_count": count, "shard": shard, "run_id": run_id,
            "fresh_l3_files": fresh_l3_files,
            "bdli_sources_static_verified": good_bdli,
        })
    return attempts, {
        "schema": SCHEMA, "verified_original_attempts": len(attempts),
        "shard_reports": summaries,
        "fresh_l3_media_files_claimed_from_real_CI": sum(s["fresh_l3_files"] for s in summaries),
        "static_bdli_sources_verified_in_real_CI": sum(s["bdli_sources_static_verified"] for s in summaries),
        "original_source_bytes_rehashed_during_this_import": False,
        "native_runtime_evidence_captured": False,
        "whole_model_conversion_verified": False,
        "note": "Unique sources decided by global SHA/path dedup. L3 media output count is independent and not added as new source count.",
    }
