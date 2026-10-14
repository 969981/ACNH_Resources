#!/usr/bin/env python3
"""ACNH303 R23: original Switch BFRES FSKA bind/base-pose and FMAA headers.

Read-only. Pointer/count/type checks are stronger than magic scans, but a
null BindSkeleton is NOT a skeleton. Does not invent external model links.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from collections import Counter
from pathlib import Path
from acnh303_round20_fres_arrays import analyze as r20_analyze,NCA,SOURCE,sha,bounded,u16,u32,u64,string_at
from acnh303_media_l3 import find_leaf

def f32v(b,offset,n):
    if not bounded(b,offset,4*n):raise ValueError("base pose data outside FRES")
    x=struct.unpack_from("<"+str(n)+"f",b,offset)
    if not all(math.isfinite(y) for y in x):raise ValueError("nonfinite pose")
    return list(x)

def base_pose(b,ptr,flags):
    known=flags&0x38
    if not known:return {"status":"not_declared","components":{},"required_bytes":0}
    sz=(12 if known&8 else 0)+(16 if known&16 else 0)+(12 if known&32 else 0)
    if not ptr:return {"status":"null_pointer_for_declared_components","required_bytes":sz}
    if not bounded(b,ptr,sz):return {"status":"out_of_bounds","required_bytes":sz}
    off=ptr;components={}
    for bit,name,count in ((8,"scale",3),(16,"rotation",4),(32,"translation",3)):
        if known&bit:
            components[name]=f32v(b,off,count);off+=4*count
    return {"status":"decoded_finite_components","raw_sha256":sha(b[ptr:ptr+sz]),
            "file_offset":ptr,"required_bytes":sz,"components":components}

def material_header(b,at,index):
    if not bounded(b,at,0x70) or b[at:at+4]!=b"FMAA":
        raise ValueError("invalid FMAA record")
    name=string_at(b,u64(b,at+8))
    if name is None:raise ValueError("invalid FMAA name")
    frame_count=u32(b,at+0x58)
    material_count=u16(b,at+0x62)
    curve_count=u16(b,at+0x64)
    mat_ptr=u64(b,at+0x28)
    bind_ptr=u64(b,at+0x20)
    if frame_count>100000 or material_count>16000 or curve_count>200000:
        raise ValueError("implausible FMAA metadata")
    # Switch MaterialAnimData contains 5 x u64, 9 x u16, 6 bytes pad = 0x40.
    if material_count and not bounded(b,mat_ptr,material_count*0x40):
        raise ValueError("FMAA child records outside source")
    if material_count and bind_ptr and not bounded(b,bind_ptr,material_count*2):
        raise ValueError("FMAA binding indices outside source")
    binds=[u16(b,bind_ptr+2*i) for i in range(material_count)] if bind_ptr else []
    children=[]
    parsed_curves=0
    for i in range(material_count):
        off=mat_ptr+i*0x40
        material_name=string_at(b,u64(b,off))
        ptrs=[u64(b,off+8*k) for k in range(1,5)]
        child_curve_count=u16(b,off+0x38)
        if child_curve_count and not bounded(b,ptrs[2],child_curve_count*0x30):
            raise ValueError("FMAA child AnimCurve array outside source")
        parsed_curves+=child_curve_count
        children.append({"index":i,"name":material_name,"record_at":off,
                         "record_sha256":sha(b[off:off+0x40]),
                         "curve_ptr":ptrs[2],"curve_count":child_curve_count})
    return {"index":index,"name":name,"record_at":at,
            "record_sha256":sha(b[at:at+0x70]),
            "frame_count":frame_count,"material_count":material_count,
            "declared_curve_count":curve_count,
            "parsed_child_curve_headers":parsed_curves,
            "bind_model_ptr":u64(b,at+0x18),
            "bind_indices_ptr":bind_ptr,
            "bind_indices_sha256":sha(b[bind_ptr:bind_ptr+2*material_count]) if binds else None,
            "unbound_entries":sum(v==65535 for v in binds),
            "material_names_valid":all(c["name"] for c in children),
            "material_children":children[:12],
            "material_children_omitted":max(0,len(children)-12),
            "status":"record_and_child_arrays_validated_not_material_evaluation"}

def inspect(root):
    prev=r20_analyze(root)
    raw=(root/NCA/"1"/SOURCE).read_bytes()
    fres=next(x["data"] for x in find_leaf(raw,SOURCE) if x["format"]=="bfres")
    if sha(fres)!=prev["fres_sha256"]:raise ValueError("R20 source SHA drift")
    ska=next(t for t in prev["tables"] if t["kind"]=="FSKA")
    maa=next(t for t in prev["tables"] if t["kind"]=="FMAA")
    if not all(t["dictionary"]["records_reference_same_keys"] for t in (ska,maa)):
        raise ValueError("R20 dictionary key-to-record relationship missing")
    bones=0;binds=0;null_skeleton=0
    components=Counter();unbound=0;poses_failed=Counter()
    samples=[];bone_names=Counter()
    for i in range(ska["count"]):
        off=ska["array_start"]+i*ska["stride"]
        n=u16(fres,off+0x4c)
        bone_ptr=u64(fres,off+0x28)
        bind_ptr=u64(fres,off+0x20)
        skeleton=u64(fres,off+0x18)
        null_skeleton+=int(skeleton==0)
        if n and not bounded(fres,bone_ptr,n*0x38):raise ValueError("FSKA bone span invalid")
        if n and bind_ptr and not bounded(fres,bind_ptr,n*2):raise ValueError("FSKA bone bind span invalid")
        bones+=n
        bound_indices=[u16(fres,bind_ptr+2*k) for k in range(n)] if bind_ptr else []
        binds+=len(bound_indices)
        unbound+=sum(v==65535 for v in bound_indices)
        item={"index":i,"name":string_at(fres,u64(fres,off+8)),
              "bone_count":n,"skeleton_pointer":skeleton,
              "bind_indices_pointer":bind_ptr,"observed_bind_indices":len(bound_indices),
              "unbound_count":sum(v==65535 for v in bound_indices),
              "bone_samples":[]}
        for k in range(n):
            at=bone_ptr+k*0x38
            bone_name=string_at(fres,u64(fres,at))
            if bone_name is None:raise ValueError("invalid bone name")
            bone_names[bone_name]+=1
            flags=u32(fres,at+0x28)
            pose=base_pose(fres,u64(fres,at+0x10),flags)
            poses_failed[pose["status"]]+=1
            for name in pose.get("components",{}):components[name]+=1
            if i<3 and k<4:
                item["bone_samples"].append({"bone_name":bone_name,
                    "bind_index":bound_indices[k] if bound_indices else None,
                    "flags":hex(flags),"pose":pose,
                    "curve_count":fres[at+0x2e]})
        if i<15:samples.append(item)
    mats=[];mcounts=Counter()
    for i in range(maa["count"]):
        at=maa["array_start"]+i*maa["stride"]
        x=material_header(fres,at,i)
        mcounts["material_objects"]+=x["material_count"]
        mcounts["declared_curves"]+=x["declared_curve_count"]
        mcounts["parsed_curves"]+=x["parsed_child_curve_headers"]
        mcounts["unbound"]+=x["unbound_entries"]
        mats.append(x)
    embedded_fskl=[i for i in range(len(fres)-4)
                   if fres[i:i+4]==b"FSKL"]
    # A magic alone is not proof of valid model skeleton.
    return {"schema":"acnh303-r23-skeletal-binding-basepose-material-v1",
      "source_sha256":prev["source_sha256"],"fres_sha256":sha(fres),
      "fska_count":ska["count"],"fmaa_count":maa["count"],
      "total_bone_records":bones,"total_available_bind_indices":binds,
      "unbound_bind_index_ffff_count":unbound,
      "null_bind_skeleton_pointers":null_skeleton,
      "base_pose_statuses":dict(poses_failed),
      "base_pose_component_counts":dict(components),
      "top_bone_names":bone_names.most_common(30),
      "sample_fska_bones":samples,
      "fmaa_aggregate_counts":dict(mcounts),"fmaa_records":mats,
      "embedded_fskl_magic_offsets_bounded":embedded_fskl[:100],
      "embedded_fskl_magic_count":len(embedded_fskl),
      "verification_state":"SOURCE_LOCAL_BIND_BASEPOSE_MATERIAL_STRUCTURES_NOT_EXTERNAL_SKELETON_OR_NATIVE_ANIMATOR",
      "limitations":"FSKA's BindSkeleton may be null in standalone animation BFRES. Bind indices alone cannot establish an external model skeleton, coordinate transforms, base matrix or runtime rendering. FMAA child arrays/counts still need material parameter semantics and native evaluation."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r23_animation_binding/basepose_fmaa.json"))
    a=p.parse_args()
    d=inspect(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf8")
    print("R23_BIND_FMAA",d["fska_count"],d["total_bone_records"],"base",d["base_pose_statuses"],"fmaa",d["fmaa_aggregate_counts"],"null_bind_skeleton",d["null_bind_skeleton_pointers"])
if __name__=="__main__":main()
