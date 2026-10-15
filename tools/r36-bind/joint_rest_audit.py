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
    report={"schema":"acnh303-r36-source-FSKL-real-glTF-rest-matrix-and-IBM-provenance-v1",
      "real_original_glb_sha256":sh,"actual_native_bones":len(native),
      "actual_glTF_skin_joints":len(skin["joints"]),
      "actual_geometry_meshes":len(g["meshes"]),
      "joint_transform_classes":dict(reasons),
      "joint_parent_name_matches":sum(x["parent_name_matches"] for x in details),
      "joint_parent_name_mismatches":[x["bone"] for x in details if not x["parent_name_matches"]],
      "native_FSKL_unit_scale_joints":sum(all(abs(v-1)<1e-6 for v in b["scale"]) for b in native),
      "native_rotation_flags":dict(Counter(b["rotation_flag"] for b in native)),
      "inverse_bind_matrices":ibm,"joint_records":details,
      "blocked":"No replacement of singular rest matrices until an original game-consistent coordinate basis and inverse-bind matrix chain are proven.",
      "not_tested":"Native runtime animation evaluator, render scene pixel-diff, hardware frame rate, Skinning GPU slots and native matrix layout."}
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,ensure_ascii=False,sort_keys=True,indent=2)+"\n")
    print("R36_JOINT_REST",report["joint_transform_classes"],"parent_matches",report["joint_parent_name_matches"],
          "inverse_bind", {k:v for k,v in ibm.items() if k!="members"})
if __name__=="__main__":main()
