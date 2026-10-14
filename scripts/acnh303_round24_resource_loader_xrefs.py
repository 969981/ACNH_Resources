#!/usr/bin/env python3
"""R24 ELF evidence-first static resource loader search from real magic/data.

Two independent anchors: exact type magic literals in file-backed readonly
PT_LOAD and known ELF reader windows with actual LDR and direct callers.
No actual resource owner is assigned absent data-flow and live execution.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from collections import Counter
from elftools.elf.elffile import ELFFile
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round22_native_callee import sha,static_va_read,branch_target
from acnh303_round21_global_initializer import adrp_page,ELF_SHA
from acnh303_round18_native_elf_probe import NCA,TARGETS

MAGICS=(b"FRES",b"FMDL",b"FSKL",b"FMAA",b"BARS",b"AMTA",b"LBLI",b"BFEVFL",b"BNSH")
def ref_next(op,pc,reg,base,targets):
    # Matches only immediately adjacent ADRP -> ADD/unsigned-imm LDR.
    # Decode using AArch64 architectural bits, independent of Capstone state.
    if op&0x9f000000 != 0x90000000:return None
    dest=op&31
    if dest!=reg:return None
    if adrp_page(pc,op)!=base:return None
    return True

def extract(root):
    elfpath=root/NCA/"0/ACNH3.0.3.elf"; blob=elfpath.read_bytes()
    if sha(blob)!=ELF_SHA:raise ValueError("ELF identity mismatch")
    with elfpath.open("rb") as fh:
        elf=ELFFile(fh)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),"sz":int(s["p_filesz"]),
                "mem":int(s["p_memsz"]),"flags":int(s["p_flags"])}
               for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
    mags={}
    target_pages={}
    for magic in MAGICS:
        matches=[]
        for s in loads:
            if s["flags"]&1:continue # seek file-backed static resource names, not opcodes
            at=s["off"];end=at+s["sz"];cursor=at
            while len(matches)<96:
                hit=blob.find(magic,cursor,end)
                if hit<0:break
                va=s["va"]+hit-at
                if va not in matches:matches.append(va)
                cursor=hit+1
        mags[magic.decode()]={"locations":[hex(x) for x in matches[:32]],
                              "count_capped_at_96":len(matches)}
        for addr in matches:
            target_pages.setdefault(addr&~4095,[]).append((magic.decode(),addr))
    # Whole executable ELF search; preserve real machine-code evidence
    # for exact ADRP + immediately following ADD or LDR referencing a magic VA.
    hits=Counter();examples={}
    for s in loads:
        if not s["flags"]&1:continue
        p=s["off"];size=s["sz"];va=s["va"]
        for delta in range(0,size-8,4):
            op=struct.unpack_from("<I",blob,p+delta)[0]
            page=adrp_page(va+delta,op)
            if page not in target_pages:continue
            rd=op&31
            follow=struct.unpack_from("<I",blob,p+delta+4)[0]
            # ADD (immediate), sf=1, opcode=10010001 xx
            if (follow&0xff000000)==0x91000000:
                rn=(follow>>5)&31
                if rn==rd:
                    shift=12 if ((follow>>22)&1) else 0
                    imm=((follow>>10)&0xfff)<<shift
                    used=page+imm
                    family="ADRP_ADD"
                else:continue
            elif (follow&0xffc00000) in (0xf9400000,0xb9400000):
                rn=(follow>>5)&31
                if rn!=rd:continue
                scale=8 if (follow&0xffc00000)==0xf9400000 else 4
                used=page+((follow>>10)&0xfff)*scale
                family="ADRP_LDR"
            else:continue
            for typename,address in target_pages[page]:
                if address!=used:continue
                hits[typename]+=1
                bucket=examples.setdefault(typename,[])
                if len(bucket)<32:
                    # 48 bytes after the actual xref capture possible BL
                    following=static_va_read(blob,[{"va":s["va"],"off":s["off"],"filesz":s["sz"],"memsz":s["mem"],"flags":s["flags"]}],va+delta+8,0x30) or b""
                    calls=[]
                    for k in range(0,len(following)-len(following)%4,4):
                        operand=struct.unpack_from("<I",following,k)[0]
                        dst=branch_target(va+delta+8+k,operand)
                        if dst is not None and len(calls)<4:
                            calls.append({"instruction":hex(va+delta+8+k),"direct_target":hex(dst)})
                    bucket.append({"site":hex(va+delta),"target_magic_va":hex(address),
                        "pattern":family,"adrp_opcode":f"{op:08x}",
                        "following_opcode":f"{follow:08x}",
                        "nearby_direct_branches":calls})
    known=[]
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    for label,addrstr in TARGETS.items():
        pc=int(addrstr,16)
        code=static_va_read(blob,[{"va":s["va"],"off":s["off"],"filesz":s["sz"],"memsz":s["mem"],"flags":s["flags"]} for s in loads],pc,0x90)
        if code is None:
            known.append({"label":label,"pc":hex(pc),"status":"unmapped"});continue
        instructions=list(cs.disasm(code,pc))
        mn=[x.mnemonic for x in instructions]
        byte_compares=sum(1 for x in instructions[:28] if x.mnemonic in ("ldrb","ldursb"))
        comparisons=sum(1 for x in instructions[:28] if x.mnemonic in ("cmp","cmn"))
        virtual_calls=sum(1 for x in instructions[:28] if x.mnemonic=="blr")
        compare_pattern=byte_compares>=2 and comparisons>=1
        known.append({"label":label,"pc":hex(pc),
          "raw_sha256":sha(code),
          "byte_loads_in_first_28":byte_compares,
          "comparisons_in_first_28":comparisons,
          "virtual_calls_in_first_28":virtual_calls,
          "instruction_pattern":"bytewise_compare_loop_candidate" if compare_pattern else "mixed_unclassified_code",
          "first_instructions":[{"va":hex(x.address),"opcode":x.bytes.hex(),"mnemonic":x.mnemonic,"args":x.op_str} for x in instructions[:28]],
          "status":"real_code_window_without_proven_resource_input"})
    return {"schema":"acnh303-r24-resource-magic-xrefs-v2","elf_sha256":sha(blob),
      "original_magic_positions":mags,
      "exact_executable_adrp_data_references":dict(hits),
      "candidate_xrefs":examples,
      "previous_read_windows_independently_redecoded":known,
      "verification_state":"ELF_MAGIC_XREF_CANDIDATES_LOADER_INPUT_OWNER_UNPROVEN",
      "limits":"Magic string presence and ADRP reference identify literal consumers or checkers, not necessarily file loaders. Some previously labelled BARS/BFEVFL candidate windows visibly contain repeated LDRB/CMP bytewise loops and can instead be string comparison; no verified asset bytes flow through these windows. Nearby calls do not prove business ownership. No live object factory, AMTA/LBLI/BFEVFL binding, or read-only Switch BLR trace is asserted."}

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("derived/3.0.3/r24_native_loader/resource_magic_xrefs.json"))
    a=p.parse_args();r=extract(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(r,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf8")
    print("R24_NATIVE_MAGIC",r["original_magic_positions"],"exact_xrefs",r["exact_executable_adrp_data_references"])
if __name__=="__main__":main()
