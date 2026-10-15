#!/usr/bin/env python3
"""Read-only ACNH 3.0.3 raw breakpoint event log auditor.

Consumes only actual external observer NDJSON captured from a debugger.
This does NOT synthesize runtime captures, infer FileOpen from BLR, or claim
the game ran when there is no real data. Logs contain register/address
snapshot metadata, never Nintendo copyrighted audio payload.
"""
from __future__ import annotations
import argparse,collections,hashlib,json
from pathlib import Path
EXPECTED={
 "0x290f278":"BGM_CALL_REGISTER",
 "0x37316e4":"BGM_NAME_STRUCT_LOAD",
 "0x37316fc":"BGM_PACKET_CALL",
 "0x3e451fc":"AAL_VTABLE_SLOT_0x20",
 "0x3e45218":"AAL_VTABLE_SLOT_0x28",
 "0x3e45250":"AAL_FURTHER_MANAGER",
 "0x290f2b0":"BGM_CALL_ADJACENT_0x3E107E0",
 "0x290f2f0":"BGM_CALL_ADJACENT_0x3AE4980"}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--ndjson",type=Path)
 p.add_argument("--out",type=Path,required=True)
 p.add_argument("--require-events",action="store_true")
 a=p.parse_args()
 status={"schema":"acnh303-r40-observed-native-AAL-BgmBase-raw-breakpoint-register-evidence-summary-v1",
   "real_observer_log_supplied":False,"observed_count":0,
   "events_with_true_Bgm_Base_cstring":0,"observed_vtable_rva_targets":[],
   "native_AAL_FileOpen_Read_proven":False,
   "raw_native_capture_file_sha256":None,
   "state":"NOT_CAPTURED",
   "limit":"Debugger PC register snapshots are not independently attested or proof of FileOpen/Read. Actual source bytes, path, read spans, buffer hashes and matching game run must be provided separately."}
 if a.ndjson is not None:
  data=a.ndjson.read_bytes()
  raw=[line for line in data.splitlines() if line.strip()]
  if not raw:raise ValueError("empty external native probe log must not be treated as capture")
  if len(raw)>5_000_000:raise ValueError("absurd observer record count")
  entries=[json.loads(line) for line in raw]
  hits=collections.Counter()
  events=[];targets=[]
  for e in entries:
   if e.get("schema")!="acnh303-r40-lldb-raw-observer-event-v1":
    raise ValueError("foreign / fake observer event schema")
   addr=e.get("observed_pc_rva_hex")
   label=EXPECTED.get(addr)
   if label is None or e.get("observer_stage")!=label:
    raise ValueError("unverified source observer PC or mislabeled trace")
   if "registers" not in e or not isinstance(e["registers"],dict):
    raise ValueError("no real observed registers")
   hits[label]+=1
   if e.get("BgmBase_observed_cstring_64byte_bounded")=="Bgm_Base":
    status["events_with_true_Bgm_Base_cstring"]+=1
   if label.startswith("AAL_VTABLE"):
    target=e.get("indirect_target_main_relative_rva")
    if target and not target.startswith("-"):targets.append(target)
   events.append(e.get("host_monotonic_ns"))
  if not all(type(x) is int and x>0 for x in events):raise ValueError("invalid monotonic timestamps in native source log")
  status.update({"real_observer_log_supplied":True,
     "observed_count":len(entries),"raw_native_capture_file_sha256":hashlib.sha256(data).hexdigest(),
     "observed_breakpoint_stage_histogram":dict(hits),
     "observed_vtable_rva_targets":sorted(set(targets)),
     "state":"EXTERNAL_DEBUGGER_REGISTERS_RECORDED_NOT_AAL_FILE_IO",
     "original_main_module_base_candidates":sorted(set(e["observed_main_module_base_hex"] for e in entries))})
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(status,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
 print("R40_RAW_AAL_DEBUGGER_OBSERVER",status["state"],status["observed_count"])
 if a.require_events and not status["real_observer_log_supplied"]:
  raise SystemExit("Original real external native observer events not available — NOT_CAPTURED")
if __name__=="__main__":main()
