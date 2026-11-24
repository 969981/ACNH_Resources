#!/usr/bin/env python3
"""Read-only R119 artifact and decrypted-save audit. Never writes or repairs saves."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zipfile

BASE = Path("derived/3.0.3/npc_event_flags/r119_save_dispatch")
MASK = 0xffffffff

def word(i):
    return int.from_bytes(bytes.fromhex(i["bytes"]), "little")

def target(i):
    w = word(i)
    assert w & 0xfc000000 == 0x94000000
    n = w & 0x3ffffff
    if n & 0x2000000:
        n -= 0x4000000
    return int(i["va"], 16) + n * 4

def hash32(data, seed=0):
    def rot(x,n):
        return ((x << n) | (x >> (32-n))) & MASK
    def mix(x):
        return rot(x * 0xcc9e2d51 & MASK, 15) * 0x1b873593 & MASK
    h = seed
    size = len(data) & ~3
    for (k,) in struct.iter_unpack("<I", data[:size]):
        h = (rot(h ^ mix(k),13)*5 + 0xe6546b64) & MASK
    if size != len(data):
        h ^= mix(int.from_bytes(data[size:],"little"))
    h ^= len(data)
    h = ((h ^ (h >> 16)) * 0x85ebca6b) & MASK
    h = ((h ^ (h >> 13)) * 0xc2b2ae35) & MASK
    return h ^ (h >> 16)

def audit(root, archive):
    e=json.loads((root/BASE/"evidence.json").read_text())
    assert hashlib.sha256(archive.read_bytes()).hexdigest() == e["r118_artifact"]["sha256"]
    for a in e["source_anchors"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["sha"], a["path"]
    with zipfile.ZipFile(archive) as z:
        calls=json.loads(z.read("writer_direct_refs.json"))
        windows=json.loads(z.read("checksum_validator_windows.json"))
        files=json.loads(z.read("savefile_index.json"))
    refs=[]
    for t,sites in e["direct_calls"].items():
        assert [r["site"] for r in calls[t]] == sites
        for r in calls[t]:
            ins=next(i for i in r["window"] if i["va"]==r["site"])
            assert target(ins)==int(t,16)
            refs.append({"site":r["site"],"target":t,"bytes":ins["bytes"]})
    assert len(refs)==27
    m={i["va"]:i for i in windows["02840270"]}
    lo,hi=word(m["028402A0"]),word(m["028402A4"])
    assert lo & 0x7f80001f == 0x52800001 and (lo>>21)&3==0
    assert hi & 0x7f80001f == 0x72800001 and (hi>>21)&3==1
    length=((lo>>5)&0xffff)|(((hi>>5)&0xffff)<<16)
    assert length==e["main_second_length"]==0x3d089c
    assert target(m["028402AC"])==0x006f6900
    main=next(f for f in files if f["name"]=="main")
    main["checksum_regions"][1].update(length=length,status="R119 original ARM64 MOV/MOVK confirmed")
    main["generator_only_inner_regions"]=e["main_inner_regions"]
    main["checksum_regions"][1]["length_candidate"]=None
    assert 0x1e34b4+length==0x5b3d50
    assert 0x5b3d50+8*0x74a40==0x958f50
    assert 0x958f54+0x57f3c==main["write_size"]
    for r in main["generator_only_inner_regions"]:
        assert r["hash_offset"]+4==r["start"]
        assert r["start"]+r["length"]<=0x958f50
    assert len(main["generator_only_inner_regions"])==16
    for f in files:
        for r in f["checksum_regions"]:
            assert r["hash_offset"]+4==r["start"] and r["start"]+r["length"]<=f["write_size"]
    assert [hash32(x) for x in [b"",b"foo",b"hello"]]==[0,0xf6a5c420,0x248bfa47]
    return files,refs,e

def sample_report(files, path, kind):
    f=next(x for x in files if x["name"]==kind)
    if f["write_size"] is None:
        raise ValueError("No verified file size or checksum mapping")
    data=path.read_bytes()
    if len(data)!=f["write_size"]:
        raise ValueError("Length mismatch: use a decrypted complete data buffer, not Header.dat")
    rows=[]
    for role,key in [("validator","checksum_regions"),("conditional","conditional_inner_regions"),("generator_only","generator_only_inner_regions")]:
        for r in f.get(key,[]):
            p,n,h=r["start"],r["length"],r["hash_offset"]
            if h+4!=p or p+n>len(data):
                raise ValueError("Region out of bounds")
            stored=int.from_bytes(data[h:h+4],"little")
            actual=hash32(memoryview(data)[p:p+n],r.get("seed",0))
            cleared=role=="conditional" and not any(memoryview(data)[h:p+n])
            rows.append({"role":role,"hash_offset":h,"length":n,"stored":f"{stored:08X}","computed":f"{actual:08X}","result":"zeroed_conditional" if cleared else "match" if stored==actual else "mismatch"})
    return {"kind":kind,"bytes":len(data),"sha256":hashlib.sha256(data).hexdigest(),"regions":rows,"validator_matches":all(r["result"]=="match" for r in rows if r["role"]=="validator"),"modified":False}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--prior",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--sample",type=Path)
    p.add_argument("--kind")
    a=p.parse_args()
    if bool(a.sample)!=bool(a.kind):
        p.error("--sample and --kind must be specified together")
    files,refs,e=audit(a.root,a.prior)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):
        (a.out/n).write_text(json.dumps(v,ensure_ascii=False,indent=2)+"\n")
    write("savefile_index.json",files)
    write("direct_calls_verified.json",refs)
    write("dispatch_calls.json",e["dispatch_calls"])
    report={"writer_direct_bl":14,"dispatcher_bl":12,"upper_callback_bl":1,"main_second_length":e["main_second_length"],"ordinary_outer_regions":10,"main_generator_only_regions":16,"profile_conditional_regions":3,"runtime_verified":False,"cloud_disk_verified":False,"sample_supplied":bool(a.sample)}
    if a.sample:
        write("sample_report.json",sample_report(files,a.sample,a.kind))
    write("report.json",report)
    print(json.dumps(report,indent=2))

if __name__=="__main__":
    main()
