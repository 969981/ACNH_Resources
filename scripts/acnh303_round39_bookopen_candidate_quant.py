#!/usr/bin/env python3
"""R39 source glTF vs actual Blender 31 BookOpen frames for BaseData hypotheses."""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import globals_for,channels
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--glb",type=Path,required=True)
 p.add_argument("--pose",type=Path,required=True)
 p.add_argument("--report",type=Path,required=True)
 p.add_argument("--mode",required=True,choices=["root_only","all_native_bases"])
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 raw,g,buf=readglb(a.glb)
 digest=hashlib.sha256(raw).hexdigest()
 report=json.loads(a.report.read_text())
 src=next(x for x in report["candidate_hypotheses"] if x["mode"]==a.mode)
 if src["candidate_original_source_GLB_SHA256"]!=digest:
  raise ValueError("native-source candidate GLB changed")
 b=json.loads(a.pose.read_text())
 if b["source_candidate_SHA256"]!=digest or not b["fps_set_to_30_before_original_glTF_import"]:
  raise ValueError("not real Blender candidate source")
 original=next(x for x in g["animations"] if x["name"]=="Act_BookOpen_Player")
 names=[g["nodes"][n]["name"] for n in g["skins"][0]["joints"]]
 if len(names)!=46 or len(b["BookOpen_actual_Blender_pose_frames"])!=31:
  raise ValueError("actual pose coverage wrong")
 results=[]
 for snap in b["BookOpen_actual_Blender_pose_frames"]:
  frame=snap["source_frame"]
  world=globals_for(g,channels(g,buf,original,frame))
  xyz=np.asarray([world[j][:3,3] for j in g["skins"][0]["joints"]])
  dst=np.asarray([snap["joint_world_translations"][name] for name in names])
  x=np.linalg.norm(xyz[:,None,:]-xyz[None,:,:],axis=2)
  y=np.linalg.norm(dst[:,None,:]-dst[None,:,:],axis=2)
  tri=np.triu_indices(46,1);xx=x[tri];yy=y[tri];mask=xx>1e-6
  scale=float(np.dot(xx[mask],yy[mask])/np.dot(xx[mask],xx[mask]))
  delta=np.abs(yy[mask]-xx[mask]*scale)
  if not np.isfinite(delta).all():raise ValueError("nonfinite source original glTF vs Blender")
  residue=np.abs(y-x*scale)
  worst=sorted([{"name":name,"mean":float((sum(residue[i,:])-residue[i,i])/45)}
     for i,name in enumerate(names)],key=lambda r:r["mean"],reverse=True)[:12]
  results.append({"source_frame":frame,"p95_joint_pair_distance_error":float(np.percentile(delta,95)),
    "mean_joint_pair_error":float(delta.mean()),"max_joint_pair_error":float(delta.max()),
    "fitted_scale":scale,"worst_joints":worst})
 r={"schema":"acnh303-r39-native-original-BookOpen-emptyCurves-BaseData-candidate-real-Blender-vs-glTF-31frame-pairwise-v1",
 "mode":a.mode,"native_FSKA_derived_constant_ch_count":src["new_constant_BookOpen_channels"],
 "candidate_SHA256":digest,"real_BookOpen_source_joint_count":46,"source_frames":31,
 "maxP95_pairwise_residual":max(x["p95_joint_pair_distance_error"] for x in results),
 "frame0_P95_residual":results[0]["p95_joint_pair_distance_error"],
 "frame15_P95_residual":results[15]["p95_joint_pair_distance_error"],
 "all_native_source_frame_pairwise_results":results,
 "native_game_runtime_poses_used":False,
 "interpretation":"Comparing candidate source glTF vs actual Blender import, not FSKA native game evaluator. More channels may numerically fix missing Blender NLA default without proving the game applies all BaseData."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(r,indent=2,sort_keys=True)+"\n")
 print("R39_BASEDATA_CANDIDATE_VERIFIED",a.mode,len(results),r["maxP95_pairwise_residual"],r["frame0_P95_residual"])
if __name__=="__main__":main()
