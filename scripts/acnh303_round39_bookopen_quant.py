#!/usr/bin/env python3
"""R39 independent 31 real Blender BookOpen frames vs original GLB glTF, both modes."""
import argparse,hashlib,json
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import channels,globals_for
SHA="7f65c20b8ef115ff08225ed55498c58f2308a0d681d1e82b45ba991ff4b9a083"
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--glb",type=Path,required=True)
 p.add_argument("--blender",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 raw,g,buf=readglb(a.glb)
 if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("source real repaired FSKL GLB changed")
 b=json.loads(a.blender.read_text())
 if b["real_source_GLBSHA"]!=SHA:raise ValueError("wrong independent Blender original source")
 clip=next(x for x in g["animations"] if x["name"]=="Act_BookOpen_Player")
 names=[g["nodes"][n]["name"] for n in g["skins"][0]["joints"]]
 if len(names)!=46:raise ValueError("not 46 joints")
 cases=[]
 for entry in b["experimental_armature_BookOpen_controls"]:
  rows=[]
  for snap in entry["complete_source_bookopen_frames"]:
   f=snap["source_frame"]
   world=globals_for(g,channels(g,buf,clip,f))
   src=np.asarray([world[n][:3,3] for n in g["skins"][0]["joints"]])
   target=np.asarray([snap["joint_world_translations"][name] for name in names])
   da=np.linalg.norm(src[:,None,:]-src[None,:,:],axis=2)
   db=np.linalg.norm(target[:,None,:]-target[None,:,:],axis=2)
   tri=np.triu_indices(46,1)
   x=da[tri];y=db[tri];ok=x>1e-6
   scale=float(np.dot(x[ok],y[ok])/np.dot(x[ok],x[ok]))
   diff=np.abs(y[ok]-x[ok]*scale)
   d=np.abs(db-scale*da)
   bybone=sorted([{"bone":name,"mean_abs_err":float(np.mean(d[i,[j for j in range(46) if i!=j]]))}
       for i,name in enumerate(names)],key=lambda r:r["mean_abs_err"],reverse=True)
   rows.append({"frame":f,"p95_error":float(np.percentile(diff,95)),
     "max_error":float(diff.max()),"mean_error":float(diff.mean()),
     "scale":scale,"worst_bones":bybone[:12]})
  if len(rows)!=31:raise ValueError("all BookOpen source 31 frames not analyzed")
  cases.append({"mode":entry["mode"],"frames":31,"max_p95":max(r["p95_error"] for r in rows),
    "min_p95":min(r["p95_error"] for r in rows),"all_frame_results":rows})
 base=next(x for x in cases if x["mode"]=="untouched")
 other=next(x for x in cases if x["mode"]=="surgical_unkeyed_only")
 report={"schema":"acnh303-r39-BookOpen-source-GLB-vs-real-Blender-31frame-controlled-unkeyed-reset-v1",
  "real_FSKL_rest_GLB_SHA":SHA,
  "source_real_BookOpen_glTF_channel_count":len(clip["channels"]),
  "original_joint_count":46,"mode_comparisons":cases,
  "surgical_to_baseline_maxP95_ratio":other["max_p95"]/base["max_p95"],
  "surgical_improves_num":other["max_p95"]<base["max_p95"],
  "can_call_Nintendo_ACNH_native_game_parity":False,
  "failure_interpretation":"If surgical reset increases source/Blender error, it is a negative controlled experiment, NOT a fix; source default state and Blender glTF importer convention still need investigation."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(report,indent=2,sort_keys=True)+"\n")
 print("R39_REAL_BOOKOPEN_CONTROL",[(c["mode"],c["max_p95"]) for c in cases],
       "improves",report["surgical_improves_num"])
if __name__=="__main__":main()
