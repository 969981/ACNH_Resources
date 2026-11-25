#!/usr/bin/env python3
"""HASH-008P: locate enum cache writers and native string dictionary candidates.
String/hash overlap is candidate evidence; producer-to-table linkage must be checked separately.
"""
import argparse,collections,csv,json,re,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob,scan,adrp_target,adr_target
from acnh303_hash008i import murmur
SLIDE=0x100000
CACHES={189:0x05326EC0-SLIDE,318:0x05327190-SLIDE}
def hx(a):return f"{a+SLIDE:08X}"
def dump(out,n,o):(out/(n+".json")).write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,rr=decode(root);segs=parse_elf(elf)
    reloc={a:r["addend"] for a,r in rr.items() if r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None}
    b,n,w,c,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    fields={h:collections.Counter(v(i,h,4) for i in range(n)) for h in c if width(h)==4}
    fields={h:x for h,x in fields.items() if len(x)>=8}
    known={h:len(x) for h,x in fields.items()}
    dump(out,"field_cardinalities",known)
    # Only original readonly printable identifier strings.
    ro=[x for x in segs if x["flags"]&4 and not x["flags"]&3]
    names={}
    for addr,target in reloc.items():
        if not any(x["vaddr"]<=target<x["vaddr"]+x["filesz"] for x in ro):continue
        data=get_bytes_va(elf,segs,target,128)
        if not data or b"\0" not in data:continue
        name=data.split(b"\0",1)[0]
        if re.fullmatch(rb"[A-Za-z_0-9][A-Za-z0-9_./:+-]{0,95}",name):
            names[addr]=(target,name,zlib.crc32(name),murmur(name))
    runs=[]
    for a in sorted(names):
        if not runs or a!=runs[-1][-1]+8:runs.append([])
        runs[-1].append(a)
    # Rolling window match on distinct raw values, not frequency alone.
    # Full-length candidates may include neighbouring enum tables.
    candidates=[]
    for cap in CACHES:
        best=[]
        for run in runs:
            if len(run)<cap:continue
            for h,counter in fields.items():
                for j,alg in ((2,"crc32"),(3,"murmur3")):
                    vals=[names[a][j] for a in run]
                    matching=collections.Counter(x for x in vals[:cap] if x in counter)
                    for start in range(len(run)-cap+1):
                        if start:
                            old=vals[start-1];new=vals[start+cap-1]
                            if old in matching:
                                matching[old]-=1
                                if matching[old]==0:del matching[old]
                            if new in counter:matching[new]+=1
                        distinct=len(matching)
                        if distinct<max(6,min(len(counter),cap)//3):continue
                        coverage=sum(counter[x] for x in matching)
                        best.append((distinct,coverage,-abs(len(run)-cap),run[start],h,alg,len(run)))
        best.sort(reverse=True)
        # Select at most three per field/algorithm, dedup overlapping windows.
        picked=[]
        for d,cov,_,base,h,alg,runlen in best:
            if any(x["field"]==h and x["algorithm"]==alg and abs(int(x["base_elf"],16)-base)<cap*8 for x in picked):continue
            if len(picked)>=12:break
            idx=2 if alg=="crc32" else 3
            entries=[]
            for i in range(cap):
                a=base+i*8;target,name,crc,mur=names[a]
                require(raw(target,len(name)+1)==name+b"\0","original string mismatch")
                entries.append({"index":i,"name":name.decode(),"crc32":f"{crc:08X}","murmur3":f"{mur:08X}","slot_elf":f"{a:08X}","string_elf":f"{target:08X}","item_count":fields[h].get(names[a][idx],0)})
            picked.append({"capacity":cap,"base_elf":f"{base:08X}","base_ghidra":hx(base),"field":h,"algorithm":alg,"distinct_matches":d,"row_matches":cov,"run_length":runlen,"entries":entries,"status":"candidate_only"})
        candidates.extend(picked)
    dump(out,"dictionary_candidates",candidates)
    print("CANDIDATES",json.dumps([{k:v for k,v in x.items() if k!="entries"}|{"first":x["entries"][0]["name"],"last":x["entries"][-1]["name"]} for x in candidates]))
    # Find cache address formation and writes, including relative GOT aliases.
    target={a+o for a in CACHES.values() for o in (0,4,8)}
    aliases={a:v for a,v in reloc.items() if v in target}
    pages={a&~4095 for a in target|set(aliases)}
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    hits={};seeds=0
    for seg in segs:
        if not seg["flags"]&1:continue
        off,size,va=seg["file_offset"],seg["filesz"],seg["vaddr"]
        for i,(word,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            pc=va+i*4
            if adrp_target(word,pc) not in pages and adr_target(word,pc) not in target|set(aliases):continue
            seeds+=1;events=[]
            ins,refs,calls=scan(md,elf,segs,reloc,pc,min(160,size-i*4),events)
            for e in refs+events:
                if e["address"] not in target and e["address"] not in aliases:continue
                key=(e["va"],e["address"],e["kind"])
                if key not in hits:
                    hits[key]={**e,"ghidra":hx(e["va"]),"address_ghidra":hx(e["address"]),"seed":hx(pc),"calls":[{**x,"target_ghidra":hx(x["target"])} for x in calls],"context":[{"va":hx(x.address),"asm":x.mnemonic+" "+x.op_str} for x in ins]}
    writes=[x for x in hits.values() if x["kind"]=="write"]
    dump(out,"cache_references",list(hits.values()));dump(out,"cache_writes",writes)
    print("CACHE_WRITES",json.dumps([{k:v for k,v in x.items() if k!="context"} for x in writes]))
    print("ALIASES",json.dumps({hx(k):hx(v) for k,v in aliases.items()}))
    # Export top candidates per domain, preserving unknown mappings and avoiding ambiguous hashes.
    for cap in CACHES:
        top=next((x for x in candidates if x["capacity"]==cap),None)
        if not top:continue
        h,alg=top["field"],top["algorithm"];by=collections.defaultdict(list)
        for e in top["entries"]:by[int(e[alg],16)].append(e)
        with (out/f"itemparam_{cap}_candidate.csv").open("w",encoding="utf-8-sig",newline="") as f:
            wr=csv.writer(f);wr.writerow(["row","item_id","field_hash","raw_value","candidate_index","candidate_name","status"])
            for i in range(n):
                rawv=v(i,h,4);matches=by[rawv]
                wr.writerow([i,v(i,"54706054",2),h,f"{rawv:08X}",matches[0]["index"] if len(matches)==1 else "",matches[0]["name"] if len(matches)==1 else "","candidate_only" if len(matches)==1 else "unresolved"])
    print("SUMMARY",json.dumps({"fields":len(fields),"string_relocations":len(names),"runs":len(runs),"candidate_tables":len(candidates),"cache_refs":len(hits),"cache_writes":len(writes),"scan_seeds":seeds,"native_producer_verified":False}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
