#!/usr/bin/env python3
"""Read-only R19 examination of previously failed Switch FRES animation candidate.

Detect zstd/Yaz0/SARC leaves by established parsers; preserve SHA, bytes and
bounded four-byte section token offsets. Never forge GLB or semantic animation.
"""
from __future__ import annotations
import argparse, gzip, hashlib, json, struct
from collections import Counter
from pathlib import Path
from acnh303_media_l3 import find_leaf, NCA

SOURCE="Model/CharactorAnimation20000.Nin_NX_NVN.zs"
TOKENS=[b"FSKA",b"FSHU",b"FVIS",b"FMAA",b"FSKL",b"FSHP",b"FVTX",b"FMDL",b"BNTX",b"FRES"]

def sha(b):return hashlib.sha256(b).hexdigest()

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r19_animation_probe/charactor_animation_20000.json"))
    a=p.parse_args()
    path=a.root/NCA/"1"/SOURCE
    raw=path.read_bytes()
    targetsha=sha(raw)
    legacy=a.root/"derived/3.0.3/media_round18_cumulative/source_manifest.jsonl.gz"
    with gzip.open(legacy,"rt",encoding="utf-8") as stream:
        old=next((json.loads(line) for line in stream if json.loads(line)["source_path"]==SOURCE),None)
    if not old or old["sha256"]!=targetsha or old["status"]!="failed":
        raise ValueError("R18 failed-original/source SHA mismatch: "+SOURCE)
    leaves=[]
    for leaf in find_leaf(raw,SOURCE):
        data=leaf["data"]
        d={"source_member":leaf["source_member"],"format_observed":leaf["format"],
           "bytes":len(data),"sha256":sha(data),"first_96_hex":data[:96].hex(),
           "token_candidates":{}}
        for magic in TOKENS:
            hits=[];idx=0
            while len(hits)<256:
                at=data.find(magic,idx)
                if at<0:break
                hits.append(at)
                idx=at+1
            d["token_candidates"][magic.decode()]={"positions":hits,"truncated":len(hits)==256}
        if data[:4]==b"FRES" and len(data)>=0x40:
            d["fres_header_uninterpreted"]={"bom_raw_0c_0e":data[0xC:0xE].hex(),
                "version_raw_08_0c":data[8:12].hex(),
                "raw_28_30":data[0x28:0x30].hex()}
        leaves.append(d)
    if not leaves:raise ValueError("No actual expanded resource leaves")
    result={"schema":"acnh303-r19-animation-fres-original-evidence-v1",
            "source_path":SOURCE,"original_bytes":len(raw),"source_sha256":targetsha,
            "r18_reported_status":old["status"],"r18_converter_errors":old["parser_errors"],
            "leaf_count":len(leaves),"leaves":leaves,
            "status":"structural_probe_only_not_animated_glb",
            "limits":"A four-byte token occurrence alone is not a validated BFRES subsection; model converter failure does not establish animation semantics. No GLB or runtime animation reconstructed."}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R19_ANIMATION_SOURCE",SOURCE,targetsha,"leaves",len(leaves),
          "candidate_tokens",sorted({x for leaf in leaves for x,z in leaf["token_candidates"].items() if z["positions"]}))

if __name__=="__main__":main()
