#!/usr/bin/env python3
"""HASH-008O: resolve shared predicate objects and type-2 six-way jump table."""
import argparse,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob
from acnh303_hash008n_mail_handlers import run as prior

SLIDE=0x100000
PREDICATES=[0x049FF448,0x049FF4E8,0x049FF510,0x049FF628,0x049FF718,0x049FF740]
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    def dis(a,n):
        b=raw(a,n);require(b==get_bytes_va(elf,segs,a,n),"ELF/NSO mismatch")
        return [{"va":f"{i.address+SLIDE:08X}","asm":i.mnemonic+" "+i.op_str,"bytes":i.bytes.hex()} for i in md.disasm(b,a)]
    preds=[]
    for g in PREDICATES:
        r=relocs[g-SLIDE];require(r["symbol"]==0 and r["addend"] is not None,"relative predicate relocation")
        a=r["addend"];p={"slot":f"{g:08X}","target":f"{a+SLIDE:08X}","relocation":r,"instructions":dis(a,256)}
        preds.append(p)
    # Verified code at 01B90200..214 calculates branch base plus u8*4.
    table_va=0x04077b65;branch_base=0x01a90218
    table=list(raw(table_va,6))
    branches=[{"selector":36+i,"offset":v,"target":f"{branch_base+v*4+SLIDE:08X}","instructions":dis(branch_base+v*4,48)} for i,v in enumerate(table)]
    region=dis(0x01a90218,0x4c)
    # Original normalization lookup tables (not runtime mode3 mapping).
    lookups={"mode1":list(struct.unpack("<17I",raw(0x04177938-SLIDE,68))),"mode3":list(struct.unpack("<4I",raw(0x04101d00-SLIDE,16)))}
    result={"predicates":preds,"type2_jump_table":branches,"type2_branch_region":region,"normalization_tables":lookups}
    (out/"predicate_and_jump_table.json").write_text(json.dumps(result,indent=2)+"\n")
    print("PREDICATES",json.dumps(preds));print("TYPE2",json.dumps(branches));print("NORMALIZATION",json.dumps(lookups))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
