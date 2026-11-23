#!/usr/bin/env python3
"""Real-original Model + BDLI priority pilot for ACNH 3.0.3.

This only authenticates immutable sources and analyzes bounded structural
properties. GLB/PNG export and game-native semantic completeness are NOT claimed.
Selection is reproducible against the complete Git tree and imported SHA ledger.
"""
from __future__ import annotations

import argparse
from collections import Counter
import gzip
import hashlib
import json
import os
from pathlib import Path

from acnh303_full_audit import git_blob_sha1, inventory_from_git
from acnh303_media_l3 import find_leaf
from acnh303_recursive_archive import NCA, clean_source
from acnh_formats import decompress
from acnh303_bdli import parse_bdli

SCHEMA = "acnh303-priority-original-model-bdli-v1"
CATEGORIES = ("Model", "BDLI")
MAX_PER_CATEGORY = 24
MAX_RAW_BYTES_FOR_STRUCTURAL_PROBE = 32 * 1024 * 1024
MAX_MODEL_LEAVES = 512


def sha256_file(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as file:
        for block in iter(lambda: file.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def sha_shard(name: str, shards: int) -> int:
    return int.from_bytes(hashlib.sha256(name.encode("utf8")).digest()[:8], "big") % shards


def existing_paths(path: Path) -> set[str]:
    if not path.is_file():
        raise FileNotFoundError(f"historical SHA ledger missing: {path}")
    result = set()
    with gzip.open(path, "rt", encoding="utf8") as stream:
        for line in stream:
            if not line.strip():
                continue
            row = json.loads(line)
            name = row["source_path"]
            if name in result or not isinstance(row.get("source_sha256"), str) or len(row["source_sha256"]) != 64:
                raise ValueError("invalid/duplicate original path in historical SHA ledger")
            result.add(name)
    return result


def build_plan(expected: dict[str, str], attempted: set[str],
               *, shard: int, shards: int, per_category: int) -> dict:
    if not 1 <= shards <= 4096 or not 0 <= shard < shards or not 1 <= per_category <= MAX_PER_CATEGORY:
        raise ValueError("invalid priority wave selector bounds")
    unknown = attempted - expected.keys()
    if unknown:
        raise ValueError(f"history contains {len(unknown)} non-Git originals")
    selected, counts = [], {}
    for category in CATEGORIES:
        eligible = [name for name in expected if name.startswith(category + "/")
                    and name not in attempted and sha_shard(name, shards) == shard]
        eligible.sort(key=lambda name: (hashlib.sha256(
            ("ACNH-PRIORITY-V1|" + name).encode("utf8")).hexdigest(), name))
        if len(eligible) < per_category:
            raise ValueError(f"{category} has fewer than {per_category} eligible unimported sources")
        for name in eligible[:per_category]:
            selected.append({"source_path": name, "source_git_blob_sha1": expected[name]})
        counts[category] = {"eligible_in_shard": len(eligible), "selected": per_category}
    if len(selected) != per_category * len(CATEGORIES):
        raise ValueError("unexpected real source selection count")
    return {
        "schema": SCHEMA, "game_version": "3.0.3",
        "original_git_tree_sources": len(expected),
        "historical_imported_path_count_at_selection": len(attempted),
        "shard": shard, "shards": shards, "per_category": per_category,
        "categories": counts, "sources": selected,
    }


def static_model(source: str, raw: bytes) -> dict:
    leaves = []
    for leaf in find_leaf(raw, source):
        if len(leaves) >= MAX_MODEL_LEAVES:
            raise ValueError("model expanded into too many leaves")
        binary = leaf["data"]
        leaves.append({
            "format": leaf["format"], "source_member": leaf["source_member"],
            "sha256": hashlib.sha256(binary).hexdigest(), "bytes": len(binary),
            "origin_type": leaf.get("origin_type", "normal"),
        })
    if not leaves:
        raise ValueError("Model archive contained no leaf")
    return {
        "type": "MODEL_LEAF_CLASSIFICATION", "leaf_count": len(leaves),
        "leaf_formats": dict(sorted(Counter(x["format"] for x in leaves).items())),
        "leaf_digest_root": hashlib.sha256(json.dumps(
            leaves, sort_keys=True, ensure_ascii=False).encode("utf8")).hexdigest(),
        "semantic_level": "L1_CLASSIFICATION_NOT_GLTF_OR_GPU_PARITY",
    }


def static_bdli(raw: bytes) -> dict:
    expanded, codec = decompress(raw, limit=64 * 1024 * 1024)
    if codec != "zstd":
        raise ValueError("BDLI input not zstd")
    directory = parse_bdli(expanded)
    valid, payload = 0, 0
    for section in directory["sections"]:
        start, size = section["offset_absolute"], section["byte_length"]
        if start < 0 or size < 0 or start + size > len(expanded):
            raise ValueError("BDLI section bounds differ from raw source")
        binary = expanded[start:start + size]
        if hashlib.sha256(binary).hexdigest() != section["sha256"]:
            raise ValueError("BDLI raw LBLI payload SHA mismatch")
        if size:
            valid += 1
            payload += size
    return {
        "type": "BDLI_LBLI_STRUCTURAL_ONLY",
        "expanded_sha256": hashlib.sha256(expanded).hexdigest(),
        "expanded_bytes": len(expanded),
        "directory_sections": directory["section_count"],
        "nonempty_section_sha_verified": valid, "raw_payload_bytes": payload,
        "semantic_level": "L2_RAW_STRUCTURE_NOT_LOCALIZATION_SEMANTICS",
    }


def analyze_source(root: Path, name: str, git_blob: str) -> dict:
    relative = clean_source(name)
    if relative.as_posix() != name or relative.parts[0] not in CATEGORIES:
        raise ValueError("source path is not a canonical Model/BDLI resource")
    romfs = (root / NCA / "1").resolve()
    target = romfs / relative
    if target.is_symlink() or not target.is_file() or not target.resolve().is_relative_to(romfs):
        raise ValueError(f"actual original source not checked out or unsafe: {name}")
    actual_blob = git_blob_sha1(target)
    if actual_blob != git_blob:
        raise ValueError(f"original Git blob mismatch: {name}")
    original_sha = sha256_file(target)
    result = {
        "source_path": name, "category": relative.parts[0],
        "source_git_blob_sha1": actual_blob, "source_sha256": original_sha,
        "source_bytes": target.stat().st_size,
        "original_byte_and_git_identity_verified": True,
        "status": "no_output", "parser_status": "no_probe",
        "evidence_level": "L0_SOURCE_IDENTITY", "verified_media_outputs": 0,
        "native_runtime_parity_verified": False,
    }
    if target.stat().st_size > MAX_RAW_BYTES_FOR_STRUCTURAL_PROBE:
        result["parser_status"] = "bounded_skip_large_source"
        return result
    try:
        raw = target.read_bytes()
        if hashlib.sha256(raw).hexdigest() != original_sha:
            raise ValueError("source changed during in-memory parsing")
        probe = static_bdli(raw) if relative.parts[0] == "BDLI" else static_model(name, raw)
        result["static_probe"] = probe
        result["parser_status"] = "structure_verified"
        result["evidence_level"] = ("L2_NATIVE_STRUCTURE" if relative.parts[0] == "BDLI"
                                    else "L1_MODEL_LEAF_CLASSIFIED")
    except (ValueError, OSError, KeyError, TypeError, IndexError) as err:
        result["parser_status"] = "probe_failed"
        result["status"] = "failed"
        result["error"] = f"{type(err).__name__}: {err}"[-800:]
    return result


def run_wave(root: Path, selection: dict, expected: dict[str, str] | None = None) -> dict:
    expected = inventory_from_git(root) if expected is None else expected
    if selection.get("schema") != SCHEMA or selection.get("game_version") != "3.0.3":
        raise ValueError("priority wave selection is not for ACNH 3.0.3")
    sources = selection["sources"]
    per_category = selection["per_category"]
    if (len(expected) != 103400 or selection["original_git_tree_sources"] != 103400
            or len(sources) != len(CATEGORIES) * per_category
            or not 1 <= per_category <= MAX_PER_CATEGORY):
        raise ValueError("source count or original immutable inventory mismatch")
    seen, rows = set(), []
    for item in sources:
        name, blob = item["source_path"], item["source_git_blob_sha1"]
        if name in seen or expected.get(name) != blob:
            raise ValueError(f"duplicate/non-original source from plan: {name}")
        seen.add(name)
        rows.append(analyze_source(root, name, blob))
    categories = Counter(row["category"] for row in rows)
    if any(categories[c] != per_category for c in CATEGORIES):
        raise ValueError("priority wave missing Model or BDLI category")
    return {
        "schema": SCHEMA, "game_version": "3.0.3",
        "selection": selection, "sample_count": len(rows),
        "producer_workflow_run_id": int(os.environ.get("GITHUB_RUN_ID", "0")),
        "original_git_tree_sources": 103400,
        "exact_original_git_blob_verified": len(rows),
        "original_source_sha256_verified": len(rows),
        "status_counts": dict(sorted(Counter(row["status"] for row in rows).items())),
        "category_counts": dict(sorted(categories.items())),
        "rows": rows,
        "native_runtime_evidence_captured": False,
        "media_conversion_performed": False,
        "original_corpus_fully_checked": False,
        "scope": "Original bytes + Git blob verified. Model leaf classification and BDLI LBLI bounds are read-only static evidence; no L3 media or Native game parity.",
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    sub = p.add_subparsers(dest="command", required=True)
    plan = sub.add_parser("select")
    plan.add_argument("--root", type=Path, default=Path("."))
    plan.add_argument("--ledger", type=Path, default=Path("UnPack/_meta/history_sha_merge/source_ledger.jsonl.gz"))
    plan.add_argument("--shard", type=int, default=0)
    plan.add_argument("--shards", type=int, default=64)
    plan.add_argument("--per-category", type=int, default=12)
    plan.add_argument("--out", type=Path, default=Path("priority_selection.json"))
    plan.add_argument("--sparse", type=Path, default=Path("priority_sparse_patterns.txt"))
    run = sub.add_parser("run")
    run.add_argument("--root", type=Path, default=Path("."))
    run.add_argument("--selection", type=Path, default=Path("priority_selection.json"))
    run.add_argument("--out", type=Path, default=Path("priority_wave_model_bdli.json"))
    args = p.parse_args()
    root = args.root.resolve()
    expected = inventory_from_git(root)
    if args.command == "select":
        if len(expected) != 103400:
            raise ValueError(f"wrong original Git tree population: {len(expected)}")
        history = existing_paths(root / args.ledger)
        selection = build_plan(expected, history, shard=args.shard, shards=args.shards,
                               per_category=args.per_category)
        (root / args.out).write_text(json.dumps(selection, indent=2, sort_keys=True) + "\n", "utf8")
        patterns = ["/Scripts/", "/UnPack/_meta/history_sha_merge/"]
        patterns.extend("/" + NCA + "/1/" + item["source_path"]
                        for item in selection["sources"])
        (root / args.sparse).write_text("\n".join(patterns) + "\n", "utf8")
        print(json.dumps({"selected": len(selection["sources"]),
                          "categories": selection["categories"]}, ensure_ascii=False))
    else:
        selection = json.loads((root / args.selection).read_text("utf8"))
        result = run_wave(root, selection, expected)
        (root / args.out).write_text(
            json.dumps(result, indent=2, sort_keys=True, ensure_ascii=False) + "\n", "utf8")
        print(json.dumps({"originals": result["sample_count"],
                          "categories": result["category_counts"],
                          "statuses": result["status_counts"],
                          "L3_conversion_performed": False}, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
