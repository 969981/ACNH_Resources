#!/usr/bin/env python3
"""R77: ACNH 3.0.3 authentic multilingual SQLite item and NPC research database.

Inputs: original 14 String_*.sarc.zs (Zstd SARC -> MSBT) and original-
decoded UnPack/1/Bcsv tables. No community-localization substitutions.
Heuristic subtype base kinds are clearly marked as candidates, NOT confirmed
Nintendo category action rules. Null stays null, never a made-up boolean.
"""
from __future__ import annotations
import csv,hashlib,json,re,sqlite3,subprocess,collections
from pathlib import Path
from acnh_formats import decompress,parse_sarc,parse_msbt
from acnh303_r75_original_message_npc_audit import LOCALES,ROM
from acnh303_r74_metadata_stack_research import FLAG_NAMES,field
E=Path("assets/evidence/rom-database")
BCSV=Path("UnPack/1/Bcsv")
ID="hash_54706054"
NAME="hash_3FEBC642"
KIND="hash_FC275E86"
RES="hash_48EF0398"
KINDLABEL="hash_87BF00E8"
STACK="hash_4C9BA961"
ITEM_LABEL=re.compile(r"_(\d{5})(?:(_pl))?$")
PARENTS={"Ftr_":"Ftr","Top_":"Tops","Onepiece_":"OnePiece",
         "Bottoms_":"Bottoms","Shoes_":"Shoes"}
# For individual 25 unnamed subkinds these mappings are PROPOSALS, not
# verified item-kind equality. Never apply candidate flags without marking.
def kind_join(raw,kinds):
    s=raw.removeprefix("Kind_")
    if s in kinds:return s,"exact_ItemKind_label"
    for prefix,base in PARENTS.items():
        if s.startswith(prefix) and base in kinds:
            return base,"prefix_candidate_not_proven"
    return None,"unmapped_unknown"

def visible_msbt(raw):
    """Strip MSBT inline 0E group/type/size/payload; preserve raw independently.

    Input is parse_msbt UTF16 string. An 0E tag is followed by three u16
    units: group, type, size of payload in bytes, then payload code units.
    Underflow or non-even length means do NOT silently invent cleaned text.
    """
    out=[];at=0;tags=0;errors=0
    while at<len(raw):
        code=ord(raw[at])
        if code==0x0e:
            if at+4>len(raw):errors+=1;out.append("⟦INVALID_CONTROL⟧");at+=1;continue
            size=ord(raw[at+3])
            if size%2 or size>2048 or at+4+(size//2)>len(raw):
                errors+=1;out.append("⟦INVALID_CONTROL⟧");at+=1;continue
            at+=4+size//2;tags+=1;continue
        if code==0x0f:tags+=1;at+=1;continue
        if code in (0,):at+=1;continue
        if code<32 and code not in (9,10,13):out.append("⟦CTRL_%04X⟧"%code);errors+=1;at+=1;continue
        out.append(raw[at]);at+=1
    return "".join(out),tags,errors

def table(name):
    p=BCSV/name
    with p.open("r",encoding="utf-8-sig",newline="") as f:
        rows=list(csv.DictReader(f))
    return rows,hashlib.sha256(p.read_bytes()).hexdigest()
def actual_files():
    proc=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--","assets/images/"],
         capture_output=True,text=True,check=True,timeout=180)
    index=collections.defaultdict(list)
    for p in proc.stdout.splitlines():
        if p.endswith(".png"):index[p.rsplit("/",1)[-1][:-4]].append(p)
    return index

def build():
    E.mkdir(exist_ok=True,parents=True)
    dbpath=E/"r77-acnh303-native-item-villager.sqlite3"
    if dbpath.exists():dbpath.unlink()
    db=sqlite3.connect(dbpath)
    db.execute("PRAGMA foreign_keys=ON")
    db.execute("PRAGMA journal_mode=DELETE")
    db.executescript("""
    CREATE TABLE sources(source_id TEXT PRIMARY KEY, sha256 TEXT NOT NULL, format TEXT NOT NULL,
       version TEXT NOT NULL DEFAULT '3.0.3');
    CREATE TABLE kind(label TEXT PRIMARY KEY, kind_id INTEGER, stack_raw_u16 INTEGER NOT NULL,
       stack_s16 INTEGER NOT NULL, capacity_if_positive INTEGER,
       max_stack_status TEXT NOT NULL, flags_json TEXT NOT NULL, source_id TEXT NOT NULL);
    CREATE TABLE item(id INTEGER PRIMARY KEY, id_hex TEXT NOT NULL UNIQUE,
       res_name TEXT NOT NULL, original_kind TEXT NOT NULL, base_kind TEXT,
       base_kind_evidence TEXT NOT NULL, stack_s16 INTEGER,
       stack_capacity_candidate INTEGER, stack_evidence TEXT NOT NULL,
       pickup_verified INTEGER, image_path TEXT, image_selection_evidence TEXT,
       source_id TEXT NOT NULL, FOREIGN KEY(base_kind) REFERENCES kind(label));
    CREATE INDEX item_resname_idx ON item(res_name);
    CREATE TABLE npc(npc_type TEXT NOT NULL, source_index INTEGER NOT NULL,
       res_name TEXT NOT NULL, npc_key TEXT,
       source_id TEXT NOT NULL, PRIMARY KEY(npc_type,source_index));
    CREATE INDEX npc_key_idx ON npc(npc_key);
    CREATE TABLE msbt(locale TEXT NOT NULL, member TEXT NOT NULL,
       text_index INTEGER NOT NULL, label TEXT, text_raw TEXT NOT NULL,
       text_plain TEXT NOT NULL, control_count INTEGER NOT NULL,
       malformed_control_count INTEGER NOT NULL,
       source_id TEXT NOT NULL, PRIMARY KEY(locale,member,text_index));
    CREATE INDEX msbt_key_idx ON msbt(locale,member,label);
    CREATE TABLE item_locale_candidate(item_id INTEGER NOT NULL,locale TEXT NOT NULL,
       member TEXT NOT NULL,label TEXT NOT NULL,source_text_index INTEGER NOT NULL,
       form TEXT NOT NULL,text_plain TEXT NOT NULL,
       PRIMARY KEY(item_id,locale,member,label,source_text_index),
       FOREIGN KEY(item_id) REFERENCES item(id));
    CREATE INDEX item_locale_idx ON item_locale_candidate(item_id,locale);
    CREATE TABLE item_locale(item_id INTEGER NOT NULL,locale TEXT NOT NULL,
       display_name TEXT,association_status TEXT NOT NULL,
       candidate_count INTEGER NOT NULL,source_member TEXT,source_label TEXT,
       PRIMARY KEY(item_id,locale),FOREIGN KEY(item_id) REFERENCES item(id));
    CREATE TABLE npc_locale(npc_type TEXT NOT NULL,source_index INTEGER NOT NULL,
       locale TEXT NOT NULL,display_name TEXT,
       msbt_label TEXT,association_status TEXT NOT NULL,
       PRIMARY KEY(npc_type,source_index,locale));
    CREATE TABLE image_asset(path TEXT PRIMARY KEY,texture_stem TEXT NOT NULL,
       family TEXT,source_provenance TEXT NOT NULL);
    """)
    items,items_sha=table("ItemParam.csv")
    rules,rules_sha=table("ItemKind.csv")
    for name,sha in (("ItemParam.csv",items_sha),("ItemKind.csv",rules_sha)):
        db.execute("INSERT INTO sources(source_id,sha256,format) VALUES(?,?,?)",("UnPack/1/Bcsv/"+name,sha,"original_bcsv_decoded_csv"))
    kmap={}
    for r in rules:
        label=r[KINDLABEL]
        raw=int(r[STACK]);val=raw if raw<32768 else raw-65536
        flags={x:int(r[field(x,"u8")]) for x in FLAG_NAMES}
        if label in kmap:raise ValueError("duplicate original kind "+label)
        kmap[label]=(val,flags)
        db.execute("INSERT INTO kind VALUES(?,?,?,?,?,?,?,?)",(
           label,int(r[ID]),raw,val,val if val>0 else (1 if val==0 else None),
           "signed_special_sentinel_unverified" if val<0 else "native_BCSV_rule",json.dumps(flags,sort_keys=True),
           "UnPack/1/Bcsv/ItemKind.csv"))
    pngindex=actual_files()
    images=[]
    for stem,paths in pngindex.items():
        for p in paths:
            fam=("ClosetIcon" if "/ClosetIcon/" in p else
                 "FtrIcon" if "/items/" in p or "/FtrIcon/" in p else
                 "GardeningIcon" if "/GardeningIcon/" in p else
                 "NpcIcon" if "/icons/" in p else
                 "other")
            images.append((p,stem,fam,"committed_Git_PNG_source_R73_family_or_other"))
    db.executemany("INSERT INTO image_asset VALUES(?,?,?,?)",images)
    records=[]
    for r in items:
        uid=int(r[ID])
        orig=r[KIND]
        res=r[NAME]
        parent,evidence=kind_join(orig,kmap)
        val=kmap[parent][0] if parent else None
        filename=None;selection=None
        # A filename match is only an index link, never original UI selection.
        for suffix,reason in (("", "exact_original_filename_only"),
                              ("_Remake_0_0","native_zero_variant_filename_only")):
            p=[x for x in pngindex.get(res+suffix,[]) if "/items/" in x or "/FtrIcon/" in x]
            if p:
                filename=sorted(p)[0];selection=reason;break
        db.execute("INSERT INTO item VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?)",(
          uid,f"{uid:04X}",res,orig,parent,evidence,val,
          (val if val>0 else 1 if val==0 else None) if evidence=="exact_ItemKind_label" else None,
          "original_ItemKind_exact" if evidence=="exact_ItemKind_label" else
          "provisional_parent_not_game_approved" if parent else "unknown_no_parent",
          None,filename,selection,"UnPack/1/Bcsv/ItemParam.csv"))
        records.append((uid,res,orig,parent,evidence))
    for filename,npc_type in (("NmlNpcParam.csv","normal"),("SpNpcParam.csv","special")):
        rows,sha=table(filename)
        sid="UnPack/1/Bcsv/"+filename
        db.execute("INSERT INTO sources(source_id,sha256,format) VALUES(?,?,?)",(sid,sha,"original_bcsv_decoded_csv"))
        for index,r in enumerate(rows):
            res=r[RES]
            key=(res[6:9].lower()+res[9:]) if npc_type=="normal" else None
            if npc_type=="normal":
                # NpcNmlAnt00 -> ant00
                key=res[len("NpcNml"):].lower()
            db.execute("INSERT INTO npc VALUES(?,?,?,?,?)",(npc_type,index,res,key,sid))
    stats=collections.Counter();locale_counts={}
    native_names=collections.defaultdict(list)
    normal=set(r[0] for r in db.execute("SELECT npc_key FROM npc WHERE npc_type='normal'"))
    for locale in LOCALES:
        path=ROM/("String_"+locale+".sarc.zs")
        raw=path.read_bytes();doc,method=decompress(raw,limit=30*1024*1024)
        manifest,members=parse_sarc(doc)
        if len(members)!=133:raise ValueError("3.0.3 language archive member count changed "+locale)
        sid=path.as_posix()
        db.execute("INSERT INTO sources(source_id,sha256,format) VALUES(?,?,?)",(sid,hashlib.sha256(raw).hexdigest(),"original_zstd_sarc"))
        for member,ms in members:
            data=parse_msbt(ms)
            stats["msbt_files"]+=1
            for e in data["entries"]:
                label=e["label"]
                rawtext=e["text"];plain,ntags,err=visible_msbt(rawtext)
                db.execute("INSERT INTO msbt VALUES(?,?,?,?,?,?,?,?,?)",(
                  locale,member,e["index"],label,rawtext,plain,ntags,err,sid))
                stats["msbt_rows"]+=1
                stats["control_tags"]+=ntags
                stats["malformed_controls"]+=err
                if label and member.startswith("Item/STR_ItemName_"):
                    m=ITEM_LABEL.search(label)
                    if m:
                        uid=int(m.group(1))
                        if uid in idset:
                            form="plural" if m.group(2) else "singular"
                            db.execute("INSERT OR IGNORE INTO item_locale_candidate VALUES(?,?,?,?,?,?,?)",
                                (uid,locale,member,label,e["index"],form,plain))
                            stats["original_item_ID_suffix_matches"]+=1
                        else:stats["item_ID_key_not_in_ItemParam"]+=1
                if member=="Npc/STR_NNpcName.msbt" and label:
                    native_names[locale].append((label,plain))
            stats["decoded_files_"+locale]+=1
        locale_counts[locale]={"members":len(members),"all_messages":db.execute(
            "SELECT COUNT(*) FROM msbt WHERE locale=?",(locale,)).fetchone()[0]}
    for uid, in db.execute("SELECT id FROM item"):
        for locale in LOCALES:
            cand=db.execute("""SELECT member,label,text_plain FROM item_locale_candidate
                  WHERE item_id=? AND locale=? AND form='singular'
                  ORDER BY member,label""",(uid,locale)).fetchall()
            variants={row[2] for row in cand}
            if not cand:
                status="no_verified_item_key_suffix";name=None;src=None;label=None
            elif len(variants)==1:
                status="unique_text_from_ROM_ID_suffix";name=next(iter(variants))
                src,label=cand[0][:2]
            else:
                status="ambiguous_native_name_labels";name=None;src=None;label=None
            db.execute("INSERT INTO item_locale VALUES(?,?,?,?,?,?,?)",(
                  uid,locale,name,status,len(cand),src,label))
            stats["item_locale_"+status]+=1
    for locale in LOCALES:
        name_map=collections.defaultdict(list)
        for label,txt in native_names[locale]:name_map[label].append(txt)
        for tp,idx,key in db.execute("SELECT npc_type,source_index,npc_key FROM npc").fetchall():
            matched=name_map.get(key,[]) if tp=="normal" else []
            status="exact_ROM_NNpcName_label" if len(matched)==1 else ("missing" if not matched else "ambiguous")
            db.execute("INSERT INTO npc_locale VALUES(?,?,?,?,?,?)",
                (tp,idx,locale,matched[0] if len(matched)==1 else None,key if len(matched)==1 else None,status))
            if tp=="normal":stats["normal_npc_"+status]+=1
    db.commit()
    # Only after actual output exists, check integer joins and provenance.
    assert db.execute("SELECT COUNT(*) FROM item").fetchone()[0]==11178
    assert db.execute("SELECT COUNT(*) FROM kind").fetchone()[0]==189
    assert db.execute("SELECT COUNT(*) FROM npc WHERE npc_type='normal'").fetchone()[0]==417
    assert db.execute("SELECT COUNT(*) FROM npc WHERE npc_type='special'").fetchone()[0]==74
    assert stats["msbt_files"]==1862
    direct=collections.Counter(x[4] for x in records)
    counts={
        "item":11178,"kind":189,"npc_normal":417,"npc_special":74,
        "native_language_archives":len(LOCALES),
        "MSBT_decoded":stats["msbt_files"],
        "MSBT_entries":stats["msbt_rows"],
        "item_category_join":dict(direct),
        "item_ID_name_candidate_counts":stats["original_item_ID_suffix_matches"],
        "item_locale_with_unique_name":stats["item_locale_unique_text_from_ROM_ID_suffix"],
        "item_locale_without_name":stats["item_locale_no_verified_item_key_suffix"],
        "item_locale_ambiguous":stats["item_locale_ambiguous_native_name_labels"],
        "npc_locale_exact":stats["normal_npc_exact_ROM_NNpcName_label"],
        "control_tags":stats["control_tags"],
        "malformed_control_codes":stats["malformed_controls"],
        "other_counts":{k:v for k,v in stats.items() if k not in (
          "msbt_files","msbt_rows","original_item_ID_suffix_matches",
          "item_locale_unique_text_from_ROM_ID_suffix",
          "item_locale_no_verified_item_key_suffix",
          "item_locale_ambiguous_native_name_labels",
          "normal_npc_exact_ROM_NNpcName_label",
          "control_tags","malformed_controls")}}
    with (E/"r77-native-items-11178.csv").open("w",newline="",encoding="utf-8") as f:
        cols=["id","id_hex","res_name","original_kind","base_kind","base_kind_evidence",
           "stack_s16","stack_capacity_candidate","stack_evidence","image_path","name_CNzh","name_TWzh","name_JPja","name_USen"]
        w=csv.writer(f);w.writerow(cols)
        q=db.execute("""SELECT id,id_hex,res_name,original_kind,base_kind,base_kind_evidence,
             stack_s16,stack_capacity_candidate,stack_evidence,image_path FROM item ORDER BY id""")
        for row in q:
            localized=[db.execute("SELECT display_name FROM item_locale WHERE item_id=? AND locale=?",
                    (row[0],l)).fetchone()[0] for l in ("CNzh","TWzh","JPja","USen")]
            w.writerow(list(row)+localized)
    with (E/"r77-native-villagers.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["type","index","res_name","name_CNzh","name_TWzh","name_JPja","name_USen"])
        for tp,idx,res in db.execute("SELECT npc_type,source_index,res_name FROM npc ORDER BY npc_type,source_index"):
            labels=[db.execute("SELECT display_name FROM npc_locale WHERE npc_type=? AND source_index=? AND locale=?",
                 (tp,idx,l)).fetchone()[0] for l in ("CNzh","TWzh","JPja","USen")]
            w.writerow([tp,idx,res]+labels)
    db.execute("PRAGMA optimize");db.close()
    report={"schema":"acnh303_r77_multilingual_original_database_v1",
        "original_version":"3.0.3","totals":counts,
        "sqlite":"assets/evidence/rom-database/r77-acnh303-native-item-villager.sqlite3",
        "item_csv":"assets/evidence/rom-database/r77-native-items-11178.csv",
        "npc_csv":"assets/evidence/rom-database/r77-native-villagers.csv",
        "parent_mapping":"explicit_prefix_candidate_not_proven",
        "native_pickup_proven":False,"no_external_names_substituted":True,
        "missing_names_are_null":True,
        "language_source_sha256_recorded_in_sqlite":True}
    (E/"r77-database-build-and-evidence.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({"summary":counts,"files":[{"path":str(p),"bytes":p.stat().st_size}
       for p in (dbpath,E/"r77-native-items-11178.csv",E/"r77-native-villagers.csv")]},ensure_ascii=False)[:9000])

if __name__=="__main__":
    idset=set(int(r[ID]) for r in table("ItemParam.csv")[0])
    build()
