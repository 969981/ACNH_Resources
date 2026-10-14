#!/usr/bin/env python3
"""Offline, explicitly NON-NATIVE UI2D FLAN curve-value samples for visual inspection.

Uses decoded BFLAN numeric frames but applies standard Hermite mathematical
interpolation, which is NOT verified to match Nintendo's runtime and must
not be called game UI rendering. The raw index/track tag is preserved.
"""
import bisect
import csv
import json
import math
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"
MAX_FRAMES=1000

def interp(keys,curve,frame):
    if not keys:return None
    data=sorted(keys,key=lambda k:k[0])
    if any(not isinstance(k[0],(int,float)) or not math.isfinite(k[0])
           or len(k)<2 or not isinstance(k[1],(int,float)) or not math.isfinite(k[1])
           for k in data):
        return None
    if frame<=data[0][0]:return float(data[0][1])
    if frame>=data[-1][0]:return float(data[-1][1])
    lo=0
    while lo+1<len(data) and data[lo+1][0]<=frame:lo+=1
    k0,k1=data[lo:lo+2]
    span=k1[0]-k0[0]
    if span<=0:return float(k1[1])
    if curve=="step":return float(k0[1])
    if curve=="constant":
        return float(k0[1]) # do not assume constant curve means linear interpolation
    if curve=="hermite" and len(k0)>=3 and len(k1)>=3:
        t=(frame-k0[0])/span
        h00=2*t*t*t-3*t*t+1
        h10=t*t*t-2*t*t+t
        h01=-2*t*t*t+3*t*t
        h11=t*t*t-t*t
        return h00*k0[1]+h10*span*k0[2]+h01*k1[1]+h11*span*k1[2]
    return None

def main():
    root=Path("Unpack_UI2D_Font")/NCA/"1"/"Layout"
    out=Path("derived/3.0.3/ui2d_timeline_v6")
    out.mkdir(parents=True,exist_ok=True)
    count=0;sampled=0;unsupported=0
    with (out/"timeline_values.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["source","animation_member","target","info_tag","raw_target_index",
                    "curve","frame","value","status"])
        for folder in sorted(root.glob("*.zs.ui2d")):
            source=folder.name[:-len(".ui2d")]
            for path in sorted(folder.glob("*.bflan.json")):
                doc=json.loads(path.read_text(encoding="utf-8"))
                for block in doc.get("animations",[]):
                    if block["section"]!="pai1":continue
                    total=min(MAX_FRAMES,int(block["value"]["frame_count"]))
                    for entry in block["value"].get("entries",[]):
                        for info in entry.get("infos",[]):
                            for target in info.get("keyframes",[]):
                                if not isinstance(target,dict) or "curve" not in target:continue
                                count+=1
                                for frame in range(total+1):
                                    predicted=interp(target.get("keys",[]),target["curve"],frame)
                                    if predicted is None:unsupported+=1
                                    else:sampled+=1
                                    w.writerow([source,doc.get("origin_member",""),entry.get("name",""),
                                        info.get("tag",""),target.get("index",""),target["curve"],
                                        frame, predicted if predicted is not None else "",
                                        "mathematical_preview_only" if predicted is not None else "unsupported_curve_or_keys"])
    report={"schema":"acnh303-bflan-mathematical-timeline-v1",
            "track_count":count,"sampled_frame_values":sampled,"unsupported_frame_values":unsupported,
            "source_type":"21 original BFLAN v9 JSON files in 41 Layout source archives",
            "scope":"non-native curve interpolation samples only, not original renderer evaluation. SRT target indexes kept raw; no invented UI visual geometry"}
    (out/"summary.json").write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps(report),flush=True)
if __name__=="__main__":main()
