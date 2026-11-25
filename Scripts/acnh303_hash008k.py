#!/usr/bin/env python3
"""HASH-008K: exact data relationships and bounded native candidate search.
No reward selection or header recovery is claimed from materialization alone."""
import argparse,collections,json,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import bcsv,decode,parse_elf,get_bytes_va,require,gitblob,adrp_target,adr_target,bl_target,sx,scan
SLIDE=0x100000
HASHES={0x70E19913:"item_mail_category",0xF4DBDF21:"category_zero_value",0x629B9E5B:"unknown_enum_value",0x8B1904B9:"mailbox_action_field",0x368210C4:"present_category_index",0x128A3D9B:"present_category_group_index",0x37571146:"present_text_key",0xE060D3CD:"present_program_handling",0xEFA5DDA4:"trade_threshold_flag",0x9C4EFA45:"trade_ticket_base_price",0x877C84DE:"trade_material_price"}
TARGETS={0x01ABA7E0-SLIDE:"mail_group_loader",0x01ABAEE0-SLIDE:"mail_group_set_bit",0x02626600-SLIDE:"trade_price_predicate",0x026253E0-SLIDE:"trade_price_calculator"}
def wide(w):
    op=w&0x7f800000
    if op not in (0x52800000,0x12800000,0x72800000):return None
    shift=((w>>21)&3)*16
    if shift>16:return None
    return op,w&31,shift,(w>>5)&65535
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    require(zlib.crc32(b"0")==0xf4dbdf21 and zlib.crc32(b"Unknown")==0x629b9e5b,"value name CRC")
    require(zlib.crc32(b"TradeTicketBasePrice u32")==0x9c4efa45 and zlib.crc32(b"TradeBasePrice u16")==0x877c84de,"price name CRC")
    cats=json.loads((root/"research/hash008j/mail_category_dictionary.json").read_text())
    by_crc={int(c["crc32"],16):c for c in cats["categories"]}
    b,n,w,cols,v,s,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)==cats["source"]["itemparam_git_blob"],"item identity")
    items=collections.defaultdict(list)
    for i in range(n):
        raw=v(i,"70E19913",4);c=by_crc.get(raw)
        if c and c["index"] in (35,37,38,39,40):
            items[c["index"]].append({"item_id":v(i,"54706054",2),"model":s(i,"48EF0398"),"res_name":s(i,"3FEBC642"),"kind":s(i,"FC275E86")})
    zeros=sum(v(i,"70E19913",4)==0xf4dbdf21 for i in range(n))
    require(zeros==2452 and sum(map(len,items.values()))==9,"expected category counts")
    rewards=[{"index":idx,"name":cats["categories"][idx]["name"],"items":items[idx]} for idx in sorted(items)]
    # SelectPresent uses indices in the category column. Group-row interpretation
    # is deliberately recorded as a candidate, not silently substituted for ID.
    gb,gn,gw,gc,gv,gs,gwidth=bcsv(root,"ItemMailAttachCategoryGroup")
    group_rows={i:{"row":i,"id":gv(i,"54706054",2),"label":gs(i,"3FEBC642")} for i in range(gn)}
    presents=[]
    for name in ("MessageCardSelectPresent","MessageCardSelectPresentSp"):
        b,n,w,c,v,s,width=bcsv(root,name)
        for i in range(n):
            cat=v(i,"368210C4",4);group=v(i,"128A3D9B",4)
            presents.append({"table":name,"row":i,"category_index_raw":cat,"category_name_if_index":cats["categories"][cat]["name"] if cat<79 else None,"group_index_raw":group,"group_row_candidate":group_rows.get(group) if group else None,"text_key_murmur3":f'{v(i,"37571146",4):08X}',"program_handling_type":v(i,"E060D3CD",2),"remake_raw":v(i,"C233727B",1)})
    require(len(presents)==144,"present row count")
    b,n,w,c,v,s,width=bcsv(root,"ItemAct")
    enum_rows=collections.Counter(f'{v(i,"8B1904B9",4):08X}' for i in range(n))
    require(n==82 and enum_rows["629B9E5B"]==77,"mailbox distribution")
    b,n,w,c,v,s,width=bcsv(root,"RecipeCraftParam")
    price_rows=[{"recipe_id":v(i,"54706054",2),"item_id":v(i,"89A3482C",2),"base_price":v(i,"9C4EFA45",4),"flag":v(i,"EFA5DDA4",1)} for i in range(n)]
    matrix=collections.Counter((x["flag"],x["base_price"]>1000) for x in price_rows)
    require(n==924 and matrix[(1,True)]==113 and matrix[(1,False)]==0 and matrix[(0,True)]==808 and matrix[(0,False)]==3,"trade price matrix")
    # Original NSO/ELF crosscheck of materializations and direct call edges.
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    rel={}
    for addr,x in relocs.items():
        if x["symbol"]==0 and x["type"] in ("RELR",1027) and x["addend"] is not None:rel[addr]=x["addend"]
    group_slot=0x04BC0320-SLIDE
    group_base=rel.get(group_slot)
    require(group_base is not None,"mail group relocation")
    group_aliases={a for a,v in rel.items() if v==group_base}
    pages={a&~4095 for a in group_aliases|{group_base}}
    low_halves={x&65535 for x in HASHES};high_halves={x>>16 for x in HASHES}
    halves=low_halves|high_halves|{(~x)&65535 for x in low_halves|high_halves}
    hits=[];calls=[];group_refs={};words=0
    def context(va):
        start=va-24;b=get_bytes_va(elf,segs,start,112)
        return [{"va":i.address,"asm":i.mnemonic+" "+i.op_str} for i in md.disasm(b,start)] if b else []
    for seg in segs:
        if not seg["flags"]&1:continue
        off=seg["file_offset"];size=seg["filesz"];va=seg["vaddr"]
        for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            site=va+j*4;words+=1
            op=w&0xfc000000
            if op in (0x94000000,0x14000000):
                dest=site+4*sx(w&0x3ffffff,26)
                if dest in TARGETS:
                    require(raw(site,4)==struct.pack("<I",w),"call mismatch")
                    calls.append({"site":site,"ghidra_site":site+SLIDE,"target":dest,"role":TARGETS[dest],"opcode":"BL" if op==0x94000000 else "B","context":context(site)})
            # MOVZ/MOVN followed by adjacent MOVK only; avoids unproved register liveness.
            if w&0x7f800000 in (0x52800000,0x12800000) and ((w>>5)&65535) in halves and j*4+8<=size:
                a=wide(w);w2=struct.unpack_from("<I",elf,off+j*4+4)[0];b=wide(w2)
                if a and b and b[0]==0x72800000 and a[1]==b[1] and a[2]!=b[2] and w>>31==w2>>31:
                    v=a[3]<<a[2]
                    if a[0]==0x12800000:v=(~v)&0xffffffff
                    v=(v&~(65535<<b[2]))|(b[3]<<b[2])
                    if v in HASHES:
                        require(raw(site,8)==struct.pack("<II",w,w2),"materialization mismatch")
                        hits.append({"hash":f"{v:08X}","role":HASHES[v],"site":site,"ghidra_site":site+SLIDE,"context":context(site)})
            if adrp_target(w,site) in pages or adr_target(w,site) in group_aliases|{group_base}:
                ev=[];_,refs,_=scan(md,elf,segs,rel,site,min(128,size-j*4),ev)
                for x in refs:
                    if group_base<=x["address"]<group_base+24:
                        group_refs[(x["va"],x["address"],x["kind"])]=x
                for x in ev:
                    if x["address"]==group_base:
                        group_refs[(x["va"],x["address"],x["kind"])]=x
    summary={"zero_value":f"{zlib.crc32(b'0'):08X}","zero_rows":zeros,"zero_literal_candidate":"0","mailbox_default_candidate":"Unknown","reward_category_items":sum(map(len,items.values())),"present_config_rows":len(presents),"group_selector_rows":[x for x in presents if x["group_index_raw"]],"trade_price_matrix":[{"flag":k[0],"base_price_gt_1000":k[1],"count":v} for k,v in sorted(matrix.items())],"executable_words":words,"group_descriptor_elf":group_base,"group_reference_candidates":len(group_refs),"direct_call_counts":dict(collections.Counter(x["role"] for x in calls)),"hash_materialization_counts":dict(collections.Counter(x["hash"] for x in hits)),"runtime_reward_selector_verified":False,"new_original_header_names":0}
    for name,obj in [("summary",summary),("hha_reward_category_items",rewards),("present_config",presents),("recipe_price_rows",price_rows),("direct_calls",calls),("hash_materializations",hits),("group_descriptor_refs",list(group_refs.values()))]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n")
    print("HHA_CATEGORY_ITEMS",json.dumps(rewards,ensure_ascii=False))
    print("NATIVE_CANDIDATE_SUMMARY",json.dumps(summary,ensure_ascii=False))
    for x in calls:
        if x["role"] in ("trade_price_predicate","mail_group_loader"):print("CALLSITE",json.dumps(x))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
