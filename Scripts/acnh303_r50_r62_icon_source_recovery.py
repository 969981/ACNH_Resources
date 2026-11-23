#!/usr/bin/env python3
"""Recover committed R50–R62 per-source native PNG reports into the ACNH ledger.

All 53 source batches are historical, not new original-byte rehashes. One
verified native BRTI PNG is L3 partial media evidence, NOT complete BFRES/GLB
conversion or Nintendo native UI runtime selection/semantic proof.
"""
from __future__ import annotations

from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import subprocess

from acnh303_history_sha_merge import canonical, checked_sha, checked_size

NCA = "e10617820db06889e1638499478da0de_NCA/1/"
SCHEMA = "acnh303_original_rom_item_png_export_v1"
PATTERN = re.compile(r"batch-(\d{5})-(\d{5})\.json$")
VALID_STATUS = {
    "new_original_rom_icon",
    "existing_identical_png",
    "existing_cdn_preserved_native_separately",
}
ROOT_REPORTS = "assets/evidence/rom-items"
EXPECTED_MANIFESTS = 53
EXPECTED_RECORDS = 26277


def native_png_git_paths(root: Path) -> set[str]:
    run = subprocess.run(
        ["git", "ls-tree", "-r", "--name-only", "HEAD", "--",
         "assets/images/items/", "assets/images/items-rom/"],
        cwd=root, capture_output=True, check=True, text=True, timeout=180,
    )
    return set(run.stdout.splitlines())


def recover_icon_source_reports(
    directory: Path,
    git_tree: dict[str, str],
    output_git_paths: set[str],
    *,
    expected_manifests: int = EXPECTED_MANIFESTS,
    expected_records: int = EXPECTED_RECORDS,
    expected_total_originals: int = EXPECTED_RECORDS,
) -> tuple[list[dict], dict]:
    """Validate exact per-file original metadata and real historical PNG path."""
    directory = Path(directory)
    manifests = sorted(directory.glob("batch-*.json"))
    if len(manifests) != expected_manifests:
        raise ValueError(f"R50-R62 original batch manifest count drift: {len(manifests)}")
    history = []
    stats = Counter()
    seen_file_names = set()
    seen_originals = {}
    verified_manifests = []
    next_offset = 0
    for manifest in manifests:
        matched = PATTERN.fullmatch(manifest.name)
        if not matched:
            raise ValueError("unexpected original item batch report filename")
        first, last = map(int, matched.groups())
        if first != next_offset or first >= last or last > expected_records:
            raise ValueError(f"gap/overlap in native item source shard: {manifest.name}")
        blob = manifest.read_bytes()
        if not 0 < len(blob) <= 2_000_000:
            raise ValueError("oversized or empty historical original icon batch")
        doc = json.loads(blob)
        rows = doc.get("items")
        if (doc.get("schema") != SCHEMA or doc.get("native_rom_not_cdn") is not True
                or doc.get("offset") != first or doc.get("end") != last
                or doc.get("source_count") != expected_total_originals
                or doc.get("unmapped_count") != 1254
                or doc.get("errors") != 0 or doc.get("quarantined") != 0
                or not isinstance(rows, list) or len(rows) != last-first
                or doc.get("total_attempted") != len(rows)):
            raise ValueError(f"invalid R50–R62 original per-source batch metadata: {manifest}")
        for item in rows:
            name = item.get("filename")
            if (not isinstance(name, str) or not name.endswith(".png")
                    or "/" in name or "\\" in name or name.startswith(".")
                    or name in seen_file_names):
                raise ValueError("duplicate or invalid native item PNG filename")
            seen_file_names.add(name)
            source = item.get("source_path")
            family = item.get("layout_kind")
            if (not isinstance(source, str) or not source.startswith(NCA)
                    or not isinstance(family, str)
                    or not re.fullmatch(r"[A-Za-z0-9_]+", family)):
                raise ValueError("invalid original ROM family or source")
            source = canonical(source)
            if (not source.startswith(f"Model/Layout_{family}_")
                    or not source.endswith(".Nin_NX_NVN.zs")
                    or source not in git_tree):
                raise ValueError(f"original native item source absent from Git Tree: {source}")
            sha = checked_sha(item.get("source_sha256"))
            size = checked_size(item.get("source_bytes"))
            if size == 0:
                raise ValueError("empty original native icon source")
            png_sha = checked_sha(item.get("native_png_sha256"), "native PNG")
            if (item.get("status") not in VALID_STATUS
                    or item.get("original_rom_native") is not True
                    or item.get("in_game_ui_composition_verified") is not False
                    or item.get("native_brti_name") != name[:-4]
                    or item.get("native_texture_count") != 1
                    or type(item.get("width")) is not int or item["width"] <= 0
                    or type(item.get("height")) is not int or item["height"] <= 0):
                raise ValueError(f"unverified historical native BRTI PNG: {name}")
            out = item.get("output_path")
            if not out and item["status"] == "existing_identical_png":
                out = "assets/images/items/" + name
            if (not isinstance(out, str) or not out.startswith("assets/images/")
                    or not out.endswith("/" + name)
                    or out not in output_git_paths):
                raise ValueError(f"historic native PNG not in original Git Tree: {out}")
            identity = (sha, size)
            if source in seen_originals and seen_originals[source] != identity:
                raise ValueError(f"conflicting source SHA/size in R50-R62: {source}")
            seen_originals[source] = identity
            stats[item["status"]] += 1
            history.append({
                "source_path": source,
                "source_sha256": sha,
                "source_bytes": size,
                "source_git_blob_sha": None,
                "category": "Model",
                "status": "partial",
                "raw_status": item["status"],
                "source": "committed-R50-R62-original-native-item-PNG",
                "source_proof": "committed_historical_source_SHA_and_original_size_not_rehashed_now",
                "output_proof": "committed_native_BRTI_PNG_SHA_and_Git_path_historical_not_rehashed_now",
                "claimed_verified_media_count": 1,
                "evidence_level": "L3_PARTIAL_SINGLE_NATIVE_BRTI_PNG_HISTORICAL",
            })
        verified_manifests.append({
            "path": manifest.relative_to(directory).as_posix(),
            "source_rows": len(rows),
            "manifest_sha256": hashlib.sha256(blob).hexdigest(),
        })
        next_offset = last
    if len(history) != expected_records or next_offset != expected_records:
        raise ValueError(f"R50-R62 recovered source rows incomplete: {len(history)}")
    return history, {
        "schema": "acnh303-r50-r62-original-item-png-source-sha-recovery-v1",
        "historical_per_source_rows": len(history),
        "distinct_original_source_paths_in_batches": len(seen_originals),
        "original_reports": len(verified_manifests),
        "report_digests": verified_manifests,
        "output_statuses": dict(sorted(stats.items())),
        "original_source_bytes_rehashed_in_current_CI": False,
        "native_PNG_output_bytes_rehashed_in_current_CI": False,
        "full_BFRES_or_GLB_conversion_verified": False,
        "native_game_UI_semantics_verified": False,
        "image_filename_equivalence_for_1254_candidates_verified": False,
    }
