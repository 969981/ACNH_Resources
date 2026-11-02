#!/usr/bin/env python3
"""R36: independently audit real R35 GLB against committed source FSKA Hermite data.

No reconstructed, synthetic bone, invented source FPS or native-renderer parity.
Records why original animated bones vanished and measures intermediate-frame
deviation on channels that truly survived in the published R35 GLB.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from collections import Counter
from pathlib import Path
from acnh303_round35_export_animated_glb import (
    readglb,asvec,quat_xyz_deg,sample_hermite)

TOL=1e-4

def access(g,buf,idx):
    a=g["accessors"][idx]
    if a["componentType"]!=5126 or a.get("sparse"):
        raise ValueError("R35 Animation accessors must be dense FLOAT32")
    typ=a["type"]
    n={"SCALAR":1,"VEC3":3,"VEC4":4}[typ]
    v=g["bufferViews"][a["bufferView"]]
    if v.get("buffer",0)!=0: raise ValueError("unexpected animation buffer")
    stride=v.get("byteStride",n*4)
    if stride<n*4:raise ValueError("undersized animation stride")
    start=v.get("byteOffset",0)+a.get("byteOffset",0)
    size=a["count"]
    if size<1 or start+(size-1)*stride+4*n>len(buf):
        raise ValueError("animation accessor out of buffer bounds")
    result=[list(struct.unpack_from("<"+"f"*n,buf,start+i*stride)) for i in range(size)]
    if not all(math.isfinite(x) for row in result for x in row):
        raise ValueError("nonfinite animation components")
    return result

def qnorm(q):
    mag=math.sqrt(sum(x*x for x in q))
    if mag<1e-10:raise ValueError("invalid quaternion")
    return [x/mag for x in q]

def slerp(a,b,t):
    a=qnorm(a);b=qnorm(b)
    d=sum(x*y for x,y in zip(a,b))
    if d<0:
        b=[-x for x in b];d=-d
    d=min(1,max(-1,d))
    if d>0.9995:return qnorm([x*(1-t)+y*t for x,y in zip(a,b)])
    theta=math.acos(d);s=math.sin(theta)
    return [math.sin((1-t)*theta)/s*x+math.sin(t*theta)/s*y for x,y in zip(a,b)]

def distance(path,a,b):
    if path=="rotation":
        a=qnorm(a);b=qnorm(b)
        return math.degrees(2*math.acos(min(1,abs(sum(x*y for x,y in zip(a,b))))))
    return math.sqrt(sum((x-y)**2 for x,y in zip(a,b)))

def evaluate_curve(ba,path,f,glb_node,anim):
    cur={c["Target"]:c for c in ba["Curves"]}
    base=ba.get("BaseData") or {}
    if path=="rotation":
        if not anim["UseDegrees"] or anim["FlagsRotate"]!="EulerXYZ":
            raise ValueError("R35 degree/EulerXYZ assumption needs review")
        default=asvec(base.get("Rotate"),[0,0,0])
        vals=[sample_hermite(cur[t],f,default[i]) if t in cur else default[i]
              for i,t in enumerate(("RotateX","RotateY","RotateZ"))]
        return quat_xyz_deg(vals)
    if path=="translation":
        targets=("PositionX","PositionY","PositionZ")
        default=asvec(base.get("Translate"),glb_node.get("translation",[0,0,0]))
    elif path=="scale":
        targets=("ScaleX","ScaleY","ScaleZ")
        default=asvec(base.get("Scale"),glb_node.get("scale",[1,1,1]))
    else:raise ValueError("unsupported path "+path)
    return [sample_hermite(cur[t],f,default[i]) if t in cur else default[i]
            for i,t in enumerate(targets)]

def matrix_reason(node):
    m=node.get("matrix")
    if m is None:return "TRS_or_previously_decomposed"
    if len(m)!=16:raise ValueError("invalid original node matrix")
    axes=[math.sqrt(sum(m[j*4+k]**2 for k in range(3))) for j in range(3)]
    if any(v<1e-8 for v in axes):return "singular_matrix_preserved_by_R35"
    return "matrix_nonsingular"

def audit(path,fska_file,match_file,sha_expected):
    raw,g,buf=readglb(path)
    actual_sha=hashlib.sha256(raw).hexdigest()
    if actual_sha!=sha_expected:raise ValueError("released R35 GLB SHA256 mismatch")
    if len(g.get("meshes",[]))!=11 or len(g.get("skins",[]))!=1:
        raise ValueError("not R35 original genuine skinned player mesh")
    joints=g["skins"][0]["joints"]
    if len(joints)!=46 or len(set(joints))!=46:raise ValueError("real joint count mismatch")
    bone_to_node={}
    for idx in joints:
        name=g["nodes"][idx].get("name")
        if not name or name in bone_to_node:raise ValueError("duplicate/unnamed glTF Skin joint")
        bone_to_node[name]=idx
    fska=json.loads(fska_file.read_text("utf8"))
    match=json.loads(match_file.read_text("utf8"))
    hierarchy=match["actual_matches"][0]["source_bone_hierarchy"]
    names={x["name"] for x in hierarchy}
    if len(names)!=46 or names!=set(bone_to_node):
        raise ValueError("R35 Skin joint names no longer equal original native FSKL")
    if len(fska["animations"])!=3 or len(g.get("animations",[]))!=3:
        raise ValueError("R35 three authentic clips not available")
    report=[]
    total_deviation=0
    for native,clip in zip(fska["animations"],g["animations"]):
        if native["Name"]!=clip["name"]:raise ValueError("clip name/order changed")
        frames=native["FrameCount"]
        curves={b["Name"]:b for b in native["BoneAnims"] if b["Curves"]}
        seen_channels=set();targets={}
        channel_errors=[]
        for ch in clip["channels"]:
            key=(g["nodes"][ch["target"]["node"]].get("name"),ch["target"]["path"])
            if key in seen_channels:raise ValueError("duplicate channel target")
            seen_channels.add(key)
            if key[0] not in bone_to_node or bone_to_node[key[0]]!=ch["target"]["node"]:
                raise ValueError("animation targeting a non-FSKL Skin bone")
            if key[0] not in curves:raise ValueError("exported track absent from source")
            smp=clip["samplers"][ch["sampler"]]
            if smp.get("interpolation","LINEAR")!="LINEAR":
                raise ValueError("only R35 LINEAR baseline supported")
            tim=access(g,buf,smp["input"]);vals=access(g,buf,smp["output"])
            if len(tim)!=frames+1 or len(vals)!=len(tim):
                raise ValueError("R35 old source-frame count mismatch")
            if any(abs(row[0]-i/30)>1e-6 for i,row in enumerate(tim)):
                raise ValueError("R35 exported 30fps assumption changed")
            for f in range(frames+1):
                ideal=evaluate_curve(curves[key[0]],key[1],f,g["nodes"][ch["target"]["node"]],native)
                if distance(key[1],ideal,vals[f])>TOL:
                    raise ValueError("R35 integer key does not match source Hermite: "+str(key))
            diffs=[]
            for f in range(frames):
                desired=evaluate_curve(curves[key[0]],key[1],f+0.5,g["nodes"][ch["target"]["node"]],native)
                playback=(slerp(vals[f],vals[f+1],.5) if key[1]=="rotation"
                          else [(a+b)*.5 for a,b in zip(vals[f],vals[f+1])])
                diffs.append(distance(key[1],desired,playback))
            worst=max(diffs) if diffs else 0
            total_deviation=max(total_deviation,worst)
            channel_errors.append({"bone":key[0],"path":key[1],
                "half_frame_max_error":worst,
                "half_frame_mean_error":sum(diffs)/len(diffs) if diffs else 0,
                "error_units":"degrees" if key[1]=="rotation" else "model_coordinate_units"})
            targets.setdefault(key[0],[]).append(key[1])
        groups=Counter()
        missing=[]
        for bone in sorted(curves):
            if bone not in bone_to_node:
                reason="absent_from_PlayerBody_FSKL"
            elif bone in targets:
                reason="exported_one_or_more_channels"
            else:
                reason=matrix_reason(g["nodes"][bone_to_node[bone]])
            groups[reason]+=1
            if reason!="exported_one_or_more_channels":
                missing.append({"bone":bone,"reason":reason,
                    "source_scalar_curves":len(curves[bone])})
        report.append({"animation":native["Name"],"source_frame_count":frames,
          "source_bones_with_nonempty_curves":len(curves),
          "source_scalar_curve_count":sum(len(b["Curves"]) for b in curves.values()),
          "native_bone_classification":dict(groups),
          "real_glb_channel_count":len(clip["channels"]),
          "real_glb_animated_bone_count":len(targets),
          "not_exported_bones":missing,
          "per_channel_half_source_frame_comparison":channel_errors,
          "max_half_frame_deviation":max((x["half_frame_max_error"] for x in channel_errors),default=0)})
    return {"schema":"acnh303-r36-r35-original-glb-curve-loss-and-half-frame-error-audit-v1",
      "input_actual_r35_glb_sha256":actual_sha,
      "source_hermite_json_sha256":hashlib.sha256(fska_file.read_bytes()).hexdigest(),
      "actual_original_skin_joint_count":len(joints),
      "actual_original_mesh_count":len(g["meshes"]),
      "animation_reports":report,"largest_numeric_half_frame_error_across_units":total_deviation,
      "warning":"Mixed error units must NOT be ranked together. ROTATION uses degrees; translation uses model coordinates.",
      "scope":"Source-backed 3 player FSKA clips only; full R34 has 406 scalar curves across broader animations. R35 only 13 exported channels.",
      "limitations":"GLB interpolation compared to the same BfresLibrary Value/In/Out formula R35 used; source tangent convention and native evaluator parity have not been independently verified. Does not alter mesh or claim missing joint tracks recovered. 30fps is still an assumption."}

def main():
    a=argparse.ArgumentParser()
    a.add_argument("--reference-glb",type=Path,required=True)
    a.add_argument("--hermite",type=Path,required=True)
    a.add_argument("--match",type=Path,required=True)
    a.add_argument("--sha256",required=True)
    a.add_argument("--out",type=Path,required=True)
    q=a.parse_args()
    report=audit(q.reference_glb,q.hermite,q.match,q.sha256)
    q.out.parent.mkdir(parents=True,exist_ok=True)
    q.out.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R36_AUDITED_GLB",[(x["animation"],x["source_bones_with_nonempty_curves"],x["real_glb_channel_count"],x["native_bone_classification"]) for x in report["animation_reports"]])
    print("R36_FRACTIONAL_ERRORS",[(x["animation"],x["max_half_frame_deviation"]) for x in report["animation_reports"]])
if __name__=="__main__":main()
