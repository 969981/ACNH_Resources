#!/usr/bin/env python3
"""ACNH R11 native disassembly windows + actual four-character magic construction.

Static proof only: Capstone annotations are native instruction windows;
MOVZ/MOVK pair is a candidate constant *materialization*, not a proven parser,
and proximity to CMP/BL does not establish exact consumer semantics.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,struct
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf,get_bytes_va,adrp_target,bl_target
try:
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
except ImportError:
    Cs=None

NAMES=("AMTA","BARS","BDLI","LBLI")
LIMIT=36
def decode_movwide(w):
    # Move-wide immediate (MOVZ,MOVK,MOVN), 32- or 64-bit.
    k=w&0x7f800000
    kind={0x52800000:"movz",0x72800000:"movk",0x12800000:"movn"}.get(k)
    if kind is None:return None
    shift=((w>>21)&3)*16
    is64=bool(w&0x80000000)
    if not is64 and shift>=32:return None
    return {"kind":kind,"reg":w&31,"imm":(w>>5)&0xffff,
            "shift":shift,"bits":64 if is64 else 32}

def scan_magic(blob,segments):
    """Only paired adjacent-ish MOVZ(low 16) + MOVK(high 16) with same W register."""
    found={x:[] for x in NAMES}
    seen={x:set() for x in NAMES}
    target={x:int.from_bytes(x.encode("ascii"),"little") for x in NAMES}
    lows=collections.defaultdict(list)
    for name,num in target.items():lows[num&0xffff].append((name,num>>16))
    for seg in segments:
        if not seg["flags"]&1:continue
        code=memoryview(blob)[seg["file_offset"]:seg["file_offset"]+seg["filesz"]]
        positions=collections.defaultdict(list)
        for pos in range(0,len(code)-3,4):
            word=struct.unpack_from("<I",code,pos)[0]
            info=decode_movwide(word)
            if not info:continue
            if info["kind"]=="movz" and info["shift"]==0 and info["bits"]==32 and info["imm"] in lows:
                for name,hi in lows[info["imm"]]:
                    positions[pos].append((name,hi,info["reg"]))
        for pos,arr in positions.items():
            for name,hi,reg in arr:
                for step in range(1,13):
                    pos2=pos+4*step
                    if pos2+4>len(code):break
                    w=struct.unpack_from("<I",code,pos2)[0]
                    decoded=decode_movwide(w)
                    if decoded and decoded["reg"]==reg:
                        if decoded["kind"]=="movk" and decoded["shift"]==16 and decoded["imm"]==hi:
                            va=seg["vaddr"]+pos
                            if va not in seen[name]:
                                seen[name].add(va)
                                if len(found[name])<LIMIT:
                                    found[name].append({"movz_pc_hex":hex(va),
                                                        "movk_pc_hex":hex(seg["vaddr"]+pos2),
                                                        "register":"w"+str(reg),
                                                        "imm_low_hex":hex(target[name]&0xffff),
                                                        "imm_high_hex":hex(hi),
                                                        "constant_hex":hex(target[name]),
                                                        "evidence":"exact MOVZ(low16) + MOVK(high16), same W register; surrounding instructions required"})
                        break
    return found

def insn_window(blob,segments,site,before=72,after=144):
    if Cs is None:raise RuntimeError("requires capstone >=5,<6 for actual disassembly")
    seg=next((s for s in segments if s["flags"]&1 and s["vaddr"]<=site<s["vaddr"]+s["filesz"]),None)
    if seg is None:raise ValueError("xref site not in executable mapping")
    start=max(seg["vaddr"],(site-before)&~3)
    end=min(seg["vaddr"]+seg["filesz"],site+after)
    chunk=get_bytes_va(blob,segments,start,end-start)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    result=[]
    for ins in cs.disasm(chunk,start):
        obj={"pc_hex":hex(ins.address),"bytes":ins.bytes.hex(),"mnemonic":ins.mnemonic,
             "operands":ins.op_str,"at_reference_site":ins.address==site}
        if ins.mnemonic=="bl":
            target=bl_target(int.from_bytes(ins.bytes,"little"),ins.address)
            if target is not None:obj["direct_branch_target_hex"]=hex(target)
        result.append(obj)
    return result

def string_context(blob,segments,va,length=90):
    seg=next((s for s in segments if s["vaddr"]<=va<s["vaddr"]+s["filesz"]),None)
    if not seg:return {}
    left=max(seg["vaddr"],va-length)
    right=min(seg["vaddr"]+seg["filesz"],va+length)
    raw=get_bytes_va(blob,segments,left,right-left)
    if raw is None:return {}
    # Preserve byte hex and printable ASCII in a bounded context; no raw ELF output.
    return {"start_va_hex":hex(left),
            "ascii":"".join(chr(x) if 32<=x<127 else "." for x in raw),
            "raw_hex":raw.hex()}

def produce(blob,previous):
    segments=parse_elf(blob)
    if hashlib.sha256(blob).hexdigest()!=previous["elf_sha256"] or len(blob)!=previous["elf_bytes"]:
        raise ValueError("ELF SHA/size differs from Round11 initial actual-AArch64 scan")
    records=[]
    for entry in previous["entries"]:
        term=entry["term"]
        if term not in ("BDLI","AMTA","BARS","LBLI","aal::","EventFlowAction","EventFlowQuery","EventFlowSystemActor","EventFlow","MainNpc"):
            continue
        sites=entry["code_references"]
        samples=[]
        for ref in sites[:12]:
            va=int(ref["ref_site_hex"],16)
            samples.append({"ref_site_hex":ref["ref_site_hex"],
                            "xref_type":ref["pattern"],
                            "window":insn_window(blob,segments,va)})
        records.append({"term":term,"literal_positions":[{
            "vaddr_hex":x["vaddr_hex"],"has_null_suffix":x["has_null_suffix"],
            "actual_context":string_context(blob,segments,x["vaddr"])
        } for x in entry["literal_locations"][:6]],
            "code_windows":samples,"reference_count_in_stage1":len(sites)})
    magic=scan_magic(blob,segments)
    materializations={}
    for name,found in magic.items():
        materializations[name]={"observed_count_capped":len(found),
                                 "records":[{**hit,"window":insn_window(blob,segments,int(hit["movz_pc_hex"],16),before=40,after=112)}
                                            for hit in found]}
    return {"schema":"acnh303-r11-native-code-magic-context-v1",
            "elf_sha256":previous["elf_sha256"],"elf_bytes":len(blob),
            "xref_window_count":sum(len(x["code_windows"]) for x in records),
            "symbol_and_magic_context":records,
            "movz_movk_magic":materializations,
            "critical_limitation":"All MOVZ/MOVK constants and BL proximity are candidates, not verified format parsers or actual caller argument flow. No dynamic gameplay effects, no native dispatch closed."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--xref",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    blob=a.elf.read_bytes()
    previous=json.loads(a.xref.read_text("utf-8"))
    if previous.get("schema")!="acnh303-r11-exact-elf64-aarch64-static-xref-v1":raise ValueError("invalid xref version")
    data=produce(blob,previous)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(data,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R11_MAGIC",[(name,v["observed_count_capped"]) for name,v in data["movz_movk_magic"].items()],
          "code_windows",data["xref_window_count"],flush=True)
if __name__=="__main__":main()
