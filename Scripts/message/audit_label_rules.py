#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["zstandard==0.23.0"]
# ///
"""Audit native label format candidates against original 14 String archives and decoded BCSV."""
import argparse,collections,csv,hashlib,json,re,sys,zlib
from pathlib import Path
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Message")
BCSV=Path("research/bcsv-data/decoded/tables")
LOCALES="CNzh TWzh JPja USen EUen KRko EUde EUfr EUes EUit EUnl EUru USes USfr".split()
KINDS={9:"Tops",10:"OnePiece",11:"MarineSuit",13:"Bottoms",14:"Socks",15:"Shoes",16:"Cap",17:"Helmet",18:"Accessory",19:"Bag",37:"HandBag"}
def read(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def crc(s):return f"0x{zlib.crc32(s.encode()):08X}"
def write(p,header,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(header);w.writerows(rows)
def run(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh_formats import decompress,parse_sarc,parse_msbt
    out.mkdir(parents=True,exist_ok=True)
    tables={n:read(root/BCSV/(n+".csv")) for n in ("ItemParam","ItemKind","ItemClothGroup","ItemRemake","ItemColor","ItemUIFurnitureCategory")}
    manifest={r["table"]:r for r in json.loads((root/"research/bcsv-data/decoded/manifest.json").read_text())}
    for n in tables:
        assert hashlib.sha256((root/BCSV/(n+".csv")).read_bytes()).hexdigest()==manifest[n]["csv_sha256"],n
    proof=json.loads((historical/"assets/evidence/rom-database/r75-original-14-language-archives-and-npc-names.json").read_text())
    archives={r["locale"]:r["original_sha256"] for r in proof["original_message_sources"]}
    messages={};examples=[];profiles=[]
    for loc in LOCALES:
        p=root/ROM/f"String_{loc}.sarc.zs";raw=p.read_bytes()
        assert hashlib.sha256(raw).hexdigest()==archives[loc]
        data,_=decompress(raw,limit=30*1024*1024);_,members=parse_sarc(data)
        for name,b in members:
            if not (name.startswith(("Remake/","Outfit/")) or name in ("STR_ItemColor.msbt","STR_CategoryName.msbt")):continue
            rows=parse_msbt(b)["entries"];d=collections.defaultdict(list)
            for r in rows:d[r["label"]].append(r)
            messages[loc,name]=d
            if loc=="CNzh":
                shapes=collections.Counter(re.sub(r"[0-9]+",lambda m:"D"+str(len(m[0])),re.sub(r"[A-Za-z]+","A",r["label"] or "")) for r in rows)
                profiles.append([name,len(rows),json.dumps(shapes,ensure_ascii=False),json.dumps([r["label"] for r in rows[:12]],ensure_ascii=False)])
                for r in rows[:12]:examples.append([name,r["label"],r["index"],r["text"]])
    def unique(loc,m,label):
        rows=messages.get((loc,m),{}).get(label,[])
        return rows[0] if len(rows)==1 else None
    kinds={crc(r["Label"]):r for r in tables["ItemKind"]}
    groups=collections.defaultdict(list)
    for r in tables["ItemClothGroup"]:groups[crc(r["Label"])].append(r)
    items={int(r["UniqueID"]):r for r in tables["ItemParam"]}
    counts=collections.Counter();bindings=[]
    def bind(entity,ident,member,label,evidence):
        for loc in LOCALES:
            row=unique(loc,member,label);st="unique_label" if row else "missing_or_ambiguous"
            counts[entity+":"+st]+=1
            bindings.append([entity,ident,loc,member,label,row["index"] if row else "",row["text"] if row else "",st,evidence])
    # Native clothing switch uses BCSV row index, NOT the UniqueID.
    for r in tables["ItemKind"]:
        idx=int(r["_row_index"])
        if idx in KINDS:assert r["Label"]==KINDS[idx],(idx,r["Label"])
    for ident,r in items.items():
        kind=kinds.get(r["ItemKind"],{});family=KINDS.get(int(kind.get("_row_index",-1)))
        if not family:continue
        counts["clothing_items"]+=1
        matches=groups.get(r["ClothGroup"],[])
        if len(matches)!=1:counts["clothing_group_unmatched"]+=1;continue
        gid=int(matches[0]["UniqueID"])
        if not gid:counts["clothing_group_zero"]+=1;continue
        counts["clothing_group_join"]+=1
        bind("clothing_name",ident,f"Outfit/GroupName/STR_OutfitGroupName_{family}.msbt",f"{gid:03d}","native_UniqueID_reader_decimal_width3_candidate")
        bind("clothing_color",ident,f"Outfit/GroupColor/STR_OutfitGroupColor_{family}.msbt",f"{gid:03d}_{kind['Label']}_{ident:05d}","native_format_01ae18f0_kind_label_candidate")
    # Reverse label parsing covers the entire native corpus, including unexpected labels.
    reverse=[]
    for (loc,member),d in sorted(messages.items()):
        if loc!="CNzh":continue
        for label,rows in d.items():
            if label is None:continue
            if member.endswith("STR_Remake_BodyColor.msbt") or member.endswith("STR_Remake_FabricColor.msbt"):
                m=re.fullmatch(r"(.+)_(\d{5})_(\d+)",label)
                if not m:reverse.append([member,label,"","","","other_shape"]);continue
                prefix,ident,slot=m.groups();item=items.get(int(ident));kind=kinds.get(item["ItemKind"],{}) if item else {}
                st="id_and_kind_label_match" if item and kind.get("Label")==prefix else "id_only" if item else "unknown_id"
                counts[member.split("/")[-1]+":"+st]+=1
                reverse.append([member,label,ident,prefix,slot,st])
            elif "/GroupColor/" in member:
                m=re.fullmatch(r"(\d+)_(.+)_(\d{5})",label)
                if not m:reverse.append([member,label,"","","","other_shape"]);continue
                gid,prefix,ident=m.groups();item=items.get(int(ident));kind=kinds.get(item["ItemKind"],{}) if item else {};g=groups.get(item["ClothGroup"],[]) if item else []
                st="id_group_kind_match" if len(g)==1 and int(g[0]["UniqueID"])==int(gid) and kind.get("Label")==prefix else "unresolved"
                counts["groupcolor_reverse:"+st]+=1
                reverse.append([member,label,ident,prefix,gid,st])
    for r in tables["ItemColor"]:
        bind("item_color",r["UniqueID"],"STR_ItemColor.msbt",r["Label"],"native_pointer_table_label_candidate")
    for r in tables["ItemRemake"]:
        ident=int(r["ItemUniqueID"]);item=items.get(ident);kind=kinds.get(item["ItemKind"],{}) if item else {}
        if not kind:continue
        for axis in ("Body","Fabric"):
            # Test all storage slots; no claim about active runtime count.
            for slot in range(8):
                bind("remake_"+axis.lower(),f"{r['UniqueID']}:{slot}",f"Remake/STR_Remake_{axis}Color.msbt",f"{kind['Label']}_{ident:05d}_{slot}","body_native_format_or_fabric_analog_candidate;representative_item_id")
    # Category ID arithmetic is negative-control hypothesis only, never promote.
    for r in tables["ItemUIFurnitureCategory"]:
        label=f"{int(r['UniqueID']):04d}"
        row=unique("JPja","STR_CategoryName.msbt",label)
        counts["category_direct_id:"+("same_ja" if row and row["text"]==r["Name"] else "different_ja" if row else "missing")]+=1
    write(out/"bindings.csv",["entity","entity_id","locale","member","label","text_index","text","status","evidence"],bindings)
    write(out/"label-profile.csv",["member","cnzh_rows","shape_counts_json","sample_labels_json"],profiles)
    write(out/"label-samples.csv",["member","label","text_index","text"],examples)
    write(out/"reverse-labels.csv",["member","label","item_id","prefix","slot_or_group","status"],reverse)
    summary={"counts":dict(counts),"source_archives":len(archives),"native_runtime_replay":False,"binding_policy":"format candidate and static label equality; no active slot inference","binding_rows":len(bindings),"reverse_rows":len(reverse)}
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n");print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--historical",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("out/message-label-rules"));a=p.parse_args();run(a.root,a.historical,a.out)
