#!/usr/bin/env python3
"""HASH-008I: native mail category Murmur3 name table and bitmap reconstruction."""
import argparse,collections,json,struct,zlib
from pathlib import Path
from acnh303_hash008e import bcsv,decode,parse_elf,get_bytes_va,require,gitblob
MASK=0xffffffff
def rol(x,n):return ((x<<n)|(x>>(32-n)))&MASK
def murmur(data,seed=0):
    h=seed&MASK;i=0
    for i in range(0,len(data)//4*4,4):
        k=int.from_bytes(data[i:i+4],"little");k=rol(k*0xcc9e2d51&MASK,15)*0x1b873593&MASK
        h=(rol(h^k,13)*5+0xe6546b64)&MASK
    tail=data[len(data)//4*4:]
    if tail:h^=rol(int.from_bytes(tail,"little")*0xcc9e2d51&MASK,15)*0x1b873593&MASK
    h^=len(data);h=(h^(h>>16))*0x85ebca6b&MASK;h=(h^(h>>13))*0xc2b2ae35&MASK
    return (h^(h>>16))&MASK
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    require(murmur(b"None")==0xb6eede09,"Murmur known vector")
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    require(len(relocs)==380793,"relocation count")
    segs=parse_elf(elf)
    base=0x04a1eb10-0x100000
    entries=[]
    for i in range(79):
        va=base+i*8
        rel=relocs.get(va)
        require(rel is not None,"no original name pointer relocation")
        require(rel["symbol"]==0 and rel["type"] in ("RELR",1027) and rel["addend"] is not None,"unexpected name pointer relocation")
        ptr=rel["addend"];buf=bytearray()
        for j in range(256):
            b=raw(ptr+j,1)
            require(b==get_bytes_va(elf,segs,ptr+j,1),"ELF/NSO string mismatch")
            if b==b"\0":break
            buf.extend(b)
        else:raise ValueError("unterminated name")
        s=bytes(buf).decode("ascii")
        require(bool(s),"empty category")
        entries.append({"index":i,"pointer_slot_elf":va,"string_elf":ptr,"name":s,"murmur3":f"{murmur(buf):08X}","crc32":f"{zlib.crc32(buf):08X}","bitmap_byte":i//8,"bitmap_mask":1<<(i%8)})
    by_hash=collections.defaultdict(list)
    for e in entries:by_hash[e["murmur3"]].append(e)
    b,n,w,c,v,s,width=bcsv(root,"ItemMailAttachCategoryGroup")
    groups=[]
    for i in range(n):
        tokens=s(i,"E4361C86").upper().split("|");bitmap=bytearray(10);refs=[]
        for h in tokens:
            found=by_hash[h]
            for e in found:bitmap[e["bitmap_byte"]]|=e["bitmap_mask"]
            refs.append({"hash":h,"matches":found})
        groups.append({"id":v(i,"54706054",2),"label":s(i,"3FEBC642"),"refs":refs,"bitmap_hex":bitmap.hex()})
    ib,ni,iw,ic,iv,istring,iwidth=bcsv(root,"ItemParam")
    require(ni==11178 and gitblob(ib)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    counts=collections.Counter(f'{iv(i,"70E19913",4):08X}' for i in range(ni))
    for e in entries:
        e["itemparam_crc_count"]=counts[e["crc32"]];e["itemparam_murmur_count"]=counts[e["murmur3"]]
    # A zero match is an observed result, never silently promoted.
    result={"native_category_names":len(entries),"unique_murmur":len(by_hash),"token_count":sum(len(g["refs"]) for g in groups),"unique_token_matches":sum(len(r["matches"])==1 for g in groups for r in g["refs"]),"itemparam_crc_category_count":sum(e["itemparam_crc_count"]>0 for e in entries),"itemparam_murmur_category_count":sum(e["itemparam_murmur_count"]>0 for e in entries),"itemparam_distinct_raw":len(counts),"original_header_names_recovered":0}
    print("CATEGORY_NAMES",json.dumps(entries,ensure_ascii=False));print("GROUP_BITMAPS",json.dumps(groups,ensure_ascii=False));print(json.dumps(result,indent=2))
    for name,obj in [("category_names",entries),("group_bitmaps",groups),("itemparam_distribution",dict(counts)),("summary",result)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
