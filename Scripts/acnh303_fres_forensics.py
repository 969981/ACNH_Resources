#!/usr/bin/env python3
"""Read-only ACNH 3.0.3 FRES structure study against native wmdlt preconditions.

Preconditions taken from quatric/nintoolbox project/src/lib-bfres.c
ParseBFRESSwitch. Magic matches are evidence, not a full structural parse.
"""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct
from acnh303_media_l3 import find_leaf, NCA

MAGICS=(b"FMDL",b"FSHP",b"FVTX",b"FMAT",b"FSKL",b"FTEX",b"BNTX",b"FSKA",b"FRES")

def u16(d,p):return struct.unpack_from("<H",d,p)[0] if 0<=p<=len(d)-2 else -1
def u32(d,p):return struct.unpack_from("<I",d,p)[0] if 0<=p<=len(d)-4 else -1
def i64(d,p):return struct.unpack_from("<q",d,p)[0] if 0<=p<=len(d)-8 else -1

def magic_offsets(d,magic):
    offsets=[];at=0
    while len(offsets)<10000:
        p=d.find(magic,at)
        if p<0:break
        offsets.append(p);at=p+4
    return offsets

def native_preflight(d):
    if len(d)<0x100 or d[:4]!=b"FRES":return {"stop":"FRES_header_invalid"}
    if u16(d,0x0c)!=0xFEFF:return {"stop":"Switch_BOM_invalid","bom":u16(d,0x0c)}
    version=u32(d,8);major=(version>>16)&0xFFFF
    m=i64(d,0x28)
    result={"version_hex":hex(version),"major":major,"first_fmdl_pointer":m,
            "first_fmdl_magic":d[m:m+4].decode("ascii","replace") if 0<=m<len(d)-4 else None}
    if m<=0 or m+0x60>len(d) or d[m:m+4]!=b"FMDL":
        result["stop"]="no_valid_FMDL_at_header_0x28";return result
    candidates=[]
    for p in ([0xb0,0x90] if major>=9 else [0x90,0xb0]):
        bi=i64(d,p)
        pool=i64(d,bi+8) if 0<bi<len(d)-16 else -1
        n=u32(d,bi+4) if 0<bi<len(d)-16 else -1
        candidates.append({"header_field":hex(p),"bufinfo":bi,"pool_ptr":pool,
                           "pool_size":n,"passes":pool>0 and n>0 and pool+n<=len(d)})
    result["vertex_pool_candidates"]=candidates
    if not any(x["passes"] for x in candidates):
        result["stop"]="no_valid_vertex_pool";return result
    field=m+4+(4 if major>=9 else 12)+32
    shape=i64(d,field)
    result.update({"first_shape_pointer_field":field,"first_shape_pointer":shape,
                   "first_shape_magic":d[shape:shape+4].decode("ascii","replace")
                                        if 0<=shape<len(d)-4 else None})
    result["stop"]="passes_first_shape" if shape>0 and shape+0x60<=len(d) and d[shape:shape+4]==b"FSHP" else "no_valid_FSHP_pointer"
    return result

def inspect(romfs,name):
    raw=(romfs/name).read_bytes()
    result={"source":name,"source_sha256":hashlib.sha256(raw).hexdigest(),
            "source_bytes":len(raw),"leaves":[]}
    for leaf in find_leaf(raw,name):
        data=leaf["data"]
        entry={"member":leaf["source_member"],"format":leaf["format"],
               "byte_size":len(data),"sha256":hashlib.sha256(data).hexdigest()}
        if leaf["format"]=="bfres":
            entry["fres"]={
                "header_first_0xc0":data[:0xc0].hex(),
                "parser_preflight":native_preflight(data),
                "magic_offsets":{magic.decode():magic_offsets(data,magic)[:30] for magic in MAGICS},
                "magic_counts":{magic.decode():len(magic_offsets(data,magic)) for magic in MAGICS},
            }
        result["leaves"].append(entry)
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--romfs",type=Path,default=Path(NCA)/"1")
    p.add_argument("--diagnostics",type=Path,required=True)
    p.add_argument("--controls",action="append",required=True)
    p.add_argument("--output",type=Path,required=True)
    a=p.parse_args()
    history=json.loads(a.diagnostics.read_text("utf-8"))["errors"]
    assert len(history)==26
    rows=[]
    for old in history:
        row=inspect(a.romfs,old["source"])
        assert row["source_sha256"]==old["source_sha256"]
        row["control"]=False;rows.append(row)
    for name in a.controls:
        row=inspect(a.romfs,name);row["control"]=True;rows.append(row)
    stats={"failure":Counter(),"control":Counter()}
    for row in rows:
        group="control" if row["control"] else "failure"
        matches=[x for x in row["leaves"] if x["format"]=="bfres"]
        stats[group]["sources"]+=1
        stats[group]["bfres_leaves"]+=len(matches)
        for match in matches:
            fs=match["fres"]
            stats[group][fs["parser_preflight"]["stop"]]+=1
            for k,v in fs["magic_counts"].items():
                if v:stats[group]["contains_"+k]+=1
        print("FRES_CASE",json.dumps({"source":row["source"],"control":row["control"],
             "preflight":[x["fres"]["parser_preflight"] for x in matches],
             "sections":[x["fres"]["magic_counts"] for x in matches]},ensure_ascii=False),flush=True)
    result={"schema":"acnh303-bottomstex-forensics-v1",
            "native_parser":"quatric/nintoolbox ParseBFRESSwitch",
            "failures":dict(stats["failure"]),"controls":dict(stats["control"]),
            "limitations":"Section magic counts do not prove a full BFRES semantic parse; no fabricated geometry.",
            "source_records":rows}
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("SUMMARY",json.dumps({"failures":result["failures"],"controls":result["controls"]}),flush=True)
    return 0

if __name__=="__main__":raise SystemExit(main())
