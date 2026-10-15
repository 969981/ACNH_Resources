#!/usr/bin/env python3
"""R36 real FSKL->glTF rest-node, hierarchy and inverse-bind audit.

No unsafe repair of singular joints; source EulerXYZ radians are native and
must not be silently confused with glTF quaternion or clip Euler degrees.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct,sys
from collections import Counter
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/"scripts"))
from acnh303_round35_export_animated_glb import readglb

def determinant(matrix,n=4):
    a=[[float(matrix[c*n+r]) for c in range(n)] for r in range(n)]
    out=1.
    for k in range(n):
        p=max(range(k,n),key=lambda r:abs(a[r][k]))
        if abs(a[p][k])<1e-12:return 0.
        if p!=k:a[p],a[k]=a[k],a[p];out=-out
        pivot=a[k][k];out*=pivot
        for i in range(k+1,n):
            fac=a[i][k]/pivot
            for j in range(k+1,n):a[i][j]-=fac*a[k][j]
    return out

def scan_IBM(g,buf,skin):
    if "inverseBindMatrices" not in skin:
        return {"status":"absent_implicit_identity","count":0}
    acc=g["accessors"][skin["inverseBindMatrices"]]
    if acc["componentType"]!=5126 or acc["type"]!="MAT4" or acc["count"]!=len(skin["joints"]):
        raise ValueError("Skin inverseBindMatrices accessor mismatch")
    if "sparse" in acc:raise ValueError("sparse inverse bind matrices require separate parser")
    view=g["bufferViews"][acc["bufferView"]]
    if view.get("buffer",0)!=0:raise ValueError("external inverse bind buffer")
    off=view.get("byteOffset",0)+acc.get("byteOffset",0)
    stride=view.get("byteStride",64)
    if stride<64 or off+(acc["count"]-1)*stride+64>len(buf):
        raise ValueError("inverse bind accessor out of bounds")
    details=[]
    for i,joint in enumerate(skin["joints"]):
        mat=struct.unpack_from("<16f",buf,off+i*stride)
        details.append({"joint":g["nodes"][joint].get("name"),
                        "is_all_zero":all(abs(x)<1e-9 for x in mat),
                        "determinant":determinant(mat)})
    return {"status":"present_valid_bounds","count":len(details),
        "zero_matrices":sum(x["is_all_zero"] for x in details),
        "singular_matrices":sum(abs(x["determinant"])<1e-10 for x in details),
        "members":details}

def mul4(a,b):
    return [sum(a[k*4+r]*b[c*4+k] for k in range(4)) for c in range(4) for r in range(4)]

def native_local4(b):
    """Source EulerXYZ is radians; glTF is right-handed column-major, T*R*S hypothesis."""
    from acnh303_round35_export_animated_glb import quat_xyz_deg
    x,y,z,w=quat_xyz_deg([math.degrees(v) for v in b["rotation"][:3]])
    s=b["scale"];t=b["translation"]
    return [(1-2*y*y-2*z*z)*s[0],(2*x*y+2*z*w)*s[0],(2*x*z-2*y*w)*s[0],0.,
            (2*x*y-2*z*w)*s[1],(1-2*x*x-2*z*z)*s[1],(2*y*z+2*x*w)*s[1],0.,
            (2*x*z+2*y*w)*s[2],(2*y*z-2*x*w)*s[2],(1-2*x*x-2*y*y)*s[2],0.,
            t[0],t[1],t[2],1.]

def hypothesis_native_pose_vs_IBM(native,g,buf,skin):
    """Test, but do not assume, equivalence of native rest-pose globals and converter IBMs."""
    if "inverseBindMatrices" not in skin:
        return {"status":"not_tested_missing_IBMs"}
    acc=g["accessors"][skin["inverseBindMatrices"]]
    if acc["componentType"]!=5126 or acc["type"]!="MAT4" or acc["count"]!=46:
        raise ValueError("unsupported inverse-bind source")
    v=g["bufferViews"][acc["bufferView"]]
    off=v.get("byteOffset",0)+acc.get("byteOffset",0)
    stride=v.get("byteStride",64)
    indices={b["name"]:b["bone_index"] for b in native}
    # BoneIndex identity already cross-checked against authentic source FSKL.
    cache={}
    def world(i):
        if i in cache:return cache[i]
        b=native[i];m=native_local4(b)
        p=b["parent_index"]
        if p>=0:
            if p>=i:raise ValueError("unexpected cyclic/forward parent for source FSKL")
            m=mul4(world(p),m)
        cache[i]=m
        return m
    eye=[1. if c==r else 0. for c in range(4) for r in range(4)]
    stats=[]
    for n,joint in enumerate(skin["joints"]):
        name=g["nodes"][joint]["name"]
        src=indices[name]
        a=world(src)
        bind=list(struct.unpack_from("<16f",buf,off+n*stride))
        out=mul4(a,bind)
        err=max(abs(x-y) for x,y in zip(out,eye))
        stats.append({"bone":name,"source_FSKL_bone_index":src,
             "max_abs_identity_residual_under_direct_native_TRS_hypothesis":err,
             "native_world_translation":a[12:15],
             "glTF_inverse_bind_translation":bind[12:15]})
    residual=sorted(x["max_abs_identity_residual_under_direct_native_TRS_hypothesis"] for x in stats)
    return {"status":"tested_hypothesis_only",
       "matrix_multiplication_convention":"column_major_native_rest_world_times_glTF_IBM",
       "max_abs_residual":max(residual),
       "median_abs_residual":residual[len(residual)//2],
       "joints_identity_within_1e-3":sum(x<1e-3 for x in residual),
       "source_native_rest_scale_and_Euler_radians":True,
       "native_euler_order_assumption":"XYZ",
       "per_joint_identity_residual":stats,
       "claim_limit":"Even if this test matches, it proves only numerical matrix consistency under a source Euler convention; native render/skin parity remains untested. Mismatches may indicate coordinate basis or original exporter transformations."}

def main():
    c=argparse.ArgumentParser()
    c.add_argument("--glb",type=Path,required=True)
    c.add_argument("--skeleton",type=Path,required=True)
    c.add_argument("--match",type=Path,required=True)
    c.add_argument("--sha",required=True)
    c.add_argument("--out",type=Path,required=True)
    args=c.parse_args()
    raw,g,buf=readglb(args.glb)
    sh=hashlib.sha256(raw).hexdigest()
    if sh!=args.sha:raise ValueError("GLB immutable release SHA mismatch")
    native=json.loads(args.skeleton.read_text("utf8"))["models"][0]["real_bones"]
    match=json.loads(args.match.read_text("utf8"))["actual_matches"][0]
    if len(native)!=46 or len(native)!=len(match["source_bone_hierarchy"]):
        raise ValueError("missing source native 46 bones")
    skin=g["skins"][0]
    if len(skin["joints"])!=46 or len(g["meshes"])!=11:raise ValueError("original mesh/skin changed")
    byname={g["nodes"][j]["name"]:j for j in skin["joints"]}
    if len(byname)!=46 or set(byname)!={b["name"] for b in native}:
        raise ValueError("FSKL names fail to map to all real skin joints")
    parents={}
    for i,node in enumerate(g["nodes"]):
        for child in node.get("children",[]):
            if child in parents:raise ValueError("node has more than one parent")
            parents[child]=i
    details=[];reasons=Counter()
    for b in native:
        name=b["name"];idx=byname[name];node=g["nodes"][idx]
        mat=node.get("matrix")
        if mat is not None:
            if len(mat)!=16:raise ValueError("bad joint matrix")
            axes=[math.sqrt(sum(mat[c*4+r]**2 for r in range(3))) for c in range(3)]
            if all(x<1e-8 for x in axes):reason="three_zero_basis_axes"
            elif any(x<1e-8 for x in axes):reason="one_or_two_zero_basis_axes"
            else:reason="nonsingular_matrix_basis"
            raw_4x4_det=determinant(mat)
        else:
            scale=node.get("scale",[1,1,1])
            reason=("singular_TRS_scale" if any(abs(x)<1e-8 for x in scale)
                    else "TRS_no_matrix")
            raw_4x4_det=math.prod(scale)
            axes=scale
        reasons[reason]+=1
        parent_index=b["parent_index"]
        native_parent=native[parent_index]["name"] if 0<=parent_index<len(native) else None
        gltf_parent_i=parents.get(idx)
        gltf_parent=g["nodes"][gltf_parent_i].get("name") if gltf_parent_i is not None else None
        details.append({"bone":name,"joint_node_index":idx,
          "source_FSKL_parent":native_parent,"glTF_parent":gltf_parent,
          "native_rest_scale":b["scale"],"native_rest_rotation":b["rotation"],
          "native_rest_rotation_flag":b["rotation_flag"],
          "glTF_local_transform_type":"matrix" if mat is not None else "TRS",
          "glTF_axis_lengths":axes,"glTF_matrix_determinant":raw_4x4_det,
          "transform_class":reason,
          "parent_name_matches":native_parent==gltf_parent,
          "glTF_matrix_example":list(mat) if mat is not None else None})
    ibm=scan_IBM(g,buf,skin)
    native_ibm_hypothesis=hypothesis_native_pose_vs_IBM(native,g,buf,skin)
    report={"schema":"acnh303-r36-source-FSKL-real-glTF-rest-matrix-and-IBM-provenance-v1",
      "real_original_glb_sha256":sh,"actual_native_bones":len(native),
      "actual_glTF_skin_joints":len(skin["joints"]),
      "actual_geometry_meshes":len(g["meshes"]),
      "joint_transform_classes":dict(reasons),
      "joint_parent_name_matches":sum(x["parent_name_matches"] for x in details),
      "joint_parent_name_mismatches":[x["bone"] for x in details if not x["parent_name_matches"]],
      "native_FSKL_unit_scale_joints":sum(all(abs(v-1)<1e-6 for v in b["scale"]) for b in native),
      "native_rotation_flags":dict(Counter(b["rotation_flag"] for b in native)),
      "inverse_bind_matrices":ibm,"native_rest_world_vs_glTF_inverse_bind":native_ibm_hypothesis,"joint_records":details,
      "blocked":"No replacement of singular rest matrices until an original game-consistent coordinate basis and inverse-bind matrix chain are proven.",
      "not_tested":"Native runtime animation evaluator, render scene pixel-diff, hardware frame rate, Skinning GPU slots and native matrix layout."}
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,ensure_ascii=False,sort_keys=True,indent=2)+"\n")
    print("R36_JOINT_REST",report["joint_transform_classes"],"parent_matches",report["joint_parent_name_matches"],
          "inverse_bind", {k:v for k,v in ibm.items() if k!="members"})
if __name__=="__main__":main()
