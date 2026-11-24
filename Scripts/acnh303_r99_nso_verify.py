#!/usr/bin/env python3
"""Original NSO0 MOD0 dynamic tags, RELA/RELR and code-byte cross-check for R99."""
import argparse,hashlib,json,struct
from pathlib import Path
import lz4.block
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r99_relocation as r99
import acnh303_r96_native_tables as r96
SOURCE_SHA="68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1"
def run(root,out):
    p=root/r96.ELF;elf=p.read_bytes();nso=p.with_name("main").read_bytes()
    if r99.sha(elf)!=r96.SHA or r99.sha(nso)!=SOURCE_SHA:raise ValueError("source drift")
    if nso[:4]!=b"NSO0":raise ValueError("NSO magic")
    flags=struct.unpack_from("<I",nso,12)[0];segments=[];mapped=[]
    for i in range(3):
        off,va,size,extra=struct.unpack_from("<IIII",nso,0x10+16*i)
        packed=struct.unpack_from("<I",nso,0x60+4*i)[0]
        if off+packed>len(nso) or size>128*1024*1024:raise ValueError("NSO segment bounds")
        raw=nso[off:off+packed]
        data=lz4.block.decompress(raw,uncompressed_size=size) if flags&(1<<i) else raw
        if len(data)!=size:raise ValueError("NSO decompressed size")
        expected=nso[0xa0+32*i:0xc0+32*i].hex()
        if flags&(1<<(3+i)) and r99.sha(data)!=expected:raise ValueError("NSO segment digest")
        mapped.append((va,data));segments.append({"type":["text","rodata","data"][i],"va":hex(va),"length":size,"sha256":r99.sha(data),"hash_flag":bool(flags&(1<<(3+i)))})
    def raw(va,n):
        for start,b in mapped:
            if start<=va and va+n<=start+len(b):return b[va-start:va-start+n]
        raise ValueError(f"unmapped original NSO range {va:#x}+{n:#x}")
    def u64(va):return struct.unpack("<Q",raw(va,8))[0]
    mod=struct.unpack("<I",raw(4,4))[0]
    if raw(mod,4)!=b"MOD0":raise ValueError("MOD0 absent")
    dyn=mod+struct.unpack("<i",raw(mod+4,4))[0]
    tags={}
    for i in range(4096):
        t,v=struct.unpack("<qQ",raw(dyn+16*i,16))
        if not t:break
        tags.setdefault(t,[]).append(v)
    else:raise ValueError("unterminated dynamic table")
    def tag(t,default=0):return tags.get(t,[default])[0]
    relocs={}
    def add(va,row):
        if va in relocs:raise ValueError(f"duplicate original relocation {va:#x}")
        relocs[va]=row
    for name,va,size in [("RELA",tag(7),tag(8)),("JMPREL",tag(23),tag(2))]:
        if not size:continue
        if size%24:raise ValueError("invalid RELA size")
        for dest,info,a in struct.iter_unpack("<QQq",raw(va,size)):
            add(dest,{"table":name,"type":info&0xffffffff,"symbol":info>>32,"addend":a})
    # DT_RELR = 36, DT_RELRSZ = 35, DT_RELRENT = 37.
    if tag(35):
        if tag(37,8)!=8 or tag(35)%8:raise ValueError("invalid RELR size")
        base=None
        for (entry,) in struct.iter_unpack("<Q",raw(tag(36),tag(35))):
            if entry&1:
                if base is None:raise ValueError("RELR bitmap before base")
                addresses=[base+i*8 for i in range(63) if entry&(2<<i)]
                base+=63*8
            else:addresses=[entry];base=entry+8
            for a in addresses:
                try:value=u64(a)
                except ValueError:value=None
                add(a,{"table":"RELR","type":"RELR","symbol":0,"addend":value})
    im=r99.Image(elf);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    camp=[]
    for i in range(5):
        va=r99.CAMP-r99.SLIDE+i*16
        source=raw(va,16);elfbytes=im.raw(va,16);value=struct.unpack_from("<Q",source)[0]
        rr=relocs.get(va);target=rr["addend"] if rr and rr["symbol"]==0 and rr["type"] in (1027,"RELR") else value
        code=raw(target,20) if im.exec(target) else b""
        camp.append({"index":i,"slot_elf_va":hex(va),"original_bytes":source.hex(),"matches_elf":source==elfbytes,"original_relocation":rr,
                     "target_elf_va":hex(target),"code_window":code.hex(),
                     "instructions":[{"ghidra_va":hex(x.address+r99.SLIDE),"bytes":x.bytes.hex(),"mnemonic":x.mnemonic,"operands":x.op_str} for x in cs.disasm(code,target)]})
    init=[]
    if tag(27):
        if tag(27)%8:raise ValueError("invalid init array size")
        for i,(v,) in enumerate(struct.iter_unpack("<Q",raw(tag(25),tag(27)))):
            slot=tag(25)+8*i;rr=relocs.get(slot)
            target=rr["addend"] if rr and rr["symbol"]==0 and rr["type"] in (1027,"RELR") else v
            init.append({"slot":hex(slot),"raw":hex(v),"relocation":rr,"target":hex(target) if target is not None else None,"executable":im.exec(target)})
    globals={k:relocs.get(v-r99.SLIDE) for k,v in r99.FACTORY.items()}
    # Raw direct pointers to factory globals in decompressed data, excluding arbitrary scalar 32-bit matches.
    aliases=[]
    for start,data in mapped[1:]:
        for k,gh in r99.FACTORY.items():
            needle=struct.pack("<Q",gh-r99.SLIDE);pos=0
            while True:
                pos=data.find(needle,pos)
                if pos<0:break
                if (start+pos)%8==0:aliases.append({"global":k,"slot":hex(start+pos),"original_relocation":relocs.get(start+pos)})
                pos+=1
    fingerprint=[]
    for gh in (0x70f160,0x70fcd0,0x70f4f0,0x70fb10,0x21c37bc):
        va=gh-r99.SLIDE;data=raw(va,32)
        if data!=im.raw(va,32):raise ValueError("fingerprint ELF mismatch")
        fingerprint.append({"elf_va":hex(va),"bytes":data.hex()})
    report={"nso_sha256":SOURCE_SHA,"elf_sha256":r96.SHA,"nso_build_id":nso[0x40:0x60].hex(),"segments":segments,
            "mod0_va":hex(mod),"dynamic_va":hex(dyn),"dynamic_tags":{str(k):[hex(v) for v in vv] for k,vv in tags.items()},
            "original_relocation_count":len(relocs),"rela_count":sum(x["table"]=="RELA" for x in relocs.values()),"jmprel_count":sum(x["table"]=="JMPREL" for x in relocs.values()),"relr_count":sum(x["table"]=="RELR" for x in relocs.values()),
            "camp_slots":camp,"init_array_entries":len(init),"init_array_executable":sum(x["executable"] for x in init),
            "factory_global_relocations":globals,"raw_factory_pointer_aliases":aliases,"real_runtime_verified":False}
    r99.write(out/"nso_dynamic_report.json",report);r99.write(out/"init_array_original.json",init)
    r99.write(out/"runtime_fingerprint.json",{"schema":"acnh303-r99-code-fingerprint-v1","nso_sha256":SOURCE_SHA,"build_id":report["nso_build_id"],"code_windows":fingerprint,"note":"local runtime must independently match exact bytes; not evidence of a real captured session"})
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
