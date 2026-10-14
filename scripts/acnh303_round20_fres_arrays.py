#!/usr/bin/env python3
"""Parse real ACNH Switch BFRES animation arrays and native ResDic, read-only.

FRES (nn::g3d2 v9+) header is NOT old Wii U relative-32 layout.
Only accept header-declared array counts/offsets if every record has the
expected magic at exact stride. ResDic nodes are validated against keys and
bounds, while animation curve data is deliberately not invented.
"""
from __future__ import annotations
import argparse, hashlib, json, struct, gzip
from collections import Counter
from pathlib import Path
from acnh303_media_l3 import find_leaf,NCA

SOURCE="Model/CharactorAnimation20000.Nin_NX_NVN.zs"
LEAF_SHA="8dd16ba20264a5f8cd3a60901e0cc6ce8173fcf2503b17fda0a1688277605972"
TABLES=[
    {"kind":"FSKA","array_ptr_at":0x58,"dict_ptr_at":0x60,"count_at":0xe2,"stride":0x50},
    {"kind":"FMAA","array_ptr_at":0x68,"dict_ptr_at":0x70,"count_at":0xe4,"stride":0x70},
]
def u16(b,o):return struct.unpack_from("<H",b,o)[0]
def u32(b,o):return struct.unpack_from("<I",b,o)[0]
def u64(b,o):return struct.unpack_from("<Q",b,o)[0]
def sha(b):return hashlib.sha256(b).hexdigest()

def bounded(b,off,size=1):
    return isinstance(off,int) and off>=0 and size>=0 and off+size<=len(b)

def string_at(b,ptr):
    """Switch NWString at a *length-prefixed* 16-bit byte count, not raw ASCII.

    R20 original bytes at 0x6215fe: 18 00 'Act_Arrange...'.
    Never mistake the prefix bytes for a null-terminated C string.
    """
    if not bounded(b,ptr,3) or ptr==0:return None
    n=u16(b,ptr)
    if not 1 <= n <= 255 or not bounded(b,ptr+2,n+1):return None
    if b[ptr+2+n]!=0:return None
    try:
        name=b[ptr+2:ptr+2+n].decode("utf-8","strict")
    except UnicodeDecodeError:
        return None
    if not name or any(not ch.isprintable() for ch in name):return None
    return name

def decode_dictionary(b,ptr,expected):
    out={"file_offset":ptr,"expected_count":expected,"status":"unverified"}
    if not ptr:return {**out,"status":"absent"}
    if not bounded(b,ptr,0x18):return {**out,"status":"outside_file"}
    magic=b[ptr:ptr+4]
    n=u32(b,ptr+4)
    out.update(magic=magic.decode("ascii","replace"),count=n)
    if magic not in (b"_DIC",b"\0\0\0\0") or n>65535 or not bounded(b,ptr,0x18+n*0x10):
        return {**out,"status":"bad_dictionary_header"}
    nodes=[]
    for i in range(0,n+1):
        at=ptr+8+i*16
        nameptr=u64(b,at+8)
        if i==0:
            continue  # root is sentinel, may have zero name
        name=string_at(b,nameptr)
        nodes.append({"index":i,"node_offset":at,
                      "name_pointer":nameptr,"name":name,
                      "name_pointer_first_24_hex":b[nameptr:nameptr+24].hex() if bounded(b,nameptr,24) else None,
                      "name_pointer_preceding_2_hex":b[nameptr-2:nameptr].hex() if bounded(b,nameptr-2,2) else None,
                      "ref_bit":u32(b,at),"left":u16(b,at+4),"right":u16(b,at+6)})
    out.update(status=("count_and_name_keys_confirmed" if n==expected and all(
                   x["name"] is not None for x in nodes) and
                   len({x["name"] for x in nodes})==n else "nodes_unverified"),
               keys_unique=sum(x["name"] is not None for x in nodes)==n,
               names=[x["name"] for x in nodes[:30]],first_nodes=nodes[:12])
    return out

def parse_leaf(b):
    if len(b)<0xf0 or b[:4]!=b"FRES":raise ValueError("actual Switch FRES header missing")
    declared=u32(b,0x1c)
    if declared!=len(b):raise ValueError(f"FRES declared bytes {declared} != extracted {len(b)}")
    if b[0xc:0xe]!=b"\xff\xfe":raise ValueError("non little endian Switch FRES")
    results=[]
    for t in TABLES:
        name=t["kind"];count=u16(b,t["count_at"]);base=u64(b,t["array_ptr_at"])
        dptr=u64(b,t["dict_ptr_at"]);stride=t["stride"]
        if count<=0 or count>10000:
            raise ValueError(f"{name} header declared zero/implausible count {count}")
        if not bounded(b,base,count*stride):
            raise ValueError(f"{name} array out of bounds base={base:x} count={count}")
        magic_at=[base+i*stride for i in range(count)]
        wrong=[{"index":i,"offset":o,"actual":b[o:o+4].hex()} for i,o in enumerate(magic_at) if b[o:o+4]!=name.encode()]
        if wrong:
            raise ValueError(f"{name} record array magic mismatch: {wrong[:4]} count={len(wrong)}")
        items=[]
        field_ptr_hits=Counter()
        name_candidates=0
        for i,at in enumerate(magic_at):
            chunk=b[at:at+stride]
            # A native container field may be an absolute NWPtr or scalar.
            ptrs=[]
            for off in range(8,stride-7,8):
                p=u64(b,at+off)
                if p and p<len(b):
                    ptrs.append({"field_offset":off,"target":p,"align8":p%8==0,
                                 "ascii_name":string_at(b,p)})
                    field_ptr_hits[hex(off)]+=1
            items.append({"index":i,"offset":at,"sha256":sha(chunk),
                          "raw_first_32":chunk[:32].hex(),
                          "bounded_pointer_candidates":ptrs[:12]})
            if any(p["ascii_name"] for p in ptrs):name_candidates+=1
        dic=decode_dictionary(b,dptr,count)
        results.append({"kind":name,"count":count,"array_start":base,
                        "array_end_exclusive":base+count*stride,"stride":stride,
                        "header_array_ptr_at":t["array_ptr_at"],
                        "dictionary":dic,"all_magic_validated":True,
                        "source_sha256":sha(b),
                        "record_pointer_field_histogram":dict(field_ptr_hits),
                        "entries_with_possible_ascii_names":name_candidates,
                        "records":items,
                        "curve_tracks_status":"unparsed_no_keyframe_semantics"})
    a,bres=results
    if a["array_end_exclusive"]>bres["array_start"]:
        raise ValueError("FSKA records overlap declared FMAA start")
    return {"schema":"acnh303-r20-switch-resfile-animation-array-dict-v1",
            "fres_sha256":sha(b),"fres_bytes":len(b),"fres_version_bytes":b[8:12].hex(),
            "file_declared_size":declared,"tables":results,
            "status":"validated_arrays_not_full_animation_track_decoding",
            "limitations":"Validated FRES count+stride+magic and in-bounds ptr/dictionary candidates. Pointer fields without source references, NWPtr relocation and curve schema validation are NOT animation channels/keys. No skeleton binding or glTF animation claimed."}

def analyze(root):
    file=root/NCA/"1"/SOURCE
    raw=file.read_bytes()
    prior=root/"derived/3.0.3/r19_animation_probe/charactor_animation_20000.json"
    old=json.loads(prior.read_text("utf-8"))
    if sha(raw)!=old["source_sha256"]:raise ValueError("original hash diverged from R19")
    leaves=list(find_leaf(raw,SOURCE))
    hits=[l for l in leaves if l["format"]=="bfres"]
    if len(hits)!=1 or sha(hits[0]["data"])!=LEAF_SHA:
        raise ValueError("not exactly the independently audited original BFRES")
    doc=parse_leaf(hits[0]["data"])
    doc.update(source_path=SOURCE,source_sha256=sha(raw),prior_probe_sha256=old["leaves"][0]["sha256"])
    return doc

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r20_animation_structure/fres_animation_arrays.json"))
    a=p.parse_args()
    result=analyze(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf-8")
    print("R20 BFRES VERIFIED",result["fres_sha256"],
          [(x["kind"],x["count"],hex(x["array_start"]),x["dictionary"]["status"]) for x in result["tables"]])

if __name__=="__main__":main()
