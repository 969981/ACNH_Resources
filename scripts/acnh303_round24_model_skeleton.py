#!/usr/bin/env python3
"""R24 verified Switch BFRES model FMDL->FSKL skeleton/bone/matrix audit.

Only use actual original Model/*.zs already present in the R19 geometry
conversion audit. Parse FMDL/FSKL via their real file-header pointers,
validate bone parent graph and inverse bind matrix byte boundaries.
Compare bone names with the independently SHA-validated FSKA archive.
This does NOT prove that the standalone animation is bound to that model.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from collections import Counter
from pathlib import Path
from acnh303_media_l3 import NCA,find_leaf
from acnh303_round20_fres_arrays import analyze as anim_analyze,sha,bounded,u16,u32,u64,string_at,SOURCE

CANDIDATES=[
"Model/NpcNmlBrd08.Nin_NX_NVN.zs",
"Model/NpcNmlDog09.Nin_NX_NVN.zs",
"Model/NpcNmlPig14.Nin_NX_NVN.zs",
"Model/PlayerHair13.Nin_NX_NVN.zs",
"Model/PlayerHairCap40.Nin_NX_NVN.zs",
"Model/InsectHanakamakiri.Nin_NX_NVN.zs",
"Model/NpcSpTopsMncOuterL.Nin_NX_NVN.zs",
"Model/NpcSpTopsRcmYshirtsH.Nin_NX_NVN.zs",
"Model/ShoesKneePowered1.Nin_NX_NVN.zs",
"Model/FtrArtFifePlayer.Nin_NX_NVN.zs",
]
FMDL_STRIDE_MIN=0x70
FSKL_HEADER=0x40
BONE_STRIDE_V9=0x60

def s16(b,o):return struct.unpack_from("<h",b,o)[0]
def float_tuple(b,o,n):
    if not bounded(b,o,4*n):raise ValueError("float array outside BFRES")
    vals=struct.unpack_from("<"+str(n)+"f",b,o)
    if not all(math.isfinite(v) for v in vals):raise ValueError("non-finite matrix or bone transform")
    return list(vals)

def parse_skeleton(b,ptr,anim_names):
    if not bounded(b,ptr,FSKL_HEADER) or b[ptr:ptr+4]!=b"FSKL":
        raise ValueError("FMDL Skeleton pointer does not lead to FSKL")
    array=u64(b,ptr+0x10);dic=u64(b,ptr+8)
    bone_count=u16(b,ptr+0x38);smooth=u16(b,ptr+0x3a);rigid=u16(b,ptr+0x3c)
    matrices=u64(b,ptr+0x20);map_ptr=u64(b,ptr+0x18)
    if bone_count==0 or bone_count>10000 or smooth>bone_count or rigid>bone_count:
        raise ValueError("invalid FSKL bone/matrix counts")
    if not bounded(b,array,bone_count*BONE_STRIDE_V9):
        raise ValueError("FSKL Bone array spans outside BFRES")
    if smooth and not bounded(b,matrices,smooth*0x30):
        raise ValueError("FSKL inverse model matrices outside BFRES")
    if smooth+rigid and not bounded(b,map_ptr,(smooth+rigid)*2):
        raise ValueError("FSKL MatrixToBone span outside BFRES")
    bones=[];issues=[];match=[]
    for i in range(bone_count):
        o=array+i*BONE_STRIDE_V9
        name=string_at(b,u64(b,o))
        if name is None:raise ValueError(f"invalid Bone NWString at index {i}")
        recorded_index=u16(b,o+0x28)
        parent=s16(b,o+0x2a)
        smooth_idx=s16(b,o+0x2c)
        rigid_idx=s16(b,o+0x2e)
        flags=u32(b,o+0x34)
        scale=float_tuple(b,o+0x38,3)
        rotation=float_tuple(b,o+0x44,4)
        position=float_tuple(b,o+0x54,3)
        if parent!=-1 and not(0<=parent<bone_count):
            issues.append({"bone":i,"issue":"parent_outside_array","parent":parent})
        if recorded_index!=i:
            issues.append({"bone":i,"issue":"bone_index_disagrees_with_position","recorded":recorded_index})
        if name in anim_names:match.append(name)
        bones.append({"index":i,"name":name,"parent":parent,"smooth_matrix_index":smooth_idx,
                      "rigid_matrix_index":rigid_idx,"flags":hex(flags),
                      "scale":scale,"rotation":rotation,"position":position,
                      "record_sha256":sha(b[o:o+BONE_STRIDE_V9])})
    cycle_indices=[]
    for i in range(bone_count):
        visited=set();x=i
        while x!=-1 and 0<=x<bone_count:
            if x in visited:
                cycle_indices.append(i);break
            visited.add(x)
            x=bones[x]["parent"]
    if cycle_indices:issues.append({"issue":"parent_cycles","sample":cycle_indices[:12],"total":len(cycle_indices)})
    matrix_records=[]
    for i in range(smooth):
        off=matrices+i*0x30
        m=float_tuple(b,off,12)
        matrix_records.append({"index":i,"sha256":sha(b[off:off+0x30]),
                               "values_3x4":m if i<4 else None})
    mapping=[u16(b,map_ptr+i*2) for i in range(smooth+rigid)] if smooth+rigid else []
    for i,x in enumerate(mapping):
        if x>=bone_count:issues.append({"issue":"matrix_to_bone_out_of_bounds","index":i,"bone":x})
    return {"file_offset":ptr,"source_header_sha256":sha(b[ptr:ptr+FSKL_HEADER]),
            "bone_count":bone_count,"smooth_matrices":smooth,"rigid_matrices":rigid,
            "bone_array_file_offset":array,"bone_array_sha256":sha(b[array:array+bone_count*BONE_STRIDE_V9]),
            "inverse_bind_matrices_file_offset":matrices,
            "inverse_matrix_bytes_sha256":sha(b[matrices:matrices+smooth*0x30]) if smooth else None,
            "inverse_matrix_sample":matrix_records[:4],
            "matrix_to_bone_file_offset":map_ptr,
            "matrix_to_bone_sample":mapping[:20],
            "bones":bones,"root_bones":[x["name"] for x in bones if x["parent"]==-1],
            "name_intersection_with_standalone_fska":sorted(set(match)),
            "name_intersection_count":len(set(match)),
            "bone_names_unique":len({x["name"] for x in bones})==bone_count,
            "issues":issues,
            "status":"validated_source_skeleton_not_runtime_binding" if not issues else "structural_issues"}

def parse_model(b,offset,i,anim_names):
    if not bounded(b,offset,FMDL_STRIDE_MIN) or b[offset:offset+4]!=b"FMDL":
        raise ValueError("declared FMDL pointer has no FMDL")
    name=string_at(b,u64(b,offset+8))
    skptr=u64(b,offset+0x18)
    out={"index":i,"name":name,"fmdl_file_offset":offset,
         "fmdl_header_sha256":sha(b[offset:offset+FMDL_STRIDE_MIN]),
         "skeleton_pointer":skptr}
    if skptr==0:
        out.update(status="no_skeleton_pointer",skeleton=None)
    else:
        out.update(status="skeleton_parsed",skeleton=parse_skeleton(b,skptr,anim_names))
    return out

def anim_names_from_original(root):
    a=anim_analyze(root)
    romfs=root/NCA/"1"/SOURCE
    leaves=list(find_leaf(romfs.read_bytes(),SOURCE))
    b=next(x["data"] for x in leaves if x["format"]=="bfres")
    if sha(b)!=a["fres_sha256"]:raise ValueError("animation FRES SHA differs from R20")
    t=next(x for x in a["tables"] if x["kind"]=="FSKA")
    names=set()
    for i in range(t["count"]):
        at=t["array_start"]+i*t["stride"]
        p=u64(b,at+0x28);n=u16(b,at+0x4c)
        if n and not bounded(b,p,n*0x38):raise ValueError("animation BoneAnim array outside source")
        for k in range(n):
            s=string_at(b,u64(b,p+k*0x38))
            if s: names.add(s)
    return a,names

def inspect(root):
    audit=json.loads((root/"derived/3.0.3/model_round19_classification/coverage.json").read_text())
    source_rows={r["source_path"]:r for r in audit["records"]
                 if r["class"]=="model_geometry_bfres" and r["state"]=="converted_media"}
    _,names=anim_names_from_original(root)
    records=[];counts=Counter()
    for rel in CANDIDATES:
        if rel not in source_rows:raise ValueError("candidate not R19-verified geometry BFRES: "+rel)
        raw=(root/NCA/"1"/rel).read_bytes()
        if sha(raw)!=source_rows[rel]["source_sha256"]:
            raise ValueError("source SHA drift "+rel)
        row={"source_path":rel,"source_sha256":sha(raw),"source_bytes":len(raw),"models":[]}
        try:
            leaves=list(find_leaf(raw,rel))
            fres=[x for x in leaves if x["format"]=="bfres" and x["data"][:4]==b"FRES"]
            if not fres:raise ValueError("no original FRES geometry leaf")
            for leaf in fres:
                data=leaf["data"]
                if not bounded(data,0xe0,2):raise ValueError("short ResFile")
                declared_size=u32(data,0x1c)
                count=u16(data,0xe0)
                array=u64(data,0x28)
                if declared_size!=len(data) or not 1<=count<=200:
                    raise ValueError("ResFile declared size/model count implausible")
                if not bounded(data,array, count*FMDL_STRIDE_MIN):
                    raise ValueError("model array pointer/count outside source")
                leaf_record={"leaf_sha256":sha(data),"model_count":count,
                   "fmdl_array_file_offset":array,"models":[]}
                for i in range(count):
                    # Determine FMDL stride from measured adjacent magic; 0x80+
                    # should be confirmed before stepping, not assumed.
                    at=array+i*0x80
                    if not bounded(data,at,FMDL_STRIDE_MIN) or data[at:at+4]!=b"FMDL":
                        if i>0:raise ValueError("FMDL array stride=0x80 not confirmed")
                        at=array
                    item=parse_model(data,at,i,names)
                    leaf_record["models"].append(item)
                    if item["skeleton"] is not None:
                        counts["skeletons_parsed"]+=1
                        counts["skeleton_bones"]+=item["skeleton"]["bone_count"]
                        counts["skeleton_animation_name_matches"]+=item["skeleton"]["name_intersection_count"]
                    else:counts["models_without_skeleton"]+=1
                row["models"].append(leaf_record)
            row["status"]="source_geometry_model_inspected"
            counts["sources_inspected"]+=1
        except Exception as exc:
            row["status"]="real_source_structure_unresolved"
            row["reason"]=f"{type(exc).__name__}:{exc}"
            counts["sources_unresolved"]+=1
        records.append(row)
    return {"schema":"acnh303-r24-original-fmdl-fskl-skeleton-match-v1",
       "candidate_count":len(CANDIDATES),"previous_r19_geometry_audit":"model_round19_classification/coverage.json",
       "standalone_animation_bone_name_unique_count":len(names),
       "records":records,"audit_counts":dict(counts),
       "verification_state":"MODEL_SKELETON_STATIC_PARSE_AND_NAME_INTERSECTION_NOT_ANIMATION_BIND",
       "limits":"True FMDL/FSKL headers, bone parents and inverse matrices are audited. Overlap of bone NWStrings does not establish animation-to-model association or runtime material/skeletal binding; no runtime evidence supplied."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r24_skeleton_binding/geometry_skeleton_match.json"))
    a=p.parse_args()
    d=inspect(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R24_MODEL_SKELETON",d["audit_counts"],"names",d["standalone_animation_bone_name_unique_count"])
    print("R24_UNRESOLVED_REASONS",[(r["source_path"],r.get("reason","")) for r in d["records"] if r["status"]=="real_source_structure_unresolved"])
if __name__=="__main__":main()
