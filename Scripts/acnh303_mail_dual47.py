#!/usr/bin/env python3
"""HASH-008R2: search 47-entry native string table and dual enum cache producer.
Matches alone are candidates until the producer linkage and exact order are verified.
"""
import argparse,collections,json,re,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,adrp_target,adr_target,scan
S=0x100000
def hx(a):return f"{a+S:08X}"
def run(root,out):
    elf,nso,mapped,segments,raw,tags,rr=decode(root);segs=parse_elf(elf)
    reloc={a:r["addend"] for a,r in rr.items() if r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None}
    b,n,w,c,v,st,width=bcsv(root,"ItemParam")
    fields={h:collections.Counter(v(i,h,4) for i in range(n)) for h in c if width(h)==4}
    fields={h:x for h,x in fields.items() if 5<=len(x)<=60}
    names={}
    for a,t in reloc.items():
        b=get_bytes_va(elf,segs,t,96)
        if not b or b"\0" not in b:continue
        s=b.split(b"\0",1)[0]
        if not re.fullmatch(rb"[A-Za-z_][A-Za-z0-9_]{0,79}",s):continue
        names[a]=(t,s.decode(),zlib.crc32(s))
    runs=[]
    for a in sorted(names):
        if not runs or a!=runs[-1][-1]+8:runs.append([])
        runs[-1].append(a)
    windows=[]
    for r in runs:
        if len(r)<47:continue
        for j in range(len(r)-46):
            slots=r[j:j+47];labels=[names[a] for a in slots];values={x[2] for x in labels}
            if len(values)!=47:continue
            hits=[]
            for h,counts in fields.items():
                hit=values&set(counts)
                if len(hit)<max(5,len(counts)*.7):continue
                hits.append({"field":h,"distinct":len(counts),"matched":len(hit),"rows":sum(counts[x] for x in hit),"unmatched":[f"{x:08X}" for x in set(counts)-values]})
            if hits:
                windows.append({"base":hx(slots[0]),"base_elf":f"{slots[0]:08X}","matches":hits,"entries":[{"index":i,"label":x[1],"crc32":f"{x[2]:08X}","string_va":hx(x[0])} for i,x in enumerate(labels)]})
    windows.sort(key=lambda x:(sum(h["matched"]==h["distinct"] for h in x["matches"]),sum(h["matched"] for h in x["matches"])),reverse=True)
    out.mkdir(parents=True,exist_ok=True)
    (out/"dual47_candidates.json").write_text(json.dumps(windows[:40],indent=2)+"\n")
    print("DUAL47",json.dumps(windows[:8]))
    target={a-S for a in (0x05327430,0x05327438,0x05327440,0x05327448)}
    aliases={a:v for a,v in reloc.items() if v in target}
    pages={a&~4095 for a in target|set(aliases)}
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    hits={};stores={}
    for seg in segs:
        if not seg["flags"]&1:continue
        off,size,va=seg["file_offset"],seg["filesz"],seg["vaddr"]
        for i,(word,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            pc=va+i*4
            if adrp_target(word,pc) not in pages and adr_target(word,pc) not in target|set(aliases):continue
            ev=[];ins,refs,calls=scan(md,elf,segs,reloc,pc,min(128,size-i*4),ev)
            matched=[x for x in refs+ev if x["address"] in target or x["address"] in aliases]
            if not matched:continue
            for x in matched:
                hits[(x["va"],x["address"],x["kind"])]=x
            for q in ins:
                if q.mnemonic!="strh" or "sxtw" not in q.op_str:continue
                a=max(va,q.address-0x700);z=min(va+size,q.address+0x30)
                data=get_bytes_va(elf,segs,a,z-a)
                require(data==raw(a,z-a),"producer window mismatch")
                lines=[{"va":hx(t.address),"asm":t.mnemonic+" "+t.op_str} for t in md.disasm(data,a)]
                stores[q.address]={"site":hx(q.address),"references":[{**x,"ghidra_address":hx(x["address"])} for x in matched],"window":lines}
    (out/"dual47_cache_references.json").write_text(json.dumps(list(hits.values()),indent=2)+"\n")
    (out/"dual47_store_windows.json").write_text(json.dumps(list(stores.values()),indent=2)+"\n")
    print("DUAL47_STORES",json.dumps([{"site":v["site"],"references":v["references"]} for v in stores.values()]))
    print("DUAL47_SUMMARY",json.dumps({"candidate_windows":len(windows),"name_relocations":len(names),"cache_references":len(hits),"store_windows":len(stores),"aliases":{hx(a):hx(v) for a,v in aliases.items()}}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
