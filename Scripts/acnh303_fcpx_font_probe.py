#!/usr/bin/env python3
"""Examine authentic FCPX font blobs in 41 ACNH Layout archives, without guessing font semantics."""
from __future__ import annotations
import csv,collections,hashlib,json,pathlib,struct,sys
from acnh303_media_l3 import NCA,find_leaf

def digest(b):return hashlib.sha256(b).hexdigest()
def ascii_runs(b):
    result=[];start=None
    for i,v in enumerate(b+b"\x00"):
        if 32<=v<127:
            if start is None:start=i
        elif start is not None:
            if i-start>=4:result.append({"offset":start,"string":b[start:i].decode("ascii","replace")})
            start=None
    return result[:100]
def inspect(blob):
    d=blob
    h={"magic":d[:4].decode("ascii","replace"),"BOM":d[4:6].hex(),
       "header_size":int.from_bytes(d[6:8],"little"),
       "version_raw_hex":d[8:12].hex(),
       "size_field_at_0c":int.from_bytes(d[12:16],"little"),
       "offset_words_first_128":[{"offset":i,"u32":int.from_bytes(d[i:i+4],"little"),
                                   "f32":(struct.unpack_from("<f",d,i)[0] if i+4<=len(d) and 0.00001<abs(struct.unpack_from("<f",d,i)[0])<100000 else None)}
                                  for i in range(0,min(len(d),128),4)],
       "hex_first_256":d[:256].hex(),
       "hex_tail_96":d[-96:].hex(),
       "ascii_strings":ascii_runs(d),
       "magic_scan":{x:([i for i in range(20,len(d)-3) if d[i:i+4]==x.encode()][:50])
                     for x in ("FINF","CWDH","CMAP","TGLP","KRNG","GLGR","FCPX","FCPI")}}
    h["header_size_valid"]=h["header_size"]==20
    h["size_matches"]=h["size_field_at_0c"]==len(d)
    h["BOM_valid"]=h["BOM"]=="fffe"
    return h
def main():
    root=pathlib.Path(NCA)/"1"
    with pathlib.Path("derived/3.0.3/media_iteration4_cumulative/remaining.csv").open(newline="",encoding="utf-8") as f:
        sources={r["source_path"]:r["source_sha256"] for r in csv.DictReader(f)
                 if r["state"]=="no_target_leaf" and r["source_path"].startswith("Layout/")}
    assert len(sources)==41
    out=[];seen={}
    for name,hash_expect in sorted(sources.items()):
        original=(root/name).read_bytes()
        assert digest(original)==hash_expect
        for leaf in find_leaf(original,name):
            if not leaf["source_member"].lower().endswith(".bfcpx"):continue
            d=leaf["data"];tag=leaf["source_member"]
            assert d[:4]==b"FCPX",tag
            h=digest(d)
            record={"source":name,"source_sha256":hash_expect,
                    "member":tag,"member_sha256":h,"bytes":len(d)}
            if h not in seen:seen[h]={"sha256":h,"bytes":len(d),**inspect(d),"representative":tag}
            out.append(record)
    if len(out)!=12:raise AssertionError(f"unexpected count {len(out)}")
    summary={"schema":"acnh303-native-FCPX-font-probe-v1","originals":41,
             "font_leaves":len(out),"unique_font_blobs":len(seen),
             "instances":out,"unique_structures":list(seen.values()),
             "scope":"native font binary structural offsets only; no decoded glyph geometry/unicode maps yet"}
    p=pathlib.Path("derived/3.0.3/fcpx_font_probe")
    p.mkdir(parents=True,exist_ok=True)
    (p/"evidence.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n")
    print("FCPX_SUMMARY",json.dumps({"font_leaves":len(out),"unique":len(seen),
       "samples":[{"bytes":v["bytes"],"sha256":v["sha256"],
                   "size_ok":v["size_matches"],"BOM":v["BOM"],"strings":v["ascii_strings"]}
                  for v in seen.values()]},ensure_ascii=False),flush=True)
if __name__=="__main__":main()
