#!/usr/bin/env python3
"""R25: reproduce bind-pose consistency from R24 SOURCE-VERIFIED FMDL/FSKL report.

Data input is the byte/SHA-backed R24 decoded report, NOT a runtime capture.
Do not interpret matching names, bind matrices or transforms as runtime binding.
"""
import argparse
import hashlib
import itertools
import json
import math
from pathlib import Path

R24="derived/3.0.3/r24_model_skeleton/real_fmdl_fskl.json"
OUT="derived/3.0.3/r25_bind_pose/bind_pose_audit.json"
EXPECTED={"PlayerBody":"99ce2741d8cbe47f51ba1a645ae7becb020d67688ea44eba637a1c2ab3e2e6c3",
          "PlayerBottomsPantsNormal":"4702d40a825ee5939ac5de77e3434976c7e93cf7cd0a3524f235aced9586f42c",
          "BagBackpackBody0":"fe5fb678f649c8a4d013ec32caa39b82af0952d64f5e473325793e78e9c1577f",
          "PlayerHair00":"ffbabe6e08de335bf5bff16d34340cc60d05a51c7022efde7f5031a1b48b1bc0"}
ORDERS=["".join(v) for v in itertools.permutations("XYZ")]
EPS=1e-4

def identity():
    return [1.0 if k%5==0 else 0.0 for k in range(16)]

def mul(a,b):
    return [sum(a[4*i+k]*b[4*k+j] for k in range(4))
            for i in range(4) for j in range(4)]

def translate(v):
    a=identity()
    for i in range(3):a[4*i+3]=v[i]
    return a

def scale(v):
    a=identity()
    for i in range(3):a[5*i]=v[i]
    return a

def rot(axis,angle):
    a=identity(); c=math.cos(angle);s=math.sin(angle)
    if axis=="X":
        a[5]=c;a[6]=-s;a[9]=s;a[10]=c
    elif axis=="Y":
        a[0]=c;a[2]=s;a[8]=-s;a[10]=c
    elif axis=="Z":
        a[0]=c;a[1]=-s;a[4]=s;a[5]=c
    else:raise ValueError("unknown rotation axis")
    return a

def inverse_from_raw(raw):
    if len(raw)!=12 or not all(math.isfinite(x) for x in raw):
        raise ValueError("invalid inverse 3x4")
    return list(raw[:4])+list(raw[4:8])+list(raw[8:12])+[0.,0.,0.,1.]

def global_pose(bones,order):
    if sorted(x["index"] for x in bones)!=list(range(len(bones))):
        raise ValueError("bone index order or count invalid")
    cache={};pending=set()
    def resolve(i):
        if i in cache:return cache[i]
        if i in pending:raise ValueError("parent cycle")
        pending.add(i)
        b=bones[i];v=b["rotation"]
        if len(v)!=4 or not all(math.isfinite(x) for x in b["position"]+b["scale"]+v):
            raise ValueError("nonfinite bone transform")
        local=translate(b["position"])
        for axis in order:local=mul(local,rot(axis,v["XYZ".index(axis)]))
        local=mul(local,scale(b["scale"]))
        p=b["parent"]
        if p< -1 or p>=len(bones):raise ValueError("parent out of bounds")
        world=mul(resolve(p),local) if p>=0 else local
        pending.remove(i);cache[i]=world
        return world
    return [resolve(i) for i in range(len(bones))]

def audit_model(model,order):
    pose=global_pose(model["bones"],order)
    results=[]
    for record in model["inverse_model_matrices"]:
        idx=record["bone_index"]
        if not 0<=idx<len(pose):raise ValueError("inverse matrix bone out of bounds")
        inv=inverse_from_raw(record["matrix3x4_row_major_raw_f32"])
        product=mul(pose[idx],inv)
        maximum=max(abs(v-(1. if i%5==0 else 0.)) for i,v in enumerate(product))
        results.append({"name":record["bone_name"],"bone_index":idx,
             "matrix_sha256":record["matrix_sha256"],"max_abs_identity_error":maximum,
             "pass_1e_4":maximum<EPS})
    return {"order":order,"matrix_count":len(results),
            "pass_count":sum(r["pass_1e_4"] for r in results),
            "max_abs_error":max((r["max_abs_identity_error"] for r in results),default=None),
            "mismatches":[r for r in results if not r["pass_1e_4"]][:12]}

def cross_compare(base,other):
    bm={b["name"]:b for b in base["bones"]}
    om={b["name"]:b for b in other["bones"]}
    if len(bm)!=len(base["bones"]) or len(om)!=len(other["bones"]):
        raise ValueError("duplicate bone names")
    shared=sorted(bm.keys()&om.keys())
    trs=lambda b:(b["position"],b["rotation"],b["scale"])
    eq=[n for n in shared if trs(bm[n])==trs(om[n])]
    ai={m["bone_name"]:m["matrix_sha256"] for m in base["inverse_model_matrices"]}
    bi={m["bone_name"]:m["matrix_sha256"] for m in other["inverse_model_matrices"]}
    comparable=sorted(ai.keys()&bi.keys())
    exact=[n for n in comparable if ai[n]==bi[n]]
    return {"shared_name_count":len(shared),"shared_names":shared,
            "exact_base_TRS_count":len(eq),"different_base_TRS_names":sorted(set(shared)-set(eq)),
            "comparable_inverse_matrices":len(comparable),
            "identical_inverse_matrix_SHA256_count":len(exact),
            "different_inverse_matrix_SHA256_names":sorted(set(comparable)-set(exact))}

def analyze(source_bytes):
    doc=json.loads(source_bytes)
    if doc["schema"]!="acnh303-r24-real-model-skeleton-selection-v1":
        raise ValueError("R24 report version drift")
    if doc["animation_reference"]["bone_entries"]!=23142:
        raise ValueError("R23 animation reference drift")
    selected={}
    for entry in doc["candidates"]:
        if entry["status"]=="skeleton_validated":
            for m in entry["models"]:
                selected[m["name"]]=(entry,m)
    for name,sha in EXPECTED.items():
        if name not in selected or selected[name][0]["source_sha256"]!=sha:
            raise ValueError("source provenance changed: "+name)
    results={}
    for name,(source,model) in selected.items():
        rotations={order:audit_model(model,order) for order in ORDERS}
        winner=rotations["ZYX"]
        if winner["pass_count"]!=winner["matrix_count"] or (
            winner["matrix_count"] and winner["max_abs_error"]>=EPS):
            raise ValueError("R24 inverse-bind ZYX replay failed: "+name)
        results[name]={"source_sha256":source["source_sha256"],
           "fres_sha256":model["fres_sha256"],"bone_count":model["bone_count"],
           "matched_animation_bone_names":model["overlap_count_all"],
           "rotation_mode_source":model["rotation_mode_by_skeleton_flags"],
           "orders":rotations,
           "matrix_to_bone_indices":model["matrix_to_bone_indices"]}
    tested=sum(results[n]["orders"]["ZYX"]["matrix_count"] for n in EXPECTED)
    if tested!=57:raise ValueError("unexpected inverse matrix census")
    base=selected["PlayerBody"][1]
    pairs={name:cross_compare(base,selected[name][1]) for name in
           ("PlayerBottomsPantsNormal","BagBackpackBody0","PlayerHair00")}
    return {"schema":"acnh303-r25-bindpose-crossmodel-v1",
       "input_report_sha256":hashlib.sha256(source_bytes).hexdigest(),
       "source_validation":"R24 source-SHA-bound decoded original data; no fresh RomFS read in R25",
       "r23_animation_reference":doc["animation_reference"],
       "models":results,"total_inverse_matrices_checked":tested,
       "all_57_ZYX_pass_1e_4":True,"cross_model_with_PlayerBody":pairs,
       "limits":"ZYX Euler pose matches native inverse bind bytes numerically, not runtime animation evaluation, live attach or external animation BindSkeleton.",
       "verification_state":"STATIC_BIND_POSE_NUMERICALLY_CLOSED_RUNTIME_MODEL_ANIMATION_BINDING_UNPROVEN"}

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--input",type=Path,default=Path(R24))
    ap.add_argument("--out",type=Path,default=Path(OUT))
    a=ap.parse_args()
    obj=analyze(a.input.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(obj,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R25_BINDPOSE",obj["total_inverse_matrices_checked"],"matrices; shared",
          {k:(v["exact_base_TRS_count"],v["identical_inverse_matrix_SHA256_count"])
           for k,v in obj["cross_model_with_PlayerBody"].items()})

if __name__=="__main__":main()
