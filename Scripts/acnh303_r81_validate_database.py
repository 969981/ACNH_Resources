#!/usr/bin/env python3
"""R81 independent read-only source-backed ACNH 3.0.3 SQLite verification."""
import hashlib,json,sqlite3,tempfile
from pathlib import Path
import zstandard
E=Path("assets/evidence/rom-database")
ARC=E/"r80-acnh303-multilingual-clothing-enriched.sqlite3.zst"
R80=E/"r80-group-names-evidence.json"
R77=E/"r77-database-build-and-evidence.json"
def sha(path):
    x=hashlib.sha256()
    with path.open("rb") as f:
        for b in iter(lambda:f.read(1024*1024),b""):x.update(b)
    return x.hexdigest()
def test():
    info=json.loads(R80.read_text("utf-8"));base=json.loads(R77.read_text("utf-8"))
    if sha(ARC)!=info["zstd_sha256"]:raise ValueError("R80 compressed SQLite SHA256 wrong")
    with tempfile.TemporaryDirectory(prefix="acnh-r81-") as t:
        dbfile=Path(t)/"native.sqlite3"
        with ARC.open("rb") as f,dbfile.open("wb") as out:
            with zstandard.ZstdDecompressor().stream_reader(f) as r:
                for chunk in iter(lambda:r.read(1024*1024),b""):out.write(chunk)
        if sha(dbfile)!=info["sqlite_sha256"]:
            raise ValueError("R80 decompressed original database SHA256 wrong")
        db=sqlite3.connect("file:"+str(dbfile)+"?mode=ro",uri=True)
        db.execute("PRAGMA query_only=ON")
        integrity=db.execute("PRAGMA integrity_check").fetchone()[0]
        if integrity!="ok":raise ValueError("SQLite integrity is NOT okay: "+str(integrity))
        def count(query):return db.execute(query).fetchone()[0]
        actual={
            "unique_item_ids":count("SELECT COUNT(*) FROM item"),
            "kinds":count("SELECT COUNT(*) FROM kind"),
            "npc_normal":count("SELECT COUNT(*) FROM npc WHERE npc_type='normal'"),
            "npc_special_rows":count("SELECT COUNT(*) FROM npc WHERE npc_type='special'"),
            "msbt_messages":count("SELECT COUNT(*) FROM msbt"),
            "locale_exact_npc":count("SELECT COUNT(*) FROM npc_locale WHERE association_status='exact_ROM_NNpcName_label'"),
            "item_locale_exact":count("SELECT COUNT(*) FROM item_locale WHERE association_status='unique_text_from_ROM_ID_suffix'"),
            "item_locale_group_candidates":count("SELECT COUNT(*) FROM item_locale WHERE association_status LIKE 'native_group_candidate_%'"),
            "item_locale_missing":count("SELECT COUNT(*) FROM item_locale WHERE display_name IS NULL"),
            "item_kind_exact":count("SELECT COUNT(*) FROM item WHERE base_kind_evidence='exact_ItemKind_label'"),
            "item_kind_prefix_candidate":count("SELECT COUNT(*) FROM item WHERE base_kind_evidence='prefix_candidate_not_proven'"),
            "item_kind_unmapped":count("SELECT COUNT(*) FROM item WHERE base_kind_evidence='unmapped_unknown'"),
        }
        expected={
           "unique_item_ids":11178,"kinds":189,"npc_normal":417,"npc_special_rows":74,
           "msbt_messages":408156,"locale_exact_npc":5838,"item_locale_exact":75712,
           "item_locale_group_candidates":72296,"item_locale_missing":8484,
           "item_kind_exact":6076,"item_kind_prefix_candidate":5050,
           "item_kind_unmapped":52}
        if actual!=expected:raise ValueError("R80 original database row coverage differs: "+str(actual))
        sample_npc=db.execute("""SELECT display_name FROM npc_locale
           WHERE locale='USen' AND (npc_type,source_index) IN
           (SELECT npc_type,source_index FROM npc WHERE res_name='NpcNmlAnt00')""").fetchone()[0]
        sample_cn=db.execute("""SELECT display_name FROM npc_locale
           WHERE locale='CNzh' AND (npc_type,source_index) IN
           (SELECT npc_type,source_index FROM npc WHERE res_name='NpcNmlAnt00')""").fetchone()[0]
        if (sample_npc,sample_cn)!=("Cyrano","阳明"):
            raise ValueError("Original bilingual villager join failure")
        lamp=db.execute("SELECT id,res_name FROM item WHERE id=3557").fetchone()
        if lamp!=(3557,"FtrBambooLamp"):raise ValueError("Original ItemParam 0DE5 mismatch")
        source_provenance=count("SELECT COUNT(*) FROM sources WHERE format='original_zstd_sarc'")
        if source_provenance!=14:raise ValueError("14 original Message source digests missing")
        db.close()
    report={"schema":"acnh303_r81_original_sqlite_integration_verification_v1",
      "version":"3.0.3","validated":actual,"sqlite_integrity":"ok",
      "original_14_archives_sha256_preserved":True,
      "native_rom_item_0x0DE5_FtrBambooLamp_verified":True,
      "NpcNmlAnt00_bilingual_verified":True,
      "R80_compressed_sha256":info["zstd_sha256"],
      "R80_uncompressed_sha256":info["sqlite_sha256"],
      "native_prefix_group_links_are_candidate_not_runtime_proof":True,
      "never_assume_unknown_stack_sentinel_is_65535":True,
      "native_pickup_rules_verified":False}
    path=E/"r81-native-sqlite-integration-check.json"
    path.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":test()
