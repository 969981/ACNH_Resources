#!/usr/bin/env python3
"""R46: verify EXACT original ARM64 BLR X8, run-time target capture gate.

Static BLR / function context is not FileOpen. Actual target address comes only
from one real GDB debug session; capture may remain missing or UNATTESTED.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
R39=Path("derived/3.0.3/r39_aal_manager/original_manager_vtable_and_path_native_code.json")
ELF="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
SITES={0x3e451fc:0x20,0x3e45218:0x28}
def generate(trace=None):
 d=json.loads(R39.read_text("utf8"))
 if d.get("real_original_ACNH_ELF_SHA256")!=ELF:raise ValueError("original 3.0.3 main ELF SHA drift")
 instr={int(x["pc"],16):x for x in d["first_manager_real_instruction_evidence"]}
 for pc,slot in SITES.items():
  b=instr.get(pc)
  if not b or b["mnemonic"]!="blr" or b["operands"]!="x8" or b["raw_bytes"]!="00013fd6":
   raise ValueError("source disassembly BLR X8 bytes or RVA mismatch")
  for off,reg in [(pc-8,"ldr"),(pc-4,"ldr")]:
   if off not in instr or instr[off]["mnemonic"]!=reg:raise ValueError("vtable sequence missing")
  if hex(slot) not in instr[pc-4]["operands"].lower():
   raise ValueError("vtable slot offset not supported by original instructions")
 if d.get("no_runtime_file_open_or_read_evidence_captured") is not True:
  raise ValueError("R39 original absence of runtime trace unexpectedly changed")
 result={"schema":"acnh303-r46-original-AAL-BLR-actual-target-gate-v1",
 "original_main_elf_sha256":ELF,
 "R39_native_instruction_report_sha256":hashlib.sha256(R39.read_bytes()).hexdigest(),
 "source_bound_static_BLR":[{"rva":hex(pc),"instruction":"BLR X8","raw_original_instruction_bytes":"00013fd6",
   "vtable_slot_offset":hex(slot),"source_object_register":"X22",
   "resolved_target_RVA_from_live_debugger":None} for pc,slot in SITES.items()],
 "original_ELF_name_packet_and_manager_chain":{
  "Bgm_Base_literal_va":d["BgmBase_source_literal_VA"],
  "name_packet_field":d["BgmBase_name_packet_field"],
  "manager_call":d["first_manager_call"],
  "other_source_string_path_sites":list(d["Sound_Resource_literal_related_native_path_windows"]),
  "unproven_separate_call_graphs":True},
 "runtime_vtable_target_status":"NOT_CAPTURED","AAL_file_open_read_close_status":"NOT_CAPTURED",
 "live_AAL_file_IO_proven":False,"audio_PCM_proven":False,
 "limits":"Verified ELF origin by historical SHA and exact original ARM64 bytes only. X8 concrete target is unknowable statically here; require live game GDB trace."}
 if trace is None:return result
 if not trace.exists():raise ValueError("missing real runtime trace")
 rows=[json.loads(line) for line in trace.read_text("utf8").splitlines() if line.strip()]
 if not rows or len(rows)>100000:raise ValueError("empty or unbounded observer log")
 ids={x.get("session_id") for x in rows}
 if len(ids)!=1 or None in ids:raise ValueError("session identity missing/mixed")
 seq=[x.get("sequence") for x in rows]
 if any(not isinstance(x,int) for x in seq) or seq!=sorted(set(seq)):
  raise ValueError("nonmonotonic or duplicate GDB capture sequence")
 hits=[]
 for e in rows:
  if e.get("schema")!="acnh303-r46-gdb-indirect-dispatch-observer-v1" or e.get("ELF_reference_file_sha256")!=ELF:
   raise ValueError("unverified GDB observer version or reference ELF")
  if e.get("type")!="IndirectBLRX8":continue
  rva=e.get("rva")
  if rva not in SITES:raise ValueError("unknown original BLR site")
  if not isinstance(e.get("module_base"),int) or e.get("pc")!=e["module_base"]+rva:
   raise ValueError("wrong live module/RVA/PC relation")
  if e.get("vtable_slot_offset")!=SITES[rva]:raise ValueError("invalid original vtable slot")
  if not e.get("slot_equals_register_x8"):raise ValueError("original live vtable slot not matching X8")
  dest=e.get("resolved_target_va")
  if not isinstance(dest,int) or dest<0x10000:raise ValueError("invalid recorded branch target")
  hits.append({"BLR_site_rva":hex(rva),"target_virtual_address":hex(dest),
   "relative_to_reported_module_base":hex(dest-e["module_base"]) if dest>=e["module_base"] else None,
   "x22_object_virtual_address":e.get("object_x22_va"),"source_observer_sequence":e["sequence"]})
 result["runtime_vtable_target_status"]="USER_GDB_OBSERVATION_STRUCTURALLY_VALID_UNATTESTED" if hits else "NO_MATCHING_ACTUAL_TARGETS"
 result["runtime_source_log_sha256"]=hashlib.sha256(trace.read_bytes()).hexdigest()
 result["observer_session_id"]=next(iter(ids))
 result["observed_original_BLR_dynamic_target_candidates"]=hits
 result["live_AAL_file_IO_proven"]=False
 result["AAL_file_open_read_close_status"]="NOT_CAPTURED"
 # A reported target cannot attest it was really run in game; further actual
 # disassembly and proven FileOpen/Read/Close trace required.
 return result
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--capture",type=Path)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();x=generate(a.capture);a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(x,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
 print("R46_AAL_NATIVE_DISPATCH",x["runtime_vtable_target_status"],x["AAL_file_open_read_close_status"])
if __name__=="__main__":main()
