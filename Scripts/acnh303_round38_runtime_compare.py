#!/usr/bin/env python3
"""R38 STRICT real-game-vs-Blender pose comparison gate.

Requires an ACTUAL external capture from running ACNH 3.0.3 and source-built
Blender pose report. Does not create, synthesize or assume a native capture.
Sample schema documented in R38 technical report; no artificial game traces.
"""
from __future__ import annotations
import argparse,hashlib,json,math
from pathlib import Path
import numpy as np
SOURCES={"real_game_capture_schema":"acnh303-r38-real-console-pose-capture-v1",
"blender_schema":"acnh303-r38-Blender-original-glTF-46-bone-every-source-frame-3-clips-v1"}
WATCH=("Clavicle_L","Clavicle_R","Wrist_L","Wrist_R","Arm_2_L",
       "Arm_2_R","Neck","Head","Waist","Leg_1_L","Leg_1_R")
def finite_vec(v):
 return (isinstance(v,list) and len(v)==3 and
         all(isinstance(x,(float,int)) and math.isfinite(x) for x in v))
def prepare_native(doc):
 if doc.get("schema")!=SOURCES["real_game_capture_schema"]:
  raise ValueError("Missing ACTUAL original 3.0.3 native pose snapshot; synthetic or wrong schema not accepted")
 if doc.get("actual_game_executable_sha256")!="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180":
  raise ValueError("Native game executable SHA provenance missing or wrong")
 if doc.get("capture_mode")!="read_only_live_game_pose":
  raise ValueError("No verified real-game read-only pose capture was provided")
 if not doc.get("capture_session_id") or not doc.get("runtime_capture_instrumentation"):
  raise ValueError("Native capture source/trace identity missing")
 if doc.get("source_glb_sha256")!="4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3":
  raise ValueError("Reference candidate GLB identity missing")
 clips=doc.get("native_source_frame_joint_samples")
 if not isinstance(clips,list) or len(clips)!=3:
  raise ValueError("Missing three actual native 3.0.3 FSKA run captures")
 for clip in clips:
  if not isinstance(clip.get("records"),list) or len(clip["records"])<3:
   raise ValueError("Actual native captures missing frames")
  for f in clip["records"]:
   if not isinstance(f.get("source_frame"),int) or not isinstance(f.get("joint_world_translations"),dict):
    raise ValueError("Native pose frame missing precise source frame index/joints")
   if not all(k in f["joint_world_translations"] and finite_vec(f["joint_world_translations"][k]) for k in WATCH):
    raise ValueError("Real native game capture missing required watched bone world XYZ")
 return clips
def fit(native,blender):
 n=np.asarray([native[x] for x in WATCH],dtype=float)
 b=np.asarray([blender[x] for x in WATCH],dtype=float)
 def pair(a):
  mat=np.linalg.norm(a[:,None,:]-a[None,:,:],axis=2)
  return mat[np.triu_indices(len(WATCH),1)]
 x=pair(b);y=pair(n)
 keep=x>1e-5
 if keep.sum()<25:raise ValueError("Native game bone coordinates degenerate")
 scale=float(np.dot(x[keep],y[keep])/np.dot(x[keep],x[keep]))
 diff=np.abs(x[keep]*scale-y[keep])
 return {"bone_count":len(WATCH),"fitted_scale":scale,
         "mean_absolute_pairwise_bone_distance_error":float(diff.mean()),
         "max_absolute_pairwise_bone_distance_error":float(diff.max()),
         "p95_absolute_pairwise_bone_distance_error":float(np.percentile(diff,95)),
         "coordinate_frame_independent":True}
def main():
 ap=argparse.ArgumentParser()
 ap.add_argument("--native",type=Path,required=True)
 ap.add_argument("--blender",type=Path,required=True)
 ap.add_argument("--out",type=Path,required=True)
 args=ap.parse_args()
 native_bytes=args.native.read_bytes()
 game=json.loads(native_bytes)
 clips=prepare_native(game)
 b=json.loads(args.blender.read_text())
 if b.get("schema")!=SOURCES["blender_schema"] or b.get("source_glb_sha256")!=game["source_glb_sha256"]:
  raise ValueError("Blender source GLB mismatch or source frame schema wrong")
 results=[]
 for i,(nclip,bclip) in enumerate(zip(clips,b["complete_frame_records"])):
  if nclip["name"]!=bclip["name"]:raise ValueError("Native and Blender 3 original FSKA clip identities differ")
  m={k["source_frame"]:k["joint_world_translations"] for k in bclip["blender_pose_frames"]}
  sampled=[]
  for f in nclip["records"]:
   if f["source_frame"] not in m:raise ValueError("Game source frame not found in Blender capture")
   sampled.append({"source_frame":f["source_frame"],
      **fit(f["joint_world_translations"],m[f["source_frame"]])})
  results.append({"clip":nclip["name"],"actual_native_tested_frames":len(sampled),
     "error_measures":sampled})
 report={"schema":"acnh303-r38-real-console-vs-Blender-frame-distance-validation-v1",
   "real_native_capture_file_sha256":hashlib.sha256(native_bytes).hexdigest(),
   "real_native_instrumentation":game["runtime_capture_instrumentation"],
   "native_capture_session_id":game["capture_session_id"],
   "compared_source_glb_sha256":game["source_glb_sha256"],
   "captured_native_frame_count":sum(x["actual_native_tested_frames"] for x in results),
   "clips":results,
   "native_output_is_verified_source_capture":True,
   "limits":"Pairwise translation invariance only; no direct original Nintendo game image FPS/render parity. Even with real native pose, rotation/mirroring and material skinning require additional comparisons."}
 args.out.parent.mkdir(parents=True,exist_ok=True)
 args.out.write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R38_REAL_GAME_VS_BLENDER_MATCH",report["captured_native_frame_count"])
if __name__=="__main__":main()
