#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["zstandard==0.23.0"]
# ///
"""Build a reproducible item catalog; static data joins are not runtime permissions."""
from __future__ import annotations
import argparse, collections, csv, hashlib, json, sqlite3, sys
from pathlib import Path
from bcsv import crc32
from export_views import require, read, dump

DATA=Path("research/bcsv-data/decoded")
LOCALES=("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Message")
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def load(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def h(s):return f"0x{crc32(s):08X}"
def index(rows,key):
    d={}
    for r in rows:
        k=r[key];require(k not in d,"duplicate "+key+" "+k);d[k]=r
    return d
def crc_index(rows):
    d=collections.defaultdict(list)
    for r in rows:d[h(r["Label"])].append(r)
    return d
def match(d,k):
    m=d.get(k,[])
    return (m[0],"unique_match") if len(m)==1 else ({}, "ambiguous" if m else "unmatched")
def int_or_none(s):
    try:return int(s)
    except (ValueError,TypeError):return None
def float_or_none(s):
    try:return float(s)
    except (ValueError,TypeError):return None
def layout(label):
    # Candidate from original enum label only, no runtime capacity assertion.
    masks={"Floor_Downer":"full_candidate","Floor_DownerFront":"front_candidate","Floor_DownerLeft":"left_candidate","Floor_DownerRight":"right_candidate","Floor_DownerCenter":"center_candidate","Floor_DownerUpper":"upper_and_support_candidate"}
    return masks.get(label), "upper_candidate" if label in ("Floor_Upper","Floor_DownerUpper") else None
def dump_csv(p,rows,columns=None):
    columns=columns or list(rows[0])
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=columns);w.writeheader();w.writerows(rows)
def texts(root,historical):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh_formats import decompress,parse_sarc,parse_msbt
    proof=read(historical/"assets/evidence/rom-database/r75-original-14-language-archives-and-npc-names.json")
    sources={r["locale"]:r for r in proof["original_message_sources"]}
    allrows=[];sources_out=[]
    members=("STR_CategoryName.msbt","STR_ItemColor.msbt","Remake/STR_Remake_BodyParts.msbt","Remake/STR_Remake_FabricColor.msbt")
    for l in LOCALES:
        p=root/ROM/("String_"+l+".sarc.zs")
        require(sha(p)==sources[l]["original_sha256"],"locale archive SHA "+l)
        raw,_=decompress(p.read_bytes(),limit=30*1024*1024)
        _,entries=parse_sarc(raw);archive=dict(entries)
        for name in members:
            content=archive[name];parsed=parse_msbt(content)
            rows=parsed["entries"]
            require(all(r["label"] is not None for r in rows) and len({r["label"] for r in rows})==len(rows),"MSBT label integrity "+l+name)
            if name==members[0]:require(len(rows)==224,"category text count")
            for r in rows:allrows.append({"locale":l,"member":name,"label":r["label"],"text":r["text"],"text_index":r["index"]})
            sources_out.append({"locale":l,"member":name,"member_sha256":hashlib.sha256(content).hexdigest(),"archive_sha256":sources[l]["original_sha256"],"rows":len(rows)})
    return allrows,sources_out
def locale_candidates(definitions,msg,member,key):
    # Exact Japanese text equality only; numeric labels are NOT assumed to be definition IDs.
    jp=collections.defaultdict(list);loc={}
    for r in msg:
        if r["member"]!=member:continue
        loc[(r["label"],r["locale"])]=r["text"]
        if r["locale"]=="JPja":jp[r["text"]].append(r["label"])
    rows=[]
    for d in definitions:
        candidates=jp.get(d["Name"],[])
        for l in LOCALES:
            label=candidates[0] if len(candidates)==1 else None
            rows.append({key:int(d["UniqueID"]),"locale":l,"native_label":d["Label"],
                         "source_message_label":label,"text_candidate":loc.get((label,l)),
                         "status":"exact_ja_text_candidate" if label is not None else "ambiguous_ja_text" if candidates else "unmatched",
                         "candidate_labels_json":json.dumps(candidates,ensure_ascii=False)})
    return rows
def run(root,out,historical):
    out.mkdir(parents=True,exist_ok=True)
    data=root/DATA;manifest={r["table"]:r for r in read(data/"manifest.json")}
    names=("ItemParam","ItemKind","ItemSize","ItemColor","ItemAct","ItemUIFurnitureCategory","ItemRemake")
    tables={}
    for t in names:
        p=data/"tables"/(t+".csv");require(sha(p)==manifest[t]["csv_sha256"],"decoded SHA "+t)
        tables[t]=load(p);require(len(tables[t])==manifest[t]["rows"],"decoded row count "+t)
    items=tables["ItemParam"];by_id=index(items,"UniqueID");require(len(by_id)==11178,"item ids")
    cats=index(tables["ItemUIFurnitureCategory"],"UniqueID");require(len(cats)==256,"category ids")
    tax=index(load(data/"item-taxonomy.csv"),"item_id");require(set(tax)==set(by_id),"taxonomy ids")
    domains={t:crc_index(tables[t]) for t in ("ItemKind","ItemSize","ItemColor","ItemAct","ItemUIFurnitureCategory")}
    remake_by_id=collections.defaultdict(list);remake_by_item=collections.defaultdict(list)
    for r in tables["ItemRemake"]:
        remake_by_id[r["UniqueID"]].append(r);remake_by_item[r["ItemUniqueID"]].append(r)
    stats=collections.Counter();products=[];links=[];slots=[]
    for r in items:
        ident=r["UniqueID"];q=tax[ident]
        matches={}
        for field,target in (("ItemKind","ItemKind"),("ItemSize","ItemSize"),("Color1","ItemColor"),("Color2","ItemColor"),("ItemAct","ItemAct"),("ItemUIFurnitureCategory","ItemUIFurnitureCategory")):
            m,s=match(domains[target],r[field]);matches[field]=(m,s);stats[field+":"+s]+=1
        k,ks=matches["ItemKind"];s,ss=matches["ItemSize"];a,acs=matches["ItemAct"];cat,cs=matches["ItemUIFurnitureCategory"]
        require(cs=="unique_match" and q["ui_category_id"]==cat["UniqueID"] and q["smallgenre_hash"]==cat["SmallGenre"],"taxonomy drift "+ident)
        color1,c1=matches["Color1"];color2,c2=matches["Color2"]
        lay=r["ItemLayout__label"];require(not lay or h(lay)==r["ItemLayout"],"layout CRC")
        support,upper=layout(lay);stats["layout:"+ (lay or "unmatched")]+=1
        size_label=s.get("Label");w=int_or_none(s.get("HalfUnitSizeX"));z=int_or_none(s.get("HalfUnitSizeZ"))
        stack=int_or_none(k.get("MultiHoldMaxNum"));stats["stack_rule:"+str(stack)]+=1
        rid=int_or_none(r["RemakeID"]);rr=remake_by_id.get(str(rid),[]) if rid is not None and rid>=0 else []
        status="unique_id_match" if len(rr)==1 else "ambiguous_id" if rr else "negative_or_unmatched"
        if len(rr)==1 and rr[0]["ItemUniqueID"]==ident:status="bidirectional_exact"
        stats["remake:"+status]+=1
        for rem in rr:
            links.append({"item_id":int(ident),"remake_id":int(rem["UniqueID"]),"remake_source_row":int(rem["_row_index"]),"representative_item_id":int(rem["ItemUniqueID"]),"status":status})
        products.append({
            "item_id":int(ident),"source_row":int(r["_row_index"]),"label":r["Label"],"res_name":r["ResName"],"capture_preset":r["CapturePreset"],
            "kind_hash":r["ItemKind"],"kind_id":int_or_none(k.get("UniqueID")),"kind_label":k.get("Label"),"kind_status":ks,
            "ui_category_hash":r["ItemUIFurnitureCategory"],"ui_category_id":int(cat["UniqueID"]),"ui_category_label":cat["Label"],"smallgenre_hash":cat["SmallGenre"],"smallgenre_label_candidate":q["smallgenre_label_candidate"] or None,
            "ui_category_major_hash":r["ItemUICategory"],"ui_category_major_label_candidate":r["ItemUICategory__label"] or None,
            "size_hash":r["ItemSize"],"size_id":int_or_none(s.get("UniqueID")),"size_label":size_label,"size_status":ss,"width_half_tiles":w,"depth_or_height_half_tiles":z,
            "width_tiles":w/2 if w is not None else None,"depth_or_height_tiles":z/2 if z is not None else None,"size_plane_candidate":"wall" if size_label and size_label.endswith("_Wall") else "rug" if size_label and size_label.endswith("_Rug") else "pillar" if size_label and size_label.endswith("_Pillar") else "floor_or_other" if size_label else None,
            "native_height_candidate":float_or_none(r["Height"]),"native_depth_candidate":float_or_none(r["Depth"]),"ride_height_candidate":float_or_none(r["RideHeight"]),
            "layout_hash":r["ItemLayout"],"layout_label_candidate":lay or None,"support_surface_candidate":support,"upper_placement_candidate":upper,
            "support_capacity":None,"collision_runtime_verified":0,"act_hash":r["ItemAct"],"act_label":a.get("Label"),"act_status":acs,
            "stack_rule_raw_s16":stack,"stack_status":"positive_static_rule" if stack is not None and stack>0 else "zero_static_rule_runtime_unverified" if stack==0 else "negative_sentinel_runtime_unverified" if stack is not None else "unmatched",
            "runtime_max_stack":None,"can_put_rule":int_or_none(k.get("CanPut")),"can_sell_rule":int_or_none(k.get("CanSell")),"cant_take_over_rule":int_or_none(k.get("CantTakeOver")),
            "color1_hash":r["Color1"],"color1_id":int_or_none(color1.get("UniqueID")),"color1_label":color1.get("Label"),"color1_status":c1,"color2_hash":r["Color2"],"color2_id":int_or_none(color2.get("UniqueID")),"color2_label":color2.get("Label"),"color2_status":c2,
            "remake_id_raw":rid,"remake_status":status,"remake_source_row":int(rr[0]["_row_index"]) if len(rr)==1 else None,"representative_remake_count":len(remake_by_item.get(ident,[])),"price_raw_s32":int_or_none(r["Price"]),"sellable_web":None})
    # Preserve all 8+8 storage slots, never infer count semantics or order variant IDs.
    colors=index(tables["ItemColor"],"UniqueID")
    for r in tables["ItemRemake"]:
        for axis in ("Body","Fabric"):
            for i in range(8):
                c0=r[f"Re{axis}Pattern{i}Color0"];c1=r[f"Re{axis}Pattern{i}Color1"]
                slots.append({"remake_id":int(r["UniqueID"]),"source_row":int(r["_row_index"]),"representative_item_id":int(r["ItemUniqueID"]),"axis":axis.lower(),"slot_index":i,"pattern_num_raw_s8":int_or_none(r[f"Re{axis}PatternNum"]),"color0_raw":int_or_none(c0),"color0_id_candidate_label":colors.get(c0,{}).get("Label"),"color1_raw":int_or_none(c1),"color1_id_candidate_label":colors.get(c1,{}).get("Label"),"slot_active":None,"status":"storage_slot_only"})
    msg,source=texts(root,historical)
    catloc=locale_candidates(tables["ItemUIFurnitureCategory"],msg,"STR_CategoryName.msbt","category_id")
    colorloc=locale_candidates(tables["ItemColor"],msg,"STR_ItemColor.msbt","color_id")
    itemloc=load(data/"locales/ItemParam.csv");require(len(itemloc)==11178*14,"locale count")
    keys={(r["item_id"],r["locale"]) for r in itemloc};require(keys=={(i,l) for i in by_id for l in LOCALES},"locale identity")
    for r in itemloc:r["item_id"]=int(r["item_id"])
    categories=[{"category_id":int(r["UniqueID"]),"label":r["Label"],"name_ja_definition":r["Name"],"smallgenre_hash":r["SmallGenre"],"smallgenre_label_candidate":r["SmallGenre__label"] or None} for r in tables["ItemUIFurnitureCategory"]]
    datasets={"item":products,"category":categories,"item_locale":itemloc,"category_locale_candidate":catloc,"color_locale_candidate":colorloc,"message_text":msg,"item_remake_link":links,"remake_storage_slot":slots,"remake_definition":tables["ItemRemake"],"size_definition":tables["ItemSize"],"kind_definition":tables["ItemKind"],"color_definition":tables["ItemColor"]}
    for name,rows in datasets.items():dump_csv(out/(name+".csv"),rows)
    # SQLite browsing database: infer storage type only from actual Python values, not CSV strings.
    dbpath=out/"catalog.sqlite3";dbpath.unlink(missing_ok=True)
    quote=lambda s:'"'+s.replace('"','""')+'"'
    with sqlite3.connect(dbpath) as db:
        for name,rows in datasets.items():
            cols=list(rows[0]);types=[]
            for c in cols:
                values={type(r[c]) for r in rows if r[c] is not None}
                types.append("INTEGER" if values=={int} else "REAL" if values and values<={int,float} else "TEXT")
            pk={"item":"item_id","category":"category_id"}.get(name)
            decl=[quote(c)+" "+t+(" PRIMARY KEY" if c==pk else "") for c,t in zip(cols,types)]
            db.execute("CREATE TABLE "+quote(name)+" ("+",".join(decl)+")")
            db.executemany("INSERT INTO "+quote(name)+" VALUES ("+",".join("?" for c in cols)+")",([r[c] for c in cols] for r in rows))
            require(db.execute("SELECT count(*) FROM "+quote(name)).fetchone()[0]==len(rows),"sqlite count "+name)
        for name,table,cols in [("item_category","item","ui_category_id"),("item_group","item","smallgenre_hash"),("item_kind","item","kind_label"),("item_size","item","size_id"),("item_locale_key","item_locale","item_id,locale"),("cat_locale_key","category_locale_candidate","category_id,locale"),("remake_link","item_remake_link","item_id")]:
            db.execute(f"CREATE INDEX {name} ON {table} ({cols})")
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","sqlite integrity")
    summary={"datasets":{n:len(r) for n,r in datasets.items()},"joins":dict(stats),"category_locale_status":dict(collections.Counter(r["status"] for r in catloc)),"color_locale_status":dict(collections.Counter(r["status"] for r in colorloc)),"category_text_rows":sum(r["member"]=="STR_CategoryName.msbt" for r in msg),"runtime_verified":0,"sqlite_integrity":"ok"}
    dump(out/"message-sources.json",source);dump(out/"summary.json",summary)
    dump(out/"manifest.json",{"source_commit_policy":"decoded table SHA verified; original 14 archive SHA verified","inputs":{t:manifest[t]["csv_sha256"] for t in names},"outputs":{p.name:sha(p) for p in sorted(out.iterdir()) if p.is_file() and p.name!="manifest.json"}})
    print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,default=Path("out/catalog"));p.add_argument("--historical",type=Path,required=True);a=p.parse_args();run(a.root,a.out,a.historical)
