#!/usr/bin/env python3
"""Audits R47 bounded GDB target-entry snapshots against actual R46 dispatch rows.

Offline structural validation cannot attest that supplied JSONL came from a real game.
"""
from __future__ import annotations
import argparse, hashlib, json
from pathlib import Path

ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
R46_SCHEMA="acnh303-r46-gdb-indirect-dispatch-observer-v1"
R47_SCHEMA="acnh303-r47-aal-target-entry-v1"

def load(path):
    rows=[json.loads(s) for s in path.read_text("utf-8").splitlines() if s.strip()]
    if not rows or len(rows)>50000:
        raise ValueError("empty / unbounded JSONL")
    return rows

def validate_snapshot(s, expected_max):
    if s.get("status") != "READ":
        if s.get("status") not in ("INVALID_POINTER","UNREADABLE"):
            raise ValueError("unknown pointer read state")
        return
    b=bytes.fromhex(s["bytes_hex"])
    if len(b)!=s["byte_length"] or len(b)>expected_max or hashlib.sha256(b).hexdigest()!=s["sha256"]:
        raise ValueError("snapshot bytes/size/sha incoherent")
    if not isinstance(s.get("address"),int) or s["address"]<0x10000:
        raise ValueError("invalid snapshot virtual address")

def audit(capture=None, dispatch=None):
    result={"schema":"acnh303-r47-aal-target-provenance-gate-v1",
        "candidate_target_entries":"NOT_CAPTURED","dispatch_correlated":"NOT_CAPTURED",
        "file_path_open_read_close_observed":"NOT_CAPTURED","PCM_playback_verified":False,
        "runtime_FileOpen_Read_Close_proven":False,
        "limits":"Requires real R46+R47 same-session debugger logs, actual disassembly, path/handle/returned read buffer and independent original resource comparison. No JSON alone attests real execution."}
    if capture is None: return result
    if dispatch is None: raise ValueError("R47 target captures require R46 dispatch log")
    rows=load(capture)
    r46=load(dispatch)
    sessions={x.get("session_id") for x in rows+r46}
    if len(sessions)!=1 or None in sessions:raise ValueError("mixed/missing session ID")
    bases={x.get("module_base") for x in rows+r46}
    if len(bases)!=1 or not isinstance(next(iter(bases)),int):raise ValueError("mixed/missing module base")
    accepted=set()
    for x in r46:
        if x.get("schema")!=R46_SCHEMA or x.get("ELF_reference_file_sha256")!=ELF_SHA:
            raise ValueError("different original R46 observer/ELF reference")
        if x.get("type")!="IndirectBLRX8":continue
        if x.get("rva") not in (0x3e451fc,0x3e45218):raise ValueError("unknown dispatch site")
        if x.get("pc")!=x["module_base"]+x["rva"] or not x.get("slot_equals_register_x8"):
            raise ValueError("R46 dispatch site/vtable not structurally verified")
        target=x.get("resolved_target_va")
        if not isinstance(target,int): raise ValueError("invalid resolved target")
        accepted.add(target)
    if not accepted:raise ValueError("R46 actual indirect targets absent")
    seq=[]
    matched=[]
    for x in rows:
        if x.get("schema")!=R47_SCHEMA or x.get("reference_ELF_file_sha256")!=ELF_SHA:
            raise ValueError("unexpected R47 observer/reference")
        if x.get("type")!="ObservedCandidateTargetEntry":raise ValueError("unexpected R47 event")
        if x.get("pc")!=x["module_base"]+x.get("rva",-1) or x["pc"] not in accepted:
            raise ValueError("candidate not present in matching R46 dispatch")
        if x["registers"].get("pc")!=x["pc"]:raise ValueError("register PC mismatch")
        ins=x["instruction_bytes"]
        validate_snapshot(ins,32)
        if ins.get("status")=="READ" and ins["address"]!=x["pc"]:
            raise ValueError("candidate instruction address mismatch")
        for reg in ("x0","x1","x2","x3"):
            s=x["argument_pointer_snapshots"][reg]
            validate_snapshot(s,96)
            if s.get("status")=="READ" and s["address"]!=x["registers"][reg]:
                raise ValueError("argument pointer origin mismatch")
        seq.append(x["sequence"])
        matched.append({"entry_rva":hex(x["rva"]),"entry_pc":hex(x["pc"]),
                        "sequence":x["sequence"],"argument_memory_reads":sum(
                            x["argument_pointer_snapshots"][n]["status"]=="READ" for n in ("x0","x1","x2","x3"))})
    if any(type(x) is not int for x in seq) or seq!=sorted(set(seq)):
        raise ValueError("duplicate/non-monotone sequence")
    result.update({"candidate_target_entries":"STRUCTURALLY_COHERENT_UNATTESTED",
        "dispatch_correlated":"SAME_DECLARED_SESSION_COHERENT_UNATTESTED",
        "session_id":next(iter(sessions)),"entry_count":len(matched),
        "candidate_target_entries_summary":matched,
        "capture_sha256":hashlib.sha256(capture.read_bytes()).hexdigest(),
        "dispatch_sha256":hashlib.sha256(dispatch.read_bytes()).hexdigest()})
    return result

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--capture",type=Path)
    p.add_argument("--dispatch",type=Path)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    result=audit(a.capture,a.dispatch)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R47_AAL_TARGET_GATE",result["candidate_target_entries"],result["file_path_open_read_close_observed"])
if __name__=="__main__":
    main()
