#!/usr/bin/env python3
"""R25 evidence-bounded native follow-up to the real BNSH GetAlignment import.

Scan actual ACNH 3.0.3 ELF bytes and resolve each nearby direct BL/B through
ADRP/LDR/ADD/BR PLT relocation when present. Distinguish known imports from
unknown internal function candidates; never call an unproven caller a loader.
"""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from elftools.elf.elffile import ELFFile

ELF_PATH="e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf"
R24="derived/3.0.3/r24_native_loader/resource_magic_xrefs.json"
OUTPUT="derived/3.0.3/r25_native_bnsh/native_bnsh_callers.json"
SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
SITE_EXPECTED={"0x25c794":0x4ae3000,"0x25d18c":0x4ae3000,"0x2656b4":0x4aec000}
ALIGN_SYMBOL="_ZNK2nn4util16BinaryFileHeader12GetAlignmentEv"

def adrp_page(pc,word):
    if word & 0x9f000000!=0x90000000:return None
    immhi=(word>>5)&0x7ffff
    immlo=(word>>29)&3
    raw=(immhi<<2)|immlo
    signed=raw-(1<<21) if raw&(1<<20) else raw
    return (pc&~4095)+(signed<<12)

def mapped_read(blob,segments,va,n):
    for p in segments:
        if p["va"]<=va and va+n<=p["va"]+p["filesz"]:
            off=p["off"]+va-p["va"]
            return blob[off:off+n]
    return None

def plt_jump_target(blob,segments,pc,relocations):
    """Return resolved imported symbol only for exact ADRP/LDR/ADD/BR shape."""
    b=mapped_read(blob,segments,pc,16)
    if b is None:return None
    w0,w1,w2,w3=struct.unpack("<4I",b)
    page=adrp_page(pc,w0)
    if page is None:return None
    if (w1&0xffc00000)!=0xf9400000 or (w2&0xff000000)!=0x91000000:
        return None
    if (w3&0xfffffc1f)!=0xd61f0000:return None  # BR register
    base=w0&31
    if ((w1>>5)&31)!=base or ((w2>>5)&31)!=base or (w2&31)!=base:
        return None
    if (w1&31)!=((w3>>5)&31):return None
    # ADRP and ADD must address the same GOT base; protect against nonzero ADD offset.
    addimm=(w2>>10)&0xfff
    if addimm!=((w1>>10)&0xfff)*8:return None
    got=page+((w1>>10)&0xfff)*8
    sym=relocations.get(got)
    return {"stub_va":hex(pc),"got_va":hex(got),
            "symbol":sym,"state":"imported_symbol" if sym else "unresolved_jump_slot"}

def direct_target(pc,word):
    if word&0xfc000000 not in (0x94000000,0x14000000):return None
    imm=word&0x03ffffff
    if imm&0x02000000:imm-=0x04000000
    return pc+(imm<<2)

def extract(root):
    p=root/ELF_PATH
    blob=p.read_bytes()
    if hashlib.sha256(blob).hexdigest()!=SHA:raise ValueError("unexpected original ELF sha")
    report=json.loads((root/R24).read_text("utf8"))
    if report["elf_sha256"]!=SHA:raise ValueError("R24 ELF reference drift")
    with p.open("rb") as f:
        ef=ELFFile(f)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "filesz":int(s["p_filesz"]),"flags":int(s["p_flags"])}
               for s in ef.iter_segments() if s["p_type"]=="PT_LOAD"]
        relocation={}
        for s in ef.iter_sections():
            if s["sh_type"] not in ("SHT_RELA","SHT_REL"):continue
            syms=ef.get_section(int(s["sh_link"]))
            for r in s.iter_relocations():
                index=int(r["r_info_sym"])
                if not index or syms is None:continue
                name=syms.get_symbol(index).name
                if name:relocation[int(r["r_offset"])]=name
        imports=sorted(set(relocation.values()))
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    entries=[]
    for site,magic in SITE_EXPECTED.items():
        pc=int(site,16)
        start=mapped_read(blob,loads,pc,0x100)
        header=mapped_read(blob,loads,magic,0x40)
        if start is None or header is None or header[:4]!=b"BNSH":
            raise ValueError("resource/call site missing in original ELF: "+site)
        inst=list(cs.disasm(start,pc))
        # Source reference must be ADRP followed by literal ADD.
        if len(inst)<3 or inst[0].mnemonic!="adrp" or inst[1].mnemonic!="add":
            raise ValueError("unexpected source ADRP+ADD: "+site)
        a,b=struct.unpack_from("<II",start)
        if adrp_page(pc,a)+((b>>10)&0xfff)!=magic:
            raise ValueError("BNSH literal reference drift")
        calls=[]
        for i in range(0,len(start),4):
            op=struct.unpack_from("<I",start,i)[0]
            target=direct_target(pc+i,op)
            if target is None:continue
            is_bl=(op&0xfc000000)==0x94000000
            sub=mapped_read(blob,loads,target,0x20)
            stub=plt_jump_target(blob,loads,target,relocation) if sub else None
            calls.append({"pc":hex(pc+i),"instruction":"BL" if is_bl else "B",
              "target":hex(target),"import":stub,
              "target_code_sha256_first32":hashlib.sha256(sub).hexdigest() if sub else None,
              "evidence":"direct_branch_and_PLT_relocation" if stub and stub["symbol"] else "direct_branch_only"})
        if not any(x["import"] and x["import"]["symbol"]==ALIGN_SYMBOL for x in calls):
            raise ValueError("GetAlignment import not present near "+site)
        head=[{"pc":hex(x.address),"bytes":x.bytes.hex(),
               "instruction":x.mnemonic+" "+x.op_str} for x in inst[:36]]
        entries.append({"site":site,"embedded_BNSH_header_va":hex(magic),
          "literal_sha256_first64":hashlib.sha256(header).hexdigest(),
          "first_36_decoded_instructions":head,
          "direct_branches_with_PLT_relocations":calls[:36],
          "note":"0x25C794 is a tail B; subsequent bytes may belong to another function. 0x25D18C and 0x2656B4 windows are not proven full function bounds."})
    interest=("Read","Load","Alloc","Heap","Memory","File","Resource","Shader","Archive","BinaryFileHeader")
    shortlist=[name for name in imports if any(word in name for word in interest)]
    return {"schema":"acnh303-r25-real-elf-import-callers-v1",
       "original_elf_sha256":SHA,
       "r24_report_sha256":hashlib.sha256((root/R24).read_bytes()).hexdigest(),
       "relocations_with_nonempty_names":len(relocation),
       "selected_import_symbol_count":len(shortlist),
       "selected_import_symbol_examples":shortlist[:100],
       "BNSH_static_source_calls":entries,
       "limits":"Internal direct branches are not proven loaders, factories or consumers; a PLT import is a called API, not resource parser ownership. No live PC or external asset read was observed.",
       "verification_state":"REAL_ELF_STATIC_CALL_IMPORTS_RESOLVED_OBJECT_FACTORY_AND_BUSINESS_CONSUMER_UNPROVEN"}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path(OUTPUT))
    a=p.parse_args()
    r=extract(a.root)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(r,indent=2,sort_keys=True,ensure_ascii=False)+"\n","utf8")
    print("R25_BNSH_IMPORTS",[(x["site"],len(x["direct_branches_with_PLT_relocations"])) for x in r["BNSH_static_source_calls"]])

if __name__=="__main__":main()
