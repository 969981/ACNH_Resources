#!/usr/bin/env python3
"""R128: filename initializer and Profile conditional dispatch evidence; no save writes."""
import argparse,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r128_savefile_index")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r127",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r127,"cd6f24fed4a3a3540c61ef197dc0cb6ef0e06188fcf346a15a917110725bb23b",["report.json"])
    assert prior["total_cases"]==183
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    assert raw(0x40a9af5-S,5)==b"main\0"
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    # Find exact NUL-terminated strings in original rodata, retaining all matches.
    ro,blob=mapped[1]
    strings=[]
    for row in e["files"]:
        for key in ("name","type_name"):
            needle=row[key].encode()+b"\0";pos=-1;matches=[]
            while True:
                pos=blob.find(needle,pos+1)
                if pos<0:break
                matches.append(hx(ro+pos+S))
            assert matches,(row["index"],key)
            strings.append({"index":row["index"],"field":key,"text":row[key],"addresses":matches})
    write("filename_literals.json",strings)
    # Initializer suffix candidate: stop at first RET after the final type-name registration.
    # Entire bounded window retained; no guessed function boundary used as proof.
    init=window(raw,0x26ed290,0x26ee000)
    write("initializer_window.json",init)
    refs=direct_scan(mapped,{0x26ed290,0x2701270,0x27014c0,0x2701810,0x28cb2a0,0x2842d10,0x28420c0})
    write("direct_refs.json",refs)
    callrows=[r for r in refs["02842D10"] if 0x28c29b0<=int(r["site"],16)<0x28cb2a0]
    assert len(callrows)==3,callrows
    pcs=[int(r["site"],16) for r in callrows]
    lo=min(pcs)-0x60;hi=max(pcs)+0x100
    profile=window(raw,lo,hi)
    write("profile_mode2_window.json",profile)
    write("profile_calls.json",callrows)
    # Retain full source-based index and do not promote name mapping to disk I/O proof.
    write("savefile_index.json",e["files"])
    report={"literal_checks":len(strings),"initializer_window_instructions":len(init),"profile_inner_direct_calls":len(callrows),"profile_window_instructions":len(profile),"filename_source_mapping":10,"cloud_disk_mapping_verified":False,"profile_conditional_dispatch_verified":False,"real_save_samples":0}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":main()
