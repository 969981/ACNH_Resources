#!/usr/bin/env python3
"""R21 original-only Switch FSKA -> BoneAnim -> AnimCurve frames/keys.

Use offsets supported by Switch BfresLibrary loader and REAL file validation.
All formats are checked against original FRES bounds. No interpolated poses,
model-binding equivalence or game runtime behavior claimed.
"""
from __future__ import annotations
import argparse,hashlib,json,struct,math
from collections import Counter
from pathlib import Path
from acnh303_round20_fres_arrays import analyze as r20_analyze, sha, string_at, bounded,u16,u32,u64,SOURCE,NCA
from acnh303_media_l3 import find_leaf

ANIM_STRIDE=0x50
BONE_STRIDE=0x38
CURVE_STRIDE=0x30
MODES={0:"cubic",1:"linear",2:"baked_float",4:"step_int",5:"baked_int",6:"step_bool",7:"baked_bool"}
FRAME_DT={0:("float32",4),1:("decimal10x5",2),2:("uint8",1)}
KEY_DT={0:("float32",4),1:("int16",2),2:("int8",1)}

def f32(b,o):return struct.unpack_from("<f",b,o)[0]
def read_numbers(b,ptr,count,fmt):
    if fmt=="float32":return list(struct.unpack_from("<"+str(count)+"f",b,ptr))
    if fmt=="decimal10x5":return [x/32.0 for x in struct.unpack_from("<"+str(count)+"h",b,ptr)]
    if fmt=="uint8":return list(b[ptr:ptr+count])
    if fmt=="int16":return list(struct.unpack_from("<"+str(count)+"h",b,ptr))
    if fmt=="int8":return list(struct.unpack_from("<"+str(count)+"b",b,ptr))
    raise ValueError(fmt)

def parse_curve(b,at):
    if not bounded(b,at,CURVE_STRIDE):raise ValueError("curve header outside FRES")
    frame_ptr=u64(b,at)
    key_ptr=u64(b,at+8)
    flags=u16(b,at+0x10)
    numkeys=u16(b,at+0x12)
    target=u32(b,at+0x14)
    start=f32(b,at+0x18)
    end=f32(b,at+0x1c)
    scale=f32(b,at+0x20)
    offset=f32(b,at+0x24)
    delta=f32(b,at+0x28)
    frame_fmt=flags&3;key_fmt=(flags>>2)&3;curve_mode=(flags>>4)&7
    if numkeys==0 or numkeys>100000:raise ValueError(f"invalid_key_count:{numkeys}")
    if frame_fmt not in FRAME_DT or key_fmt not in KEY_DT or curve_mode not in MODES:
        raise ValueError(f"unrecognized_curve_flags:{flags:#x}")
    if not all(math.isfinite(x) for x in (start,end,scale,offset,delta)) or end<start:
        raise ValueError("nonfinite_or_reversed_frame_range")
    ftype,fbytes=FRAME_DT[frame_fmt]
    ktype,kbytes=KEY_DT[key_fmt]
    elements=4 if curve_mode==0 else 2 if curve_mode==1 else 1
    keycount=numkeys*elements
    if keycount>100000 or not bounded(b,frame_ptr,numkeys*fbytes) or not bounded(b,key_ptr,keycount*kbytes):
        raise ValueError("frame_or_key_blob_out_of_range")
    frames=read_numbers(b,frame_ptr,numkeys,ftype)
    keys=read_numbers(b,key_ptr,keycount,ktype)
    if any(not math.isfinite(x) for x in frames):
        raise ValueError("nonfinite_frame")
    # Some Nintendo baked curves use repeated frame indices: allow equal.
    ordered=all(frames[k]<=frames[k+1] for k in range(numkeys-1))
    frame_range_ok=frames[0]>=start-1.1 and frames[-1]<=end+1.1
    return {"header_file_offset":at,"raw_header_sha256":sha(b[at:at+CURVE_STRIDE]),
            "frame_ptr":frame_ptr,"key_ptr":key_ptr,
            "frames_blob_sha256":sha(b[frame_ptr:frame_ptr+numkeys*fbytes]),
            "keys_blob_sha256":sha(b[key_ptr:key_ptr+keycount*kbytes]),
            "flags_raw":flags,"mode":MODES[curve_mode],
            "frame_format":ftype,"key_format":ktype,
            "keyframe_count":numkeys,"elements_per_key":elements,
            "target_offset_bytes":target,
            "start":start,"end":end,"scale":scale,"offset":offset,"delta":delta,
            "frame_monotonic":ordered,"frame_range_matches_header":frame_range_ok,
            "frames_preview":frames[:12],
            "key_rows_preview":[keys[i*elements:(i+1)*elements] for i in range(min(numkeys,8))],
            "status":"raw_frames_and_keys_decoded_no_runtime_interpolation"}

def parse_anim(b,at,index,max_bone_records=48,max_curves=256):
    if not bounded(b,at,ANIM_STRIDE) or b[at:at+4]!=b"FSKA":
        raise ValueError("FSKA header out of range")
    name=string_at(b,u64(b,at+8))
    if name is None:raise ValueError("FSKA invalid string")
    frame_count=u32(b,at+0x40)
    declared_curve_count=u32(b,at+0x44)
    bone_count=u16(b,at+0x4c)
    bind_ptr=u64(b,at+0x20)
    bone_ptr=u64(b,at+0x28)
    if frame_count>100000 or bone_count>4096 or declared_curve_count>50000:
        raise ValueError("implausible_animation_header_count")
    if bone_count and (not bounded(b,bone_ptr,bone_count*BONE_STRIDE)
                       or (bind_ptr and not bounded(b,bind_ptr,bone_count*2))):
        raise ValueError("bone_array_or_bind_array_outside_fres")
    summary={"index":index,"name":name,"fres_header_offset":at,
             "raw_fska_record_sha256":sha(b[at:at+ANIM_STRIDE]),
             "frame_count":frame_count,"declared_curve_count":declared_curve_count,
             "bone_count":bone_count,"bone_ptr":bone_ptr,"bind_index_ptr":bind_ptr,
             "bound_bone_candidates":[],"bones":[],"not_scanned_bones":max(0,bone_count-max_bone_records),
             "observed_curve_headers":0,"issues":[]}
    if bind_ptr and bone_count:
        bind_indices=[u16(b,bind_ptr+i*2) for i in range(bone_count)]
        summary["bind_index_bytes_sha256"]=sha(b[bind_ptr:bind_ptr+bone_count*2])
        summary["bound_bone_candidates"]=bind_indices[:min(12,len(bind_indices))]
    for i in range(min(bone_count,max_bone_records)):
        off=bone_ptr+i*BONE_STRIDE
        name_ptr=u64(b,off)
        curve_ptr=u64(b,off+8)
        base_ptr=u64(b,off+0x10)
        flags=u32(b,off+0x28)
        bone_curve_count=b[off+0x2e]
        name_bone=string_at(b,name_ptr)
        bone={"index":i,"name":name_bone,"offset":off,
              "raw_header_sha256":sha(b[off:off+BONE_STRIDE]),
              "flags_raw":flags,"bone_curve_count":bone_curve_count,
              "curve_pointer":curve_ptr,"base_pose_pointer":base_ptr,"curves":[]}
        if name_bone is None:
            summary["issues"].append(f"bone_{i}_invalid_name")
        if bone_curve_count and not bounded(b,curve_ptr,bone_curve_count*CURVE_STRIDE):
            summary["issues"].append(f"bone_{i}_curve_array_out_of_bounds")
        else:
            for ci in range(min(bone_curve_count,max_curves-summary["observed_curve_headers"])):
                try:
                    curve=parse_curve(b,curve_ptr+ci*CURVE_STRIDE)
                    bone["curves"].append(curve)
                    if not curve["frame_monotonic"] or not curve["frame_range_matches_header"]:
                        summary["issues"].append(f"bone_{i}_curve_{ci}_frame_order_or_bounds")
                except Exception as exc:
                    summary["issues"].append(f"bone_{i}_curve_{ci}:{type(exc).__name__}:{str(exc)[:140]}")
                summary["observed_curve_headers"]+=1
        summary["bones"].append(bone)
    summary["status"]="sampled_bone_and_curve_headers" if summary["observed_curve_headers"] else "no_sampled_curve_headers"
    return summary

def analyze(root,sample=12,bones=48,curves=256):
    old=r20_analyze(root)
    file=root/NCA/"1"/SOURCE
    raw=file.read_bytes()
    b=next(v["data"] for v in find_leaf(raw,SOURCE) if v["format"]=="bfres")
    if sha(b)!=old["fres_sha256"]:raise ValueError("R20 original BFRES SHA drift")
    ska=next(t for t in old["tables"] if t["kind"]=="FSKA")
    if not ska["dictionary"]["records_reference_same_keys"]:
        raise ValueError("R20 directory identity not established")
    selected=[(i,ska["array_start"]+i*ska["stride"]) for i in
              sorted({0,1,2,3,5,10,20,50,100,200,300,405}) if i<ska["count"]][:sample]
    docs=[]
    for i,at in selected:
        try:docs.append(parse_anim(b,at,i,bones,curves))
        except Exception as exc:
            docs.append({"index":i,"offset":at,"status":"header_rejected",
                         "error":f"{type(exc).__name__}:{exc}"})
    allcurves=[c for a in docs for bone in a.get("bones",[]) for c in bone.get("curves",[])]
    all_issues=[x for a in docs for x in a.get("issues",[])]
    return {"schema":"acnh303-r21-fska-bone-curve-extracted-v1",
            "source_sha256":old["source_sha256"],"fres_sha256":sha(b),
            "known_fska_count":ska["count"],"sampled_animation_count":len(selected),
            "animations_parsed":sum(d.get("status")!="header_rejected" for d in docs),
            "raw_curve_headers_decoded":len(allcurves),
            "decoded_by_mode":dict(Counter(c["mode"] for c in allcurves)),
            "raw_frame_arrays_monotonic":sum(c["frame_monotonic"] for c in allcurves),
            "issues_count":len(all_issues),"issues_preview":all_issues[:80],
            "animations":docs,
            "verification_state":"RAW_CURVE_DATA_NO_RUNTIME_EVALUATION",
            "limits":"Only sampled animation objects; raw curve headers/frame/key arrays are decoded and SHA-verified, but no comparison to original game evaluation, bone name-to-actual-model binding, or glTF playback is asserted."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--sample",type=int,default=12)
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r21_curve_samples/bone_curves.json"))
    p.add_argument("--summary-out",type=Path,default=Path("derived/3.0.3/r21_curve_samples/curve_summary.json"))
    a=p.parse_args()
    result=analyze(a.root,sample=a.sample)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    summary={"schema":"acnh303-r21-curve-sample-concise-v1",
             "source_sha256":result["source_sha256"],"fres_sha256":result["fres_sha256"],
             "known_fska_count":result["known_fska_count"],
             "sampled_animation_count":result["sampled_animation_count"],
             "animations_parsed":result["animations_parsed"],
             "raw_curve_headers_decoded":result["raw_curve_headers_decoded"],
             "decoded_by_mode":result["decoded_by_mode"],
             "raw_frame_arrays_monotonic":result["raw_frame_arrays_monotonic"],
             "issues_count":result["issues_count"],
             "issues_preview":result["issues_preview"],
             "animation_rows":[{"index":a["index"],"name":a.get("name"),
                  "status":a.get("status"),"bone_count":a.get("bone_count"),
                  "frame_count":a.get("frame_count"),
                  "declared_curve_count":a.get("declared_curve_count"),
                  "sampled_curve_count":a.get("observed_curve_headers"),
                  "issues":a.get("issues",[])[:5]} for a in result["animations"]],
             "limits":result["limits"],"verification_state":result["verification_state"]}
    a.summary_out.parent.mkdir(parents=True,exist_ok=True)
    a.summary_out.write_text(json.dumps(summary,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R21_CURVES",result["animations_parsed"],result["raw_curve_headers_decoded"],result["decoded_by_mode"],"issues",result["issues_count"])

if __name__=="__main__":main()
