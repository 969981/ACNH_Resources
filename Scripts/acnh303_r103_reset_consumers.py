#!/usr/bin/env python3
"""R103 authenticated source verification and next-hop ARM64 branch/reference audit."""
import argparse,bisect,csv,hashlib,json,re,struct,zlib
from pathlib import Path
from collections import defaultdict
from acnh303_round11_elf_xref import parse_elf,get_bytes_va,adrp_target,adr_target,add_imm
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
BASE=Path("derived/3.0.3/npc_event_flags/r103_reset_consumers")
CROOT=Path("derived/3.0.3/ghidra12.2/c")
ELF=Path("e10617820db06889e1638499478da0de_NCA/0/main.elf")
SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
SLIDE=0x100000
TARGETS=[0xdb2bec,0xdb2c50,0xdb2cb4,0xdb2d18,0xdb2d7c,0x1ea3d20,0x1ea4730,0x2818bc0,0x2741b30,0x2752790,0x2742940,0x2752c00,0x27ea3e0,0x27ea950,0x2691310]
def gitblob(p):
    b=p.read_bytes();return hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()
def run(root,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    for a in e["anchors"]:
        p=root/a["path"];assert gitblob(p)==a["blob"]
        ls=p.read_text(encoding="utf-8").splitlines()
        assert all(ls[x["line"]-1].strip()==x["text"] for x in a["lines"])
    for t in e["tables"]:
        p=root/t["path"];assert gitblob(p)==t["blob"]
        with p.open(encoding="utf-8-sig",newline="") as f:rows=list(csv.DictReader(f))
        assert len(rows)==t["rows"]
        for h,d in t["fields"].items():
            assert [x["hash_45F320F2"] for x in rows if x["hash_"+h]=="1"]==[x["key"] for x in d["keys"]]
        assert sum(x["hash_3DAD9135"]==x["hash_3C7FB88F"]=="1" for x in rows)==t["overlap"]
    assert zlib.crc32(b"AttrClearSceneChange u8")==0x3c7fb88f
    b=(root/ELF).read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
    segments=parse_elf(b);assert min(x["vaddr"] for x in segments)==0
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def window(va,n):
        raw=get_bytes_va(b,segments,va,n)
        return [] if raw is None else [{"ghidra_va":f"{x.address+SLIDE:08X}","bytes":x.bytes.hex(),"mnemonic":x.mnemonic,"operands":x.op_str} for x in cs.disasm(raw,va)]
    def bl_target(gh):
        w=struct.unpack("<I",get_bytes_va(b,segments,gh-SLIDE,4))[0]
        assert w&0xfc000000==0x94000000
        v=w&0x3ffffff
        if v&0x2000000:v-=0x4000000
        return gh+v*4
    for row in e["calendar_wrappers"]:
        start=int(row["entry"],16);end=int(row["end"],16)
        ins=window(start-SLIDE,end-start+4)
        assert ins[0]["mnemonic"]=="stp" and ins[-1]["mnemonic"]=="ret"
        assert all(bl_target(int(a,16))==0x276aab0 for a in row["calls"])
        assert any(x["mnemonic"]=="strb" and "#0x110" in x["operands"] for x in ins)
    for x in e["moving"]["call_sites"]:assert bl_target(int(x["site"],16))==int(x["target"],16)
    for x in e["culling_calls"]:assert bl_target(int(x["site"],16))==0x1ea4530
    assert bl_target(0x29128d0)==0x27ea3e0
    wanted={v-SLIDE for v in TARGETS};pages={x&~0xfff for x in wanted}
    result={f"{x:08X}":{"direct":[],"address_candidates":[]} for x in TARGETS}
    def add(target,key,site,kind):
        result[f"{target+SLIDE:08X}"][key].append({"site":f"{site+SLIDE:08X}","kind":kind,"window":window(site-16,36)})
    for seg in segments:
        if not seg["flags"]&1:continue
        off=seg["file_offset"];size=seg["filesz"];data=memoryview(b)[off:off+size]
        for i,(w,) in enumerate(struct.iter_unpack("<I",data[:size-size%4])):
            pc=seg["vaddr"]+i*4
            kind=w&0xfc000000
            if kind in (0x14000000,0x94000000):
                n=w&0x3ffffff
                if n&0x2000000:n-=0x4000000
                t=pc+4*n
                if t in wanted:add(t,"direct",pc,"BL" if kind==0x94000000 else "B")
            if w&0x9f000000==0x10000000:
                t=adr_target(w,pc)
                if t in wanted:add(t,"address_candidates",pc,"ADR")
            if w&0x9f000000!=0x90000000:continue
            page=adrp_target(w,pc)
            if page not in pages:continue
            reg=w&31
            for j in range(i+1,min(i+9,size//4)):
                n=struct.unpack_from("<I",data,j*4)[0];a=add_imm(n)
                if a and a["rn"]==reg and page+a["imm"] in wanted:
                    add(page+a["imm"],"address_candidates",seg["vaddr"]+j*4,"ADRP_ADD_BOUNDED_CANDIDATE");break
                if n&0x7c000000==0x14000000:break
    # C literal calls independently establish the exported source function, if present.
    pattern=re.compile(r"\bFUN_("+"|".join(f"{x:08x}" for x in TARGETS)+r")\s*\(",re.I)
    calls=[]
    for p in sorted((root/CROOT).rglob("*.c")):
        ls=p.read_text(encoding="utf-8").splitlines()
        for i,l in enumerate(ls):
            for m in pattern.finditer(l):
                if m.group(1).lower()!=p.stem.lower():calls.append({"target":m.group(1),"source":p.relative_to(root).as_posix(),"line":i+1,"context":ls[max(0,i-4):i+5]})
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    write("next_hop_branches.json",result);write("native_c_calls.json",calls)
    report={"source_anchors":len(e["anchors"]),"calendar_wrappers_verified":4,"land_player_temp_rows":sum(t["rows"] for t in e["tables"]),"next_hop_counts":{k:{a:len(b) for a,b in v.items()} for k,v in result.items()},"unknown_names":e["unresolved_names"],"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
