#!/usr/bin/env python3
"""R64: authenticated 3.0.3 ELF UI resource string references, AArch64 ADRP refs.

Requires exact known SHA256 and ELF PT_LOAD file-backed regions. Hits are raw
literal/ADRP references, NOT proof that a UI texture was loaded or rendered.
"""
from __future__ import annotations
import argparse,hashlib,struct,json,csv
from collections import defaultdict,Counter
from pathlib import Path

ELF=Path("e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf")
EXPECTED="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
INPUT=Path("assets/evidence/rom-items/r61-all-1254-original-native-sources.json")
OUT=Path("assets/evidence/rom-ui-semantics")
FAMILIES=("GardeningIcon","DIYRecipeIcon","MenuIcon","MessageCard","CloudIslandSave")
PREFIXES=("Layout_FtrIcon_","Layout_ClosetIcon_","Layout_GardeningIcon_",
          "Layout_DIYRecipeIcon_","Layout_MenuIcon_","Layout_MessageCard_",
          "Layout_CloudIslandSave_","GardeningIcon","DIYRecipeIcon",
          "MenuIcon","MessageCard","CloudIslandSave","Remake_0_0")
def hexd(data):return hashlib.sha256(data).hexdigest()
def decode_elf(blob):
    if blob[:4]!=b"\x7fELF" or blob[4:6]!=b"\x02\x01":raise ValueError("Expected 64-bit little endian ELF")
    phoff=struct.unpack_from("<Q",blob,0x20)[0]
    phentsize=struct.unpack_from("<H",blob,0x36)[0]
    phcount=struct.unpack_from("<H",blob,0x38)[0]
    if phentsize<56 or not 1<=phcount<256:raise ValueError("Invalid ELF program header table")
    segments=[]
    for i in range(phcount):
        p=phoff+i*phentsize
        typ,flags,off,va,paddr,filesz,memsz,align=struct.unpack_from("<IIQQQQQQ",blob,p)
        if typ!=1 or filesz==0:continue
        if off+filesz>len(blob):raise ValueError("ELF load segment outside source")
        segments.append({"file_offset":off,"va":va,"size":filesz,"memsz":memsz,"flags":flags})
    if not segments or not any(x["flags"]&1 for x in segments):
        raise ValueError("No executable ELF PT_LOAD")
    return segments
def hits(blob,segments,s):
    needle=s.encode("ascii")+b"\0"
    found=[]
    for seg in segments:
        if seg["flags"]&1:continue
        start=seg["file_offset"];end=start+seg["size"]
        pos=start
        while True:
            at=blob.find(needle,pos,end)
            if at<0:break
            found.append({"file_offset":at,"virtual_address":seg["va"]+at-start,
                          "containing_segment_flags":seg["flags"]})
            pos=at+1
            if len(found)>=100:break
    return found
def adrp_page(pc,word):
    if word&0x9f000000!=0x90000000:return None
    disp=(((word>>5)&0x7ffff)<<2)|((word>>29)&3)
    if disp&(1<<20):disp-=1<<21
    return (pc&~0xfff)+(disp<<12)
def direct_refs(blob,segments,addresses):
    target_to_label=defaultdict(list)
    for label,refs in addresses.items():
        for x in refs:target_to_label[x["virtual_address"]].append(label)
    pages={x&~4095 for x in target_to_label}
    found=defaultdict(list)
    stats=Counter()
    for seg in segments:
        if not seg["flags"]&1:continue
        start=seg["file_offset"];size=seg["size"];va=seg["va"]
        for delta in range(0,size-8,4):
            word=struct.unpack_from("<I",blob,start+delta)[0]
            page=adrp_page(va+delta,word)
            if page is None or page not in pages:continue
            second=struct.unpack_from("<I",blob,start+delta+4)[0]
            rd=word&31
            if second&0xff000000==0x91000000 and ((second>>5)&31)==rd:
                shift=12 if (second>>22)&1 else 0
                final=page+(((second>>10)&4095)<<shift)
                kind="ADRP_ADD"
            elif second&0xffc00000 in (0xf9400000,0xb9400000) and ((second>>5)&31)==rd:
                scale=8 if second&0xffc00000==0xf9400000 else 4
                final=page+((second>>10)&4095)*scale
                kind="ADRP_LDR"
            else:continue
            if final not in target_to_label:continue
            for label in target_to_label[final]:
                stats[label]+=1
                if len(found[label])<16:
                    found[label].append({"code_va":hex(va+delta),"literal_va":hex(final),
                        "instruction_pattern":kind,"raw_aarch64_instruction_hex":f"{word:08x} {second:08x}"})
    return found,stats
def analyze(root):
    p=root/ELF
    b=p.read_bytes()
    digest=hexd(b)
    if digest!=EXPECTED:raise ValueError("3.0.3 ELF SHA mismatch "+digest)
    seg=decode_elf(b)
    originals=json.loads((root/INPUT).read_text("utf-8"))
    sources=[r for r in originals["records"] if r["source_type"]=="original_other_UI_layout"]
    if len(sources)!=391:raise ValueError("Expected 391 real native UI sources")
    strings={name:None for name in PREFIXES}
    for r in sources:
        name=r["native_texture_BRTI_name"]
        if not name.isascii():raise ValueError("NonASCII original BRTI name")
        strings.setdefault(name,None)
    found={k:hits(b,seg,k) for k in strings}
    refs,stats=direct_refs(b,seg,{k:v for k,v in found.items() if v})
    report=[]
    for s in sources:
        name=s["native_texture_BRTI_name"]
        sf=s["original_rom_source"].rsplit("/",1)[-1].split("_")[1]
        report.append({"requested_catalog_name":s["requested_original_catalog_name"],
          "native_brti_name":name,"source_ui_family":sf,
          "elf_readonly_null_terminated_ascii_literal_positions":[hex(x["virtual_address"]) for x in found[name]],
          "elf_exact_adpr_direct_reference_count":stats[name],
          "elf_direct_reference_samples":refs[name],
          "asset_file_has_verified_native_png":True,
          "actual_resource_loader_call_dataflow_verified":False,
          "original_UI_instance_rendering_verified":False})
    classes=Counter("name_and_code_ref" if x["elf_exact_adpr_direct_reference_count"] else
                    "name_literal_only" if x["elf_readonly_null_terminated_ascii_literal_positions"] else "no_literal_in_readonly_ELF"
                    for x in report)
    prefixrows=[{"literal":s,"readonly_positions":[hex(x["virtual_address"]) for x in found[s]],
                 "exact_adpr_direct_refs":stats[s],"code_examples":refs[s]} for s in PREFIXES]
    out={"schema":"acnh303_r64_exact_elf_ui_literal_xrefs_v1",
      "original_elf_path":ELF.as_posix(),"original_elf_sha256":digest,
      "original_elf_size":len(b),"PT_LOAD_segments":[{"va":hex(x["va"]),"size":x["size"],"flags":x["flags"]} for x in seg],
      "literal_hit_definition":"exact ASCII plus NUL in file-backed nonexecutable ELF PT_LOAD",
      "aarch64_reference_definition":"ADRP then adjacent ADD/LDR matching exact literal VA",
      "391_original_UI_sources":len(report),
      "classification":dict(sorted(classes.items())),
      "family_counts":dict(sorted(Counter(x["source_ui_family"] for x in report).items())),
      "UI_family_prefix_probe":prefixrows,
      "string_absence_not_proof_of_resource_absence":True,
      "ADRP_reference_not_a_verified_Nintendo_UI_loader":True,
      "live_game_runtime_traced":False,"entries":report}
    dest=root/OUT;dest.mkdir(exist_ok=True,parents=True)
    (dest/"r64-elf-original-ui-string-xrefs.json").write_text(json.dumps(out,indent=2,ensure_ascii=False)+"\n","utf-8")
    with (dest/"r64-elf-original-ui-string-xrefs.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["requested_name","rom_ui_family","name_literal_count","ADRP_exact_direct_xrefs","live_loader_verified"])
        for r in report:w.writerow([r["requested_catalog_name"],r["source_ui_family"],
                 len(r["elf_readonly_null_terminated_ascii_literal_positions"]),
                 r["elf_exact_adpr_direct_reference_count"],False])
    print(json.dumps({k:v for k,v in out.items() if k not in ("entries","PT_LOAD_segments")},ensure_ascii=False))
def main():
    ap=argparse.ArgumentParser();ap.add_argument("--root",type=Path,default=Path("."))
    a=ap.parse_args();analyze(a.root.resolve())
if __name__=="__main__":main()
