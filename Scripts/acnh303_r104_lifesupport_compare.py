#!/usr/bin/env python3
"""Compare two read-only GSaveLifeSupport region captures, not a save writer."""
import argparse,csv,json
from pathlib import Path
SPAN=0x5498
REGIONS=(("count",0xe98,4),("milestone_bytes_raw",0x1698,6),("milestone_words_raw",0x2298,24),("tail_byte_raw",0x5298,1))
def compare(before,after,rows):
    if len(before)!=SPAN or len(after)!=SPAN:raise ValueError("need exact 0x5498-byte captures from same GSaveLifeSupport base")
    seen=set();result=[]
    for r in rows:
        i=int(r["hash_54706054"])
        if i in seen or not 0<=i<512:raise ValueError("bad achievement ID")
        seen.add(i);data={}
        for name,off,stride in REGIONS:
            a=off+i*stride;b=a+stride;old=before[a:b];new=after[a:b]
            data[name]={"before_hex":old.hex(),"after_hex":new.hex(),"changed":old!=new,"after_zero":not any(new)}
        result.append({"id":i,"key":r["hash_45F320F2"],"moving_marked":r["hash_BED25A86"]!="0","fields":data})
    return {"definitions":len(result),"marked":sum(x["moving_marked"] for x in result),"marked_all_zero":sum(x["moving_marked"] and all(y["after_zero"] for y in x["fields"].values()) for x in result),"unmarked_changed":[x["id"] for x in result if not x["moving_marked"] and any(y["changed"] for y in x["fields"].values())],"rows":result,"runtime_verified":False,"note":"Verify same live object, function entry/return, and capture provenance independently. Raw arrays have no confirmed full semantic names."}
def selftest():
    before=bytearray(SPAN);after=bytearray(SPAN);i=53
    for _,off,stride in REGIONS:before[off+i*stride:off+(i+1)*stride]=b"\xff"*stride
    rows=[{"hash_54706054":"53","hash_45F320F2":"ImmigratetoIsland","hash_BED25A86":"1"}]
    r=compare(before,after,rows);assert r["marked_all_zero"]==1 and not r["runtime_verified"]
    try:compare(before[:-1],after,rows)
    except ValueError:pass
    else:raise AssertionError("short dump accepted")
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--before",type=Path);p.add_argument("--after",type=Path);p.add_argument("--defs",type=Path);p.add_argument("--out",type=Path);p.add_argument("--selftest",action="store_true");a=p.parse_args()
    if a.selftest:selftest();print("synthetic life support comparison passed")
    else:
        if not all((a.before,a.after,a.defs,a.out)):p.error("before, after, defs, out required")
        with a.defs.open(encoding="utf-8-sig",newline="") as f:r=compare(a.before.read_bytes(),a.after.read_bytes(),list(csv.DictReader(f)))
        a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
