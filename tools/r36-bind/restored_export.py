#!/usr/bin/env python3
"""R36 experimental genuine original PlayerBody FSKL-rest repaired 3-FSKA GLB.

Restore ONLY actual original 28 zero-basis glTF Skin joint matrices from
matching native source FSKL rest TRS when the source global rest matrix is
numerically consistent with the original glTF inverseBindMatrix (<=1e-3).

Never invent a bone. Keep original mesh/IBMs and model SHA provenance. Report
candidate playback, NOT original Nintendo runtime visually reproduced.
"""
from __future__ import annotations
import argparse,hashlib,json,math,sys
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[2]/"scripts"))
from acnh303_round35_export_animated_glb import readglb,pack_glb,quat_xyz_deg
from acnh303_round36_export_subframes import from_hermite_curve_file
from joint_rest_audit import hypothesis_native_pose_vs_IBM

R35_SHA="4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597"

def transform_source(b):
    if b["rotation_flag"]!="EulerXYZ" or len(b["rotation"])!=4:
        raise ValueError("unknown original FSKL rotation mode")
    if any(not math.isfinite(x) for x in (b["rotation"][:3]+b["scale"]+b["translation"])):
        raise ValueError("nonfinite original source FSKL")
    if any(x<=0 for x in b["scale"]):raise ValueError("native FSKL nonpositive rest scale")
    return {"translation":list(b["translation"]),"scale":list(b["scale"]),
            "rotation":quat_xyz_deg([math.degrees(x) for x in b["rotation"][:3]])}

def export(source_glb,source_skeleton,source_match,source_hermite,out,report_out,fps=30.,subframes=4):
    original,g,buf=readglb(source_glb)
    if hashlib.sha256(original).hexdigest()!=R35_SHA:
        raise ValueError("R35 original source SHA verification failed")
    s=json.loads(source_skeleton.read_text("utf8"))
    h=json.loads(source_hermite.read_text("utf8"))
    match=json.loads(source_match.read_text("utf8"))
    natives=s["models"][0]["real_bones"]
    if len(natives)!=46 or len(g["meshes"])!=11 or len(g["skins"])!=1:
        raise ValueError("not original 11 mesh, 46 native skeleton")
    joint_ids=g["skins"][0]["joints"]
    if len(joint_ids)!=46:raise ValueError("original 46 skin joint count changed")
    names={g["nodes"][node]["name"]:node for node in joint_ids}
    if len(names)!=46 or names.keys()!={b["name"] for b in natives}:
        raise ValueError("source FSKL bone names mismatch")
    ibm=hypothesis_native_pose_vs_IBM(natives,g,buf,g["skins"][0])
    residuals={r["bone"]:r["max_abs_identity_residual_under_direct_native_TRS_hypothesis"]
               for r in ibm["per_joint_identity_residual"]}
    repairs=[]; untouched=[]
    for b in natives:
        name=b["name"];node=g["nodes"][names[name]]
        mat=node.get("matrix")
        if mat is not None:
            if len(mat)!=16:raise ValueError("invalid original node matrix")
            axes=[math.sqrt(sum(mat[c*4+r]**2 for r in range(3))) for c in range(3)]
            if all(x<1e-8 for x in axes):
                residual=residuals[name]
                if residual>=1e-3:
                    raise ValueError("unsafe FSKL-rest-versus-glTF-IBM mismatch: "+name+" "+str(residual))
                native_trs=transform_source(b)
                node.pop("matrix")
                node.update(native_trs)
                repairs.append({"bone":name,"source_fskl_index":b["bone_index"],
                     "original_zero_matrix_last_column":list(mat[12:16]),
                     "rest_global_times_original_IBM_max_abs_error":residual,
                     "recovered_native_translation":native_trs["translation"],
                     "recovered_native_rotation_quaternion":native_trs["rotation"]})
            else:untouched.append(name)
        else:untouched.append(name)
    if len(repairs)!=28:raise ValueError("R35 observed 28 genuine singular joints changed")
    # Preserve source original 11 actual FMDL skinned meshes and 46 original inverse binds.
    # Regenerate clips from source FSKA, not from the old incomplete 13-channel R35 animations.
    g.pop("animations",None)
    infos=from_hermite_curve_file(g,buf,h,{b["name"] for b in natives},fps,subframes)
    if [x["frames"] for x in infos]!=[28,30,32] or len(infos)!=3:
        raise ValueError("not three real source original clips")
    if any(x["channels"]<15 for x in infos):
        raise ValueError("still missing original joint animation tracks")
    new=pack_glb(g,buf)
    out.parent.mkdir(parents=True,exist_ok=True);out.write_bytes(new)
    actual,parsed,_=readglb(out)
    if len(parsed["meshes"])!=11 or len(parsed["skins"])!=1 or len(parsed["skins"][0]["joints"])!=46 or len(parsed["animations"])!=3:
        raise ValueError("real glTF mesh/skeleton/clip structure failed post export")
    total=sum(len(x["channels"]) for x in parsed["animations"])
    if total<69:raise ValueError("missing recovered FSKL-matched channels")
    for clip in parsed["animations"]:
        for ch in clip["channels"]:
            if ch["target"]["node"] not in parsed["skins"][0]["joints"]:
                raise ValueError("animation target outside real original Skin joint")
    report={
     "schema":"acnh303-r36-native-original-FSKL-IBM-gated-source-FSKA-full-body-animation-GLB-candidate-v1",
     "source_R35_real_mesh_and_skin_SHA":R35_SHA,
     "source_FSKL_json_SHA":hashlib.sha256(source_skeleton.read_bytes()).hexdigest(),
     "source_Hermite_json_SHA":hashlib.sha256(source_hermite.read_bytes()).hexdigest(),
     "real_meshes":len(parsed["meshes"]),"real_original_FSKL_skin_joints":46,
     "original_glTF_joint_rest_zero_basis_repaired":len(repairs),
     "FSKL_rest_vs_original_IBM_source_verified_within_1e-3_for_each_repair":True,
     "repaired_native_joints":repairs,"unchanged_glTF_joint_names":untouched,
     "source_FSKA_clip_count":3,"animations":infos,
     "total_actual_SKIN_animation_channels":total,
     "output_GLb_bytes":len(new),"output_GLb_sha256":hashlib.sha256(actual).hexdigest(),
     "source_frame_subdivision":subframes,"export_fps_assumption":fps,
     "native_render_visual_parity":"NOT_TESTED",
     "native_animation_tangent_parity":"NOT_TESTED",
     "no_bones_invented":True,
     "limitations":"Experimental candidate, not native-exact game reconstruction. Original nonzero GLB joints (e.g. Skl_Root, Hand_L/R) are retained, even where native rest global × original IBM is not identity. FSKL EulerXYZ converted to glTF quaternion; GLB samples native extracted Value/In/Out every quarter-frame and interpolates LINEAR between them; actual game FPS and native evaluator are unverified. 4 tail bones of two selected actions are from other NPC species, not PlayerBody. GPU render, materials, visual animation parity and full custom avatar/accessory mesh composition unverified."
    }
    report_out.parent.mkdir(parents=True,exist_ok=True)
    report_out.write_text(json.dumps(report,sort_keys=True,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
    print("R36_REAL_NATIVE_BIND_POSE_CANDIDATE",len(repairs),total,hashlib.sha256(new).hexdigest(),len(new))
    return report

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--glb",type=Path,required=True)
    p.add_argument("--skeleton",type=Path,required=True)
    p.add_argument("--match",type=Path,required=True)
    p.add_argument("--hermite",type=Path,required=True)
    p.add_argument("--out-glb",type=Path,required=True)
    p.add_argument("--out-report",type=Path,required=True)
    a=p.parse_args()
    export(a.glb,a.skeleton,a.match,a.hermite,a.out_glb,a.out_report)
