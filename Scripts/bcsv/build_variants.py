#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["zstandard==0.23.0"]
# ///
"""Static native variant catalog; never treat an icon filename or Cartesian product as runtime permission."""
import argparse,collections,csv,hashlib,json,sqlite3,subprocess,sys,zlib
from pathlib import Path
ROOT=Path("e10617820db06889e1638499478da0de_NCA/1")
TABLES=Path("research/bcsv-data/decoded/tables")
LOCALES="CNzh TWzh JPja USen EUen KRko EUde EUfr EUes EUit EUnl EUru USes USfr".split()
def require(ok,msg):
    if not ok:raise ValueError(msg)
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def count(raw):
    require(-1<=raw<=7,"unexpected pattern count "+str(raw))
    return raw+1
def word(b,f):
    require(0<=b<8 and 0<=f<8,"standard index")
    return b|(f<<5)
def run(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh_formats import decompress,parse_sarc,parse_msbt
    out.mkdir(parents=True,exist_ok=True)
    manifest={r["table"]:r for r in json.loads((root/"research/bcsv-data/decoded/manifest.json").read_text())}
    tables={}
    for t in ("ItemParam","ItemRemake","ItemKind","ItemColor"):
        p=root/TABLES/(t+".csv");require(sha(p)==manifest[t]["csv_sha256"],"decoded SHA "+t);tables[t]=read(p)
    def index(rows,k):
        d={r[k]:r for r in rows};require(len(d)==len(rows),"duplicate "+k);return d
    items=index(tables["ItemParam"],"UniqueID");rem=index(tables["ItemRemake"],"UniqueID")
    require(len(items)==11178 and len(rem)==1306,"source count")
    kinds={"0x%08X"%zlib.crc32(r["Label"].encode()):r["Label"] for r in tables["ItemKind"]}
    colors=index(tables["ItemColor"],"UniqueID")
    proof=json.loads((historical/"assets/evidence/rom-database/r75-original-14-language-archives-and-npc-names.json").read_text())
    sources={r["locale"]:r["original_sha256"] for r in proof["original_message_sources"]}
    msgs={};msgrows=[]
    for loc in LOCALES:
        p=root/ROOT/"Message"/f"String_{loc}.sarc.zs";require(sha(p)==sources[loc],"archive SHA")
        raw,_=decompress(p.read_bytes(),limit=30*1024*1024);_,entries=parse_sarc(raw)
        for name,b in entries:
            if not name.startswith("Remake/"):continue
            rr=parse_msbt(b)["entries"];d={}
            for r in rr:
                require(r["label"] not in d,"duplicate remake label");d[r["label"]]=r
                msgrows.append([loc,name,r["label"],r["index"],r["text"]])
            msgs[loc,name]=d
    tree=subprocess.check_output(["git","-C",str(root),"ls-tree","-r","-z","HEAD","--",str(ROOT/"Model")])
    paths={}
    for line in tree.split(b"\0"):
        if line:
            meta,p=line.split(b"\t",1);paths[p.decode()]=meta.decode().split()[2]
    require(len(paths)>0,"Model tree empty")
    def model(stem):
        p=str(ROOT/"Model"/(stem+".Nin_NX_NVN.zs"));return (p,paths.get(p))
    stats=collections.Counter();definitions=[];linked=[];slots=[];locales=[];combos=[]
    for rid,r in rem.items():
        b,f=int(r["ReBodyPatternNum"]),int(r["ReFabricPatternNum"])
        definitions.append([int(rid),int(r["ItemUniqueID"]),int(r["_row_index"]),b,count(b),f,count(f),r["ItemReFabricType"],r["ItemReFabricType__label"],r["RemakeLotType__label"],r["ReBodyPatternRejectNum"],r["RemakeKitNum"]])
    for ident,r in items.items():
        rid=r["RemakeID"]
        if rid not in rem:
            if rid!="-1":stats["missing_remake"]+=1
            continue
        d=rem[rid];rep=d["ItemUniqueID"];bc=count(int(d["ReBodyPatternNum"]));fc=count(int(d["ReFabricPatternNum"]))
        kind=kinds[r["ItemKind"]];stem=r["ResName"];stats["linked_items"]+=1
        linked.append([int(ident),int(rid),int(rep),kind,stem,bc,fc,int(ident==rep),d["ItemReFabricType__label"]])
        for axis,n in (("Body",bc),("Fabric",fc)):
            member=f"Remake/STR_Remake_{axis}Color.msbt"
            for i in range(n):
                raw0=d[f"Re{axis}Pattern{i}Color0"];raw1=d[f"Re{axis}Pattern{i}Color1"]
                p,blob=model(stem+f"Re{axis}{i}")
                slots.append([int(ident),int(rid),axis,i,int(raw0),int(raw1),colors.get(raw0,{}).get("Label"),colors.get(raw1,{}).get("Label"),p,blob,"static_count_slot"])
                stats[axis+"_slots"]+=1;stats[axis+"_model_paths"]+=bool(blob)
                for loc in LOCALES:
                    label=f"{kind}_{int(ident):05d}_{i}"
                    x=msgs.get((loc,member),{}).get(label)
                    evidence="exact_item_label" if x else "missing"
                    if not x and rep!=ident and rep in items:
                        rk=kinds[items[rep]["ItemKind"]];candidate=f"{rk}_{int(rep):05d}_{i}"
                        x=msgs.get((loc,member),{}).get(candidate)
                        if x:label=candidate;evidence="representative_label_candidate"
                    locales.append([int(ident),axis,i,loc,member,label,x["index"] if x else None,x["text"] if x else None,evidence])
                    stats[axis+"_text_"+evidence]+=1
        if not bc and not fc:continue
        for b in range(max(1,bc)):
            for f in range(max(1,fc)):
                candidate=stem+f"_Remake_{b}_{f}"
                p,blob=model("Layout_FtrIcon_"+candidate)
                combos.append([int(ident),int(rid),b,f,0,word(b,f),f"0x{word(b,f):04X}",p,blob,"static_combination_candidate",0])
                stats["combination_candidates"]+=1;stats["icon_paths_found"]+=bool(blob)
    require(len(locales)==14*len(slots),"locale cardinality")
    sample=[x for x in linked if x[0]==79];require(len(sample)==1 and sample[0][5:7]==[8,7],"Babybed baseline")
    require(len([x for x in combos if x[0]==79])==56,"Babybed combinations")
    datasets={
      "remake_definition":(["remake_id","representative_item_id","source_row","body_raw_s8","body_count","fabric_raw_s8","fabric_count","fabric_type_hash","fabric_type_label","lot_type_label","body_reject_num_raw","kit_num_raw"],definitions),
      "item_remake":(["item_id","remake_id","representative_item_id","kind","res_name","body_count","fabric_count","reverse_id_exact","fabric_type_label"],linked),
      "variant_slot":(["item_id","remake_id","axis","slot","color0_raw","color1_raw","color0_id_label_candidate","color1_id_label_candidate","model_path_candidate","model_git_blob","status"],slots),
      "variant_locale":(["item_id","axis","slot","locale","member","label","text_index","display_name","evidence"],locales),
      "variant_combination":(["item_id","remake_id","body_index","fabric_index","fabric_mode","word_candidate","word_hex","icon_path_candidate","icon_git_blob","status","dispatch_verified"],combos),
      "remake_message":(["locale","member","label","text_index","text"],msgrows)}
    db=sqlite3.connect(out/"variants.sqlite3")
    try:
        for name,(cols,rows) in datasets.items():
            with (out/(name+".csv")).open("w",encoding="utf-8-sig",newline="") as fp:
                w=csv.writer(fp);w.writerow(cols);w.writerows(rows)
            types=["INTEGER" if any(v is not None for v in (r[i] for r in rows)) and all(r[i] is None or type(r[i]) is int for r in rows) else "TEXT" for i in range(len(cols))]
            db.execute("CREATE TABLE "+name+" ("+",".join('"'+c+'" '+t for c,t in zip(cols,types))+")")
            db.executemany("INSERT INTO "+name+" VALUES ("+",".join("?" for c in cols)+")",rows)
            require(db.execute("SELECT count(*) FROM "+name).fetchone()[0]==len(rows),"SQLite rows")
        for t,c in (("item_remake","item_id"),("variant_slot","item_id,axis,slot"),("variant_locale","item_id,axis,slot,locale"),("variant_combination","item_id,body_index,fabric_index")):
            db.execute("CREATE UNIQUE INDEX idx_"+t+" ON "+t+" ("+c+")")
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity");db.commit()
    finally:db.close()
    result={"datasets":{k:len(v[1]) for k,v in datasets.items()},"counts":dict(stats),"babybed_body_fabric":[8,7],"runtime_dispatch_verified":0,"color_policy":"numeric ID lookup candidate","icon_policy":"Git tree resource path only, no pixel rendering","count_policy":"native normal record branch -1..7 plus one","source_archives":sources,"source_decoded":{t:manifest[t]["csv_sha256"] for t in tables}}
    (out/"summary.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n")
    (out/"manifest.json").write_text(json.dumps({p.name:sha(p) for p in sorted(out.iterdir()) if p.is_file()},indent=2)+"\n")
    print(json.dumps(result,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--historical",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("out/variants"));a=p.parse_args();run(a.root,a.historical,a.out)
