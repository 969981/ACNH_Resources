#!/usr/bin/env python3
"""ACNH 3.0.3 ELF-only static reader-window evidence; no runtime claims.

Offsets from earlier investigations are *candidates* until mapping, opcode and
XREF/owner validation. Script records raw hashes, PT_LOAD maps, AArch64
disassembly and memory-access instructions. Does not call targets "consumers".
"""
import argparse
import hashlib
import json
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM, CS_GRP_JUMP, CS_GRP_CALL

NCA="e10617820db06889e1638499478da0de_NCA"
TARGETS={
    "bars_member_reader_x20_x22":"0x3ACA490",
    "bars_member_window_end":"0x3ACA590",
    "bfevfl_record_reader_candidate_a":"0xFF6470",
    "bfevfl_indirect_dispatch_candidate_b":"0x10847E4",
}
MAGICS=[b"AMTA",b"LBLI",b"BFEVFL",b"BNSH",b"PTCL",b"FCPX"]

def sha(b):return hashlib.sha256(b).hexdigest()

def probe(path:Path):
    blob=path.read_bytes()
    engine=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    engine.detail=True
    with path.open("rb") as f:
        elf=ELFFile(f)
        if elf.elfclass!=64 or elf["e_machine"]!="EM_AARCH64":
            raise ValueError(f"Not the expected AArch64 ELF: {elf['e_machine']}")
        loads=[]
        for seg in elf.iter_segments():
            if seg["p_type"]!="PT_LOAD":continue
            loads.append({"vaddr":int(seg["p_vaddr"]),"offset":int(seg["p_offset"]),
                          "file_size":int(seg["p_filesz"]),"mem_size":int(seg["p_memsz"]),
                          "flags":int(seg["p_flags"])})
    if not loads:raise ValueError("No PT_LOAD")
    def window(key,name):
        pc=int(name,16); length=0x100
        matches=[x for x in loads if x["vaddr"]<=pc< x["vaddr"]+x["file_size"]]
        mode=None
        if matches:
            s=matches[0];pos=s["offset"]+(pc-s["vaddr"]);mode="ELF virtual address"
        else:
            matches=[x for x in loads if x["offset"]<=pc< x["offset"]+x["file_size"]]
            if not matches:return {"requested_hex":name,"status":"unmapped","no_opcode_claim":True}
            s=matches[0];pos=pc;mode="ELF file offset (candidate VA not mapped)"
        length=min(length,s["offset"]+s["file_size"]-pos)
        code=blob[pos:pos+length]
        basepc=pc if mode=="ELF virtual address" else s["vaddr"]+pos-s["offset"]
        instructions=[]
        for ins in engine.disasm(code,basepc):
            # Read vs write and field semantics are intentionally left unknown.
            instructions.append({"va":hex(ins.address),"raw_opcode":ins.bytes.hex(),
                                 "mnemonic":ins.mnemonic,"operands":ins.op_str,
                                 "is_call":ins.group(CS_GRP_CALL),
                                 "is_jump":ins.group(CS_GRP_JUMP)})
        return {"requested_hex":name,"mapped_as":mode,"pt_load":s,
                "file_offset":pos,"virtual_start":hex(basepc),
                "source_window_sha256":sha(code),"source_window_bytes":len(code),
                "decoded_instruction_count":len(instructions),"instructions":instructions,
                "status":"static_candidate_unverified"}
    patterns={}
    for magic in MAGICS:
        positions=[];cursor=0
        while len(positions)<200:
            at=blob.find(magic,cursor)
            if at<0:break
            positions.append(at);cursor=at+1
        patterns[magic.decode("ascii")]={"first_offsets":positions[:25],
             "at_least":len(positions),"scan_truncated":len(positions)==200}
    results={key:window(key,v) for key,v in TARGETS.items()}
    return {"schema":"acnh303-r18-elf-arm64-static-candidate-windows-v1",
            "elf_path":f"{NCA}/0/ACNH3.0.3.elf","elf_bytes":len(blob),
            "elf_sha256":sha(blob),"elf_machine":"AArch64",
            "load_segments":loads,"candidate_windows":results,
            "literal_magic_search":patterns,
            "verification_state":"STATIC_ONLY_NO_XREF_OWNER_NO_RUNTIME_POINTER_EQUIVALENCE",
            "limitations":"PC offset interpretation may be VA or file offset; labels reflect prior hypotheses. Presence of opcode/read/magic is not evidence of semantic owner, actual action/query dispatch or gameplay execution."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r18_native_probe/elf_consumer_candidates.json"))
    a=p.parse_args()
    res=probe(a.root/NCA/"0"/"ACNH3.0.3.elf")
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(res,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R18_ELF_NATIVE_STATIC",res["elf_sha256"],
          {k:(v.get("mapped_as"),v.get("decoded_instruction_count")) for k,v in res["candidate_windows"].items()},
          "real_runtime_consumer_proven=",False)

if __name__=="__main__":main()
