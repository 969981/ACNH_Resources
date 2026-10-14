#!/usr/bin/env python3
"""ACNH 3.0.3 R13 object provenance: actual ARM64 writes, slot references and calls.

Read-only static evidence. Register writers found in a *linear window* are
not a path-sensitive SSA result; BLR targets cannot be inferred from names.
"""
from __future__ import annotations
import argparse
import collections
import hashlib
import json
import struct
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf, get_bytes_va, adrp_target, bl_target
from acnh303_round12_native_downstream import Cs, CS_ARCH_ARM64, CS_MODE_ARM, SHA, SIZE, global_refs

SLOTS = {
    "bars_global_x22_source": 0x4AB2238,
    "bars_allocator_global": 0x4AB3350,
    "eventflow_action_0": 0x4FB4C08,
    "eventflow_action_1": 0x4FB4C18,
    "eventflow_action_2": 0x4FB4C28,
    "eventflow_query_0": 0x4FB8DD8,
    "eventflow_query_1": 0x4FB8DE8,
}
REGIONS = {
    "bars_entry_prelude": (0x3ACA000, 0x3ACA350),
    "bars_caller_291fb8c": (0x291fb4c, 0x291fbcc),
    "bars_caller_3b4c61c": (0x3b4c5dc, 0x3b4c65c),
    "bars_success_x20_x22": (0x3ACA470, 0x3ACA598),
    "bars_header_member_table_store": (0x3ACA300, 0x3ACA380),
    "action_receiver": (0xFF6300, 0xFF6540),
    "query_receiver": (0x10846C0, 0x1084840),
}
REGS = {"x3","w3","x19","w19","x20","w20","x21","w21","x22","w22",
        "x23","w23","x24","w24","x8","w8","x0","w0"}

def register_window(blob, segments, start, end):
    if Cs is None:
        raise RuntimeError("Capstone 5 required")
    if start % 4 or end % 4 or end-start > 0x1800 or end <= start:
        raise ValueError("invalid bounded ARM64 window")
    raw = get_bytes_va(blob,segments,start,end-start)
    if raw is None:
        raise ValueError("range not in file-backed PT_LOAD")
    cs = Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    cs.detail=True
    rows=[]
    for ins in cs.disasm(raw,start):
        try:
            rd,wr=ins.regs_access()
            reads=sorted(REGS.intersection(ins.reg_name(x) for x in rd))
            writes=sorted(REGS.intersection(ins.reg_name(x) for x in wr))
        except Exception:
            reads=[];writes=[]
        rows.append({"pc":hex(ins.address),"bytes":ins.bytes.hex(),
                     "op":ins.mnemonic,"args":ins.op_str,
                     "reads":reads,"writes":writes})
    return rows

def slot_references(blob,segments,targets,cap=100):
    """ADRP + immediate unsigned LDR/STR; fixed VA, not resolved game pointers."""
    pages={v&~4095 for v in targets.values()}
    matches=collections.defaultdict(list)
    for seg in segments:
        if not seg["flags"]&1:
            continue
        data=memoryview(blob)[seg["file_offset"]:seg["file_offset"]+seg["filesz"]]
        for off in range(0,len(data)-4,4):
            w=struct.unpack_from("<I",data,off)[0]
            if (w&0x9F000000)!=0x90000000:
                continue
            pc=seg["vaddr"]+off
            page=adrp_target(w,pc)
            if page not in pages:
                continue
            base_reg=w&31
            for step in range(1,5):
                p=off+4*step
                if p+4>len(data):
                    break
                q=struct.unpack_from("<I",data,p)[0]
                if (q&0xFC000000) in (0x14000000,0x94000000) or q==0xD65F03C0:
                    break
                tag=q&0xFFC00000
                width=8 if tag in (0xF9400000,0xF9000000) else 4 if tag in (0xB9400000,0xB9000000) else 0
                if width and ((q>>5)&31)==base_reg:
                    addr=page+((q>>10)&0xFFF)*width
                    for name,target in targets.items():
                        if addr==target and len(matches[name])<cap:
                            matches[name].append({
                                "adrp_at":hex(pc),"access_at":hex(pc+4*step),
                                "access":"read" if tag in (0xF9400000,0xB9400000) else "write",
                                "size_bytes":width,"reg":"x"+str(q&31) if width==8 else "w"+str(q&31),
                                "base":"x"+str(base_reg),"slot_va":hex(addr),
                                "intervening_instruction_count":step-1,
                                "caveat":"Nearby ADRP and load/store; intervening instructions may clobber the base"})
                # Strong blocker: register used for ADRP base definitely overwritten by MOVZ, ADRP or ADD immediate
                if (q&0x9F000000)==0x90000000 and (q&31)==base_reg:
                    break
                if (q&0xFF000000)==0x91000000 and (q&31)==base_reg:
                    break
    return {k:matches[k] for k in targets}

def direct_calls_near(blob,segments,low,high,cap=120):
    """AArch64 BL immediate targets near target function prelude, whole executable pass."""
    hits=[]
    for seg in segments:
        if not seg["flags"]&1:
            continue
        data=memoryview(blob)[seg["file_offset"]:seg["file_offset"]+seg["filesz"]]
        for off in range(0,len(data)-3,4):
            word=struct.unpack_from("<I",data,off)[0]
            if (word&0xFC000000)!=0x94000000:
                continue
            pc=seg["vaddr"]+off
            target=bl_target(word,pc)
            if target is not None and low<=target<high and len(hits)<cap:
                hits.append({"call_at":hex(pc),"target":hex(target)})
    return hits

def file_backing(blob,segments,va):
    d=get_bytes_va(blob,segments,va,8)
    v=int.from_bytes(d,"little") if d is not None else None
    child=get_bytes_va(blob,segments,v,32) if v is not None and v != 0 else None
    return {"file_backed":d is not None,
            "raw_qword_hex":d.hex() if d is not None else None,
            "candidate_va_from_qword":hex(v) if v is not None else None,
            "candidate_target_file_backed":child is not None,
            "candidate_target_first_32_bytes_hex":child.hex() if child is not None else None,
            "note":"Read-only PT_LOAD file bytes only. Values need runtime relocation, owner and type verification."}

def bars_member_table_proof(rows):
    """Verify a linked instruction sequence, not dynamic pointer ownership."""
    index={r["pc"]:r for r in rows}
    expected=[
      ("0x3aca300","mov","x8, x19"),
      ("0x3aca320","adrp","x10, #0x4a7a000"),
      ("0x3aca324","add","x10, x10, #0xd40"),
      ("0x3aca35c","stp","x10, x22, [x19]"),
      ("0x3aca318","str","xzr, [x8, #0x10]!"),
      ("0x3aca36c","ldr","w9, [x22, #0xc]"),
      ("0x3aca370","add","x9, x22, x9, lsl #2"),
      ("0x3aca374","add","x9, x9, #0x10"),
      ("0x3aca378","str","x9, [x8]"),
    ]
    evidence=[]
    for pc,op,args in expected:
        r=index.get(pc)
        if r is None or r["op"]!=op or r["args"]!=args:
            raise ValueError(f"BARS table evidence mismatch at {pc}: {r}")
        evidence.append({"pc":pc,"opcode_hex":r["bytes"],"instruction":op+" "+args})
    intervening=[r for r in rows if 0x3ACA318 < int(r["pc"],16)<0x3ACA378
                   and ("x8" in r["writes"] or "w8" in r["writes"])]
    if intervening:
        raise ValueError(f"X8 is clobbered before the table store: {intervening}")
    return {
       "calculation":"X22 + 0x10 + 4 * u32(X22+0x0C)",
       "object_field":"X19+0x10 (because post-index STR makes X8=X19+0x10)",
       "native_instruction_evidence":evidence,
       "intervening_x8_clobbers":0,
       "semantics":"BARS header member-offset table location stored in parser object",
       "unknown":"Which function later reads the offset pairs; AMTA header consumers remain unproven"}

def candidate_dispatch_table(blob,segments,va=0x4A7AD40,entries=16):
    """Preserve ELF-backed qwords and in-file executable targets, never runtime types."""
    raw=get_bytes_va(blob,segments,va,8*entries)
    if raw is None:
        return {"va":hex(va),"file_backed":False,"entries":[]}
    result=[]
    for n in range(entries):
        target=struct.unpack_from("<Q",raw,n*8)[0]
        code_seg=next((s for s in segments if s["flags"]&1 and
                  s["vaddr"]<=target and target+24<=s["vaddr"]+s["filesz"]),None)
        item={"index":n,"table_entry_va":hex(va+8*n),
              "qword_hex":hex(target),"executable_target_in_elf":code_seg is not None}
        if code_seg is not None and target%4==0:
            item["target_first_24_bytes_disasm"]=register_window(blob,segments,target,target+24)
        result.append(item)
    return {"va":hex(va),"file_backed":True,"entries":result,
            "note":"Initial ELF address-table candidate stored at parser X19+0; dispatch semantics and runtime relocation not established"}

def analyze(blob):
    if len(blob)!=SIZE or hashlib.sha256(blob).hexdigest()!=SHA:
        raise ValueError("ACNH 3.0.3 79MB ELF SHA mismatch")
    segments=parse_elf(blob)
    windows={k:register_window(blob,segments,*v) for k,v in REGIONS.items()}
    slots=slot_references(blob,segments,SLOTS)
    event_addresses=global_refs(blob,segments,{k:v for k,v in SLOTS.items() if k.startswith("eventflow_")})
    return {
        "schema":"acnh303-r13-native-object-provenance-v1",
        "elf_sha256":SHA,"elf_size":len(blob),
        "register_windows":windows,
        "bars_member_table_pointer_chain":bars_member_table_proof(windows["bars_header_member_table_store"]),
        "bars_object_header_dispatch_table_candidate":candidate_dispatch_table(blob,segments),
        "bars_caller_register_arguments":{k:[r for r in rows if set(r["writes"]) & {"x0","w0","x3","w3"}]
             for k,rows in windows.items() if k.startswith("bars_caller_")},
        "candidate_register_writes":{
            k:[r for r in rows if set(r["writes"]) & {"x19","x20","x21","x22","x23","x24"}]
            for k,rows in windows.items()},
        "global_slots":{k:{"address":hex(v),"backing":file_backing(blob,segments,v),
                           "references":slots[k],
                           "stored_reference_cap":100,
                           "cap_may_have_been_reached":len(slots[k])>=100,
                           "eventflow_adrp_add_references":event_addresses.get(k,[])} for k,v in SLOTS.items()},
        "p0_bars_global_load_anchor":register_window(blob,segments,0x3ACA490,0x3ACA49C),
        "direct_bl_to_bars_prelude":direct_calls_near(blob,segments,0x3ACA000,0x3ACA350),
        "limits":[
            "Whole-ELF BL scans find direct call sites only, not BLR indirect calls.",
            "All register writers are raw linear-window evidence, NOT SSA/CFG-reachable definitions.",
            "ADRP+load/store crossrefs are syntactic candidates; intervening base-register clobbers not fully modeled.",
            "Per-slot load/store reference lists are capped; no absent-writes claim is valid if capped.",
            "ADRP+ADD record address formation is not a dereference and is listed separately.",
            "ELF file-backed bytes never prove runtime object identity or vtable function destination.",
            "No BARS member offset consumer, AMTA v5 playback, or EventFlow dispatch effect confirmed."]}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    o=analyze(a.elf.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(o,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf-8")
    print("R13",o["elf_sha256"],"slots",{k:len(v["references"]) for k,v in o["global_slots"].items()},
          "BL calls",len(o["direct_bl_to_bars_prelude"]),flush=True)
if __name__=="__main__":
    main()
