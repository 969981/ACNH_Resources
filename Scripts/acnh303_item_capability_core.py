#!/usr/bin/env python3
"""ADB ItemCapabilityCore V1: ROM static rules and separate delivery policy.

Never equates CanPut with pickup, or an unverified prefix with native kind.
Inputs are checked against raw BCSV; outputs are new files, not ROM edits.
"""
import argparse
import collections
import csv
import hashlib
import json
import sqlite3
import tempfile
import zlib
from pathlib import Path

NCA = "e10617820db06889e1638499478da0de_NCA/1/Bcsv"
DEC = "UnPack/1/Bcsv"
ID, LABEL, KIND, NAME, STACK = ("hash_54706054", "hash_87BF00E8",
    "hash_FC275E86", "hash_3FEBC642", "hash_4C9BA961")
FLAGS = ("CanBury", "CanEat", "CanFtr", "CanGift", "CanNpcBirthdayPresent",
    "CanNpcPresent", "CanPlant", "CanPut", "CanPutWallAndFloor", "CanSell",
    "CanSellSimple", "CanSetChest", "CanSetCloset", "CanSetInTrashBox",
    "CanSetItem", "CanUsePhotoStudio", "CantTakeOver", "IsCollectAchievement")
PARENTS = {"Ftr_": "Ftr", "Top_": "Tops", "Onepiece_": "OnePiece",
           "Bottoms_": "Bottoms", "Shoes_": "Shoes"}
RUNTIME = ("can_inventory", "can_native_drop", "can_native_place",
           "can_spawn_dropped", "can_visitor_pickup", "can_take_home",
           "can_wrap", "can_discard", "can_storage", "max_stack", "free_param_type")

def sha(b):
    return hashlib.sha256(b).hexdigest()

def flag_hash(n):
    return f"hash_{zlib.crc32((n+' u8').encode()) & 0xffffffff:08X}"

def load_table(root, name, count, size, check_fields):
    cp, mp, rp = (root/DEC/(name+".csv"), root/DEC/(name+".json"),
                  root/NCA/(name+".bcsv"))
    meta = json.loads(mp.read_text("utf-8"))
    raw = rp.read_bytes()
    assert meta["row_count"] == count and meta["row_size"] == size
    fields = {c["name"]: c for c in meta["columns"]}
    with cp.open(encoding="utf-8-sig", newline="") as f:
        rows = list(csv.DictReader(f))
    assert len(rows) == count
    seen = set()
    previous = None
    for idx, r in enumerate(rows):
        off = int(r["_row_offset_raw"])
        assert int(r["_row_index"]) == idx and 0 <= off <= len(raw)-size
        if previous is not None:
            assert off == previous + size
        previous = off
        for field, typ in check_fields.items():
            c = fields[field]
            pos, width = c["offset"], c["width_hint"]
            assert 0 <= pos < pos+width <= size
            b = raw[off+pos:off+pos+width]
            if typ == "text":
                val = b.split(b"\0", 1)[0].decode("utf-8")
                assert val == r[field], (name, idx, field, val, r[field])
            else:
                assert width == typ and int.from_bytes(b, "little") == int(r[field]), (name, idx, field)
        ident = int(r[ID])
        assert ident not in seen
        seen.add(ident)
        r["_row_sha256"] = sha(raw[off:off+size])
    sources = {str(p.relative_to(root)): sha(p.read_bytes()) for p in (cp,mp,rp)}
    return rows, sources

def join_kind(raw, kinds):
    label = raw.removeprefix("Kind_")
    if label in kinds:
        return label, "exact_ItemKind_label"
    for prefix, parent in PARENTS.items():
        if label.startswith(prefix) and parent in kinds:
            return parent, "prefix_candidate_not_proven"
    return None, "unmapped_unknown"

def s16(n):
    assert 0 <= n <= 65535
    return n-65536 if n >= 32768 else n

def rule_record(r):
    flags = {n: int(r[flag_hash(n)]) for n in FLAGS}
    assert all(v in (0,1) for v in flags.values())
    return {"label":r[LABEL], "kind_id":int(r[ID]),
            "source_row_index":int(r["_row_index"]), "source_row_offset":int(r["_row_offset_raw"]),
            "source_row_sha256":r["_row_sha256"], "stack_raw_u16":int(r[STACK]),
            "stack_s16":s16(int(r[STACK])), "flags":flags,
            "raw_fields":{k:v for k,v in r.items() if k.startswith("hash_")}}

def item_record(r, kinds):
    parent, evidence = join_kind(r[KIND], kinds)
    rule = kinds[parent] if evidence == "exact_ItemKind_label" else None
    flags = rule["flags"] if rule else None
    raw = rule["stack_s16"] if rule else None
    candidate = None if flags is None else bool(flags["CanSetItem"])
    # CanPut is NOT a delivery filter. TakeOver is not automatically a travel ban.
    label = r[KIND].removeprefix("Kind_")
    reasons = []
    if candidate is None: reasons.append("kind_mapping_unproven")
    elif not candidate: reasons.append("static_CanSetItem_zero")
    if flags and flags["CantTakeOver"]: reasons.append("takeover_restriction_needs_context")
    if label.startswith("Dummy") or "Quest" in label or label in ("HousePost","ShopTorso"):
        reasons.append("special_object_review")
    if candidate and not reasons:
        policy = "candidate"
        reasons.append("static_inventory_candidate_not_runtime_verified")
    else:
        policy = "review"
    return {"item_id":int(r[ID]), "internal_name":r[NAME],
            "original_kind":r[KIND], "base_kind":parent,
            "base_kind_evidence":evidence, "static_flags":flags,
            "inventory_static_candidate":candidate,
            "max_stack_raw_s16":raw,
            "max_stack_candidate":raw if raw is not None and raw>0 else 1 if raw==0 else None,
            "stack_evidence":("positive_rom_rule" if raw>0 else "zero_single_item_candidate" if raw==0 else "special_sentinel") if raw is not None else "kind_mapping_unproven",
            "policy":policy, "policy_reasons":reasons,
            "source_row_index":int(r["_row_index"]), "source_row_offset":int(r["_row_offset_raw"]),
            "source_row_sha256":r["_row_sha256"], **dict.fromkeys(RUNTIME)}

def selftest():
    flags = {x:0 for x in FLAGS}
    flags["CanSetItem"] = 1
    kinds = {"Fish":{"flags":flags,"stack_s16":0}, "Ftr":{"flags":flags,"stack_s16":-1}}
    r = {ID:"42",NAME:"test",KIND:"Kind_Fish","_row_index":"0","_row_offset_raw":"0","_row_sha256":"x"}
    x = item_record(r,kinds)
    assert x["policy"]=="candidate" and x["static_flags"]["CanPut"]==0
    assert x["can_visitor_pickup"] is None and x["max_stack"] is None
    x = item_record(dict(r, **{KIND:"Ftr_1x1_Floor"}),kinds)
    assert x["base_kind"]=="Ftr" and x["static_flags"] is None and x["policy"]=="review"
    x = item_record(dict(r, **{KIND:"Kind_Ftr"}),kinds)
    assert x["max_stack_raw_s16"]==-1 and x["max_stack_candidate"] is None
    assert s16(65535)==-1
    print("ADB synthetic policy tests passed")

def jsonwrite(p, o):
    p.write_text(json.dumps(o, ensure_ascii=False, sort_keys=True, separators=(",",":"))+"\n", encoding="utf-8")

def run(root,out):
    root, out = root.resolve(),out.resolve()
    kr, ks = load_table(root,"ItemKind",189,152,{ID:2,LABEL:"text",STACK:2,**{flag_hash(n):1 for n in FLAGS}})
    ir, ins = load_table(root,"ItemParam",11178,548,{ID:2,KIND:"text",NAME:"text"})
    kinds = {r[LABEL]:rule_record(r) for r in kr}
    assert len(kinds)==189
    items = sorted((item_record(r,kinds) for r in ir),key=lambda x:x["item_id"])
    assert len(items)==len({x["item_id"] for x in items})==11178
    assoc=collections.Counter(x["base_kind_evidence"] for x in items)
    assert dict(assoc)=={"exact_ItemKind_label":6076,"prefix_candidate_not_proven":5050,"unmapped_unknown":52}, assoc
    flag_groups=collections.Counter(
        "/".join(str(x["static_flags"][n]) for n in ("CanSetItem","CanPut","CantTakeOver"))
        if x["static_flags"] is not None else "unresolved" for x in items)
    assert dict(flag_groups)=={"1/1/0":4987,"unresolved":5102,"1/0/0":548,"0/0/0":454,"0/1/0":19,"1/0/1":64,"1/1/1":4},flag_groups
    gaps=collections.Counter(x["original_kind"] for x in items if x["base_kind_evidence"]!="exact_ItemKind_label")
    assert len(gaps)==25
    out.mkdir(parents=True, exist_ok=True)
    # Do not overwrite a database in use. Write to a fresh temporary directory.
    with tempfile.TemporaryDirectory(dir=out) as tmp:
        p=Path(tmp)
        db=sqlite3.connect(p/"acnh_item_behavior.sqlite3")
        db.execute("PRAGMA foreign_keys=ON")
        db.executescript("""
        CREATE TABLE source(path TEXT PRIMARY KEY, sha256 TEXT NOT NULL);
        CREATE TABLE item_kind_rule(label TEXT PRIMARY KEY, kind_id INTEGER UNIQUE NOT NULL,
          source_row_index INTEGER NOT NULL, stack_s16 INTEGER NOT NULL, flags_json TEXT NOT NULL, record_json TEXT NOT NULL);
        CREATE TABLE item_identity(item_id INTEGER PRIMARY KEY, internal_name TEXT NOT NULL,
          original_kind TEXT NOT NULL, base_kind TEXT REFERENCES item_kind_rule(label),
          base_kind_evidence TEXT NOT NULL, source_row_index INTEGER NOT NULL UNIQUE,
          source_row_sha256 TEXT NOT NULL);
        CREATE TABLE item_capability(item_id INTEGER PRIMARY KEY REFERENCES item_identity(item_id),
          inventory_static_candidate INTEGER, static_flags_json TEXT, max_stack_raw_s16 INTEGER,
          max_stack_candidate INTEGER, stack_evidence TEXT NOT NULL,
          can_inventory INTEGER, can_native_drop INTEGER, can_native_place INTEGER,
          can_spawn_dropped INTEGER, can_visitor_pickup INTEGER, can_take_home INTEGER,
          can_wrap INTEGER, can_discard INTEGER, can_storage INTEGER, max_stack INTEGER, free_param_type TEXT);
        CREATE TABLE item_delivery_policy(item_id INTEGER PRIMARY KEY REFERENCES item_identity(item_id),
          policy TEXT NOT NULL CHECK(policy IN ('candidate','review','enabled','blocked')), reasons_json TEXT NOT NULL);
        CREATE TABLE item_observation(observation_id TEXT PRIMARY KEY, item_id INTEGER REFERENCES item_identity(item_id),
          game_version TEXT NOT NULL, build_id TEXT NOT NULL, context_json TEXT NOT NULL,
          before_record_hex TEXT, after_record_hex TEXT, trace_sha256 TEXT NOT NULL, result_json TEXT NOT NULL);
        CREATE INDEX item_kind_idx ON item_identity(original_kind);
        CREATE INDEX delivery_policy_idx ON item_delivery_policy(policy);
        """)
        db.executemany("INSERT INTO source VALUES (?,?)",sorted((ks|ins).items()))
        db.executemany("INSERT INTO item_kind_rule VALUES (?,?,?,?,?,?)",
            [(k["label"],k["kind_id"],k["source_row_index"],k["stack_s16"],json.dumps(k["flags"]),json.dumps(k,ensure_ascii=False)) for k in kinds.values()])
        for x in items:
            ident=x["item_id"]
            db.execute("INSERT INTO item_identity VALUES (?,?,?,?,?,?,?)",
                (ident,x["internal_name"],x["original_kind"],x["base_kind"],x["base_kind_evidence"],x["source_row_index"],x["source_row_sha256"]))
            db.execute("INSERT INTO item_capability VALUES ("+",".join("?" for _ in range(6+len(RUNTIME)))+")",
                (ident,x["inventory_static_candidate"],json.dumps(x["static_flags"]) if x["static_flags"] is not None else None,
                 x["max_stack_raw_s16"],x["max_stack_candidate"],x["stack_evidence"],*(x[n] for n in RUNTIME)))
            db.execute("INSERT INTO item_delivery_policy VALUES (?,?,?)",(ident,x["policy"],json.dumps(x["policy_reasons"])))
        db.commit()
        assert db.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
        assert not db.execute("PRAGMA foreign_key_check").fetchall()
        assert db.execute("SELECT count(*) FROM item_identity").fetchone()[0]==11178
        assert db.execute("SELECT count(*) FROM item_delivery_policy WHERE policy='enabled'").fetchone()[0]==0
        assert db.execute("SELECT count(*) FROM item_capability WHERE "+" OR ".join(n+" IS NOT NULL" for n in RUNTIME)).fetchone()[0]==0
        db.close()
        jsonwrite(p/"item_capabilities_v1.json",items)
        jsonwrite(p/"item_kind_rules_v1.json",list(kinds.values()))
        jsonwrite(p/"item_delivery_catalog_v1.json",[{"item_id":x["item_id"],"policy":x["policy"],"reasons":x["policy_reasons"]} for x in items])
        jsonwrite(p/"item_kind_mapping_gaps.json",dict(sorted(gaps.items())))
        summary={"schema":"acnh-item-capability-core-v1","game_version":"3.0.3",
            "item_count":len(items),"kind_count":len(kinds),"kind_associations":dict(assoc),
            "flag_groups":dict(flag_groups),"policy_counts":dict(collections.Counter(x["policy"] for x in items)),
            "runtime_verified":False,"runtime_capability_fields_all_null":True,
            "source_sha256":ks|ins,"files":{f.name:sha(f.read_bytes()) for f in sorted(p.iterdir())}}
        jsonwrite(p/"manifest.json",summary)
        for f in sorted(p.iterdir()):
            f.replace(out/f.name)
    print(json.dumps(summary,ensure_ascii=False,indent=2))

if __name__=="__main__":
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--out",type=Path)
    parser.add_argument("--selftest",action="store_true")
    a=parser.parse_args()
    if a.selftest: selftest()
    else:
        if a.out is None: parser.error("--out required")
        run(a.root,a.out)
