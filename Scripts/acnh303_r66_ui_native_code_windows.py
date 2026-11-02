#!/usr/bin/env python3
"""R66: original AArch64 disassembly and bounded caller-context at real R64 UI refs.

Callee paths are *possible* continuation targets, not proved resource loaders.
Generates read-only GDB observation suggestions based on actual machine code.
"""
from __future__ import annotations
import argparse,hashlib,struct,json,csv
from collections import Counter
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM

ELF=Path("e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf")
R64=Path("assets/evidence/rom-ui-semantics/r64-elf-original-ui-string-xrefs.json")
R65=Path("assets/evidence/rom-ui-semantics/r65-native-ui2d-texture-consumers.json")
OUT=Path("assets/evidence/rom-ui-semantics")
SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
TARGETS=("GardeningIcon","DIYRecipeIcon")
def segments(blob):
    p=struct.unpack_from("<Q",blob,0x20)[0]; n=struct.unpack_from("<H",blob,0x38)[0]
    length=struct.unpack_from("<H",blob,0x36)[0]
    result=[]
    for i in range(n):
        type_,flags,off,va,_,size,mem,align=struct.unpack_from("<IIQQQQQQ",blob,p+i*length)
        if type_==1 and size and off+size<=len(blob):result.append({"flags":flags,"off":off,"va":va,"size":size})
    return result
def vamap(blob,seg,va,n):
    for s in seg:
        if s["va"]<=va and va+n<=s["va"]+s["size"]:
            return blob[s["off"]+va-s["va"]:s["off"]+va-s["va"]+n]
    raise ValueError("Unmapped file-backed executable VA "+hex(va))
def analyze(root):
    blob=(root/ELF).read_bytes()
    if hashlib.sha256(blob).hexdigest()!=SHA:raise ValueError("Incorrect original 3.0.3 ELF")
    data=json.loads((root/R64).read_text("utf-8"))
    ui=json.loads((root/R65).read_text("utf-8"))
    if data["original_elf_sha256"]!=SHA or ui["original_layout_source_count"]!=960:
        raise ValueError("R64 or R65 source provenance changed")
    prefix={r["literal"]:r for r in data["UI_family_prefix_probe"]}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    seg=segments(blob)
    output=[]
    for label in TARGETS:
        ref=prefix[label]
        if not ref["code_examples"]:
            raise ValueError("Missing proven exact UI family AArch64 xref: "+label)
        for example in ref["code_examples"]:
            pc=int(example["code_va"],16)
            window_start=max(0,pc-0x90)
            raw=vamap(blob,seg,window_start,0x180)
            inst=list(cs.disasm(raw,window_start))
            sites=[]
            for i in inst:
                code=f"{i.mnemonic} {i.op_str}"
                sites.append({"pc":hex(i.address),"asm":code,"raw":i.bytes.hex(),
                              "relative_to_literal_ref":i.address-pc})
            caller=[s for s in sites if s["asm"].startswith(("bl ","blr ")) and -24<=s["relative_to_literal_ref"]<=120]
            op=int.from_bytes(vamap(blob,seg,pc,4),"little")
            rd=op&31
            r={"family_literal":label,"code_reference":hex(pc),
                "target_literal_virtual_address":example["literal_va"],
                "expected_ADRP_ADD_machine":example["raw_aarch64_instruction_hex"],
                "string_pointer_register_after_ADRP_ADD":"x"+str(rd),
                "read_only_breakpoint_after_pair":hex(pc+8),
                "code_window_start":hex(window_start),"code_window_sha256":hashlib.sha256(raw).hexdigest(),
                "source_sha256":SHA,
                "observed_asm_instructions":sites,
                "nearby_direct_and_indirect_calls":caller,
                "nearest_call_not_proved_to_receive_family_string":True,
                "can_prove_actual_runtime_consumption":False}
            output.append(r)
    observed=[x for x in output if x["family_literal"]=="GardeningIcon"]
    assert len(observed)==1
    result={"schema":"acnh303_r66_original_ui_family_static_code_window_v1",
            "original_elf_sha256":SHA,
            "source_ui_families":list(TARGETS),
            "original_AARCH64_family_literal_reference_windows":len(output),
            "nearby_BL_BLR_static_windows":sum(len(x["nearby_direct_and_indirect_calls"]) for x in output),
            "exact_literal_refs_from_R64":True,"UI2D_all960_and_zero_exact_names_from_R65":True,
            "NINTENDO_original_runtime_execution_recorded":False,
            "function_input_dataflow_verified":False,
            "pointer_runtime_traces":[],"entries":output}
    folder=root/OUT;folder.mkdir(parents=True,exist_ok=True)
    (folder/"r66-ui-native-ARM64-ref-windows.json").write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n","utf-8")
    with (folder/"r66-ui-native-ARM64-ref-windows.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["family","ADRP_add_PC","post_pair_observation_PC","register","nearby_calls","runtime_verified"])
        for r in output:w.writerow([r["family_literal"],r["code_reference"],
            r["read_only_breakpoint_after_pair"],r["string_pointer_register_after_ADRP_ADD"],
            "|".join(z["asm"] for z in r["nearby_direct_and_indirect_calls"]),False])
    # This is a TEMPLATE with unassigned main_base, not a fabricated capture.
    template=[
     "# ACNH 3.0.3 original ELF only; 3.0.3 SHA="+SHA,
     "# GDB: attach debugger to OWN authorized local game session; read-only observations.",
     "# Determine real executable module load address from the debugger's maps.",
     "# Manually assign after verifying the loaded BuildID / matching 3.0.3 ELF:",
     "# set $main_base = 0x<actual_module_base>",
     "# Do not paste '<actual_module_base>' literally; no breakpoint is active yet.",
     "# Suggested breakpoints use AFTER ADRP+ADD so the register contains candidate literal VA.",
    ]
    for r in output:
        base=int(r["read_only_breakpoint_after_pair"],16)
        reg=r["string_pointer_register_after_ADRP_ADD"]
        template+=["",
          "# "+r["family_literal"]+"  original code at "+r["code_reference"],
          "# Upon known correct module base:",
          "# break *($main_base + "+hex(base)+")",
          "# commands",
          "#   silent",
          "#   printf \"Observed UI family candidate at "+hex(base)+"\\n\"",
          "#   x/s $"+reg,
          "#   info registers x0 x1 x2 x3 x4 x5 x6 x7 x8 x9",
          "#   bt 8",
          "#   continue",
          "# end"]
    template+=["","# No runtime logs have been collected in this research run.",
               "# Do not identify nearby BL/BLR targets as verified loader functions.",
               "# Re-check each register at the hit before treating it as a string pointer."]
    (root/"docs/ACNH303_R66_READ_ONLY_GDB_UI_FAMILY_TRACE.md").write_text(
        "\n".join(template)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in result.items() if k!="entries"},ensure_ascii=False))
def main():
    ap=argparse.ArgumentParser();ap.add_argument("--root",type=Path,default=Path("."))
    args=ap.parse_args();analyze(args.root.resolve())
if __name__=="__main__":main()
