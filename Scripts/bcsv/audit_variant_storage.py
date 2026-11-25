#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["lz4==4.3.3","capstone==5.0.3"]
# ///
"""Original NSO enum strings, raw BCSV storage bitmap, static remake pointer route.
No runtime writes or dispatch. Unresolved enum/cache routes stay NULL.
"""
import argparse,collections,csv,hashlib,json,struct,sys,zlib
from pathlib import Path
from bcsv import BCSV,crc32
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
SLIDE=0x100000
def need(v,m):
    if not v:raise ValueError(m)
def write(p,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
def first_storage(word):
    return next((i for i in range(1,14) if word&(1<<i)),None)
def route(remake,kind,canftr,storage):
    if remake==0:return None,"none"
    if remake==1:return (4,"can_ftr") if canftr==1 else (None,"can_ftr_false") if canftr==0 else (None,"can_ftr_unresolved")
    if remake==2:
        if kind is None:return None,"kind_unresolved"
        if kind==0x78:return None,"fence_excluded"
        if storage is None:return None,"storage_unresolved"
        return (4,"first_storage_bit9") if first_storage(storage)==9 else (None,"first_storage_not9")
    if remake==3 and kind in (0x61,0xa8):return 4,"smartphone_kind_match"
    if remake==4 and kind==0x78:return 6,"fence_kind_match"
    if remake==5 and kind==0x9d:return 4,"ladder_kind_match"
    return None,"kind_mismatch_or_unresolved"
def run(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh303_r100_nso_decode import decode
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    def ptr(va):
        r=relocs.get(va)
        if r is not None:
            if r["symbol"]!=0 or r["type"] not in (1027,"RELR"):return None
            return r["addend"]
        try:return struct.unpack("<Q",raw(va,8))[0]
        except ValueError:return None
    def string(va):
        if va is None:return None
        for start,b in mapped[1:]:
            if start<=va<start+len(b):
                off=va-start;end=b.find(b"\0",off,min(off+256,len(b)))
                if end<0:return None
                try:return b[off:end].decode("utf-8")
                except UnicodeDecodeError:return None
        return None
    def table(gh,n):
        return [dict(index=i,slot_va=hex(gh+8*i),target_rva=hex(v) if v is not None else None,label=string(v)) for i in range(n) for v in [ptr(gh-SLIDE+i*8)]]
    enum=table(0x04a32ac8,6);other=table(0x04a32a60,6)
    expected={"None","Ftr","Tool","Smartphone","Fence","SettingLadder"}
    print(json.dumps({"table_04a32ac8":enum,"table_04a32a60":other},ensure_ascii=False),flush=True)
    if {r["label"] for r in enum}!=expected and {r["label"] for r in other}==expected:
        enum,other=other,enum
    need({r["label"] for r in enum}==expected,"Neither native pointer table matches ItemRemakeType names")
    enum_map={crc32(r["label"]):r["index"] for r in enum}
    sources={}
    for name in ("ItemKind","ItemParam","ItemOutfitInfo"):
        p=root/ROM/(name+".bcsv");t=BCSV.read(p);sources[name]=t.metadata()
    k=BCSV.read(root/ROM/"ItemKind.bcsv");p=BCSV.read(root/ROM/"ItemParam.bcsv");o=BCSV.read(root/ROM/"ItemOutfitInfo.bcsv")
    need((k.count,p.count,o.count)==(189,11178,162),"raw count")
    kindlabels=[k.string(i,0x87bf00e8) for i in range(k.count)]
    outfitlabels=[o.string(i,0x87bf00e8) for i in range(o.count)]
    # Candidate original enum pointer arrays, require exact full set plus known caller anchors.
    # Neither BCSV physical row nor UniqueID is silently used as native enum.
    def array_candidates(labels):
        domain=set(labels);first={}
        for va,r in relocs.items():
            if r["symbol"]!=0 or r["type"] not in (1027,"RELR"):continue
            v=r["addend"]
            if v is None:continue
            s=string(v)
            if s in domain:first[va]=s
        results=[]
        for va in sorted(first):
            if va-8 in first:continue
            seq=[];x=va
            while x in first:seq.append(first[x]);x+=8
            if len(seq)>=len(labels):
                for i in range(len(seq)-len(labels)+1):
                    sub=seq[i:i+len(labels)]
                    if set(sub)==domain and len(set(sub))==len(labels):
                        results.append(dict(ghidra_va=hex(va+8*i+SLIDE),labels=sub))
        return results
    kc=array_candidates(kindlabels);oc=array_candidates(outfitlabels)
    # Four independently observed special branch kinds constrain a candidate order.
    required={0x61:"CraftPhoneCase",0xa8:"SmartPhone",0x78:"Fence",0x9d:"SettingLadder"}
    exact=[r for r in kc if all(r["labels"][i]==name for i,name in required.items())]
    # All matching arrays with identical order are equivalent but not runtime producer proof.
    orders={tuple(r["labels"]) for r in exact}
    kindidx={s:i for i,s in enumerate(next(iter(orders)))} if len(orders)==1 else {}
    kd={crc32(s):i for i,s in enumerate(kindlabels)};od={crc32(s):i for i,s in enumerate(outfitlabels)}
    need(len(kd)==189 and len(od)==162,"CRC collision")
    storage=[]
    for i,label in enumerate(outfitlabels):
        b=o.raw(i,0xc89fb7af);need(len(b)>=2,"storage width")
        v=int.from_bytes(b[:2],"little")&0xfffe
        storage.append(dict(row=i,unique_id=o.uint(i,0x54706054),label=label,raw_hex=b.hex(),storage_u16=int.from_bytes(b[:2],"little"),masked_u16=v,first_bit=first_storage(v),bit9_first=int(first_storage(v)==9),tail_hex=b[2:].hex()))
    stats=collections.Counter();rows=[];krows=[]
    for i,s in enumerate(kindlabels):
        rawtype=k.uint(i,0x6b749e8a);need(rawtype in enum_map,"unknown remake type")
        krows.append(dict(row=i,unique_id=k.uint(i,0x54706054),label=s,native_index_candidate=kindidx.get(s),remake_type_hash=f"0x{rawtype:08X}",remake_enum=enum_map[rawtype],remake_label=enum[enum_map[rawtype]]["label"],can_ftr=k.raw(i,0x90bc0855)[0]))
    for i in range(p.count):
        ident=p.uint(i,0x54706054);ki=kd.get(p.uint(i,0x5270eb75));oi=od.get(p.uint(i,0x7724bf93));rid=p.uint(i,0xcb5eb33f,signed=True)
        if ki is None:
            row=dict(item_id=ident,remake_id=rid,kind="",kind_native_index_candidate=None,remake_enum=None,remake_type="",outfit_label="",storage_mask=None,first_storage_bit=None,entity_offset_candidate=None,route_status="kind_unmatched",native_runtime_verified=0,dispatch_verified=0)
        else:
            q=krows[ki];st=storage[oi] if oi is not None else None
            idx=q["native_index_candidate"]
            off,status=route(q["remake_enum"],idx,q["can_ftr"],st["masked_u16"] if st else None)
            row=dict(item_id=ident,remake_id=rid,kind=q["label"],kind_native_index_candidate=idx,remake_enum=q["remake_enum"],remake_type=q["remake_label"],outfit_label=st["label"] if st else "",storage_mask=st["masked_u16"] if st else None,first_storage_bit=st["first_bit"] if st else None,entity_offset_candidate=off,route_status=status,native_runtime_verified=0,dispatch_verified=0)
        rows.append(row);stats["all:"+row["route_status"]]+=1
        if rid>=0:stats["remake:"+row["route_status"]]+=1
    # Exact independent audit of 14-bit scan including priority, bit0 clear, ignored upper bits.
    for word in range(65536):
        found=first_storage(word&0xfffe)
        ref=next((i for i in range(1,14) if (word>>i)&1),None)
        need(found==ref,"bitmap")
    out.mkdir(parents=True,exist_ok=True)
    for n,rr in [("remake_enum",enum),("item_kind_route",krows),("outfit_storage",storage),("item_route",rows)]:write(out/(n+".csv"),rr)
    report=dict(counts=dict(stats),row_counts={"item":len(rows),"kind":len(krows),"outfit":len(storage)},remake_enum_table=enum,other_table=other,kind_pointer_candidates=kc,kind_anchor_matches=exact,outfit_pointer_candidates=oc,source_bcsv=sources,source_nso_sha256=hashlib.sha256(nso).hexdigest(),source_elf_sha256=hashlib.sha256(elf).hexdigest(),bitmap_cases=65536,native_runtime_verified=0,dispatch_verified=0,limitations="native kind order is static pointer candidate; exact runtime cache and special wrapper class not replayed")
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps({"counts":dict(stats),"enum":enum,"kind_arrays":len(kc),"anchor_matches":len(exact),"outfit_arrays":len(oc),"bitmap_cases":65536},ensure_ascii=False))
if __name__=="__main__":
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."));a.add_argument("--historical",type=Path,required=True);a.add_argument("--out",type=Path,default=Path("out/variant-storage"));p=a.parse_args();run(p.root,p.historical,p.out)
