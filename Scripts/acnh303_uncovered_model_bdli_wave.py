#!/usr/bin/env python3
"""Shard real, previously UNREPRESENTED ACNH 3.0.3 Model/BDLI originals.

Two independent evidence axes: a source is counted after actual SHA256+Git
blob verification; a Model gains L3 only after the fresh wmdlt/wimgt output
is rehashed and parsed. BDLI LBLI structure is not Nintendo Native semantics.

No guessed output, no synthetic source, no automatic whole-model conversion.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

from acnh303_full_audit import git_blob_sha1, inventory_from_git
from acnh303_history_sha_merge import canonical, checked_sha, checked_size
from acnh303_priority_model_bdli import existing_paths, sha_shard, sha256_file, static_bdli
from acnh303_media_l3 import validate_glb, validate_png
from acnh303_recursive_archive import NCA

SCHEMA = "acnh303-uncovered-model-bdli-real-shard-v1"
TOTAL_ORIGINALS = 103400
SHARDS = 64
MODEL_COUNT = 8
BDLI_COUNT = 24
MAX_SOURCE_BYTES_FOR_CONVERSION = 48 * 1024 * 1024
MAX_BDLI_COMPRESSED = 16 * 1024 * 1024
STATUS = ("partial", "raw_extracted", "no_output", "failed")
REPORT_PATTERN = "source_wave_shard_*.json"


def select_sources(expected: dict[str, str], known: set[str], *,
                   shard: int, shards: int = SHARDS,
                   model_count: int = MODEL_COUNT, bdli_count: int = BDLI_COUNT) -> dict:
    """Deterministic partition over exact unrepresented Git original paths."""
    if (not 1 <= shards <= 4096 or not 0 <= shard < shards
            or not 1 <= model_count <= 24 or not 1 <= bdli_count <= 64
            or len(expected) != TOTAL_ORIGINALS or not known.issubset(expected)):
        raise ValueError("invalid immutable source selector or shard parameters")
    result = []
    totals = Counter(name.split("/", 1)[0] for name in expected if name not in known)
    for category, count in (("Model", model_count), ("BDLI", bdli_count)):
        candidates = sorted(
            (name for name in expected if name.startswith(category + "/")
             and name not in known and sha_shard(name, shards) == shard),
            key=lambda name: (
                # Target actual geometry candidates before texture-only UI icons.
                0 if category == "Model" and (
                    name.startswith("Model/RoomMdl") or name.startswith("Model/Idr")
                ) else 1,
                1 if category == "Model" and name.startswith("Model/Layout_") else 0,
                hashlib.sha256(("ACNH303-UNMEASURED-WAVE-V1|" + name).encode()).hexdigest(),
                name,
            ),
        )
        if len(candidates) < count:
            raise ValueError(f"{category} shard {shard} has only {len(candidates)} unrepresented originals")
        for name in candidates[:count]:
            result.append({"source_path": name, "source_git_blob_sha1": expected[name]})
    return {
        "schema": SCHEMA, "game_version": "3.0.3",
        "original_git_tree_sources": len(expected),
        "known_original_path_count_at_selection": len(known),
        "unrepresented_at_selection": {
            "Model": totals["Model"], "BDLI": totals["BDLI"],
        },
        "shard": shard, "shards": shards,
        "per_category": {"Model": model_count, "BDLI": bdli_count},
        "sources": result, "selected": len(result),
        "native_runtime_evidence_captured": False,
        "selection_only_no_actual_bytes_read": True,
    }


def _source_path(root: Path, name: str) -> Path:
    source_root = (root / NCA / "1").resolve()
    path = source_root / name
    if (not path.is_file() or path.is_symlink()
            or not path.resolve().is_relative_to(source_root)):
        raise ValueError("unavailable or unsafe original source: " + name)
    return path


def _model_convert(root: Path, name: str, source_sha: str, source_bytes: int,
                   wmdlt: Path, wimgt: Path, out: Path) -> dict:
    """Actually invoke L3 converter; validate each concrete output again."""
    if source_bytes > MAX_SOURCE_BYTES_FOR_CONVERSION:
        return {"status": "no_output", "reason": "source_exceeds_bounded_converter_size",
                "converter_invoked": False, "outputs": [], "leaf_statuses": {}}
    if not wmdlt.is_file() or not wimgt.is_file():
        raise ValueError("missing real Model GLB/PNG converter binary")
    relative_out = out.relative_to(root)
    cmd = [sys.executable, str(root / "Scripts/acnh303_media_l3.py"),
           "--root", str(root), "--source", name,
           "--out", str(relative_out), "--tool-wmdlt", str(wmdlt),
           "--tool-wimgt", str(wimgt), "--require", "any",
           "--max-output-mb", "32"]
    try:
        proc = subprocess.run(cmd, cwd=root, capture_output=True,
                              timeout=210, check=False)
        return_code = proc.returncode
        stdout_sha = hashlib.sha256(proc.stdout).hexdigest()
        stderr_sha = hashlib.sha256(proc.stderr).hexdigest()
        reason = proc.stderr.decode("utf8", "replace")[-800:] if proc.returncode else None
    except subprocess.TimeoutExpired as exc:
        return {"status": "no_output", "reason": "real_converter_timeout",
                "converter_invoked": True, "converter_timeout": True,
                "outputs": [], "leaf_statuses": {},
                "partial_stdout_sha256": hashlib.sha256(exc.stdout or b"").hexdigest()}
    manifest_path = out / NCA / "1" / (name + ".converted") / "_conversion_manifest.json"
    if not manifest_path.is_file():
        return {"status": "no_output", "reason": "converter_did_not_produce_manifest",
                "converter_invoked": True, "returncode": return_code,
                "stdout_sha256": stdout_sha, "stderr_sha256": stderr_sha,
                "outputs": [], "leaf_statuses": {}}
    doc = json.loads(manifest_path.read_text("utf8"))
    if (doc.get("source") != name or doc.get("source_sha256") != source_sha
            or doc.get("source_bytes") != source_bytes):
        raise ValueError("converter manifest no longer matches actual original source")
    results = []
    leaf_statuses = Counter()
    for member in doc.get("members", []):
        status, kind = member.get("status"), member.get("format")
        leaf_statuses[f"{kind}:{status}"] += 1
        if status != "converted":
            continue
        if kind not in ("bfres", "bntx"):
            raise ValueError("unexpected media type in Model resource")
        for product in member.get("outputs", []):
            p = root / product["path"]
            if (not p.is_file() or not p.resolve().is_relative_to(out)
                    or not p.stat().st_size == product["size_bytes"]
                    or hashlib.sha256(p.read_bytes()).hexdigest() != product["sha256"]):
                raise ValueError("genuine Model L3 product bytes/SHA mismatch")
            validator = validate_glb if kind == "bfres" else validate_png
            actual = validator(p)
            if actual["type"] != ("glb" if kind == "bfres" else "png"):
                raise ValueError("Model media kind/validator mismatch")
            results.append({
                "format": actual["type"], "path": product["path"],
                "sha256": product["sha256"], "bytes": product["size_bytes"],
                "validation": actual,
            })
    return {
        "status": "partial" if results else "no_output",
        "reason": reason, "converter_invoked": True, "returncode": return_code,
        "stdout_sha256": stdout_sha, "stderr_sha256": stderr_sha,
        "outputs": results,
        "leaf_statuses": dict(sorted(leaf_statuses.items())),
        "converter_manifest_sha256": hashlib.sha256(manifest_path.read_bytes()).hexdigest(),
        "whole_model_media_and_native_parity_verified": False,
    }


def _bdli_verify(path: Path) -> dict:
    if path.stat().st_size > MAX_BDLI_COMPRESSED:
        return {"status": "no_output", "reason": "compressed_bdli_over_size",
                "sections": 0, "native_consumers_verified": False}
    binary = path.read_bytes()
    parsed = static_bdli(binary)
    if parsed["type"] != "BDLI_LBLI_STRUCTURAL_ONLY":
        raise ValueError("BDLI static parser emitted unsupported evidence")
    return {
        "status": "raw_extracted",
        "uncompressed_sha256": parsed["expanded_sha256"],
        "uncompressed_bytes": parsed["expanded_bytes"],
        "sections": parsed["directory_sections"],
        "nonempty_section_sha_verified": parsed["nonempty_section_sha_verified"],
        "raw_payload_bytes_verified": parsed["raw_payload_bytes"],
        "native_consumers_verified": False,
    }


def run_sources(root: Path, plan: dict, *, wmdlt: Path, wimgt: Path,
                out: Path, producer_run_id: int) -> dict:
    expected = inventory_from_git(root)
    if (len(expected) != TOTAL_ORIGINALS or plan.get("schema") != SCHEMA
            or plan.get("game_version") != "3.0.3"
            or plan.get("original_git_tree_sources") != TOTAL_ORIGINALS
            or plan.get("selected") != len(plan.get("sources", []))
            or plan.get("per_category") != {"Model": MODEL_COUNT, "BDLI": BDLI_COUNT}
            or not 0 <= plan.get("shard", -1) < plan.get("shards", 0)
            or type(producer_run_id) is not int or producer_run_id <= 0):
        raise ValueError("untrusted Model/BDLI source selection")
    out.mkdir(parents=True, exist_ok=True)
    originals = set()
    rows = []
    for item in plan["sources"]:
        name = canonical(item["source_path"])
        category = name.split("/", 1)[0]
        if name in originals or category not in ("Model", "BDLI"):
            raise ValueError("duplicated/unsupported source in selection")
        originals.add(name)
        if expected.get(name) != item.get("source_git_blob_sha1"):
            raise ValueError("exact 3.0.3 original Git identity changed: " + name)
        path = _source_path(root, name)
        size, sha, blob = path.stat().st_size, sha256_file(path), git_blob_sha1(path)
        if blob != item["source_git_blob_sha1"]:
            raise ValueError("current original source bytes differ from Git blob: " + name)
        result = {
            "source_path": name, "category": category,
            "source_sha256": sha, "source_bytes": size,
            "source_git_blob_sha1": blob,
            "original_bytes_sha256_and_git_blob_verified": True,
            "native_runtime_parity_verified": False,
            "fresh_l3_files": 0, "status": "no_output",
        }
        try:
            if category == "Model":
                info = _model_convert(root, name, sha, size, wmdlt, wimgt, out)
                result["model_l3"] = info
                result["fresh_l3_files"] = len(info["outputs"])
                result["status"] = info["status"]
                result["evidence_level"] = ("L3_REAL_MEDIA_PARTIAL_SOURCE"
                                            if info["outputs"] else "L0_SOURCE_BYTES_ONLY")
            else:
                info = _bdli_verify(path)
                result["bdli_static"] = info
                result["status"] = info["status"]
                result["evidence_level"] = ("L2_LBLI_BOUNDS_AND_SECTION_SHA"
                                            if info["status"] == "raw_extracted"
                                            else "L0_SOURCE_BYTES_ONLY")
        except (ValueError, OSError, KeyError, TypeError, IndexError) as error:
            result["status"] = "failed"
            result["evidence_level"] = "L0_SOURCE_BYTES_ONLY"
            result["error"] = f"{type(error).__name__}: {error}"[-800:]
        rows.append(result)
        print("SOURCE", category, name, "status", result["status"],
              "L3", result["fresh_l3_files"], flush=True)
    if len(rows) != plan["selected"]:
        raise ValueError("source row count drift")
    counts = Counter(row["category"] for row in rows)
    if dict(counts) != plan["per_category"]:
        raise ValueError("per-category source count drift")
    return {
        "schema": SCHEMA, "game_version": "3.0.3",
        "producer_workflow_run_id": producer_run_id,
        "selection": plan, "shard": plan["shard"],
        "sample_count": len(rows), "rows": rows,
        "actual_original_git_and_sha256_verified": len(rows),
        "by_category": dict(counts),
        "status_counts": dict(Counter(row["status"] for row in rows)),
        "models_with_fresh_l3": sum(row["category"] == "Model"
                                   and row["fresh_l3_files"] > 0 for row in rows),
        "fresh_l3_files": sum(row["fresh_l3_files"] for row in rows),
        "bdli_sources_static_verified": sum(row["category"] == "BDLI"
                                           and row["status"] == "raw_extracted" for row in rows),
        "full_model_l3_verified": False,
        "native_runtime_evidence_captured": False,
        "complete_original_corpus_verified": False,
    }


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    sub = p.add_subparsers(dest="mode", required=True)
    sel = sub.add_parser("select")
    sel.add_argument("--root", type=Path, default=Path("."))
    sel.add_argument("--ledger", type=Path, default=Path("UnPack/_meta/history_sha_merge/source_ledger.jsonl.gz"))
    sel.add_argument("--shard", type=int, required=True)
    sel.add_argument("--shards", type=int, default=SHARDS)
    sel.add_argument("--plan", type=Path, required=True)
    sel.add_argument("--sparse", type=Path, required=True)
    run = sub.add_parser("run")
    run.add_argument("--root", type=Path, default=Path("."))
    run.add_argument("--plan", type=Path, required=True)
    run.add_argument("--out", type=Path, required=True)
    run.add_argument("--report", type=Path, required=True)
    run.add_argument("--wmdlt", type=Path, required=True)
    run.add_argument("--wimgt", type=Path, required=True)
    a = p.parse_args()
    root = a.root.resolve()
    if a.mode == "select":
        tree = inventory_from_git(root)
        known = existing_paths(root / a.ledger)
        plan = select_sources(tree, known, shard=a.shard, shards=a.shards)
        a.plan.write_text(json.dumps(plan, ensure_ascii=False, indent=2, sort_keys=True) + "\n")
        a.sparse.write_text("\n".join("/" + NCA + "/1/" + x["source_path"]
                                          for x in plan["sources"]) + "\n")
        print("UNREPRESENTED", plan["shard"], plan["selected"],
              plan["unrepresented_at_selection"])
    else:
        plan = json.loads(a.plan.read_text("utf8"))
        report = run_sources(root, plan, wmdlt=a.wmdlt.resolve(), wimgt=a.wimgt.resolve(),
                             out=(root / a.out).resolve(),
                             producer_run_id=int(os.environ.get("GITHUB_RUN_ID", "0")))
        a.report.parent.mkdir(parents=True, exist_ok=True)
        a.report.write_text(json.dumps(report, ensure_ascii=False,
                                       indent=2, sort_keys=True) + "\n")
        print(json.dumps({
            "shard": report["shard"], "sources": report["sample_count"],
            "fresh_l3_files": report["fresh_l3_files"],
            "BDLI_static": report["bdli_sources_static_verified"],
            "Native": "NOT_CAPTURED",
        }))


if __name__ == "__main__":
    main()
