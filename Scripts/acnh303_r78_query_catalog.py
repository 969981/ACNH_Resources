#!/usr/bin/env python3
"""Read-only ACNH 3.0.3 native item/villager SQLite query utility.

Examples:
  python Scripts/acnh303_r78_query_catalog.py stats
  python Scripts/acnh303_r78_query_catalog.py item 0DE5
  python Scripts/acnh303_r78_query_catalog.py search 竹 --locale CNzh --limit 10
  python Scripts/acnh303_r78_query_catalog.py npc ant00
  python Scripts/acnh303_r78_query_catalog.py categories --limit 20
  python Scripts/acnh303_r78_query_catalog.py unresolved --limit 20
"""
from __future__ import annotations
import argparse,json,sqlite3,sys
from pathlib import Path
DB=Path("assets/evidence/rom-database/r80-acnh303-multilingual-clothing-enriched.sqlite3")
def jsonrow(r):return dict(r) if r is not None else None
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--db",type=Path,default=DB)
    cmds=p.add_subparsers(dest="cmd",required=True)
    i=cmds.add_parser("item");i.add_argument("id",help="decimal ID or hex with 0x prefix (0DE5 accepted if contains A-F)")
    s=cmds.add_parser("search");s.add_argument("text");s.add_argument("--locale",default="CNzh");s.add_argument("--limit",type=int,default=30)
    n=cmds.add_parser("npc");n.add_argument("key",help="ant00 or original full ResName")
    c=cmds.add_parser("categories");c.add_argument("--limit",type=int,default=40)
    u=cmds.add_parser("unresolved");u.add_argument("--limit",type=int,default=40)
    cmds.add_parser("stats")
    a=p.parse_args()
    if not a.db.is_file():
        compressed=Path(str(a.db)+".zst")
        if compressed.is_file():
            try:
                import zstandard
            except ImportError:
                p.error("zstandard needed to restore full native SQLite: python -m pip install zstandard")
            print("Restoring byte-exact original SQLite from "+str(compressed),file=sys.stderr)
            a.db.parent.mkdir(parents=True,exist_ok=True)
            tmp=a.db.with_name(a.db.name+".tmp")
            with compressed.open("rb") as src, tmp.open("wb") as dest:
                with zstandard.ZstdDecompressor().stream_reader(src) as reader:
                    for chunk in iter(lambda:reader.read(1024*1024),b""):
                        dest.write(chunk)
            if tmp.stat().st_size<1024*1024:
                tmp.unlink(missing_ok=True)
                p.error("unexpectedly small native SQLite after decompression")
            tmp.replace(a.db)
        else:
            p.error("missing verified database or compressed archive: "+str(a.db))
    uri="file:"+str(a.db.resolve())+"?mode=ro"
    db=sqlite3.connect(uri,uri=True);db.row_factory=sqlite3.Row
    db.execute("PRAGMA query_only=ON")
    if a.cmd=="item":
        try:
            uid=int(a.id,16) if a.id.lower().startswith("0x") or any(ch in "abcdefABCDEF" for ch in a.id) else int(a.id)
        except ValueError:p.error("Invalid native item ID")
        record=jsonrow(db.execute("SELECT * FROM item WHERE id=?",(uid,)).fetchone())
        if record:
            record["localized_names"]=[jsonrow(x) for x in db.execute(
                "SELECT locale,display_name,association_status,candidate_count,source_member,source_label FROM item_locale WHERE item_id=? ORDER BY locale",(uid,))]
            if record["base_kind"]:
                k=jsonrow(db.execute("SELECT * FROM kind WHERE label=?",(record["base_kind"],)).fetchone())
                if k:k["flags"]=json.loads(k.pop("flags_json"));record["kind_details"]=k
        out=record
    elif a.cmd=="search":
        if not 1<=a.limit<=200:p.error("limit must be between 1 and 200")
        out=[jsonrow(r) for r in db.execute("""SELECT i.id,i.id_hex,i.res_name,i.original_kind,i.base_kind,
          il.locale,il.display_name,il.association_status,i.image_path
          FROM item_locale il JOIN item i ON i.id=il.item_id
          WHERE il.locale=? AND (il.display_name LIKE ? OR i.res_name LIKE ?)
          ORDER BY i.id LIMIT ?""",(a.locale,"%"+a.text+"%","%"+a.text+"%",a.limit))]
    elif a.cmd=="npc":
        key=a.key.lower()
        out=[jsonrow(r) for r in db.execute("""SELECT n.npc_type,n.source_index,n.res_name,n.npc_key,
          nl.locale,nl.display_name,nl.association_status FROM npc n
          LEFT JOIN npc_locale nl ON n.npc_type=nl.npc_type AND n.source_index=nl.source_index
          WHERE LOWER(n.res_name)=? OR n.npc_key=? ORDER BY nl.locale""",(key,key))]
    elif a.cmd=="categories":
        if not 1<=a.limit<=200:p.error("limit must be between 1 and 200")
        out=[{**jsonrow(r),"flags":json.loads(r["flags_json"])} for r in db.execute(
            "SELECT * FROM kind ORDER BY label LIMIT ?",(a.limit,))]
        for row in out:row.pop("flags_json")
    elif a.cmd=="unresolved":
        if not 1<=a.limit<=200:p.error("limit must be between 1 and 200")
        out=[jsonrow(r) for r in db.execute("""SELECT id,id_hex,res_name,original_kind,base_kind,
            base_kind_evidence,stack_evidence FROM item
            WHERE base_kind_evidence!='exact_ItemKind_label' ORDER BY id LIMIT ?""",(a.limit,))]
    else:
        out={
         "items":db.execute("SELECT COUNT(*) FROM item").fetchone()[0],
         "categories":db.execute("SELECT COUNT(*) FROM kind").fetchone()[0],
         "normal_npc":db.execute("SELECT COUNT(*) FROM npc WHERE npc_type='normal'").fetchone()[0],
         "special_npc_rows":db.execute("SELECT COUNT(*) FROM npc WHERE npc_type='special'").fetchone()[0],
         "raw_locale_strings":db.execute("SELECT COUNT(*) FROM msbt").fetchone()[0],
         "item_locale_unique":db.execute("SELECT COUNT(*) FROM item_locale WHERE association_status='unique_text_from_ROM_ID_suffix'").fetchone()[0],
         "item_locale_ambiguous":db.execute("SELECT COUNT(*) FROM item_locale WHERE association_status='ambiguous_native_name_labels'").fetchone()[0],
         "native_npc_locale_exact":db.execute("SELECT COUNT(*) FROM npc_locale WHERE association_status='exact_ROM_NNpcName_label'").fetchone()[0],
         "item_kind_exact":db.execute("SELECT COUNT(*) FROM item WHERE base_kind_evidence='exact_ItemKind_label'").fetchone()[0],
         "item_kind_prefix_candidates":db.execute("SELECT COUNT(*) FROM item WHERE base_kind_evidence='prefix_candidate_not_proven'").fetchone()[0],
         "item_kind_unmapped":db.execute("SELECT COUNT(*) FROM item WHERE base_kind_evidence='unmapped_unknown'").fetchone()[0],
         "clothing_group_candidates":db.execute("SELECT COUNT(*) FROM item_clothing_group_candidate").fetchone()[0] if db.execute("SELECT count(*) FROM sqlite_master WHERE type='table' AND name='item_clothing_group_candidate'").fetchone()[0] else 0,
         "item_locale_clothing_group_candidate":db.execute("SELECT COUNT(*) FROM item_locale WHERE association_status LIKE 'native_group_candidate_%'").fetchone()[0],
        }
    print(json.dumps(out,ensure_ascii=False,indent=2))
    db.close()
if __name__=="__main__":main()
