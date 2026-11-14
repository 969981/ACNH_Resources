#!/usr/bin/env python3
"""R88: original AArch64 ELF relocation/vtable and UI literal consumer windows.

Uses original ACNH 3.0.3 main.elf SHA-256, pyelftools RelocationSections,
Capstone disassembly, and exact mapped virtual-address reads. Neither
function pointer proximity nor a string XREF proves EventFlow query dispatch.
"""
from __future__ import annotations
import argparse
from collections import defaultdict
import hashlib
import json
from pathlib import Path
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from acnh303_round11_elf_xref import parse_elf

ELF_REL="e10617820db06889e1638499478da0de_NCA/0/main.elf"
ELF_SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
TARGETS={
 "candidate_Camp_flags_Ghidra_00EE5828_ELF_00DE5828":0x00de5828,
 "candidate_Camp_flags_Ghidra_00F089A0_ELF_00E089A0":0x00e089a0,
 "UI_STR_CategoryName_0x3033118":0x03033118,
 "UI_furniture_BCSV_literal_0x19CEE68":0x019cee68,
 "UI_outfit_BCSV_literal_0x19A39A8":0x019a39a8,
 "ItemKind_BCSV_literal_0x019926c4":0x019926c4,
}
PROBES={
 "STR_CategoryName":0x03033080,
 "ItemUIFurnitureCategory":0x019cedd4,
 "ItemOutfitCategory":0x019a3914,
 "Camp_flag_reference_cluster":0x00bd4f90,
 "Ghidra_C_candidate_00ee5828_mapped_raw":0x00de5828,
 "Ghidra_C_candidate_00f089a0_mapped_raw":0x00e089a0,
}


def va_to_bytes(blob,segments,va,length):
    for x in segments:
        first=x["vaddr"]
        if first<=va and va+length<=first+x["filesz"]:
            pos=x["file_offset"]+va-first
            return blob[pos:pos+length]
    return None


def mapped_va(blob,segments,offset):
    for x in segments:
        if x["file_offset"]<=offset<x["file_offset"]+x["filesz"]:
            return x["vaddr"]+offset-x["file_offset"]
    return None


def pointer_scan(blob,segments,targets):
    records={}
    for name,target in targets.items():
        key=target.to_bytes(8,"little")
        occ=[];offset=0
        while True:
            hit=blob.find(key,offset)
            if hit<0:break
            va=mapped_va(blob,segments,hit)
            if va is not None:
                seg=next(s for s in segments
                     if s["vaddr"]<=va<s["vaddr"]+s["filesz"])
                occ.append({"slot_va":hex(va),"file_offset":hit,
                            "segment_flags":seg["flags"]})
            offset=hit+1
            if len(occ)>100:break
        records[name]={"target_va":hex(target),"direct_le64_pointer_slots":occ}
    return records


def relocation_scan(path,targets):
    totals=defaultdict(int)
    matches=defaultdict(list)
    neighbors={}
    all_reloc_by_slot={}
    for key in targets:matches[key]=[]
    with path.open("rb") as fp:
        elf=ELFFile(fp)
        if elf["e_machine"]!="EM_AARCH64":
            raise ValueError("Wrong ELF architecture")
        sections=0
        for sec in elf.iter_sections():
            if not isinstance(sec,RelocationSection):continue
            sections+=1
            for r in sec.iter_relocations():
                kind=int(r["r_info_type"])
                totals[kind]+=1
                slot=int(r["r_offset"])
                addend=int(r["r_addend"]) if r.is_RELA() else None
                all_reloc_by_slot[slot]={"kind":kind,"addend":addend}
                for name,va in targets.items():
                    if addend==va:
                        matches[name].append({"slot_va":hex(slot),"type":kind,
                                              "relocation_section":sec.name})
        for name,records in matches.items():
            for rec in records[:12]:
                slot=int(rec["slot_va"],16)
                window=[]
                for neighbor in range(slot-0x20,slot+0x28,8):
                    hit=all_reloc_by_slot.get(neighbor)
                    if hit:
                        window.append({"slot_va":hex(neighbor),"kind":hit["kind"],
                                       "addend":hex(hit["addend"]) if hit["addend"] is not None else None})
                neighbors[rec["slot_va"]]=window
    return {"sections_scanned":sections,"total_relocations":sum(totals.values()),
            "counts_by_type":dict(sorted(totals.items())),
            "relocation_addend_exact_target":dict(matches),
            "adjacent_relocation_windows":neighbors}


def disassemble(blob,segments,windows):
    engine=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    engine.detail=False
    ret={}
    for name,origin in windows.items():
        start=origin-0x20 if origin>=0x20 else origin
        start&=~3
        raw=va_to_bytes(blob,segments,start,0x138)
        if raw is None:
            ret[name]={"origin":hex(origin),"status":"not_file_backed_mapped_code"}
            continue
        instructions=[]
        for ins in engine.disasm(raw,start):
            instructions.append({
                "va":hex(ins.address),
                "bytes":ins.bytes.hex(),
                "mnemonic":ins.mnemonic,
                "operands":ins.op_str,
                "relative_to_probe":ins.address-origin,
            })
        ret[name]={"origin":hex(origin),"start":hex(start),
                   "status":"ARM64_static_disassembly_not_high_level_semantics",
                   "instructions":instructions}
    return ret


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo-root",type=Path,default=Path("."))
    parser.add_argument("--out",type=Path,required=True)
    a=parser.parse_args()
    root=a.repo_root.resolve()
    out=a.out.resolve()
    out.mkdir(parents=True,exist_ok=True)
    path=root/ELF_REL
    blob=path.read_bytes()
    sha=hashlib.sha256(blob).hexdigest()
    if sha!=ELF_SHA:raise ValueError("Incorrect ACNH 3.0.3 ELF "+sha)
    seg=parse_elf(blob)
    ghidra_summary_path=(root/"derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json")
    ghidra_summary=json.loads(ghidra_summary_path.read_text(encoding="utf-8"))
    ghidra_image_base=int(ghidra_summary["image_base"],16)
    if ghidra_image_base!=0x100000 or ghidra_summary.get("program")!="main.elf":
        raise ValueError("Unexpected original Ghidra image base or source program")
    data_ptr=pointer_scan(blob,seg,TARGETS)
    rel=relocation_scan(path,TARGETS)
    dasm=disassemble(blob,seg,PROBES)
    report={
      "schema":"acnh303_r88_original_relocation_and_ui_consumers_v1",
      "elf_source":ELF_REL,"elf_sha256":sha,
      "ghidra_image_base_hex":hex(ghidra_image_base),
      "ghidra_export_summary_sha256":hashlib.sha256(ghidra_summary_path.read_bytes()).hexdigest(),
      "ghidra_to_original_elf_va_rule":"Ghidra address minus 0x00100000 = original ELF VA (verified by literal site)",
      "candidate_native_va_bridge":[
        {"ghidra_c_function_entry":"0x00EE5828","elf_entry":hex(0xEE5828-ghidra_image_base),
         "elf_observed_Camp_InduceFailFlag_ref":"0xDE584C"},
        {"ghidra_c_function_entry":"0x00F089A0","elf_entry":hex(0xF089A0-ghidra_image_base),
         "elf_observed_Camp_InduceFailAlreadyInduced_ref":"0xE08A10"}],
      "elf_bytes":len(blob),
      "note":"Ghidra address from C file is a candidate code address; exact relocation does not identify a named EVFL query.",
      "candidates":data_ptr,"relocations":rel,
      "disassembly":dasm,
      "limitations":[
        "No definitive mapping from EventFlowQueryCanInduceNpc to native function without direct registration or vtable consumer xref",
        "Direct pointer/relocation is evidence only of address storage, not invocation semantics",
        "Main binary lacks spelled-out full EventFlowQueryCanInduceNpc literal in R87 scan",
        "No per-NPC invite permission has been inferred",
      ]
    }
    (out/"r88_native_function_pointer_relocations.json").write_text(
       json.dumps({k:v for k,v in report.items() if k!="disassembly"},
                  ensure_ascii=False,indent=2)+"\n")
    (out/"r88_aarch64_consumer_windows.json").write_text(
       json.dumps({"elf_sha256":sha,"windows":dasm},ensure_ascii=False,indent=2)+"\n")
    summary={
        "native_sha256":sha,
        "ghidra_image_base":"0x00100000",
        "native_address_corrected":True,
        "relocation_sections":rel["sections_scanned"],
        "relocations_total":rel["total_relocations"],
        "direct_pointer_slots":{n:len(v["direct_le64_pointer_slots"]) for n,v in data_ptr.items()},
        "relocation_addend_refs":{n:len(v) for n,v in rel["relocation_addend_exact_target"].items()},
        "disassembly_windows":{n:len(w.get("instructions",[])) for n,w in dasm.items()},
        "status":"pointer_or_disassembly_evidence_not_final_query_eligibility"
    }
    (out/"r88_native_summary.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps(summary,ensure_ascii=False,indent=2))


if __name__=="__main__":
    main()
