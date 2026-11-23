#!/usr/bin/env python3
"""R51: reproducible original-byte 16-source pilot and native evidence gap ledger.

All input files must be actual ACNH 3.0.3 Git blobs, checked in read-only mode.
Structural inspection never claims game runtime/semantic equivalence.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path

from acnh303_unified import NCA, digest, run_one, verify_one
from acnh303_full_audit import git_blob_sha1, inventory_from_git
from acnh_formats import decompress, detect, parse_sarc
from acnh303_bdli import parse_bdli
from acnh303_bars_probe import inspect as bars_inspect
from acnh303_asset_batch import parse_evfl
from acnh303_round10_evfl_consumer_index import summarize as evfl_summarize
from acnh303_media_l3 import find_leaf

# Explicit, reviewable real-source cohort; no relying on truncated Contents API.
SAMPLES = (
    ("Bcsv/AITag.bcsv", "basic"),
    ("Bcsv/AmiiboData.bcsv", "basic"),
    ("Bcsv/CalendarEventJuneBrideReward.bcsv", "basic"),
    ("BDLI/String/CNzh/STR_BestFriendNotice.bdli.zs", "archive"),
    ("BDLI/String/CNzh/STR_CategoryName.bdli.zs", "archive"),
    ("BDLI/String/CNzh/STR_Common.bdli.zs", "archive"),
    ("EventFlow/1PArbeitExplain5.bfevfl", "basic"),
    ("EventFlow/1PStart01MapEnable.bfevfl", "basic"),
    ("Message/Dialog_CNzh.sarc.zs", "archive"),
    ("Message/Dialog_JPja.sarc.zs", "archive"),
    ("Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs", "archive"),
    ("Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs", "archive"),
    ("Layout/Bell.Nin_NX_NVN.zs", "archive"),
    ("Layout/Addressee.Nin_NX_NVN.zs", "archive"),
    ("Sound/Resource/AirportDemoAirplaneShadow.bars", "archive"),
    ("Sound/Resource/AmbientPlacement_Default.bars", "archive"),
)
COHORT = [name for name, _ in SAMPLES]
if len(COHORT) != len(set(COHORT)):
    raise RuntimeError("pilot source collision")


def native_static_probe(source: str, raw: bytes) -> dict:
    """Only bound-checked original static fields; never a native callback proof."""
    category = source.split("/", 1)[0]
    result = {
        "source_format": detect(raw),
        "native_runtime_trace": "NOT_CAPTURED",
        "gpu_binding_verified": False,
        "event_action_query_callback_verified": False,
        "aal_external_pcm_read_verified": False,
        "semantic_level": "STATIC_ONLY",
    }
    if category == "BDLI":
        decoded, codec = decompress(raw)
        if codec != "zstd":
            raise ValueError("BDLI original is not Zstd")
        document = parse_bdli(decoded)
        result.update({"probe": "BDLI_LBLI_DIRECTORY", "expanded_sha256":
                       hashlib.sha256(decoded).hexdigest(),
                       "lbli_section_count": document["section_count"],
                       "raw_section_bytes": sum(s["byte_length"] for s in document["sections"]),
                       "status": "original_directory_offsets_bounded"})
    elif category == "EventFlow":
        graph = parse_evfl(raw)
        info = evfl_summarize(graph)
        result.update({"probe": "BFEVFL_STATIC_GRAPH",
                       "event_count": info["event_count"],
                       "action_nodes": info["types"].get("ActionEvent", 0),
                       "query_nodes": info["types"].get("SwitchEvent", 0),
                       "graph_edge_count": info["edge_count"],
                       "status": "source_graph_no_runtime"})
    elif category == "Message":
        decoded, codec = decompress(raw)
        if codec != "zstd":
            raise ValueError("Message SARC expected Zstd")
        entries, _ = parse_sarc(decoded)
        result.update({"probe": "SARC_SOURCE_MEMBERS",
                       "member_count": len(entries),
                       "expanded_sha256": hashlib.sha256(decoded).hexdigest(),
                       "status": "raw_members_no_control_code_consumer"})
    elif category == "Sound":
        b = bars_inspect(raw)
        result.update({"probe": "BARS_HEADER_INDEX", "asset_count": b["asset_count"],
                       "audio_magic_counts": b["audio_magic_counts"],
                       "trailing_bytes": b["trailing_bytes_after_declared_size"],
                       "status": b["index_status"]})
    elif category in ("Model", "Layout"):
        leaves = list(find_leaf(raw, source))
        result.update({"probe": "MEDIA_LEAF_CLASSIFICATION",
                       "leaf_count": len(leaves),
                       "leaf_formats": [p["format"] for p in leaves],
                       "native_evidence": [p.get("native_evidence", {})
                                           for p in leaves if p.get("native_evidence")],
                       "status": "original_content_classified_not_native_bound"})
    else:
        result.update({"probe": "BCSV_REAL_OUTPUT_VALIDATION",
                       "status": "source_and_csv_json_hashes_checked"})
    return result


def run_pilot(root: Path, out: Path, *, strict: bool = True,
              expected: dict[str, str] | None = None) -> dict:
    root, out = root.resolve(), out.resolve()
    source_dir = (root / NCA / "1").resolve()
    expected = expected if expected is not None else inventory_from_git(root)
    results = []
    native_gaps = []
    output_owners = {}
    for path, mode in SAMPLES:
        if path not in expected:
            raise ValueError("pilot source not in original Git tree: " + path)
        src = source_dir / path
        if src.is_symlink() or not src.is_file() or not src.resolve().is_relative_to(source_dir):
            raise ValueError("pilot actual source missing, symlink, or escape: " + path)
        raw = src.read_bytes()
        actual_blob = git_blob_sha1(src)
        if actual_blob != expected[path]:
            raise ValueError("pilot original Git blob identity mismatch: " + path)
        record = run_one(root, out, source_dir, src, mode=mode)
        verify_one(source_dir, out, record)
        if record["source_sha256"] != hashlib.sha256(raw).hexdigest():
            raise ValueError("pilot source mutated while running: " + path)
        record["source_git_blob_sha1"] = actual_blob
        if record["status"] == "failed":
            raise ValueError("pilot parser failed for " + path + ": " + str(record["error"]))
        for item in record.get("outputs", []):
            output_name = item["path"].casefold()
            if output_name in output_owners and output_owners[output_name] != path:
                raise ValueError("cross-source output collision: " + path)
            output_owners[output_name] = path
        probe = native_static_probe(path, raw)
        record["static_probe"] = probe
        results.append(record)
        if (path.startswith(("BDLI/", "EventFlow/", "Message/", "Model/", "Sound/"))
                or path.startswith("Layout/")):
            native_gaps.append({
                "source": path, "source_sha256": record["source_sha256"],
                "probe": probe["probe"], "status": probe["status"],
                "remaining": {
                    "runtime_trace": "NOT_CAPTURED",
                    "action_query_effects": "UNVERIFIED",
                    "shader_material_or_gpu_binding": "UNVERIFIED",
                    "aal_external_audio_file_read": "UNVERIFIED",
                    "bdli_message_control_code_runtime": "UNVERIFIED",
                },
            })
    status = Counter(x["status"] for x in results)
    categories = defaultdict(lambda: {"sources": 0, "outputs": 0, "bytes": 0})
    for rec in results:
        c = rec["source_path"].split("/", 1)[0]
        categories[c]["sources"] += 1
        categories[c]["outputs"] += len(rec["outputs"])
        categories[c]["bytes"] += rec["source_bytes"]
    report = {
        "schema": "acnh303-r51-original-source-pilot-v1",
        "game_version": "3.0.3",
        "sample_count": len(SAMPLES),
        "exact_original_git_blob_verified": len(results),
        "original_source_sha256_verified": len(results),
        "unique_paths": len(set(x["source_path"] for x in results)),
        "distinct_output_paths": len(output_owners),
        "status_counts": dict(status),
        "categories": dict(sorted(categories.items())),
        "rows": results,
        "native_gaps": native_gaps,
        "native_runtime_evidence_captured": False,
        "all_original_103400_byte_verified": False,
        "scope": "Only these 16 exact original inputs; L0-L3 static tests, not full archive/media or runtime parity",
    }
    if strict and (len(results) != len(SAMPLES) or status["failed"]):
        raise ValueError("incomplete pilot")
    return report


def main() -> int:
    a = argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--out", type=Path, default=Path("UnPack_R51"))
    a.add_argument("--report", type=Path, default=Path("r51_real_wave.json"))
    args = a.parse_args()
    root = args.root.resolve()
    result = run_pilot(root, (root / args.out).resolve())
    path = (root / args.report).resolve()
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(result, ensure_ascii=False, indent=2, sort_keys=True) + "\n",
                    encoding="utf8")
    print(json.dumps({k: v for k, v in result.items() if k not in ("rows", "native_gaps")},
                     indent=2, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
