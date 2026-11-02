#!/usr/bin/env python3
"""Independent compact summary of ACTUALLY deserialized original Nintendo FSKA curves.

Reads real BfresLibrary 1.6 JSON of 406 animations, all 24281 curves
and 393029 real frame values. No glTF or renderer interpolation claims.
"""
import argparse,json,statistics,hashlib
from collections import Counter
from pathlib import Path
def analyze(source):
    raw=source.read_bytes()
    d=json.loads(raw)
    if d.get("status")!="fully_deserialized_with_external_bfres_library":
        raise ValueError("no real native deserialization evidence")
    animations=d["skeletal_animations"]
    if len(animations)!=406:raise ValueError("FSKA count drift")
    frame_counts=[];bone_names=set();anim_samples=[];curves=0;frame_values=0;curve_types=Counter();typecount=Counter();bone_refs=0
    for a in animations:
        frames=a["frame_count"];frame_counts.append(frames)
        if a["bone_animation_count"]!=len(a["bone_animations"]):raise ValueError("bone count drift")
        bone_refs+=len(a["bone_animations"])
        if len(anim_samples)<35:anim_samples.append({"name":a["name"],"frames":frames,"bones":a["bone_animation_count"],"loop":a["loop"],"baked":a["baked"]})
        for bone in a["bone_animations"]:
            bone_names.add(bone["name"])
            if len(bone["curves"])!=bone["curve_count"]:raise ValueError("bone curve count drift")
            for c in bone["curves"]:
                curves+=1
                f=c["frames"];k=c["keys"]
                if len(f)!=len(k) or len(f)!=c["key_count"]:raise ValueError("native key counts drift")
                frame_values+=len(f)
                curve_types[c["curve_type"]]+=1
                typecount[c["frame_type"]]+=1
    if (curves,frame_values)!=(24281,393029):raise ValueError("original FSKA actual curves/keys drift")
    return {"schema":"acnh303-r34-true-nw-fska-animation-curve-summary-v1",
       "parsed_original_sha256":hashlib.sha256(raw).hexdigest(),
       "source_library":d["library"],
       "animation_count":len(animations),
       "bone_animation_references":bone_refs,
       "unique_bone_names":len(bone_names),
       "curve_count":curves,
       "frame_value_count":frame_values,
       "sample_animation_names":anim_samples,
       "sample_bone_names":sorted(bone_names)[:50],
       "frame_count_min":min(frame_counts),"frame_count_max":max(frame_counts),
       "frame_count_median":statistics.median(frame_counts),
       "loops":sum(a["loop"] for a in animations),
       "baked":sum(a["baked"] for a in animations),
       "curve_type_distribution":dict(curve_types),
       "frame_type_distribution":dict(typecount),
       "limitations":"Actual deserialized FSKA curves/keyframes. No evidence of runtime skeleton binding, glTF interpolation or visual equivalence."}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--input",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();d=analyze(a.input)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R34_REAL_FSKA_SUMMARY",json.dumps(d,ensure_ascii=False)[:4800])
if __name__=="__main__":main()
