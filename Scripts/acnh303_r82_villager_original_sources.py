#!/usr/bin/env python3
"""R82: ACNH 3.0.3 native NPC source/parameters/image lineage + invitation evidence.

Extends R80 SQLite; no guess of 'can recruit' from NmlNpcParam presence.
Original BCSV record bytes, row offset and hash-named columns remain recoverable.
All 1,934 native image source entries are preserved, individually linked only
with an exact NPC ResName token (e.g., PosterNpcNmlAnt00).
"""
from __future__ import annotations
import csv,hashlib,json,sqlite3,re
from collections import Counter,defaultdict
from pathlib import Path
import zstandard
ROOT=Path("e10617820db06889e1638499478da0de_NCA/1")
SRC=Path("UnPack/1/Bcsv")
EVID=Path("assets/evidence/rom-villager")
OUT=Path("assets/evidence/rom-database")
SOURCE=OUT/"r80-acnh303-multilingual-clothing-enriched.sqlite3.zst"
DEST=OUT/"r82-acnh303-villager-provenance.sqlite3"
FINAL=DEST.with_suffix(".sqlite3.zst")
LOCALES=("CNzh","TWzh","JPja","USen","EUen","KRko","EUde","EUfr","EUes","EUit","EUnl","EUru","USes","USfr")
F={
 "BirthMonth":("hash_9456B6A3","u8"),
 "BirthMDay":("hash_919EA52A","u8"),
 "UniqueID":("hash_54706054","u16"),
 "BromideItemID":("hash_71BF253B","s16"),
 "PosterItemID":("hash_0F640691","s16"),
 "HavokResName":("hash_4CE98793","string64"),
 "HelperBoneResName":("hash_C1FB0035","string64"),
 "InitLive":("hash_454B2ADC","u8"),
 "InitRemakeId":("hash_566F1D31","u8"),
 "NpcTalkType":("hash_33AF13E1","u8"),
 "NpcColor":("hash_41977699","u8"),
 "Tops":("hash_870F1E29","u16"),
 "Umbrella":("hash_BB9C816E","u16"),
 "ResName":("hash_48EF0398","string64"),
}
# Native mode: label files are 3.0.3 ROM content; raw types and hashes from
# matching BCSV header and CRC32(field+" "+type). Unverified hashes retained.
def sha(p):
 h=hashlib.sha256()
 with p.open("rb") as f:
  for b in iter(lambda:f.read(1024*1024),b""):h.update(b)
 return h.hexdigest()
def load_csv(p):
 with p.open("r",encoding="utf-8-sig",newline="") as f:
  r=csv.DictReader(f);return list(r),r.fieldnames
def unpack_db():
 if DEST.exists():DEST.unlink()
 with SOURCE.open("rb") as p, DEST.open("wb") as out:
  with zstandard.ZstdDecompressor().stream_reader(p) as stream:
   for b in iter(lambda:stream.read(1024*1024),b""):out.write(b)
def dump_csv(path,head,rows):
 with path.open("w",encoding="utf-8-sig",newline="") as f:
  w=csv.writer(f);w.writerow(head);w.writerows(rows)
def run():
 OUT.mkdir(parents=True,exist_ok=True)
 unpack_db()
 db=sqlite3.connect(DEST)
 db.row_factory=sqlite3.Row
 assert db.execute("SELECT count(*) FROM npc").fetchone()[0]==491
 assert db.execute("SELECT count(*) FROM item").fetchone()[0]==11178
 db.executescript("""
 CREATE TABLE npc_original_fields(
   npc_type TEXT NOT NULL,source_index INTEGER NOT NULL,
   raw_row_index INTEGER NOT NULL, original_row_offset INTEGER,
   raw_fields_json TEXT NOT NULL,
   original_rom_bcsv_path TEXT NOT NULL, original_rom_sha256 TEXT NOT NULL,
   unpacked_csv_path TEXT NOT NULL, unpacked_csv_sha256 TEXT NOT NULL,
   PRIMARY KEY(npc_type,source_index));
 CREATE TABLE npc_verified_metadata(
   npc_type TEXT NOT NULL,source_index INTEGER NOT NULL, res_name TEXT NOT NULL,
   unique_id INTEGER,birth_month INTEGER,birth_day INTEGER,
   bromide_item_id INTEGER,poster_item_id INTEGER,
   initial_live_raw INTEGER,initial_remake_id INTEGER,
   initial_tops_id INTEGER,initial_umbrella_id INTEGER,
   npc_talk_type_raw INTEGER,npc_color_raw INTEGER,
   havok_res_name TEXT,helper_bone_res_name TEXT,
   is_normal_resident_record INTEGER NOT NULL,
   can_be_invited_to_campsite INTEGER,
   can_be_adopted_from_other_island INTEGER,
   can_be_invited_with_amiibo INTEGER,
   can_move_in_island INTEGER,
   eligibility_evidence TEXT NOT NULL,
   PRIMARY KEY(npc_type,source_index));
 CREATE TABLE npc_image_source(
   category TEXT NOT NULL,source_rom_path TEXT NOT NULL,
   source_rom_sha256 TEXT, source_rom_bytes INTEGER,
   png_path TEXT NOT NULL, png_sha256 TEXT NOT NULL, native_BRTI_name TEXT,
   width INTEGER,height INTEGER,
   npc_res_name_exact TEXT, mapping_evidence TEXT NOT NULL,
   PRIMARY KEY(category,source_rom_path,png_path));
 CREATE INDEX npc_image_name_idx ON npc_image_source(npc_res_name_exact);
 CREATE TABLE npc_msbt_source(
   npc_type TEXT NOT NULL,source_index INTEGER NOT NULL,locale TEXT NOT NULL,
   msbt_member TEXT,msbt_label TEXT,
   original_locale_archive_path TEXT,
   original_locale_archive_sha256 TEXT,
   association_evidence TEXT NOT NULL,
   PRIMARY KEY(npc_type,source_index,locale));
 CREATE TABLE npc_field_dictionary(
   npc_type TEXT NOT NULL, field_hash TEXT NOT NULL,
   field_name_if_verified TEXT, field_type_if_verified TEXT,
   source_kind TEXT NOT NULL,description TEXT,
   PRIMARY KEY(npc_type,field_hash));
 """)
 originmap={}
 for typ,name in [("normal","NmlNpcParam"),("special","SpNpcParam")]:
  orig=ROOT/"Bcsv"/(name+".bcsv")
  decoded=SRC/(name+".csv")
  if not orig.is_file():raise FileNotFoundError("Original 3.0.3 ROM BCSV missing: "+str(orig))
  src_rows,columns=load_csv(decoded)
  originalsha=sha(orig);csvsha=sha(decoded)
  native=db.execute("SELECT source_index,res_name FROM npc WHERE npc_type=? ORDER BY source_index",(typ,)).fetchall()
  if len(native)!=len(src_rows) or len(native)!=(417 if typ=="normal" else 74):
   raise ValueError("Native NPC row counts changed: "+typ)
  expected_hashes={v[0]:(k,v[1]) for k,v in F.items()}
  for hdr in columns:
   if not hdr.startswith("hash_"):continue
   nm,ft=expected_hashes.get(hdr,(None,None))
   import zlib
   if nm and "hash_%08X"%(zlib.crc32((nm+" "+ft).encode())&0xffffffff)!=hdr:
    raise ValueError("BCSV known field CRC does not match "+hdr)
   db.execute("INSERT INTO npc_field_dictionary VALUES(?,?,?,?,?,?)",(
     typ,hdr,nm,ft,"original_ROM_BCSV_CRC32_verified" if nm else "original_hash_unresolved",
     "Non-invitation numeric field; no per-NPC ability proved" if nm else None))
  for nr,raw in zip(native,src_rows):
   ix=int(nr["source_index"]);rn=nr["res_name"]
   if int(raw["_row_index"])!=ix or raw["hash_48EF0398"]!=rn:
    raise ValueError("Original decoded row does not match resident identity: "+rn)
   db.execute("INSERT INTO npc_original_fields VALUES(?,?,?,?,?,?,?,?)",(
     typ,ix,int(raw["_row_index"]),int(raw["_row_offset_raw"]),
     json.dumps(raw,ensure_ascii=False,sort_keys=True),
     orig.as_posix(),originalsha,decoded.as_posix(),csvsha))
   def val(col):
    x=raw.get(F[col][0])
    return int(x) if x not in ("",None) else None
   def nameval(col):return raw.get(F[col][0]) or None
   db.execute("INSERT INTO npc_verified_metadata VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)",(
      typ,ix,rn,val("UniqueID"),val("BirthMonth"),val("BirthMDay"),
      val("BromideItemID"),val("PosterItemID"),val("InitLive"),val("InitRemakeId"),
      val("Tops"),val("Umbrella"),val("NpcTalkType"),val("NpcColor"),
      nameval("HavokResName"),nameval("HelperBoneResName"),int(typ=="normal"),
      None,None,None,None,"unknown_requires_per_character_native_runtime_and_game_context"))
   originmap[rn]=(typ,ix)
 count=Counter()
 for file in sorted(EVID.glob("batch-*.json")):
  evidence=json.loads(file.read_text("utf-8"))
  for e in evidence["results"]:
   if e.get("status")!="one_original_rom_texture_exported" or len(e.get("pngs",[]))!=1:
    raise ValueError("Not an authenticated single native image")
   p=e["pngs"][0]
   brti=p["native_brti_name_at_same_index_candidate"]
   # Never find a partial key: only exact original recognized source naming,
   # optional 'Poster'/'Bromide', no alias if trailing 2/variation suffix.
   token=brti
   for prefix in ("Poster","Bromide"):
    if token.startswith(prefix):token=token[len(prefix):]
   matched=token if token in originmap else None
   evidence_type="exact_native_BRTI_embeds_Npc_ResName" if matched else "original_image_unlinked"
   db.execute("INSERT INTO npc_image_source VALUES(?,?,?,?,?,?,?,?,?,?,?)",(
     e["category"],e["source"],e["original_source_sha256"],e["original_source_bytes"],
     p["output"],p["sha256"],brti,p["width"],p["height"],matched,evidence_type))
   count[e["category"]]+=1
 if sum(count.values())!=1934:raise ValueError("1934 real original images not all present")
 for npc_type,ix,resname in db.execute("SELECT npc_type,source_index,res_name FROM npc").fetchall():
  for locale in LOCALES:
   local=db.execute("SELECT msbt_label,association_status FROM npc_locale WHERE npc_type=? AND source_index=? AND locale=?",
          (npc_type,ix,locale)).fetchone()
   if not local:raise ValueError("missing locale row")
   label=local["msbt_label"];state=local["association_status"]
   member="Npc/STR_NNpcName.msbt" if state=="exact_ROM_NNpcName_label" else None
   sid=(ROOT/"Message"/("String_"+locale+".sarc.zs")).as_posix()
   dig=db.execute("SELECT sha256 FROM sources WHERE source_id=?",(sid,)).fetchone()
   if not dig:raise ValueError("original language source SHA missing")
   db.execute("INSERT INTO npc_msbt_source VALUES(?,?,?,?,?,?,?,?)",(
     npc_type,ix,locale,member,label,sid,dig[0],state))
 db.commit()
 summary={
   "game_version":"3.0.3","native_npc_rows":db.execute("SELECT count(*) FROM npc").fetchone()[0],
   "normal_resident_rows":db.execute("SELECT count(*) FROM npc WHERE npc_type='normal'").fetchone()[0],
   "special_npc_rows":db.execute("SELECT count(*) FROM npc WHERE npc_type='special'").fetchone()[0],
   "native_image_sources":sum(count.values()),"image_family_counts":dict(count),
   "images_exact_linked_by_BRTI_to_NPC_ResName":db.execute("SELECT count(*) FROM npc_image_source WHERE npc_res_name_exact IS NOT NULL").fetchone()[0],
   "original_BCSV_rows_complete":db.execute("SELECT count(*) FROM npc_original_fields").fetchone()[0],
   "native_named_fields_verified":db.execute("SELECT count(*) FROM npc_field_dictionary WHERE field_name_if_verified IS NOT NULL").fetchone()[0],
   "all_raw_hashed_NPC_fields_preserved":True,"can_adopt_or_invite_fields_undetermined":True,
   "locale_archive_source_records":db.execute("SELECT count(*) FROM npc_msbt_source").fetchone()[0],
   "original_location_root":ROOT.as_posix(),
   "never_guess_adoption_flags":True}
 # Retain untouched original row fields, original files+hashes, multiple locale names,
 # four original image paths and hashes in one long CSV/JSON.
 fieldnames=["npc_type","source_index","res_name","npc_key","unique_id","unique_id_hex",
  "name_CNzh","name_TWzh","name_JPja","name_USen","name_EUen","name_KRko",
  "name_EUde","name_EUfr","name_EUes","name_EUit","name_EUnl","name_EUru","name_USes","name_USfr",
  "birth_month","birth_day","birthday","bromide_item_id","poster_item_id",
  "initial_live_raw","initial_remake_id","initial_tops_id","initial_umbrella_id",
  "npc_talk_type_raw","npc_color_raw","havok_res_name","helper_bone_res_name",
  "is_normal_resident_record","can_be_invited_to_campsite","can_be_adopted_from_other_island",
  "can_be_invited_with_amiibo","can_move_in_island","eligibility_evidence",
  "original_bcsv_path","original_bcsv_sha256","decoded_csv_path","decoded_csv_sha256",
  "original_row_index","original_row_offset","raw_hashed_fields_json",
  "icon_png","icon_original_rom_path","icon_original_sha256",
  "photo_png","photo_original_rom_path","photo_original_sha256",
  "poster_png","poster_original_rom_path","poster_original_sha256",
  "bromide_item_png","bromide_item_original_rom_path","bromide_item_original_sha256",
  "original_names_msbt_CNzh","original_names_msbt_JPja","name_status","image_mapping_evidence"]
 full=[]
 for npc in db.execute("""SELECT n.npc_type,n.source_index,n.res_name,n.npc_key,
         m.*,o.* FROM npc n JOIN npc_verified_metadata m USING(npc_type,source_index)
         JOIN npc_original_fields o USING(npc_type,source_index)
         ORDER BY CASE n.npc_type WHEN 'normal' THEN 0 ELSE 1 END,n.source_index""").fetchall():
  d=dict(npc)
  row={k:None for k in fieldnames}
  row.update({"npc_type":d["npc_type"],"source_index":d["source_index"],"res_name":d["res_name"],
  "npc_key":d["npc_key"],"unique_id":d["unique_id"],
  "unique_id_hex":format(d["unique_id"],"04X") if d["unique_id"] is not None else None,
  "birth_month":d["birth_month"],"birth_day":d["birth_day"],
  "birthday":f"{d['birth_month']:02d}-{d['birth_day']:02d}" if d["birth_month"] and d["birth_day"] else None,
  "bromide_item_id":d["bromide_item_id"],"poster_item_id":d["poster_item_id"],
  "initial_live_raw":d["initial_live_raw"],"initial_remake_id":d["initial_remake_id"],
  "initial_tops_id":d["initial_tops_id"],"initial_umbrella_id":d["initial_umbrella_id"],
  "npc_talk_type_raw":d["npc_talk_type_raw"],"npc_color_raw":d["npc_color_raw"],
  "havok_res_name":d["havok_res_name"],"helper_bone_res_name":d["helper_bone_res_name"],
  "is_normal_resident_record":d["is_normal_resident_record"],
  "eligibility_evidence":d["eligibility_evidence"],
  "original_bcsv_path":d["original_rom_bcsv_path"],"original_bcsv_sha256":d["original_rom_sha256"],
  "decoded_csv_path":d["unpacked_csv_path"],"decoded_csv_sha256":d["unpacked_csv_sha256"],
  "original_row_index":d["raw_row_index"],"original_row_offset":d["original_row_offset"],
  "raw_hashed_fields_json":d["raw_fields_json"]})
  for lang in LOCALES:
   rr=db.execute("SELECT display_name,association_status FROM npc_locale WHERE npc_type=? AND source_index=? AND locale=?",
      (d["npc_type"],d["source_index"],lang)).fetchone()
   row["name_"+lang]=rr[0]
   if lang=="CNzh":row["name_status"]=rr[1]
  for lang in ("CNzh","JPja"):
   rr=db.execute("SELECT original_locale_archive_path,msbt_member FROM npc_msbt_source WHERE npc_type=? AND source_index=? AND locale=?",
       (d["npc_type"],d["source_index"],lang)).fetchone()
   row["original_names_msbt_"+lang]=(rr[0]+" :: "+rr[1]) if rr[1] else rr[0]+" :: unverified_NPC_label"
  imgs=db.execute("""SELECT category,png_path,source_rom_path,source_rom_sha256,mapping_evidence
    FROM npc_image_source WHERE npc_res_name_exact=? ORDER BY category,png_path""",(d["res_name"],)).fetchall()
  for category,png,src,srcsha,status in imgs:
   prefix={"icon":"icon","photo":"photo","poster":"poster","bromide_item":"bromide_item"}[category]
   if row[prefix+"_png"] is None:
    row[prefix+"_png"]=png
    row[prefix+"_original_rom_path"]=src
    row[prefix+"_original_sha256"]=srcsha
    row["image_mapping_evidence"]=status
  full.append(row)
 assert len(full)==491
 dump_csv(OUT/"r82-villagers-source-enriched.csv",fieldnames,([r[k] if r[k] is not None else "" for k in fieldnames] for r in full))
 (OUT/"r82-villagers-source-enriched.json").write_text(
   json.dumps({"schema":"acnh303_r82_npc_original_sources_v1","summary":summary,"rows":full},
       indent=2,ensure_ascii=False)+"\n","utf-8")
 img=db.execute("SELECT category,source_rom_path,source_rom_sha256,png_path,png_sha256,native_BRTI_name,npc_res_name_exact,mapping_evidence,width,height FROM npc_image_source ORDER BY category,source_rom_path").fetchall()
 dump_csv(OUT/"r82-villager-native-image-sources.csv",
 ["category","original_rom_path","original_rom_sha256","png_path","png_sha256","native_brti_name","npc_res_name_exact","mapping_evidence","width","height"],(tuple(z) for z in img))
 fd=db.execute("SELECT npc_type,field_hash,field_name_if_verified,field_type_if_verified,source_kind FROM npc_field_dictionary ORDER BY npc_type,field_hash")
 dump_csv(OUT/"r82-npc-bcsv-field-dictionary.csv",["npc_type","original_field_hash","field_name_verified","field_type_verified","evidence"],(tuple(x) for x in fd))
 db.execute("PRAGMA optimize");db.close()
 with DEST.open("rb") as f,FINAL.open("wb") as out:
  zstandard.ZstdCompressor(level=15,write_checksum=True,threads=0).copy_stream(f,out)
 sh=sha(DEST)
 with FINAL.open("rb") as f:
  dig=hashlib.sha256()
  with zstandard.ZstdDecompressor().stream_reader(f) as stream:
   for buf in iter(lambda:stream.read(1024*1024),b""):dig.update(buf)
 if dig.hexdigest()!=sh:raise ValueError("compressed SQLite roundtrip mismatch")
 summary.update({"uncompressed_sqlite_sha256":sh,"compressed_sqlite_sha256":sha(FINAL),
  "sqlite_integrity":"source_bytes_and_roundtrip_validated",
  "uncompressed_sqlite_size":DEST.stat().st_size})
 (OUT/"r82-npc-original-provenance-report.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n","utf-8")
 DEST.unlink()
 print(json.dumps(summary,ensure_ascii=False,indent=2))
if __name__=="__main__":run()
