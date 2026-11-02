#!/usr/bin/env python3
"""R38 authentic ACNH 3.0.3 AArch64 caller-to-callee next hop trace.

Trace from Bgm_Base literal argument through true x1+18h load into 0x3E45184.
Disassemble actual native code, record direct branches, loads and indirect
calls. No guessed function names or invented AAL runtime.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
def trace(b,segments,pc,length):
 blob=get_bytes_va(b,segments,pc,length)
 if blob is None:raise ValueError("native ELF unmap: "+hex(pc))
 md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
 out=[{"pc":hex(i.address),"op":i.mnemonic,"args":i.op_str,"hex":i.bytes.hex()}
      for i in md.disasm(blob,pc)]
 if len(out)<5:raise ValueError("invalid native code")
 return out
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--elf",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();data=a.elf.read_bytes()
 if hashlib.sha256(data).hexdigest()!=ELF_SHA:raise ValueError("wrong game ELF")
 segments=parse_elf(data)
 param=trace(data,segments,0x373167c,0x94)
 m={int(v["pc"],16):v for v in param}
 require={0x37316dc:("ldp","x9, x10, [x1]"),
          0x37316e4:("ldr","x8, [x1, #0x18]"),
          0x37316f0:("str","x8, [sp, #0x98]"),
          0x37316fc:("bl","#0x3e45184")}
 for addr,(op,args) in require.items():
  x=m.get(addr)
  if x is None or x["op"]!=op or x["args"]!=args:
   raise ValueError("Bgm_Base name source value def-use failed at "+hex(addr)+" : "+str(x))
 target=trace(data,segments,0x3e45184,0x500)
 # Strictly evidence-coded instruction listing; no arbitrary guessing call domains.
 direct=[x for x in target if x["op"]=="bl"]
 indirect=[x for x in target if x["op"] in ("blr","br")]
 resets=[x for x in target if x["op"]=="ret"]
 # Bound child snippets of first eight actual BLs with mapped input code.
 nested=[]
 for x in direct[:8]:
  address=int(x["args"].lstrip("#"),16)
  if address in (0x3e45184,0x373167c):continue
  try:sub=trace(data,segments,address,0x100)
  except ValueError:continue
  nested.append({"direct_callee":hex(address),"original_callsite":x["pc"],
    "instructions":sub[:55],"branches":[z for z in sub if z["op"] in ("bl","blr","br")][:20]})
 result={"schema":"acnh303-r38-authentic-BgmBase-18h-next-AArch64-callee-3E45184-v1",
 "actual_ELF_SHA256":ELF_SHA,"original_struct_field_18h_read_exactly_proven":True,
 "source_parent_function":"0x373167c","source_field_x1_plus":"0x18",
 "source_field_load_instruction":m[0x37316e4],
 "source_value_local_sp_plus_98_write_instruction":m[0x37316f0],
 "native_direct_callee_instruction":m[0x37316fc],
 "true_direct_callee_entry":"0x3e45184",
 "native_next_hop_code_window":target,
 "native_next_hop_direct_branches":direct,
 "native_next_hop_indirect_branches":indirect,
 "native_next_hop_RET_sites":resets,
 "bounded_direct_callee_windows":nested,
 "native_file_open_captured":False,
 "AAL_file_io_runtime_proven":False,
 "interpretation":"Original AArch64 static def-use. x1+18h name field is loaded and stored into outgoing stack argument before BL. The next callee receives a freshly built packet; still no confirmed FileOpen/Stream/PCM dispatch or runtime.",
 "limits":"Bounded linear disasm past function exit may encompass adjacent code; inspect return boundaries and CFG before assigning meaning. Child snippets provide native opcode evidence only."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n")
 print("R38_NATIVE_AAL_NEXT_HOP",len(target),len(direct),len(indirect),len(resets),
       "first",[(x["pc"],x["args"]) for x in direct[:10]])
if __name__=="__main__":main()
