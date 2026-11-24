#!/usr/bin/env python3
"""R96 read-only 3.0.3 decrypted main.dat flags; header + checksum gate."""
import argparse
import hashlib
import json
import struct
from pathlib import Path
BASE=Path("derived/3.0.3/npc_event_flags")
M=0xffffffff
def rot(v,n): return ((v<<n)|(v>>(32-n)))&M
def checksum(data):
    if len(data)%4: raise ValueError("Hash region alignment")
    h=0
    for (v,) in struct.iter_unpack("<I",data):
        h^=rot(v*0xcc9e2d51&M,15)*0x1b873593&M
        h=(rot(h,13)*5+0xe6546b64)&M
    h^=len(data)
    h=(h^(h>>16))*0x85ebca6b&M
    h=(h^(h>>13))*0xc2b2ae35&M
    return (h^(h>>16))&M
def load(p): return json.loads(p.read_text(encoding="utf-8"))
def validate(data,header,evidence):
    l=evidence["layout"]
    if len(data)!=l["file_size"] or len(header)<0x40:
        raise ValueError("Wrong data size/header")
    major,minor,u1,rev,u2,save_rev=struct.unpack_from("<IIHHHH",header)
    if (major,minor,u1,rev,u2,save_rev)!=(l["header_major"],l["header_minor"],2,0,2,l["revision"]):
        raise ValueError("Only exact 3.0.3 SaveRevision 34 accepted")
    for off,size in evidence["hash_regions"]:
        if off+4+size>len(data): raise ValueError("Invalid hash range")
        actual=checksum(memoryview(data)[off+4:off+4+size])
        expected=struct.unpack_from("<I",data,off)[0]
        if actual!=expected: raise ValueError(f"Checksum mismatch at {off:#x}; provide decrypted, intact data")
def extract(data,definitions,evidence):
    l=evidence["layout"]; result=[]
    tables={scope:[r for r in definitions if r["scope"]==scope] for scope in ("npc_save","npc_memory")}
    if tuple(map(len,tables.values()))!=(65,167): raise ValueError("R93 dictionary drift")
    for i in range(l["resident_count"]):
        b=l["resident_base"]+i*l["resident_stride"]
        def flags(scope,base,width):
            return [{"key":r["key"],"unique_id":r["unique_id"],"file_offset":base+r["unique_id"]*width,
                     "actual_value":int.from_bytes(data[base+r["unique_id"]*width:base+(r["unique_id"]+1)*width],"little")}
                    for r in tables[scope]]
        memory=[]
        for j in range(l["full_memory_count"]):
            mb=b+l["full_memory_base"]+j*l["full_memory_stride"]
            # Do not export private identities, only whether both IDs are nonzero.
            occupied=bool(struct.unpack_from("<I",data,mb)[0] and struct.unpack_from("<I",data,mb+0x1c)[0])
            memory.append({"memory_index":j,"identity_nonzero":occupied,
                           "flags":flags("npc_memory",mb+l["memory_flags_relative"],1)})
        result.append({"resident_index":i,"species_raw":data[b],"variant_raw":data[b+1],
                       "move_type_raw":data[b+0x1267a],"moving_out_bit":bool(data[b+0x1267a]&2),
                       "occupancy_validated":False,"npc_save":flags("npc_save",b+l["save_flags_base"],2),
                       "npc_memory":memory})
    return result
def selftest(evidence,rows):
    l=evidence["layout"]; d=bytearray(l["file_size"]); hdr=bytearray(0x40)
    struct.pack_into("<IIHHHH",hdr,0,l["header_major"],l["header_minor"],2,0,2,34)
    # Distinct sentinels verify first and last records/players, never claimed as real save.
    for i,j,v in ((0,0,61),(9,7,199)):
        b=l["resident_base"]+i*l["resident_stride"]
        d[b+l["full_memory_base"]+j*l["full_memory_stride"]+0x38+10]=v
        struct.pack_into("<H",d,b+l["save_flags_base"],100+i)
    for off,size in evidence["hash_regions"]:
        struct.pack_into("<I",d,off,checksum(memoryview(d)[off+4:off+4+size]))
    validate(d,hdr,evidence); result=extract(d,rows,evidence)
    for i,j,v in ((0,0,61),(9,7,199)):
        friendship=next(x for x in result[i]["npc_memory"][j]["flags"] if x["key"]=="Friendship")
        assert friendship["actual_value"]==v
        assert result[i]["npc_save"][0]["actual_value"]==100+i
    d[0x166]^=1
    try: validate(d,hdr,evidence)
    except ValueError: pass
    else: raise AssertionError("Corrupt checksum accepted")
    return {"synthetic_fixture_passed":True,"resident_count":10,"memory_blocks":80,
            "npc_save_definition_slots":650,"npc_memory_definition_slots":13360,"real_save_verified":False}
def main():
    p=argparse.ArgumentParser(description=__doc__); p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--decrypted-main",type=Path); p.add_argument("--header",type=Path)
    p.add_argument("--out",type=Path);p.add_argument("--selftest",action="store_true"); a=p.parse_args()
    base=a.root/BASE; e=load(base/"r96/evidence.json"); rows=load(base/"integrated/eventflag_definitions_371.json")
    if a.selftest:
        print(json.dumps(selftest(e,rows),indent=2));return
    if not(a.decrypted_main and a.header and a.out): p.error("Require --decrypted-main, --header, --out")
    d=a.decrypted_main.read_bytes();h=a.header.read_bytes();validate(d,h,e)
    if a.out.resolve() in (a.decrypted_main.resolve(),a.header.resolve()): raise ValueError("Output cannot overwrite input")
    output={"schema":"acnh303-r96-readonly-save-flags-v1","source_sha256":hashlib.sha256(d).hexdigest(),
            "checksum_regions_verified":len(e["hash_regions"]),"save_revision":34,
            "occupancy_note":"raw resident and player-memory slots; identity/active resident status not fully verified",
            "residents":extract(d,rows,e)}
    with a.out.open("x",encoding="utf-8") as f: json.dump(output,f,ensure_ascii=False,indent=2)
if __name__=="__main__": main()
