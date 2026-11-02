#!/usr/bin/env python3
"""Proof-based BARS/AMTA R10 census, independent of core L3 media."""
from __future__ import annotations
import argparse,collections,gzip,json
from pathlib import Path

BARS="acnh303-BARS-BWAV-real-PCM-v1"
AMTA="acnh303-bars-amta-lossless-v1"
def load(path):return json.loads(path.read_text(encoding="utf-8"))
def checked_hash(value):
    return isinstance(value,str) and len(value)==64 and all(c in "0123456789abcdef" for c in value)
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--collected",type=Path,required=True)
    p.add_argument("--round8-bars",type=Path,required=True)
    p.add_argument("--round9",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--shards",type=int,default=8)
    p.add_argument("--per-shard",type=int,default=8)
    a=p.parse_args()
    files=sorted(a.collected.rglob("report.json"))
    by_kind=collections.defaultdict(list)
    for path in files:
        report=load(path)
        if report["schema"] in (BARS,AMTA):
            by_kind[report["schema"]].append((path,report))
    for kind in (BARS,AMTA):
        if len(by_kind[kind])!=a.shards:
            raise ValueError(f"{kind} has {len(by_kind[kind])}/{a.shards} reports")
    original=load(a.round8_bars)
    older={r["source_path"] for r in original["records"]}
    if len(older)!=8:raise ValueError("round8 BARS not eight")
    r9_bars={};r9_amta={}
    with gzip.open(a.round9,"rt",encoding="utf-8") as stream:
        for line in stream:
            r=json.loads(line)
            if r["source_type"]==BARS:r9_bars[r["source_path"]]=r["source_sha256"]
            elif r["source_type"]==AMTA:r9_amta[r["source_path"]]=r["source_sha256"]
    if len(r9_bars)!=32 or r9_bars!=r9_amta or older.intersection(r9_bars):
        raise ValueError("round9 BARS baseline mismatch")
    oldset=older|set(r9_bars)
    cumulative=collections.Counter()
    new={}
    for kind in (BARS,AMTA):
        records={}
        for path,report in by_kind[kind]:
            if len(report["records"])!=a.per_shard:raise ValueError(f"{path}: partial shard")
            for item in report["records"]:
                source=item["source_path"]
                if source in oldset or source in records:
                    raise ValueError("duplicate R10 BARS source: "+source)
                if not source.startswith("Sound/") or not source.lower().endswith(".bars"):
                    raise ValueError("invalid original BARS pathname")
                if not checked_hash(item["source_sha256"]):
                    raise ValueError("source SHA missing")
                records[source]=item
                for member in item["members"]:
                    status=member["status"]
                    cumulative[kind+"__status__"+status]+=1
                    if kind==BARS and status=="converted_pcm_wav":
                        if not checked_hash(member["source_member_sha256"]) or not checked_hash(member["output_sha256"]) or member.get("validation",{}).get("type")!="wav" or member["validation"].get("frames",0)<=0:
                            raise ValueError("fake/invalid PCM evidence")
                        cumulative["new_bars_valid_pcm_wav"]+=1
                    if kind==AMTA and status=="lossless_amta_extracted":
                        if not checked_hash(member["amta_sha256"]) or member.get("native",{}).get("version_hex")!="0x0500":
                            raise ValueError("AMTA v5 member hash/version missing")
                        cumulative["new_amta_v5_exact_members"]+=1
        if len(records)!=a.shards*a.per_shard:
            raise ValueError("incomplete BARS originals")
        new[kind]=records
    a_hash={n:r["source_sha256"] for n,r in new[BARS].items()}
    b_hash={n:r["source_sha256"] for n,r in new[AMTA].items()}
    if a_hash!=b_hash:raise ValueError("BARS and AMTA source/hash mismatch")
    if cumulative["new_bars_valid_pcm_wav"]==0 or cumulative["new_amta_v5_exact_members"]==0:
        raise ValueError("no real audio or AMTA")
    a.out.mkdir(parents=True,exist_ok=True)
    with (a.out/"source_manifest.jsonl.gz").open("wb") as file:
        with gzip.GzipFile(fileobj=file,filename="",mtime=0,mode="wb",compresslevel=9) as out:
            for kind in sorted(new):
                for name,row in sorted(new[kind].items()):
                    out.write((json.dumps({"source_type":kind,**row},ensure_ascii=False,sort_keys=True)+"\n").encode())
    result={"schema":"acnh303-r10-bars-amta-cumulative-v1",
            "previous_bars_tested":40,
            "new_bars_originals":len(new[BARS]),
            "bars_tested_cumulative":40+len(new[BARS]),
            "previous_bars_valid_pcm_wav":228,
            "bars_pcm_wav_cumulative":228+cumulative["new_bars_valid_pcm_wav"],
            "prior_round9_amta_v5_members":208,
            "amta_v5_members_round9_plus_round10":208+cumulative["new_amta_v5_exact_members"],
            "remaining_bars_not_L3_tested":1696-40-len(new[BARS]),
            "counts":dict(sorted(cumulative.items())),
            "scope":"Core media L3 is separate. AMTA metadata v5 exact raw only; NO loop/name/playback interpretation."}
    (a.out/"coverage.json").write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print(json.dumps(result,indent=2,ensure_ascii=False),flush=True)

if __name__=="__main__":main()
