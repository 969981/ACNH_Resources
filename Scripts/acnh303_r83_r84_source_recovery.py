#!/usr/bin/env python3
"""R83/R84 immutable BCSV source evidence: compare authentic Actions bytes to current Git.

This is source-identity and historical L2 BCSV table evidence, NOT native runtime
consumer validation. Persist only five original-source SHA/size/blob records.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

from acnh303_history_sha_merge import canonical, checked_sha, checked_size

NCA = "e10617820db06889e1638499478da0de_NCA/1"
SCHEMA = "acnh303-r83-r84-verified-original-bcsv-v1"
R83_RUN = 41470502711
R84_RUN = 41547199937
R83_ARTIFACT = "ACNH303_R83_Unmodified_Original_NPC_BCSV_And_Decoded_CSV"
R84_ARTIFACT = "ACNH303_R84_ItemParam107_SourceRemake_Images_SQLite"

# Immutable known SHA-256 is verified independently against source bytes and
# canonical Git blob SHA-1; never trust an artifact name or summary alone.
SPECS = {
    "Bcsv/NmlNpcParam.bcsv": (R83_RUN, 120452,
        "5a68a96c7962058ec8119536b53a713acd125747d2c6f2c057d8c788d5f3a797",
        "e27aea87280eb1ae883972aaccd3c19bd9a60a25"),
    "Bcsv/SpNpcParam.bcsv": (R83_RUN, 15372,
        "696c34affa93f625701aa3bff46b7d3fc0d62a5432f4b84089b284fb0478d5e9",
        "93566eb89ac67bbc413670584946e0cbe0561315"),
    "Bcsv/ItemParam.bcsv": (R84_RUN, 6126428,
        "9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609",
        "431bbd26a575197a1bd963c1721b093ae3e4df84"),
    "Bcsv/ItemRemake.bcsv": (R84_RUN, 157212,
        "2de2e462e8d62ff630d8b242b7d96ebb2e1b3451c1e9add813e4bd23ae528697",
        "59a38b7951ee59b33e1d6c70752c93d382887445"),
    "Bcsv/ItemKind.bcsv": (R84_RUN, 29004,
        "5c0f6c574422ddd71e26d7fcc5b8ec80305c606d8f7d4216ea3d2a74f28ce9df",
        "0541661b1409455962c73c9cc7e2ea4f13d709fd"),
}


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def git_blob(data: bytes) -> str:
    return hashlib.sha1(f"blob {len(data)}\0".encode("ascii") + data).hexdigest()


def validate_source(data: bytes, *, size: int, digest: str, blob: str) -> None:
    if len(data) != size or sha256(data) != digest or git_blob(data) != blob:
        raise ValueError("original BCSV SHA/bytes/Git blob mismatch")
    if len(data) < 16 or data[12:16] != b"VSCB":
        raise ValueError("original BCSV header missing")


def build_report(
    root: Path, artifacts: dict[int, Path], git_tree: dict[str, str],
    *, specs: dict | None = None,
) -> dict:
    specs = SPECS if specs is None else specs
    result = []
    for name, (run, size, digest, blob) in sorted(specs.items()):
        name = canonical(name)
        if name not in git_tree or git_tree[name] != blob:
            raise ValueError(f"current Git Tree original blob mismatch: {name}")
        relative = Path(NCA) / name
        original = (root / relative).read_bytes()
        historical = (artifacts[run] / relative).read_bytes()
        validate_source(original, size=size, digest=digest, blob=blob)
        validate_source(historical, size=size, digest=digest, blob=blob)
        if original != historical:
            raise ValueError(f"R83/R84 Action artifact differs from original Git bytes: {name}")
        result.append({
            "source_path": name,
            "source_sha256": digest,
            "source_bytes": size,
            "source_git_blob_sha1": blob,
            "source_category": "Bcsv",
            "source_run_id": run,
            "artifact_original_equals_current_git_original": True,
            "original_byte_and_git_identity_verified": True,
            "status": "raw_extracted",
            "claimed_verified_media_count": 0,
            "native_runtime_parity_verified": False,
        })
    return {
        "schema": SCHEMA,
        "game_version": "3.0.3",
        "producer_runs": {"r83": R83_RUN, "r84": R84_RUN},
        "artifact_names": {"r83": R83_ARTIFACT, "r84": R84_ARTIFACT},
        "source_count": len(result),
        "exact_original_bytes_and_git_blob_verified": len(result),
        "media_conversion_performed": False,
        "native_runtime_evidence_captured": False,
        "rows": result,
    }


def parse_report(path: Path, git_tree: dict[str, str],
                 *, specs: dict | None = None) -> tuple[list[dict], dict]:
    specs = SPECS if specs is None else specs
    doc = json.loads(path.read_text("utf8"))
    if (doc.get("schema") != SCHEMA or doc.get("source_count") != len(specs)
            or doc.get("exact_original_bytes_and_git_blob_verified") != len(specs)
            or doc.get("producer_runs") != {"r83": R83_RUN, "r84": R84_RUN}
            or doc.get("artifact_names") != {"r83": R83_ARTIFACT, "r84": R84_ARTIFACT}
            or doc.get("native_runtime_evidence_captured") is not False
            or doc.get("media_conversion_performed") is not False
            or len(doc.get("rows", [])) != len(specs)):
        raise ValueError("R83/R84 original-byte provenance report invalid")
    seen = set()
    attempts = []
    for row in doc["rows"]:
        name = canonical(row["source_path"])
        if name not in specs or name in seen:
            raise ValueError("unknown/duplicate original source in R83/R84 report")
        seen.add(name)
        run, size, digest, blob = specs[name]
        if (row.get("source_run_id") != run or row.get("source_bytes") != size
                or checked_sha(row.get("source_sha256")) != digest
                or row.get("source_git_blob_sha1") != blob
                or git_tree.get(name) != blob
                or row.get("original_byte_and_git_identity_verified") is not True
                or row.get("artifact_original_equals_current_git_original") is not True
                or row.get("native_runtime_parity_verified") is not False
                or row.get("claimed_verified_media_count") != 0
                or row.get("status") != "raw_extracted"
                or row.get("source_category") != "Bcsv"):
            raise ValueError("R83/R84 original identity/status forged or changed")
        attempts.append({
            "source_path": name, "source_sha256": digest,
            "source_bytes": size, "source_git_blob_sha": blob,
            "category": "Bcsv", "status": "raw_extracted",
            "raw_status": "original_bcsv_byte_verified",
            "source": f"CI-original-R{83 if run == R83_RUN else 84}-run-{run}",
            "source_proof": "original_bytes_equal_historical_artifact_and_current_git_blob",
            "output_proof": "original_BCSV_only_no_new_derived_media",
            "claimed_verified_media_count": 0,
            "evidence_level": "L1_SOURCE_BYTES_AND_GIT_BLOB_VERIFIED",
        })
    return attempts, {
        "source_count": len(attempts),
        "producer_runs": doc["producer_runs"],
        "source_sha256_and_git_blob_checked": True,
        "media_conversion_performed": False,
        "native_runtime_evidence_captured": False,
    }


def verify_persisted_originals(root: Path, report: Path, git_tree: dict[str, str]) -> None:
    attempts, _ = parse_report(report, git_tree)
    for row in attempts:
        path = root / NCA / row["source_path"]
        data = path.read_bytes()
        validate_source(data, size=row["source_bytes"],
                        digest=row["source_sha256"], blob=row["source_git_blob_sha"])


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("mode", choices=("recover", "verify-persisted"))
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--r83", type=Path)
    parser.add_argument("--r84", type=Path)
    parser.add_argument("--report", type=Path, required=True)
    args = parser.parse_args()
    from acnh303_full_audit import inventory_from_git
    root = args.root.resolve()
    git_tree = inventory_from_git(root)
    if len(git_tree) != 103400:
        raise ValueError("original Git Tree source inventory drift")
    if args.mode == "recover":
        if not args.r83 or not args.r84:
            parser.error("recover requires both authentic R83/R84 artifacts")
        report = build_report(root, {R83_RUN: args.r83.resolve(),
                                     R84_RUN: args.r84.resolve()}, git_tree)
        args.report.parent.mkdir(parents=True, exist_ok=True)
        args.report.write_text(json.dumps(report, ensure_ascii=False,
                                         indent=2, sort_keys=True) + "\n", encoding="utf8")
        print("verified R83/R84 original Artifacts and Git blobs", report["source_count"])
    else:
        verify_persisted_originals(root, args.report, git_tree)
        print("persisted R83/R84 original sources rehashed against current Git", len(SPECS))


if __name__ == "__main__":
    main()
