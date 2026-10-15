#!/usr/bin/env python3
"""Compare REAL Blender frame joint distances with source R36 glTF curve replay.

Distance matrix is invariant under axis rotations/translations. Estimate
uniform scale rather than assert Blender/ACNH/world pose spaces identical.
This comparator NEVER compares to an invented game runtime trace.
"""
import argparse,hashlib,json
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import channels,globals_for,SHA
def pairwise(a):
 return np.linalg.norm(a[:,None,:]-a[None,:,:],axis=2)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--glb",type=Path,required=True)
 p.add_argument("--blender",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();raw,g,buf=readglb(a.glb)
 if hashlib.sha256(raw).hexdigest()!="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083":raise ValueError("wrong original source GLB")
 b=json.loads(a.blender.read_text())
 if b["source_glb_sha256"]!=SHA["R36"] or not b["authentic_Nintendo_ACNH_3_0_3_runtime_pose_captured"] is False:
  raise ValueError("Blender pose provenance invalid")
 names=[g["nodes"][n]["name"] for n in g["skins"][0]["joints"]]
 if len(names)!=46 or len(set(names))!=46:raise ValueError("original 46 skin bone names invalid")
 reference=[]
 for i,clip in enumerate(g["animations"]):
  source=b["complete_frame_records"][i]
  if source["name"]!=clip["name"]:raise ValueError("native source clip order mismatch")
  rows=[]
  for snap in source["blender_pose_frames"]:
   frame=snap["source_frame"]
   ov=channels(g,buf,clip,frame)
   world=globals_for(g,ov)
   gltf=np.asarray([world[j][:3,3] for j in g["skins"][0]["joints"]])
   if set(snap["joint_world_translations"])!=set(names):
    raise ValueError("Blender bone name coverage not equal to actual glTF Skin")
   actual=np.asarray([snap["joint_world_translations"][name] for name in names])
   x=pairwise(gltf);y=pairwise(actual)
   tri=np.triu_indices(len(names),1)
   xv=x[tri];yv=y[tri]
   mask=xv>1e-6
   xx=xv[mask];yy=yv[mask]
   if len(xx)<500:raise ValueError("source pose insufficient nonzero distances")
   scale=float(np.dot(xx,yy)/np.dot(xx,xx))
   abs_err=np.abs(yy-xx*scale)
   rel=abs_err/np.maximum(yy,1e-3)
   no_scale_err=np.abs(yy-xx)
   if not np.isfinite(abs_err).all():raise ValueError("nonfinite Blender pose")
   rows.append({"source_frame":frame,"pair_count":len(xx),
     "fitted_uniform_world_scale":scale,
     "scaled_world_joint_distance_mean_absolute_error":float(np.mean(abs_err)),
     "scaled_world_joint_distance_max_absolute_error":float(np.max(abs_err)),
     "scaled_world_joint_distance_p95_abs_error":float(np.percentile(abs_err,95)),
     "scaled_relative_distance_p95":float(np.percentile(rel,95)),
     "unscaled_pairwise_distance_max_abs_error":float(np.max(no_scale_err)),
     "has_game_native_pose_reference":False})
  reference.append({"clip":clip["name"],"tested_source_frames":len(rows),
    "all_frame_pairwise_invariant_comparisons":rows,
    "max_scaled_p95_distance_error":max(x["scaled_world_joint_distance_p95_abs_error"] for x in rows),
    "max_scaled_max_distance_error":max(x["scaled_world_joint_distance_max_absolute_error"] for x in rows)})
 r={"schema":"acnh303-r38-native-FSKL-rest-GLB-93-frame-46-joint-vs-real-Blender-pose-distance-v1",
   "source_R38_FSKL_fixed_GLB_SHA":SHA["R36"],"joint_name_count":len(names),
   "bone_names":names,"tested_clip_count":len(reference),
   "tested_actual_Blender_source_frames":sum(x["tested_source_frames"] for x in reference),
   "source_gltf_and_blender_pairwise_frame_results":reference,
   "coordinate_basis_handling":"Rotation/translation invariant pairwise joint distances with fitted uniform scale for each frame. This does not prove handedness/orientation/render parity.",
   "actual_Nintendo_ACNH_game_frame_trace_present":False,
   "native_game_vs_Blender_pose_error":None,
   "runtime_sampling_error":None,
   "limits":"A quantitative original glTF versus Blender evaluator check, NOT comparison with game frames. Source native game runtime pose/camera/FPS needed to measure ACNH-vs-Blender errors."}
 a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R38_FULL_FRAME_BLENDER_GLTF_PAIRWISE",r["tested_actual_Blender_source_frames"],
   [(x["clip"],x["max_scaled_p95_distance_error"],x["max_scaled_max_distance_error"]) for x in reference])
if __name__=="__main__":main()
