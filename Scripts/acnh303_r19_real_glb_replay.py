#!/usr/bin/env python3
"""Replay authentic R19 BFRES→GLB conversion from real ACNH 3.0.3 originals.

Select only SHA-authenticated R19 originals known to have historical GLBs.
Run actual wmdlt and validate fresh GLB geometry/output bytes. Fail closed on
missing binary, changed original SHA, empty geometry, fake/zero-byte outputs.
A successful pilot is not full BFRES/FSKA/FMAA/GPU/native parity.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

from acnh303_full_audit import inventory_from_git
from acnh303_history_sha_merge import canonical, checked_sha, checked_size, each_gz_row, release_sha
from acnh303_media_l3 import validate_glb

NCA = "e10617820db06889e1638499478da0de_NCA/1/"
SCHEMA = "acnh303-r19-real-bfres-glb-replay-v1"


def blob_sha(data: bytes) -> str:
    return hashlib.sha1(f"blob {len(data)}\0".encode() + data).hexdigest()


def choose_sources(release_dir: Path, git_tree: dict[str, str], *, maximum: int = 4) -> dict:
    if not 1 <= maximum <= 12:
        raise ValueError("bounded sample count required")
    manifest = release_dir / "media_source_manifest.jsonl.gz"
    authenticated_manifest_sha = release_sha(manifest, release_dir / "SHA256SUMS.txt")
    source_records = list(each_gz_row(manifest, max_rows=3558))
    if len(source_records) != 3558:
        raise ValueError("R19 authenticated media original count changed")
    choices = []
    for item in source_records:
        name = canonical(item["source_path"])
        if not name.startswith("Model/") or name not in git_tree:
            continue
        outputs = item.get("validated_outputs", [])
        if not isinstance(outputs, list):
            raise ValueError("R19 validated outputs malformed")
        has_glb = any(
            isinstance(o, dict) and
            (o.get("validation", {}).get("type") == "glb" or
             str(o.get("path", "")).lower().endswith(".glb"))
            for o in outputs
        )
        size = checked_size(item.get("source_bytes"))
        if not has_glb or not 0 < size <= 12_000_000:
            continue
        choices.append({
            "source_path": name, "source_bytes": size,
            "source_sha256": checked_sha(item.get("sha256")),
            "source_git_blob_sha1": git_tree[name],
            "R19_historical_GLBS": sum(
                o.get("validation", {}).get("type") == "glb"
                or str(o.get("path", "")).lower().endswith(".glb")
                for o in outputs
            ),
        })
    if len(choices) < maximum:
        raise ValueError(f"insufficient genuine R19 GLB originals ({len(choices)})")
    selected = sorted(choices, key=lambda r: (r["source_bytes"], r["source_path"]))[:maximum]
    return {
        "schema": SCHEMA, "game_version": "3.0.3",
        "release_tag": "acnh303-r19-animation-native-20261014",
        "release_manifest_sha256": authenticated_manifest_sha,
        "historical_authentic_GLBS_originals_available": len(choices),
        "selected": len(selected),
        "sources": selected,
        "fresh_original_bytes_verified": False,
        "new_L3_conversion_performed": False,
        "native_runtime_verified": False,
    }


def run_replay(root: Path, plan: dict, *, wmdlt: Path, out: Path) -> dict:
    if (plan.get("schema") != SCHEMA or plan.get("game_version") != "3.0.3"
            or not 1 <= plan.get("selected", 0) <= 12
            or plan.get("selected") != len(plan.get("sources", []))
            or not wmdlt.is_file()):
        raise ValueError("untrusted GLB replay plan or missing real decoder")
    expected = inventory_from_git(root)
    if len(expected) != 103400:
        raise ValueError("actual original Git Tree inventory changed")
    rows = []
    success = 0
    for row in plan["sources"]:
        name = canonical(row["source_path"])
        if (not name.startswith("Model/") or
                expected.get(name) != row["source_git_blob_sha1"]):
            raise ValueError(f"GLB source wrong Git identity: {name}")
        path = root / NCA / name
        data = path.read_bytes()
        if (len(data) != row["source_bytes"] or
                hashlib.sha256(data).hexdigest() != checked_sha(row["source_sha256"]) or
                blob_sha(data) != row["source_git_blob_sha1"]):
            raise ValueError(f"R19 original blob/SHA/current source mismatch: {name}")
        cmd = [
            sys.executable, str(root / "Scripts/acnh303_media_l3.py"),
            "--root", str(root), "--source", name,
            "--out", str(out.relative_to(root)),
            "--tool-wmdlt", str(wmdlt),
            "--require", "bfres", "--fail-on-no-conversion",
        ]
        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=480,
                              cwd=root, check=False)
        results = list((out / NCA / Path(name).parent / (Path(name).name + ".converted")).glob("_conversion_manifest.json"))
        if len(results) != 1:
            raise ValueError("converter failed to write inspectable source/member manifest")
        manifest = json.loads(results[0].read_text("utf8"))
        new_outputs = []
        for member in manifest.get("members", []):
            if member.get("format") != "bfres" or member.get("status") != "converted":
                continue
            for converted in member.get("outputs", []):
                filename = converted.get("path")
                if not isinstance(filename, str):
                    raise ValueError("non-file GLB result")
                glb = root / filename
                if not glb.is_file() or glb.suffix.lower() != ".glb":
                    raise ValueError("claimed BFRES/GLB output does not exist")
                if (hashlib.sha256(glb.read_bytes()).hexdigest() != converted["sha256"]
                        or glb.stat().st_size != converted["size_bytes"]):
                    raise ValueError("replayed GLB output hash/size mismatch")
                geometry = validate_glb(glb)
                if geometry["meshes"] <= 0 or geometry["primitives"] <= 0:
                    raise ValueError("GLB not usable mesh geometry")
                new_outputs.append({
                    "path": filename, "sha256": converted["sha256"],
                    "bytes": converted["size_bytes"], "validation": geometry,
                })
        ok = proc.returncode == 0 and bool(new_outputs)
        success += ok
        rows.append({
            "source_path": name,
            "source_sha256": row["source_sha256"],
            "source_bytes": row["source_bytes"],
            "source_git_blob_sha1": row["source_git_blob_sha1"],
            "fresh_original_bytes_and_git_blob_verified": True,
            "actual_converter_run_completed": proc.returncode == 0,
            "status": "real_L3_glb_replayed" if ok else "no_verified_glb",
            "output": new_outputs,
            "converter_exit_code": proc.returncode,
            "stderr_tail": proc.stderr[-1000:],
        })
    doc = {
        "schema": SCHEMA, "game_version": "3.0.3",
        "release_manifest_sha256": plan["release_manifest_sha256"],
        "selected": len(rows), "fresh_original_bytes_verified": len(rows),
        "sources_with_fresh_verified_GLBS": success,
        "output_files_verified": sum(len(row["output"]) for row in rows),
        "native_runtime_evidence_captured": False,
        "all_model_geometry_animation_and_native_parity_verified": False,
        "rows": rows,
    }
    out.mkdir(parents=True, exist_ok=True)
    (out / "model_l3_replay_report.json").write_text(
        json.dumps(doc, indent=2, ensure_ascii=False, sort_keys=True) + "\n", encoding="utf8")
    if not success:
        raise ValueError("No genuine original BFRES→GLB conversion succeeded; no L3 claim")
    return doc


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="mode", required=True)
    select = sub.add_parser("select")
    select.add_argument("--release", type=Path, required=True)
    select.add_argument("--root", type=Path, default=Path("."))
    select.add_argument("--count", type=int, default=4)
    select.add_argument("--plan", type=Path, required=True)
    select.add_argument("--sparse", type=Path, required=True)
    run = sub.add_parser("run")
    run.add_argument("--root", type=Path, default=Path("."))
    run.add_argument("--plan", type=Path, required=True)
    run.add_argument("--out", type=Path, default=Path("audit/model-l3-r19"))
    run.add_argument("--wmdlt", type=Path, required=True)
    args = parser.parse_args()
    root = args.root.resolve()
    if args.mode == "select":
        expected = inventory_from_git(root)
        if len(expected) != 103400:
            raise ValueError("full original Git Tree inventory missing")
        doc = choose_sources(args.release, expected, maximum=args.count)
        args.plan.write_text(json.dumps(doc, indent=2, sort_keys=True) + "\n", encoding="utf8")
        args.sparse.write_text("\n".join("/" + NCA + r["source_path"]
                                           for r in doc["sources"]) + "\n", encoding="utf8")
        print("selected authentic R19 GLB-positive Model originals", len(doc["sources"]))
    else:
        doc = json.loads(args.plan.read_text("utf8"))
        result = run_replay(root, doc, wmdlt=args.wmdlt.resolve(),
                            out=(root / args.out).resolve())
        print("real BFRES→GLB sample conversions", result["sources_with_fresh_verified_GLBS"],
              "verified GLB files", result["output_files_verified"])


if __name__ == "__main__":
    main()
