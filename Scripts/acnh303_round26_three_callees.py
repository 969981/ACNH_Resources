#!/usr/bin/env python3
"""R26 source-grounded, bounded AArch64 function and callsite investigation.

Focus ONLY: 0x267B14 allocator candidate; 0x25001C BNSH header init;
0x285D10 BNSH-backed object consumer. Read-only, source SHA locked.
No pseudocode-generated call or function ownership asserted without real bytes.
"""
import argparse
import hashlib
import json
import re
import struct
from collections import deque
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from elftools.elf.elffile import ELFFile
from acnh303_round25_bnsh_callers import (ELF_PATH, SHA, R24,
    adrp_page,mapped_read,plt_jump_target,direct_target)

TARGETS={
 "allocation_candidate":0x267B14,
 "header_initialize_candidate":0x25001C,
 "resource_object_consumer_candidate":0x285D10,
}
ANCHORS={
 "allocation_candidate":[0x2656F0,0x265794],
 "header_initialize_candidate":[0x25D1D0],
 "resource_object_consumer_candidate":[0x265710],
}
R25="derived/3.0.3/r25_native_bnsh/native_bnsh_callers.json"
OUT="derived/3.0.3/r26_native_three_callees/r26_function_and_callsite_audit.json"
MAX_BYTES=0x1000
MAX_INST=1000
MAX_BLOCKS=180

def instructions(blob,loads,va,size):
    raw=mapped_read(blob,loads,va,size)
    if raw is None:return [],None
    engine=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    out=list(engine.disasm(raw,va))
    return out,hashlib.sha256(raw).hexdigest()

def immtarget(instr):
    if "#" not in instr.op_str:return None
    matches=re.findall(r'#(0x[0-9a-fA-F]+|[0-9]+)',instr.op_str)
    return int(matches[-1],0) if matches else None

def annotation(instr,blob,loads,relocs):
    pc=instr.address
    d={"pc":hex(pc),"opcode":instr.bytes.hex(),"mnemonic":instr.mnemonic,"operands":instr.op_str}
    if instr.mnemonic in ("bl","b"):
        dst=immtarget(instr)
        if dst is not None:
            d["destination"]=hex(dst)
            if instr.mnemonic=="bl":
                plt=plt_jump_target(blob,loads,dst,relocs)
                if plt:d["imported_callee"]=plt["symbol"]
    return d

def function_cfg(blob,loads,entry,relocs):
    """Conservative forward basic blocks within 0x1000; NOT a definite function size."""
    upper=entry+MAX_BYTES
    pending=deque([entry]);visited=set()
    blocks=[];whole={}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    while pending and len(blocks)<MAX_BLOCKS and len(whole)<MAX_INST:
        start=pending.popleft()
        if start in visited or start<entry or start>=upper:continue
        visited.add(start)
        raw=mapped_read(blob,loads,start,min(0x300,upper-start))
        if raw is None:continue
        inst=list(cs.disasm(raw,start))
        current=[];edges=[];end_reason="window_limit"
        for op in inst:
            if op.address in whole and op.address!=start:
                end_reason="previously_seen_code";break
            rec=annotation(op,blob,loads,relocs)
            whole[op.address]=rec
            current.append(rec)
            pc=op.address
            n=op.mnemonic
            if n in ("ret","retaa","retab"):
                end_reason="return";break
            if n in ("br","braa","brab"):
                end_reason="indirect_branch";break
            if n in ("brk","udf","hlt"):
                end_reason="trap";break
            # BL is a call and normally returns; BLR call is unresolved.
            if n=="b" or n.startswith("b.") or n in ("cbz","cbnz","tbz","tbnz"):
                target=immtarget(op)
                if target is not None:
                    edges.append({"kind":n,"from":hex(pc),"to":hex(target),
                                  "local":entry<=target<upper})
                    if entry<=target<upper:pending.append(target)
                if n!="b":
                    nextpc=pc+4
                    if entry<=nextpc<upper:pending.append(nextpc)
                    end_reason="conditional_branch" if n!="b" else "unconditional_branch"
                else:end_reason="unconditional_branch"
                break
            if len(whole)>=MAX_INST:
                end_reason="max_inst";break
        if current:
            blocks.append({"entry":hex(start),"last":current[-1]["pc"],
                           "instructions":current,"edges":edges,"end_reason":end_reason})
    sites=sorted(whole.values(),key=lambda r:int(r["pc"],16))
    direct_calls=[x for x in sites if x["mnemonic"]=="bl"]
    indirect_calls=[x for x in sites if x["mnemonic"]=="blr"]
    ret_sites=[x["pc"] for x in sites if x["mnemonic"].startswith("ret")]
    memory_reads=[x for x in sites if x["mnemonic"] in ("ldr","ldrb","ldrh","ldrsw","ldur","ldp")]
    memory_writes=[x for x in sites if x["mnemonic"] in ("str","strb","strh","stur","stp")]
    report={"entry":hex(entry),"scan_max_end":hex(upper),"reachable_instruction_count":len(sites),
        "reachable_block_count":len(blocks),"queue_exhausted":len(pending)==0,
        "all_instructions":sites[:MAX_INST],
        "basic_block_boundaries":[{k:v for k,v in b.items() if k!="instructions"} for b in blocks],
        "direct_calls":direct_calls,"indirect_calls":indirect_calls,"return_sites":ret_sites,
        "memory_load_count":len(memory_reads),"memory_store_count":len(memory_writes),
        "first_memory_loads":memory_reads[:28],"first_memory_stores":memory_writes[:28],
        "bounded_not_proven_function_extent":True}
    snippet=mapped_read(blob,loads,entry,MAX_BYTES)
    if snippet:report["contiguous_window_sha256"]=hashlib.sha256(snippet).hexdigest()
    return report

def find_inbound(blob,loads,targets):
    """Scan original executable PT_LOAD for exact AArch64 B/BL encoding.
    All hits are static branches; tails and unreachable bytes may be present."""
    hits={hex(k):[] for k in targets}
    sums={hex(k):0 for k in targets}
    for p in loads:
        if not (p["flags"]&1):continue
        start=p["off"];size=p["filesz"]
        end=start+size-size%4
        for at in range(start,end,4):
            op=struct.unpack_from("<I",blob,at)[0]
            if op&0xfc000000 not in (0x14000000,0x94000000):continue
            pc=p["va"]+at-start
            dest=direct_target(pc,op)
            if dest not in targets:continue
            key=hex(dest);sums[key]+=1
            if len(hits[key])>=96:continue
            frompc=pc
            vicinity=mapped_read(blob,loads,frompc-0x30,0x60)
            inst=[]
            if vicinity:
                cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
                inst=[{"pc":hex(i.address),"opcode":i.bytes.hex(),
                       "asm":i.mnemonic+" "+i.op_str}
                      for i in cs.disasm(vicinity,frompc-0x30)]
            hits[key].append({"site":hex(pc),"opcode":f"{op:08x}",
                "kind":"BL" if op&0xfc000000==0x94000000 else "B",
                "caller_window":inst,
                "raw_sha256_first_96":hashlib.sha256(vicinity).hexdigest() if vicinity else None})
    return hits,sums

def analyze(root):
    elfpath=root/ELF_PATH
    blob=elfpath.read_bytes()
    if hashlib.sha256(blob).hexdigest()!=SHA:raise ValueError("original ELF SHA mismatch")
    r25bytes=(root/R25).read_bytes()
    r25=json.loads(r25bytes)
    if r25["original_elf_sha256"]!=SHA:raise ValueError("R25 original ELF drift")
    r24bytes=(root/R24).read_bytes()
    if hashlib.sha256(r24bytes).hexdigest()!=r25["r24_report_sha256"]:
        raise ValueError("R24/R25 provenance mismatch")
    with elfpath.open("rb") as stream:
        elf=ELFFile(stream)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "filesz":int(s["p_filesz"]),"flags":int(s["p_flags"])}
               for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
        reloc={}
        for sec in elf.iter_sections():
            if sec["sh_type"] not in ("SHT_RELA","SHT_REL"):continue
            linked=elf.get_section(int(sec["sh_link"]))
            for row in sec.iter_relocations():
                index=int(row["r_info_sym"])
                if index and linked:
                    sym=linked.get_symbol(index).name
                    if sym:reloc[int(row["r_offset"])]=sym
    # Evidence gate: all R25 callsite→target records must still be present.
    for label,entry in TARGETS.items():
        for pc in ANCHORS[label]:
            raw=mapped_read(blob,loads,pc,4)
            if raw is None or direct_target(pc,int.from_bytes(raw,"little"))!=entry:
                raise ValueError(f"R25 callsite mismatch {pc:#x}->{entry:#x}")
    callee={name:function_cfg(blob,loads,entry,reloc) for name,entry in TARGETS.items()}
    hits,totals=find_inbound(blob,loads,set(TARGETS.values()))
    # Keep raw callsite source registrations and imports, never infer malloc/object ownership.
    return {"schema":"acnh303-r26-three-callee-source-audit-v1",
      "original_elf_sha256":SHA,
      "r25_report_sha256":hashlib.sha256(r25bytes).hexdigest(),
      "r24_report_sha256":hashlib.sha256(r24bytes).hexdigest(),
      "targets":TARGETS,"confirmed_r25_anchor_calls":{k:[hex(x) for x in v] for k,v in ANCHORS.items()},
      "callee_bounded_cfg":callee,"inbound_static_direct_branch_samples":hits,
      "inbound_static_direct_branch_totals":totals,
      "verification_state":"REAL_ELF_BOUNDED_CFG_AND_CALLERS_TRACED_CONCRETE_ALLOCATOR_CONSUMER_UNPROVEN",
      "limitations":"This is a bounded, forward-reachable static CFG and exact direct-branch scan; not whole-program decompilation or live runtime. The CFG window can contain tail calls or more than one function and cannot establish object class without receiver/dataflow proof."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path(OUT))
    a=p.parse_args()
    d=analyze(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R26",[(key,v["reachable_instruction_count"],len(v["direct_calls"]),
        v["reachable_block_count"]) for key,v in d["callee_bounded_cfg"].items()])

if __name__=="__main__":main()
