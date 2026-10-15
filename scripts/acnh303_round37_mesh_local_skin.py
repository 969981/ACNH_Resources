#!/usr/bin/env python3
"""R37 independently verify actual weighted/skinned GLB vertex poses in mesh-local frame.

Using real POSITION JOINTS_0 WEIGHTS_0 and glTF's inverse(meshWorld) *
jointWorld * inverseBindMatrix. This is CPU mathematical skinning, not GPU
render or original-game truth. All input GLB SHA locked.
"""
import argparse,hashlib,json,math
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb
from acnh303_round37_pose_probe import SHA,acc,channels,globals_for,joint_info

def run_one(path,label):
 raw,g,buf=readglb(path)
 if hashlib.sha256(raw).hexdigest()!=SHA[label]:raise ValueError("input GLB SHA mismatch")
 skin=g["skins"][0];joints=skin["joints"]
 ibm,counts,mnodes,nonzero=joint_info(g,buf)
 weighted=[i for i,n in enumerate(counts) if n>0]
 if not weighted:raise ValueError("no real source skin weights")
 output=[]
 for ci,clip in enumerate(g["animations"]):
  frames=[0.,.25,.5,1.,float({"R35":[28,30,32],"R36":[28,30,32]}[label][ci]/2)]
  stages=[]
  for frame in frames:
   over=channels(g,buf,clip,frame)
   world=globals_for(g,over)
   rows=[]
   for mn in mnodes:
    if mn["skin_index"]!=0:continue
    mesh_node=mn["mesh_node_index"]
    if abs(np.linalg.det(world[mesh_node]))<1e-10:
     raise ValueError("original mesh world transform singular")
    inv=np.linalg.inv(world[mesh_node])
    palette=np.asarray([inv@world[j]@bind for j,bind in zip(joints,ibm)])
    global_weighted_errors=[float(np.max(np.abs(palette[idx]-np.eye(4)))) for idx in weighted]
    for pi,prim in enumerate(g["meshes"][mn["mesh_index"]]["primitives"]):
     attrs=prim["attributes"]
     if not all(x in attrs for x in ("POSITION","JOINTS_0","WEIGHTS_0")):
      rows.append({"mesh_node":mn["node_name"],"primitive":pi,"status":"no_complete_skin_attributes"})
      continue
     pos=acc(g,buf,attrs["POSITION"])
     ids=acc(g,buf,attrs["JOINTS_0"]).astype(int)
     weights=acc(g,buf,attrs["WEIGHTS_0"])
     if not (pos.shape[1]==3 and ids.shape[1]==4 and weights.shape[1]==4 and len(pos)==len(ids)==len(weights)):
      raise ValueError("skinning array bounds mismatch")
     if "JOINTS_1" in attrs or "WEIGHTS_1" in attrs:
      raise ValueError("dual JOINTS_1/WEIGHTS_1 requires explicit support before claiming skin audit")
     if not np.isfinite(pos).all():raise ValueError("nonfinite source vertex")
     step=max(1,len(pos)//4096)
     p=pos[::step];ix=ids[::step];w=weights[::step]
     h=np.column_stack((p,np.ones(len(p))))
     transformed=np.zeros((len(p),3),dtype=float)
     sums=np.sum(w,axis=1)
     for i in range(4):
      idx=ix[:,i]
      if np.any((idx<0)|(idx>=46)):raise ValueError("out-of-range Skin joint in actual vertex")
      transformed+=w[:,i,None]*np.einsum("nij,nj->ni",palette[idx,:3,:],h)
     if not np.isfinite(transformed).all():raise ValueError("skinned vertices nonfinite")
     lo=np.min(transformed,axis=0);hi=np.max(transformed,axis=0)
     plo=np.min(p,axis=0);phi=np.max(p,axis=0)
     rows.append({"mesh_node":mn["node_name"],"primitive":pi,"status":"actual_real_weighted_vertex_cpu_skinning",
       "source_vertex_count":len(pos),"tested_vertex_count":len(p),
       "influence_weight_sum_min":float(np.min(sums)),
       "influence_weight_sum_max":float(np.max(sums)),
       "original_position_extent":[float(x) for x in phi-plo],
       "skinned_position_extent":[float(x) for x in hi-lo],
       "skinned_bbox_min":[float(x) for x in lo],
       "skinned_bbox_max":[float(x) for x in hi],
       "unique_nonzero_weighted_joint_ids":int(np.unique(ix[w>1e-5]).size),
       "active_weighted_palette_rest_identity_residual_max":max(global_weighted_errors)})
   stages.append({"frame":frame,"tested_skinned_primitives":rows})
  output.append({"name":clip["name"],"stages":stages})
 return {"sha256":hashlib.sha256(raw).hexdigest(),"real_skin_joint_weight_count":nonzero,
  "real_skinned_mesh_nodes":[x for x in mnodes if x["skin_index"]==0],
  "unskinned_mesh_nodes":[x for x in mnodes if x["skin_index"] is None],
  "actual_source_skinning_poses":output}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--r35",type=Path,required=True)
 p.add_argument("--r36",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();old=run_one(a.r35,"R35");new=run_one(a.r36,"R36")
 if len(new["real_skinned_mesh_nodes"])!=5 or len(new["unskinned_mesh_nodes"])!=6:
  raise ValueError("actual 11 meshes unexpectedly grouped differently")
 stats=[]
 for bc,ac in zip(old["actual_source_skinning_poses"],new["actual_source_skinning_poses"]):
  per=[]
  for before,after in zip(bc["stages"],ac["stages"]):
   p1=[x for x in before["tested_skinned_primitives"] if x["status"]=="actual_real_weighted_vertex_cpu_skinning"]
   p2=[x for x in after["tested_skinned_primitives"] if x["status"]=="actual_real_weighted_vertex_cpu_skinning"]
   if len(p1)!=len(p2) or not p2:raise ValueError("missing real skinned primitives")
   per.append({"frame":after["frame"],"primitives":len(p2),
     "source_vertices_tested":sum(x["tested_vertex_count"] for x in p2),
     "r35_max_weighted_skin_palette_residual":max(x["active_weighted_palette_rest_identity_residual_max"] for x in p1),
     "r36_max_weighted_skin_palette_residual":max(x["active_weighted_palette_rest_identity_residual_max"] for x in p2),
     "r35_weighted_skin_extent_per_mesh":[{"mesh":x["mesh_node"],"extent":x["skinned_position_extent"]} for x in p1],
     "r36_weighted_skin_extent_per_mesh":[{"mesh":x["mesh_node"],"extent":x["skinned_position_extent"]} for x in p2]})
  stats.append({"name":ac["name"],"sample_comparisons":per})
 out={"schema":"acnh303-r37-source-SHA-weighted-POSITION-JOINTS-WEIGHTS-skinned-vertex-mesh-local-replay-v1",
   "R35":old,"R36":new,"mesh_local_pose_comparisons":stats,
   "runtime_native_game_skinning_matched":False,
   "image_pixel_comparison_matched":False,
   "limits":"Actual CPU glTF mesh-space skinning evaluation, not Blender/GPU or native ACNH game animation; no material morphs, native FPS confirmation, or original engine-space capture. Six unskinned meshes must be rendered under their own node transforms."}
 a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(out,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R37_REAL_CPU_SKIN",[(x["name"],[(s["frame"],s["primitives"],s["source_vertices_tested"]) for s in x["sample_comparisons"]]) for x in stats])
 print("R37_MESHSPACE_WEIGHTED_PALETTE_RESIDUAL",[(x["name"],[(s["frame"],s["r35_max_weighted_skin_palette_residual"],s["r36_max_weighted_skin_palette_residual"]) for s in x["sample_comparisons"]]) for x in stats])
if __name__=="__main__":main()
