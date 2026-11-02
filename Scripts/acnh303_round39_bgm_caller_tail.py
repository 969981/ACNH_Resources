#!/usr/bin/env python3
"""R39 exact original Bgm_Base caller tail resource-dispatch static suspects.

This traces native instructions after the source 0x290F278 BL resource
manager and branches 0x290F2B0 / 0x290F2F0 into actual coded targets.
No runtime file-open claims; classify only proven opcodes.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
def scan(data,segs,start,size):
 b=get_bytes_va(data,segs,start,size)
 if b is None:raise ValueError("Native code RVA not mapped")
 md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
 rows=[{"pc":hex(x.address),"ins":x.mnemonic,"args":x.op_str,
   "instruction_bytes":x.bytes.hex()} for x in md.disasm(b,start)]
 return rows
def main():
 a=argparse.ArgumentParser()
 a.add_argument("--elf",type=Path,required=True)
 a.add_argument("--out",type=Path,required=True)
 a=a.parse_args();raw=a.elf.read_bytes()
 if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("ACNH3.0.3 source ELF SHA mismatch")
 seg=parse_elf(raw)
 caller=scan(raw,seg,0x290f210,0x140)
 look={int(x["pc"],16):x for x in caller}
 for pc,target in [(0x290f278,"#0x373167c"),
                   (0x290f2b0,"#0x3e107e0"),
                   (0x290f2f0,"#0x3ae4980")]:
  if pc not in look or look[pc]["ins"]!="bl" or look[pc]["args"]!=target:
   raise ValueError("real original Bgm_Base caller BL moved: "+hex(pc))
 target={}
 for t in [0x3e107e0,0x3ae4980,0x373167c]:
  dis=scan(raw,seg,t,0x240)
  target[hex(t)]={"source_branch_rva":hex(t),
    "native_instruction_count":len(dis),
    "actual_entry_window":dis,
    "first_bounded_ret":[x for x in dis if x["ins"]=="ret"][:6],
    "actual_native_bl_sites":[x for x in dis if x["ins"] in ("bl","blr")][:35]}
 source_literal=bytes(raw).count(b"Bgm_Base") # literal physical UTF-8 count, not actual virtual string xref count
 res={"schema":"acnh303-r39-verified-original-BgmBase-adjacent-native-dispatch-three-BL-paths-v1",
  "source_ELF_original_sha256":SHA,"source_BgmBase_literal_physical_utf8_count":source_literal,
  "source_caller_0x290f210_through_0x290f350_native_instructions":caller,
  "native_observed_direct_source_BgmBase_callee_list":{
    "0x290f278":"0x373167c","0x290f2b0":"0x3e107e0","0x290f2f0":"0x3ae4980"},
  "actual_original_target_code_windows":target,
  "AAL_real_instance_FileOpen_and_StreamPath_trace_observed":False,
  "bounded_linear_disassembly_not_a_control_flow_graph":True,
  "limitations":"Three native BLs in one Bgm_Base caller region do NOT establish all share the same resource object, nor that any is file open. Actual caller argument/return and runtime virtual calls must be traced before assignment of path or I/O semantics."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(res,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R39_BGM_CALLER_3_VERIFIED_DOWNSTREAM_BRANCHES",
       [(k,v["native_instruction_count"],len(v["actual_native_bl_sites"])) for k,v in target.items()])
if __name__=="__main__":main()
