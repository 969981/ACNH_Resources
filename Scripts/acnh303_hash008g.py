#!/usr/bin/env python3
"""HASH-008G: independently authenticate all five callsites and locate the
ReBody pointer-accessor call / halfword store candidates in two native writers.
Source-level dataflow is separate from bounded machine-code pattern evidence.
"""
import argparse,json,struct,collections,re
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,sha,sx
SLIDE=0x100000
PRED=0x026222e0-SLIDE
ACCESS=0x01afd600-SLIDE
CALLS=[(0x01af6a60,0x01af6e28,"layout_icon"),(0x026138cc,0x026139e8,"nondefault_test"),(0x0261fb40,0x0261ff40,"recipe_writer"),(0x028aa290,0x028aaa9c,"scene_writer"),(0x03412d40,0x03413224,"layout_selection")]
ROOTS={"local_environment_pointer":0x04bb30a0-SLIDE,"alternate_environment_pointer":0x04bbaed0-SLIDE,"context_pointer":0x04bb27d0-SLIDE}
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    def dis(va,size):
        b=get_bytes_va(elf,segs,va,size)
        require(b is not None and raw(va,size)==b,"NSO/ELF bytes")
        return list(md.disasm(b,va))
    def row(i):return {"va":i.address,"ghidra_va":i.address+SLIDE,"asm":i.mnemonic+" "+i.op_str,"bytes":i.bytes.hex()}
    def target(i):
        w=int.from_bytes(i.bytes,"little")
        return i.address+4*sx(w&0x3ffffff,26) if w&0xfc000000 in (0x94000000,0x14000000) else None
    roots={}
    for name,addr in ROOTS.items():
        rr=relocs.get(addr);require(rr is not None,"missing original relocation "+name)
        roots[name]={"slot_va":addr,"relocation":rr}
    print("ENVIRONMENT_ROOTS",json.dumps(roots))
    records=[];writers=[]
    for fn,site,role in CALLS:
        va=site-SLIDE;ins=dis(va,0x180)
        require(ins[0].mnemonic=="bl" and target(ins[0])==PRED,"predicate edge mismatch")
        require(ins[1].mnemonic=="tbz" and ins[1].op_str.startswith("w0, #0,"),"return branch mismatch")
        rec={"function_ghidra_va":fn,"call_site_va":va,"role":role,"return_branch":row(ins[1]),"context":[row(i) for i in ins]}
        records.append(rec)
        if role not in ("recipe_writer","scene_writer"):continue
        for idx,i in enumerate(ins):
            if i.mnemonic!="bl" or target(i)!=ACCESS:continue
            follow=ins[idx+1:idx+17]
            # Raw STRH [x0] after accessor is a candidate only; do not assume
            # register preservation across another call or arbitrary branch.
            stores=[]
            for p in follow:
                if p.mnemonic in ("bl","blr","ret"):break
                if p.mnemonic=="strh" and re.search(r"\[x0(?:, #0)?\]",p.op_str):stores.append(row(p))
            evidence={"role":role,"accessor_call":row(i),"nearby_store_candidates":stores,"context":[row(p) for p in follow]}
            writers.append(evidence);print("REBODY_WRITER",json.dumps(evidence))
    result={"original_direct_predicate_calls":len(records),"immediate_w0_bit0_branches":len(records),"accessor_call_candidates":len(writers),"nearby_halfword_store_candidates":sum(len(w["nearby_store_candidates"]) for w in writers),"environment_relocation_roots":len(roots),"decompiler_supported_semantics":"environment-dependent default ReBody variant","hemisphere_storage_provenance_verified":False,"original_header_name_verified":False}
    for name,obj in [("summary",result),("caller_contexts",records),("writer_candidates",writers),("environment_roots",roots)]:
        (out/(name+".json")).write_text(json.dumps(obj,indent=2)+"\n")
    print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
