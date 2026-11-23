#!/usr/bin/env python3
"""Recover authentic, committed R69-R72 original-source image reports.

Only source PATH, reported original SHA-256/bytes and historically validated PNG
are imported as attempt evidence. This does NOT rehash the original RomFS in
the present CI, nor establish complete BFRES or native UI semantic parity.
"""
from __future__ import annotations

from collections import Counter
import hashlib
import json
from pathlib import Path

from acnh303_history_sha_merge import canonical, checked_sha, checked_size

SCHEMA = "acnh303_original_native_layout_incremental_v1"
EXPECTED = {"FtrIcon": 1, "GardeningIcon": 3, "ClosetIcon": 5441}
NCA_PREFIX = "e10617820db06889e1638499478da0de_NCA/1/"


def read_committed_native_layout_batches(
    directory: Path,
    expected_git: dict[str, str],
    *,
    expected_counts: dict[str, int] | None = None,
    expected_closet_shards: int = 28,
) -> tuple[list[dict], dict]:
    """Fail closed on incomplete, contradictory or non-source-level reports."""
    counts = EXPECTED if expected_counts is None else expected_counts
    directory = Path(directory)
    paths = sorted(directory.glob("ClosetIcon-*.json"))
    if len(paths) != expected_closet_shards:
        raise ValueError(f"R70-R72 ClosetIcon shard count changed: {len(paths)}")
    paths += [directory / "FtrIcon-00000-00001.json",
              directory / "GardeningIcon-00000-00003.json"]
    if any(not p.is_file() for p in paths):
        raise FileNotFoundError("missing R69 original native layout manifest")
    results = []
    seen = set()
    categories = Counter()
    manifests = []
    for manifest in paths:
        raw_bytes = manifest.read_bytes()
        if len(raw_bytes) > 2_000_000:
            raise ValueError("oversized original-source evidence manifest")
        doc = json.loads(raw_bytes)
        family = manifest.name.split("-", 1)[0]
        if doc.get("schema") != SCHEMA or doc.get("family") != family:
            raise ValueError(f"unexpected R69-R72 manifest schema/family: {manifest}")
        entries = doc.get("entries")
        if not isinstance(entries, list) or doc.get("source_count") != len(entries):
            raise ValueError(f"source rows/count disagreement: {manifest}")
        if len(entries) > 200:
            raise ValueError(f"unbounded source rows: {manifest}")
        if (doc.get("native_exact_single_BRTI_PNGs") != len(entries)
                or doc.get("failed_sources") != 0
                or doc.get("multi_texture_sources") != 0
                or doc.get("no_texture_sources") != 0
                or doc.get("source_and_output_sha_provenance_per_record") is not True
                or doc.get("UI_runtime_rendering_verified") is not False):
            raise ValueError(f"R69-R72 is not verified one-image source evidence: {manifest}")
        for item in entries:
            original = item.get("source")
            if not isinstance(original, str) or not original.startswith(NCA_PREFIX):
                raise ValueError("non-original RomFS source path in image report")
            source = canonical(original)
            if (source not in expected_git or source in seen
                    or not source.startswith(f"Model/Layout_{family}_")
                    or not source.endswith(".Nin_NX_NVN.zs")
                    or item.get("category") != family
                    or item.get("status") != "one_original_rom_texture_exported"):
                raise ValueError(f"invalid/duplicate R69-R72 Git original source: {source}")
            if (item.get("native_rom_source") is not True
                    or item.get("native_full_BRTI_name_equal_expected") is not True
                    or item.get("original_image_UI_runtime_binding_verified") is not False):
                raise ValueError("unverified or semantically overstated source image")
            images = item.get("pngs")
            if not isinstance(images, list) or len(images) != 1:
                raise ValueError(f"not exactly one reported PNG: {source}")
            png = images[0]
            if (png.get("native_PNG_crc_sha_reverified") is not True
                    or png.get("full_pixel_decode") != "Pillow.Image.load"
                    or not isinstance(png.get("output"), str)
                    or not png["output"].endswith(".png")
                    or type(png.get("bytes")) is not int or png["bytes"] <= 0):
                raise ValueError(f"PNG historical validation not authenticated: {source}")
            checked_sha(png.get("sha256"), "historical PNG")
            source_sha = checked_sha(item.get("original_source_sha256"))
            source_bytes = checked_size(item.get("original_source_bytes"))
            seen.add(source)
            categories[family] += 1
            results.append({
                "source_path": source,
                "source_sha256": source_sha,
                "source_bytes": source_bytes,
                "source_git_blob_sha": None,
                "category": "Model",
                # One validated texture is not proof of whole-model conversion.
                "status": "partial",
                "raw_status": item["status"],
                "source": f"committed-R69-R72-{family}",
                "source_proof": "committed_source_sha_and_bytes_historical_not_rehashed_now",
                "output_proof": "committed_single_png_crc_sha_pixel_decode_historical",
                "claimed_verified_media_count": 1,
                "evidence_level": "L3_PARTIAL_TEXTURE_HISTORICAL",
            })
        manifests.append({
            "name": manifest.name,
            "file_sha256": hashlib.sha256(raw_bytes).hexdigest(),
            "sources": len(entries),
        })
    if dict(categories) != counts:
        raise ValueError(f"R69-R72 source counts changed: {dict(categories)} != {counts}")
    if len(results) != sum(counts.values()):
        raise ValueError("inconsistent R69-R72 original source count")
    return results, {
        "source": "committed R69-R72 original icon batch manifests",
        "manifests": manifests,
        "original_source_count": len(results),
        "by_family": dict(categories),
        "historic_single_png_validation": True,
        "original_source_bytes_rehashed_in_current_ci": False,
        "native_runtime_semantics_verified": False,
        "whole_model_conversion_verified": False,
    }
