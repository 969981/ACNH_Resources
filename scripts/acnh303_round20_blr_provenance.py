#!/usr/bin/env python3
"""Auditable BLR register provenance, virtual slot and callsite candidates.

This is bounded intra-basic-block symbolic def-use over *real* ACNH 3.0.3
ELF AArch64 instructions, not concrete runtime vtable target recovery.
Only claim a concrete target if it is provably encoded by static instructions
and executable-segment checked; otherwise "unresolved".
"""
from __future__ import annotations
import argparse, hashlib, json, re, struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round18_native_elf_probe import NCA,TARGETS

REGISTER=re.compile(r"^(?:[wx](?:[0-9]|[12][0-9]|3[01])|sp)$")
MEM=re.compile(r"^\[([wx]\d+|sp)(?:,\s*#(0x[0-9a-f]+|-?0x[0-9a-f]+|-?\d+))?\]")
IMMEDIATE=re.compile(r"^#(0x[0-9a-f]+|-?0x[0-9a-f]+|-?\d+)$")
COND_PREFIX=("b.","cbz","cbnz","tbz","tbnz","ret","br","blr","bl","b")

def hexdigest(b):return hashlib.sha256(b).hexdigest()
def norm(r):
    return "x"+r[1:] if r.startswith("w") else r

def imm(s):
    m=IMMEDIATE.match(s)
    if not m:return None
    return int(m.group(1),0)

def trace(insns,stop_idx,reg,max_back=64):
    """Trace one register with uses always resolved before its writer.
    Stop on conditional/unconditional branches to avoid path fabrication.
    """
    checked=[]
    def prev(reg,k,depth):
        reg=norm(reg)
        if depth>12:return {"kind":"unresolved","register":reg,"reason":"max_provenance_depth"}
        start=max(0,k-max_back)
        for i in range(k-1,start-1,-1):
            cur=insns[i]
            name=cur.mnemonic
            if name.startswith(COND_PREFIX):
                return {"kind":"unresolved","register":reg,"reason":"control_flow_boundary","at":hex(cur.address)}
            parts=[x.strip() for x in cur.op_str.split(",",1)]
            if not parts or norm(parts[0])!=reg or not REGISTER.match(parts[0]):
                continue
            checked.append(hex(cur.address))
            other=parts[1].strip() if len(parts)>1 else ""
            if name in ("ldr","ldur","ldrsw","ldrb","ldrh","ldp"):
                mem=MEM.match(other)
                if mem:
                    off=int(mem.group(2),0) if mem.group(2) else 0
                    return {"kind":"mem_load","at":hex(cur.address),
                            "opcode":cur.bytes.hex(),"disp":off,
                            "base":prev(mem.group(1),i,depth+1),
                            "dest":reg}
            if name in ("mov","orr") and REGISTER.match(other):
                return {"kind":"reg_copy","at":hex(cur.address),
                        "from":prev(other,i,depth+1)}
            if name in ("adr","adrp"):
                v=imm(other)
                return {"kind":"pc_absolute_page" if name=="adrp" else "pc_absolute",
                        "at":hex(cur.address),"address":hex(v) if v is not None else None}
            if name in ("add","sub"):
                r=re.match(r"([wx]\d+|sp),\s*#(0x[0-9a-f]+|\d+)",other)
                if r:
                    off=int(r.group(2),0)*(1 if name=="add" else -1)
                    return {"kind":"add_const","at":hex(cur.address),"disp":off,
                            "base":prev(r.group(1),i,depth+1)}
            return {"kind":"unknown_writer","at":hex(cur.address),"opcode":cur.bytes.hex(),
                    "mnemonic":name,"operands":cur.op_str}
        return {"kind":"live_in_register","register":reg,"reason":"no_def_in_verified_basic_block"}
    value=prev(reg,stop_idx,0)
    return {"expression":value,"writer_sites":checked,"reg":reg}

def find_vtable_pattern(expr):
    # unwrap copies; load vtable pointer from object->vtable + slot
    x=expr
    while x.get("kind") in ("reg_copy",):x=x["from"]
    if x.get("kind")!="mem_load":return None
    slot=x["disp"]
    vt=x["base"]
    while vt.get("kind")=="reg_copy":vt=vt["from"]
    if vt.get("kind")!="mem_load":return None
    if vt["disp"] not in (0,8,16):
        return None
    return {"candidate_virtual_slot_bytes":slot,"object_to_vtable_offset":vt["disp"],
            "vtable_base_expression":vt["base"],
            "evidence":"two consecutive dereferences only; object identity and slot contents unknown"}

def inspect(root):
    path=root/NCA/"0/ACNH3.0.3.elf"
    blob=path.read_bytes()
    old=json.loads((root/"derived/3.0.3/r19_native_probe/elf_static_incoming_edges.json").read_text("utf-8"))
    if hexdigest(blob)!=old["original_elf_sha256"]:raise ValueError("ELF SHA differs from R19")
    with path.open("rb") as f:
        elf=ELFFile(f)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "length":int(s["p_filesz"]),"flags":int(s["p_flags"])}
               for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
    dis=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    dis.detail=True
    windows=[]
    for label,addrstr in TARGETS.items():
        pc=int(addrstr,16)
        s=next((x for x in loads if x["flags"]&1 and x["va"]<=pc<x["va"]+x["length"]),None)
        if not s:raise ValueError(f"missing mapped executable segment for {label}")
        # A bounded disassembly; source instructions may include a function boundary.
        begin=max(s["va"],pc-0x180)
        end=min(s["va"]+s["length"],pc+0x240)
        offset=s["off"]+begin-s["va"]
        code=blob[offset:offset+end-begin]
        instr=list(dis.disasm(code,begin))
        targets=[]
        for i,ins in enumerate(instr):
            if ins.mnemonic not in ("blr","br"):
                continue
            if not REGISTER.match(ins.op_str.strip()):
                continue
            prov=trace(instr,i,ins.op_str.strip())
            slot=find_vtable_pattern(prov["expression"])
            targets.append({"callsite":hex(ins.address),"opcode":ins.bytes.hex(),
                            "mnemonic":ins.mnemonic,"target_reg":ins.op_str,
                            "register_provenance":prov,
                            "candidate_vtable_dispatch":slot,
                            "resolved_static_target":None,
                            "runtime_target_proven":False})
        windows.append({"label":label,"candidate_pc":hex(pc),
                        "window_va_start":hex(begin),"window_va_end":hex(end),
                        "window_sha256":hexdigest(code),
                        "insns_decoded":len(instr),
                        "branch_register_calls":targets})
    return {"schema":"acnh303-r20-arm64-blr-defuse-v1",
            "elf_original_sha256":hexdigest(blob),"window_results":windows,
            "verification_state":"BOUNDED_STATIC_DEF_USE_TARGETS_UNRESOLVED",
            "limits":"Def-use within bounded straight-line basic blocks only. An apparent [object]->[vtable+slot] does not prove concrete vtable pointer, receiver type, AMTA/EventFlow identity or actual runtime call target. Branch barriers explicitly terminate inference."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r20_native_blr/blr_provenance.json"))
    a=p.parse_args()
    r=inspect(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(r,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R20 BLR STATIC",r["elf_original_sha256"],
          {e["label"]:len(e["branch_register_calls"]) for e in r["window_results"]})

if __name__=="__main__":main()
