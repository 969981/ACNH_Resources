"""Audit native special entities against pinned original data; no runtime defaults inferred."""
import argparse,csv,collections,json,sys,struct,hashlib
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"bcsv"))
from bcsv import BCSV,crc32
from SpecialEntityCodec import *
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
def write(path,rows):
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
def run(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh303_r100_nso_decode import decode
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    def pointer(gh):
        va=gh-0x100000;r=relocs.get(va)
        if r:
            require(r["symbol"]==0 and r["type"] in (1027,"RELR"),"unsupported relocation")
            require(r["addend"] is not None,"missing addend")
            return r["addend"]
        return struct.unpack("<Q",raw(va,8))[0]
    source={}
    tables={}
    for name in ("ItemParam","ItemKind","FgMainParam","FgFlowerHeredity","RecipeCraftParam","NmlNpcParam"):
        p=root/ROM/(name+".bcsv");tables[name]=BCSV.read(p);source[name]=hashlib.sha256(p.read_bytes()).hexdigest()
    p,k,fg,h,r=(tables[n] for n in ("ItemParam","ItemKind","FgMainParam","FgFlowerHeredity","RecipeCraftParam"))
    require((p.count,k.count,fg.count,h.count,r.count)==(11178,189,540,270,924),"source baseline")
    kd={crc32(k.string(i,0x87bf00e8)):i for i in range(k.count)}
    items={}
    money=[]
    for i in range(p.count):
        ident=p.uint(i,0x54706054);ki=kd[p.uint(i,0x5270eb75)]
        kind=k.string(ki,0x87bf00e8);label=p.string(i,0x3febc642)
        items[ident]=(label,kind)
        if kind=="Money":
            price=p.uint(i,0x718b024d,signed=True);mx=k.uint(ki,0x4c9ba961,signed=True)
            money.append(dict(item_id=ident,label=label,price_raw=price,stack_max_raw=mx,amount_if_single=price,quantity_gate="01AF0020",default_entity_hex="",runtime_verified=0))
    require(len(money)==108,"money count")
    def field(i,x,n=2):return int.from_bytes(fg.raw(i,x)[:n],"little")
    graph={field(i,0x54706054):(field(i,0xf5a73337,1),field(i,0x2c6a189e),field(i,0x76e7fe08)) for i in range(fg.count)}
    require(len(graph)==540,"field identity unique")
    genes=collections.defaultdict(list)
    lookup=list(raw(0x041749e0-0x100000,3));require(lookup==[0,1,3],"allele lookup")
    for i in range(h.count):
        if h.raw(i,0x08d23365)[0]:
            a=[h.raw(i,x)[0] for x in (0xc7208ade,0xd5952530,0x6d294255,0xf0fe7aec)]
            g=sum(lookup[v]<<(2*j) for j,v in enumerate(a))
            genes[h.uint(i,0x6aa33bf0)].append(g)
    fields=[];counts=collections.Counter()
    for i in range(fg.count):
        ident=field(i,0x54706054);term,path,status=plant_identity(ident,graph)
        dig=field(i,0xf4678f13);bury=field(i,0x6ac5a6df)
        gs=genes.get(term,[])
        counts[status]+=1
        fields.append(dict(field_id=ident,label=fg.string(i,0x87bf00e8),grow=graph[ident][0],growup=graph[ident][1],change=graph[ident][2],terminal_id=term,path=">".join(map(str,path)),status=status,dig_item=dig,dig_label=items.get(dig,("",))[0],bury_item=bury,bury_label=items.get(bury,("",))[0],terminal_default_gene_candidate=gs[0] if len(gs)==1 else None,runtime_verified=0))
    limits=masks=None;domain=[];pointer_evidence={}
    for name,gh,n in (("limits",0x04bc27f0,35),("masks",0x04bc2a20,140)):
        try:
            va=pointer(gh);b=raw(va,n);pointer_evidence[name]={"pointer_ghidra_va":hex(gh),"target_rva":hex(va),"bytes":b.hex(),"status":"original_mapped_bytes"}
            if name=="limits":limits=list(b)
            else:masks=list(struct.unpack("<35I",b))
        except (ValueError,struct.error) as e:pointer_evidence[name]={"status":"unmapped_or_unresolved","reason":str(e)}
    producer_rows=[];prefixes=[];producer_status="unresolved_prefix_table"
    try:
        base=pointer(0x04bb9e38)
        for i in range(35):
            target=pointer(base+0xb0+i*8+0x100000)
            prefixes.append(raw(target,4).split(b"\0")[0].decode("ascii"))
        require(len(set(prefixes))==35 and all(len(x)==3 for x in prefixes),"native prefix domain")
        npc=tables["NmlNpcParam"];require(npc.count==417,"villager baseline")
        limits=[0]*35;masks=[0]*35;seen=set()
        for i in range(npc.count):
            label=npc.string(i,0x2f1b930d);require(len(label)==5 and label[3:].isdigit() and label[:3] in prefixes,"villager label domain "+label)
            cat=prefixes.index(label[:3]);group=int(label[3:]);require(group<32 and (cat,group) not in seen,"villager index collision")
            seen.add((cat,group));limits[cat]=max(limits[cat],group);masks[cat]|=1<<group
            producer_rows.append(dict(category=cat,group=group,prefix=label[:3],label=label,npc_id=npc.uint(i,0x54706054),source_row=i,status="native_producer_static_reconstruction"))
        require(len(seen)==417,"villager producer coverage")
        producer_status="static_reconstruction_020FDD30"
    except (ValueError,UnicodeError,struct.error) as e:
        producer_status="unresolved: "+str(e);producer_rows=[]
        limits=masks=None
    if limits is not None and masks is not None:
        for cat in range(35):
            for group in range(256):
                if group<=limits[cat] and masks[cat]&(1<<(group&31)):
                    e=bottle_entity(0x16a1,0,0,15,cat,group,limits,masks)
                    require(bottle_view(e)["category_index"]==cat and bottle_view(e)["group_index"]==group,"bottle roundtrip")
                    domain.append(dict(category=cat,group=group,limit=limits[cat],mask=f"{masks[cat]:08X}",status=producer_status,runtime_verified=0))
    # independent mask differential, all 16-bit high halfwords and six transfer types
    for high in range(65536):
        w=(high<<16)|0x1234
        for typ in range(6):
            x=embedded_word(w,0x313,typ,5,0xab)
            ref=(w&0xffff0000)|0x313
            if typ in (1,2):ref=(ref&0xfff8ffff)|0x50000
            if typ in (1,3):ref=(ref&0xffc00000)|(ref&0x7ffff)|(3<<19)
            require(x==ref,"container masks")
    for v in range(65536):
        require(native_quantity(v,50,True)==(1 if ((v+1)&255)>50 else ((v+1)&255)),"quantity")
    out.mkdir(parents=True,exist_ok=True)
    write(out/"money.csv",money);write(out/"plant_identity.csv",fields)
    if domain:write(out/"bottle_domain.csv",domain)
    if producer_rows:write(out/"bottle_npc_mapping.csv",producer_rows)
    if producer_rows:require(len(domain)==417,"rebuilt domain count")
    report=dict(money_rows=len(money),money_stack_maxes=dict(collections.Counter(str(x["stack_max_raw"]) for x in money)),plant_rows=len(fields),plant_status=dict(counts),plant_terminal_gene_candidates=sum(x["terminal_default_gene_candidate"] is not None for x in fields),bottle_domain_rows=len(domain),bottle_pointer_evidence=pointer_evidence,bottle_producer_status=producer_status,bottle_prefixes=prefixes,bottle_npc_rows=len(producer_rows),container_mask_cases=65536*6,quantity_cases=65536,complete_native_defaults=0,runtime_verified=0,source_sha256=source,nso_sha256=hashlib.sha256(nso).hexdigest())
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n");print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."));a.add_argument("--historical",type=Path,required=True);a.add_argument("--out",type=Path,default=Path("out/special-entity"));v=a.parse_args();run(v.root,v.historical,v.out)
