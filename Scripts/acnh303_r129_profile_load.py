#!/usr/bin/env python3
"""R129 original instruction windows and load-chain anchors; offline only."""
import argparse,hashlib,json
from pathlib import Path
import acnh303_r100_nso_decode as dec
from acnh303_r120_native_save import load_archive,direct_scan,S,hx
from acnh303_r124_interface_registry import window
BASE=Path("derived/3.0.3/npc_event_flags/r129_profile_load")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--r128",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    prior,=load_archive(a.r128,"a039bf0d6c14b50e460e237f0aafe1cf6036997af6f53ea55320d84421c9d62d",["report.json"])
    assert prior["native_profile_mode2_cases"]==10
    e=json.loads((a.root/BASE/"evidence.json").read_text())
    for r in e["sources"]:
        b=(a.root/r["path"]).read_bytes();assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==r["sha"],r["path"]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    refs=direct_scan(mapped,{0x28cb2a0,0x28c871c,0x28c8a30,0x28b5ff0,0x28b63c0,0x27b6c14,0x28c8ba0,0x26cf750})
    write("direct_refs.json",refs)
    tx={r["site"]:window(raw,int(r["site"],16)-0x30,int(r["site"],16)+4) for r in refs["028CB2A0"]}
    write("file_transaction_call_windows.json",tx)
    # Full dispatcher bounded interval for recovering the inlined hash path.
    profile=window(raw,0x28c6c80,0x28c8068)
    write("profile_dispatch_window.json",profile)
    wins={hx(lo):window(raw,lo,hi) for lo,hi in [(0x28c871c,0x28c8a30),(0x28c8a30,0x28c8ba0),(0x28b5ff0,0x28b63c0),(0x28b63c0,0x28b6490),(0x28c8ba0,0x28c8cc0)]}
    write("load_windows.json",wins)
    write("report.json",{"source_anchors":len(e["sources"]),"transaction_call_windows":len(tx),"profile_window_instructions":len(profile),"load_windows":len(wins),"load_window_instructions":sum(map(len,wins.values())),"profile_mode1_executed":False,"cloud_disk_mapping_verified":False,"real_save_samples":0})
    print((a.out/"report.json").read_text())
if __name__=="__main__":main()
