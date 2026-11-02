#!/usr/bin/env python3
"""R48: cross-check real R46 FMAA curve evidence against R47 FMAT source bytes.

This is a static candidate join ONLY: never infer original runtime binding,
texture movement, GPU uniform writes, or AAL FileOpen from name equality.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path

R46 = Path("derived/3.0.3/r46/cedar_texsrt_bounded_candidate_values.json")
R47 = Path("derived/3.0.3/r47/cedar_fmat_essential_summary.json")
AMTA_ISSUE = "This analysis is unrelated to BARS sound name and loop semantics."


def read_with_sha(path: Path):
    raw = path.read_bytes()
    return json.loads(raw), hashlib.sha256(raw).hexdigest()


def join(curve: dict, model: dict) -> dict:
    if curve.get("schema") != "acnh303-r46-original-tex_srt0-bounded-linear-values-v1":
        raise ValueError("unsupported R46 source evidence")
    if model.get("candidate_count") != 8 or len(model.get("matches", [])) != 8:
        raise ValueError("unsupported R47 original FMAT source evidence")
    if curve.get("runtime_shader_binding_and_gameplay_parity_verified") is not False:
        raise ValueError("unexpected R46 runtime claim")
    if model.get("original_game_shader_uniform_write_verified") is not False:
        raise ValueError("unexpected R47 uniform-write claim")
    if curve.get("original_fmaa_source_sha256") != "3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f":
        raise ValueError("FMAA source SHA changed")

    animation_map = {}
    generic_unmatched = []
    for anim in curve["animations"]:
        if anim["animation"] not in ("PltTreeCedarDecoA", "PltTreeCedarDecoB"):
            raise ValueError("unknown FMAA animation")
        for mat in anim["materials"]:
            if mat["param_name"] != "tex_srt0" or mat["animated_field_offset_within_param_data"] != 16:
                raise ValueError("unexpected FMAA animated field")
            if mat["sub_bind_index"] != 65535 or mat["material_shader_parameter_slot_resolved"]:
                raise ValueError("unexpected FMAA binding claim")
            key = mat["material_name"]
            if key == "mPltTreeDeco":
                generic_unmatched.append({"animation": anim["animation"], "material": key})
            else:
                if key in animation_map:
                    raise ValueError("multiple animations target one named material")
                animation_map[key] = {"animation": anim["animation"], "frame_samples": mat["candidate_bounded_linear_segment"]}
    if set(animation_map) != {"mPltTreeDecoA", "mPltTreeDecoB"} or len(generic_unmatched) != 2:
        raise ValueError("unexpected original FMAA material mapping")

    entries = []
    identities = set()
    for m in model["matches"]:
        name = m["material_name"]
        if name not in animation_map or m["param_name"] != "tex_srt0":
            raise ValueError("unrecognized real FMAT matching candidate")
        if m["shader_param_data_length"] != 24 or m["source_shader_param_data_offset"] != 0x184:
            raise ValueError("FMAT TexSrt byte layout drift")
        if m["static_name_match_only_runtime_binding_proven"] is not False:
            raise ValueError("unverified model material binding mislabeled")
        source_name = m["source_relative"]
        if source_name not in ("Model/PltTreeCedarDeco.Nin_NX_NVN.zs",
                               "Model/PltTreeCedarDecoSnow.Nin_NX_NVN.zs"):
            raise ValueError("unrecognized original model source")
        ident = (source_name, m["model_name"], name)
        if ident in identities:
            raise ValueError("duplicated FMAT candidate identity")
        identities.add(ident)
        samples = animation_map[name]["frame_samples"]
        if [float(x["frame"]) for x in samples] != [0.0,12.5,25.0,37.5,50.0]:
            raise ValueError("unexpected original curve sample grid")
        if not all(0.0-1e-5 <= x["value"] <= 0.5+1e-5 for x in samples):
            raise ValueError("unexpected curve candidate values")
        entries.append({
            "original_source": source_name,
            "fmdl_model": m["model_name"], "fmat_material": name,
            "animation": animation_map[name]["animation"],
            "shader_param": "tex_srt0",
            "original_shader_param_data_offset": 0x184,
            "field_offset_within_texsrt": 0x10,
            "source_data_offset_candidate_for_translation_x": 0x194,
            "param_data_size": 24,
            "shader_param_source_buffer_sha256": m["source_param_buffer_sha256"],
            "bounded_offline_curve_samples": samples,
            "native_sub_bind_index": 65535,
            "runtime_binding_verified": False,
            "gpu_texture_motion_verified": False,
        })
    if len(entries) != 8 or len(set(v["original_source"] for v in entries)) != 2:
        raise ValueError("incomplete Cedar FMAT source candidate join")
    return {
        "schema": "acnh303-r48-texsrt-fmaa-fmat-source-candidate-join-v1",
        "original_fmaa_sha256": curve["original_fmaa_source_sha256"],
        "candidate_materials": len(entries),
        "offline_curve_samples": sum(len(e["bounded_offline_curve_samples"]) for e in entries),
        "source_relative_texsrt_offset": "0x184",
        "hypothesized_translation_x_source_offset": "0x194",
        "entries": entries, "unmatched_fmaa_material_records": generic_unmatched,
        "evidence_level": "R45-R47 SOURCE_STRUCTURAL_AND_STATIC_NAME_ONLY",
        "runtime_shader_binding_verified": False,
        "runtime_AAL_FileOpen_Read_Close_verified": False,
        "limitations": ("FMAA SubBindIndex=0xFFFF, no runtime material owner or write. "
                        "No game frames or GLB/Shader GPU semantics proven. " + AMTA_ISSUE)
    }


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--curves", type=Path, default=R46)
    p.add_argument("--models", type=Path, default=R47)
    p.add_argument("--out", type=Path, default=Path("r48-static-join.json"))
    args = p.parse_args()
    curve, curve_sha = read_with_sha(args.curves)
    model, model_sha = read_with_sha(args.models)
    record = join(curve, model)
    record["R46_evidence_file_sha256"] = curve_sha
    record["R47_evidence_file_sha256"] = model_sha
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(record, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(json.dumps({"candidates":record["candidate_materials"],
                      "samples":record["offline_curve_samples"],
                      "binding":"UNVERIFIED"}, ensure_ascii=False))


if __name__ == "__main__":
    main()
