#!/usr/bin/env python3
"""Original NSO0 MOD0 dynamic tags, RELA/RELR and code-byte cross-check for R99."""
import argparse,hashlib,json,struct
from pathlib import Path
import lz4.block
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r99_relocation as r99
import acnh303_r96_native_tables as r96
SOURCE_SHA="68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1"
def decode(root):
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
    return elf,nso,mapped,segments,raw,tags,relocs
