#!/usr/bin/env python3
"""Evidence-gated comparison of ACNH BFLAN offline curves and *real* game captures.

Never claim native parity if no original running-game samples exist. The
timeline values derived from BFLAN are mathematical candidate predictions.
Capture format:
source,animation_member,target,info_tag,raw_target_index,curve,frame,value
"""
from __future__ import annotations
import argparse,csv,hashlib,json,math
from pathlib import Path
FIELDS=("source","animation_member","target","info_tag","raw_target_index","curve","frame")
MAX_CAPTURE=1000000

def load_csv(path):
    with Path(path).open(encoding="utf-8",newline="") as f:
        rows=list(csv.DictReader(f))
    if len(rows)>MAX_CAPTURE:raise ValueError("too many trace rows")
    seen=set()
    for row in rows:
        missing=[f for f in (*FIELDS,"value") if f not in row]
        if missing:raise ValueError("missing capture fields: "+",".join(missing))
        key=tuple(row[f] for f in FIELDS)
        if key in seen:raise ValueError("duplicate keyframe/capture identity "+str(key))
        seen.add(key)
        if row["value"]:
            num=float(row["value"])
            if not math.isfinite(num):raise ValueError("non-finite captured value")
    return rows

def compare(reference,observed,tol):
    index={tuple(row[f] for f in FIELDS):row for row in reference}
    num=0;max_error=0;diffs=[];unknown=[]
    for row in observed:
        key=tuple(row[f] for f in FIELDS)
        base=index.get(key)
        if base is None:
            unknown.append(row)
            continue
        if not base["value"] or not row["value"]:
            diffs.append({"identity":list(key),"cause":"missing expected/observed numeric value"})
            continue
        a=float(base["value"]);b=float(row["value"])
        error=abs(a-b)
        max_error=max(error,max_error)
        num+=1
        if error>tol:diffs.append({"identity":list(key),"expected":a,"observed":b,"abs_error":error})
    return {"native_observations_compared":num,"maximum_absolute_error":max_error,
            "mismatches":diffs[:100],"mismatch_total":len(diffs),
            "unknown_trace_records":len(unknown),
            "within_absolute_tolerance_for_all_matched":num>0 and not diffs and not unknown}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--reference",type=Path,
      default=Path("derived/3.0.3/ui2d_timeline_v6/timeline_values.csv"))
    p.add_argument("--native-capture",type=Path)
    p.add_argument("--capture-provenance",help="Describes exact game build, UI path, emulator/console, runtime hook and trace origins")
    p.add_argument("--tolerance",type=float,default=1e-4)
    p.add_argument("--out",type=Path,
      default=Path("derived/3.0.3/ui2d_runtime_validation_v7/report.json"))
    a=p.parse_args()
    if not math.isfinite(a.tolerance) or a.tolerance<=0:raise ValueError("invalid tolerance")
    ref=load_csv(a.reference)
    result={"schema":"acnh303-flan-native-evidence-gate-v7",
            "expected_math_samples":len(ref),"reference_sha256":hashlib.sha256(a.reference.read_bytes()).hexdigest(),
            "tolerance_abs":a.tolerance,
            "limitations":"BFLAN offline mathematical curve samples are NOT the Nintendo native runtime evaluator. Static pane-name match cannot prove native visual correspondence."}
    if a.native_capture is None:
        result.update({"capture_exists":False,"runtime_parity":"NOT_TESTED",
                       "reason":"No instrumented ACNH 3.0.3 runtime captures supplied; native fidelity not claimable"})
    else:
        if not a.capture_provenance or len(a.capture_provenance)<20:
            raise ValueError("native samples need concrete game build and instrumentation provenance")
        obs=load_csv(a.native_capture)
        result.update({"capture_exists":True,"capture_provenance":a.capture_provenance,
                       "capture_sha256":hashlib.sha256(a.native_capture.read_bytes()).hexdigest(),
                       **compare(ref,obs,a.tolerance)})
        result["runtime_parity"]="PARTIAL_MATCH" if result["within_absolute_tolerance_for_all_matched"] else "MISMATCH_OR_UNMAPPED"
        result["runtime_parity_scope"]="observed identity-matched samples only; not full in-game animation playback"
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(result,ensure_ascii=False,indent=2))
if __name__=="__main__":main()
