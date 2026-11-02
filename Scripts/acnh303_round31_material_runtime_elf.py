#!/usr/bin/env python3
"""R31 original-ELF read-only shader material-to-variation candidate callsite audit.

Proves exact B/BL source PCs, opcodes and literal bytes; does not infer a
runtime Material->Variation relationship from naming coincidence.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from elftools.elf.elffile import ELFFile
from acnh303_round25_bnsh_callers import ELF_PATH,SHA,mapped_read
from acnh303_round26_three_callees import function_cfg

TARGETS={
    "bnsh_object_initializer":0x285d10,
    "bnsh_initializer_impl":0x285d30,
    "bnsh_first_block_name_consumer":0x286160,
    "resource_dictionary_resolver":0x24e3c0,
    "allocator_thunk":0x267b14,
}
LITERALS={
    "shader_tex_pattern":0x3fcd458,
    "vertex_uniform_name":0x3fed090,
}
OUT="derived/3.0.3/r31_runtime_material/elf_static_shader_callgraph.json"

def signextend(v,bits):
    return v-(1<<bits) if v&(1<<(bits-1)) else v

def direct_branch_target(op,pc):
    kind=(op & 0xfc000000)
    if kind==0x94000000:return "BL",pc+signextend((op & 0x03ffffff)<<2,28)
    if kind==0x14000000:return "B",pc+signextend((op & 0x03ffffff)<<2,28)
    return None,None

def mapped_segments(elf):
    return [{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
            "filesz":int(s["p_filesz"]),"flags":int(s["p_flags"])}
        for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]

def inspect(root):
    file=root/ELF_PATH
    raw=file.read_bytes()
    observed=hashlib.sha256(raw).hexdigest()
    if observed!=SHA:raise ValueError("original ELF SHA mismatch")
    with file.open("rb") as fh:
        elf=ELFFile(fh);loads=mapped_segments(elf)
    wanted=set(TARGETS.values())
    hits={name:[] for name in TARGETS}
    counts=Counter()
    inv={v:k for k,v in TARGETS.items()}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    for seg in loads:
        if not(seg["flags"]&1):continue
        base,size,va=seg["off"],seg["filesz"],seg["va"]
        if size<4:continue
        for step in range(0,size-3,4):
            op=struct.unpack_from("<I",raw,base+step)[0]
            # Filter by B/BL mask before computing any target.
            if (op&0xfc000000) not in (0x14000000,0x94000000):continue
            kind,target=direct_branch_target(op,va+step)
            if target not in wanted:continue
            label=inv[target];counts[label]+=1
            sites=hits[label]
            if len(sites)>=80:continue
            pc=va+step
            before=pc-0x20 if pc>=0x20 else pc
            view=mapped_read(raw,loads,before,0x60)
            snippet=[]
            if view is not None:
                for i in cs.disasm(view,before):
                    if len(snippet)>=24:break
                    snippet.append({"pc":hex(i.address),"opcode":i.bytes.hex(),
                                    "mnemonic":i.mnemonic,"op_str":i.op_str})
            sites.append({"pc":hex(pc),"kind":kind,"opcode_le":struct.pack("<I",op).hex(),
               "exact_target":hex(target),"surrounding_bounded_instructions":snippet})
    literals={}
    for label,addr in LITERALS.items():
        view=mapped_read(raw,loads,addr,128)
        if view is None:raise ValueError("original ELF literal not mapped")
        value=view.split(b"\0",1)[0]
        if not value or not all(32<=x<127 for x in value):
            raise ValueError("original shader literal is not valid ASCII")
        literals[label]={"VA":hex(addr),"exact_text":value.decode("ascii"),
            "first128_sha256":hashlib.sha256(view).hexdigest()}
    # Previous R26 showed object initializer +0x20 is a branch into the body.
    # A CFG follows only bounded *reachable* blocks; not a full semantic
    # callgraph nor a complete vtable/BLR reference set.
    bounded={}
    for label in ("bnsh_object_initializer","bnsh_first_block_name_consumer",
                  "resource_dictionary_resolver"):
        try:
            c=function_cfg(raw,loads,TARGETS[label],{})
            bounded[label]={"reachable_instruction_count":c.get("reachable_instruction_count",0),
              "direct_calls":c.get("direct_calls",[])[:60],
              "indirect_calls":c.get("indirect_calls",[])[:60],
              "bounded_not_proven_function_extent":True}
        except Exception as exc:
            bounded[label]={"error":str(exc),"bounded_not_proven_function_extent":True}
    return {"schema":"acnh303-r31-original-elf-shader-static-runtime-boundary-v1",
      "original_elf_sha256":observed,
      "target_addresses":{k:hex(v) for k,v in TARGETS.items()},
      "exact_direct_B_BL_callsite_counts":dict(sorted(counts.items())),
      "bounded_callsite_examples":hits,
      "source_verified_shader_literals":literals,
      "bounded_candidate_cfg":bounded,
      "runtime_material_variation_gpu_slot_ownership":"UNPROVEN",
      "evidence_boundary":"Exact original ELF direct B/BL instructions, literal references and bounded CFG. BLR/vtables, Material ownership, actual Variation selection and GPU descriptor/bind slots cannot be established without runtime instance tracing."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path(OUT))
    a=p.parse_args();data=inspect(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(data,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R31_ORIGINAL_ELF_CALLS",data["exact_direct_B_BL_callsite_counts"])
    print("R31_ELF_LITERALS",data["source_verified_shader_literals"])
    print("R31_RUNTIME_BOUNDARY",data["runtime_material_variation_gpu_slot_ownership"])
if __name__=="__main__":main()
