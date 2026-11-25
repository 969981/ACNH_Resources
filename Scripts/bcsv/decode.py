#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["zstandard==0.23.0"]
# ///
"""BCSV decoded layer: typed candidate values, scoped enum labels, reference and locale sidecars."""
from __future__ import annotations
import argparse, collections, csv, hashlib, json, math, re, sqlite3, struct, tempfile, zlib
from pathlib import Path
import zstandard
from bcsv import BCSV, crc32
from export_views import ROM, read, dump, require, raw_value, crc

DATA=Path("research/bcsv-data")
ARCHIVE=Path("assets/evidence/rom-database")
LOCALES=("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
CORE={"690E3379":"ItemClothGroup","A6B1A7FD":"ItemColor","B7CCCD84":"ItemColor","F1246E5F":"ItemAct","DB1A2F07":"ItemFrom","5270EB75":"ItemKind","348D7B06":"ItemMenuIcon","AA6A39C6":"ItemNpcFtrActionParam","EAD62C46":"ItemNpcRoomReplaceCategory","263C3CED":"ItemNpcWherearenFtrActionParam","7724BF93":"ItemOutfitInfo","E06FB090":"ItemSize","8221388C":"ItemUIFurnitureCategory","010D74A6":"ItemUnitIcon","60C99A5E":"ItemNpcOutfitInfo"}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def blob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def typed(raw,c):
    t=c["type_candidate"]
    if not t:return "hex:"+raw.hex(),"unknown_raw"
    candidates=[x for x in c["all_candidates"] if x["signature"]==c["signature"]]
    require(len(candidates)==1 and crc(c["signature"])==c["hash"][5:],"signature mismatch")
    w=candidates[0]["type_width"];require(0<w<=len(raw),"bad width")
    v=raw[:w]
    if t in ("hshCstringRef","stringMurmurHash"):return f"0x{int.from_bytes(v,'little'):08X}","hash"
    if re.fullmatch(r"[us](8|16|32|64)",t):
        # Spans of >1 byte for u8 bitfields must not silently truncate.
        if w==1 and len(raw)>1 and any(raw[1:]):return "hex:"+raw.hex(),"nonzero_extra_bytes_raw"
        return int.from_bytes(v,"little",signed=t[0]=="s"),"signed" if t[0]=="s" else "unsigned"
    if t in ("f32","f64"):
        x=struct.unpack("<f" if t=="f32" else "<d",v)[0]
        return (x,"float") if math.isfinite(x) else ("hex:"+v.hex(),"nonfinite_raw")
    if t=="bool":return (v[0],"bool_candidate") if v[0] in (0,1) else ("hex:"+v.hex(),"invalid_bool_raw")
    if re.fullmatch(r"string\d+",t):
        try:return v.split(b"\0",1)[0].decode("utf-8"),"string"
        except UnicodeDecodeError:return "hex:"+v.hex(),"invalid_utf8_raw"
    return "hex:"+raw.hex(),"unsupported_raw"

def load_enums(root,upstream):
    manifest=read(root/"research/bcsv-hash/sources/external_enum_sources.json")
    require(manifest["commit"]=="74e0f967f6305c4aa55b1e1726c0445e45593c36","enum source drift")
    enums=collections.defaultdict(lambda:collections.defaultdict(set))
    for f in manifest["files"]:
        if f["role"]!="crc_enum":continue
        raw=(upstream/f["path"]).read_bytes()
        require(len(raw)==f["bytes"] and blob(raw)==f["blob"],"enum blob mismatch "+f["path"])
        h=Path(f["path"]).stem.upper().zfill(8)
        for s in raw.decode("utf-8-sig").splitlines():
            if s:enums[h][crc32(s)].add(s)
    return enums
def labels(b,h):
    d=collections.defaultdict(list)
    for i in range(b.count):
        s=b.string(i,int(h[5:],16))
        if s:
            ident=b.uint(i,0x54706054) if 0x54706054 in b.by_hash else None
            d[crc32(s)].append({"row":i,"label":s,"id":ident})
    return d

def write_csv(path,columns,rows):
    with path.open("w",encoding="utf-8-sig",newline="") as fp:
        w=csv.writer(fp);w.writerow(columns);w.writerows(rows)

def locale_export(archive,out,tables):
    report=read(archive/"r82-npc-original-provenance-report.json")
    packed=archive/"r82-acnh303-villager-provenance.sqlite3.zst"
    require(sha(packed)==report["compressed_sqlite_sha256"] and report["game_version"]=="3.0.3","locale source mismatch")
    counts={}
    with tempfile.TemporaryDirectory() as tmp:
        p=Path(tmp)/"native.sqlite3"
        with packed.open("rb") as src,p.open("wb") as dst:zstandard.ZstdDecompressor().copy_stream(src,dst)
        require(sha(p)==report["uncompressed_sqlite_sha256"],"locale sqlite sha")
        with sqlite3.connect(p) as db:
            db.row_factory=sqlite3.Row
            require(db.execute("pragma integrity_check").fetchone()[0]=="ok","locale integrity")
            b=tables["ItemParam"]
            expected={b.uint(i,0x54706054):(b.string(i,0x3FEBC642),b.string(i,0xFC275E86)) for i in range(b.count)}
            require(len(expected)==11178,"item ids")
            actual={r["id"]:(r["res_name"],r["original_kind"]) for r in db.execute("select id,res_name,original_kind from item")}
            require(actual==expected,"historical locale item identity")
            for name,sql,columns,keys,n in [
                ("ItemParam", "select item_id,locale,display_name,association_status,source_member,source_label from item_locale order by item_id,locale",["item_id","locale","display_name","association_status","source_member","source_label"],(0,),11178),
                ("Npc", "select npc_type,source_index,locale,display_name,association_status,msbt_label from npc_locale order by npc_type,source_index,locale",["npc_type","source_index","locale","display_name","association_status","msbt_label"],(0,1),491)]:
                rows=[tuple(r) for r in db.execute(sql)]
                by=collections.defaultdict(set);loc_idx=len(keys)
                for r in rows:
                    k=tuple(r[i] for i in keys);require(r[loc_idx] not in by[k],"duplicate locale");by[k].add(r[loc_idx])
                require(len(by)==n and all(x==set(LOCALES) for x in by.values()),"locale coverage "+name)
                if name=="Npc":
                    for kind,t in (("normal","NmlNpcParam"),("special","SpNpcParam")):
                        indices={k[1] for k in by if k[0]==kind}
                        require(indices==set(range(tables[t].count)),"NPC locale row coverage")
                write_csv(out/(name+".csv"),columns,rows)
                counts[name]={"rows":len(rows),"status_counts":dict(collections.Counter(r[loc_idx+2] for r in rows))}
    return counts

def run(root,out,upstream,archive):
    inv=read(root/"research/bcsv-catalog/inventory.json")
    require(len(inv)==234,"inventory size")
    tables={};schemas={};entries={}
    for e in inv:
        p=root/ROM/e["table"];b=BCSV.read(p);t=p.stem
        sc=read(root/DATA/"schema"/(t+".json"))
        require(b.metadata()==sc["source"] and b.metadata()["git_blob_sha1"]==e["git_blob_sha1"],"source mismatch "+t)
        for f,c in zip(b.fields,sc["columns"],strict=True):
            require((f.key,f.offset,f.width)==(c["hash"],c["offset"],c["width"]),"schema mismatch "+t)
        tables[t]=b;schemas[t]=sc["columns"];entries[t]=e
    enums=load_enums(root,upstream)
    refs=read(root/"research/bcsv-catalog/reference-candidates.json")
    by_source=collections.defaultdict(list);domains={}
    for r in refs:
        t=Path(r["source_table"]).stem;target=Path(r["target_table"]).stem;h=r["source_hash"];lh=r["target_label_hash"]
        k=(target,lh)
        if k not in domains:domains[k]=labels(tables[target],lh)
        by_source[(t,h)].append((k,domains[k]))
    # CRC recovery from previously archived SmallGenre candidates; keep provenance.
    groups=read(root/"docs/Items/Native-UI-Category-Groups.json")
    small=collections.defaultdict(set)
    for g in groups["groups"]:
        v=int(g["hash"],16)
        for n in g["names"]:
            if crc32(n["name"])==v:small[v].add(n["name"])
    for folder in ("tables","schema","locales"):(out/folder).mkdir(parents=True,exist_ok=True)
    stats=collections.Counter();ref_rows=[];enum_rows=[];manifest=[]
    for t,b in tables.items():
        cols=schemas[t];base=["_row_index","_row_offset_raw"]+[c["column"] for c in cols]
        # Append labels to hash-typed fields, keep numeric CRC as hex in base column.
        extras={}
        for j,c in enumerate(cols):
            if c["type_candidate"]=="hshCstringRef":
                extra=c["column"]+"__label";require(extra not in base and extra not in extras.values(),"label column collision");extras[j]=extra
        counts=collections.Counter();field_values=collections.defaultdict(collections.Counter)
        path=out/"tables"/(t+".csv")
        with path.open("w",encoding="utf-8-sig",newline="") as fp:
            w=csv.writer(fp);w.writerow(base+list(extras.values()))
            for i in range(b.count):
                values=[];extra_values=[]
                for j,(f,c) in enumerate(zip(b.fields,cols,strict=True)):
                    raw=b.raw(i,f);v,status=typed(raw,c);values.append(v);counts[(c["hash"],status)]+=1
                    if j in extras:
                        num=int.from_bytes(raw[:4],"little")
                        field_values[c["hash"]][num]+=1
                        # Prefer scoped table join only when a named core relationship is supported.
                        core=CORE.get(c["hash"][5:]) if t=="ItemParam" else None
                        opts=by_source.get((t,c["hash"]),[])
                        matched={x["label"] for (target,lh),d in opts if target==core for x in d.get(num,[])}
                        community=enums.get(c["hash"][5:],{}).get(num,set())
                        special=small.get(num,set()) if t=="ItemUIFurnitureCategory" and c["hash"]=="hash_A4686E5D" else set()
                        pool=matched|community|special
                        label=next(iter(pool)) if len(pool)==1 else ""
                        extra_values.append(label)
                        counts[(c["hash"],"enum_"+("matched" if label else "ambiguous" if pool else "unmatched"))]+=1
                pos=b.start+i*b.stride
                w.writerow([i,int.from_bytes(b.data[pos:pos+4],"little"),*values,*extra_values])
        with path.open(encoding="utf-8-sig",newline="") as fp:
            rr=csv.reader(fp);require(next(rr)==base+list(extras.values()),"decoded header")
            require(sum(1 for r in rr if len(r)==len(base)+len(extras))==b.count,"decoded row count")
        for h,vals in field_values.items():
            for v,n in sorted(vals.items()):
                community=sorted(enums.get(h[5:],{}).get(v,set()))
                special=sorted(small.get(v,set())) if t=="ItemUIFurnitureCategory" and h=="hash_A4686E5D" else []
                if community or special:enum_rows.append([t,h,f"0x{v:08X}",n,json.dumps(community,ensure_ascii=False),json.dumps(special,ensure_ascii=False)])
        for (source,h),opts in by_source.items():
            if source!=t:continue
            f=b.by_hash[int(h[5:],16)]
            vals=collections.Counter(b.uint(i,f.hash) for i in range(b.count))
            for (target,lh),domain in opts:
                for v,n in sorted(vals.items()):
                    matches=domain.get(v,[])
                    ref_rows.append([t,h,f"0x{v:08X}",n,target,lh,"unique_match" if len(matches)==1 else "ambiguous" if matches else "unmatched",json.dumps(matches,ensure_ascii=False,separators=(",",":"))])
        for (h,status),n in counts.items():stats[status]+=n
        stats["tables"]+=1;stats["rows"]+=b.count;stats["field_positions"]+=len(cols);stats["field_cells"]+=b.count*len(cols)
        dump(out/"schema"/(t+".json"),{"source":entries[t]["sha256"],"columns":cols,"label_columns":{cols[j]["hash"]:v for j,v in extras.items()},"status_counts":[{"hash":h,"status":s,"count":n} for (h,s),n in sorted(counts.items())]})
        manifest.append({"table":t,"rows":b.count,"fields":len(cols),"csv_sha256":sha(path)})
    require((stats["tables"],stats["rows"],stats["field_positions"])==(234,58349,2898),"full totals")
    write_csv(out/"enum-values.csv",["table","field_hash","raw_hex","row_count","community_labels_json","smallgenre_candidates_json"],enum_rows)
    write_csv(out/"reference-values.csv",["source_table","field_hash","raw_hex","row_count","target_table","target_label_hash","status","matches_json"],ref_rows)
    # Item taxonomy projection, explicit source CRC and target ID/labels, no fallback.
    b=tables["ItemParam"];cat=tables["ItemUIFurnitureCategory"]
    d=labels(cat,"hash_13AB5198");rows=[]
    for i in range(b.count):
        value=b.uint(i,0x8221388C);m=d.get(value,[]);one=m[0] if len(m)==1 else None
        g=cat.uint(one["row"],0xA4686E5D) if one else None
        names=small.get(g,set())
        rows.append([b.uint(i,0x54706054),f"0x{value:08X}",one["id"] if one else "",one["label"] if one else "",f"0x{g:08X}" if g is not None else "",next(iter(names)) if len(names)==1 else "","unique_match" if one else "ambiguous" if m else "unmatched"])
    write_csv(out/"item-taxonomy.csv",["item_id","ui_category_hash","ui_category_id","ui_category_label","smallgenre_hash","smallgenre_label_candidate","status"],rows)
    locale=locale_export(archive,out/"locales",tables)
    summary={"counts":dict(stats),"enum_dictionary_fields":len(enums),"enum_value_records":len(enum_rows),"reference_candidates":len(refs),"reference_value_records":len(ref_rows),"item_taxonomy_status":dict(collections.Counter(r[-1] for r in rows)),"locales":locale}
    dump(out/"manifest.json",manifest);dump(out/"summary.json",summary);print(json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,default=DATA/"decoded");p.add_argument("--upstream",type=Path,required=True);p.add_argument("--archive",type=Path,required=True);a=p.parse_args();run(a.root,a.out,a.upstream,a.archive)
