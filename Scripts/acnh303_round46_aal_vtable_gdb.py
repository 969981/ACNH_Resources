# R46 real game / emulator GDB observation of exact original AAL BLR X8 targets.
# Use with actual ACNH 3.0.3 process (not fake offline logs). Requires:
# ACNH303_MAIN_BASE=0xactual   ACNH303_ORIGINAL_MAIN_ELF=/path/to/verified/main.elf
# ACNH303_AAL_CAPTURE_PATH=/path/to/unaltered.jsonl  ACNH303_AAL_SESSION_ID=unique
# ACNH303_AAL_WATCH_TARGETS=1  (optional cap 16 unique in-main targets; default off)
# (gdb) source scripts/acnh303_round46_aal_vtable_gdb.py
# Hardware or software breakpoint choice is made by debugger; program writes avoided.
import gdb,os,json,hashlib
BASE=int(os.environ["ACNH303_MAIN_BASE"],0)
SESSION=os.environ["ACNH303_AAL_SESSION_ID"]
LOG=os.environ["ACNH303_AAL_CAPTURE_PATH"]
BINARY=os.environ["ACNH303_ORIGINAL_MAIN_ELF"]
ELF="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
if not all((SESSION,LOG,BINARY)) or BASE<0x10000:raise RuntimeError("real base, ELF file, session and log required")
with open(BINARY,"rb") as f:
 h=hashlib.file_digest(f,"sha256").hexdigest()
if h!=ELF:raise RuntimeError("wrong original ACNH 3.0.3 ELF SHA; no breakpoints placed")
SITES={0x3e451fc:0x20,0x3e45218:0x28}
ARMED=os.environ.get("ACNH303_AAL_WATCH_TARGETS")=="1"
COUNT=0
TARGETS=set()
def reg(n):
 try:return int(gdb.parse_and_eval("$"+n))
 except Exception:return None
def qword(ptr):
 if not isinstance(ptr,int) or ptr<0x10000 or ptr >= 1<<63:raise ValueError("unsafe pointer")
 return int.from_bytes(gdb.selected_inferior().read_memory(ptr,8).tobytes(),"little")
def emit(record):
 global COUNT
 COUNT+=1
 record.update({"schema":"acnh303-r46-gdb-indirect-dispatch-observer-v1",
   "sequence":COUNT,"session_id":SESSION,
   "ELF_reference_file_sha256":ELF,"live_module_bytes_independently_verified":False,
   "native_FileOpen_Read_Close_proven":False,"module_base":BASE})
 with open(LOG,"a",encoding="utf8") as f:
  f.write(json.dumps(record,sort_keys=True)+"\n")
  f.flush()
class TargetEntry(gdb.Breakpoint):
 def __init__(self,va):
  super().__init__("*"+hex(va))
  self.addr=va
 def stop(self):
  emit({"type":"IndirectTargetEntry","pc":reg("pc"),
       "target_virtual_address":self.addr,
       "registers":{n:reg(n) for n in ("x0","x1","x2","x3","x4","x5","x6","x7","x8","x21","x22","x30","sp")}})
  return False
class Dispatch(gdb.Breakpoint):
 def __init__(self,rva,slot):
  super().__init__("*"+hex(BASE+rva))
  self.rva=rva;self.slot=slot
 def stop(self):
  x8=reg("x8");x22=reg("x22");x21=reg("x21")
  actual=None;vptr=None;ok=False;read_error=None;mgr=None
  try:
   vptr=qword(x22)
   actual=qword(vptr+self.slot)
   ok=(actual==x8 and x8 is not None)
  except Exception as e:read_error=repr(e)[:160]
  try: mgr=qword(x21+0xa8)
  except Exception:pass
  emit({"type":"IndirectBLRX8","rva":self.rva,"pc":reg("pc"),
    "resolved_target_va":x8,"vtable_slot_offset":self.slot,
    "object_x22_va":x22,"object_x21_va":x21,
    "object_x21_plus_a8_pointer":mgr,"vtable_va_from_x22":vptr,
    "target_from_vtable_slot":actual,"slot_equals_register_x8":ok,
    "pointer_read_error":read_error,
    "registers":{n:reg(n) for n in ("x0","x1","x2","x3","x4","x5","x6","x7","x8","x19","x20","x21","x22","x30","sp")}})
  if ARMED and ok and isinstance(x8,int) and BASE<=x8<BASE+0x6000000 and x8 not in TARGETS and len(TARGETS)<16:
   TARGETS.add(x8)
   try:TargetEntry(x8)
   except Exception as e:emit({"type":"DynamicTargetBreakpointFailure","target_virtual_address":x8,"reason":str(e)[:160]})
  return False
for rva,slot in SITES.items():Dispatch(rva,slot)
print("R46: exact main+0x3E451FC/+0x3E45218 BLR X8 observed; no FileOpen label or runtime I/O claimed.")
