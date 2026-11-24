#!/usr/bin/env python3
"""Verify R104 original NSO registrations and produce bounded next-hop evidence."""
import argparse,csv,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import adrp_target,adr_target,add_imm
BASE=Path("derived/3.0.3/npc_event_flags/r104_lifecycle_registration")
SLIDE=0x100000
def gitblob(p):
    b=p.read_bytes();return hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()
def run(root,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    for a in e["anchors"]:
        p=root/a["path"];assert gitblob(p)==a["blob"]
        lines=p.read_text(encoding="utf-8").splitlines()
        assert all(lines[x["line"]-1].strip()==x["text"] for x in a["lines"])
    life=e["moving"]["life_support"];p=root/life["table"]
    assert gitblob(p)==life["blob"]
    with p.open(encoding="utf-8-sig",newline="") as f:rows=list(csv.DictReader(f))
    assert len(rows)==99
    assert [(int(r["hash_54706054"]),r["hash_45F320F2"]) for r in rows if r["hash_BED25A86"]=="1"]==[(r["id"],r["key"]) for r in life["marked"]]
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def gh(x):return int(x,16)-SLIDE
    def window(start,n):
        return [{"va":f"{i.address+SLIDE:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(start-SLIDE,n),start-SLIDE)]
    for x in e["growup"]["mode_callbacks"]:
        site=gh(x["site"]);w=struct.unpack("<I",raw(site,4))[0]
        assert adr_target(w,site)==gh(x["target"])
    for x in (e["growup"]["common_store"],e["growup"]["self_pointer"]):
        assert raw(gh(x["site"]),4).hex()==x["bytes"]
    for x in e["relocation_slots"]:
        r=relocs[gh(x["slot"])]
        assert r["type"]=="RELR" and r["symbol"]==0 and r["addend"]==gh(x["target"])
        if "run_slots" in x:
            assert (gh(x["run_end_exclusive"])-gh(x["run_start"]))//8==x["run_slots"]
            assert all(v in relocs for v in range(gh(x["run_start"]),gh(x["run_end_exclusive"]),8))
    # Direct branch target in authenticated original text.
    def verify_call(site,target):
        pc=gh(site);w=struct.unpack("<I",raw(pc,4))[0];assert w&0xfc000000==0x94000000
        i=w&0x3ffffff
        if i&0x2000000:i-=0x4000000
        assert pc+i*4==gh(target)
    verify_call("028BCFB4","02818BC0")
    for a in e["scene_change"]["land_direct_calls"]:verify_call(a,"02742940")
    verify_call("029128D0","027EA3E0")
    # Keep entire bounded windows, not guessed owner boundaries.
    regions={"growup_registration":window(0xdb28d0,0x31c),"stage_owner_candidate":window(0x2912030,0x900),
             "migration_dispatch_tail":window(0x28bcf70,0xc0)}
    names={int(x,16)-SLIDE:x for x in ["00DB28D0","00DB2D7C","028BCB18","00AD7410","02752AE0","02912030","0281CB30"]}
    slots={gh(x["slot"]):x["slot"] for x in e["relocation_slots"]}
    desired=set(names)|set(slots);pages={v&~0xfff for v in desired};hits=[]
    start,data=mapped[0]
    for i,(w,) in enumerate(struct.iter_unpack("<I",data[:len(data)-len(data)%4])):
        pc=start+i*4;kind=w&0xfc000000
        if kind in (0x14000000,0x94000000):
            d=w&0x3ffffff
            if d&0x2000000:d-=0x4000000
            t=pc+4*d
            if t in names:hits.append({"site":f"{pc+SLIDE:08X}","target":names[t],"kind":"BL" if kind==0x94000000 else "B"})
        if w&0x9f000000==0x10000000:
            t=adr_target(w,pc)
            if t in desired:hits.append({"site":f"{pc+SLIDE:08X}","target":f"{t+SLIDE:08X}","kind":"ADR"})
        if w&0x9f000000!=0x90000000:continue
        page=adrp_target(w,pc)
        if page not in pages:continue
        reg=w&31
        for j in range(i+1,min(i+9,len(data)//4)):
            word=struct.unpack_from("<I",data,j*4)[0]
            a=add_imm(word)
            if a and a["rn"]==reg and page+a["imm"] in desired:
                hits.append({"site":f"{start+j*4+SLIDE:08X}","target":f"{page+a['imm']+SLIDE:08X}","kind":"ADRP_ADD_CANDIDATE"});break
            # 64-bit unsigned immediate LDR; bounded candidates only.
            if word&0xffc00000==0xf9400000 and (word>>5)&31==reg:
                target=page+((word>>10)&0xfff)*8
                if target in slots:hits.append({"site":f"{start+j*4+SLIDE:08X}","target":slots[target],"kind":"ADRP_LDR_SLOT_CANDIDATE"})
            if word&0x7c000000==0x14000000:break
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("disassembly.json",regions);write("next_hops.json",hits)
    report={"source_anchors":len(e["anchors"]),"original_nso_relocations":len(relocs),"callback_registrations_verified":4,"relocation_slots_verified":3,"achievement_rows":len(rows),"marked_achievement_rows":len(life["marked"]),"candidate_references":len(hits),"stage_owner_verified":False,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
