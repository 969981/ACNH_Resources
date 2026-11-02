#!/usr/bin/env python3
"""Babybed native FMAT/ShaderParam source candidates, not runtime binding.

Reuses the already-audited ACNH 3.0.3 Cedar FRES structural reader. The
results are on-disk source-only: they do not establish ReBody/ReFabric shader
sampler updates, their priorities or inventory icon rendering.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path

import acnh_formats as af
from probe_acnh_babybed_textures import NCA, babybed_sources, nested_files, parse_bntx, valid_bntx_slices
from acnh303_round47_cedar_fmat import parse_fres


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--out", type=Path, default=Path("assets/evidence/babybed-fmat-candidates.json"))
    args = p.parse_args()
    root = args.root.resolve()
    results = []
    for rom_rel in babybed_sources():
        original = root / NCA / "1" / rom_rel
        source = {
            "source": rom_rel,
            "native_sampler_to_texture_binding_proven": False,
            "runtime_rebody_refabric_override_proven": False,
            "complete_item_icon_rendering_proven": False,
            "fmats": [], "model_headers": [], "brti_names": [],
        }
        results.append(source)
        if not original.is_file():
            source["status"] = "MISSING_ORIGINAL_SOURCE"
            continue
        raw = original.read_bytes()
        source["source_sha256"] = hashlib.sha256(raw).hexdigest()
        try:
            leaves = list(nested_files(raw, rom_rel, af))
            fres_leaves = [content for _, content in leaves if content.startswith(b"FRES")]
            if not fres_leaves:
                source["status"] = "NO_FRES"
                continue
            source["fres_count"] = len(fres_leaves)
            for leaf_id, fres in enumerate(fres_leaves):
                try:
                    parsed = parse_fres(fres)
                    source["model_headers"].append({
                        "leaf": leaf_id, "parse_status": parsed["status"],
                        "model_count": parsed["model_count"],
                        "models": [{"name": m["model_name"],
                                    "materials": [x["name"] for x in m["materials"]]}
                                   for m in parsed["models"]],
                    })
                    for material in parsed["materials"]:
                        source["fmats"].append({
                            "source_fres_leaf": leaf_id,
                            "name": material["name"],
                            "model_name": material["model_name"],
                            "material_header_offset_hex": hex(material["header_offset"]),
                            "source_param_count": material["source_param_count"],
                            "shader_param_names": [x["name"] for x in material["shader_params"]],
                            "tex_srt0": [x for x in material["shader_params"] if x["name"] == "tex_srt0"],
                            "sampler_names": "UNPARSED",  # never infer sampler slots from similarly named textures
                        })
                except (ValueError, KeyError, IndexError, UnicodeError) as err:
                    source["model_headers"].append({
                        "leaf": leaf_id, "parse_status": "FMAT_SOURCE_PARSER_UNSUPPORTED",
                        "error": str(err),
                    })
                bn = []
                if fres.startswith(b"BNTX"):
                    bn.append((0, fres))
                else:
                    bn.extend(valid_bntx_slices(fres))
                for off, container in bn:
                    try:
                        names = parse_bntx(container)
                        source["brti_names"].append({
                            "leaf": leaf_id,
                            "bntx_offset_hex": hex(off),
                            "native_texture_names": [r["name"] for r in names],
                            "native_count": len(names),
                        })
                    except ValueError as err:
                        source.setdefault("bntx_parse_errors", []).append(str(err))
            source["status"] = ("FMAT_STRUCTURAL_NAMES_PARSED" if source["fmats"]
                                else "NO_VERIFIED_FMAT_MATERIALS")
        except (ValueError, OSError) as err:
            source["status"] = "SOURCE_PARSE_ERROR"
            source["error"] = str(err)
    report = {
        "schema": "acnh303_babybed_fmat_static_candidates_v1",
        "sources_checked": len(results),
        "real_materials_found": sum(len(x["fmats"]) for x in results),
        "native_FMAT_material_to_BNTX_sampler_binding_verified": False,
        "native_rebody_refabric_override_verified": False,
        "native_icon_rendering_verified": False,
        "note": "Native BRTI texture names and source FMAT names are separate layers; use runtime sampler/texture-ref evidence to prove binding.",
        "sources": results,
    }
    output = (root / args.out).resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({
        "sources": len(results),
        "materials": report["real_materials_found"],
        "states": [{"name": x["source"], "status": x["status"], "materials": len(x["fmats"])} for x in results],
        "out": str(output),
    }, ensure_ascii=False))
    return 1 if any(x["status"] in ("MISSING_ORIGINAL_SOURCE", "SOURCE_PARSE_ERROR") for x in results) else 0


if __name__ == "__main__":
    raise SystemExit(main())
