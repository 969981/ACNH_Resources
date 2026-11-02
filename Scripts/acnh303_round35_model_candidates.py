#!/usr/bin/env python3
"""Locate original untouched likely player/human model BFRES containers by Git blob name.

This is a NAME-ONLY candidate search; NO claim of FSKL match until actual
ResFile.Models Skeleton and bones SHA-check against parsed FSKA.
"""
import argparse,collections,hashlib,json,re,subprocess
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA/1/"
PATTERNS=[("Player",re.compile(r"player|charactor|character|human",re.I)),
("Body",re.compile(r"body|avatar|mannequin|head|hand|foot",re.I)),
("Npc",re.compile(r"npc|villager|animal",re.I))]
def run():
    buf=subprocess.run(["git","ls-tree","-rz","HEAD","--",NCA+"Model/"],capture_output=True,check=True).stdout
    originals=[]
    for x in buf.split(b"\x00"):
        if not x:continue
        h,p=x.split(b"\t",1)
        if not h.startswith(b"100644 blob "):continue
        s=p.decode("utf8")
        if s.lower().endswith(".zs"):originals.append(s)
    if len(originals)!=60166:raise ValueError("60166 real Model originals expected")
    groups={}
    for label,pattern in PATTERNS:
        vals=[x for x in originals if pattern.search(Path(x).name)]
        vals.sort(key=lambda x:(0 if "player" in x.lower() else 1,len(Path(x).name),x))
        groups[label]={"total":len(vals),"examples":vals[:220]}
    return {"schema":"acnh303-r35-original-model-name-search-v1",
       "original_model_source_count":len(originals),
       "candidate_groups":groups,
       "scope_note":"Original path names only, not proof of matching bone hierarchy or animation playable GLTF."}
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    data=run();a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(data,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
    print("R35_MODEL_CANDIDATES",json.dumps(data,ensure_ascii=False)[:5500])
