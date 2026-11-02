#!/usr/bin/env python3
"""Read-only real AArch64 static incoming branch scan, NOT runtime ownership.

Cross-check R18 ELF hash and VA maps, inspect all PT_LOAD executable bytes
for direct BL/B instructions with targets around previously hypothesised RVAs.
Indirect BLR targets cannot be inferred from this scan and remain unknown.
"""
from __future__ import annotations
import argparse, hashlib, json, struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from acnh303_round18_native_elf_probe import NCA, TARGETS

def sha(blob):return hashlib.sha256(blob).hexdigest()
def sx26(x):return x-(1<<26) if x&(1<<25) else x

def probe(root:Path):
    path=root/NCA/"0/ACNH3.0.3.elf"
    blob=path.read_bytes()
    previous=json.loads((root/"derived/3.0.3/r18_native_probe/elf_consumer_candidates.json").read_text("utf-8"))
    if previous["elf_sha256"]!=sha(blob):raise ValueError("ELF drift from R18")
    names={k:int(x,16) for k,x in TARGETS.items()}
    # +/- 0x40 is a proximity search, NOT an established function boundary.
    output={k:{"hypothesis_address":hex(x),"direct_B_or_BL_targets_in_neighborhood":[],
               "nearby_range_bytes":64,"exact_target_hits":0}
            for k,x in names.items()}
    examined=0
    with path.open("rb") as f:
        e=ELFFile(f)
        if e["e_machine"]!="EM_AARCH64":raise ValueError("Not AArch64")
        segments=[s for s in e.iter_segments() if s["p_type"]=="PT_LOAD"
                  and (int(s["p_flags"])&1) and int(s["p_filesz"])>0]
        if not segments:raise ValueError("ELF has no executable PT_LOAD")
        for s in segments:
            st=int(s["p_offset"]);base=int(s["p_vaddr"]);length=int(s["p_filesz"])
            if st+length>len(blob):raise ValueError("ELF executable segment outside bytes")
            for rel in range(0,length-(length%4),4):
                opcode=struct.unpack_from("<I",blob,st+rel)[0]
                mode=(opcode>>26)&0x3f
                if mode not in (0b000101,0b100101):continue # B and BL immediate
                insn_va=base+rel
                target=insn_va + sx26(opcode&0x03ffffff)*4
                examined+=1
                for key,va in names.items():
                    if abs(target-va)<=64:
                        d=output[key]
                        d["exact_target_hits"]+=int(target==va)
                        hits=d["direct_B_or_BL_targets_in_neighborhood"]
                        if len(hits)<256:
                            hits.append({"from_va":hex(insn_va),"target_va":hex(target),
                                         "opcode":f"{opcode:08x}",
                                         "kind":"BL" if mode==0b100101 else "B",
                                         "offset_from_candidate":target-va})
    return {"schema":"acnh303-r19-elf-direct-branch-xrefs-v1",
            "original_elf_sha256":sha(blob),"elf_original_bytes":len(blob),
            "r18_verified_candidates":output,
            "total_direct_branch_opcodes_scanned":examined,
            "executable_pt_load_segments":len(segments),
            "verification_state":"STATIC_BRANCH_REFERENCE_ONLY",
            "limitations":"Nearby B/BL reference proves instruction-level incoming edge only, not owning function bounds or AMTA/BFEVFL/BDLI identity. BLR/vtable consumers cannot be resolved statically by branch immediate scanning; require object construction and runtime register evidence."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r19_native_probe/elf_static_incoming_edges.json"))
    a=p.parse_args()
    result=probe(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    print("R19_ELF_INCOMING",result["original_elf_sha256"],
          {k:len(v["direct_B_or_BL_targets_in_neighborhood"]) for k,v in result["r18_verified_candidates"].items()},
          "runtime_identified=",False)

if __name__=="__main__":main()
