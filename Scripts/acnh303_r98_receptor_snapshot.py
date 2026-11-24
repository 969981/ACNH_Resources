"""GDB read-only receptor table capture. Source this script in GDB Python.
Usage: acnh-receptor-snapshot RECEPTOR_ADDRESS MODULE_BASE OUTPUT_JSON
Addresses must come from a verified 3.0.3 session; no breakpoints, writes or calls.
"""
import gdb,json,struct
from pathlib import Path
TARGETS={0x7d83e6a3:"EventFlowQueryNpcInviteCheck",0xbb045a73:"EventFlowQueryIsCollaboNpc",
         0xf762c39c:"EventFlowQueryCheckNpcFavorLevel",0xabc7e873:"EventFlowActionNpcDecideQuestReward",
         0x924f928a:"EventFlowActionNpcAddFriendship"}
class Snapshot(gdb.Command):
    def __init__(self):super().__init__("acnh-receptor-snapshot",gdb.COMMAND_DATA)
    def invoke(self,arg,from_tty):
        a=gdb.string_to_argv(arg)
        if len(a)!=3:raise gdb.GdbError("usage: acnh-receptor-snapshot RECEPTOR_ADDRESS MODULE_BASE OUTPUT_JSON")
        receptor=int(gdb.parse_and_eval(a[0]));base=int(gdb.parse_and_eval(a[1]))
        if receptor<=0 or base<=0:raise gdb.GdbError("Invalid addresses")
        inferior=gdb.selected_inferior()
        def u32(p):return struct.unpack("<I",bytes(inferior.read_memory(p,4)))[0]
        def u64(p):return struct.unpack("<Q",bytes(inferior.read_memory(p,8)))[0]
        out={"schema":"acnh303-r98-runtime-snapshot-v1","receptor":hex(receptor),"module_base":hex(base),"receptor_type":u32(receptor+0x278),"tables":{},"target_matches":[],"build_verified_by_operator":False}
        for kind,c,t,slots in [("action",0x2c8,0x2d0,[0x30,0x40,0x58]),("query",0x2d8,0x2e0,[0x30])]:
            count=u32(receptor+c);table=u64(receptor+t)
            if count>16384 or count and not table:raise gdb.GdbError("Invalid count/table; verify receptor and build")
            hashes=[];matches=[]
            for i in range(count):
                obj=u64(table+8*i)
                if not obj:raise gdb.GdbError("Null receptor object; capture after initialization")
                h=u32(obj+0x10);hashes.append(h)
                if h not in TARGETS:continue
                vtable=u64(obj)
                callbacks={hex(s):{"absolute":hex(u64(vtable+s)),"module_relative":hex(u64(vtable+s)-base)} for s in slots}
                matches.append({"kind":kind,"index":i,"hash":f"{h:08X}","name":TARGETS[h],"object":hex(obj),"vtable":hex(vtable),"callbacks":callbacks})
            out["tables"][kind]={"count":count,"sorted":hashes==sorted(hashes),"hashes":[f"{h:08X}" for h in hashes]}
            out["target_matches"]+=matches
        with Path(a[2]).open("x",encoding="utf-8") as f:json.dump(out,f,indent=2)
        gdb.write("Captured read-only receptor table; validate build and executable ranges before attributing callbacks.\n")
Snapshot()
