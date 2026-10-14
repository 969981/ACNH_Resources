#!/usr/bin/env python3
"""R24 real FMDL/FSKL model candidates with bounded original skeleton records.

FRES -> first FMDL -> FSKL -> bone array; validate parent indices, bone
names/rotations and cross-match to R23 source BoneAnim labels. The model and
animation may be unrelated: same names alone are NOT a proven runtime binding.
"""
import argparse,hashlib,json,math,struct
from pathlib import Path
from collections import Counter
from acnh303_media_l3 import NCA,find_leaf
from acnh303_round20_fres_arrays import bounded,u16,u32,u64,string_at,sha

SOURCES=[
"Model/BagBackpackBody0.Nin_NX_NVN.zs",
"Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs",
"Model/Ftr8fairArchReBody0.Nin_NX_NVN.zs",
"Model/Ftr8fairBenchReBody0.Nin_NX_NVN.zs",
"Model/Ftr8fairClockReBody0.Nin_NX_NVN.zs",
"Model/Ftr8fairFerriswheelReBody0.Nin_NX_NVN.zs",
"Model/Ftr8fairStallReBody0.Nin_NX_NVN.zs",
"Model/FtrJapanSwordReBody0.Nin_NX_NVN.zs",
]
def f32v(b,o,n):
    if not bounded(b,o,4*n):raise ValueError("bone float component out of bounds")
    vals=list(struct.unpack_from("<"+str(n)+"f",b,o))
    if not all(math.isfinite(x) for x in vals):raise ValueError("nonfinite base transform")
    return vals

def read_model_leaf(b,source_member):
    if len(b)<0x100 or b[:4]!=b"FRES" or u16(b,0xc)!=0xfeff:
        raise ValueError("not Switch FRES")
    vers=u32(b,8)
    major=(vers>>16)&0xffff
    if major<9:raise ValueError(f"unexpected Switch major {major}")
    fmdl=u64(b,0x28)
    if not bounded(b,fmdl,0x50) or b[fmdl:fmdl+4]!=b"FMDL":
        raise ValueError("FRES +0x28 lacks a valid first FMDL")
    name=string_at(b,u64(b,fmdl+8))
    skl=u64(b,fmdl+0x18)
    if not bounded(b,skl,0x40) or b[skl:skl+4]!=b"FSKL":
        raise ValueError(f"FMDL skeleton ptr {skl:#x} not a valid FSKL")
    num=u16(b,skl+0x38)
    smooth=u16(b,skl+0x3a)
    rigid=u16(b,skl+0x3c)
    boneptr=u64(b,skl+0x10)
    stride=0x60 if major==9 else 0x58
    ioff=0x28 if major==9 else 0x20
    if num<1 or num>10000 or not bounded(b,boneptr,num*stride):
        raise ValueError(f"FSKL bone count/span invalid: {num}, {boneptr:#x}")
    matrix_to_bone=u64(b,skl+0x18)
    inverse_ptr=u64(b,skl+0x20)
    matcount=smooth+rigid
    if matcount>num*3 or matcount>20000:
        raise ValueError("implausible smooth/rigid index count")
    if matcount and not bounded(b,matrix_to_bone,matcount*2):
        raise ValueError("FSKL matrix-to-bone index buffer out of bounds")
    if smooth and not bounded(b,inverse_ptr,smooth*48):
        raise ValueError("FSKL inverse matrices outside FRES")
    bonelist=[]
    for i in range(num):
        at=boneptr+i*stride
        bn=string_at(b,u64(b,at))
        idx=u16(b,at+ioff)
        parent=struct.unpack_from("<h",b,at+ioff+2)[0]
        flags=u32(b,at+ioff+12)
        scale=f32v(b,at+ioff+16,3)
        rotation=f32v(b,at+ioff+28,4)
        position=f32v(b,at+ioff+44,3)
        if bn is None or idx!=i or parent>=num or parent==i or parent< -1:
            raise ValueError(f"bone index/name/parent invalid at {i}: idx={idx} parent={parent} name={bn}")
        bonelist.append({"index":i,"name":bn,"parent":parent,
                         "flags":hex(flags),"scale":scale,
                         "rotation":rotation,"position":position,
                         "raw_header_sha256":sha(b[at:at+stride])})
    if not any(q["parent"]==-1 for q in bonelist):
        raise ValueError("missing skeleton root bone")
    m2b=[u16(b,matrix_to_bone+i*2) for i in range(matcount)] if matcount else []
    inv_raw=b[inverse_ptr:inverse_ptr+smooth*48] if smooth else b""
    inverse_matrices=[]
    for i in range(smooth):
        m=f32v(b,inverse_ptr+i*48,12)
        inverse_matrices.append({"matrix_index":i,
            "bone_index":m2b[i],
            "bone_name":bonelist[m2b[i]]["name"] if m2b[i]<num else None,
            "matrix3x4_row_major_raw_f32":m,
            "matrix_sha256":sha(b[inverse_ptr+i*48:inverse_ptr+(i+1)*48])})
    if any(v>=num for v in m2b):
        raise ValueError("matrix-to-bone list refers outside source bone array")
    # Parent graphs must terminate at -1; a bounded DFS catches indirect cycles.
    for node in bonelist:
        seen=set();cur=node["index"]
        while cur!=-1:
            if cur in seen:raise ValueError("cyclic parent skeleton")
            seen.add(cur)
            cur=bonelist[cur]["parent"]
    skeleton_flags=u32(b,skl+4)
    rotation_mode="euler_xyz" if skeleton_flags&0x1000 else "quaternion"
    return {"name":name,"fres_sha256":sha(b),"fres_bytes":len(b),
      "source_member":source_member,"version":hex(vers),"fmdl_file_offset":fmdl,
      "fmdl_header_sha256":sha(b[fmdl:fmdl+0x50]),
      "fskl_file_offset":skl,"fskl_header_sha256":sha(b[skl:skl+0x40]),
      "bone_array_file_offset":boneptr,"bone_stride":stride,
      "bone_count":num,"smooth_count":smooth,"rigid_count":rigid,
      "matrix_to_bone_ptr":matrix_to_bone,"matrix_to_bone_indices":m2b[:100],
      "inverse_matrix_ptr":inverse_ptr,"inverse_matrix_raw_sha256":sha(inv_raw),
      "inverse_matrix_count":smooth,"inverse_model_matrices":inverse_matrices,
      "skeleton_flags":hex(skeleton_flags),"rotation_mode_by_skeleton_flags":rotation_mode,
      "bone_hierarchy_cycle_check":"passed",
      "bones":bonelist,"verification_state":"SOURCE_LOCAL_FMDL_FSKL_BONES_VALIDATED"}

def read_animation_names(root):
    p=root/"derived/3.0.3/r23_animation_binding/basepose_fmaa.json"
    d=json.loads(p.read_text())
    if d["source_sha256"]!="97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a":
        raise ValueError("wrong animation SHA")
    return set(x[0] for x in d["top_bone_names"])

def scan(root):
    known=read_animation_names(root)
    results=[]
    for src in SOURCES:
        path=root/NCA/"1"/src
        row={"source":src}
        try:
            blob=path.read_bytes()
            row["source_sha256"]=sha(blob)
            row["source_bytes"]=len(blob)
            candidates=[]
            for leaf in find_leaf(blob,src):
                if leaf["format"]!="bfres":continue
                try:candidates.append(read_model_leaf(leaf["data"],leaf["source_member"]))
                except Exception as exc:
                    row.setdefault("rejected_fres_leaves",[]).append(f"{type(exc).__name__}:{exc}")
            row["status"]="skeleton_validated" if candidates else "no_valid_fmdl_fskl"
            row["models"]=[]
            for m in candidates:
                names={b["name"] for b in m["bones"]}
                m["common_bone_names_with_r23_animation_top30"]=sorted(names&known)
                m["overlap_count_top30"]=len(names&known)
                row["models"].append(m)
        except Exception as exc:
            row["status"]="source_error"
            row["error"]=f"{type(exc).__name__}:{exc}"
        results.append(row)
    valid=[(i,m) for i,r in enumerate(results) for m in r.get("models",[])]
    selected=None
    if valid:
        chosen=max(valid,key=lambda x:(x[1]["overlap_count_top30"],len(x[1]["bones"])))
        selected={"source":results[chosen[0]]["source"],"source_sha256":results[chosen[0]]["source_sha256"],
                  "model":chosen[1]["name"],"overlap_top30":chosen[1]["overlap_count_top30"],
                  "bone_count":chosen[1]["bone_count"]}
    return {"schema":"acnh303-r24-real-model-skeleton-selection-v1",
        "candidate_sources":len(SOURCES),"validated_sources":sum(r["status"]=="skeleton_validated" for r in results),
        "chosen_model":selected,"candidates":results,
        "verification_state":"SOURCE_LOCAL_FMDL_FSKL_NOT_PROVEN_ANIMATION_BINDING",
        "limitations":"Top-30 shared bone names only; R23 animations have null BindSkeleton and all FFFF BindIndices. Structural skeleton can be validated independently; this does not infer exact animation-model pair nor animated pose."}

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r24_model_skeleton/real_fmdl_fskl.json"))
    a=p.parse_args();d=scan(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf8")
    print("R24_FMDL_FSKL",d["validated_sources"],"/",d["candidate_sources"],"selected",d["chosen_model"])
if __name__=="__main__":main()
