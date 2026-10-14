#!/usr/bin/env python3
"""Read-only byte evidence for the R17 Npc.bars 128-byte BWAV anomaly.

Do not rewrite or pad the member. Report exact offset, SHA, bounded first
bytes, and adjacent members for Native/codec investigation. No fake WAV.
"""
import argparse
import hashlib
import json
from pathlib import Path
from acnh303_bars_probe import inspect,NCA

SOURCE="Sound/Resource/Npc.bars"
TARGET_INDEX=166

def sha(b):return hashlib.sha256(b).hexdigest()
def diagnose(root):
    file=root/NCA/"1"/SOURCE
    src=file.read_bytes()
    meta=inspect(src)
    if not (meta["magic"]=="BARS" and len(meta["items"])>TARGET_INDEX):
        raise ValueError("expected Npc BARS item 166 absent")
    boundary=meta["declared_file_size"]
    points=sorted({r[k] for r in meta["items"] for k in ("meta_offset","asset_offset")
                   if isinstance(r[k],int) and 0<r[k]<boundary and r[k]!=0xffffffff}|{boundary})
    def describe(index):
        i=meta["items"][index]
        at=i["asset_offset"]
        nexts=[n for n in points if n>at]
        if not nexts or at<=0 or at>=boundary:
            return {"index":index,"invalid_bounds":True,"native_metadata":i}
        data=src[at:nexts[0]]
        return {"index":index,"asset_offset":at,"asset_end":nexts[0],
                "member_bytes":len(data),"sha256":sha(data),
                "magic":data[:4].decode("ascii","replace"),
                "head_64_hex":data[:64].hex(),"last_32_hex":data[-32:].hex(),
                "native_metadata":i}
    target=describe(TARGET_INDEX)
    if target["member_bytes"]!=128 or target["magic"]!="BWAV":
        raise ValueError("R17 anomalous 128-byte BWAV evidence has changed")
    others=[describe(i) for i in range(max(0,TARGET_INDEX-3),min(len(meta["items"]),TARGET_INDEX+4))
            if i!=TARGET_INDEX]
    return {"schema":"acnh303-r18-npc-bwav166-raw-difference-v1",
            "source_path":SOURCE,"source_sha256":sha(src),"source_bytes":len(src),
            "bars_declared_bytes":boundary,"item_count":len(meta["items"]),
            "target":target,"neighbors":others,
            "status":"anomaly_evidence_only_no_pcm",
            "limitations":"An index/offset-based byte comparison is not a codec diagnosis. No output WAV is claimed."}

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path("."))
    ap.add_argument("--out",type=Path,default=Path("derived/3.0.3/r18_native_probe/npc_bwav166.json"))
    a=ap.parse_args()
    d=diagnose(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R18_NPC_ANOMALY",d["source_sha256"],d["target"]["sha256"],"bytes",d["target"]["member_bytes"])

if __name__=="__main__":main()
