#!/usr/bin/env python3
"""R44 Cedar real-source regression. No fake GLB or native runtime claim."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile

from acnh303_media_l3 import NCA, find_leaf

REL = "Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs"
SOURCE_SHA256 = "3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f"


def verify_original(root: Path) -> dict:
    source = root / NCA / "1" / REL
    if source.is_symlink() or not source.is_file():
        raise ValueError("real 3.0.3 Cedar source missing, not a synthetic fixture")
    raw = source.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != SOURCE_SHA256:
        raise ValueError(f"original Cedar source SHA-256 mismatch: {sha}")
    leaves = list(find_leaf(raw, REL))
    if len(leaves) != 1:
        raise ValueError(f"expected one real FRES leaf, got {len(leaves)}")
    leaf = leaves[0]
    if (leaf["format"] != "bfres" or leaf.get("origin_type") !=
            "non_geometry_fres_animation_candidate"):
        raise ValueError("real Cedar FRES wrongly routed to mesh/unknown media")
    evidence = leaf["native_evidence"]
    offsets = [(x["magic"], x["offset"]) for x in evidence["candidate_magic_offsets"]]
    if offsets != [("FMAA", 0xF0), ("FMAA", 0x160)]:
        raise ValueError(f"real Cedar candidate offsets changed: {offsets}")
    if len(leaf["data"]) != 1536:
        raise ValueError("real Cedar decompressed FRES size changed")
    return {
        "schema": "acnh303-cedar-actual-source-regression-v1",
        "origin": REL,
        "source_sha256": sha,
        "source_bytes": len(raw),
        "fres_bytes": len(leaf["data"]),
        "fres_sha256": hashlib.sha256(leaf["data"]).hexdigest(),
        "native_candidate_offsets": evidence["candidate_magic_offsets"],
        "test_kind": "REAL_ORIGINAL_SOURCE_BYTES",
        "limits": "L1+header routing only; material shader bindings, native evaluator and runtime still NOT_CAPTURED",
    }


def main() -> int:
    a = argparse.ArgumentParser()
    a.add_argument("--root", type=Path, default=Path("."))
    a.add_argument("--out", type=Path, required=True)
    args = a.parse_args()
    root = args.root.resolve()
    result = verify_original(root)
    with tempfile.TemporaryDirectory(prefix="acnh303-cedar-real-") as temp:
        output = Path(temp) / "media_l3"
        cmd = [sys.executable, str(root / "Scripts" / "acnh303_media_l3.py"),
               "--root", str(root), "--source", REL, "--out", str(output),
               "--fail-on-no-conversion"]
        proc = subprocess.run(cmd, capture_output=True, text=True, timeout=90, cwd=root)
        if proc.returncode != 2:
            raise ValueError(f"expected strict no-conversion status=2, got {proc.returncode}: "
                             f"{(proc.stdout + proc.stderr)[-900:]}")
        manifest = output / NCA / "1" / "Model" / (
            "PltTreeCedarDecoAnim.Nin_NX_NVN.zs.converted") / "_conversion_manifest.json"
        meta = json.loads(manifest.read_text("utf8"))
        if (meta["source_sha256"] != SOURCE_SHA256 or meta["converted_count"] != 0 or
                meta["leaf_count"] != 1 or meta["members"][0]["status"] != "unsupported"):
            raise ValueError("real Cedar conversion manifest incorrectly asserts media success")
        if list(output.rglob("*.glb")) or list(output.rglob("*.png")):
            raise ValueError("real Cedar produced fake geometry or pixels")
        result["media_manifest_status"] = meta["status"]
        result["media_output_count"] = meta["converted_count"]
        result["media_leaf_status"] = meta["members"][0]["status"]
        result["no_fake_glb"] = True
    out = args.out.resolve()
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(result, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf8")
    print(json.dumps(result, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
