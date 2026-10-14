#!/usr/bin/env python3
"""R13b: bounded method-table and EventFlow initializer ARM64 code audit.

All observations are literal file-backed ELF instructions. Unresolved BLR
targets / runtime global slots cannot be converted into gameplay semantics.
"""
from __future__ import annotations
import argparse, hashlib, json, struct
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf, get_bytes_va
from acnh303_round12_native_downstream import SHA, SIZE, local_cfg
from acnh303_round13_object_provenance import register_window

VTABLE=0x4A7AD40
INIT = {
    "eventflow_action_registration":(0xFF5B80,0xFF5D80),
    "eventflow_query_registration":(0x1084320,0x1084470),
}

def probe(blob, previous):
    if len(blob)!=SIZE or hashlib.sha256(blob).hexdigest()!=SHA:
        raise ValueError("ACNH 3.0.3 ELF SHA/size mismatch")
    if previous["elf_sha256"]!=SHA or previous["schema"]!="acnh303-r13-native-object-provenance-v1":
        raise ValueError("requires authentic R13 provenance JSON")
    segments=parse_elf(blob)
    raw=get_bytes_va(blob,segments,VTABLE,16*8)
    if raw is None:
        raise ValueError("expected file-backed BARS dispatch candidate")
    vtable=[]
    for i in range(16):
        target=struct.unpack_from("<Q",raw,i*8)[0]
        if not target:
            vtable.append({"index":i,"initial_qword":"0x0","target":None,
                           "note":"zero table slot; not an executable target"})
            continue
        executable=any(s["flags"]&1 and s["vaddr"]<=target and
                       target+0x200<=s["vaddr"]+s["filesz"] for s in segments)
        if not executable or target%4:
            vtable.append({"index":i,"initial_qword":hex(target),"target":None,
                           "note":"non-executable, unmapped, or unaligned value"})
            continue
        window=register_window(blob,segments,target,target+0x200)
        accesses=[r for r in window if r["op"].startswith(("ldr","ldp","ldrb","ldrh"))
                  and ("#0x10]" in r["args"] or "#0xc]" in r["args"]
                       or "[x0]" in r["args"] or "[x19]" in r["args"])]
        cfg=local_cfg(blob,segments,target,target,target+0x200)
        vtable.append({"index":i,"initial_qword":hex(target),"target":hex(target),
                       "first_0x200_bytes_instructions":window,
                       "candidate_object_field_reads":accesses,
                       "local_cfg_visited_count":cfg["visited_count"],
                       "local_cfg_truncated":cfg["truncated"],
                       "direct_calls":cfg["calls"],
                       "note":"method-table code target only; x0/x19 receiver type and field meaning require caller proof"})
    init={k:register_window(blob,segments,*v) for k,v in INIT.items()}
    # Preserve actual target method provenance: object->table pointer and table entry at +0x18.
    return {"schema":"acnh303-r13b-native-method-initializers-v1",
            "elf_sha256":SHA,"vtable_va":hex(VTABLE),
            "vtable_entries":vtable,"eventflow_initializers":init,
            "unverified":[
                "No runtime VTABLE owner identity for all EventFlow records",
                "No name-to-Action/Query actual gameplay dispatch proven",
                "Method offset access != proven BARS+member AMTA offset reader",
                "No dynamic trace or AMTA v5 field semantics"]}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",required=True,type=Path)
    p.add_argument("--previous",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    doc=probe(a.elf.read_bytes(),json.loads(a.previous.read_text("utf-8")))
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(doc,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R13b methods:",[x["target"] for x in doc["vtable_entries"] if x.get("target")],flush=True)
if __name__=="__main__":
    main()
