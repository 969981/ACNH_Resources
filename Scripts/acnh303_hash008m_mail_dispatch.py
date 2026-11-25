#!/usr/bin/env python3
"""HASH-008M: original dispatch table, group ordinals and item bitmap evidence.

Relocation target and instruction bytes are evidence, not inferred handler names.
Only an offline bitmap model is executed; no native gameplay code is executed.
"""
import argparse, collections, csv, json, struct, zlib
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode, parse_elf, get_bytes_va, require, bcsv, gitblob
from acnh303_hash008i import murmur

SLIDE=0x100000
DOMAIN=15000
BYTES=0x754
TABLE=0x04A39630
VTABLE=0x049FF3A8
def hx(n):return f"{n:08X}"
def dump(out,name,data):
    (out/(name+".json")).write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def bit_set(buf,i):
    if not 0<=i<DOMAIN:raise ValueError("item bitmap index outside logical domain")
    buf[i//8]|=1<<(i%8)
def select(buf,rank):
    if len(buf)!=BYTES or buf[-1]!=0:raise ValueError("invalid bitmap or nonzero padding")
    if rank<=0:return None
    for offset in range(0,BYTES,4):
        word=int.from_bytes(buf[offset:offset+4],"little")
        count=word.bit_count()
        if rank>count:rank-=count;continue
        for _ in range(rank-1):word&=word-1
        return offset*8+(word&-word).bit_length()-1
    return None
def tests():
    empty=bytearray(BYTES);require(select(empty,1) is None,"empty")
    ids=[0,1,7,8,31,32,63,64,14999]
    buf=bytearray(BYTES)
    for i in ids:bit_set(buf,i)
    require([select(buf,i) for i in range(1,len(ids)+1)]==ids,"rank boundary")
    require(select(buf,0) is None and select(buf,len(ids)+1) is None,"rank outside")
    full=bytearray(b"\xff"*1875+b"\x00")
    for rank in (1,32,33,14999,15000):require(select(full,rank)==rank-1,"full rank")
    for i in (-1,15000,15007):
        try:bit_set(buf,i)
        except ValueError:pass
        else:raise ValueError("invalid logical index accepted")
    buf[-1]=1
    try:select(buf,1)
    except ValueError:pass
    else:raise ValueError("padding accepted")
    return {"status":"passed","scope":"offline model only; identity vtable pending"}
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    dump(out,"offline_bitmap_tests",tests())
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    def is_exec(a):
        return any(s["flags"]&1 and s["vaddr"]<=a<s["vaddr"]+s["filesz"] for s in segs)
    def pointer(slot):
        va=slot-SLIDE;r=relocs.get(va)
        if r and r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None:
            target=r["addend"]
        else:target=None
        return {"slot_ghidra":hx(slot),"slot_elf":hx(va),"relocation":r,
                "raw_le":raw(va,8).hex(),"target_elf":hx(target) if target is not None else None,
                "target_ghidra":hx(target+SLIDE) if target is not None else None,
                "target_executable":is_exec(target) if target is not None else False}
    def window(target,size=256):
        if target is None:return []
        a=int(target,16);data=get_bytes_va(elf,segs,a,size)
        if data is None or not is_exec(a):return []
        require(raw(a,size)==data,"original ELF/NSO instruction mismatch")
        return [{"elf":hx(i.address),"ghidra":hx(i.address+SLIDE),"bytes":i.bytes.hex(),"mnemonic":i.mnemonic,"operands":i.op_str} for i in md.disasm(data,a)]
    counts=collections.Counter(); configs=[]
    for name,n_expected in (("MessageCardSelectPresent",125),("MessageCardSelectPresentSp",19)):
        b,n,w,c,v,s,width=bcsv(root,name);require(n==n_expected,"config row count")
        for i in range(n):
            handling=v(i,"E060D3CD",2);require(0<=handling<=18,"handling enum range")
            counts[handling]+=1
            configs.append({"table":name,"row":i,"text_key":hx(v(i,"37571146",4)),"category_index":v(i,"368210C4",4),"group_row":v(i,"128A3D9B",4),"handling":handling,"remake":v(i,"C233727B",1)})
    require(len(counts)==19 and sum(counts.values())==144,"enum coverage")
    handlers=[{"handling":0,"count":counts[0],"dispatch":False,"semantic_status":"no special dispatch"}]
    for i in range(1,19):
        row=pointer(TABLE+8*(i-1))
        handlers.append({"handling":i,"count":counts[i],"dispatch":True,**row,"entry_instruction_window":window(row["target_elf"]),"semantic_status":"unresolved; bounded instruction window not full function"})
    dump(out,"handling_dispatch",handlers)
    vtable=[{"offset":8*i,**pointer(VTABLE+8*i)} for i in range(5)]
    for row in vtable:row["entry_instruction_window"]=window(row["target_elf"],64)
    dump(out,"bitmap_vtable",vtable)
    descriptors=[pointer(x) for x in (0x04BC0320,0x04A395F0,0x04A39618,0x049FF948)]
    for row in descriptors:row["entry_instruction_window"]=window(row["target_elf"],128)
    dump(out,"group_and_filter_pointers",descriptors)
    dictionary=json.loads((root/"research/hash008j/mail_category_dictionary.json").read_text())
    cats=dictionary["categories"];by_murmur={int(x["murmur3"],16):x for x in cats};by_crc={int(x["crc32"],16):x for x in cats}
    b,n,w,c,v,s,width=bcsv(root,"ItemMailAttachCategoryGroup");require(n==3,"group rows")
    groups=[]
    for i in range(n):
        uid=v(i,"54706054",2);tokens=s(i,"E4361C86").split("|")
        indices=[by_murmur[int(t,16)]["index"] for t in tokens]
        mask=bytearray(10)
        for idx in indices:mask[idx//8]|=1<<(idx%8)
        groups.append({"row":i,"unique_id":uid,"label":s(i,"3FEBC642"),"category_indices":indices,"bitmap_hex":mask.hex(),"after_none_cleared_hex":(bytes([mask[0]&254])+mask[1:]).hex()})
    b,n,w,c,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84","ItemParam source identity")
    items={}
    for i in range(n):
        iid=v(i,"54706054",2);require(iid not in items,"duplicate id")
        category=by_crc.get(v(i,"70E19913",4))
        items[iid]={"item_id":iid,"row":i,"res_name":s(i,"3FEBC642"),"category_index":category["index"] if category else None,"category_name":category["name"] if category else None}
    hha=[x for x in items.values() if x["category_index"] in (35,37,38,39,40)]
    require(len(hha)==9,"HHA count")
    for group in groups:
        group["static_category_item_ids"]=sorted(i for i,x in items.items() if x["category_index"] in set(group["category_indices"])-{0})
    for c in configs:
        require(0<=c["group_row"]<len(groups),"group selector bounds")
        group=groups[c["group_row"]]
        c["group_unique_id"]=group["unique_id"]
        c["initial_category_indices"]=sorted((set(group["category_indices"])|{c["category_index"]})-{0})
        c["static_category_item_ids"]=sorted(i for i,x in items.items() if x["category_index"] in c["initial_category_indices"])
        c["runtime_pool_verified"]=False
    dump(out,"group_rows",groups);dump(out,"attachment_configs",configs);dump(out,"hha_items",hha)
    # Identity hypothesis is supported by direct normalized-ID clear/test helpers.
    # Do not certify vtable +0x10 until exact instructions have been interpreted.
    with (out/"bitmap_index_itemid_candidate.csv").open("w",encoding="utf-8-sig",newline="") as f:
        wr=csv.writer(f);wr.writerow(["bitmap_index","byte_offset","word_offset","bit_in_word","candidate_item_id","itemparam_row","status"])
        for idx in range(DOMAIN):
            item=items.get(idx)
            wr.writerow([idx,idx//8,(idx//32)*4,idx%32,idx,item["row"] if item else "", "identity_candidate_present_in_itemparam" if item else "identity_candidate_absent_from_itemparam"])
    summary={"handling_values":len(counts),"dispatch_slots":18,
             "resolved_executable_targets":sum(x.get("target_executable",False) for x in handlers),
             "unique_executable_target_count":len({x["target_elf"] for x in handlers if x.get("target_executable")}),
             "logical_bitmap_bits":DOMAIN,"physical_bitmap_bits":BYTES*8,"padding_bits":BYTES*8-DOMAIN,
             "itemparam_rows":n,"item_ids_inside_logical_domain":sum(0<=i<DOMAIN for i in items),
             "item_ids_outside_logical_domain":sorted(i for i in items if not 0<=i<DOMAIN),
             "hha_items":len(hha),"group_rows":len(groups),"runtime_verified":False,"bitmap_identity_machine_semantics_verified":False}
    dump(out,"summary",summary);print(json.dumps(summary,ensure_ascii=False))
    print("DISPATCH",json.dumps([{k:v for k,v in x.items() if k!="entry_instruction_window"} for x in handlers],ensure_ascii=False))
    print("VTABLE",json.dumps(vtable,ensure_ascii=False))
    print("HHA",json.dumps(hha,ensure_ascii=False))
    require(summary["resolved_executable_targets"]==18,"dispatch relocation coverage; inspect output")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
