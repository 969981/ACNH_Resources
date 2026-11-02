#!/usr/bin/env python3
"""R38 diagnose genuine R36 Blender vs glTF outlier bones, not native game parity."""
import argparse,hashlib,json
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import globals_for,channels,SHA
def main():
 ap=argparse.ArgumentParser()
 ap.add_argument("--glb",type=Path,required=True)
 ap.add_argument("--blender",type=Path,required=True)
 ap.add_argument("--out",type=Path,required=True)
 a=ap.parse_args()
 raw,g,buf=readglb(a.glb)
 if hashlib.sha256(raw).hexdigest()!=SHA["R36"]:raise ValueError("bad candidate source GLB")
 b=json.loads(a.blender.read_text())
 bones=[g["nodes"][j]["name"] for j in g["skins"][0]["joints"]]
 diag=[]
 for clip,bclip in zip(g["animations"],b["complete_frame_records"]):
  selected=[0,bclip["native_FSKA_SourceFrameCount"]//2,bclip["native_FSKA_SourceFrameCount"]]
  rows=[]
  for snap in bclip["blender_pose_frames"]:
   f=snap["source_frame"]
   if f not in selected:continue
   mat=globals_for(g,channels(g,buf,clip,f))
   src=np.asarray([mat[j][:3,3] for j in g["skins"][0]["joints"]])
   obs=np.asarray([snap["joint_world_translations"][name] for name in bones])
   x=np.linalg.norm(src[:,None,:]-src[None,:,:],axis=2)
   y=np.linalg.norm(obs[:,None,:]-obs[None,:,:],axis=2)
   tri=np.triu_indices(len(bones),1);xs=x[tri];ys=y[tri];mask=xs>1e-6
   scale=float(np.dot(xs[mask],ys[mask])/np.dot(xs[mask],xs[mask]))
   err=np.abs(y-scale*x)
   contribution=[]
   for i,n in enumerate(bones):
    others=err[i,np.arange(len(bones))!=i]
    contribution.append({"bone":n,"mean_abs_distance_error_vs_other_45":float(others.mean()),
     "max_abs_distance_error_vs_other_45":float(others.max()),
     "source_glTF_joint_world_translation":src[i].tolist(),
     "Blender_joint_world_translation":obs[i].tolist()})
   contribution.sort(key=lambda z:z["mean_abs_distance_error_vs_other_45"],reverse=True)
   rows.append({"frame":f,"estimated_world_scale":scale,
    "worst_bones_by_pairwise_distance_difference":contribution[:22],
    "all_bone_distance_error":contribution,
    "largest_15_bone_pair_distance_residuals":sorted([
       {"a":bones[i],"b":bones[j],"error":float(err[i,j]),
        "source_distance":float(x[i,j]),"blender_distance":float(y[i,j])}
       for i,j in zip(*tri)],key=lambda r:r["error"],reverse=True)[:15]})
  diag.append({"clip":clip["name"],"diagnostic_frames":rows})
 res={"schema":"acnh303-r38-exact-glTF-vs-Blender-bone-pair-outlier-source-GLB-diagnostics-v1",
  "source_GLB_SHA256":SHA["R36"],"original_skin_bones":bones,
  "source_native_runtime_pose_available":False,"clip_diagnostics":diag,
  "limits":"Only original GLB source and real Blender (non-Nintendo) pose positions. Large residual identifies glTF/Blender interpretation mismatch candidates, not proven game engine error."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(res,indent=2,sort_keys=True)+"\n")
 for q in diag:
  print("R38_REAL_BLENDER_POSE_OUTLIERS",q["clip"],
        [(x["frame"],[(z["bone"],round(z["mean_abs_distance_error_vs_other_45"],4))
         for z in x["worst_bones_by_pairwise_distance_difference"][:6]]) for x in q["diagnostic_frames"]])
if __name__=="__main__":main()
