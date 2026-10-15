#!/usr/bin/env python3
"""Source-SHA verified glTF skin world-pose and actual vertex-joint influence probe.

This verifies mathematical deformation against R35/R36, NOT Nintendo in-game
pixel parity. All joints/weights are loaded from real published GLB bytes.
"""
import argparse,hashlib,json,math,struct
from collections import Counter
from pathlib import Path
import numpy as np
from acnh303_round35_export_animated_glb import readglb

TYPES={"SCALAR":1,"VEC2":2,"VEC3":3,"VEC4":4,"MAT4":16}
CT={5120:("b",1),5121:("B",1),5122:("h",2),5123:("H",2),5125:("I",4),5126:("f",4)}
DENOM={5120:127,5121:255,5122:32767,5123:65535,5125:4294967295}
SHA={
 "R35":"4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597",
 "R36":"4bbb618f8bbeefacf7384a23c60160a1f9c5b55b32ecd8eb1a626819f8138ab3"}
WATCH={"Clavicle_L","Clavicle_R","Arm_1_L","Arm_2_L","Arm_1_R","Arm_2_R","Wrist_L","Wrist_R","Hand_L","Hand_R","Neck","Head","Leg_1_L","Leg_2_L","Leg_1_R","Leg_2_R","Ankle_L","Ankle_R"}
def acc(g,buf,i):
 a=g["accessors"][i]
 if a.get("sparse"):raise ValueError("not supported: sparse accessor")
 n=TYPES[a["type"]];fmt,size=CT[a["componentType"]];v=g["bufferViews"][a["bufferView"]]
 stride=v.get("byteStride",size*n);offset=v.get("byteOffset",0)+a.get("byteOffset",0)
 if v.get("buffer",0)!=0 or stride<size*n or offset+(a["count"]-1)*stride+n*size>len(buf):
  raise ValueError("accessor bounds or stride incorrect")
 if a["count"]>2_000_000:raise ValueError("oversized accessor")
 rows=[struct.unpack_from("<"+fmt*n,buf,offset+stride*k) for k in range(a["count"])]
 out=np.asarray(rows,dtype=np.float64)
 if a.get("normalized",False) and a["componentType"]!=5126:
  d=DENOM.get(a["componentType"])
  if not d:raise ValueError("unsupported normalized type")
  out=out/d
  if a["componentType"] in (5120,5122):out=np.maximum(out,-1)
 return out
def qmatrix(q):
 x,y,z,w=np.array(q,dtype=np.float64);l=np.linalg.norm([x,y,z,w])
 if l<1e-9:raise ValueError("invalid unit quat")
 x,y,z,w=np.array([x,y,z,w])/l
 return np.array([[1-2*(y*y+z*z),2*(x*y-z*w),2*(x*z+y*w)],
                  [2*(x*y+z*w),1-2*(x*x+z*z),2*(y*z-x*w)],
                  [2*(x*z-y*w),2*(y*z+x*w),1-2*(x*x+y*y)]])
def matrix(node,overrides=None):
 v=dict(node);v.update(overrides or {})
 if "matrix" in v:
  if overrides:raise ValueError("animated glTF node still carries matrix")
  return np.asarray(v["matrix"],dtype=np.float64).reshape(4,4).T
 t=np.asarray(v.get("translation",[0,0,0]),dtype=float)
 s=np.asarray(v.get("scale",[1,1,1]),dtype=float)
 q=np.asarray(v.get("rotation",[0,0,0,1]),dtype=float)
 m=np.eye(4);m[:3,:3]=qmatrix(q)@np.diag(s);m[:3,3]=t
 return m
def slerp(a,b,f):
 a=np.asarray(a,dtype=float);b=np.asarray(b,dtype=float)
 a/=np.linalg.norm(a);b/=np.linalg.norm(b)
 dot=np.dot(a,b)
 if dot<0:b=-b;dot=-dot
 dot=np.clip(dot,-1,1)
 if dot>.9995:
  q=a+(b-a)*f;return q/np.linalg.norm(q)
 theta=math.acos(dot)
 return (math.sin((1-f)*theta)*a+math.sin(f*theta)*b)/math.sin(theta)
def channels(g,buf,clip,frame):
 o={}
 for ch in clip["channels"]:
  path=ch["target"]["path"];node=ch["target"]["node"]
  sp=clip["samplers"][ch["sampler"]]
  if sp.get("interpolation","LINEAR")!="LINEAR":raise ValueError("unexpected non-LINEAR")
  times=acc(g,buf,sp["input"]).reshape(-1);values=acc(g,buf,sp["output"])
  if len(times)!=len(values) or any(np.diff(times)<0):raise ValueError("key ordering invalid")
  t=frame/30.
  hi=int(np.searchsorted(times,t,side="right"))
  if hi==0:val=values[0]
  elif hi==len(times):val=values[-1]
  else:
   lo=hi-1;alpha=(t-times[lo])/(times[hi]-times[lo])
   val=slerp(values[lo],values[hi],alpha) if path=="rotation" else (1-alpha)*values[lo]+alpha*values[hi]
  if (node,path) in o:raise ValueError("duplicate node/path")
  o[node,path]=val
 return o
def globals_for(g,overrides):
 parents={}
 for i,node in enumerate(g["nodes"]):
  for ch in node.get("children",[]):
   if ch in parents:raise ValueError("multiple node parents")
   parents[ch]=i
 memo={}
 def world(i,stack=()):
  if i in memo:return memo[i]
  if i in stack:raise ValueError("cycle")
  ov={path:val for (index,path),val in overrides.items() if index==i}
  v=matrix(g["nodes"][i],ov)
  if i in parents:v=world(parents[i],stack+(i,))@v
  memo[i]=v
  return v
 return [world(i) for i in range(len(g["nodes"]))]
def joint_info(g,buf):
 skin=g["skins"][0];joints=skin["joints"]
 ibm=acc(g,buf,skin["inverseBindMatrices"])
 if len(joints)!=len(ibm):raise ValueError("invalid IBM/joint count")
 ibm=np.transpose(ibm.reshape(-1,4,4),(0,2,1))
 usage=np.zeros(len(joints),dtype=np.int64);nonzero=0;skinned_nodes=[]
 for ni,n in enumerate(g["nodes"]):
  if "mesh" not in n:continue
  mi=n["mesh"];sk=(n.get("skin")==0)
  skinned_nodes.append({"mesh_node_index":ni,"mesh_index":mi,"skin_index":n.get("skin"),"node_name":n.get("name")})
  for p in g["meshes"][mi]["primitives"]:
   attrs=p["attributes"]
   if "JOINTS_0" not in attrs or "WEIGHTS_0" not in attrs:continue
   ids=acc(g,buf,attrs["JOINTS_0"]).astype(int);wt=acc(g,buf,attrs["WEIGHTS_0"])
   if len(ids)!=len(wt) or ids.shape[1]!=4:raise ValueError("invalid skin attributes")
   if not np.isfinite(wt).all() or (wt < -1e-5).any():raise ValueError("invalid skin weights")
   for j,w in zip(ids.reshape(-1),wt.reshape(-1)):
    if w>1e-5:
     if not 0<=j<len(joints):raise ValueError("real vertex references joint index outside Skin")
     usage[j]+=1;nonzero+=1
 for i,j in enumerate(joints):
  if j<0 or j>=len(g["nodes"]):raise ValueError("invalid skin index")
 return ibm,usage,skinned_nodes,nonzero
def evaluate(path,label,src):
 b,g,buf=readglb(path)
 digest=hashlib.sha256(b).hexdigest()
 if digest!=SHA[label]:raise ValueError("GLB SHA changed")
 if len(g["skins"])!=1 or len(g["skins"][0]["joints"])!=46 or len(g["meshes"])!=11 or len(g["animations"])!=3:
  raise ValueError("expected original geometry and animation")
 ibm,usage,mesh_nodes,nonzero=joint_info(g,buf)
 names=[g["nodes"][j]["name"] for j in g["skins"][0]["joints"]]
 if len(set(names))!=46:raise ValueError("duplicate real bone")
 rest_globals=globals_for(g,{})
 rest_errors=[]
 for i,j in enumerate(g["skins"][0]["joints"]):
  out=rest_globals[j]@ibm[i]
  rest_errors.append(float(np.max(np.abs(out-np.eye(4)))))
 reports=[];worst_nonfinite=0
 for anim,clip in enumerate(g["animations"]):
  frames=src["animations"][anim]["FrameCount"]
  if clip["name"]!=src["animations"][anim]["Name"]:raise ValueError("source clip name changed")
  source_bones={x["Name"] for x in src["animations"][anim]["BoneAnims"] if x["Curves"]}
  poses=[];maxranges={}
  for frame in (0.,.25,.5,1.,frames/2.,float(frames)):
   if frame>frames:continue
   over=channels(g,buf,clip,frame)
   worlds=globals_for(g,over)
   detail={}
   for i,j in enumerate(g["skins"][0]["joints"]):
    w=worlds[j]
    if not np.isfinite(w).all():worst_nonfinite+=1
    if names[i] not in WATCH:continue
    mat=worlds[j]@ibm[i]
    detail[names[i]]={"world_translation":[float(x) for x in w[:3,3]],
       "world_3x3_determinant":float(np.linalg.det(w[:3,:3])),
       "skin_3x3_determinant":float(np.linalg.det(mat[:3,:3])),
       "skin_translation":[float(x) for x in mat[:3,3]],
       "source_curve_bone":names[i] in source_bones}
   poses.append({"frame":frame,"joint_results":detail})
  for bone in WATCH:
   xyz=[np.array(p["joint_results"][bone]["world_translation"]) for p in poses]
   maxranges[bone]=float(max(np.linalg.norm(x-y) for x in xyz for y in xyz))
  reports.append({"name":clip["name"],"source_frames":frames,"actual_channels":len(clip["channels"]),
    "pose_samples":poses,"max_sampled_world_translation_spans":maxranges})
 allibm=np.max(np.abs(ibm-np.eye(4)),axis=(1,2))
 jointlist=[{"name":name,"source_joint_index":i,"weighted_vertex_influences":int(usage[i]),
   "original_inverse_bind_is_identity":bool(allibm[i]<1e-5),
   "original_rest_world_times_IBM_identity_residual":rest_errors[i],
   "real_skin_joint_node":g["skins"][0]["joints"][i]} for i,name in enumerate(names)]
 return {"source_sha256":digest,"real_mesh_count":len(g["meshes"]),
  "skin_joints":len(names),"mesh_nodes":mesh_nodes,
  "joint_vertex_influences_total":nonzero,
  "active_weighted_skin_bones":[x["name"] for x in jointlist if x["weighted_vertex_influences"]>0],
  "nonfinite_joint_pose_matrices":worst_nonfinite,
  "full_joint_rest_and_weight_audit":jointlist,
  "animation_results":reports}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--r35",type=Path,required=True)
 p.add_argument("--r36",type=Path,required=True)
 p.add_argument("--fska",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();src=json.loads(a.fska.read_text())
 old=evaluate(a.r35,"R35",src);new=evaluate(a.r36,"R36",src)
 if [x["name"] for x in old["full_joint_rest_and_weight_audit"]] != [x["name"] for x in new["full_joint_rest_and_weight_audit"]]:
  raise ValueError("joint identity changed")
 if sum(x["actual_channels"] for x in old["animation_results"])!=13 or sum(x["actual_channels"] for x in new["animation_results"])!=69:
  raise ValueError("expected verified 13/69 channel GLBs")
 cross=[]
 for before,after in zip(old["full_joint_rest_and_weight_audit"],new["full_joint_rest_and_weight_audit"]):
  cross.append({"bone":before["name"],"weighted_vertex_influences":before["weighted_vertex_influences"],
    "identity_IBM":before["original_inverse_bind_is_identity"],
    "rest_residual_R35":before["original_rest_world_times_IBM_identity_residual"],
    "rest_residual_R36":after["original_rest_world_times_IBM_identity_residual"]})
 r={"schema":"acnh303-r37-real-GLB-animation-pose-joint-weight-and-IBM-audit-v1",
    "actual_R35":old,"actual_R36":new,"rest_differences_by_joint":cross,
    "R35_skin_weighted_influences_total":old["joint_vertex_influences_total"],
    "R36_skin_weighted_influences_total":new["joint_vertex_influences_total"],
    "source_animation_fska_json_sha256":hashlib.sha256(a.fska.read_bytes()).hexdigest(),
    "validation_status":"real_GLTF_buffer_source_and_pose_numerical_check_only",
    "native_game_frame_capture_available":False,
    "rendered_visual_comparison_available":False,
    "warning":"Math and source curve comparisons do not prove ACNH renderer/time/skin parity. Source default and conversion conventions must be tested. glTF meshNode.skin and original IBM can affect deformation independently of bone hierarchy."}
 a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R37_REAL_69_CHANNEL_POSE_REPLAY",[(x["name"],x["actual_channels"]) for x in new["animation_results"]])
 print("R37_WEIGHTED_JOINTS",len(new["active_weighted_skin_bones"]),new["joint_vertex_influences_total"])
 print("R37_BAD_REST",[x for x in cross if x["rest_residual_R36"]>0.001])
if __name__=="__main__":main()
