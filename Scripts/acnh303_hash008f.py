#!/usr/bin/env python3
"""HASH-008F: original Recipe -> Item -> ItemRemake and direct caller evidence.
No claim about hemisphere selection unless a real downstream write is established."""
import argparse,json,struct,collections
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import bcsv,decode,parse_elf,get_bytes_va,gitblob,require,sha,sx
SLIDE=0x100000
TARGETS={0x026222e0-SLIDE:"recipe_remake_predicate",0x01ad7260-SLIDE:"body_count",0x01afcfa0-SLIDE:"fabric_count",0x0261eff4-SLIDE:"recipe_index"}
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    ib,ni,iw,ic,iv,istr,iwidth=bcsv(root,"ItemParam")
    rb,nr,rw,rc,rv,rs,rwidth=bcsv(root,"RecipeCraftParam")
    mb,nm,mw,mc,mv,ms,mwidth=bcsv(root,"ItemRemake")
    require((ni,nr,nm)==(11178,924,1306),"original counts")
    require(gitblob(ib)=="431bbd26a575197a1bd963c1721b093ae3e4df84" and gitblob(rb)=="2ec809fea2e558302b53d561ad66d3c5524f2f0a" and gitblob(mb)=="59a38b7951ee59b33e1d6c70752c93d382887445","original blob identity")
    items={iv(i,"54706054",2):i for i in range(ni)}
    remakes={mv(i,"54706054",2):i for i in range(nm)}
    require(len(items)==ni and len(remakes)==nm,"duplicate IDs")
    def s8(v):return v-256 if v>=128 else v
    all_rows=[]
    for i in range(nr):
        item=rv(i,"89A3482C",2)
        flag=rv(i,"AD0C787A",1)
        row={"recipe_id":rv(i,"54706054",2),"recipe_row":i,"serial_id":rv(i,"39DEDE36",2),"item_id":item,"flag":flag,"event":rs(i,"33DDEFC8"),"invalid_card":rv(i,"3CCCA419",1)}
        if item in items:
            j=items[item];rid=iv(j,"CB5EB33F",2)
            row.update(model=istr(j,"48EF0398"),kind_raw_text=istr(j,"FC275E86"),remake_id=rid)
            if rid in remakes:
                k=remakes[rid];body=s8(mv(k,"B0304B0D",1));fabric=s8(mv(k,"0CB402A3",1))
                row.update(remake_row=k,remake_backref_item=mv(k,"FD9AF1E1",2),body_max=body,fabric_max=fabric,body_count=body+1 if -1<=body<8 else None,fabric_count=fabric+1 if -1<=fabric<8 else None,kit=mv(k,"29ECB129",2),lot_hash=f'{mv(k,"A86C26BB",4):08X}',body0_colors=[mv(k,h,1) for h in ("1B98FDF8","A3249A9D")],body1_colors=[mv(k,h,1) for h in ("F45A96C6","4CE6F1A3")])
        all_rows.append(row)
    special=[x for x in all_rows if x["flag"]==1]
    require(len(special)==8 and all(x.get("remake_backref_item")==x["item_id"] and x.get("body_count")==2 and x.get("fabric_count")==0 for x in special),"special remake join")
    controls=collections.Counter((str(x.get("body_count")),str(x.get("fabric_count")),x["flag"]) for x in all_rows)
    print("HARVEST_REMAKE_JOIN",json.dumps(special,ensure_ascii=False))
    print("RECIPE_VARIANT_CONTROLS",json.dumps([{"body_count":b,"fabric_count":f,"flag":v,"count":n} for (b,f,v),n in sorted(controls.items())]))
    (out/"recipe_remake_all.json").write_text(json.dumps(all_rows,ensure_ascii=False,indent=2)+"\n")
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    require(len(relocs)==380793,"relocation count")
    segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    def context(site,back=64,forward=128):
        buf=get_bytes_va(elf,segs,site-back,back+forward)
        return [{"va":x.address,"asm":x.mnemonic+" "+x.op_str,"bytes":x.bytes.hex()} for x in md.disasm(buf,site-back)] if buf else []
    edges=[];words=0
    for seg in segs:
        if not seg["flags"]&1:continue
        off=seg["file_offset"];size=seg["filesz"];va=seg["vaddr"]
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:off+size-size%4])):
            words+=1;opc=w&0xfc000000
            if opc not in (0x94000000,0x14000000):continue
            site=va+4*i;dest=site+4*sx(w&0x3ffffff,26)
            if dest not in TARGETS:continue
            require(raw(site,4)==struct.pack("<I",w),"NSO/ELF direct branch mismatch")
            edge={"site_va":site,"ghidra_site_va":site+SLIDE,"target_va":dest,"name":TARGETS[dest],"opcode":"BL" if opc==0x94000000 else "B","word":f"{w:08X}"}
            if TARGETS[dest]=="recipe_remake_predicate":edge["context"]=context(site,96,192)
            edges.append(edge)
    primary=[x for x in edges if x["name"]=="recipe_remake_predicate"]
    # Local context only, no claim of function containment or SSA reachability.
    for x in primary:
        print("PREDICATE_XREF",json.dumps({**x,"context":x["context"][20:38]}))
    (out/"direct_call_edges.json").write_text(json.dumps(edges,indent=2)+"\n")
    # Authenticated ELF/NSO bytes of decompiler anchor, not inferred new boundaries.
    anchor={}
    for va,length in ((0x026222e0-SLIDE,0x300),(0x01ad7260-SLIDE,0x240),(0x01afcfa0-SLIDE,0x240)):
        b=get_bytes_va(elf,segs,va,length)
        require(b is not None and raw(va,length)==b,"anchor bytes")
        anchor[f"{va:08X}"]={"sha256":sha(b),"instructions":context(va,0,length)}
    (out/"anchor_asm.json").write_text(json.dumps(anchor,indent=2)+"\n")
    summary={"recipe_count":nr,"remake_count":nm,"special_joined":len(special),"special_body2_fabric0":len(special),"controls_body2_fabric0_flag0":sum(x["flag"]==0 and x.get("body_count")==2 and x.get("fabric_count")==0 for x in all_rows),"executable_words_scanned":words,"direct_edges_by_target":dict(collections.Counter(x["name"] for x in edges)),"hemisphere_dataflow_verified":0,"original_header_name_verified":0}
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n");print(json.dumps(summary,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
