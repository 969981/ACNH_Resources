#!/usr/bin/env python3
"""HASH-008P3: recover actual compiled enum ordering and ItemParam full join."""
import argparse,collections,csv,json,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require,bcsv,gitblob,bl_target
from acnh303_hash008i import murmur
S=0x100000
DOMAINS=[("ItemKind",189,"5270EB75",0x04BB8F90,0x830,0x01A88150),
         ("ItemFrom",318,"DB1A2F07",0x04BB5820,0x1298,0x01A867B0)]
def hx(x):return f"{x:08X}"
def dump(out,name,obj):(out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf)
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    def ptr(a):
        r=relocs.get(a);require(r is not None and r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None,"relative pointer missing "+hx(a+S))
        return r["addend"]
    ib,n,w,ic,iv,ist,iw=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(ib)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam identity")
    combined=[{"row":i,"item_id":iv(i,"54706054",2),"resource_name":ist(i,"3FEBC642")} for i in range(n)]
    summaries=[];focus={f-S:name for name,cap,h,slot,offset,f in DOMAINS}
    for name,cap,h,slot,offset,f in DOMAINS:
        base=ptr(slot-S)+offset
        b,nn,ww,c,v,st,width=bcsv(root,name);require(nn==cap,"domain row count")
        labels={st(i,"87BF00E8"):i for i in range(nn)}
        require(len(labels)==cap,"duplicate BCSV label")
        rows=[]
        vals=collections.Counter(iv(i,h,4) for i in range(n))
        for i in range(cap):
            a=base+i*8;target=ptr(a)
            buf=bytearray()
            for j in range(128):
                x=raw(target+j,1)
                require(x==get_bytes_va(elf,segs,target+j,1),"ELF/NSO string mismatch")
                if x==b"\0":break
                buf.extend(x)
            else:raise ValueError("unterminated original enum name")
            label=bytes(buf).decode("ascii")
            require(label in labels,"native label absent from BCSV: "+label)
            row=labels[label];crc=zlib.crc32(buf)
            rows.append({"native_index":i,"bcsv_row":row,"unique_id":v(row,"54706054",2),"label":label,"name_ja":st(row,"036E8EBE"),"crc32":hx(crc),"murmur3":hx(murmur(buf)),"pointer_slot_elf":hx(a),"string_elf":hx(target),"item_count":vals[crc]})
        require(len({x["label"] for x in rows})==cap,"native enum duplicates")
        by={int(x["crc32"],16):x for x in rows}
        require(len(by)==cap and set(vals)<=set(by),"CRC join incomplete")
        for i,x in enumerate(combined):
            e=by[iv(i,h,4)];x.update({name+"_index":e["native_index"],name+"_label":e["label"],name+"_unique_id":e["unique_id"],name+"_raw":e["crc32"]})
        dump(out,name+"_native_dictionary",rows)
        with (out/(name+"_native_dictionary.csv")).open("w",encoding="utf-8-sig",newline="") as file:
            wr=csv.DictWriter(file,fieldnames=list(rows[0]));wr.writeheader();wr.writerows(rows)
        summary={"name":name,"count":cap,"table_elf":hx(base),"table_ghidra":hx(base+S),"alias_ghidra":hx(slot),"lookup":hx(f),"all_labels_in_bcsv":True,"order_matches_bcsv_rows":sum(x["native_index"]==x["bcsv_row"] for x in rows),"itemparam_rows_matched":sum(x["item_count"] for x in rows),"unused":[x["label"] for x in rows if x["item_count"]==0]}
        summaries.append(summary)
        print("NATIVE_DOMAIN",json.dumps(summary,ensure_ascii=False))
        print("NATIVE_ENUM",name,json.dumps([{k:x[k] for k in ("native_index","bcsv_row","unique_id","label","crc32","item_count")} for x in rows],ensure_ascii=False))
    with (out/"itemparam_native_kind_from.csv").open("w",encoding="utf-8-sig",newline="") as f:
        wr=csv.DictWriter(f,fieldnames=list(combined[0]));wr.writeheader();wr.writerows(combined)
    dump(out,"summary",summaries)
    # Scan for direct BL and B to the two CRC-to-index functions.
    refs=[]
    for seg in segs:
        if not seg["flags"]&1:continue
        off,size,va=seg["file_offset"],seg["filesz"],seg["vaddr"]
        for i,(word,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            pc=va+i*4
            t=bl_target(word,pc)
            kind="BL"
            if t is None and word&0xfc000000==0x14000000:
                t=bl_target(word|0x80000000,pc);kind="B"
            if t not in focus:continue
            a=max(va,pc-64);z=min(va+size,pc+80);data=raw(a,z-a)
            require(data==get_bytes_va(elf,segs,a,z-a),"callsite bytes mismatch")
            refs.append({"domain":focus[t],"site":hx(pc+S),"target":hx(t+S),"kind":kind,"context":[{"va":hx(q.address+S),"asm":q.mnemonic+" "+q.op_str} for q in md.disasm(data,a)]})
    dump(out,"native_lookup_calls",refs)
    print("LOOKUP_CALLS",json.dumps(refs))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
