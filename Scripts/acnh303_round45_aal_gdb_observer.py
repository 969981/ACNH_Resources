# ACNH 3.0.3 AAL native observation-only breakpoint helper for real emulator GDB.
# Command: source scripts/acnh303_round45_aal_gdb_observer.py
# Requirements:
#   export ACNH303_MAIN_BASE=0x...  (actual live module base, never a guessed constant)
#   export ACNH303_AAL_CAPTURE_PATH=/path/to/real-session-registers.jsonl
#   export ACNH303_AAL_SESSION_ID=unique session text
# In GDB: attach to the real ACNH 3.0.3 debug target, then source this file.
# Software breakpoint insertion can change code bytes temporarily in the debugger;
# this script never writes game state or creates fake FileOpen events.
import gdb,os,json
BASE=int(os.environ["ACNH303_MAIN_BASE"],0)
SESSION=os.environ["ACNH303_AAL_SESSION_ID"]
PATH=os.environ["ACNH303_AAL_CAPTURE_PATH"]
ELF="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
if BASE<0x10000 or not SESSION or not PATH:raise RuntimeError("real base/session/capture path required")
anchors={"Bgm_Base_build":0x290F258,"Bgm_Base_call":0x290F278,
 "Manager_call":0x37316FC,"AAL_vtable_hop1":0x3E451FC,"AAL_vtable_hop2":0x3E45218}
_count=0
class Observe(gdb.Breakpoint):
 def __init__(self,name,offset):
  super().__init__("*"+hex(BASE+offset),internal=False)
  self.name=name;self.offset=offset
 def stop(self):
  global _count
  _count+=1
  names=["pc","sp","lr","x0","x1","x2","x3","x4","x5","x6","x7","x8","x19","x20","x21"]
  values={}
  for n in names:
   try:values[n]=int(gdb.parse_and_eval("$"+n))
   except Exception:values[n]=None
  d={"schema":"acnh303-r45-AAL-original-observer-register-event-v1",
     "type":"RegisterSnapshot","anchor":self.name,"module_base":BASE,
     "elf_sha256":ELF,"session_id":SESSION,"sequence":_count,
     "pc":values["pc"],"rva":self.offset,"registers":values,
     "actual_FileOpen_Read_Close_observed":False}
  if self.name=="Bgm_Base_call" and values.get("x1"):
   try:
    mem=gdb.selected_inferior().read_memory(values["x1"]+0x18,8).tobytes()
    ptr=int.from_bytes(mem,"little")
    d["Bgm_Base_field_address"]=values["x1"]+0x18
    d["Bgm_Base_ptr_from_stack"]=ptr
    if ptr and 0x10000<ptr<(1<<63):
     raw=gdb.selected_inferior().read_memory(ptr,48).tobytes()
     d["Bgm_Base_name_bytes_hex_first_48"]=raw.hex()
   except Exception as e:d["Bgm_Base_read_error"]=str(e)[:256]
  with open(PATH,"a",encoding="utf-8") as file:
   file.write(json.dumps(d,sort_keys=True)+"\n")
   file.flush()
  return False
for name,rva in anchors.items():
 Observe(name,rva)
print("R45: real ACNH 3.0.3 GDB source-code anchor observation armed; NO FileOpen claimed.")
