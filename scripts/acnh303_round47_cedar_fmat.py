#!/usr/bin/env python3
"""R47: SHA1 Git-blob-anchored original Cedar geometry -> FMDL/FMAt/ShaderParam source candidates.

No claim that matching names bind the R45 animation at runtime. Only reads original
compressed NCA/1 sources and in-memory decompressed FRES members.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import struct
from pathlib import Path
from acnh303_media_l3 import NCA, find_leaf

SOURCE = {
    "Model/PltTreeCedarDeco.Nin_NX_NVN.zs": (354644, "c6d27db85c3853b943bacb9d967db599e5c920ba"),
    "Model/PltTreeCedarDecoSnow.Nin_NX_NVN.zs": (541896, "34549b554b39e3d3dc5bd969c03f88cb223f28cd"),
}
R45 = Path("derived/3.0.3/r45_fmaa/cedar_two_material_anims_source_curves.json")
EXPECTED_ANIM_SHA = "3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f"

def sha256(data):
    return hashlib.sha256(data).hexdigest()

def git_blob_sha(data):
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\x00" + data).hexdigest()

def bounds(data, pos, n, label):
    if not isinstance(pos, int) or pos < 0 or n < 0 or pos + n > len(data):
        raise ValueError("%s: out of original FRES bounds pos=%s size=%s" % (label, pos, n))

def u16(data, pos):
    bounds(data, pos, 2, "u16")
    return struct.unpack_from("<H", data, pos)[0]

def u64(data, pos):
    bounds(data, pos, 8, "u64")
    return struct.unpack_from("<Q", data, pos)[0]

def u32(data, pos):
    bounds(data, pos, 4, "u32")
    return struct.unpack_from("<I", data, pos)[0]

def nw_name(data, ptr):
    if ptr == 0:
        return None
    bounds(data, ptr, 2, "NW string length")
    count = u16(data, ptr)
    if count == 0 or count > 256:
        raise ValueError("invalid NW length at %x: %s" % (ptr, count))
    bounds(data, ptr + 2, count, "NW source string")
    return data[ptr+2:ptr+2+count].rstrip(b"\x00").decode("utf-8")

def parse_fres(data):
    bounds(data, 0, 0xe0, "FRES header")
    if data[:4] != b"FRES":
        raise ValueError("not FRES")
    model_ptr = u64(data, 0x28)
    model_count = u16(data, 0xdc)
    if model_count == 0 or model_count > 128:
        return {"status":"UNSUPPORTED_MODEL_COUNT", "model_count":model_count,
                "first_model_pointer":model_ptr, "models":[], "materials":[],
                "binding_verified":False}
    bounds(data, model_ptr, model_count * 0x78, "FMDL contiguous array")
    models=[]
    materials=[]
    for midx in range(model_count):
        mp=model_ptr + midx * 0x78
        if data[mp:mp+4] != b"FMDL":
            raise ValueError("FMDL stride 0x78 did not match original v9 array at model index "+str(midx))
        model_name = nw_name(data, u64(data, mp + 8))
        material_ptr = u64(data, mp + 0x38)
        material_count = u16(data, mp + 0x6c)
        if material_count > 256:
            raise ValueError("unbounded FMAT count")
        if material_count:
            bounds(data, material_ptr, material_count * 0xa8, "FMDL FMAT array")
        model_materials=[]
        for i in range(material_count):
            p = material_ptr + i * 0xa8
            if data[p:p+4] != b"FMAT":
                raise ValueError("FMAT model=%d item=%d model_ptr=%x material_ptr=%x material_count=%d observed=%s first_fmat=%x" % (midx,i,mp,material_ptr,material_count,data[p:p+48].hex(),data.find(b"FMAT")))
            name = nw_name(data, u64(data, p + 8))
            param_ptr = u64(data, p + 0x48)
            source_ptr = u64(data, p + 0x58)
            param_count = u16(data, p + 0x96)
            source_len = u16(data, p + 0x9a)
            if param_count > 1024:
                raise ValueError("unbounded FMAT source parameter count")
            if param_count:
                bounds(data, param_ptr, param_count * 0x20, "FMAT ShaderParam array")
            if source_len:
                bounds(data, source_ptr, source_len, "FMAT raw shader param buffer")
            params = []
            for j in range(param_count):
                q = param_ptr + j * 0x20
                param_name = nw_name(data, u64(data, q + 8))
                data_offset = u16(data, q + 0x12)
                size = data[q + 0x11]
                offset_verified = bool(source_len and size and data_offset + size <= source_len)
                value = data[source_ptr+data_offset:source_ptr+data_offset+size] if offset_verified else b""
                params.append({
                    "name":param_name, "entry_offset":q, "type_raw_byte":data[q+0x10],
                    "declared_data_size":size, "data_offset_within_source":data_offset,
                    "shader_uniform_offset_raw_u32":u32(data, q+0x14),
                    "source_offset_and_length_bounded":offset_verified,
                    "raw_source_param_bytes_sha256":sha256(value) if offset_verified else None,
                    "raw_source_param_prefix_hex":value[:32].hex() if offset_verified else None
                })
            item={"name":name, "model_name":model_name, "model_array_index":midx,
                  "header_offset":p, "source_param_buffer_offset":source_ptr,
                  "source_param_buffer_size":source_len, "source_param_count":param_count,
                  "source_param_buffer_sha256":sha256(data[source_ptr:source_ptr+source_len]) if source_len else None,
                  "shader_params":params}
            model_materials.append(item)
            materials.append(item)
        models.append({"model_index":midx, "model_header_offset":mp,
                       "model_name":model_name, "material_count":material_count,
                       "material_array_offset":material_ptr,
                       "materials":model_materials})
    return {"status":"STRUCTURAL_FMDL_FMAT_SHADERPARAM_READ",
            "model_count":model_count, "first_model_pointer":model_ptr,
            "model_name":models[0]["model_name"] if len(models)==1 else None,
            "models":models,"materials":materials,"binding_verified":False}

def analyze(root=Path(".")):
    anim = json.loads(R45.read_text("utf-8"))
    if anim.get("original_source_sha256") != EXPECTED_ANIM_SHA or not anim.get("native_material_curve_bytes_decoded"):
        raise ValueError("R45 original Cedar FMAA provenance missing")
    targets = {(m["name"]["name"], info["name"]["name"])
               for a in anim["native_animation_objects"]
               for m in a["material_anim_records"]
               for info in m["shader_param_infos"]}
    models = []
    candidates = []
    for path, (source_size, blob_sha) in SOURCE.items():
        raw = (root / NCA / "1" / path).read_bytes()
        if len(raw) != source_size or git_blob_sha(raw) != blob_sha:
            raise ValueError("original Git tree blob size/SHA mismatch: " + path)
        leaves = [x for x in find_leaf(raw, path) if x["data"].startswith(b"FRES")]
        if len(leaves) != 1:
            raise ValueError("expected exactly one FRES source member: " + path)
        payload = leaves[0]["data"]
        source = parse_fres(payload)
        source.update({"source_relative":path, "original_compressed_git_blob_sha1":blob_sha,
                       "compressed_source_sha256":sha256(raw), "member_sha256":sha256(payload),
                       "member_size":len(payload), "member_name":leaves[0].get("source_member")})
        for m in source["materials"]:
            for param in m["shader_params"]:
                if (m["name"], param["name"]) in targets:
                    candidates.append({"source_relative":path, "model_name":source.get("model_name"),
                        "material_name":m["name"], "param_name":param["name"],
                        "source_shader_param_data_offset":param["data_offset_within_source"],
                        "shader_param_data_length":param["declared_data_size"],
                        "source_param_buffer_sha256":m["source_param_buffer_sha256"],
                        "shader_param_entry_offset":param["entry_offset"],
                        "static_name_match_only_runtime_binding_proven":False})
        models.append(source)
    return {"schema":"acnh303-r47-source-fmat-texsrt-candidate-v1",
        "R45_original_anim_sha256":EXPECTED_ANIM_SHA,
        "R45_curve_report_sha256":sha256(R45.read_bytes()),
        "models":models, "matched_animation_material_shader_param_names":candidates,
        "candidate_count":len(candidates),
        "source_structural_matches_not_runtime_bindings":True,
        "native_material_animation_binding_verified":False,
        "original_game_shader_uniform_write_verified":False,
        "limits":"Source FMAT/ShaderParam fields only. Material name agreement cannot resolve the runtime SubBindIndex=0xFFFF or assert native animation and GPU playback."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    data=analyze(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(data,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R47_CEDAR_FMAT",[(m["source_relative"],m["status"],m.get("model_count"),m.get("first_model_pointer"),len(m["materials"])) for m in data["models"]],
          "candidate_count=",data["candidate_count"])
if __name__=="__main__":
    main()
