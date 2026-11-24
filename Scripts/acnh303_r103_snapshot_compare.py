#!/usr/bin/env python3
"""Compare real read-only before/after Player u16 flag-region dumps; no process writes."""
import argparse,csv,json,struct
from pathlib import Path
def compare(before,after,defs):
    if len(before)!=4096 or len(after)!=4096:raise ValueError("need two exact 0x1000-byte u16 region dumps")
    b=struct.unpack("<2048H",before);a=struct.unpack("<2048H",after)
    seen=set();rows=[]
    for r in defs:
        i=int(r["hash_54706054"])
        if not 0<=i<2048 or i in seen:raise ValueError("invalid or duplicate UniqueID")
        seen.add(i)
        d=min(int(r["hash_4C24F1CF"]),65535);selected=int(r["hash_BED25A86"])!=0
        rows.append({"id":i,"key":r["hash_45F320F2"],"marked":selected,"default":d,"before":b[i],"after":a[i],"changed":a[i]!=b[i],"matches_default":a[i]==d})
    marked=[r for r in rows if r["marked"]]
    return {"defined":len(rows),"marked":len(marked),"marked_after_default":sum(r["matches_default"] for r in marked),"marked_nondefault_after":[r for r in marked if not r["matches_default"]],"unmarked_changed":[r for r in rows if not r["marked"] and r["changed"]],"unmapped_changed":[i for i in range(2048) if i not in seen and a[i]!=b[i]],"observations":rows,"capture_provenance_required":True,"runtime_verified":False}
def selftest():
    a=bytearray(4096);b=bytearray(4096);struct.pack_into("<H",a,4,42);struct.pack_into("<H",b,4,65535);struct.pack_into("<H",b,6,7)
    rows=[{"hash_54706054":"2","hash_45F320F2":"sentinel","hash_4C24F1CF":"65535","hash_BED25A86":"1"},{"hash_54706054":"3","hash_45F320F2":"other","hash_4C24F1CF":"0","hash_BED25A86":"0"}]
    r=compare(a,b,rows);assert r["marked_after_default"]==1 and len(r["unmarked_changed"])==1 and not r["runtime_verified"]
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--before",type=Path);p.add_argument("--after",type=Path);p.add_argument("--defs",type=Path);p.add_argument("--out",type=Path);p.add_argument("--selftest",action="store_true");a=p.parse_args()
    if a.selftest:selftest();print("synthetic snapshot selftest passed")
    else:
        if not all((a.before,a.after,a.defs,a.out)):p.error("before/after/defs/out required")
        with a.defs.open(encoding="utf-8-sig",newline="") as f:r=compare(a.before.read_bytes(),a.after.read_bytes(),list(csv.DictReader(f)))
        a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
