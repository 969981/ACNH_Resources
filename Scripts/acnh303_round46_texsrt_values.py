#!/usr/bin/env python3
"""R46: source-bound tex_srt0 Curve -> named ShaderParam candidate and value table.

Reads R45's SHA-audited ORIGINAL byte-derived FMAA and never assumes 0xFFFF
SubBindIndex resolves a concrete renderer ShaderParam or proves game playback.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from pathlib import Path

BASE=Path("derived/3.0.3")
R45=BASE/"r45_fmaa/cedar_two_material_anims_source_curves.json"
ORIGINAL_SHA="3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f"
FRAMES=(0.0,12.5,25.0,37.5,50.0)
def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()
def offset_as_float(value):
 if not isinstance(value,int) or value<0 or value>0xffffffff:raise ValueError("invalid original float bits")
 result=struct.unpack("<f",struct.pack("<I",value))[0]
 if not math.isfinite(result):raise ValueError("nonfinite float32 offset")
 return result
def interpolate_segment(curve,frame):
 assert curve["curve_type"]=="Linear"
 t=(frame-curve["frames"][0])/(curve["frames"][1]-curve["frames"][0])
 return (1-t)*curve["keys"][0][0]*curve["scale"]+t*curve["keys"][1][0]*curve["scale"]+offset_as_float(curve["raw_offset_u32"])
def evaluate(doc):
 if doc.get("original_source_sha256")!=ORIGINAL_SHA or not doc.get("native_material_curve_bytes_decoded"):
  raise ValueError("not SHA-verified original Cedar source Curve records")
 if len(doc["native_animation_objects"])!=2:raise ValueError("Cedar source count drift")
 results=[]
 for anim in doc["native_animation_objects"]:
  if anim["animation_name"] not in ("PltTreeCedarDecoA","PltTreeCedarDecoB"):
   raise ValueError("Cedar animation name drift")
  if anim["animation_frame_count"]!=100 or len(anim["material_anim_records"])!=2:
   raise ValueError("original animation frame/material count drift")
  mats=[]
  for material in anim["material_anim_records"]:
   cs=material["curves"];infos=material["shader_param_infos"]
   if len(cs)!=1 or len(infos)!=1:raise ValueError("unmapped material-to-Curve topology")
   curve=cs[0];info=infos[0]
   if (info["name"].get("name")!="tex_srt0" or info["begin_curve"]!=0
       or info["float_curve_count"]!=1 or info["int_curve_count"]!=0):
    raise ValueError("not original tex_srt0 single float Curve")
   if (curve["status"]!="FRAME_AND_KEY_BYTES_DECODED" or curve["curve_type"]!="Linear"
       or curve["frame_format"]!="u8" or curve["key_format"]!="i8"
       or curve["frames"]!=[0,50] or curve["num_keys"]!=2
       or curve["animation_data_field_offset"]!=0x10):
    raise ValueError("source animation Curve structure not as measured")
   if curve["raw_offset_u32"]!=0x3e800000 or curve["flags"]!=0x1a:
    raise ValueError("source scale/offset flags changed")
   expected=(curve["keys"][1][0]-curve["keys"][0][0])*curve["scale"]
   if abs(expected-curve["delta"])>1e-6:
    raise ValueError("original stored Curve delta contradicts key0/key1")
   vals=[interpolate_segment(curve,f) for f in FRAMES]
   if not all(math.isfinite(v) for v in vals):raise ValueError("computed nonfinite parameter")
   if abs(vals[0]-vals[-1])<0.49:raise ValueError("unexpected original endpoint values")
   mats.append({"material_name":material["name"].get("name"),
     "param_name":"tex_srt0","param_anim_info_offset":info["source_offset"],
     "sub_bind_index":info["sub_bind_index"],
     "material_shader_parameter_slot_resolved":info["sub_bind_index"]!=65535,
     "animated_field_offset_within_param_data":curve["animation_data_field_offset"],
     "original_pre_wrap":(curve["flags"]>>8)&3,
     "original_post_wrap":(curve["flags"]>>12)&3,
     "original_key_frames":curve["frames"],"original_key_values":curve["keys"],
     "source_curve_frame_array_sha256":curve["raw_frame_array_sha256"],
     "source_curve_key_array_sha256":curve["raw_key_array_sha256"],
     "float32_offset":offset_as_float(curve["raw_offset_u32"]),
     "source_scale":curve["scale"],"source_delta":curve["delta"],
     "candidate_bounded_linear_segment":[{"frame":f,"value":v} for f,v in zip(FRAMES,vals)],
     "outside_0_to_50_or_looping_native_semantics_verified":False})
  results.append({"animation":anim["animation_name"],"animation_frame_count":100,"materials":mats})
 common=[next(x for x in a["materials"] if x["material_name"]=="mPltTreeDeco") for a in results]
 x=common[0]["candidate_bounded_linear_segment"];y=common[1]["candidate_bounded_linear_segment"]
 if any(abs(x[i]["value"]+y[i]["value"]-0.5)>1e-6 for i in range(len(FRAMES))):
  raise ValueError("A/B reverse animation source endpoints no longer complement")
 if any(m["material_shader_parameter_slot_resolved"] for a in results for m in a["materials"]):
  raise ValueError("unexpected concrete ShaderParam binding without reference Material")
 return {"schema":"acnh303-r46-original-tex_srt0-bounded-linear-values-v1",
  "original_fmaa_source_sha256":ORIGINAL_SHA,
  "R45_original_curve_report_sha256":sha(R45),
  "animations":results,
  "common_material_two_animations_complement_to":0.5,
  "verified":"original source frames, key encodings, FMAA per-material ParamAnimInfo names and Bfres-style bounded linear candidate values",
  "not_verified":["SubBindIndex 0xffff unresolved to runtime material shader param slot",
   "outside segment wrapping / original Nintendo interpolator and exact rounding",
   "live shader uniform writing and GPU material output"],
  "runtime_shader_binding_and_gameplay_parity_verified":False}
def main():
 p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();out=evaluate(json.loads(R45.read_text("utf8")))
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(out,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
 print("R46_TEXSRT",[(a["animation"],[(m["material_name"],[round(v["value"],5) for v in m["candidate_bounded_linear_segment"]]) for m in a["materials"]]) for a in out["animations"]])
if __name__=="__main__":main()
