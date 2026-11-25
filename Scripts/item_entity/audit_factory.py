"""Version-pinned native initialization evidence and complete per-ID research index."""
import argparse,csv,json,hashlib,collections,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"bcsv"))
from bcsv import BCSV,crc32
from ItemEntityFactory import FIXED_ID,FIXED_KIND,gene_byte,ItemEntityFactory,Context
from ItemEntityCodec import ItemEntity
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
BASE=Path("research/catalog/variants/storage")
def need(v,m):
    if not v:raise ValueError(m)
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(p,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
def run(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh303_r100_nso_decode import decode
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    mapping=list(raw(0x041749e0-0x100000,3))
    need(len(set(mapping))==3 and max(mapping)<4,"native allele lookup")
    tables={}
    for name in ("ItemParam","ItemKind","RecipeCraftParam","FgMainParam","FgFlowerHeredity"):
        tables[name]=BCSV.read(root/ROM/(name+".bcsv"))
    p,k,r,fg,h=(tables[n] for n in ("ItemParam","ItemKind","RecipeCraftParam","FgMainParam","FgFlowerHeredity"))
    need((p.count,k.count,r.count,fg.count,h.count)==(11178,189,924,540,270),"source counts")
    route={int(x["item_id"]):x for x in read(root/BASE/"item_route.csv")}
    policy={int(x["item_id"]):x for x in read(root/"research/catalog/item-entity/item_policy.csv")}
    order=json.loads((root/BASE/"summary.json").read_text())["kind_anchor_matches"][0]["labels"]
    need([order[i] for i in (0xa0,0x8d,0x71,0xb1,0xa4,0xa6)]==["Giftbox","QuestWrapping","FossilUnknown","DIYRecipe","Picture","PictureFake"],"native kind order")
    kindrows={crc32(k.string(i,0x87bf00e8)):i for i in range(k.count)}
    original={}
    for i in range(p.count):
        ident=p.uint(i,0x54706054);ki=kindrows[p.uint(i,0x5270eb75)]
        original[ident]=(i,ki,p.string(i,0x3febc642),k.string(ki,0x87bf00e8))
    stats=collections.Counter();rows=[];refrows=[]
    for ident,(i,ki,label,kind) in original.items():
        rr=route[ident];idx=int(rr["kind_native_index_candidate"]);need(order[idx]==kind==rr["kind"],"route mismatch")
        target=FIXED_KIND.get(idx,FIXED_ID.get(ident))
        family="conditional_reference" if target is not None else "recipe_bitmap" if ident==0x16a2 else "message_bottle_unresolved" if ident in (0x16a1,0x3100) else "money_unresolved" if kind=="Money" else "plant_unresolved" if kind in ("Tree","TreeSeedling","Flower","FlowerBud","FlowerSeed","VegeTree","VegeSeedling","BushSeedling") else "ordinary_context_required"
        stack=p.uint(i,0x54706054) # preserve original identity check
        need(stack==ident,"id")
        maxstack=k.uint(ki,0x4c9ba961,signed=True)
        seed=ItemEntity(ident)
        plan=ItemEntityFactory.plan(seed,idx,Context(main_record_valid=True))
        if target is not None:
            need(target in original,"missing fixed target")
            refrows.append(dict(item_id=ident,label=label,kind=kind,target_id=target,target_label=original[target][2],target_kind=original[target][3],status="conditional_native_call",native_runtime_verified=0))
            need(target in plan.references,"plan reference")
        rows.append(dict(item_id=ident,label=label,kind=kind,kind_native_index=idx,init_family=family,default_child_id=target,stack_max_raw=maxstack,canftr=k.raw(ki,0x90bc0855)[0],cangift=k.raw(ki,0x06012035)[0],price_raw=p.uint(i,0x718b024d,signed=True),diy_recipe_id_raw=p.uint(i,0xbcf5d17a,signed=True),quantity_width=policy[ident]["quantity_width"],known_conditional_masks="byte3:7F;byte4:FF_if_stack_gate",default_entity_hex="",native_runtime_verified=0))
        stats[family]+=1
    need(len(rows)==11178,"item rows")
    genes=[];defaults=collections.defaultdict(list)
    for i in range(h.count):
        vals=[h.raw(i,x)[0] for x in (0xc7208ade,0xd5952530,0x6d294255,0xf0fe7aec)]
        name=h.uint(i,0x6aa33bf0);seed=h.uint(i,0x753336dd);d=h.raw(i,0x08d23365)[0]
        g=gene_byte(vals,mapping)
        gene=dict(source_row=i,kind_hash=f"{h.uint(i,0x9b7aa0a0):08X}",field_id=name,seedling_field_id=seed,default_heredity=d,A=vals[0],B=vals[1],C=vals[2],D=vals[3],gene_byte=g,gene_hex=f"{g:02X}",status="native_bitpacking_static")
        genes.append(gene)
        if d:defaults[name].append(g)
    need(len(defaults)==24 and all(len(v)==1 for v in defaults.values()),"default heredity")
    fields=[]
    for i in range(fg.count):
        ident=fg.uint(i,0x54706054);bury=fg.uint(i,0x6ac5a6df)
        fields.append(dict(field_id=ident,label=fg.string(i,0x87bf00e8),kind_hash=f"{fg.uint(i,0x9b7aa0a0):08X}",bury_item=bury,dig_item=fg.uint(i,0xf4678f13),growup_fg=fg.uint(i,0x2c6a189e),default_gene_byte_candidate=defaults.get(ident,[None])[0],status="table_relation_not_full_native_replay"))
    recipes=[]
    for i in range(r.count):
        rid=r.uint(i,0x54706054)
        recipes.append(dict(recipe_id=rid,source_row=i,within_native_bitmap_domain=int(rid<2048),status="table_record_not_runtime_validity"))
    need(len({x["recipe_id"] for x in recipes})==924,"recipe unique")
    out.mkdir(parents=True,exist_ok=True)
    for n,data in (("initialization_policy",rows),("fixed_reference",refrows),("flower_heredity",genes),("field_initialization",fields),("recipe_index",recipes)):write(out/(n+".csv"),data)
    report=dict(items=len(rows),counts=dict(stats),fixed_reference_rows=len(refrows),field_rows=len(fields),heredity_rows=len(genes),default_heredity_rows=len(defaults),allele_lookup=mapping,recipe_rows=len(recipes),recipe15_present=any(x["recipe_id"]==15 for x in recipes),native_complete_defaults=0,native_runtime_verified=0,source_sha256={n:sha(root/ROM/(n+".bcsv")) for n in tables},nso_sha256=hashlib.sha256(nso).hexdigest(),elf_sha256=hashlib.sha256(elf).hexdigest())
    (out/"summary.json").write_text(json.dumps(report,indent=2)+"\n");print(json.dumps(report))
if __name__=="__main__":
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."));a.add_argument("--historical",type=Path,required=True);a.add_argument("--out",type=Path,default=Path("out/item-factory"));v=a.parse_args();run(v.root,v.historical,v.out)
