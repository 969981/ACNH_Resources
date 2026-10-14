#!/usr/bin/env python3
"""Original ELF R22: 0x5BD3A4 disassembly, exact B/BL callers, file vtable slots.

Static-file value != live BLR target. Object init and semantic owner remain
unverified absent version-matched read-only real Switch trace.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round18_native_elf_probe import NCA
from acnh303_round21_global_initializer import ELF_SHA,TARGET as GLOBAL

FUNCTION=0x5bd3a4
STATIC_OBJECT=0x4b4b980
STATIC_VTABLE=0x47f9770

def sha(b):return hashlib.sha256(b).hexdigest()
def branch_target(pc,opcode):
    major=(opcode>>26)&0x3f
    if major not in (0b000101,0b100101):return None
    rel=opcode&0x3ffffff
    if rel&(1<<25):rel-=1<<26
    return pc+rel*4

def static_va_read(blob,loads,va,sz):
    matches=[s for s in loads if s["va"]<=va and va+sz<=s["va"]+s["memsz"]]
    if not matches:return None
    s=matches[0]
    delta=va-s["va"]
    if delta+sz>s["filesz"]:return None
    return blob[s["off"]+delta:s["off"]+delta+sz]

def inspect(root):
    path=root/NCA/"0/ACNH3.0.3.elf"
    data=path.read_bytes()
    if sha(data)!=ELF_SHA:raise ValueError("not ACNH3.0.3.elf R21 source")
    prior=json.loads((root/"derived/3.0.3/r21_native_global/global_4ab2238.json").read_text())
    if prior["elf_sha256"]!=sha(data):raise ValueError("R21 source drift")
    with path.open("rb") as f:
        elf=ELFFile(f)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "filesz":int(s["p_filesz"]),"memsz":int(s["p_memsz"]),
                "flags":int(s["p_flags"])} for s in elf.iter_segments()
               if s["p_type"]=="PT_LOAD"]
    u64=lambda va:struct.unpack("<Q",static_va_read(data,loads,va,8))[0]
    if u64(GLOBAL)!=STATIC_OBJECT or u64(STATIC_OBJECT)!=STATIC_VTABLE or u64(STATIC_VTABLE+0x18)!=FUNCTION:
        raise ValueError("previous static candidate chain not reproducible")
    if not any(s["flags"]&1 and s["va"]<=FUNCTION<s["va"]+s["filesz"] for s in loads):
        raise ValueError("function candidate is not executable mapped data")
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    cs.detail=True
    fstart=FUNCTION-0x90; fend=FUNCTION+0x220
    opcodes=static_va_read(data,loads,fstart,fend-fstart)
    if opcodes is None:raise ValueError("executable function window not mapped")
    code=[{"va":hex(x.address),"mnemonic":x.mnemonic,"op_str":x.op_str,
           "opcode":x.bytes.hex()} for x in cs.disasm(opcodes,fstart)]
    # Every direct B or BL in executable segments; exact target only, limit examples.
    direct_counts=Counter()
    callers=[]
    for s in loads:
        if not s["flags"]&1:continue
        off=s["off"];va=s["va"];count=s["filesz"]//4
        for k in range(count):
            pc=va+4*k;op=struct.unpack_from("<I",data,off+4*k)[0]
            dest=branch_target(pc,op)
            if dest==FUNCTION:
                kind="BL" if (op>>26)&0x3f==0b100101 else "B"
                direct_counts[kind]+=1
                if len(callers)<200:
                    callers.append({"caller_va":hex(pc),"opcode":f"{op:08x}","kind":kind})
    slots=[]
    for off in range(0,0xB0,8):
        ptr=u64(STATIC_VTABLE+off)
        slots.append({"slot_offset":hex(off),"stored_u64":hex(ptr),
                      "stored_bytes_sha256":sha(static_va_read(data,loads,STATIC_VTABLE+off,8)),
                      "points_to_executable_ptload":ptr!=0 and any((s["flags"]&1) and s["va"]<=ptr<s["va"]+s["filesz"] for s in loads)})
    # Static pointer occurrence counts restricted to non-executable file-backed PT_LOAD
    search_values=[GLOBAL,STATIC_OBJECT,STATIC_VTABLE,FUNCTION]
    references={hex(x):{"hits":0,"example_file_va":[]} for x in search_values}
    for s in loads:
        if s["flags"]&1:continue
        region=data[s["off"]:s["off"]+s["filesz"]]
        for ptr in search_values:
            value=ptr.to_bytes(8,"little")
            i=0
            while True:
                j=region.find(value,i)
                if j<0:break
                row=references[hex(ptr)]
                row["hits"]+=1
                if len(row["example_file_va"])<32:
                    row["example_file_va"].append(hex(s["va"]+j))
                i=j+1
    return {"schema":"acnh303-r22-static-slot-callee-investigation-v1",
            "original_elf_sha256":sha(data),"global":hex(GLOBAL),
            "static_object":hex(STATIC_OBJECT),"static_vtable":hex(STATIC_VTABLE),
            "static_file_slot_0x18":hex(FUNCTION),
            "static_vtable_slots":slots,
            "candidate_function_window_sha256":sha(opcodes),
            "candidate_function_window":code,
            "incoming_direct_call_totals":dict(direct_counts),
            "incoming_direct_calls_examples":callers,
            "file_backed_qword_references":references,
            "r21_exact_global_accesses":prior["exact_global_mem_access_counts"],
            "verification_state":"STATIC_FILE_SLOT_DISASSEMBLED_NO_LIVE_TARGET_OR_OWNER",
            "limitations":"Actual 0x5BD3A4 code and static data table relationships verified, but memory can be relocated or initialized differently. BLR x8 runtime target, receiver object and any BARS/AMTA/EventFlow ownership are not proven; function boundaries are disassembly window only."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r22_native_callee/static_5bd3a4.json"))
    a=p.parse_args()
    d=inspect(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf-8")
    print("R22_NATIVE_CALLEE",d["static_file_slot_0x18"],"incoming",d["incoming_direct_call_totals"],
          "vtable slots exec",sum(bool(s["points_to_executable_ptload"]) for s in d["static_vtable_slots"]),
          "static refs", {k:v["hits"] for k,v in d["file_backed_qword_references"].items()})
if __name__=="__main__":main()
