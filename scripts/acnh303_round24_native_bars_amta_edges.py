#!/usr/bin/env python3
"""R24 specific BARS/AMTA signature consumers: bounded real opcode evidence.

The preceding raw ELF scan located BARS at 0x3ACA350 and AMTA at two sites.
Recover surrounding AArch64 instructions and exact direct B/BL incoming edges
from original executable segments. Do NOT call signatures a verified factory:
load-buffer provenance and real instance type require more evidence.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round21_global_initializer import ELF_SHA
from acnh303_round24_native_resource_loader import NCA

FOCUS=[("BARS",0x3aca350),("AMTA",0x3acaa88),("AMTA",0x3acab04)]
def sha(data):return hashlib.sha256(data).hexdigest()
def branch_target(pc,op):
    fam=(op>>26)&63
    if fam not in (0b000101,0b100101):return None
    imm=op&0x3ffffff
    if imm&(1<<25):imm-=1<<26
    return pc+imm*4

def inspect(root):
    path=root/NCA/"0/ACNH3.0.3.elf"
    data=path.read_bytes()
    if sha(data)!=ELF_SHA:raise ValueError("version-matched ELF SHA mismatch")
    previous=json.loads((root/"derived/3.0.3/r24_native_loader/resource_loader_evidence.json").read_text())
    hits={(r["magic"],int(r["movz_va"],16)) for r in previous["aarch64_magic_constant_candidate_samples"]}
    if any((magic,va) not in hits for magic,va in FOCUS):
        raise ValueError("BARS/AMTA site not independently confirmed by magic scanner")
    with path.open("rb") as f:
        e=ELFFile(f)
        exe=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),"filesz":int(s["p_filesz"])}
             for s in e.iter_segments() if s["p_type"]=="PT_LOAD" and int(s["p_flags"])&1]
    def mapped(start,end):
        seg=next((s for s in exe if s["va"]<=start and end<=s["va"]+s["filesz"]),None)
        if seg is None:raise ValueError("candidate code not executable-mapped")
        off=seg["off"]+start-seg["va"]
        return data[off:off+(end-start)]
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    cs.detail=True
    windows=[]
    for magic,va in FOCUS:
        start=va-0x70;end=va+0xD0
        buf=mapped(start,end)
        instructions=list(cs.disasm(buf,start))
        op_at={x.address:x for x in instructions}
        x=op_at.get(va)
        if x is None or x.mnemonic!="mov" and x.mnemonic not in ("movz","movk"):
            # capstone may print MOVZ as MOV; preserve actual original opcode
            pass
        code=[{"va":hex(ins.address),"mnemonic":ins.mnemonic,
               "operands":ins.op_str,"raw_opcode":ins.bytes.hex()} for ins in instructions]
        window={"magic":magic,"confirmed_constant_va":hex(va),
                "opcode_pair_hex":[mapped(va,va+4).hex(),mapped(va+4,va+8).hex()],
                "window_start":hex(start),"window_end_exclusive":hex(end),
                "sha256":sha(buf),"instructions":code,
                "exact_target_direct_branches":[],
                "nearby_direct_branches":[],
                "resource_buffer_input_register_identity":"not_derived_from_static_magic",
                "confirmed_parser_owner":False}
        windows.append(window)
    # Decode direct B/BL instructions in all executable PT_LOADs once.
    for seg in exe:
        n=seg["filesz"]//4;at=seg["off"];base=seg["va"]
        for k in range(n):
            pc=base+k*4
            op=struct.unpack_from("<I",data,at+k*4)[0]
            dest=branch_target(pc,op)
            if dest is None:continue
            for w in windows:
                focus=int(w["confirmed_constant_va"],16)
                if dest==focus:
                    if len(w["exact_target_direct_branches"])<120:
                        w["exact_target_direct_branches"].append({
                            "from_va":hex(pc),"to_va":hex(dest),
                            "kind":"BL" if ((op>>26)&63)==0b100101 else "B"})
                elif abs(dest-focus)<=0x50 and len(w["nearby_direct_branches"])<80:
                    w["nearby_direct_branches"].append({
                        "from_va":hex(pc),"to_va":hex(dest),
                        "distance":dest-focus,
                        "kind":"BL" if ((op>>26)&63)==0b100101 else "B"})
    return {"schema":"acnh303-r24-bars-amta-code-boundary-v1",
            "elf_sha256":sha(data),"actual_signature_builders":windows,
            "confirmed_loader_owner":False,
            "confirmed_object_factory":False,
            "runtime_blr_target_verified":False,
            "status":"ORIGINAL_CODE_MAGIC_COMPARISON_CONTEXT_ONLY",
            "limits":"Exact BARS/AMTA MOVZ+MOVK occurrences and executable instruction windows have original opcode SHA. Direct incoming branches near constants are not function ownership or runtime resource reads; actual parser input buffer, constructor and consumer call chain still need independent runtime/XREF confirmation."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r24_native_loader/bars_amta_code_context.json"))
    args=p.parse_args();d=inspect(args.root)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(d,sort_keys=True,indent=2,ensure_ascii=False)+"\n","utf-8")
    print("R24_BARS_AMTA_CODE", [(x["magic"],x["confirmed_constant_va"],
         len(x["exact_target_direct_branches"]),len(x["nearby_direct_branches"]))
         for x in d["actual_signature_builders"]])
if __name__=="__main__":main()
