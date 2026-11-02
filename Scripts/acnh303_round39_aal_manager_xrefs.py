#!/usr/bin/env python3
"""R39 original ELF AArch64 Bgm_Base downstream and Sound/Resource/ consumers.

Source-verified opcode evidence and bounded caller/callee graph. In particular
do NOT equate 0x3E45184 with fsOpen: evidence currently fits an object manager
and its indirect virtual dispatch. Direct I/O calls NOT observed.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
def scan(data,segments,addr,limit=0x300):
 b=get_bytes_va(data,segments,addr,limit)
 if b is None:raise ValueError("bad orig ELF VA "+hex(addr))
 md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
 return [{"pc":hex(x.address),"mnemonic":x.mnemonic,"operands":x.op_str,"raw_bytes":x.bytes.hex()}
         for x in md.disasm(b,addr)]
def require(rows,pc,op,operand):
 z=next((x for x in rows if x["pc"]==hex(pc)),None)
 if not z or z["mnemonic"]!=op or z["operands"]!=operand:
  raise ValueError("actual original native opcode mismatch: "+hex(pc)+" "+str(z))
 return z
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--elf",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();data=a.elf.read_bytes()
 if hashlib.sha256(data).hexdigest()!=SHA:raise ValueError("not original 3.0.3 full ELF")
 seg=parse_elf(data)
 parent=scan(data,seg,0x373167c,0x94)
 consumer=scan(data,seg,0x3e45184,0x190)
 secondary=scan(data,seg,0x3e44830,0x240)
 path1=scan(data,seg,0x28d6d90,0x2e0)
 path2=scan(data,seg,0x28d6650,0x160)
 for rows,pc,op,args in [
  (parent,0x37316e4,"ldr","x8, [x1, #0x18]"),
  (parent,0x37316f0,"str","x8, [sp, #0x98]"),
  (parent,0x37316fc,"bl","#0x3e45184"),
  (consumer,0x3e45198,"ldr","x23, [x1]"),
  (consumer,0x3e451cc,"ldr","x8, [x19, #8]"),
  (consumer,0x3e451e4,"ldr","x8, [x21, #0xa8]"),
  (consumer,0x3e451f8,"ldr","x8, [x8, #0x20]"),
  (consumer,0x3e451fc,"blr","x8"),
  (consumer,0x3e45214,"ldr","x8, [x8, #0x28]"),
  (consumer,0x3e45218,"blr","x8"),
  (consumer,0x3e45248,"ldr","x1, [x19, #8]"),
  (consumer,0x3e45250,"bl","#0x3e44830"),
  (secondary,0x3e44848,"ldr","x8, [x1, #0x10]"),
  (secondary,0x3e44858,"ldr","x8, [x20, #0x18]"),
  (path1,0x28d6db8,"adrp","x10, #0x3fd5000"),
  (path2,0x28d66f0,"adrp","x8, #0x3fd5000"),
 ]:
  require(rows,pc,op,args)
 def branch(r):
  return [x for x in r if x["mnemonic"] in ("bl","blr","br")][:65]
 report={
  "schema":"acnh303-r39-actual-BgmBase-AArch64-name-packet-vtable-dispatch-and-SoundResource-builder-v1",
  "real_original_ACNH_ELF_SHA256":SHA,
  "BgmBase_source_literal_VA":"0x3ffadb9",
  "BgmBase_name_packet_field":"0x37316e4 LDR X8,[X1,#0x18]",
  "BgmBase_packet_forward":"0x37316f0 STR X8,[SP,#0x98]",
  "first_manager_call":"0x37316fc BL 0x3e45184",
  "first_manager_real_instruction_evidence":consumer,
  "first_manager_branches":branch(consumer),
  "first_manager_object_member":"0x3e451e4 LDR X8,[X21,#0xA8]",
  "first_manager_vtable_calls":[
    {"pc":"0x3e451fc","target_formation":["0x3e451f4 LDR X8,[X22]","0x3e451f8 LDR X8,[X8,#0x20]"],"instruction":"BLR X8"},
    {"pc":"0x3e45218","target_formation":["0x3e45210 LDR X8,[X22]","0x3e45214 LDR X8,[X8,#0x28]"],"instruction":"BLR X8"}],
  "secondary_direct_call":"0x3e45250 BL 0x3e44830",
  "secondary_0x3e44830_real_instructions":secondary,
  "secondary_real_native_branches":branch(secondary),
  "Sound_Resource_literal_related_native_path_windows":{
    "0x28d6d90":path1,"0x28d6650":path2},
  "no_runtime_file_open_or_read_evidence_captured":True,
  "no_runtime_AAL_Stream_BWAV_path_address_captured":True,
  "not_safe_to_name_3e45184_FileOpen":True,
  "interpretation_limit":"Static original 3.0.3 ARM64, bounds disassembly may contain adjacent functions; virtual BLR targets NOT resolved in a real instance. Sound/Resource string path sites and Bgm_Base manager call are presently separate evidence roots; no proof they connect to same file open.",
  "native_runtime_I_O_future_gate":"Only claim I/O when instance-level x0..x7, x21+0xA8, vtable target RVA, actual path + read offset/size and original source SHA have all been captured in the same game session."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(report,ensure_ascii=False,sort_keys=True,indent=2)+"\n")
 print("R39_NATIVE_MANAGER_VTABLE_SECONDARY",len(branch(consumer)),len(branch(secondary)),len(path1),len(path2))
if __name__=="__main__":main()
