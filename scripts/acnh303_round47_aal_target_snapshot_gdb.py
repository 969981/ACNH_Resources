# R47 optional stage after R46 actual X8 dispatch trace. GDB source in one REAL session.
# ACNH303_MAIN_BASE=0x... ACNH303_AAL_SESSION_ID=... ACNH303_AAL_CAPTURE_PATH=...
# ACNH303_ORIGINAL_MAIN_ELF=... ACNH303_AAL_TARGET_RVAS=0x123,0x456
# Only manually observed R46 target RVAs; never infer a FileOpen API by address.
# (gdb) source scripts/acnh303_round47_aal_target_snapshot_gdb.py
import gdb
import os
import json
import hashlib

BASE=int(os.environ["ACNH303_MAIN_BASE"],0)
SESSION=os.environ["ACNH303_AAL_SESSION_ID"]
LOG=os.environ["ACNH303_AAL_CAPTURE_PATH"]
BINARY=os.environ["ACNH303_ORIGINAL_MAIN_ELF"]
ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
TARGETS=[int(x,0) for x in os.environ["ACNH303_AAL_TARGET_RVAS"].split(",") if x.strip()]
if not SESSION or not LOG or BASE<0x10000 or not TARGETS or len(set(TARGETS))!=len(TARGETS) or len(TARGETS)>16:
    raise RuntimeError("require unique session/base/capture/1..16 observed RVA(s)")
if any(x<0 or x>=0x6000000 or x%4 for x in TARGETS):
    raise RuntimeError("RVA outside bounded/aligned ACNH main range")
with open(BINARY,"rb") as f:
    if hashlib.file_digest(f,"sha256").hexdigest()!=ELF_SHA:
        raise RuntimeError("reference ACNH 3.0.3 main ELF SHA mismatch")
SEQ=0
def reg(name):
    try:return int(gdb.parse_and_eval("$"+name))
    except Exception:return None
def snap(ptr,n):
    if not isinstance(ptr,int) or ptr<0x10000 or ptr>=1<<63:return {"status":"INVALID_POINTER"}
    try:
        b=gdb.selected_inferior().read_memory(ptr,n).tobytes()
        return {"status":"READ","address":ptr,"byte_length":len(b),
                "bytes_hex":b.hex(),"sha256":hashlib.sha256(b).hexdigest()}
    except Exception as ex:return {"status":"UNREADABLE","detail":str(ex)[:120]}
class Target(gdb.Breakpoint):
    def __init__(self,rva):
        super().__init__("*"+hex(BASE+rva))
        self.rva=rva
    def stop(self):
        global SEQ
        SEQ+=1
        registers={n:reg(n) for n in ["pc","x0","x1","x2","x3","x4","x5","x6","x7","x8","x30","sp"]}
        record={"schema":"acnh303-r47-aal-target-entry-v1","type":"ObservedCandidateTargetEntry",
                "session_id":SESSION,"sequence":SEQ,"module_base":BASE,
                "pc":registers["pc"],"rva":self.rva,"registers":registers,
                "instruction_bytes":snap(BASE+self.rva,32),
                "argument_pointer_snapshots":{n:snap(registers[n],96) for n in ["x0","x1","x2","x3"]},
                "reference_ELF_file_sha256":ELF_SHA,
                "live_loaded_module_independently_hash_verified":False,
                "native_FileOpen_Read_Close_proven":False}
        with open(LOG,"a",encoding="utf-8") as f:
            f.write(json.dumps(record,sort_keys=True)+"\n")
        return False
for rva in TARGETS: Target(rva)
print("R47: captured bounded candidate target-entry bytes only, NOT FileOpen/Read/Close.")
