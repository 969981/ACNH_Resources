#!/usr/bin/env python3
"""R80 native Outfit/GroupName MSBT group->instance multilingual association.

Reads R77 byte-exact 3.0.3 MSBT SQLite and original ItemClothGroup CSV.
Does not infer that a shared outfit group name is a unique item variation name.
Strict group association: original representative item ID OR exact base
ResName after removing only trailing variant number (candidate).
"""
from __future__ import annotations
import collections,csv,hashlib,json,re,sqlite3,zstandard
from pathlib import Path
LOCALES=("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
BASE=Path("assets/evidence/rom-database")
IN=BASE/"r77-acnh303-native-item-villager.sqlite3.zst"
DB=BASE/"r80-acnh303-multilingual-clothing-enriched.sqlite3"
OUT=BASE/"r80-acnh303-multilingual-clothing-enriched.sqlite3.zst"
GROUP=Path("UnPack/1/Bcsv/ItemClothGroup.csv")
NAMES=("Tops","OnePiece","Bottoms","Socks","Shoes","Cap",
       "Helmet","Accessory","Bag","HandBag","MarineSuit")
ID="hash_54706054";REP="hash_65503F9F";NAME="hash_13AB5198"
JAPANESE="hash_036E8EBE"

def audit():
    if not IN.is_file():raise FileNotFoundError(IN)
    with IN.open("rb") as i,DB.open("wb") as o:
        with zstandard.ZstdDecompressor().stream_reader(i) as rdr:
            for chunk in iter(lambda:rdr.read(1024*1024),b""):o.write(chunk)
    db=sqlite3.connect(DB)
    db.execute("PRAGMA foreign_keys=ON")
    original_items=db.execute("SELECT COUNT(*) FROM item").fetchone()[0]
    original_locale=db.execute("SELECT COUNT(*) FROM item_locale WHERE association_status='unique_text_from_ROM_ID_suffix'").fetchone()[0]
    if original_items!=11178 or original_locale!=75712:
        raise ValueError("R77 verified native baseline changed")
    db.executescript("""
    CREATE TABLE clothing_group (
      group_id INTEGER PRIMARY KEY, representative_item_id INTEGER,
      group_resname TEXT, japanese_group_name TEXT,
      original_csv_row INTEGER, source_path TEXT NOT NULL);
    CREATE TABLE item_clothing_group_candidate (
      item_id INTEGER PRIMARY KEY,group_id INTEGER,
      matching_method TEXT NOT NULL,
      representative_item_id INTEGER,group_name TEXT,
      original_JP_item_name TEXT,JP_name_crosscheck TEXT,
      FOREIGN KEY(item_id) REFERENCES item(id));
    CREATE TABLE clothing_group_locale (
      group_id INTEGER NOT NULL, locale TEXT NOT NULL,
      original_member TEXT NOT NULL, original_label TEXT NOT NULL,
      group_display_name TEXT NOT NULL,
      PRIMARY KEY(group_id,locale));
    """)
    with GROUP.open("r",encoding="utf-8-sig",newline="") as f:
        rawrows=list(csv.DictReader(f))
    sha=hashlib.sha256(GROUP.read_bytes()).hexdigest()
    db.execute("INSERT INTO sources(source_id,sha256,format) VALUES(?,?,?)",
        ("UnPack/1/Bcsv/ItemClothGroup.csv",sha,"original_bcsv_decoded_csv"))
    id2group={};byname=collections.defaultdict(list);rows=0
    for idx,r in enumerate(rawrows):
        groupname=r.get(NAME,"")
        if not groupname or groupname in ("None","-"):continue
        gid=int(r[ID]);rep=int(r[REP])
        if gid==0 or gid>65533:continue
        jp=r.get(JAPANESE,"")
        db.execute("INSERT INTO clothing_group VALUES(?,?,?,?,?,?)",
             (gid,rep,groupname,jp,idx,"UnPack/1/Bcsv/ItemClothGroup.csv"))
        byname[groupname].append(gid)
        if rep not in (0,65534,65535):id2group[rep]=gid
        rows+=1
    # Index typed GroupName MSBT. Group IDs are encoded as decimal labels
    # with different widths: 018, 1000, etc. Validate against group ids.
    all_rows=db.execute("""SELECT locale,member,label,text_plain FROM msbt
         WHERE member LIKE 'Outfit/GroupName/STR_OutfitGroupName_%' AND label IS NOT NULL""").fetchall()
    msbt=collections.defaultdict(list)
    for locale,member,label,text in all_rows:
        try:gid=int(label)
        except ValueError:continue
        msbt[(locale,gid)].append((member,label,text))
    accepted=0;ambiguous=0;notfound=0;status=collections.Counter()
    items=db.execute("""SELECT id,res_name,original_kind,base_kind,
          (SELECT text_plain FROM msbt WHERE locale='JPja' AND member LIKE 'Outfit/GroupName/%' LIMIT 1)
          FROM item""").fetchall()
    # Cross-check original ItemParam's Japanese name separately by ID where available.
    jpmap={}
    with Path("UnPack/1/Bcsv/ItemParam.csv").open("r",encoding="utf-8-sig",newline="") as f:
        for r in csv.DictReader(f):
            jpmap[int(r[ID])]=r.get("hash_B8CC232C","")
    for item_id,res,original_kind,parent,_ in items:
        if parent not in NAMES:continue
        suffixless=re.sub(r"\d+$","",res)
        candidates=set(byname.get(suffixless,[]))
        repgroup=id2group.get(item_id)
        if repgroup is not None:
            candidates.add(repgroup)
        if len(candidates)!=1:
            st="multiple_native_group_ids" if candidates else "no_exact_native_clothing_group"
            if candidates:ambiguous+=1
            else:notfound+=1
            status[st]+=1
            continue
        gid=next(iter(candidates))
        group_name=db.execute("SELECT group_resname,japanese_group_name,representative_item_id FROM clothing_group WHERE group_id=?",(gid,)).fetchone()
        gr,jp,repid=group_name
        # Reject rep linkage if the representative item is of an incompatible
        # clothing family. The typed MSBT category must match native parent.
        target_member=f"Outfit/GroupName/STR_OutfitGroupName_{parent}.msbt"
        any_locale_has_match=any(any(x[0]==target_member for x in msbt.get((locale,gid),[])) for locale in LOCALES)
        if not any_locale_has_match:
            status["typed_group_MSBT_missing"]+=1
            continue
        method="original_representative_item_id" if repgroup==gid else "exact_ResName_without_trailing_variant_digits"
        itemjp=jpmap.get(item_id,"")
        jpcheck=("native_JP_item_contains_group_JP" if jp and jp in itemjp else
                 "native_JP_item_differs_or_unavailable")
        db.execute("INSERT INTO item_clothing_group_candidate VALUES(?,?,?,?,?,?,?)",
            (item_id,gid,method,repid,gr,itemjp,jpcheck))
        status[method]+=1;accepted+=1
        for locale in LOCALES:
            choices=[x for x in msbt.get((locale,gid),[]) if x[0]==target_member]
            if len(choices)!=1:
                status["locale_group_not_unique"]+=1
                continue
            member,label,display=choices[0]
            # Persist raw native group locale + linked candidate separately.
            db.execute("INSERT OR IGNORE INTO clothing_group_locale VALUES(?,?,?,?,?)",
                (gid,locale,member,label,display))
            oldstatus=db.execute("SELECT association_status FROM item_locale WHERE item_id=? AND locale=?",(item_id,locale)).fetchone()
            if oldstatus and oldstatus[0]=="no_verified_item_key_suffix":
                db.execute("""UPDATE item_locale SET display_name=?,
                    association_status=?,candidate_count=1,
                    source_member=?,source_label=?
                    WHERE item_id=? AND locale=?""",(
                    display,"native_group_candidate_"+method,member,label,item_id,locale))
                status["new_locale_candidate"]+=1
    # A clothing family has its own native ClosetIcon PNGs. Link exact source
    # stem -> ROM ItemParam.ResName without merging FtrIcon with ClosetIcon
    # or assuming anything about in-game icon selection.
    original_closet_pngs=db.execute("SELECT COUNT(*) FROM image_asset WHERE family='ClosetIcon'").fetchone()[0]
    if original_closet_pngs!=5480:
        raise ValueError("R73 actual original 5480 ClosetIcon PNG corpus changed")
    db.execute("""UPDATE item SET
        image_path=(SELECT a.path FROM image_asset a
            WHERE a.family='ClosetIcon' AND a.texture_stem=item.res_name
            ORDER BY a.path LIMIT 1),
        image_selection_evidence='native_ClosetIcon_exact_resname_filename_only'
        WHERE image_path IS NULL AND base_kind IN
            ('Tops','OnePiece','Bottoms','Socks','Shoes','Cap',
             'Helmet','Accessory','Bag','HandBag','MarineSuit')
        AND EXISTS(SELECT 1 FROM image_asset a WHERE a.family='ClosetIcon'
            AND a.texture_stem=item.res_name)""")
    db.commit()
    def n(sql):return db.execute(sql).fetchone()[0]
    counters={
       "item_records":n("SELECT COUNT(*) FROM item"),
       "original_R77_item_locale_verified":original_locale,
       "original_closet_images_in_Git_corpus":original_closet_pngs,
       "item_rows_with_native_closet_image_path":n("SELECT COUNT(*) FROM item WHERE image_selection_evidence='native_ClosetIcon_exact_resname_filename_only'"),
       "item_rows_with_any_native_filename_candidate":n("SELECT COUNT(*) FROM item WHERE image_path IS NOT NULL"),
       "native_clothing_group_BCSV_rows":rows,
       "native_clothing_groups_linked_items":accepted,
       "native_group_locale_candidate_links":n("SELECT COUNT(*) FROM item_locale WHERE association_status LIKE 'native_group_candidate_%'"),
       "exact_ROM_item_ID_locale_links_preserved":n("SELECT COUNT(*) FROM item_locale WHERE association_status='unique_text_from_ROM_ID_suffix'"),
       "remaining_item_locale_without_name":n("SELECT COUNT(*) FROM item_locale WHERE display_name IS NULL"),
       "normal_npc_locale_exact":n("SELECT COUNT(*) FROM npc_locale WHERE association_status='exact_ROM_NNpcName_label'"),
       "unlinked_clothing_items":notfound,
       "ambiguous_clothing_items":ambiguous,
       "counts":dict(status)
    }
    if counters["original_R77_item_locale_verified"] != counters["exact_ROM_item_ID_locale_links_preserved"]:
        raise ValueError("Original exact item IDs were unexpectedly overwritten")
    with (BASE/"r80-clothing-multilingual-coverage.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["id_hex","res_name","original_kind","candidate_group_id","method",
             "japanese_consistency","CNzh","USen","JPja"])
        for uid,name,kind,gid,method,consistency in db.execute("""SELECT i.id_hex,i.res_name,i.original_kind,
             c.group_id,c.matching_method,c.JP_name_crosscheck
             FROM item_clothing_group_candidate c JOIN item i ON i.id=c.item_id
             ORDER BY i.id"""):
            row=db.execute("SELECT id FROM item WHERE id_hex=?",(uid,)).fetchone()
            names=[]
            for locale in ("CNzh","USen","JPja"):
                l=db.execute("SELECT display_name FROM item_locale WHERE item_id=? AND locale=?",(row[0],locale)).fetchone()
                names.append(l[0] if l else None)
            w.writerow([uid,name,kind,gid,method,consistency]+names)
    db.execute("PRAGMA optimize");db.close()
    with DB.open("rb") as i,OUT.open("wb") as o:
        zstandard.ZstdCompressor(level=15,threads=0,write_checksum=True).copy_stream(i,o)
    originalsha=hashlib.sha256()
    with DB.open("rb") as f:
        for chunk in iter(lambda:f.read(1024*1024),b""):originalsha.update(chunk)
    fromz=hashlib.sha256()
    with OUT.open("rb") as f:
        with zstandard.ZstdDecompressor().stream_reader(f) as r:
            for chunk in iter(lambda:r.read(1024*1024),b""):fromz.update(chunk)
    if fromz.hexdigest()!=originalsha.hexdigest():raise ValueError("R80 SQLite compressed roundtrip differs")
    rawbytes=DB.stat().st_size
    DB.unlink()
    report={"schema":"acnh303_r80_native_group_names_clothing_join_v1",
        "version":"3.0.3","totals":counters,
        "sqlite_zstd":str(OUT),"uncompressed_sqlite_bytes":rawbytes,
        "sqlite_sha256":originalsha.hexdigest(),
        "zstd_sha256":hashlib.sha256(OUT.read_bytes()).hexdigest(),
        "zstd_roundtrip_proved":True,
        "exact_item_locale_names_not_modified":True,
        "clothing_group_resname_link_is_not_proof_of_individual_variant_text":True,
        "native_pickup_behavior_unverified":True}
    (BASE/"r80-group-names-evidence.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps(report,ensure_ascii=False)[:10000])
if __name__=="__main__":audit()
