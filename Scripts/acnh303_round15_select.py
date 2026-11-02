#!/usr/bin/env python3
"""Select never-tested ACNH 3.0.3 standalone BWAV from the audited R14 baseline."""
import argparse,gzip,hashlib,json,subprocess
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA"
BASE=Path("derived/3.0.3/media_round14_cumulative/source_manifest.jsonl.gz")
def select(shard,shards,count,checkout=True):
    if not 0 <= shard < shards or not 1 <= count <= 100: raise ValueError("invalid range")
    with gzip.open(BASE,"rt",encoding="utf-8") as f:
        old={r["source_path"] for line in f if (r:=json.loads(line))}
    if len(old)!=1336:raise ValueError(f"R14 baseline mismatch: {len(old)}")
    prefix=f"{NCA}/1/Sound/"
    data=subprocess.run(["git","ls-tree","-rz","HEAD","--",prefix],check=True,capture_output=True).stdout
    candidates=[]
    for part in data.split(b"\x00"):
        if not part:continue
        meta,path=part.split(b"\t",1)
        if not meta.startswith(b"100644 blob ") or not path.lower().endswith(b".bwav"):continue
        text=path.decode("utf-8")
        relative=text[len(NCA)+3:]
        assigned=int.from_bytes(hashlib.sha256(path).digest()[:8],"big")%shards
        if assigned==shard and relative not in old:candidates.append(text)
    candidates.sort()
    if len(candidates)<count:raise ValueError(f"only {len(candidates)} candidates in {shard}/{shards}")
    selected=candidates[:count]
    if checkout:
        sparse=["/scripts/","/derived/"]+["/"+p for p in selected]
        subprocess.run(["git","sparse-checkout","set","--no-cone","--stdin"],input=("\n".join(sparse)+"\n").encode(),check=True)
    return dict(schema="acnh303-r15-bwav-selection-v1",category="Sound",suffix=".bwav",shard=shard,shards=shards,max_count=count,selected_files=count,paths=selected,excluded_r14=len(old),claims="Selected only; not yet converted")
def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--shard",type=int,required=True)
    ap.add_argument("--shards",type=int,default=12)
    ap.add_argument("--max-count",type=int,default=20)
    ap.add_argument("--no-checkout",action="store_true")
    a=ap.parse_args()
    d=select(a.shard,a.shards,a.max_count,not a.no_checkout)
    Path("selection.json").write_text(json.dumps(d,indent=2,sort_keys=True)+"\n")
    print("SELECTED",a.shard,len(d["paths"]))
if __name__=="__main__":main()
