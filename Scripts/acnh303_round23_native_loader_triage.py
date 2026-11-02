#!/usr/bin/env python3
"""R23: real ELF non-RET vtable slot triage and read-only runtime trace template.

Static vtable function code and direct-call references are evidence, NOT proof
of AMTA/LBLI/BFEVFL ownership. R22 +0x18 = RET is excluded by opcode.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round18_native_elf_probe import NCA
from acnh303_round22_native_callee import sha,branch_target,static_va_read,STATIC_VTABLE,FUNCTION
from acnh303_round21_global_initializer import ELF_SHA

def summarize_instructions(insns):
    m=Counter(x.mnemonic for x in insns)
    return {"instruction_count":len(insns),
            "loads":sum(v for k,v in m.items() if k.startswith(("ldr","ldur"))),
            "stores":sum(v for k,v in m.items() if k.startswith(("str","stur"))),
            "direct_bl":m["bl"],"indirect_br":m["blr"]+m["br"],
            "returns":m["ret"],"conditional_branches":sum(v for k,v in m.items() if k.startswith(("cb","tb","b.")))}

def inspect(root):
    path=root/NCA/"0/ACNH3.0.3.elf"
    blob=path.read_bytes()
    if sha(blob)!=ELF_SHA:raise ValueError("wrong original ELF SHA")
    with path.open("rb") as f:
        ef=ELFFile(f)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "filesz":int(s["p_filesz"]),"memsz":int(s["p_memsz"]),
                "flags":int(s["p_flags"])} for s in ef.iter_segments()
               if s["p_type"]=="PT_LOAD"]
    dis=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    dis.detail=True
    targets=[]
    for slot in range(0,0xB0,8):
        x=static_va_read(blob,loads,STATIC_VTABLE+slot,8)
        if x is None:raise ValueError("vtable source outside ELF")
        va=int.from_bytes(x,"little")
        if not va:continue
        if not any((s["flags"]&1) and s["va"]<=va< s["va"]+s["filesz"] for s in loads):
            continue
        raw=static_va_read(blob,loads,va,0x100)
        if raw is None:continue
        insns=list(dis.disasm(raw,va))
        if not insns:continue
        first=insns[0]
        candidate={"slot_offset":hex(slot),"static_file_function_va":hex(va),
                   "opcode_first":first.bytes.hex(),"first_mnemonic":first.mnemonic,
                   "is_ret_only_entry":first.mnemonic=="ret",
                   "source_window_sha256":sha(raw),
                   "window_classification":summarize_instructions(insns),
                   "instruction_preview":[{"va":hex(y.address),"mnemonic":y.mnemonic,"operands":y.op_str,
                                           "raw":y.bytes.hex()} for y in insns[:30]]}
        targets.append(candidate)
    blank=next((t for t in targets if t["slot_offset"]=="0x18"),None)
    if not blank or not blank["is_ret_only_entry"] or int(blank["static_file_function_va"],16)!=FUNCTION:
        raise ValueError("R22 known null-operation slot not validated")
    meaningful=[t for t in targets if not t["is_ret_only_entry"]]
    # Actual runtime evidence must be added by an operator, not fabricated.
    evidence={"schema":"acnh303-r23-read-only-runtime-blr-capture-template-v1",
        "status":"NOT_CAPTURED_TEMPLATE_ONLY",
        "game_version":"3.0.3",
        "elf_sha256":ELF_SHA,
        "fields_required":["runtime_module_base","rva_callsite","x22","x8_before_blr",
          "memory_global_0x4ab2238","memory_at_x22","memory_vtable_slot_0x18",
          "actual_pc_after_blr","resource_type","loaded_file_path","call_stack_hash"],
        "verification_rules":["record real switch/emu environment and BuildID",
          "do not execute memory writes or bypass integrity checks",
          "confirm actual PC after BLR matches current x8, accounting for ASLR module slide",
          "correlate input asset bytes with caller; never infer AMTA/ELF owner from vtable position alone"],
        "records":[]}
    return {"schema":"acnh303-r23-native-vtable-active-slot-triage-v1",
       "original_elf_sha256":sha(blob),"static_vtable":hex(STATIC_VTABLE),
       "source_slot_count":len(targets),"excluded_ret_only_slots":[t["slot_offset"] for t in targets if t["is_ret_only_entry"]],
       "nonret_executable_slots_count":len(meaningful),
       "nonret_executable_slots":meaningful,
       "runtime_capture":evidence,
       "verification_state":"STATIC_NONRET_SLOT_TRIAGE_NO_RESOURCE_LOADER_OWNER_OR_LIVE_CAPTURE",
       "limits":"Executable slot+LDR/BL candidate is not necessarily a resource loader; slot addresses are file-backed initial values. Runtime BLR PC and object factory/asset ownership remain unverified."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r23_native_loader/nonret_slot_triage.json"))
    a=p.parse_args()
    d=inspect(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf8")
    print("R23_NATIVE_SLOTS",d["source_slot_count"],"nonret",d["nonret_executable_slots_count"],"excluded",d["excluded_ret_only_slots"])
if __name__=="__main__":main()
