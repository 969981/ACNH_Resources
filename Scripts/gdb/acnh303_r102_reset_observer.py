"""GDB read-only reset entry observer. Source in an attached AArch64 GDB.
acnh-reset-observe <runtime_module_base> <fingerprints.json> <target>
One hardware breakpoint at a time; does not patch target bytes, change registers, or resume.
"""
import gdb,json
from pathlib import Path
ACTIVE=None
class ResetProbe(gdb.Breakpoint):
    def __init__(self,address,target):
        super().__init__("*0x%x"%address,type=gdb.BP_HARDWARE_BREAKPOINT)
        self.target=target
    def stop(self):
        frame=gdb.selected_frame()
        regs={n:hex(int(frame.read_register(n))) for n in ("pc","sp","x0","x1","x2","x3","x30")}
        gdb.write(json.dumps({"target":self.target,"registers":regs,"event":"function_entry","runtime_event_semantics_verified":False})+"\n")
        return True
class Observe(gdb.Command):
    def __init__(self):super().__init__("acnh-reset-observe",gdb.COMMAND_USER)
    def invoke(self,arg,from_tty):
        global ACTIVE
        args=gdb.string_to_argv(arg)
        if len(args)!=3:raise gdb.GdbError("usage: acnh-reset-observe MODULE_BASE FINGERPRINT_JSON TARGET")
        base=int(args[0],0)
        doc=json.loads(Path(args[1]).read_text(encoding="utf-8"))
        if doc.get("schema")!="r102-reset-fingerprint-v1" or doc.get("elf_sha256")!="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664":
            raise gdb.GdbError("wrong fingerprint source")
        if args[2] not in doc["targets"]:raise gdb.GdbError("unknown target: "+", ".join(doc["targets"]))
        if "aarch64" not in gdb.selected_frame().architecture().name().lower():raise gdb.GdbError("AArch64 target required")
        t=doc["targets"][args[2]]
        address=base+int(t["rva"])
        expected=bytes.fromhex(t["bytes"])
        if len(expected)!=16 or bytes(gdb.selected_inferior().read_memory(address,16))!=expected:
            raise gdb.GdbError("runtime fingerprint mismatch; no breakpoint installed")
        if ACTIVE is not None and ACTIVE.is_valid():ACTIVE.delete()
        ACTIVE=ResetProbe(address,args[2])
        gdb.write("Hardware probe armed; use continue manually. No memory/register writes.\n")
class Clear(gdb.Command):
    def __init__(self):super().__init__("acnh-reset-clear",gdb.COMMAND_USER)
    def invoke(self,arg,from_tty):
        global ACTIVE
        if ACTIVE is not None and ACTIVE.is_valid():ACTIVE.delete()
        ACTIVE=None
Observe();Clear()
