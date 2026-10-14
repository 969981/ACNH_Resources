#!/usr/bin/env python3
"""R14 audit of fresh BARS PCM WAV + lossless AMTA against R10 cumulative baseline."""
from __future__ import annotations
import argparse, collections, gzip, json
from pathlib import Path

BW="acnh303-BARS-BWAV-real-PCM-v1"
AM="acnh303-bars-amta-lossless-v1"
def load(path):
    return json.loads(path.read_text(encoding="utf-8"))
def rows(path):
    with gzip.open(path,"rt",encoding="utf-8") as stream:
        for line in stream:
            if line.strip():yield json.loads(line)
def hexsha(x):
    return isinstance(x,str) and len(x)==64 and all(c in "0123456789abcdef" for c in x)
def reconcile(collected, prior_manifest, prior_coverage, out, shards, per_shard):
    prior=load(prior_coverage)
    if prior["bars_tested_cumulative"]!=104 or prior["bars_pcm_wav_cumulative"]!=1062:
        raise ValueError("R10 BARS cumulative coverage mismatch")
    older={r["source_path"] for r in rows(prior_manifest) if r.get("source_type")==BW}
    if len(older)!=64:raise ValueError("64 expected R10 entries")
    for path in ("bars_audio_round8/report.json","round9_cumulative/source_manifest.jsonl.gz"):
        if not (Path("derived/3.0.3")/path).is_file():
            raise FileNotFoundError("missing older BARS source history: "+path)
    r8=load(Path("derived/3.0.3/bars_audio_round8/report.json"))
    older.update(x["source_path"] for x in r8["records"])
    older.update(x["source_path"] for x in rows(Path("derived/3.0.3/round9_cumulative/source_manifest.jsonl.gz"))
                 if x.get("source_type")==BW)
    if len(older)!=104:raise ValueError("previous 104 BARS paths not unique")
    collected_paths=sorted(collected.rglob("report.json"))
    grouped=collections.defaultdict(list)
    for f in collected_paths:
        o=load(f)
        if o.get("schema") in (BW,AM):
            grouped[o["schema"]].append((f,o))
    if any(len(grouped[k])!=shards for k in (BW,AM)):
        raise ValueError("missing unique BARS/AMTA shard reports")
    census={};status=collections.Counter()
    for kind in (BW,AM):
        data={}
        for path,document in grouped[kind]:
            if len(document["records"])!=per_shard:raise ValueError("partial shard: "+str(path))
            for rec in document["records"]:
                name=rec["source_path"]
                if name in older or name in data or not name.startswith("Sound/") or not name.endswith(".bars") or not hexsha(rec.get("source_sha256")):
                    raise ValueError("repeated/invalid source: "+name)
                data[name]=rec
                status[kind+"_"+rec.get("status","reported")]+=1
                for leaf in rec.get("members",[]):
                    x=leaf.get("status")
                    status[kind+"__member__"+str(x)]+=1
                    if kind==BW and x=="converted_pcm_wav":
                        if not hexsha(leaf.get("source_member_sha256")) or not hexsha(leaf.get("output_sha256")) or leaf.get("validation",{}).get("frames",0)<1 or leaf["validation"].get("type")!="wav":
                            raise ValueError("Invalid output WAV proof")
                        status["new_pcm_wav"]+=1
                    if kind==AM and x=="lossless_amta_extracted":
                        if not hexsha(leaf.get("amta_sha256")) or leaf.get("native",{}).get("version_hex")!="0x0500":
                            raise ValueError("Invalid AMTA v5 member")
                        status["new_amta_v5"]+=1
        census[kind]=data
    a={k:v["source_sha256"] for k,v in census[BW].items()}
    b={k:v["source_sha256"] for k,v in census[AM].items()}
    if a!=b or len(a)!=shards*per_shard:
        raise ValueError("BARS AMTA sources or source-hashes mismatched")
    out.mkdir(parents=True,exist_ok=True)
    with (out/"source_manifest.jsonl.gz").open("wb") as f:
        with gzip.GzipFile(fileobj=f,filename="",mtime=0,mode="wb",compresslevel=9) as gz:
            for kind in sorted(census):
                for name,doc in sorted(census[kind].items()):
                    gz.write((json.dumps({"source_type":kind,**doc},ensure_ascii=False,sort_keys=True)+"\n").encode())
    cov={"schema":"acnh303-r14-bars-amta-verified-v1",
        "original_bars_inventory":1696,"prior_bars_tested":104,
        "new_bars_tested":len(a),"bars_tested_total":104+len(a),
        "remaining_unmeasured_bars":1696-104-len(a),
        "prior_valid_bars_pcm_wav":1062,"new_valid_bars_pcm_wav":status["new_pcm_wav"],
        "cumulative_bars_pcm_wav":1062+status["new_pcm_wav"],
        "prior_amta_v5_round9_plus_round10":prior["amta_v5_members_round9_plus_round10"],
        "new_lossless_amta_v5":status["new_amta_v5"],
        "amta_v5_known_count":prior["amta_v5_members_round9_plus_round10"]+status["new_amta_v5"],
        "source_sha_proof":"all BARS/AMTA source identities matched, all validated member SHA/format present; output bytes validated in source runners",
        "counts":dict(status),
        "limitations":"BARS PCM WAV is separate from standalone-BWAV media audit; AMTA native v5 playback/loop semantics not verified."}
    (out/"coverage.json").write_text(json.dumps(cov,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    print("R14_BARS_AUDIT",json.dumps(cov,ensure_ascii=False),flush=True)
    return cov
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--collected",required=True,type=Path)
    p.add_argument("--prior-manifest",required=True,type=Path)
    p.add_argument("--prior-coverage",required=True,type=Path)
    p.add_argument("--out",required=True,type=Path)
    p.add_argument("--shards",type=int,default=4)
    p.add_argument("--per-shard",type=int,default=4)
    a=p.parse_args()
    reconcile(a.collected,a.prior_manifest,a.prior_coverage,a.out,a.shards,a.per_shard)
if __name__=="__main__":
    main()
