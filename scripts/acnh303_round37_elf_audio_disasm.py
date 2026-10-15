#!/usr/bin/env python3
"""R37 authentic ELF ARM64 bounded disassembly around Bgm_Base/stream name refs.

Static read-only code, not AAL live IO or argument-flow provenance.
"""
import argparse,hashlib,json,sys
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_round11_elf_xref import parse_elf,get_bytes_va

SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--elf",type=Path,required=True)
 p.add_argument("--source",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();b=a.elf.read_bytes()
 if hashlib.sha256(b).hexdigest()!=SHA:raise ValueError("original ARM64 ELF source hash mismatch")
 seg=parse_elf(b)
 d=json.loads(a.source.read_text("utf8"))
 if d["source_elf_sha256"]!=SHA:raise ValueError("ELF report provenance mismatch")
 needle={"Bgm_Base":3,"Sound/Resource/":8,"stream":3,"aal::":4}
 parsed=[]
 md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
 for item in d["elf_literal_code_xrefs"]:
  name=item["term"];cap=needle.get(name,0)
  if not cap:continue
  for row in item["code_formations"][:cap]:
   site=int(row["ref_site_hex"],16)
   block=get_bytes_va(b,seg,site-0x60,0x100)
   if block is None:raise ValueError("code ref lacks executable mapped segment")
   listing=[]
   for insn in md.disasm(block,site-0x60):
    listing.append({"vaddr_hex":hex(insn.address),
        "opcode_hex":insn.bytes.hex(),"mnemonic":insn.mnemonic,"operands":insn.op_str,
        "relative_to_xref":insn.address-site})
   parsed.append({"literal":name,"native_reference_site_hex":row["ref_site_hex"],
     "formed_string_address_hex":row["formed_va_hex"],
     "addressing_pattern":row["pattern"],
     "native_instructions":listing,
     "nearby_native_bl":[v for v in listing if v["mnemonic"]=="bl"]})
 if sum(x["literal"]=="Bgm_Base" for x in parsed)!=2:raise ValueError("Bgm_Base original code crossrefs changed")
 report={"schema":"acnh303-r37-original-AArch64-BgmBase-stream-static-opcode-window-v1",
   "original_elf_sha256":SHA,"native_BgmBase_exact_code_formations":2,
   "recorded_bounded_arm64_windows":len(parsed),"instruction_evidence":parsed,
   "limits":"Verified real AArch64 instructions and code-addressing patterns only; BL proximity is NOT a proof of string-as-argument, resource loader, file open, external sample mapping, or actual audio playback."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n",encoding="utf8")
 print("R37_TRUE_ELF_INSTRUCTION_CONTEXT",[(x["literal"],x["native_reference_site_hex"],len(x["nearby_native_bl"])) for x in parsed])
if __name__=="__main__":main()
