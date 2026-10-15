#!/usr/bin/env python3
"""R38 exact native source AArch64 Bgm_Base pointer flow into a callee argument.

Bounded machine-code dataflow validation from original ELF SHA. Verifies
ADRP+ADD -> stack STP -> BL call argument, distinguishes static resource name
registration from an actually observed AAL file open; never invents runtime.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
def decode(b,segs,start,count):
 raw=get_bytes_va(b,segs,start,count)
 if raw is None:raise ValueError("code source address not mapped")
 md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
 return [{"addr":ins.address,"pc":hex(ins.address),"op":ins.mnemonic,
          "args":ins.op_str,"raw":ins.bytes.hex()} for ins in md.disasm(raw,start)]
def instr(idx,pc,op,args_exact=None):
 if pc not in idx:raise ValueError("original instruction not found at "+hex(pc))
 it=idx[pc]
 if it["op"]!=op:raise ValueError("native instruction changed at "+hex(pc)+": "+str(it))
 if args_exact and it["args"].replace(" ","")!=args_exact.replace(" ",""):
  raise ValueError("native operand changed at "+hex(pc)+": "+it["args"])
 return it
def main():
 cli=argparse.ArgumentParser()
 cli.add_argument("--elf",type=Path,required=True)
 cli.add_argument("--out",type=Path,required=True)
 a=cli.parse_args();b=a.elf.read_bytes()
 if len(b)!=79000340 or hashlib.sha256(b).hexdigest()!=ELF_SHA:
  raise ValueError("not real source 3.0.3 executable exact SHA")
 seg=parse_elf(b)
 caller=decode(b,seg,0x290F210,0xA8)
 idx={x["addr"]:x for x in caller}
 # Validate the ADRP+ADD address formation and actual operand passing:
 ptr=instr(idx,0x290F258,"adrp")
 add=instr(idx,0x290F25C,"add","x8, x8, #0xdb9")
 if "x8, #0x3ffa000" not in ptr["args"]:raise ValueError("Bgm_Base source string page changed")
 stack=instr(idx,0x290F260,"stp","x20, x8, [sp, #0x30]")
 arg=instr(idx,0x290F24C,"add","x1, sp, #0x20")
 call=instr(idx,0x290F278,"bl")
 if call["args"]!="#0x373167c":raise ValueError("Bgm_Base adjacent native constructor/registration target changed")
 # x8 is saved into sp+0x38, while x1=sp+0x20, hence the string pointer
 # lives at *(x1+0x18) when the observed branch is called, subject to
 # intervening stack writes. The code between must not clobber same [sp+0x38].
 between=[x for x in caller if 0x290F260<x["addr"]<0x290F278]
 if any(x["op"] in ("str","stp","stur") and
        ("[sp, #0x3" in x["args"] or "[sp, #0x38]" in x["args"]) for x in between):
  raise ValueError("potential stack clobber; bounded flow cannot be proven")
 callee=decode(b,seg,0x373167C,0x200)
 # Another independent reference stores address into a static table.
 tab=decode(b,seg,0x3749D60,0x80)
 tableidx={x["addr"]:x for x in tab}
 tablepage=instr(tableidx,0x3749D90,"adrp")
 tableadd=instr(tableidx,0x3749D94,"add","x12, x12, #0xdb9")
 tablestore=instr(tableidx,0x3749DA4,"stp","x8, x12, [x10, #0xa0]")
 if "x12, #0x3ffa000" not in tablepage["args"]:
  raise ValueError("native Bgm_Base registry table string page changed")
 report={"schema":"acnh303-r38-actual-BgmBase-AArch64-static-pointer-stack-argument-register-pass-v1",
   "verified_original_ELF_SHA256":ELF_SHA,"verified_original_ELF_bytes":len(b),
   "concrete_source_name_pointer":hex(0x3ffa000+0xdb9),
   "code_site_1":"0x290f258",
   "site_1_function_argument_flow":{
     "native_ADRP":ptr,"native_ADD":add,"native_stack_string_pointer_store":stack,
     "callee_argument_struct_sp_pointer_creation":arg,
     "observed_direct_branch_to_callee":call,
     "stack_store_real_address":"SP + 0x38",
     "x1_real_argument_stack_address":"SP + 0x20",
     "name_pointer_field_offset_within_x1_struct":"+0x18",
     "clobber_guard_between_pointer_write_and_branch_passed":True,
     "callee_AArch64_code_window":callee,
     "restricted_meaning":"Static code constructs name pointer and embeds in stack parameter region supplied to observed BL target; does not itself prove open()/stream BWAV selection or actual game call at runtime."},
   "code_site_2":"0x3749d90",
   "site_2_table_binding":{
     "native_ADRP":tablepage,"native_ADD":tableadd,"native_store":tablestore,
     "static_name_pair_table_slot":"[x10 + 0xa8]",
     "instruction_context":tab,
     "restricted_meaning":"Stores exact Bgm_Base literal pointer into a paired-name table at x10+0xa8 under static path; no proof of live lookup/dispatch."},
   "native_AAL_runtime_call_captured":False,
   "native_actual_file_open_captured":False,
   "runtime_filename_crc_resolver_confirmed":False,
   "limits":"Disassembly and immediate register/stack def-use within original AArch64 code only. Function roles and live dynamic execution require x0-x7 read-only runtime trace; no file I/O interception/recording occurred."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
 print("R38_ORIGINAL_BGM_STATIC_POINTER_ARG",report["concrete_source_name_pointer"],
   report["site_1_function_argument_flow"]["observed_direct_branch_to_callee"],
   report["site_1_function_argument_flow"]["name_pointer_field_offset_within_x1_struct"])
if __name__=="__main__":main()
