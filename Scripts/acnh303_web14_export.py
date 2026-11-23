#!/usr/bin/env python3
"""Export ACNH 3.0.3 ROM-grounded 14-locale item/villager website databases.

Sources: R82 authenticated native SQLite (14 String locale archives, R80 clothes,
R82 original NPC + image provenance), R84 exact ItemParam BCSV and decoded
107-field CSV, raw ItemRemake/RecipeCraftParam CSV. Does NOT invent pickup,
transfer, game-native stack sentinel meaning, gender/species/personality, price,
recipe material mapping, or variant body/fabric semantics.

Never overwrite older web_db_multi.json/villager_db_multi.json: those have a
different item/recipe grain and 4-locales-only, and their 'variations' is JSON
stored inside a string. Optional explicit --legacy-* produces a separate bridge.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import gzip
import hashlib
import json
from pathlib import Path
import sqlite3
import tempfile

import zstandard

LOCALES = (
    "CNzh", "TWzh", "JPja", "USen", "EUen", "KRko", "EUde", "EUfr",
    "EUes", "EUit", "EUnl", "EUru", "USes", "USfr",
)
SCHEMA = "acnh303-14-locale-web-native-export-v1"
EXPECTED = {
    "items": 11178, "kinds": 189, "villagers": 417,
    "special_npc_rows": 74, "recipes": 924, "item_locales": 11178*14,
    "normal_npc_locales": 417*14,
    "original_item_fields": 107,
}
ITEM_SHA = "ff4637555a07a649070b19677b3c633c853d3ada7c784bb4de4cf35ca5ba26f0"
ORIGINAL_ITEM_SHA = "9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609"
ID = "hash_54706054"
RES = "hash_3FEBC642"
KIND = "hash_FC275E86"
ROM_NCA = "e10617820db06889e1638499478da0de_NCA/1/"
R82_REPORT = "assets/evidence/rom-database/r82-npc-original-provenance-report.json"


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024*1024), b""):
            h.update(chunk)
    return h.hexdigest()


def write_json(path: Path, data) -> str:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, sort_keys=True,
                               separators=(",", ":")) + "\n", encoding="utf8")
    return digest(path)


def rows_csv(path: Path):
    with path.open("r", encoding="utf-8-sig", newline="") as stream:
        yield from csv.DictReader(stream)


def unpack_verified_sqlite(archive: Path, report: Path, destination: Path) -> dict:
    proof = json.loads(report.read_text("utf8"))
    if (proof.get("game_version") != "3.0.3"
            or proof.get("normal_resident_rows") != 417
            or proof.get("special_npc_rows") != 74
            or proof.get("native_npc_rows") != 491
            or proof.get("all_raw_hashed_NPC_fields_preserved") is not True
            or not proof.get("sqlite_integrity") == "source_bytes_and_roundtrip_validated"):
        raise ValueError("R82 original verified baseline missing")
    compressed_hash = digest(archive)
    if compressed_hash != proof["compressed_sqlite_sha256"]:
        raise ValueError("R82 compressed original SQLite SHA drift")
    with archive.open("rb") as src, destination.open("wb") as dst:
        zstandard.ZstdDecompressor().copy_stream(src, dst)
    uncompressed_hash = digest(destination)
    if (uncompressed_hash != proof["uncompressed_sqlite_sha256"]
            or destination.stat().st_size != proof["uncompressed_sqlite_size"]):
        raise ValueError("R82 SQLite uncompressed original SHA/size drift")
    return {"compressed_sha256": compressed_hash,
            "sqlite_sha256": uncompressed_hash,
            "sqlite_bytes": destination.stat().st_size}


def verify_db(db: sqlite3.Connection) -> dict:
    db.row_factory = sqlite3.Row
    if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
        raise ValueError("real R82 SQLite integrity check failed")
    qs = {
        "items": "SELECT COUNT(*) FROM item",
        "kinds": "SELECT COUNT(*) FROM kind",
        "villagers": "SELECT COUNT(*) FROM npc WHERE npc_type='normal'",
        "special_npc_rows": "SELECT COUNT(*) FROM npc WHERE npc_type='special'",
        "item_locales": "SELECT COUNT(*) FROM item_locale",
        "normal_npc_locales": "SELECT COUNT(*) FROM npc_locale WHERE npc_type='normal'",
        "npc_original_rows": "SELECT COUNT(*) FROM npc_original_fields",
        "npc_verified_metadata": "SELECT COUNT(*) FROM npc_verified_metadata",
    }
    stats = {name: db.execute(sql).fetchone()[0] for name,sql in qs.items()}
    for name,expected in EXPECTED.items():
        if name in stats and stats[name] != expected:
            raise ValueError(f"native R82 table count drift {name}: {stats[name]} != {expected}")
    if stats["npc_original_rows"] != 491 or stats["npc_verified_metadata"] != 491:
        raise ValueError("R82 original NPC row provenance incomplete")
    return stats


def load_item_originals(csv_path: Path, raw_bcsv: Path, meta: Path):
    """R84 original every-row 107 hash field bytes; report independent of site."""
    if digest(csv_path) != ITEM_SHA or digest(raw_bcsv) != ORIGINAL_ITEM_SHA:
        raise ValueError("original 3.0.3 ItemParam BCSV or CSV SHA mismatch")
    m = json.loads(meta.read_text("utf8"))
    cols = m["columns"]
    if m["row_count"] != 11178 or m["row_size"] != 548 or len(cols) != 107:
        raise ValueError("R84 original 107-field BCSV schema changed")
    raw = raw_bcsv.read_bytes()
    header = {("hash_" + c["crc32"]): (c["offset"],c["width_hint"]) for c in cols}
    if ID not in header or RES not in header or KIND not in header:
        raise ValueError("ItemParam has lost a verified original field")
    rowset = {}
    for row in rows_csv(csv_path):
        uid = int(row[ID])
        index,off = int(row["_row_index"]),int(row["_row_offset_raw"])
        if (uid in rowset or index != len(rowset)
                or off < 0 or off+548 > len(raw)):
            raise ValueError("R84 row identity/offset changed")
        section = raw[off:off+548]
        id_offset,id_width = header[ID]
        if id_width != 2 or int.from_bytes(section[id_offset:id_offset+2],"little") != uid:
            raise ValueError("ItemParam original row bytes no longer match item ID")
        values = {key:row[key] for key in header}
        rowset[uid] = {
            "id": uid, "original_row_index": index, "original_row_offset": off,
            "original_row_sha256": hashlib.sha256(section).hexdigest(),
            "original_source_sha256": ORIGINAL_ITEM_SHA,
            "fields": values,
            "raw_field_hex": {key: section[ofs:ofs+width].hex()
                              for key,(ofs,width) in header.items()},
        }
    if len(rowset) != EXPECTED["items"]:
        raise ValueError("not all 11178 original ItemParam records byte-verified")
    return rowset, {
        "field_count": len(header), "source_sha256": ORIGINAL_ITEM_SHA,
        "decoded_csv_sha256": ITEM_SHA,
        "field_layout": [{"hash": key, "offset":ofs,"width":width}
                         for key,(ofs,width) in header.items()],
    }


def group_locales(db: sqlite3.Connection, table: str, *,
                  key_cols: tuple[str,...]) -> dict:
    if table not in ("item_locale","npc_locale"):
        raise ValueError("locale query table not whitelisted")
    grouped = defaultdict(dict)
    for row in db.execute("SELECT * FROM "+table):
        key = tuple(row[c] for c in key_cols)
        locale = row["locale"]
        if locale not in LOCALES or locale in grouped[key]:
            raise ValueError("unexpected or duplicate original locale")
        grouped[key][locale] = {
            "value": row["display_name"],
            "status": row["association_status"],
            "source_member": row["source_member"] if table=="item_locale" else
                ("Npc/STR_NNpcName.msbt" if row["association_status"]=="exact_ROM_NNpcName_label" else None),
            "source_label": row["source_label"] if table=="item_locale" else row["msbt_label"],
        }
    return grouped


def names14(index: dict, key: tuple) -> dict:
    value = index.get(key,{})
    if set(value) != set(LOCALES):
        raise ValueError("Missing authentic locale record from native SQLite")
    return {l:value[l] for l in LOCALES}


def item_stack(item: dict, kind: dict | None) -> dict:
    """Native ItemKind is type/category rule, not a pickup runtime oracle."""
    exact = item["base_kind_evidence"] == "exact_ItemKind_label"
    raw = kind["stack_s16"] if kind is not None else None
    if not exact or kind is None:
        return {
            "max_stack": None, "kind_raw_s16": raw,
            "status": "subtype_parent_candidate_unverified" if kind else "category_unknown",
        }
    # R77 proves native s16; it does NOT prove that sentinel -1 = 65535.
    if raw == -1:
        return {"max_stack": None, "kind_raw_s16": -1,
                "status": "signed_minus_one_special_runtime_unknown"}
    if raw < -1:
        return {"max_stack": None, "kind_raw_s16": raw,
                "status": "unexpected_negative_special_runtime_unknown"}
    return {"max_stack": 1 if raw == 0 else raw,
            "kind_raw_s16": raw,
            "status": "original_ItemKind_rule_not_runtime_behavior"}


def load_csv_sidecar(path: Path, *, expected: int | None = None) -> list:
    rows = list(rows_csv(path))
    if expected is not None and len(rows) != expected:
        raise ValueError("original BCSV decoded CSV count changed: " + str(path))
    return rows


def build(db: sqlite3.Connection, originals: dict, original_proof: dict,
          remake_rows: list, recipe_rows: list,
          *, legacy_items: list | None = None,
          legacy_villagers: list | None = None) -> tuple[dict,dict]:
    kind_map = {}
    categories = []
    for source in db.execute("SELECT * FROM kind ORDER BY label"):
        row = dict(source)
        flags = json.loads(row.pop("flags_json"))
        row["native_flags"] = flags
        row["flags_are_kind_rules_not_pickup_proof"] = True
        if row["label"] in kind_map: raise ValueError("duplicate native ItemKind")
        kind_map[row["label"]] = row
        categories.append(row)
    if len(categories) != EXPECTED["kinds"]:
        raise ValueError("not all 189 native ItemKind categories")
    locale_item = group_locales(db,"item_locale",key_cols=("item_id",))
    locale_npc = group_locales(db,"npc_locale",key_cols=("npc_type","source_index"))
    remake_by_id=defaultdict(list)
    for r in remake_rows:
        if r[ID]:
            remake_by_id[int(r[ID])].append({
                "original_row_index": int(r["_row_index"]),
                "original_hashed_fields": {k:v for k,v in r.items() if k.startswith("hash_")},
                "variation_visual_semantics_verified": False,
            })
    legacy_items = legacy_items or []
    legacy_villagers = legacy_villagers or []
    old_by_id = {}
    old_recipe = []
    for old in legacy_items:
        if not isinstance(old,dict) or type(old.get("id")) is not int:
            raise ValueError("old website record identity malformed")
        if old.get("recipe_id") and old.get("recipe_id") != 0:
            old_recipe.append(old)
            continue
        if old["id"] in old_by_id:
            raise ValueError("duplicate old native item ID in legacy web data")
        old_by_id[old["id"]] = old
    villager_old_by_res = {}
    for old in legacy_villagers:
        if (not isinstance(old,dict) or
                not isinstance(old.get("ResName"),str)):
            raise ValueError("old web villager identity malformed")
        if old["ResName"] in villager_old_by_res:
            raise ValueError("duplicate legacy villager ResName")
        villager_old_by_res[old["ResName"]] = old
    clothing = {
        row["item_id"]: dict(row) for row in
        db.execute("SELECT * FROM item_clothing_group_candidate")
    }
    items=[]
    raw_rows=[]
    recipe_ids = {int(r[ID]) for r in recipe_rows if r.get(ID,"").isdigit()}
    for source in db.execute("SELECT * FROM item ORDER BY id"):
        i = dict(source)
        ident = i["id"]
        r84 = originals.get(ident)
        if (r84 is None or r84["fields"][RES] != i["res_name"] or
                r84["fields"][KIND] != i["original_kind"]):
            raise ValueError("R82 SQLite item identity does not agree with raw original R84 BCSV")
        lang = names14(locale_item,(ident,))
        cat = kind_map.get(i["base_kind"])
        stack = item_stack(i,cat)
        matching_exact = i["base_kind_evidence"]=="exact_ItemKind_label"
        old = old_by_id.get(ident)
        web_variants = None
        old_category = old_price = old_type = None
        if old is not None:
            old_category,old_price,old_type = old.get("category"),old.get("price"),old.get("type")
            candidate=old.get("variations","[]")
            try: web_variants=json.loads(candidate) if isinstance(candidate,str) else candidate
            except (TypeError,ValueError): raise ValueError("legacy web variations JSON corrupt")
            if not isinstance(web_variants,list):raise ValueError("legacy variants must be a list")
        names={locale: lang[locale]["value"] for locale in LOCALES}
        labels={locale:lang[locale] for locale in LOCALES}
        item={
            "id":ident, "id_hex":i["id_hex"], "label":i["res_name"],
            "res_name":i["res_name"],
            "ItemKind": i["original_kind"], "original_kind":i["original_kind"],
            "base_kind":i["base_kind"], "base_kind_evidence":i["base_kind_evidence"],
            "category": old_category if old else (i["base_kind"] if matching_exact else None),
            "category_evidence": "legacy_web_category_only" if old else
                "original_ItemKind_exact" if matching_exact else "unknown",
            "category_candidate":i["base_kind"] if not matching_exact else None,
            "name":names["CNzh"], "name_jaJP":names["JPja"],
            "name_enEU":names["EUen"], "name_zhTW":names["TWzh"],
            "names":names,"name_evidence":labels,
            "name_USen":names["USen"],"name_KRko":names["KRko"],
            "max_stack":stack["max_stack"],"stack_rule":stack,
            "kind_flags": cat["native_flags"] if matching_exact and cat else None,
            "kind_flag_evidence": "exact_ItemKind_static_flags" if matching_exact and cat
                else "no_exact_native_Kind_flag_join",
            "can_pick_up":None,"pickup_status":"RUNTIME_UNVERIFIED",
            "can_drop":None,"can_take_to_other_island":None,
            "can_trade_online":None,"can_store":None,
            "price":old_price,"price_evidence":"legacy_web_only" if old else "unknown",
            "type":old_type,"type_evidence":"legacy_web_only" if old else "unknown",
            "recipe_id":None,"recipe_output_relation_status":"NOT_VERIFIED",
            "recipe_source_key_candidate":ident if ident in recipe_ids else None,
            "variations":web_variants,
            "variations_evidence":"legacy_web_not_rom_verified" if old else "no_verified_variant_enumeration",
            "remake_original_row_count":len(remake_by_id.get(ident,[])),
            "clothing_group_candidate":clothing.get(ident),
            "image_path":i["image_path"],"closet_image_path":i.get("closet_image_path"),
            "image_selection_evidence":i["image_selection_evidence"],
            "raw107_index":ident,
            "original_itemparam_sha256":ORIGINAL_ITEM_SHA,
            "source_version":"3.0.3",
        }
        items.append(item)
        raw_rows.append(r84)
    if len(items)!=EXPECTED["items"]:
        raise ValueError("Native 11,178 unique items not fully exported")

    images=defaultdict(list)
    for row in db.execute("SELECT * FROM npc_image_source"):
        d=dict(row)
        if d["npc_res_name_exact"] is not None:
            images[d["npc_res_name_exact"]].append(d)
    metadata={}
    for row in db.execute("SELECT * FROM npc_verified_metadata"):
        d=dict(row)
        metadata[(d["npc_type"],d["source_index"])]=d
    original_npcs={}
    for row in db.execute("SELECT * FROM npc_original_fields"):
        d=dict(row)
        original_npcs[(d["npc_type"],d["source_index"])]=d
    npcs=[]
    specials=[]
    for source in db.execute("SELECT * FROM npc ORDER BY npc_type,source_index"):
        n=dict(source)
        typ,index=n["npc_type"],n["source_index"]
        key=(typ,index)
        native_meta=metadata[key]
        native_original=original_npcs[key]
        lang=names14(locale_npc,key)
        names={locale:lang[locale]["value"] for locale in LOCALES}
        old=villager_old_by_res.get(n["res_name"])
        if old is not None and typ != "normal":
            raise ValueError("legacy villager record matched special NPC")
        date=(f"{native_meta['birth_month']:02d}-{native_meta['birth_day']:02d}"
              if native_meta.get("birth_month") and native_meta.get("birth_day") else None)
        record={
            "Label":n["npc_key"],"ResName":n["res_name"],
            "npc_type":typ,"source_index":index,
            "nameCN":names["CNzh"],"nameTW":names["TWzh"],
            "nameJP":names["JPja"],"nameEn":names["USen"],
            "names":names,"name_evidence":lang,
            "birthday":date,"birth_month":native_meta["birth_month"],
            "birth_day":native_meta["birth_day"],
            "unique_id":native_meta["unique_id"],
            "bromide_item_id":native_meta["bromide_item_id"],
            "poster_item_id":native_meta["poster_item_id"],
            "npc_talk_type_raw":native_meta["npc_talk_type_raw"],
            "npc_color_raw":native_meta["npc_color_raw"],
            "initial_tops_id":native_meta["initial_tops_id"],
            "initial_umbrella_id":native_meta["initial_umbrella_id"],
            "initial_live_raw":native_meta["initial_live_raw"],
            "initial_remake_id":native_meta["initial_remake_id"],
            "havok_res_name":native_meta["havok_res_name"],
            "helper_bone_res_name":native_meta["helper_bone_res_name"],
            "personality":None, "species":None, "gender":None,
            "personality_species_gender_evidence":"raw_BCSV_fields_unmapped_to_verified_native_semantics",
            "can_invite":None,"can_adopt":None,
            "can_amiibo_invite":None,
            "invitation_evidence":"RUNTIME_UNVERIFIED",
            "native_images":images.get(n["res_name"],[]),
            "original_bcsv_path":native_original["original_rom_bcsv_path"],
            "original_bcsv_sha256":native_original["original_rom_sha256"],
            "original_csv_sha256":native_original["unpacked_csv_sha256"],
            "raw_hashed_fields":json.loads(native_original["raw_fields_json"]),
            "source_version":"3.0.3",
            "legacy_label_match":bool(old and old.get("Label")==n["npc_key"]),
        }
        (npcs if typ=="normal" else specials).append(record)
    if len(npcs)!=417 or len(specials)!=74:
        raise ValueError("Native villager population incomplete")
    # Full recipe records preserve hashed columns, without guessed ingredient
    # or output meaning; recipe rows have a different grain from item records.
    recipe_data=[]
    for row in recipe_rows:
        recipe_data.append({
            "source_row_index":int(row["_row_index"]),
            "native_item_id_candidate":int(row[ID]) if row[ID].isdigit() else None,
            "native_hashed_fields":{k:v for k,v in row.items() if k.startswith("hash_")},
            "output_and_ingredients_semantics_verified":False,
        })
    remake_data=[
        {"item_id":ident,"rows":records,
         "item_id_linked_to_ItemParam":ident in originals,
         "body_fabric_runtime_variant_semantics_verified":False}
        for ident,records in sorted(remake_by_id.items())
    ]
    provenance={
        "schema":SCHEMA, "game_version":"3.0.3", "locales":list(LOCALES),
        "tables":{
            "item":len(items),"normal_villagers":len(npcs),"special_npcs":len(specials),
            "item_kind":len(categories),"recipes":len(recipe_data),
            "item_remake_raw_unique_keys":len(remake_data),
            "item_remake_linked_ids":sum(x["item_id_linked_to_ItemParam"] for x in remake_data),
            "item_remake_orphan_raw_keys":sum(not x["item_id_linked_to_ItemParam"] for x in remake_data),
            "item_raw107":len(raw_rows),
        },
        "locale_item_rows":sum(len(v) for v in locale_item.values()),
        "locale_npc_rows":sum(len(v) for v in locale_npc.values()),
        "item_locale_missing_names":sum(v["value"] is None for d in locale_item.values() for v in d.values()),
        "native_name_statuses":dict(Counter(v["status"] for d in locale_item.values() for v in d.values())),
        "npc_name_statuses":dict(Counter(v["status"] for d in locale_npc.values() for v in d.values())),
        "pickup_gameplay_verified":False,
        "stack_negative_sentinel_resolved":False,
        "all_107_item_field_meanings_verified":False,
        "recipe_ingredient_semantics_verified":False,
        "all_remake_body_fabric_semantics_verified":False,
        "villager_adoption_or_personality_mapped_verified":False,
        "special_NPC_14locale_names_fully_mapped":False,
        "real_legacy_item_records_received":len(legacy_items),
        "real_legacy_villager_records_received":len(legacy_villagers),
        "original_kind_flags_only_exact_base_kind":True,
    }
    result={
        "web_db_multi_v2.json":items,
        "villager_db_multi_v2.json":npcs,
        "special_npc_db_v2.json":specials,
        "itemkind_db_v2.json":categories,
        "recipe_db_v2.json":recipe_data,
        "item_remake_db_v2.json":remake_data,
    }
    extras={"raw107":raw_rows, "manifest":provenance, "legacy_recipes":old_recipe}
    return result,extras


def frontend_shards(out:Path,items:list,npcs:list) -> dict:
    """Small on-demand frontend files: one locale + base, not 51MB at startup."""
    item_core_fields=(
        "id","id_hex","label","ItemKind","original_kind","base_kind",
        "base_kind_evidence","category","category_evidence","category_candidate",
        "max_stack","stack_rule","kind_flags","kind_flag_evidence",
        "can_pick_up","pickup_status","price","price_evidence",
        "image_path","closet_image_path","image_selection_evidence",
        "remake_original_row_count",
    )
    npc_core_fields=(
        "Label","ResName","npc_type","source_index","birthday","birth_month",
        "birth_day","unique_id","bromide_item_id","poster_item_id",
        "npc_talk_type_raw","npc_color_raw","can_invite","can_adopt",
        "personality","gender","species","native_images",
    )
    artifacts={}
    for filename,rows,columns in (
        ("items_core_v2.json",items,item_core_fields),
        ("villagers_core_v2.json",npcs,npc_core_fields),
    ):
        compact=[{k:row[k] for k in columns} for row in rows]
        artifacts[filename]={"rows":len(compact),"sha256":write_json(out/filename,compact)}
    for locale in LOCALES:
        for prefix,rows,key in (("item",items,"id"),("villager",npcs,"Label")):
            filename=f"{prefix}_names_{locale}_v2.json"
            compact=[{
                key:row[key],
                "name":row["names"][locale],
                "status":row["name_evidence"][locale]["status"],
            } for row in rows]
            artifacts[filename]={"rows":len(compact),"sha256":write_json(out/filename,compact)}
    return artifacts


def export_archive(db:sqlite3.Connection, target:Path) -> tuple[int,str]:
    count=0
    with gzip.open(target,"wt",encoding="utf8",compresslevel=6) as out:
        for row in db.execute("SELECT * FROM msbt ORDER BY locale,member,text_index"):
            out.write(json.dumps(dict(row),ensure_ascii=False,separators=(",",":"))+"\n")
            count+=1
    return count,digest(target)


def run(a) -> dict:
    root=Path(a.root).resolve()
    out=Path(a.out).resolve()
    if out.is_relative_to(root/ROM_NCA) or out==root:
        raise ValueError("cannot overwrite original NCA paths")
    out.mkdir(parents=True,exist_ok=True)
    archive=root/a.db
    proof=root/R82_REPORT
    item_csv=root/a.item_csv
    original=root/a.item_bcsv
    item_meta=root/a.item_meta
    remake_csv=root/a.remake
    recipe_csv=root/a.recipes
    with tempfile.TemporaryDirectory(prefix="acnh303-web-14-") as temp:
        raw_db=Path(temp)/"verified.sqlite3"
        database_proof=unpack_verified_sqlite(archive,proof,raw_db)
        db=sqlite3.connect(f"file:{raw_db}?mode=ro",uri=True)
        db.row_factory=sqlite3.Row
        db.execute("PRAGMA query_only=ON")
        db_stats=verify_db(db)
        raws,field_proof=load_item_originals(item_csv,original,item_meta)
        remake=load_csv_sidecar(remake_csv)
        recipes=load_csv_sidecar(recipe_csv,expected=EXPECTED["recipes"])
        if (a.legacy_items is None) != (a.legacy_villagers is None):
            raise ValueError("both legacy website data files required for compatible overlay")
        legacy_i=json.loads(Path(a.legacy_items).read_text("utf8")) if a.legacy_items else None
        legacy_v=json.loads(Path(a.legacy_villagers).read_text("utf8")) if a.legacy_villagers else None
        result,extras=build(db,raws,field_proof,remake,recipes,
                            legacy_items=legacy_i,legacy_villagers=legacy_v)
        stats=extras["manifest"]
        stats["database_provenance"]=database_proof
        stats["verified_sqlite_tables"]=db_stats
        stats["R84_ItemParam_original_evidence"]=field_proof
        stats["additional_original_csv_sha256"]={
            "ItemRemake.csv":digest(remake_csv),"RecipeCraftParam.csv":digest(recipe_csv),
        }
        artifacts={}
        for name,contents in result.items():
            artifacts[name]={"rows":len(contents),"sha256":write_json(out/name,contents)}
        # The website loads core + one locale at a time; the 51MB item
        # evidence archive remains downloadable for research, never a
        # mandatory browser-first-load resource.
        artifacts.update(frontend_shards(
            out,result["web_db_multi_v2.json"],result["villager_db_multi_v2.json"]))
        # 107 original hash columns and exact raw byte slices are in a separate
        # *lossless* archive, not multiplied across every frontend item record.
        raw_path=out/"item_raw107_full_v2.jsonl.gz"
        with gzip.open(raw_path,"wt",encoding="utf8",compresslevel=6) as stream:
            for row in extras["raw107"]:
                stream.write(json.dumps(row,ensure_ascii=False,sort_keys=True,
                                        separators=(",",":"))+"\n")
        artifacts[raw_path.name]={"rows":len(extras["raw107"]),"sha256":digest(raw_path)}
        if a.include_msbt_archive:
            path=out/"all_original_14locale_msbt_v2.jsonl.gz"
            count,sha=export_archive(db,path)
            if count!=408156:
                raise ValueError("Original 14-locale MSBT row count changed")
            artifacts[path.name]={"rows":count,"sha256":sha}
        db.close()
        stats["artifacts"]=artifacts
        stats["original_database_preserved_read_only"]=True
        stats["original_web_files_never_overwritten"]=True
        write_json(out/"web_export_manifest_v2.json",stats)
        return stats


def main() -> None:
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--db",type=Path,default=Path(
        "assets/evidence/rom-database/r82-acnh303-villager-provenance.sqlite3.zst"))
    parser.add_argument("--item-csv",type=Path,default=Path("UnPack/1/Bcsv/ItemParam.csv"))
    parser.add_argument("--item-bcsv",type=Path,default=Path(
        ROM_NCA+"Bcsv/ItemParam.bcsv"))
    parser.add_argument("--item-meta",type=Path,default=Path("UnPack/1/Bcsv/ItemParam.json"))
    parser.add_argument("--remake",type=Path,default=Path("UnPack/1/Bcsv/ItemRemake.csv"))
    parser.add_argument("--recipes",type=Path,default=Path("UnPack/1/Bcsv/RecipeCraftParam.csv"))
    parser.add_argument("--legacy-items",type=Path)
    parser.add_argument("--legacy-villagers",type=Path)
    parser.add_argument("--include-msbt-archive",action="store_true")
    parser.add_argument("--out",type=Path,default=Path("artifacts/acnh303-web14"))
    args=parser.parse_args()
    summary=run(args)
    print(json.dumps({
        "schema":summary["schema"],"version":summary["game_version"],
        "locales":len(summary["locales"]),
        "tables":summary["tables"],
        "item_locale_missing_names":summary["item_locale_missing_names"],
        "pickup_gameplay_verified":False,
        "full_original_107_item_fields_losslessly_saved":True,
        "artifacts":{k:v["rows"] for k,v in summary["artifacts"].items()},
    },ensure_ascii=False))


if __name__=="__main__":
    main()
