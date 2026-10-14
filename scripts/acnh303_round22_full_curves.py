#!/usr/bin/env python3
"""ACNH 3.0.3 R22: full original FSKA bone+curve audit, cubic polynomial/Hermite.

Reference curve model: BfresLibrary CurveConvert.HermiteToCubicKey:
  a=p0, b=outSlope*dt, c=3*(p1-p0)-2*b-inSlope*dt,
  d=2*(p0-p1)+b+inSlope*dt.
Nintendo native runtime comparison remains NOT established.
"""
from __future__ import annotations
import argparse,hashlib,json,math,struct
from collections import Counter
from pathlib import Path
from acnh303_round21_anim_curves import parse_anim,ANIM_STRIDE,CURVE_STRIDE,FRAME_DT,KEY_DT,read_numbers
from acnh303_round20_fres_arrays import analyze as r20_analyze,NCA,SOURCE,sha
from acnh303_media_l3 import find_leaf

def cubic_eval(coeff,t):
    a,b,c,d=coeff
    return a+t*(b+t*(c+t*d))

def hermite_eval(y0,y1,tan0,tan1,t,dt):
    # tan0/tan1 are slopes per frame unit
    t2=t*t; t3=t2*t
    return ((2*t3-3*t2+1)*y0+(t3-2*t2+t)*dt*tan0
            +(-2*t3+3*t2)*y1+(t3-t2)*dt*tan1)

def read_curve_full(b,meta):
    n=meta["keyframe_count"]
    framefmt=meta["frame_format"];keyfmt=meta["key_format"]
    frames=read_numbers(b,meta["frame_ptr"],n,framefmt)
    flat=read_numbers(b,meta["key_ptr"],n*meta["elements_per_key"],keyfmt)
    e=meta["elements_per_key"]
    return frames,[flat[i*e:(i+1)*e] for i in range(n)]

def validate_cubic(b,curve):
    frames,rows=read_curve_full(b,curve)
    if curve["mode"]!="cubic":
        return {"status":"other_mode_not_replayed","segments":0}
    good_segments=[]
    mismatch=[]
    worst=None
    for i in range(len(frames)-1):
        dt=frames[i+1]-frames[i]
        if dt<=0 or not math.isfinite(dt):
            mismatch.append({"segment":i,"reason":"zero_or_negative_dt"});continue
        a,coef_b,c,d=rows[i]
        nexta=rows[i+1][0]
        # Real endpoints are not assumed matching; measure residual.
        poly_end=cubic_eval(rows[i],1)
        residue=poly_end-nexta
        if worst is None or abs(residue)>abs(worst["residue"]):
            worst={"segment":i,"frame0":frames[i],"frame1":frames[i+1],
                   "coefs":rows[i],"next_a":nexta,
                   "polynomial_end":poly_end,"residue":residue}
        out_slope=coef_b/dt
        in_slope=(coef_b+2*c+3*d)/dt
        at_mid=cubic_eval(rows[i],0.5)
        hmid=hermite_eval(a,poly_end,out_slope,in_slope,0.5,dt)
        # Algebraic consistency is evidence for curve-key coefficient
        # interpretation, not equivalence with native animation evaluator.
        tol=2e-5*(1+abs(at_mid)+abs(hmid))
        if not math.isfinite(residue) or not math.isfinite(at_mid) or not math.isfinite(hmid):
            mismatch.append({"segment":i,"reason":"nonfinite_evaluation"})
            continue
        if abs(at_mid-hmid)>tol:
            mismatch.append({"segment":i,"reason":"hermite_polynomial_disagree",
                             "error":abs(at_mid-hmid)})
        good_segments.append({"dt":dt,"endpoint_residue":residue,
                              "midpoint_unscaled":at_mid,
                              "out_slope":out_slope,"next_in_slope":in_slope})
    return {"status":"cubic_coefficient_replay",
            "keyframes":len(frames),"segments":len(good_segments),
            "max_abs_endpoint_residue":max([abs(s["endpoint_residue"]) for s in good_segments],default=0),
            "worst_endpoint":worst,
            "max_abs_tangent":max([abs(s[x]) for s in good_segments
                                   for x in ("out_slope","next_in_slope")],default=0),
            "samples":good_segments[:2],"mismatches":mismatch[:12],
            "mismatch_count":len(mismatch)}

def analyze(root):
    r20=r20_analyze(root)
    raw=(root/NCA/"1"/SOURCE).read_bytes()
    data=next(x["data"] for x in find_leaf(raw,SOURCE) if x["format"]=="bfres")
    if sha(data)!=r20["fres_sha256"]:raise ValueError("FRES identity drift")
    t=next(x for x in r20["tables"] if x["kind"]=="FSKA")
    if t["count"]!=406 or not t["dictionary"]["records_reference_same_keys"]:
        raise ValueError("R20 catalog not authenticated")
    status=Counter()
    modes=Counter()
    frame_keys=0;curves=0;bone_count=0;declared=0
    animations=[]
    worst_curves=[]
    for index in range(t["count"]):
        at=t["array_start"]+index*t["stride"]
        try:
            a=parse_anim(data,at,index,max_bone_records=4096,max_curves=100000)
        except Exception as exc:
            animations.append({"index":index,"status":"animation_header_rejected",
                               "error":f"{type(exc).__name__}:{str(exc)[:160]}"})
            status["animation_header_rejected"]+=1
            continue
        n=a["observed_curve_headers"];d=a["declared_curve_count"]
        row={"index":index,"name":a["name"],"frame_count":a["frame_count"],
             "bone_count":a["bone_count"],"declared_curve_count":d,
             "observed_curve_headers":n,
             "raw_curve_count":sum(len(b["curves"]) for b in a["bones"]),
             "declared_equals_parsed":d==n,
             "curve_parse_error_count":len(a["issues"]),
             "curve_parse_error_examples":a["issues"][:6]}
        bone_count+=a["bone_count"];declared+=d
        status["catalogued"]+=1
        if d!=n:status["declared_curve_mismatch"]+=1
        if a["issues"]:status["has_curve_errors"]+=1
        sampled=[]
        for bone in a["bones"]:
            for curve in bone["curves"]:
                curves+=1;frame_keys+=curve["keyframe_count"]
                modes[curve["mode"]]+=1
                if curve["mode"]=="cubic":
                    proof=validate_cubic(data,curve)
                    status["cubic_segments"]+=proof["segments"]
                    status["hermite_algebraic_mismatches"]+=proof["mismatch_count"]
                    if proof["max_abs_endpoint_residue"]>0.0005*(1+abs(curve["scale"])):
                        status["cubic_endpoint_residual_outliers"]+=1
                        worst_curves.append({"animation_index":index,"animation_name":a["name"],
                           "bone":bone["name"],"curve_header_file_offset":curve["header_file_offset"],
                           "frame_ptr":curve["frame_ptr"],"key_ptr":curve["key_ptr"],
                           "scale":curve["scale"],"offset":curve["offset"],
                           "worst":proof["worst_endpoint"],
                           "max_abs_endpoint_residue":proof["max_abs_endpoint_residue"]})
                    if len(sampled)<2:
                        sampled.append({"bone":bone["name"],"target_offset":curve["target_offset_bytes"],
                                       "curve_header_sha256":curve["raw_header_sha256"],
                                       "key_ptr":curve["key_ptr"],"frames_ptr":curve["frame_ptr"],
                                       "frames_sha256":curve["frames_blob_sha256"],
                                       "keys_sha256":curve["keys_blob_sha256"],
                                       "scale":curve["scale"],"offset":curve["offset"],
                                       "keyframe_count":curve["keyframe_count"],"eval":proof})
        row["examples"]=sampled
        animations.append(row)
    return {"schema":"acnh303-r22-full-fska-curve-hermite-static-v1",
            "source_sha256":r20["source_sha256"],"fres_sha256":sha(data),
            "declared_fska_animations":406,
            "animations_scanned":len(animations),"all_animation_headers_ok":status["catalogued"]==406,
            "total_bone_animation_headers":bone_count,
            "total_declared_curve_headers":declared,
            "total_parsed_curve_headers":curves,
            "total_keyframe_records":frame_keys,
            "mode_counts":dict(modes),
            "audit_counts":dict(status),
            "quantization_endpoint_audit":{
                "curves_with_nonzero_raw_endpoint_residual":len(worst_curves),
                "global_max_abs_raw_integer_residue":max([x["max_abs_endpoint_residue"] for x in worst_curves],default=0),
                "global_max_abs_scaled_residue":max([x["max_abs_endpoint_residue"]*abs(x["scale"]) for x in worst_curves],default=0),
                "raw_residue_histogram":dict(Counter(str(x["max_abs_endpoint_residue"]) for x in worst_curves)),
                "curves_raw_residue_over_2_units":sum(x["max_abs_endpoint_residue"]>2 for x in worst_curves),
                "limits":"Original int16 cubic coefficients have independent quantization. Residual is measured as (a+b+c+d)-next_a in raw coefficient units; multiply by curve Scale to estimate applied value-domain discontinuity. This does not prove native runtime interpolation."},
            "worst_endpoint_residual_curves":sorted(worst_curves,key=lambda x:x["max_abs_endpoint_residue"],reverse=True)[:25],
            "animations":animations,
            "verification_state":"FULL_FSKA_RAW_CURVES_AND_STATIC_HERMITE_ALGEBRA_NOT_RUNTIME_PLAYBACK",
            "limits":"Full file/bone/curve arrays read and SHA checked. Cubic coefficients algebraically converted to equivalent Hermite tangents, with measured endpoint residuals. No original in-game evaluator, skeleton binding or animated GLB verified."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r22_full_curves/full_fska_hermite.json"))
    a=p.parse_args()
    d=analyze(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    summary={"schema":"acnh303-r22-concise-curve-audit-v1",
             **{k:d[k] for k in ("source_sha256","fres_sha256","declared_fska_animations",
                "animations_scanned","all_animation_headers_ok","total_bone_animation_headers",
                "total_declared_curve_headers","total_parsed_curve_headers",
                "total_keyframe_records","mode_counts","audit_counts","verification_state",
                "limits","quantization_endpoint_audit","worst_endpoint_residual_curves")},
             "animation_examples":[{"name":x.get("name"),"index":x["index"],
                     "frame_count":x.get("frame_count"),
                     "bone_count":x.get("bone_count"),
                     "declared_curve_count":x.get("declared_curve_count"),
                     "observed_curve_headers":x.get("observed_curve_headers"),
                     "curve_parse_error_count":x.get("curve_parse_error_count"),
                     "examples":x.get("examples",[])[:1]} for x in d["animations"][:12]]}
    dest=a.out.parent/"curve_replay_summary.json"
    dest.write_text(json.dumps(summary,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    print("R22_FSKA_ALL",d["animations_scanned"],"bones",d["total_bone_animation_headers"],
          "parsed_curves",d["total_parsed_curve_headers"],
          "declared",d["total_declared_curve_headers"],
          "keys",d["total_keyframe_records"],"modes",d["mode_counts"],"audit",d["audit_counts"])
if __name__=="__main__":main()
