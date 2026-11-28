#!/usr/bin/env python3
"""ADB original matched NSO/ELF XREFs for kind-map and pickup/stack paths.
Bounded address formation leads, not whole-program dataflow or runtime proof.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from acnh303_item_capability_xrefs import branch_target, BASE

# Ghidra VA, not Main RVA; alias and direct globals kept distinct.
GLOBALS = (0x04BC00C8, 0x05326EC0, 0x05326EC8)
TARGETS = (0x01B14730,0x0277E788,0x0277E8B4,0x0277E9E0,0x016E49E4,
           0x0277E56C,0x0124C1E8,0x01B09000,0x0232697C,0x025579BC,
           0x02677890,0x0267BA70,0x01AF0020,0x01AF02D0,0x027FAA50,
           0x0242E2CC,0x026738B0,0x02673A50)
def sha(b): return hashlib.sha256(b).hexdigest()
def run(root,out):
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import parse_elf,get_bytes_va,adrp_target,adr_target,add_imm,ldr_uimm
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    es=parse_elf(elf); base=min(s["vaddr"] for s in es)&~0xfff
    start,code=mapped[0];end=start+len(code)
    assert len(code)%4==0
    executable=[s for s in es if s["flags"]&1]
    for off in range(0,len(code),4096):
        b=code[off:off+4096]
        assert get_bytes_va(elf,executable,base+start+off,len(b))==b
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def window(pc,before=16,after=48):
        lo,hi=max(start,pc-before),min(end,pc+after)
        return [{"va":hex(i.address+BASE),"bytes":bytes(i.bytes).hex(),
                 "mnemonic":i.mnemonic,"operands":i.op_str}
                for i in cs.disasm(code[lo-start:hi-start],lo)]
    orig={a-BASE for a in GLOBALS}
    alias={}
    for slot,rr in rel.items():
        if rr.get("symbol")==0 and rr.get("type") in ("RELR",1027) and rr.get("addend") in orig:
            alias[slot]=rr["addend"]
        if slot in orig and rr.get("symbol")==0 and rr.get("type") in ("RELR",1027) and isinstance(rr.get("addend"),int):
            alias[slot]=rr["addend"]
    addresses=orig|set(alias)|set(alias.values())
    addresses|={a+8 for a in list(addresses)}
    pages={a&~4095 for a in addresses}
    targets={a-BASE for a in TARGETS}
    assert all(start<=a<end for a in targets)
    refs=[]; branches=[]; seen=set()
    def add_ref(pc,site,a,form):
        key=(pc,site,a)
        if key in seen:return
        seen.add(key)
        ctx=window(site,24,80)
        refs.append({"site_va":hex(pc+BASE),"consumer_va":hex(site+BASE),
                     "formed_va":hex(a+BASE),"form":form,"context":ctx,
                     "store_mnemonic_in_window":any(i["mnemonic"].startswith(("str","stp","stur")) for i in ctx),
                     "writer_proven":False})
    for j,(w,) in enumerate(struct.iter_unpack("<I",code)):
        pc=start+j*4
        t=branch_target(w,pc)
        if t in targets:
            branches.append({"site_va":hex(pc+BASE),"target_va":hex(t+BASE),
                             "bytes":struct.pack("<I",w).hex(),"context":window(pc)})
        a=adr_target(w,pc)
        if a in addresses:add_ref(pc,pc,a,"ADR")
        page=adrp_target(w,pc)
        if page not in pages:continue
        rd=w&31
        for step in range(1,7):
            off=(j+step)*4
            if off+4>len(code):break
            f=struct.unpack_from("<I",code,off)[0]
            add=add_imm(f);ldr=ldr_uimm(f)
            if add and add["rn"]==rd:
                a=page+add["imm"]
                if a in addresses:add_ref(pc,pc+4*step,a,"ADRP_ADD")
            if ldr and ldr["rn"]==rd:
                a=page+ldr["imm"]
                if a in addresses:add_ref(pc,pc+4*step,a,"ADRP_LDR")
            # STR unsigned immediate (integer 32/64-bit), base register.
            if (f&0xFFC00000) in (0xB9000000,0xF9000000) and ((f>>5)&31)==rd:
                scale=8 if (f&0xFFC00000)==0xF9000000 else 4
                a=page+((f>>10)&0xfff)*scale
                if a in addresses:add_ref(pc,pc+4*step,a,"ADRP_STR")
    report={"schema":"acnh303-adb-native-xref-v1","elf_sha256":sha(elf),
            "nso_sha256":sha(nso),"build_id":nso[0x40:0x60].hex(),
            "global_vas":[hex(a) for a in GLOBALS],
            "relative_alias_candidates":[{"slot_va":hex(a+BASE),"target_va":hex(t+BASE)} for a,t in sorted(alias.items())],
            "address_candidates":refs,"direct_branch_candidates":branches,
            "runtime_verified":False,"kind_mapping_verified":False,
            "limits":"Matched original text, bounded linear ADR/ADRP patterns. Register clobbers, aliases and control flow are not proven; direct stores need reaching-definition and object-identity checks. Does not recover dynamic array contents or actual visitor pickup."}
    out.mkdir(parents=True,exist_ok=True)
    (out/"adb_native_xrefs.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    counts={"address_candidates":len(refs),"direct_branches":len(branches),
            "direct_store_candidates":sum(x["form"]=="ADRP_STR" for x in refs),
            "build_id":report["build_id"],"runtime_verified":False}
    (out/"adb_native_summary.json").write_text(json.dumps(counts,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(counts,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve())
