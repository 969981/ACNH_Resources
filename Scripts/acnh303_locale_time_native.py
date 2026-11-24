#!/usr/bin/env python3
"""Authenticated read-only locale/time roots, raw tables and relocation candidates."""
import argparse, hashlib, json, struct
from pathlib import Path
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import parse_elf, get_bytes_va, adrp_target, adr_target, bl_target
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG, ARM64_OP_IMM, ARM64_OP_MEM

BASE=0x100000
ROOTS={
 "language_root":0x05ae76c0, "language_registration":0x05ae76b8,
 "language_alias":0x04bb4eb8,"clock_root":0x04da6480,
 "clock_registration":0x04da6478,"clock_alias":0x04bb32e8,
 "language_sdk_import":0x04be00b0,
}
TABLES={"locale_matrix":(0x0419b5db,66),"locale_fallback":(0x0419b620,20),
        "group_pairs":(0x04058440,32),"sdk_language_table":(0x0410da5c,18*8)}
FUNCS=[0x038cefc4,0x038cdff0,0x038cdadc,0x038ceb30,0x038ced70,
       0x032c5240,0x032c54b0,0x00a815cc,0x00a81484,0x00a817a0,
       0x00a818cc,0x02659600,0x00223ba0,0x040031f0]
def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    es=parse_elf(elf); eb=min(s["vaddr"] for s in es)&~0xfff
    start,code=mapped[0]; end=start+len(code)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def checked(a,n):
        b=raw(a,n); e=get_bytes_va(elf,es,a+eb,n)
        if e!=b:raise ValueError(f"ELF/NSO mismatch or unmapped {a:#x}")
        return b
    def record(i):
        return {"rva":hex(i.address),"ghidra_va":hex(i.address+BASE),"bytes":i.bytes.hex(),
                "op":i.mnemonic+" "+i.op_str}
    targets={v-BASE:k for k,v in ROOTS.items()}
    pages={v&~4095 for v in targets}
    funset={v-BASE for v in FUNCS}
    xrefs=[];calls=[]
    def norm(i,r):
        n=i.reg_name(r)
        return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        a=start+4*j
        t=bl_target(w,a)
        if t in funset:
            b=checked(a,4)
            calls.append({"site_rva":hex(a),"target_rva":hex(t),"bytes":b.hex()})
        t=adr_target(w,a)
        if t in targets:
            i=next(iter(cs.disasm(checked(a,4),a)),None)
            if i:xrefs.append({"kind":"ADR","target":targets[t],"instruction":record(i)})
        page=adrp_target(w,a)
        if page not in pages:continue
        reg=f"x{w&31}"
        n=min(48,end-a-4)
        if n<=0:continue
        for i in cs.disasm(code[a-start+4:a-start+4+n],a+4):
            m=i.mnemonic;o=i.operands
            if m in ("b","br","bl","blr","ret","cbz","cbnz","tbz","tbnz") or m.startswith("b."):break
            for op in o:
                if op.type==ARM64_OP_MEM and not op.mem.index and norm(i,op.mem.base)==reg and page+op.mem.disp in targets:
                    checked(a,4);checked(i.address,4)
                    xrefs.append({"kind":"ADRP_memory","target":targets[page+op.mem.disp],"adrp_rva":hex(a),"instruction":record(i)})
            if m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG and norm(i,o[1].reg)==reg and o[2].type==ARM64_OP_IMM:
                t=page+(o[2].imm<<o[2].shift.value)
                if t in targets:
                    checked(a,4);checked(i.address,4)
                    xrefs.append({"kind":"ADRP_ADD_candidate","target":targets[t],"adrp_rva":hex(a),"instruction":record(i)})
            if any(norm(i,r)==reg for r in i.regs_access()[1]):break
    tables={}
    for name,(va,n) in TABLES.items():
        b=checked(va-BASE,n)
        tables[name]={"va":hex(va),"raw_hex":b.hex()}
        if name=="sdk_language_table":
            tables[name]["entries"]=[x.split(b"\0",1)[0].decode("ascii",errors="backslashreplace") for x in (b[i:i+8] for i in range(0,n,8))]
        elif name=="locale_fallback":tables[name]["entries"]=list(struct.unpack("<5i",b))
        elif name=="locale_matrix":tables[name]["entries"]=list(struct.unpack("<66b",b))
        else:tables[name]["entries"]=[list(b[i:i+2]) for i in range(0,n,2)]
    records=[]
    for slot,r in rel.items():
        target=r.get("addend")
        if slot in targets or (r.get("type") in ("RELR",1027) and r.get("symbol")==0 and target in targets):
            records.append({"slot_rva":hex(slot),"target_rva":hex(target) if isinstance(target,int) else None,"relocation":r})
    aliases={}
    for alias,owner in [("language_alias","language_root"),("clock_alias","clock_root")]:
        r=rel.get(ROOTS[alias]-BASE,{})
        aliases[alias]={"expected_target":owner,"matches":r.get("type") in ("RELR",1027) and r.get("symbol")==0 and r.get("addend")==ROOTS[owner]-BASE,"relocation":r}
    out.mkdir(parents=True,exist_ok=True)
    report={"schema":"acnh303-locale-time-native-v1","elf_sha256":hashlib.sha256(elf).hexdigest(),
      "nso_sha256":hashlib.sha256(nso).hexdigest(),"build_id":nso[0x40:0x60].hex(),
      "root_rvas":{k:hex(v-BASE) for k,v in ROOTS.items()},"tables":tables,
      "relocations":records,"aliases":aliases,"xref_candidates":xrefs,"direct_calls":calls,
      "runtime_verified":False,"heap_delta_cause_verified":False}
    (out/"locale_time_native.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    lines=["# Locale/time original evidence","","No runtime verification. ADRP candidates are not exhaustive dataflow.","","## Tables"]
    for k,v in tables.items():lines.append(f'- {k}: {v["va"]} / {v["entries"]}')
    lines+=["","## Relocation aliases",json.dumps(aliases,indent=2),"","## References","|Root|RVA|Bytes|Instruction|","|---|---|---|---|"]
    for x in xrefs:
        i=x["instruction"];lines.append(f'|{x["target"]}|{i["rva"]}|{i["bytes"]}|{i["op"]}|')
    (out/"README.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    print("roots",len(ROOTS),"xref candidates",len(xrefs),"calls",len(calls),"aliases",aliases,flush=True)
    if not all(v["matches"] for v in aliases.values()):raise SystemExit("alias candidates not confirmed; inspect evidence")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
