#!/usr/bin/env python3
"""R13c: object+0x10 BARS table consumer and EventFlow generic descriptor method.

Uses authenticated, SHA-fixed ACNH 3.0.3 AArch64 ELF only.
Virtual-method target resolution is a *static initialization candidate*,
not proof that game executes that destination in a specific runtime flow.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
from acnh303_round12_native_downstream import SHA,SIZE,local_cfg
from acnh303_round13_object_provenance import register_window

def qword(blob,segments,va):
    b=get_bytes_va(blob,segments,va,8)
    return int.from_bytes(b,"little") if b is not None else None

def action_dispatch_initial_candidate(blob,segments,source_va=0x4AB2020):
    """X8=*(source_va)+0x10, stored as record header; generic virtual method at +0x18."""
    initial=qword(blob,segments,source_va)
    header=initial+0x10 if initial is not None else None
    method_slot=header+0x18 if header is not None else None
    method=qword(blob,segments,method_slot) if method_slot is not None else None
    executable=next((s for s in segments if s["flags"]&1 and method is not None
                     and s["vaddr"]<=method< s["vaddr"]+s["filesz"]),None)
    return {"source_slot":hex(source_va),"source_initial_qword":hex(initial) if initial is not None else None,
            "descriptor_vtable_candidate":hex(header) if header is not None else None,
            "method_slot_plus_0x18":hex(method_slot) if method_slot is not None else None,
            "initial_method_pointer":hex(method) if method is not None else None,
            "target_executable_in_elf":executable is not None,
            "method_first_0x80":register_window(blob,segments,method,method+0x80)
               if executable and method%4==0 and method+0x80<=executable["vaddr"]+executable["filesz"] else [],
            "required_runtime_validation":"Check actual initialized descriptor X23 and indirect BLR target; no Action handler identity inferred."}

def analyze(blob,previous):
    if len(blob)!=SIZE or hashlib.sha256(blob).hexdigest()!=SHA:
        raise ValueError("wrong ELF SHA or size")
    if previous.get("schema")!="acnh303-r13b-native-method-initializers-v1" or previous.get("elf_sha256")!=SHA:
        raise ValueError("requires R13b verified method table evidence")
    segments=parse_elf(blob)
    func=0x3ACCCE0
    body=register_window(blob,segments,func,func+0x900)
    cfg=local_cfg(blob,segments,func,func,func+0x900)
    bars_callee_receives_x4=[r for r in body if "x4" in r["reads"] or "w4" in r["reads"]
                             or "x4," in r["args"] or "[x4" in r["args"]]
    query_initialize=register_window(blob,segments,0x1084140,0x1084470)
    return {"schema":"acnh303-r13c-borders-consumers-v1","elf_sha256":SHA,
            "bars_member_table_callee":{
                "caller_function":"0x3acb5d8","object_pointer_read":"0x3acb66c: LDR X21,[X19,#0x10]",
                "pre_call":"0x3acb684: MOV X4,X21",
                "call_site":"0x3acb688","callee_start":hex(func),
                "callee_first_0x900":body,"callee_x4_uses":bars_callee_receives_x4,
                "callee_cfg_direct_calls":cfg["calls"],
                "cfg_visited":cfg["visited_count"],
                "limitation":"X4 parameter identity in callee must be preserved through branch/calls; AMTA header semantics not proven"},
            "eventflow_action_virtual_method_candidate":action_dispatch_initial_candidate(blob,segments),
            "eventflow_query_initializer_extended":query_initialize,
            "limits":["No actual dynamic BLR destination or gameplay result observed",
                      "No AMTA v5 header member +0x10..+0x30 consuming routine conclusively named",
                      "File-initialized pointers may relocate or change at runtime"]}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--elf",type=Path,required=True)
    p.add_argument("--previous",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    obj=analyze(a.elf.read_bytes(),json.loads(a.previous.read_text("utf-8")))
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(obj,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R13c BARS downstream",obj["bars_member_table_callee"]["callee_start"],
          "action generic-method",obj["eventflow_action_virtual_method_candidate"]["initial_method_pointer"],flush=True)
if __name__=="__main__":
    main()
