#!/usr/bin/env python3
"""R38 native original 46-bone FSKL local rest replacement, source IBM-gated.

R38 preceding one-bone-only Skl_Root experiment failed: all weighted Skin
joint rest*IBM residual stayed 4.838. This alternative replaces every one of
the 46 authentic FSKL joint local TRS, preserving each native parent and
*unchanged* 11 original meshes, original skin IBMs and 69 native FSKA channels.
No Nintendo native game frame or visual parity implied.
"""
from __future__ import annotations
import argparse,hashlib,json,math
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb,pack_glb,quat_xyz_deg
from acnh303_round37_pose_probe import SHA,globals_for,joint_info
def audit(g,buf):
  ibm,weights,meshes,n=joint_info(g,buf)
  world=globals_for(g,{})
  rows=[]
  for i,j in enumerate(g["skins"][0]["joints"]):
    e=float(np.max(np.abs(world[j]@ibm[i]-np.eye(4))))
    rows.append({"bone":g["nodes"][j]["name"],"weighted_vertex_influences":int(weights[i]),"rest_times_IBM_residual":e})
  return rows
def main():
  p=argparse.ArgumentParser()
  p.add_argument("--r36",type=Path,required=True)
  p.add_argument("--native",type=Path,required=True)
  p.add_argument("--out-glb",type=Path,required=True)
  p.add_argument("--out-report",type=Path,required=True)
  a=p.parse_args()
  raw,g,buf=readglb(a.r36)
  if hashlib.sha256(raw).hexdigest()!=SHA["R36"]:raise ValueError("real 69ch R36 source changed")
  src=a.native.read_bytes()
  bones=json.loads(src)["models"][0]["real_bones"]
  if len(bones)!=46:raise ValueError("not actual native 46 FSKL bones")
  joints=g["skins"][0]["joints"]
  names={g["nodes"][idx]["name"]:idx for idx in joints}
  if len(names)!=46 or {x["name"] for x in bones}!=set(names):
    raise ValueError("true source FSKL/skin bone correspondence not exact")
  before=audit(g,buf);changed=[]
  for b in bones:
    node=g["nodes"][names[b["name"]]]
    if b["rotation_flag"]!="EulerXYZ" or b["scale"]!=[1,1,1]:
      raise ValueError("native FSKL rest scale/rotation mode needs manual assessment")
    if any(not math.isfinite(t) for t in b["rotation"][:3]+b["translation"]):
      raise ValueError("nonfinite native source FSKL")
    before_trs={k:node.get(k) for k in ("translation","scale","rotation","matrix")}
    original_rot=quat_xyz_deg([math.degrees(q) for q in b["rotation"][:3]])
    node.pop("matrix",None)
    node["translation"]=list(b["translation"])
    node["rotation"]=original_rot
    node["scale"]=list(b["scale"])
    changed.append({"name":b["name"],"actual_native_index":b["bone_index"],
       "original_node":before_trs,
       "native_rest_local_translation":b["translation"],
       "native_rest_local_rotation":original_rot,
       "original_was_singular":before_trs["matrix"] is not None})
  after=audit(g,buf)
  actual=[x["rest_times_IBM_residual"] for x in after if x["weighted_vertex_influences"]]
  prev=[x["rest_times_IBM_residual"] for x in before if x["weighted_vertex_influences"]]
  if len(actual)!=21 or max(prev)<1:raise ValueError("expected 21 weighted joints + observed original ~4.838 residual")
  if max(actual)>=1e-3:raise ValueError("FAILED native 46 local-TRS rest vs original Skin IBM gate: "+str(max(actual)))
  if max(actual)>=max(prev)/1000:raise ValueError("failed 1000x original native source rig improvement gate")
  a.out_glb.parent.mkdir(parents=True,exist_ok=True)
  candidate=pack_glb(g,buf)
  a.out_glb.write_bytes(candidate)
  b0,g2,buf2=readglb(a.out_glb)
  if bytes(buf)!=bytes(buf2):raise ValueError("Native animations, vertex arrays or IBM binary modified")
  if len(g2["meshes"])!=11 or len(g2["skins"][0]["joints"])!=46 or len(g2["animations"])!=3 or sum(len(x["channels"]) for x in g2["animations"])!=69:
    raise ValueError("changed native geometry/animation source identity")
  if max(x["rest_times_IBM_residual"] for x in audit(g2,buf2) if x["weighted_vertex_influences"])>=1e-3:
    raise ValueError("serialized original 46 FSKL joint rest gate did not survive")
  failed_unweighted=[x for x in after if x["weighted_vertex_influences"]==0 and x["rest_times_IBM_residual"]>=1e-3]
  report={"schema":"acnh303-r38-full-46-original-native-FSKL-joint-rest-source-IBM-21-weight-gated-v1",
     "source_R36_SHA256":SHA["R36"],
     "original_FSKL_source_JSON_SHA256":hashlib.sha256(src).hexdigest(),
     "source_mesh_count":11,"source_skin_joint_count":46,"source_FSKA_animation_channels":69,
     "original_binary_mesh_IBMs_FSKA_UNCHANGED":True,
     "modified_node_count":len(changed),"actual_native_FSKL_joint_sources":changed,
     "original_21_weighted_rest_IBM_max_error":max(prev),
     "restored_original_native_FSKL_21_weighted_rest_IBM_max_error":max(actual),
     "weighted_joint_count":len(actual),
     "all_original_46_bone_rest_IBM_before":before,
     "all_original_46_bone_rest_IBM_after":after,
     "remaining_unweighted_native_source_IBM_mismatches":failed_unweighted,
     "recovered_GLB_source_SHA256":hashlib.sha256(candidate).hexdigest(),
     "recovered_GLB_original_bytes":len(candidate),
     "tested_Nintendo_original_in_game_animation_pose":False,
     "blender_visual_or_pose_parity_after_rebuild":False,
     "limits":"All 46 local transforms from original FSKL and numeric 21 weighted joint IBMs; unweighted identity IBM auxiliary nodes may be intentionally nonidentity. No game render evidence; this is a separate experimental source-backed candidate, original R36 GLB preserved."}
  a.out_report.parent.mkdir(parents=True,exist_ok=True)
  a.out_report.write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
  print("R38_ORIGINAL_FSKL_46_REST_IBM_GATE",len(actual),max(prev),max(actual),len(failed_unweighted),report["recovered_GLB_source_SHA256"])
if __name__=="__main__":main()
