#!/usr/bin/env python3
"""R38 correction candidate: reconstruct original native FSKL Skl_Root REST.

The R36 baseline repaired 28 singular children but retained original
Skl_Root GLB TRS that shifts all 21 weighted descendants, leading to
~4.838 rest*IBM error on *every* weighted skin joint. This script
ONLY copies the authentic source FSKL Skl_Root local TRS and gates the
result against every actually weighted native mesh joint and source IBMs.
Never overwrite original R36 GLB or claim Nintendo runtime parity.
"""
from __future__ import annotations
import argparse,hashlib,json,math,sys
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb,pack_glb,quat_xyz_deg
from acnh303_round37_pose_probe import SHA,globals_for,joint_info
ROOT="Skl_Root"
def audit(g,buf):
 ibm,counts,mesh,total=joint_info(g,buf)
 world=globals_for(g,{})
 names=[g["nodes"][j]["name"] for j in g["skins"][0]["joints"]]
 out=[]
 for i,(j,n) in enumerate(zip(g["skins"][0]["joints"],names)):
  value=float(np.max(np.abs(world[j]@ibm[i]-np.eye(4))))
  out.append({"bone":n,"weighted_vertex_influences":int(counts[i]),
              "max_abs_rest_IBM_error":value,
              "weighted":bool(counts[i])})
 return out
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--original",type=Path,required=True)
 p.add_argument("--skeleton",type=Path,required=True)
 p.add_argument("--out-glb",type=Path,required=True)
 p.add_argument("--out-report",type=Path,required=True)
 a=p.parse_args()
 raw,g,buf=readglb(a.original)
 if hashlib.sha256(raw).hexdigest()!=SHA["R36"]:raise ValueError("source R36 69-channel original immutable candidate changed")
 original_source=a.skeleton.read_bytes()
 s=json.loads(original_source)["models"][0]["real_bones"]
 if len(s)!=46:raise ValueError("original FSKL source not 46 native joints")
 byname={b["name"]:b for b in s}
 bone=byname[ROOT]
 if bone["translation"]!=[0,4.84,0] or bone["scale"]!=[1,1,1] or bone["rotation_flag"]!="EulerXYZ":
  raise ValueError("native original FSKL Skl_Root values unexpectedly changed")
 joints=g["skins"][0]["joints"]
 node_by_name={g["nodes"][j]["name"]:j for j in joints}
 if len(node_by_name)!=46:raise ValueError("original 46 native GLB joint identities changed")
 b=g["nodes"][node_by_name[ROOT]]
 if "matrix" in b:raise ValueError("original source Skl_Root unexpected matrix, do not silently replace")
 native_trs={"translation":bone["translation"],
             "scale":bone["scale"],
             "rotation":quat_xyz_deg([math.degrees(x) for x in bone["rotation"][:3]])}
 original_node={k:b.get(k) for k in ("translation","scale","rotation","matrix")}
 before=audit(g,buf)
 for key,v in native_trs.items():b[key]=v
 after=audit(g,buf)
 weighted_before=[r["max_abs_rest_IBM_error"] for r in before if r["weighted"]]
 weighted_after=[r["max_abs_rest_IBM_error"] for r in after if r["weighted"]]
 if len(weighted_after)!=21:raise ValueError("actual 21 weighted Skin joints source changed")
 # If this original-source root fix fails the strict numerical IBM gate,
 # ABORT and keep baseline unchanged; never upload an unvalidated glb.
 if max(weighted_before)<1 or max(weighted_after)>=1e-3:
  raise ValueError("authentic FSKL Skl_Root did not repair all original weighted Skin joints: "+
                   str((max(weighted_before),max(weighted_after))))
 if np.mean(weighted_after)>=np.mean(weighted_before)/1000:
  raise ValueError("native skeleton gate did not improve by >=1000x")
 candidate=pack_glb(g,buf)
 parsed,verify,vr=readglb_bytes(candidate) if False else (None,None,None)
 # Verification from actual saved path, not an in-memory output fantasy.
 a.out_glb.parent.mkdir(parents=True,exist_ok=True)
 a.out_glb.write_bytes(candidate)
 _,check,vbuf=readglb(a.out_glb)
 if len(check["animations"])!=3 or sum(len(x["channels"]) for x in check["animations"])!=69:
  raise ValueError("69 original channel contents were not preserved")
 if len(check["skins"][0]["joints"])!=46 or len(check["meshes"])!=11:
  raise ValueError("original mesh and 46-joint Skin lost")
 if max(x["max_abs_rest_IBM_error"] for x in audit(check,vbuf) if x["weighted"])>=1e-3:
  raise ValueError("serialized native rest and IBM numerical proof failed")
 # Verify original animation source buffers retained; new payload may gain a
 # few bytes of JSON but BIN binary must remain bit identical.
 if bytes(vbuf)!=bytes(buf):
  raise ValueError("source animation curves, vertices or inverse-bind bytes changed")
 report={"schema":"acnh303-r38-actual-FSKL-SklRoot-rest-repair-all-21-weighted-Skin-IBM-gated-candidate-v1",
   "source_original_R36_SHA256":SHA["R36"],
   "original_native_FSKL_JSON_SHA256":hashlib.sha256(original_source).hexdigest(),
   "source_original_meshes":len(g["meshes"]),"source_original_skin_joint_count":len(joints),
   "source_animation_channel_count":69,"unchanged_original_binary_vertex_animation_IBM_bytes":True,
   "original_FSKL_Root_bone":ROOT,"original_R36_Root_node":original_node,
   "native_FSKL_Root_original_TRS":native_trs,
   "weighted_joint_count":len(weighted_after),
   "weighted_before_max_rest_times_IBM_error":max(weighted_before),
   "weighted_after_max_rest_times_IBM_error":max(weighted_after),
   "weighted_before_mean_rest_times_IBM_error":float(np.mean(weighted_before)),
   "weighted_after_mean_rest_times_IBM_error":float(np.mean(weighted_after)),
   "all_46_joint_rest_IBM_before":before,"all_46_joint_rest_IBM_after":after,
   "unweighted_non_identity_IBM_residuals_after":[x for x in after if not x["weighted"] and x["max_abs_rest_IBM_error"]>1e-3],
   "output_GLB_SHA256":hashlib.sha256(candidate).hexdigest(),"output_GLB_bytes":len(candidate),
   "ACNH_native_runtime_animation_parity_confirmed":False,
   "Blender_renderer_parity_confirmed":False,
   "limitations":"Original native FSKL local TRS hypothesis and source IBM numerical match for 21 Skin-weighted joints. This is not a native game pose/renderer verification and cannot prove missing meshes, attach bones, material, tangents or 30fps time convention."}
 a.out_report.parent.mkdir(parents=True,exist_ok=True)
 a.out_report.write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R38_NATIVE_SKLROOT_IBM_REPAIR",len(weighted_after),max(weighted_before),max(weighted_after),
       "candidate",report["output_GLB_SHA256"],"zero",len(report["unweighted_non_identity_IBM_residuals_after"]))
if __name__=="__main__":main()
