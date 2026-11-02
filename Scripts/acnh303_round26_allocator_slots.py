#!/usr/bin/env python3
"""R26 phase B: source-backed allocation callback slots and BNSH object layout.

No fabricated allocator target: an indirect BR through writable globals remains
unresolved without observed registration/slot contents at execution time.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from elftools.elf.elffile import ELFFile
from acnh303_round25_bnsh_callers import ELF_PATH,SHA,adrp_page,mapped_read
from acnh303_round26_three_callees import function_cfg

PREV="derived/3.0.3/r26_native_three_callees/r26_function_and_callsite_audit.json"
OUT="derived/3.0.3/r26_native_three_callees/r26_allocator_slots_and_object.json"
SLOTS=[0x4b62f50,0x4b62f60]
CALLEES={
"nearby_callback_wrapper":0x267b30,
"consumer_finish":0x286160,
"consumer_first_block_test":0x28cba0,
"consumer_block_mode":0x28cce0,
"consumer_key_resolver":0x24e3c0,
}
STRING_ANCHORS=[0x3fcd458,0x3fed090,0x3f940cf0,0x3fa9070e]

def byte_context(blob,loads,pc,n=0x90):
    raw=mapped_read(blob,loads,pc,n)
    if raw is None:return None
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    return [{"pc":hex(x.address),"bytes":x.bytes.hex(),"asm":x.mnemonic+" "+x.op_str}
            for x in cs.disasm(raw,pc)]

def literal(blob,loads,pc,maxbytes=128):
    raw=mapped_read(blob,loads,pc,maxbytes)
    if raw is None:return {"va":hex(pc),"readable":False}
    first=raw.split(b"\x00",1)[0]
    ascii_only=bool(first) and all(32<=x<127 for x in first)
    return {"va":hex(pc),"raw_first32_hex":raw[:32].hex(),
       "raw_sha256_first128":hashlib.sha256(raw).hexdigest(),
       "ascii_null_terminated_candidate":first.decode("ascii") if ascii_only and len(first)<maxbytes else None}

def scan_slots(blob,loads):
    refs={hex(addr):[] for addr in SLOTS}
    for s in loads:
        if not(s["flags"]&1):continue
        base=s["off"];n=s["filesz"];va=s["va"]
        for delta in range(0,n-8,4):
            op=struct.unpack_from("<I",blob,base+delta)[0]
            page=adrp_page(va+delta,op)
            if page is None or page not in {x&~4095 for x in SLOTS}:continue
            rd=op&31
            nextop=struct.unpack_from("<I",blob,base+delta+4)[0]
            if (nextop&0xff000000)==0x91000000 and ((nextop>>5)&31)==rd:
                shift=12 if nextop & (1<<22) else 0
                target=page+(((nextop>>10)&0xfff)<<shift)
                mode="ADRP_ADD"
            elif nextop&0xffc00000 in (0xf9400000,0xb9400000) and ((nextop>>5)&31)==rd:
                mult=8 if (nextop&0xffc00000)==0xf9400000 else 4
                target=page+((nextop>>10)&0xfff)*mult
                mode="ADRP_LDR"
            else:continue
            if target not in SLOTS:continue
            k=hex(target)
            if len(refs[k])>=128:continue
            instr=byte_context(blob,loads,va+delta,0x70)
            refs[k].append({"pc":hex(va+delta),"formation":mode,
                "adjacent_machine_hex":struct.pack("<II",op,nextop).hex(),
                "forward_instructions":instr or []})
    return refs

def analyze(root):
    previous_bytes=(root/PREV).read_bytes()
    prev=json.loads(previous_bytes)
    if prev["original_elf_sha256"]!=SHA:raise ValueError("R26 prior ELF SHA drift")
    raw=(root/ELF_PATH).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("ELF SHA drift")
    with (root/ELF_PATH).open("rb") as fh:
        elf=ELFFile(fh)
        loads=[{"va":int(s["p_vaddr"]),"off":int(s["p_offset"]),
                "filesz":int(s["p_filesz"]),"flags":int(s["p_flags"])}
               for s in elf.iter_segments() if s["p_type"]=="PT_LOAD"]
        matching_relocs=[]
        relocs={}
        for sec in elf.iter_sections():
            if sec["sh_type"] not in ("SHT_RELA","SHT_REL"):continue
            symtab=elf.get_section(int(sec["sh_link"]))
            for r in sec.iter_relocations():
                where=int(r["r_offset"])
                idx=int(r["r_info_sym"])
                symbol=symtab.get_symbol(idx).name if idx and symtab is not None else None
                if symbol:relocs[where]=symbol
                if any(abs(where-s)<=0x18 for s in SLOTS):
                    matching_relocs.append({"at":hex(where),"section":sec.name,
                        "type":int(r["r_info_type"]),"symbol":symbol,
                        "addend":int(r["r_addend"]) if "r_addend" in r.entry else None})
    slot_data={}
    for s in SLOTS:
        payload=mapped_read(raw,loads,s,24)
        slot_data[hex(s)]={"file_bytes_hex":payload.hex() if payload else None,
            "file_u64":hex(int.from_bytes(payload[:8],"little")) if payload else None,
            "segment_is_writable":any(
               seg["va"]<=s<seg["va"]+seg["filesz"] and bool(seg["flags"]&2) for seg in loads),
            "cannot_prove_runtime_value":True}
    refs=scan_slots(raw,loads)
    funcs={name:function_cfg(raw,loads,pc,relocs) for name,pc in CALLEES.items()}
    # Proven object field accesses inside 0x285D10: x19 is x0 receiver (0x285D54 MOV).
    consumer=prev["callee_bounded_cfg"]["resource_object_consumer_candidate"]["all_instructions"]
    stores=[v for v in consumer if (v["mnemonic"].startswith("str") or v["mnemonic"]=="stp")
            and "[x19" in v["operands"]]
    loadx=[v for v in consumer if (v["mnemonic"].startswith("ldr") or v["mnemonic"]=="ldp")
            and "[x19" in v["operands"]]
    return {"schema":"acnh303-r26-callback-slots-object-consumer-v1",
      "original_elf_sha256":SHA,
      "r26_prior_sha256":hashlib.sha256(previous_bytes).hexdigest(),
      "slot_file_values":slot_data,
      "slot_related_dynamic_relocations":matching_relocs,
      "slot_adrp_add_exact_code_references":refs,
      "directly_called_followup_functions":funcs,
      "consumer_receiver_provenance":{"receiver_register":"x19",
         "introduced_at":"0x285d54 MOV X19,X0","confirmed_object_field_writes":stores,
         "confirmed_object_field_reads":loadx,
         "object_type":"unknown"},
      "referenced_ascii_literal_candidates":[literal(raw,loads,pc) for pc in STRING_ANCHORS],
      "verification_state":"REAL_ELF_CALLBACK_SLOTS_AND_OBJECT_FIELDS_TRACED_RUNTIME_CALLBACK_TARGET_UNPROVEN",
      "limits":"Initial file slots are not runtime values; static references may include nonexecution paths; no class name, shader factory, or allocator callback implementation is invented."}

def main():
    a=argparse.ArgumentParser()
    a.add_argument("--root",type=Path,default=Path("."))
    a.add_argument("--out",type=Path,default=Path(OUT))
    options=a.parse_args()
    out=analyze(options.root)
    options.out.parent.mkdir(parents=True,exist_ok=True)
    options.out.write_text(json.dumps(out,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf8")
    print("R26_SLOTS",[(k,len(v)) for k,v in out["slot_adrp_add_exact_code_references"].items()],
      "CALLEES",[(k,v["reachable_instruction_count"]) for k,v in out["directly_called_followup_functions"].items()])

if __name__=="__main__":main()
