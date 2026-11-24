#!/usr/bin/env python3
"""Read authenticated original ELF windows; emit evidence, not runtime claims."""
import argparse, hashlib, json, struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
SLIDE=0x100000
WINDOWS={
 "manager_dtor":(0x026eeaec,0x026eeb20),
 "manager_deleting_dtor":(0x026eeb20,0x026eebf4),
 "replacement_state_callbacks":(0x026ee9a4,0x026eeaec),
 "ordinary_getters":(0x0270bd28,0x0270bd68),
 "replacement_getters":(0x02725c18,0x02725c58),
 "replacement_ctor":(0x026fd710,0x026fe430),
 "ordinary_ctor":(0x026f9460,0x026fd390),
 "mode_switch":(0x026f5030,0x026f5160),
}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    b=a.elf.read_bytes()
    if hashlib.sha256(b).hexdigest()!=SHA: raise ValueError("canonical ELF SHA mismatch")
    if b[:6]!=b"\x7fELF\x02\x01" or struct.unpack_from("<HH",b,16)!=(3,183):
        raise ValueError("expected AArch64 ET_DYN")
    ph=struct.unpack_from("<Q",b,32)[0]
    ent,n=struct.unpack_from("<HH",b,54)
    seg=[]
    for i in range(n):
        t,f,o,v,_,fs,ms,_=struct.unpack_from("<IIQQQQQQ",b,ph+i*ent)
        if t==1 and f&1: seg.append((o,v,fs))
    def raw(start,end):
        for o,v,fs in seg:
            if v<=start<end<=v+fs:
                return b[o+start-v:o+end-v]
        raise ValueError("not file-backed executable: "+hex(start))
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    cs.detail=True
    report={"elf_sha256":SHA,"ghidra_slide":hex(SLIDE),"runtime_verified":False,"windows":{}}
    a.out.mkdir(parents=True,exist_ok=True)
    for name,(lo,hi) in WINDOWS.items():
        start,end=lo-SLIDE,hi-SLIDE
        data=raw(start,end)
        ins=list(cs.disasm(data,start))
        # Preserve undecoded bytes as well; do not silently skip any gap.
        rows=[{"rva":hex(i.address),"ghidra_va":hex(i.address+SLIDE),"bytes":i.bytes.hex(),"instruction":i.mnemonic+" "+i.op_str} for i in ins]
        report["windows"][name]={"start":hex(start),"end_exclusive":hex(end),"raw_sha256":hashlib.sha256(data).hexdigest(),"raw_hex":data.hex(),"fully_decoded":sum(i.size for i in ins)==len(data),"instructions":rows}
        (a.out/(name+".asm")).write_text("\n".join(f"{r['rva']}  {r['bytes']}  {r['instruction']}" for r in rows)+"\n")
        if name in ("manager_dtor","ordinary_getters","replacement_getters"):
            print(name)
            for r in rows: print(r["ghidra_va"],r["bytes"],r["instruction"])
    (a.out/"save_backend_elf.json").write_text(json.dumps(report,indent=2)+"\n")
if __name__=="__main__":
    main()
