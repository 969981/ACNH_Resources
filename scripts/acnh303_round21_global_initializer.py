#!/usr/bin/env python3
"""R21 inspect ACNH ELF actual global storage and direct AArch64 ADRP references.

Find ELF PT_LOAD backing/relocations, decode ADRP page references to
0x4AB2238 and follow bounded basic-block consumers. Never invent global
runtime contents or vtable function pointers from an uninitialised GOT/BSS.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM,CS_OP_REG,CS_OP_MEM
from acnh303_round18_native_elf_probe import NCA

ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
TARGET=0x4AB2238
MAX_REF=1500
def sha(b):return hashlib.sha256(b).hexdigest()
def adrp_page(pc,op):
    if op&0x9f000000 != 0x90000000:return None
    x=( ((op>>5)&0x7ffff)<<2 ) | ((op>>29)&3)
    if x&(1<<20):x-=1<<21
    return (pc&~0xfff)+(x<<12)

def find_refs(blob,segments,target=TARGET,debug=None):
    page=target&~0xfff
    refs=[]
    sample=[]
    access_totals=Counter()
    visited=0
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    cs.detail=True
    for seg in segments:
        if not(seg["flags"]&1):continue
        off=seg["offset"];size=seg["filesz"];va=seg["vaddr"]
        for rel in range(0,size-size%4,4):
            insn=struct.unpack_from("<I",blob,off+rel)[0]
            addr=va+rel
            if debug is not None and addr==0x3ACA490:
                debug['full_scan_anchor_reached']=True
                debug['full_scan_anchor_raw']=f'{insn:08x}'
                debug['full_scan_anchor_page']=hex(adrp_page(addr,insn)) if adrp_page(addr,insn) is not None else None
            if adrp_page(addr,insn)!=page:continue
            visited+=1
            reg=insn&31
            # Reconstruct only direct register alias and immediate address
            # accesses without crossing a control flow barrier.
            code=blob[off+rel:off+min(size-rel,0x50)]
            insns=list(cs.disasm(code,addr))
            # AArch64 instruction Rd encodes architectural x0..x30; Capstone
            # reg_name() requires its own unrelated enum ID, never the raw Rd bits.
            aliases={f'x{reg}':page}
            accesses=[]
            barrier=None
            for x in insns[1:]:
                if x.mnemonic in ("b","br","blr","bl","ret") or x.mnemonic.startswith(("b.","cb","tb")):
                    barrier={"at":hex(x.address),"op":x.mnemonic}
                    break
                ops=x.operands
                if len(ops)>1 and ops[1].type==CS_OP_MEM:
                    mem=ops[1].mem
                    base=cs.reg_name(mem.base)
                    absolute=aliases.get(base)
                    if absolute is not None and absolute+mem.disp==target:
                        accesses.append({"at":hex(x.address),"opcode":x.bytes.hex(),"mnemonic":x.mnemonic,
                                        "mem_disp":mem.disp,
                                        "kind":"store_candidate" if x.mnemonic.startswith(("str","stp","stur")) else
                                               "load" if x.mnemonic.startswith(("ldr","ldp","ldur")) else "other_memory",
                                        "register_operand":cs.reg_name(ops[0].reg) if ops[0].type==CS_OP_REG else None})
                # Register allocation updates; avoid assuming unchanged source.
                if len(ops)>=3 and ops[0].type==CS_OP_REG:
                    dst=cs.reg_name(ops[0].reg)
                    if x.mnemonic=="add" and ops[1].type==CS_OP_REG and ops[2].type==2:
                        src=cs.reg_name(ops[1].reg)
                        if src in aliases:aliases[dst]=aliases[src]+ops[2].imm
                        else:aliases.pop(dst,None)
                    elif not x.mnemonic.startswith(("str","stp","stur","cmp","tst")):
                        aliases.pop(dst,None)
            record={"adrp_at":hex(addr),"opcode":f"{insn:08x}",
                    "page":hex(page),"destination":f"x{reg}",
                    "target_load_store_accesses":accesses,"boundary":barrier}
            if len(sample)<24:
                sample.append(record)
            for hit in accesses:
                access_totals[hit["kind"]]+=1
            if addr==0x3ACA490 and debug is not None:
                debug['full_scan_anchor_accesses']=accesses
                debug['full_scan_anchor_aliases']=dict(aliases)
            if accesses and len(refs)<MAX_REF:
                refs.append(record)
    return visited,refs,sample,dict(access_totals)

def analyze(path):
    blob=path.read_bytes()
    if sha(blob)!=ELF_SHA:raise ValueError("R20 ELF hash mismatch")
    with path.open("rb") as f:
        elf=ELFFile(f)
        loads=[{"vaddr":int(s["p_vaddr"]),"offset":int(s["p_offset"]),"filesz":int(s["p_filesz"]),
                "memsz":int(s["p_memsz"]),"flags":int(s["p_flags"])}
               for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
        matches=[s for s in loads if s["vaddr"]<=TARGET<s["vaddr"]+s["memsz"]]
        backing=[]
        for s in matches:
            delta=TARGET-s["vaddr"]
            if delta+8<=s["filesz"]:
                offset=s["offset"]+delta
                value=struct.unpack_from("<Q",blob,offset)[0]
                backing.append({"status":"file_backed","file_offset":offset,
                                "stored_8_hex":blob[offset:offset+8].hex(),
                                "initial_u64":hex(value),
                                "points_to_executable_load":any(x["flags"]&1 and x["vaddr"]<=value<x["vaddr"]+x["memsz"] for x in loads)})
            else:
                backing.append({"status":"zero_fill_or_unmapped_file_storage","file_offset":None,
                                "initial_u64":None,"runtime_value_known":False})
        reloc=[]
        for s in elf.iter_sections():
            if s["sh_type"] not in ("SHT_RELA","SHT_REL"):continue
            for entry in s.iter_relocations():
                off=int(entry["r_offset"])
                if abs(off-TARGET)<=0x20:
                    reloc.append({"section":s.name,"target":hex(off),"kind":int(entry["r_info_type"]),
                                  "addend":int(entry["r_addend"]) if "r_addend" in entry.entry else None})
    def read_file_backed_qword(va):
        seg=next((s for s in loads if s["vaddr"]<=va and va+8<=s["vaddr"]+s["memsz"]),None)
        if seg is None:return {"va":hex(va),"status":"not_mapped_in_ELF"}
        rel=va-seg["vaddr"]
        if rel+8>seg["filesz"]:return {"va":hex(va),"status":"zero_fill_or_runtime_only"}
        off=seg["offset"]+rel
        v=struct.unpack_from("<Q",blob,off)[0]
        return {"va":hex(va),"status":"file_backed","file_offset":off,
                "stored_value":hex(v),"stored_sha256":sha(blob[off:off+8]),
                "value_points_to_executable_ptload":any(
                    (s["flags"]&1) and s["vaddr"]<=v<s["vaddr"]+s["memsz"] for s in loads)}
    static_chains=[]
    first=read_file_backed_qword(TARGET)
    if first["status"]=="file_backed":
        v=int(first["stored_value"],16)
        if v:
            object_first=read_file_backed_qword(v)
            direct_slot=read_file_backed_qword(v+0x18)
            path={"interpretation":"global_contains_pointer_to_vtable",
                  "global":first,"candidate_vtable":object_first,"slot_0x18":direct_slot}
            static_chains.append(path)
            if object_first["status"]=="file_backed":
                obj_vtable=int(object_first["stored_value"],16)
                if obj_vtable:
                    static_chains.append({"interpretation":"global_contains_pointer_to_object_with_vptr_at_0",
                        "global":first,"object_vptr":object_first,
                        "slot_0x18":read_file_backed_qword(obj_vtable+0x18)})
    # The R20 independently verified instruction pair is an anchor which
    # must appear in the full-ELF reference scan. Preserve precise diagnostics
    # if a PT_LOAD segment is not aligned on the same instruction boundary.
    anchor_va=0x3ACA490
    ex=next((s for s in loads if (s["flags"]&1) and
             s["vaddr"]<=anchor_va and anchor_va+0x20<=s["vaddr"]+s["filesz"]),None)
    if ex is None:raise ValueError("known 0x3ACA490 executable anchor missing")
    anchor_file=ex["offset"]+(anchor_va-ex["vaddr"])
    anchor_code=blob[anchor_file:anchor_file+0x20]
    anchor_segment={"flags":ex["flags"],"offset":anchor_file,
                    "vaddr":anchor_va,"filesz":len(anchor_code),"memsz":len(anchor_code)}
    local_total,local_refs,_,local_counts=find_refs(blob,[anchor_segment])
    anchor_diag={"at":hex(anchor_va),"raw_hex":anchor_code.hex(),
                 "adrp_target_page":hex(adrp_page(anchor_va,struct.unpack_from("<I",anchor_code)[0])),
                 "local_adrp":local_total,"local_exact_access":local_counts,
                 "file_offset":anchor_file,
                 "executable_segment_start":hex(ex["vaddr"]),
                 "segment_va_alignment_mod4":ex["vaddr"]%4}
    full_diag={}
    total,refs,sample,access_totals=find_refs(blob,loads,debug=full_diag)
    anchor_diag['full_scan_diagnostic']=full_diag
    if local_counts.get("load",0)!=1:
        raise ValueError(f"actual R20 instruction pair not found by decoder: {anchor_diag}")
    return {"schema":"acnh303-r21-elf-global-initializers-v2","elf_sha256":sha(blob),
            "global_target_address":hex(TARGET),"pt_load_matches":matches,
            "on_disk_storage":backing,"nearby_relocations":reloc,
            "known_anchor_diagnostic":anchor_diag,
            "adrp_page_ref_total":total,"adrp_page_sample":sample,
            "adrp_page_records":refs,"exact_matching_adrp_record_count_sampled":len(refs),
            "exact_global_mem_access_counts":access_totals,
            "static_file_backed_pointer_chains":static_chains,
            "verification_state":"STATIC_ELF_POINTER_VALUES_ONLY_RUNTIME_UNVERIFIED",
            "limitations":"Entire executable ADRP page set scanned; only exact-target memory accesses are retained, with first 24 page references as debug examples. File-backed pointer chains are hypothetical interpretations of immutable ELF bytes; dynamic loader and runtime writes may change all pointers. No static candidate alone establishes the live BLR target or AMTA/EventFlow owner."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,default=Path(NCA)/"0/ACNH3.0.3.elf")
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r21_native_global/global_4ab2238.json"))
    a=p.parse_args()
    d=analyze(a.elf)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    print("R21 ELF GLOBAL",hex(TARGET),"adrp",d["adrp_page_ref_total"],
          "exact",d["exact_global_mem_access_counts"],"backing",d["on_disk_storage"])
if __name__=="__main__":main()
