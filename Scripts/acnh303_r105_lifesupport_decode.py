#!/usr/bin/env python3
"""Read-only typed GSaveLifeSupport achievement decoder and capture comparison."""
import argparse,csv,datetime,json,struct
from pathlib import Path
SIZE=0x5498
def date(raw):
    y,m,d=struct.unpack("<HBB",raw)
    if (y,m,d)==(0,0,0):return {"raw":raw.hex(),"date":None,"valid":True}
    try:return {"raw":raw.hex(),"date":datetime.date(y,m,d).isoformat(),"valid":True}
    except ValueError:return {"raw":raw.hex(),"date":None,"valid":False}
def decode(raw,i):
    if len(raw)!=SIZE or not 0<=i<512:raise ValueError("invalid region length or ID")
    return {"count":struct.unpack_from("<I",raw,0xe98+4*i)[0],"read_raw":list(raw[0x1698+6*i:0x1698+6*(i+1)]),"dates":[date(raw[0x2298+24*i+4*j:0x2298+24*i+4*j+4]) for j in range(6)],"new_state_raw":raw[0x5298+i]}
def compare(before,after,rows):
    ids=set();out=[]
    for r in rows:
        i=int(r["hash_54706054"])
        if i in ids:raise ValueError("duplicate ID")
        ids.add(i)
        a,b=decode(before,i),decode(after,i)
        out.append({"id":i,"key":r["hash_45F320F2"],"moving_marked":r["hash_BED25A86"]!="0","before":a,"after":b,"changed":a!=b,"after_zero":b["count"]==b["new_state_raw"]==0 and not any(b["read_raw"]) and all(x["raw"]=="00000000" for x in b["dates"])})
    return {"rows":out,"marked":sum(r["moving_marked"] for r in out),"marked_after_zero":sum(r["moving_marked"] and r["after_zero"] for r in out),"unmapped_changed":[i for i in range(512) if i not in ids and decode(before,i)!=decode(after,i)],"runtime_verified":False,"note":"Requires captures from same live object and invocation; raw new-state enum remains unknown."}
def selftest():
    a=bytearray(SIZE);b=bytearray(SIZE);i=53
    struct.pack_into("<I",a,0xe98+4*i,123)
    a[0x1698+6*i]=1
    struct.pack_into("<HBB",a,0x2298+24*i,2026,11,24)
    a[0x5298+i]=2
    rows=[{"hash_54706054":"53","hash_45F320F2":"ImmigratetoIsland","hash_BED25A86":"1"}]
    r=compare(a,b,rows)
    assert r["marked_after_zero"]==1 and r["rows"][0]["before"]["dates"][0]["date"]=="2026-11-24"
    assert not date(bytes.fromhex("ea070d01"))["valid"] and not r["runtime_verified"]
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--before",type=Path);p.add_argument("--after",type=Path);p.add_argument("--defs",type=Path);p.add_argument("--out",type=Path);p.add_argument("--selftest",action="store_true");a=p.parse_args()
    if a.selftest:selftest();print("synthetic typed LifeSupport comparison passed")
    else:
        if not all((a.before,a.after,a.defs,a.out)):p.error("before/after/defs/out required")
        with a.defs.open(encoding="utf-8-sig",newline="") as f:r=compare(a.before.read_bytes(),a.after.read_bytes(),list(csv.DictReader(f)))
        a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
