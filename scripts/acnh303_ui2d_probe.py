#!/usr/bin/env python3
"""Read-only probe of real ACNH 3.0.3 FLYT/FLAN structure and archive members."""
import collections,csv,hashlib,json,pathlib,struct,sys
sys.path.insert(0,"scripts")
from acnh303_media_l3 import find_leaf,NCA
from acnh_formats import detect
base=pathlib.Path(NCA)/"1"
remaining=pathlib.Path("derived/3.0.3/media_iteration4_cumulative/remaining.csv")
with remaining.open(encoding="utf-8",newline="") as f:
    selected={r["source_path"]:r["source_sha256"] for r in csv.DictReader(f)
              if r["state"]=="no_target_leaf" and r["source_path"].startswith("Layout/")}
assert len(selected)==41,len(selected)
records=[]
for name,digest in sorted(selected.items()):
    data=(base/name).read_bytes()
    assert hashlib.sha256(data).hexdigest()==digest
    leaves=[]
    for leaf in find_leaf(data,name):
        b=leaf["data"];kind=leaf["format"]
        info={"member":leaf["source_member"],"kind":kind,"size":len(b),"sha256":hashlib.sha256(b).hexdigest()}
        if kind in ("bflyt","bflan") and len(b)>=20:
            bom=b[4:6]
            endian="<" if bom==b"\xff\xfe" else ">" if bom==b"\xfe\xff" else "!"
            info.update({"header20":b[:20].hex(),"bom":bom.hex(),"endian":endian})
            if endian!="!":
                fmt=endian+"HHIIHH"
                hsize,version,size,sections=(struct.unpack_from(endian+"HIIH",b,6))
                info.update({"header_size":hsize,"version":hex(version),"declared_size":size,"declared_sections":sections})
                pos=hsize
                sec=[]
                for _ in range(min(sections,10000)):
                    if pos+8>len(b):break
                    n=b[pos:pos+4].decode("ascii","replace")
                    z=struct.unpack_from(endian+"I",b,pos+4)[0]
                    if z<8 or pos+z>len(b):
                        sec.append({"bad_section":n,"size":z,"position":pos});break
                    sec.append({"name":n,"size":z})
                    pos+=z
                info["sections"]=sec
                info["section_end"]=pos
        leaves.append(info)
    records.append({"source":name,"bytes":len(data),"leaves":leaves})
    print("SOURCE",name," ".join(str((r["kind"],r.get("declared_sections"),len(r.get("sections",[])))) for r in leaves),flush=True)
counts=collections.Counter(l["kind"] for r in records for l in r["leaves"])
sections=collections.Counter(s.get("name",str(s.get("bad_section"))) for r in records for l in r["leaves"] for s in l.get("sections",[]))
summary={"sources":len(records),"kinds":dict(counts),"sections":dict(sections),"records":records}
out=pathlib.Path("derived/3.0.3/ui2d_probe");out.mkdir(parents=True,exist_ok=True)
(out/"real_41.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
print("SUMMARY",json.dumps({"sources":len(records),"kinds":dict(counts),"sections":dict(sections)}))
