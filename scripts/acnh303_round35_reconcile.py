#!/usr/bin/env python3
"""R35 reconcile only actual new media/UI2D/BNSH/BARS reports.

Strict R19 baseline exclusion, immutable RomFS inventory sizes, per-output
source and SHA checks previously performed in original conversion jobs.
This is a DELTA, NOT new cumulative all-asset completion.
"""
from __future__ import annotations
import argparse,csv,gzip,hashlib,json
from pathlib import Path
from collections import Counter,defaultdict
BASE=Path("derived/3.0.3")
EXPECTED={"Model":160,"Layout":0,"Sound":160}
BARS_W="acnh303-BARS-BWAV-real-PCM-v1"
BARS_A="acnh303-bars-amta-lossless-v1"

def rows(p):
    with gzip.open(p,"rt",encoding="utf8") as f:
        for line in f:
            if line.strip():yield json.loads(line)

def hashfile(p):
    return hashlib.sha256(p.read_bytes()).hexdigest()

def inspect(collected):
    with gzip.open(BASE/"inventory/source_manifest.csv.gz","rt",encoding="utf8",newline="") as f:
        inv={r["source_relative_path"]:int(r["source_size"]) for r in csv.DictReader(f)}
    if len(inv)!=103400:raise ValueError("full inventory unavailable")
    base_media=list(rows(BASE/"media_round19_cumulative/source_manifest.jsonl.gz"))
    old_media={r["source_path"] for r in base_media}
    if len(base_media)!=3558 or len(old_media)!=3558:
        raise ValueError("R19 media baseline corrupted")
    old_bars={r["source_path"] for r in rows(BASE/"bars_round19_cumulative/source_manifest.jsonl.gz")
              if r.get("source_type")==BARS_W}
    if len(old_bars)!=80:raise ValueError("R19 BARS incremental baseline corrupted")
    # R19 is the immutable cumulative base. Additionally exclude R27+R28
    # actual SHA audited unique source identities; do not just shift counters.
    delta_records=[]
    for label,num in (("r27",40),("r28",224),("r29",80),("r30",48),("r31",40),("r32",88),("r33",240),("r34",388)):
        group=list(rows(BASE/f"{label}_cumulative/source_delta.jsonl.gz"))
        if len(group)!=num or len({r["source_path"] for r in group})!=num:
            raise ValueError("missing "+label+" source delta")
        delta_records.extend(group)
    delta_paths={r["source_path"] for r in delta_records}
    if len(delta_paths)!=1148 or delta_paths&old_media or delta_paths&old_bars:
        raise ValueError("R19/R27/R28 source collision")
    older_media={r["source_path"] for r in delta_records if r["category"] in ("Model","Layout")}
    older_bars={r["source_path"] for r in delta_records if r["category"]=="BARS"}
    if (len(older_media),len(older_bars))!=(776,372):
        raise ValueError("previous source categories changed")
    old_media|=older_media
    old_bars|=older_bars
    media_files=sorted(collected.rglob("manifest.json"))
    semantic_files=sorted(collected.rglob("semantic_manifest.json"))
    bnsh_files=sorted(collected.rglob("bnsh_manifest.json"))
    bars_files=sorted(collected.rglob("report.json"))
    if (len(media_files),len(semantic_files),len(bnsh_files),len(bars_files))!=(4,0,0,8):
        raise ValueError("missing independent shard reports "+str(
           [len(media_files),len(semantic_files),len(bnsh_files),len(bars_files)]))
    # Sanitize and reject repeated source records across shards and categories.
    media={}
    statuses=Counter();types=Counter();sz=0
    for p in media_files:
        group=p.parent.parent.name
        doc=json.loads(p.read_text("utf8"))
        for record in doc:
            name=record["source_path"]
            if name in media or name in old_media or name not in inv or name.split("/",1)[0]!=group:
                raise ValueError("media collision/previously tested/not inventoried: "+name)
            if inv[name]!=record["source_bytes"] or len(record["sha256"])!=64:
                raise ValueError("media source size/hash missing: "+name)
            media[name]=record
            statuses["media_"+record["status"]]+=1
            for out in record["validated_outputs"]:
                typ=out["validation"]["type"]
                if typ not in ("glb","png","wav") or typ=="wav":
                    raise ValueError("R35 does not need standalone WAV")
                if len(out["sha256"])!=64 or out["size_bytes"]<1:
                    raise ValueError("invalid media output digest")
                types[typ]+=1;sz+=out["size_bytes"]
    for g in ("Model","Layout"):
        if len([x for x in media if x.startswith(g+"/")])!=EXPECTED[g]:
            raise ValueError("missing media category "+g)
    semantics={}
    semantic_leaves=Counter()
    for p in semantic_files:
        r=json.loads(p.read_text("utf8"))
        for src in r["source_records"]:
            name=src["source_path"]
            if name in semantics or name not in media or not name.startswith("Layout/"):
                raise ValueError("UI2D nonmatched source")
            if src["source_sha256"]!=media[name]["sha256"]:
                raise ValueError("UI2D/media provenance mismatch")
            semantics[name]=src
            for leaf in src["leaves"]:
                semantic_leaves[leaf["status"]]+=1
    if len(semantics)!=EXPECTED["Layout"]:raise ValueError("UI2D incomplete")
    shader={}
    bnsh_n=0;bnsh_bytes=0
    for p in bnsh_files:
        d=json.loads(p.read_text("utf8"))
        for src in d["records"]:
            name=src["source_path"]
            if name in shader or name not in semantics or src["source_sha256"]!=media[name]["sha256"]:
                raise ValueError("BNSH lineage mismatch")
            shader[name]=src
            for m in src["bnsh_members"]:
                if m["status"]=="exact_native_bnsh_extracted":
                    if m["member_sha256"]!=m["output_sha256"] or m["member_bytes"]!=m["output_bytes"]:
                        raise ValueError("BNSH exact bytes mismatch")
                    bnsh_n+=1;bnsh_bytes+=m["member_bytes"]
    if len(shader)!=EXPECTED["Layout"]:raise ValueError("BNSH source audit incomplete")
    bars=defaultdict(dict);bars_status=Counter()
    for p in bars_files:
        d=json.loads(p.read_text("utf8"))
        if d["schema"] not in (BARS_W,BARS_A):
            raise ValueError("unexpected BARS report "+str(p))
        for src in d["records"]:
            name=src["source_path"]
            if name in old_bars or name in old_media or not name.startswith("Sound/") or name not in inv:
                raise ValueError("previously used/nonexistent BARS "+name)
            if d["schema"] in bars[name]:raise ValueError("duplicate BARS source/type")
            size=src["original_bytes"] if d["schema"]==BARS_W else src["source_bytes"]
            if size!=inv[name]:raise ValueError("BARS size drift")
            bars[name][d["schema"]]=src
            for m in src["members"]:bars_status[d["schema"]+"__"+m["status"]]+=1
    if len(bars)!=EXPECTED["Sound"] or any(set(g)!={BARS_W,BARS_A} for g in bars.values()):
        raise ValueError("BARS pair incomplete")
    for name,pair in bars.items():
        if pair[BARS_W]["source_sha256"]!=pair[BARS_A]["source_sha256"]:
            raise ValueError("paired BARS source hash mismatch")
    delta=[{"source_path":name,"source_sha256":v["sha256"],"source_bytes":v["source_bytes"],
           "category":name.split("/",1)[0],"status":v["status"],
           "validated_media_count":len(v["validated_outputs"])} for name,v in sorted(media.items())]
    for name,p in sorted(bars.items()):
        delta.append({"source_path":name,"source_sha256":p[BARS_W]["source_sha256"],
          "source_bytes":p[BARS_W]["original_bytes"],"category":"BARS",
          "status":p[BARS_W]["status"],
          "validated_media_count":sum(m["status"]=="converted_pcm_wav" for m in p[BARS_W]["members"])})
    if len(delta)!=320 or len({v["source_path"] for v in delta})!=320:
        raise ValueError("expected 320 original new distinct sources")
    report={"schema":"acnh303-r35-independent-L3-native-delta-v1",
      "authoritative_original_inventory":len(inv),
      "baseline_r19_r27_r28_r29_r30_r31_r32_r33_r34_media_sources":len(old_media),
      "baseline_r19_r27_r28_r29_r30_r31_r32_r33_r34_bars_source_count":768,
      "delta_original_sources":len(delta),"delta_model_sources":160,
      "delta_layout_sources":0,"delta_bars_sources":160,
      "r35_validated_core_media_outputs":sum(types.values()),
      "r35_core_media_output_bytes":sz,
      "r35_core_media_by_type":dict(types),
      "r35_media_status":dict(statuses),
      "r35_ui2d_leaf_status":dict(semantic_leaves),
      "r35_lossless_bnsh_members":bnsh_n,
      "r35_lossless_bnsh_bytes":bnsh_bytes,
      "r35_bars_member_statuses":dict(bars_status),
      "r35_bars_pcm_wav":bars_status[BARS_W+"__converted_pcm_wav"],
      "r35_bars_native_amta":bars_status[BARS_A+"__lossless_amta_extracted"],
      "remaining_unmeasured_after_r35_if_all_selected":{"Model":57938-160,"Layout":0,"BARS":928-160,"standalone_BWAV":0},
      "limits":"L3 sample execution and byte-exact BNSH extraction, not complete BFRES animation, AMTA semantics or GPU shader decompilation. BARS audio is separately audited."}
    return report,delta

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--collected",type=Path,required=True)
    ap.add_argument("--out",type=Path,default=BASE/"r35_cumulative")
    args=ap.parse_args()
    report,delta=inspect(args.collected)
    args.out.mkdir(parents=True,exist_ok=True)
    (args.out/"coverage.json").write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    with gzip.open(args.out/"source_delta.jsonl.gz","wt",encoding="utf8") as f:
        for item in delta:f.write(json.dumps(item,ensure_ascii=False,sort_keys=True)+"\n")
    print("R35_AUDITED",json.dumps({k:v for k,v in report.items() if k.startswith("r35_") or k=="delta_original_sources"}))
if __name__=="__main__":main()
