#!/usr/bin/env python3
"""Gather original bytes of bounded UI2D section exemplars and two unique FCPX.

Reverse-engineering research only, no decoder semantics are inferred here.
Outputs small hex forensic samples and SHA evidence from original archive members.
"""
from __future__ import annotations
import csv, hashlib,json,pathlib,collections,sys
sys.path.insert(0,"scripts")
from acnh303_media_l3 import NCA,find_leaf
from acnh303_ui2d_parser import parse_headers

def dig(b):return hashlib.sha256(b).hexdigest()

def main():
    with pathlib.Path("derived/3.0.3/media_iteration4_cumulative/remaining.csv").open(newline="",encoding="utf-8") as fp:
        inputs={r["source_path"]:r["source_sha256"] for r in csv.DictReader(fp) if r["state"]=="no_target_leaf" and r["source_path"].startswith("Layout/")}
    if len(inputs)!=41:raise RuntimeError(len(inputs))
    fcpx={}
    counts=collections.Counter()
    sections={x:[] for x in ("mat1","prt1","cnt1","usd1","pai1","pat1","fnl1","txt1")}
    fingerprints={tag:set() for tag in sections}
    for src,expected in sorted(inputs.items()):
        original=(pathlib.Path(NCA)/"1"/src).read_bytes()
        if dig(original)!=expected:raise RuntimeError("source SHA-256 mismatch: "+src)
        for leaf in find_leaf(original,src):
            raw=leaf["data"]
            if raw.startswith(b"FCPX"):
                sha=dig(raw)
                if sha not in fcpx:fcpx[sha]={"source":src,"member":leaf["source_member"],"sha256":sha,"bytes":len(raw),"raw_hex":raw.hex()}
            if raw[:4] in (b"FLYT",b"FLAN"):
                head,endian=parse_headers(raw)
                for section in head["sections"]:
                    tag=section["tag"]
                    if tag not in sections:continue
                    start=section["offset"];end=section["end"]
                    record=raw[start:end];sha=dig(record)
                    counts[tag]+=1
                    if len(sections[tag])>28 or sha in fingerprints[tag]:continue
                    fingerprints[tag].add(sha)
                    sections[tag].append({"source":src,"member":leaf["source_member"],"raw_source_sha256":dig(raw),
                                         "section_index":section["index"],"tag":tag,"file_offset":start,
                                         "bytes":len(record),"sha256":sha,"hex":record.hex()})
    if len(fcpx)!=2:raise RuntimeError(f"expected exactly 2 distinct FCPX, found {len(fcpx)}")
    p=pathlib.Path("derived/3.0.3/ui2d_native_v7");p.mkdir(parents=True,exist_ok=True)
    obj={"scope":"actual raw bytes for native semantics research; section sample maximum 29 per tag; complete 2 unique FCPX",
         "source_count":len(inputs),"font_leaf_unique":len(fcpx),"font_buffers":list(fcpx.values()),
         "section_counts":dict(counts),"sections":sections}
    (p/"raw_evidence.json").write_text(json.dumps(obj,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print("NATIVE_RAW",json.dumps({"sources":len(inputs),"fonts":len(fcpx),"sections":dict(counts),"sampled":{k:len(v) for k,v in sections.items()}}),flush=True)
if __name__=="__main__":main()
