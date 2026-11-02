#!/usr/bin/env python3
"""R67: prove bounded UI-family literal argument preparation by original AArch64.

Proves deterministic register/stack argument preparation at known original call
sites. Not a native game execution and not proof the callee loads a texture.
"""
from pathlib import Path
from collections import Counter
import argparse,hashlib,json,csv,struct
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM

ELF=Path("e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf")
ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
R66=Path("assets/evidence/rom-ui-semantics/r66-ui-native-ARM64-ref-windows.json")
OUT=Path("assets/evidence/rom-ui-semantics")
CALLS={
 "GardeningIcon":{"family_ref":0x19f754c,"call":0x19f756c,"callee":0x672610,
    "ordered":[
       (0x19f754c,"adrp x9, #0x3f91000"),
       (0x19f7550,"add x9, x9, #0xf0d"),
       (0x19f7560,"mov x1, sp"),
       (0x19f7568,"stp x8, x9, [sp]"),
       (0x19f756c,"bl #0x672610")]},
 "DIYRecipeIcon":{"family_ref":0x19f6d6c,"call":0x19f6dfc,"callee":0x3f04470,
    "ordered":[
       (0x19f6d6c,"adrp x1, #0x3fa6000"),
       (0x19f6d70,"add x1, x1, #0x6d7"),
       (0x19f6df4,"mov x0, x22"),
       (0x19f6df8,"mov x2, x23"),
       (0x19f6dfc,"bl #0x3f04470")]},
}
def load_segments(blob):
    pos=struct.unpack_from("<Q",blob,0x20)[0]
    n=struct.unpack_from("<H",blob,0x38)[0]
    size=struct.unpack_from("<H",blob,0x36)[0]
    ans=[]
    for i in range(n):
        t,flags,off,va,_,total,mem,align=struct.unpack_from("<IIQQQQQQ",blob,pos+i*size)
        if t==1 and total and off+total<=len(blob):ans.append({"off":off,"va":va,"size":total,"flags":flags})
    return ans
def read_va(blob,segments,pc,size):
    for s in segments:
        if s["va"]<=pc and pc+size<=s["va"]+s["size"]:
            k=s["off"]+pc-s["va"]
            return blob[k:k+size]
    raise ValueError("unmapped original code window "+hex(pc))
def analyze(root):
    blob=(root/ELF).read_bytes()
    if hashlib.sha256(blob).hexdigest()!=ELF_SHA:
        raise ValueError("Original ACNH 3.0.3 ELF SHA changed")
    r66=json.loads((root/R66).read_text("utf-8"))
    entries={x["code_reference"]:x for x in r66["entries"]}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    segments=load_segments(blob)
    records=[]
    for label,req in CALLS.items():
        p=req["family_ref"]
        source=entries.get(hex(p))
        if source is None or source["family_literal"]!=label:raise ValueError("R66 reference provenance missing "+label)
        b=read_va(blob,segments,p,req["call"]+4-p)
        instructions=list(cs.disasm(b,p))
        at={i.address:i for i in instructions}
        if not all(addr in at and at[addr].mnemonic+" "+at[addr].op_str==expected
                   for addr,expected in req["ordered"]):
            raise ValueError("Original AArch64 instruction sequence changed: "+label)
        # The literal-carrying DIY path branches at 0x19f6d80 directly
        # to 0x19f6dec. A different predecessor from 0x19f6d84 overwrites
        # X1 at 0x19f6dd8. Prove only the concrete observed branch.
        if label=="DIYRecipeIcon":
            branch=next((i for i in instructions if i.address==0x19f6d80),None)
            if branch is None or branch.mnemonic+" "+branch.op_str!="b #0x19f6dec":
                raise ValueError("Original bounded DIY direct branch changed")
            selected=[i for i in instructions if
                (0x19f6d74<=i.address<=0x19f6d80) or
                (0x19f6dec<=i.address<req["call"])]
            for instr in selected:
                target=instr.op_str.split(",")[0]
                if target in ("x1","w1"):
                    raise ValueError("DIYRecipeIcon X1 overwritten on its selected branch")
        target=req["callee"]
        callee=read_va(blob,segments,target,0x90)
        head=[{"va":hex(i.address),"opcode":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str}
              for i in list(cs.disasm(callee,target))[:24]]
        if not head:raise ValueError("No valid original function code at "+hex(target))
        records.append({
          "family":label,"original_string_reference_pc":hex(p),
          "verified_call_pc":hex(req["call"]),"verified_bl_target":hex(target),
          "original_code_window_sha256":hashlib.sha256(b).hexdigest(),
          "verified_register_to_argument_flow":
              "ADR+ADD x9 -> STP [SP+8], X1=SP -> BL" if label=="GardeningIcon"
              else "ADRP+ADD X1 -> 0x19f6d80 direct branch -> BL; other predecessor overwrites X1",
          "exact_original_instruction_proof":[{"pc":hex(addr),"asm":expected} for addr,expected in req["ordered"]],
          "next_callee_original_code_window_sha256":hashlib.sha256(callee).hexdigest(),
          "next_callee_first_24_instructions":head,
          "break_at_call_before_execution_pc":hex(req["call"]),
          "alternate_control_flow_may_change_X1":label=="DIYRecipeIcon",
          "real_runtime_argument_value_captured":False,
          "callee_proven_to_load_the_icon":False,
          "texture_BRTI_consumed_by_callee_verified":False})
    out={
      "schema":"acnh303_r67_original_UI_literal_argument_flow_v1",
      "original_ACNH303_ELF_sha256":ELF_SHA,
      "verified_static_string_to_call_argument_chains":len(records),
      "GardeningIcon_parameter_context_proved":True,
      "DIYRecipeIcon_parameter_context_proved":True,
      "native_loader_ownership_not_verified":True,
      "live_GDB_sessions_recorded":0,
      "native_UI_texture_loads_recorded":0,
      "records":records}
    dest=root/OUT;dest.mkdir(exist_ok=True,parents=True)
    (dest/"r67-ui-family-argument-dataflow.json").write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (dest/"r67-ui-family-argument-dataflow.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["family","string_ref","call_pc","callee","static_argument_flow","runtime_verified"])
        for x in records:w.writerow([x["family"],x["original_string_reference_pc"],x["verified_call_pc"],
                                      x["verified_bl_target"],x["verified_register_to_argument_flow"],False])
    # No invented module base or runtime output: GDB script requires an explicit
    # user-supplied $main_base from a verified 3.0.3 module mapping.
    gdb=[
      "# R67 exact ACNH 3.0.3 ELF SHA: "+ELF_SHA,
      "# Before sourcing: use a real game debug session with the matching 3.0.3 ELF.",
      "# Obtain the actual module base from debugger maps; define:",
      "#   set $main_base = 0xYOUR_VERIFIED_MODULE_BASE",
      "# Never run against an unverified game build or zero module base.",
      "# All breakpoints below inspect only and continue, no memory writes.",
      "break *($main_base + 0x19f756c)",
      "commands",
      "  silent",
      "  printf \"R67 GardeningIcon, stack pair before call to 0x672610\\n\"",
      "  x/2gx $sp",
      "  x/s *(char **)($sp + 8)",
      "  info registers x0 x1 x2 x8 x9",
      "  bt 10",
      "  continue",
      "end",
      "break *($main_base + 0x19f6dfc)",
      "commands",
      "  silent",
      "  printf \"R67 DIYRecipeIcon, X1 argument before call to 0x3F04470\\n\"",
      "  x/s $x1",
      "  info registers x0 x1 x2 x8 x22 x23",
      "  bt 10",
      "  continue",
      "end",
      "# This script does not assert the call target is a resource loader.",
    ]
    target=root/"Scripts/gdb"
    target.mkdir(parents=True,exist_ok=True)
    (target/"acnh303_r67_ui_family_callsite_readonly.gdb").write_text("\n".join(gdb)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in out.items() if k!="records"},ensure_ascii=False))
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    a=p.parse_args();analyze(a.root.resolve())
if __name__=="__main__":main()
