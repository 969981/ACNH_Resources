#!/usr/bin/env python3
"""R24 resource-loader provenance: match real format signatures in ACNH ELF.

Start from actual FRES/FMDL/FSKL/BARS/AMTA magic and dynamic function imports,
not the unrelated RET/vtable chain. Detect AArch64 MOVZ/MOVK immediate builders
in executable PT_LOADs. These are bounded STATIC potential parser candidates,
not confirmed business consumers or observed runtime callbacks.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from collections import Counter
from pathlib import Path
from elftools.elf.elffile import ELFFile
from acnh303_round18_native_elf_probe import NCA
from acnh303_round21_global_initializer import ELF_SHA

MAGICS={"FRES":b"FRES","FMDL":b"FMDL","FSKL":b"FSKL",
        "BARS":b"BARS","AMTA":b"AMTA","BNTX":b"BNTX",
        "BFEVFL":b"BFEVFL"}
NEEDLES=("read","open","resource","stream","archive","file","fs","g3d","sarc","bars","audio","elf")
def sha(d):return hashlib.sha256(d).hexdigest()
def mov_imm(op):
    # Move wide MOVZ/MOVK W registers, shifts 0 or 16; reject 64-bit
    # forms to keep the 32-bit file magic reconstruction exact.
    family=op&0x7f800000
    if family not in (0x52800000,0x72800000):return None
    shift=(op>>21)&3
    if shift>1:return None
    return ("movz" if family==0x52800000 else "movk",op&31,(op>>5)&0xffff,shift*16)

def combined32(low,hi):
    if low[0]=="movz" and hi[0]=="movk" and low[1]==hi[1] and low[3]!=hi[3]:
        return ((low[2]<<low[3])|(hi[2]<<hi[3]))&0xffffffff
    return None

def inspect(root):
    path=root/NCA/"0/ACNH3.0.3.elf"
    blob=path.read_bytes()
    if sha(blob)!=ELF_SHA:raise ValueError("not original ACNH 3.0.3 ELF")
    with path.open("rb") as f:
        elf=ELFFile(f)
        segments=[{"va":int(s["p_vaddr"]),"offset":int(s["p_offset"]),
                    "filesz":int(s["p_filesz"]),"flags":int(s["p_flags"])}
                  for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
        symbols=[];named_relocations=[]
        for section in elf.iter_sections():
            if section["sh_type"]=="SHT_DYNSYM":
                for sym in section.iter_symbols():
                    nm=sym.name
                    if any(word in nm.lower() for word in NEEDLES):
                        symbols.append({"name":nm[:180],"st_value":hex(int(sym["st_value"])),
                                        "type":str(sym["st_info"]["type"]),"defined":sym["st_shndx"]!="SHN_UNDEF"})
            elif section["sh_type"] in ("SHT_RELA","SHT_REL"):
                linked=elf.get_section(int(section["sh_link"]))
                if linked is None:continue
                for rel in section.iter_relocations():
                    try:nm=linked.get_symbol(int(rel["r_info_sym"])).name
                    except (AttributeError,IndexError):continue
                    if nm and any(word in nm.lower() for word in NEEDLES):
                        named_relocations.append({"offset":hex(int(rel["r_offset"])),
                           "type":int(rel["r_info_type"]),"symbol":nm[:180]})
    targets={int.from_bytes(raw[:4],"little"):kind for kind,raw in MAGICS.items()
             if len(raw)==4}
    literal={name:{"total_occurrences":0,"offset_samples":[]} for name in MAGICS}
    for seg in segments:
        start=seg["offset"];end=start+seg["filesz"]
        data=blob[start:end]
        for name,magic in MAGICS.items():
            at=0
            while True:
                k=data.find(magic,at)
                if k<0:break
                e=literal[name];e["total_occurrences"]+=1
                if len(e["offset_samples"])<24:
                    e["offset_samples"].append({"file_offset":start+k,
                      "va":hex(seg["va"]+k),"executable":bool(seg["flags"]&1)})
                at=k+1
    magic_code_hits=[];opcode_pairs=Counter()
    for seg in segments:
        if not seg["flags"]&1:continue
        begin=seg["offset"];n=seg["filesz"]//4
        for i in range(n-1):
            a=struct.unpack_from("<I",blob,begin+i*4)[0]
            first=mov_imm(a)
            if first is None or first[0]!="movz":continue
            for d in (1,2,3,4):
                if i+d>=n:break
                # A branch in this window invalidates straight-line dataflow.
                blocked=False
                for k in range(i+1,i+d):
                    op=struct.unpack_from("<I",blob,begin+k*4)[0]
                    if (op>>26)&0x3f in (0b000101,0b100101):
                        blocked=True;break
                if blocked:break
                op=struct.unpack_from("<I",blob,begin+(i+d)*4)[0]
                second=mov_imm(op)
                if second is None:continue
                value=combined32(first,second)
                kind=targets.get(value)
                if kind:
                    opcode_pairs[kind]+=1
                    if len(magic_code_hits)<250:
                        magic_code_hits.append({"magic":kind,"movz_va":hex(seg["va"]+i*4),
                            "movk_va":hex(seg["va"]+(i+d)*4),"register":f"w{first[1]}",
                            "immediate_u32":hex(value),"opcodes":[f"{a:08x}",f"{op:08x}"],
                            "status":"static_constant_candidate_not_parser_identity"})
    return {"schema":"acnh303-r24-resource-loading-anchored-native-scan-v1",
        "elf_sha256":sha(blob),
        "elf_literal_resource_magic_matches":literal,
        "dynamic_loader_symbol_candidates":symbols[:100],
        "dynamic_loader_relocations":named_relocations[:100],
        "aarch64_magic_constant_candidate_totals":dict(opcode_pairs),
        "aarch64_magic_constant_candidate_samples":magic_code_hits,
        "legacy_vtable_ret_candidate_excluded":"0x5bd3a4",
        "actual_resource_loader_found":False,
        "actual_object_factory_found":False,
        "verified_live_blr_target":None,
        "status":"STATIC_RESOURCE_SIGNATURE_SEARCH_NO_CONFIRMED_NATIVE_CONSUMER",
        "next_runtime_read_only_evidence":{
            "record_status":"NOT_CAPTURED","records":[],
            "required":["BuildID","module_load_base","real_resource_path_and_SHA",
                        "file_read_or_decompress_return_buffer","resource_header_ptr",
                        "consumer_pc","instance_ptr","vtable_ptr","blr_target_reg",
                        "actual_PC_after_BLR","stack_trace"]},
        "limitations":"Machine immediate/ELF literal hits alone are not parser entrypoints; absence of text literals is not evidence a loader is absent. Recover object constructors/caller graph from an independently verified resource load boundary, then collect real read-only runtime memory to prove identity."}

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path("."))
    ap.add_argument("--out",type=Path,default=Path("derived/3.0.3/r24_native_loader/resource_loader_evidence.json"))
    a=ap.parse_args()
    d=inspect(a.root);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R24_NATIVE_RESOURCE_SIGNATURES",d["aarch64_magic_constant_candidate_totals"],
          {k:x["total_occurrences"] for k,x in d["elf_literal_resource_magic_matches"].items()},
          "factory_found",False)
if __name__=="__main__":main()
