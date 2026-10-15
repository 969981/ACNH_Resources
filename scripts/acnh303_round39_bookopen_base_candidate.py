#!/usr/bin/env python3
"""R39 BookOpen two separate source-FSKA BaseData constant-track hypotheses.

Source: immutable R38 46 native-FSKL Rest 69-channel GLB + real original
57 BoneAnim native Hermite/FSKA JSON. Original 11 meshes, 46 joints, Skin
inverse-binds and all original BIN bytes remain unchanged. ONLY append an
animation's explicit constant source-backed channels, preserving all 69
original source animation channels. Two hypotheses:
  root_only = BookOpen Skl_Root constant Translate from FSKA BaseData
  all_native_bases = each matched Curve-empty bone's nonzero BaseData
                    rotation/translation, no destructive zero scale.
No runtime-native correctness claim; Blender is a cross-implementation gate.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from pathlib import Path
from acnh303_round35_export_animated_glb import readglb,pack_glb,append_accessor,quat_xyz_deg
from acnh303_round37_pose_probe import acc,globals_for,joint_info
SOURCE="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083"
def floats(v):
 if not isinstance(v,str):raise ValueError("native BaseData expected semicolon vector")
 r=[float(t) for t in v.split(";")]
 if len(r)!=3 or not all(math.isfinite(t) for t in r):raise ValueError("invalid source vector")
 return r
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--r38",type=Path,required=True);p.add_argument("--fska",type=Path,required=True)
 p.add_argument("--out-dir",type=Path,required=True);p.add_argument("--report",type=Path,required=True)
 a=p.parse_args()
 raw,original,oldbuffer=readglb(a.r38)
 if hashlib.sha256(raw).hexdigest()!=SOURCE:raise ValueError("R38 source GLB SHA incorrect")
 doc=a.fska.read_bytes();h=json.loads(doc)
 source=next(x for x in h["animations"] if x["Name"]=="Act_BookOpen_Player")
 if len(source["BoneAnims"])!=57 or source["FrameCount"]!=30:raise ValueError("native source FSKA BookOpen altered")
 expected_empties=sum(not x["Curves"] for x in source["BoneAnims"])
 if expected_empties!=42:raise ValueError("FSKA source Curves empty count unexpected")
 names={original["nodes"][j]["name"]:j for j in original["skins"][0]["joints"]}
 if len(names)!=46:raise ValueError("native FSKL 46 source joint count drifted")
 known=next(c for c in original["animations"] if c["name"]=="Act_BookOpen_Player")
 if len(known["channels"])!=15:raise ValueError("old BookOpen 15 original source channels altered")
 track_original_bytes=len(oldbuffer)
 results=[]
 for mode in ("root_only","all_native_bases"):
  _,g,buf=readglb(a.r38)
  native=next(c for c in g["animations"] if c["name"]=="Act_BookOpen_Player")
  origCount=len(native["channels"])
  source_sam=native["samplers"][0];time_acc=source_sam["input"]
  times=acc(g,buf,time_acc).reshape(-1)
  if len(times)!=121:raise ValueError("expected original source FSKA 30 frames x four samples")
  existing={(c["target"]["node"],c["target"]["path"]) for c in native["channels"]}
  patch=[]
  for b in source["BoneAnims"]:
   if b["Name"] not in names or b["Curves"]:continue
   if mode=="root_only" and b["Name"]!="Skl_Root":continue
   base=b["BaseData"]
   tx=floats(base["Translate"]);rot=floats(base["Rotate"]);scale=floats(base["Scale"])
   paths=[]
   if b["Name"]=="Skl_Root" or any(abs(v)>1e-7 for v in tx):
    paths.append(("translation",tx))
   if mode=="all_native_bases" and any(abs(v)>1e-7 for v in rot):
    paths.append(("rotation",quat_xyz_deg(rot)))
   # Native BaseData Scale=0 on many bones is a non-TRS sentinel;
   # source default/FMDL Rest scale stays intact. No fabricated scale=0.
   for path,val in paths:
    node=names[b["Name"]]
    if (node,path) in existing:raise ValueError("duplicate animated target "+b["Name"]+path)
    dim=4 if path=="rotation" else 3
    values=val*len(times)
    out=append_accessor(g,buf,struct.pack("<"+"f"*len(values),*values),dim)
    sid=len(native["samplers"])
    native["samplers"].append({"input":time_acc,"output":out,"interpolation":"LINEAR"})
    native["channels"].append({"sampler":sid,"target":{"node":node,"path":path}})
    existing.add((node,path))
    patch.append({"native_BoneAnim":b["Name"],"source_zero_curves":True,
      "base_data_fields":base,"added_path":path,"actual_native_value":val,"new_gltf_node":node,
      "source_original_rotation_units":"degrees" if path=="rotation" else None})
  if mode=="root_only" and len(patch)!=1:raise ValueError("root source BookOpen BaseData absent")
  if mode=="all_native_bases" and len(patch)<12:raise ValueError("too few native empty BaseData tracks")
  if len(g["meshes"])!=11 or sum(len(x["channels"]) for x in g["animations"])!=69+len(patch):
   raise ValueError("original 69 animation channels or mesh changed")
  g["buffers"][0]["byteLength"]=len(buf)
  candidate=pack_glb(g,buf)
  path=a.out_dir/("PlayerBody_BookOpen_FSKA_BaseData_"+mode+".glb")
  path.parent.mkdir(parents=True,exist_ok=True)
  path.write_bytes(candidate)
  serialized,chk,actual=readglb(path)
  if bytes(actual[:track_original_bytes])!=bytes(oldbuffer):raise ValueError("source original Buffer/IBM/weights altered")
  if len(chk["animations"])!=3 or sum(len(x["channels"]) for x in chk["animations"])!=69+len(patch):
   raise ValueError("glTF roundtrip clip count mismatch")
  ibm,w,_,_=joint_info(chk,actual)
  rest=globals_for(chk,{})
  weighted=[float(abs(rest[j]@ibm[i] - __import__("numpy").eye(4)).max()) for i,j in enumerate(chk["skins"][0]["joints"]) if w[i]>0]
  if len(weighted)!=21 or max(weighted)>1e-3:raise ValueError("source 21 weighted rest bind gate broken")
  results.append({"mode":mode,"original_R38_GLB_SHA256":SOURCE,
    "source_original_Hermite_BoneAnim_JSON_SHA256":hashlib.sha256(doc).hexdigest(),
    "existing_animation_channels_preserved":69,"new_constant_BookOpen_channels":len(patch),
    "total_candidate_channels":69+len(patch),
    "original_SKIN_meshes":11,"original_skin_joint_count":46,
    "source_original_BookOpen_no_curve_bone_anims":42,
    "source_original_GLB_BINARY_prefix_intact":True,
    "max_weighted_original_FSKL_Rest_times_IBM_error":max(weighted),
    "real_source_added_tracks":patch,
    "candidate_original_source_GLB_SHA256":hashlib.sha256(candidate).hexdigest(),
    "candidate_glb_path":str(path),"candidate_glb_bytes":len(candidate),
    "ACNH_original_engine_BaseData_interpretation_verified":False})
 report={"schema":"acnh303-r39-bookopen-original-FSKA-empty-Curves-native-BaseData-source-backed-constant-GLB-hypotheses-v1",
   "source_R38_GLB_SHA256":SOURCE,"source_BookOpen_total_BoneAnims":57,
   "source_BookOpen_BoneAnims_without_Curves":42,
   "source_matched_46_skin_joints":46,
   "candidate_hypotheses":results,
   "original_nintendo_native_game_pose_trace_available":False,
   "caveats":"Native source FSKA BaseData values are actual bytes decoded upstream; which ones game applies without Curves remains unverified. Zero Scale discarded deliberately. These two alternatives are distinct source-backed hypotheses, not a native-certified export. Additional glTF animated channels ensure Blender cannot inherit NLA default on those named bones."}
 a.report.parent.mkdir(parents=True,exist_ok=True)
 a.report.write_text(json.dumps(report,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
 print("R39_BOOKOPEN_BASE_CANDIDATES",[(x["mode"],x["new_constant_BookOpen_channels"],x["candidate_original_source_GLB_SHA256"]) for x in results])
if __name__=="__main__":main()
