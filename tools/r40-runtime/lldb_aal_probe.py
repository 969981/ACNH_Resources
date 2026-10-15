"""R40 experimental LLDB read-only source-event probe for an ALREADY ATTACHED
ACNH 3.0.3 game process.

Usage within LLDB (debugger must support AArch64 game process and LLDB Python):
    command script import /path/to/tools/r40-runtime/lldb_aal_probe.py
    acnh-r40-aal <main_module_base_hex> <output.ndjson>

No blanket memory writes, no game save writes, no source audio copies. This
installs normal debugger breakpoints, which do pause/instrument execution:
not a nondisruptive native trace. Not tested against any connected console.
Emits *raw observer evidence* only, NOT an accepted R40 FILE_OPEN/READ proof.
Users must verify source executable sha256 externally and preserve raw logs.
"""
from __future__ import annotations
import json,time,threading
try:import lldb
except ImportError:lldb=None
WATCH={
  0x290F278:"BGM_CALL_REGISTER",
  0x37316E4:"BGM_NAME_STRUCT_LOAD",
  0x37316FC:"BGM_PACKET_CALL",
  0x3E451FC:"AAL_VTABLE_SLOT_0x20",
  0x3E45218:"AAL_VTABLE_SLOT_0x28",
  0x3E45250:"AAL_FURTHER_MANAGER",
  0x290F2B0:"BGM_CALL_ADJACENT_0x3E107E0",
  0x290F2F0:"BGM_CALL_ADJACENT_0x3AE4980"
}
STATE={"base":None,"out":None,"entries":0}
LOCK=threading.Lock()
def __lldb_init_module(debugger,d):
 debugger.HandleCommand("command script add -f lldb_aal_probe.arm acnh-r40-aal")
 print("acnh-r40-aal <module_base_hex> <output.ndjson> (process must already be attached)")
def read_mem(proc,addr,count):
 if not addr or addr<0x1000 or count<1 or count>512:return None
 err=lldb.SBError()
 b=proc.ReadMemory(addr,count,err)
 return b if err.Success() and len(b)==count else None
def reg(frame,name):
 r=frame.FindRegister(name)
 if not r.IsValid():return None
 return int(r.GetValueAsUnsigned())
def maybe_string(proc,ptr):
 b=read_mem(proc,ptr,1)
 if not b:return None
 raw=[]
 for offset in range(64):
  x=read_mem(proc,ptr+offset,1)
  if x is None:return None
  if x==b"\x00":break
  raw.append(x[0])
 try:return bytes(raw).decode("ascii")
 except UnicodeDecodeError:return None
def breakpoint_callback(frame,bp_loc,_):
 try:
  base=STATE.get("base")
  if base is None:return False
  pc=reg(frame,"pc")
  if pc is None:return False
  relative=pc-base
  if relative not in WATCH:return False
  proc=frame.GetThread().GetProcess()
  registers={k:(hex(val) if val is not None else None)
    for k in ("x0","x1","x2","x3","x4","x5","x6","x7","x8","x19","x20","x21","x22","sp","pc")
    if (val:=reg(frame,k)) is not None}
  event={"schema":"acnh303-r40-lldb-raw-observer-event-v1",
    "observer_stage":WATCH[relative],
    "observed_pc_rva_hex":hex(relative),
    "observed_main_module_base_hex":hex(base),
    "host_monotonic_ns":time.monotonic_ns(),
    "registers":registers,
    "game_render_frame_known":False,
    "verified_original_ELF_sha256_at_runtime":False,
    "data_origin":"attached_game_debugger_register_snapshot_not_attested"}
  if relative in (0x290F278,0x37316E4,0x37316FC):
   x1=reg(frame,"x1")
   raw=read_mem(proc,x1+0x18,8) if x1 else None
   if raw:
    ptr=int.from_bytes(raw,"little")
    event["BgmBase_name_pointer_value"]=hex(ptr)
    event["BgmBase_observed_cstring_64byte_bounded"]=maybe_string(proc,ptr)
  if relative in (0x3E451FC,0x3E45218):
   x8=reg(frame,"x8")
   x21=reg(frame,"x21")
   event["indirect_target_address"]=hex(x8) if x8 else None
   event["indirect_target_main_relative_rva"]=hex(x8-base) if x8 and x8>=base else None
   obj=read_mem(proc,x21+0xa8,8) if x21 else None
   event["manager_slot_plus_a8_pointer"]=hex(int.from_bytes(obj,"little")) if obj else None
  with LOCK:
   with open(STATE["out"],"a",encoding="utf8") as fh:fh.write(json.dumps(event,separators=(",",":"))+"\n")
   STATE["entries"]+=1
 except Exception as ex:
  # Never modify game memory or swallow test state as native validation.
  print("R40_AAL_PROBE_READ_ONLY_CAPTURE_ERROR",repr(ex))
 return False # do not leave game stopped after observer callback
def arm(debugger,command,exe_ctx,result,d):
 if lldb is None:
  result.SetError("lldb module unavailable");return
 args=command.split(maxsplit=1)
 if len(args)!=2:
  result.SetError("usage: acnh-r40-aal <module_base_hex> <output.ndjson>");return
 try:base=int(args[0],16)
 except Exception:
  result.SetError("module base not hex");return
 if base<=0 or base%4096:
  result.SetError("module base must be real observed aligned image base");return
 if not args[1].endswith(".ndjson"):
  result.SetError("raw event output must be named .ndjson");return
 target=debugger.GetSelectedTarget()
 process=target.GetProcess()
 if not target.IsValid() or not process.IsValid() or process.GetState() in (lldb.eStateInvalid,lldb.eStateExited):
  result.SetError("must attach to real game process before arming read-only probes");return
 STATE.update({"base":base,"out":args[1],"entries":0})
 handles=[]
 for off,label in WATCH.items():
  bp=target.BreakpointCreateByAddress(base+off)
  if not bp.IsValid():
   result.SetError("cannot set original source RVA "+hex(off));return
  bp.SetScriptCallbackFunction("lldb_aal_probe.breakpoint_callback")
  handles.append({"rva":hex(off),"breakpoint_id":bp.GetID(),"observer_label":label})
 result.PutCString("R40 original AArch64 observer breakpoints armed (not proven file I/O): "+json.dumps(handles))
