"""Build offline per-item policies from original BCSV and previously verified static routing.
Third-party ItemAttr.cs sets are compatibility evidence, never native behavior proof.
"""
import argparse,csv,hashlib,json,re,sys,collections,random
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"bcsv"))
from bcsv import BCSV,crc32
from ItemEntityCodec import ItemEntity,ItemPolicy
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Bcsv")
BASE=Path("research/catalog/variants")
def need(v,m):
    if not v:raise ValueError(m)
def read(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def sets(source):
    source=re.sub(r"//[^\n]*|/\*.*?\*/","",source,flags=re.S)
    raw={}
    for m in re.finditer(r"HashSet<UInt16>\s+(\w+)\s*=\s*(.*?);",source,re.S):
        name,body=m.groups()
        raw[name]=({int(x,16) for x in re.findall(r"0[xX]([0-9a-fA-F]+)",body)},re.findall(r"\.Union\((\w+)\)",body))
    resolved={}
    def get(k):
        if k not in resolved:
            a,b=raw[k];resolved[k]=a.union(*(get(n) for n in b))
        return resolved[k]
    return {k:get(k) for k in raw}
def run(root,poker,out):
    attr=poker/"ACNHPokerCore/Inventory/ItemAttr.cs"
    util=poker/"ACNHPokerCore/Utilities/Utilities.cs"
    inv=poker/"ACNHPokerCore/Inventory/inventorySlot.cs"
    s=sets(attr.read_text(encoding="utf-8-sig"))
    need("Flip(itemId) + flag1 + flag0 + Flip(count)" in util.read_text(encoding="utf-8-sig"),"legacy serialization drift")
    need("ItemQuantity + 1" in inv.read_text(encoding="utf-8-sig"),"quantity display drift")
    k=BCSV.read(root/ROM/"ItemKind.bcsv");p=BCSV.read(root/ROM/"ItemParam.bcsv");o=BCSV.read(root/ROM/"ItemOutfitInfo.bcsv")
    kinds={crc32(k.string(i,0x87bf00e8)):i for i in range(k.count)}
    outfits={crc32(o.string(i,0x87bf00e8)):i for i in range(o.count)}
    routes={int(r["item_id"]):r for r in read(root/BASE/"storage/item_route.csv")}
    modes={int(r["item_id"]):r for r in read(root/BASE/"encoding/mode_policy.csv")}
    need(len(routes)==p.count==11178 and len(modes)==1785,"baseline")
    stats=collections.Counter();rows=[];policies={}
    for i in range(p.count):
        ident=p.uint(i,0x54706054)
        ki=kinds[p.uint(i,0x5270eb75)];oi=outfits.get(p.uint(i,0x7724bf93))
        r=routes[ident];m=modes.get(ident,{})
        kind=k.string(ki,0x87bf00e8);need(kind==r["kind"],"kind drift")
        maxstack=int.from_bytes(k.raw(ki,0x4c9ba961)[:2],"little",signed=True)
        damage=int.from_bytes(o.raw(oi,0x68db76c2)[:2],"little") if oi is not None else None
        qty=ident in s["hasQuantitySet"];flower=ident in s["isFlowerSet"];dur=ident in s["hasDurabilitySet"];use=ident in s["hasUseSet"]
        special=ident in s["containsItemSet"] or ident in s["hasGeneticsSet"] or ident in (0x16a1,0x3100,0x16a2) or ident>=60000
        off=int(r["entity_offset_candidate"]) if m and r["entity_offset_candidate"] else None
        width=(8 if flower else 16) if qty and maxstack>1 and off!=4 and not special else 0
        flags=[]
        if maxstack>1 and not qty:flags.append("native_stack_candidate_missing_legacy_set")
        if qty and maxstack<=1:flags.append("legacy_quantity_without_native_stack")
        if qty and off==4:flags.append("quantity_variant_overlap")
        if (dur or use) and off==6:flags.append("use_variant_overlap")
        if special:flags.append("special_raw_only")
        if m and m["lot_type"]=="ForceOriginal":flags.append("force_original_review")
        q=ItemPolicy(ident,kind,off,int(m.get("body_count",0)),int(m.get("fabric_count",0)),int(m.get("mode1_resource_count",0)),int(m.get("mode2_default_index_count",0)),maxstack,width,bool((dur or use) and off!=6),special,";".join(flags))
        policies[ident]=q
        rows.append({**q.__dict__,"native_stack_raw":maxstack,"native_break_damage_raw":damage,"legacy_quantity":int(qty),"legacy_flower":int(flower),"legacy_durability":int(dur),"legacy_use":int(use),"native_runtime_verified":0,"dispatch_verified":0})
        stats["quantity_policy"]+=bool(width);stats["use_policy"]+=q.uses_high;stats["special_raw_only"]+=special
        stats["variant_offset4"]+=off==4;stats["variant_offset6"]+=off==6
        for f in flags:stats[f]+=1
    combos=read(root/BASE/"variant_combination.csv");need(len(combos)==17184,"combo baseline")
    tested=0;blocked=0;fence=0;tools=0
    for r in combos:
        q=policies[int(r["item_id"])]
        if q.special or q.remake_offset is None:blocked+=1;continue
        e=ItemEntity(q.item_id,0x20,0,0xa55aa55a)
        kw={}
        if q.body_count:kw["body"]=int(r["body_index"])
        if q.fabric_count:kw.update(mode=0,index=int(r["fabric_index"]))
        if not kw:blocked+=1;continue
        n=e.with_variant(q,**kw);need(n.to_bytes()[:4]==e.to_bytes()[:4],"header changed")
        other=6 if q.remake_offset==4 else 4
        need(n.to_bytes()[other:other+2]==e.to_bytes()[other:other+2],"other half changed")
        mask=(7 if "body" in kw else 0)|(0x1ff8 if "mode" in kw else 0)
        need(n.variant(q)["word"]&mask==int(r["word_candidate"])&mask,"variant mismatch")
        need((n.variant(q)["word"]^e.variant(q)["word"])&~mask==0,"reserved changed")
        need(ItemEntity.from_legacy(**n.legacy())==n,"legacy roundtrip")
        if q.remake_offset==6 and q.quantity_width:
            a=n.with_quantity(q,q.stack_max);need(a.high==n.high,"fence quantity collision");fence+=1
        if q.remake_offset==4 and q.uses_high:
            a=n.with_use_raw(q,17);need(a.low==n.low,"tool durability collision");tools+=1
        tested+=1
    rng=random.Random(303)
    for _ in range(65536):
        raw=rng.getrandbits(64).to_bytes(8,"little");e=ItemEntity.from_bytes(raw);need(e.to_bytes()==raw and ItemEntity.from_legacy(**e.legacy())==e,"raw differential")
    out.mkdir(parents=True,exist_ok=True)
    with (out/"item_policy.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
    summary=dict(items=len(rows),counts=dict(stats),ordinary_tested=tested,ordinary_blocked=blocked,fence_coexistence_cases=fence,tool_coexistence_cases=tools,raw_roundtrip_cases=65536,poker_source={str(x.relative_to(poker)):sha(x) for x in (attr,util,inv)},original_bcsv={n:sha(root/ROM/(n+".bcsv")) for n in ("ItemKind","ItemParam","ItemOutfitInfo")},static_inputs={str(x.relative_to(root)):sha(x) for x in (root/BASE/"storage/item_route.csv",root/BASE/"encoding/mode_policy.csv",root/BASE/"variant_combination.csv")},runtime_verified=0,dispatch_verified=0)
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n");print(json.dumps(summary))
if __name__=="__main__":
    a=argparse.ArgumentParser();a.add_argument("--root",type=Path,default=Path("."));a.add_argument("--poker",type=Path,required=True);a.add_argument("--out",type=Path,default=Path("out/item-entity"));v=a.parse_args();run(v.root,v.poker,v.out)
