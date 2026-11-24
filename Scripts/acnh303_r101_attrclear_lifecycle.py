#!/usr/bin/env python3
"""R101: typed CRC32 pair, original Land enum, lifecycle source anchors and cross-game corpus verification."""
import argparse,csv,hashlib,json,zlib
from pathlib import Path
from collections import Counter
BASE=Path("derived/3.0.3/npc_event_flags/r101_attrclear")
def crc(s):
    return zlib.crc32(s.encode("ascii"))
def gitblob(p):
    b=p.read_bytes()
    return hashlib.sha1(("blob %d" % len(b)).encode()+bytes([0])+b).hexdigest()
def reverse_crc(c,suffix):
    table=[]
    for i in range(256):
        v=i
        for _ in range(8):
            v=(v>>1)^(0xedb88320 if v&1 else 0)
        table.append(v)
    inv={v>>24:i for i,v in enumerate(table)}
    state=c^0xffffffff
    for ch in reversed(suffix.encode("ascii")):
        i=inv[state>>24]
        state=(((state^table[i])<<8)|(i^ch))&0xffffffff
    return state^0xffffffff
def run(root,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    bare=reverse_crc(0x5140e4b4," u8")
    assert bare==0x221c60cb
    assert zlib.crc32(b".hshCstringRef",bare)==0xfdb1f290
    for h,n in e["reconstructed"].items():
        assert crc(n+" u8")==int(h,16)
    land=e["enum"]["land_source"]
    p=root/land["path"]
    assert gitblob(p)==land["blob"]
    with p.open(encoding="utf-8-sig",newline="") as f:
        counts=Counter(int(x["hash_FDB1F290"]) for x in csv.DictReader(f))
    assert sum(counts.values())==513
    for x in e["enum"]["labels"]:
        assert crc(x["label"])==int(x["label_crc32"],16)
        assert counts[crc(x["label"])]==x["land_303_rows"]
    assert set(counts)<={crc(x["label"]) for x in e["enum"]["labels"]}
    for a in e["anchors"]:
        p=root/a["path"]
        if gitblob(p)!=a["blob"]:
            raise ValueError("source blob drift "+str(p))
        s=p.read_text(encoding="utf-8")
        if not all(n in s for n in a["needles"]):
            raise ValueError("anchor mismatch "+str(p))
    d=json.loads((root/"derived/3.0.3/npc_event_flags/semantics/field_semantics.json").read_text(encoding="utf-8"))
    assert d["unknown"]["hash_5140E4B4"]["native_name"] is None
    for h,n in e["reconstructed"].items():
        x=d["unknown"]["hash_"+h]
        assert x["reconstructed_name"]==n and x["native_name"] is None
    report={"paired_crc_verified":True,"land_rows":513,"enum_labels":len(e["enum"]["labels"]),
            "native_source_anchors":len(e["anchors"]),"reconstructed_name_count":3,"confirmed_original_header_count":0,
            "unresolved_original_name":"5140E4B4","runtime_verified":False}
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    run(a.root.resolve(),a.out.resolve())
