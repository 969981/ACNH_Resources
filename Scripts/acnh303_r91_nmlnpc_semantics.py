#!/usr/bin/env python3
"""R91: enumerate and cross-check ACNH 3.0.3 native normal-villager fields.

No external villager database is an authority. Native BCSV enums and source bytes
are independently checked; the Ghidra consumer chain remains a separate gate.
Outputs are add-on research data, not an overwrite of web_db_multi_v2.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import re
import zlib

NPC_HASH = "hash_04F52F6A"   # cross-referenced to NpcLooks
RES_HASH = "hash_48EF0398"   # ResName, CRC32-verified in R82
LOOK_LABEL = "hash_87BF00E8" # native NpcLooksParam Label
LOOK_ID = "hash_54706054"    # native NpcLooksParam UniqueID
RACE_LABEL = "hash_2F1B930D" # packed 8-byte ASCII in decoded race CSV
EXPECTED_NML_BCSV_SHA256 = "5a68a96c7962058ec8119536b53a713acd125747d2c6f2c057d8c788d5f3a797"
NCA = "e10617820db06889e1638499478da0de_NCA/1/Bcsv/NmlNpcParam.bcsv"
CSV = "UnPack/1/Bcsv"
PERSONALITY_GLOSS = {
    "boy_normal": "lazy", "boy_active": "jock",
    "boy_pride": "cranky", "boy_snobby": "smug",
    "girl_normal": "normal", "girl_active": "peppy",
    "girl_pride": "snooty", "girl_big_sis": "sisterly",
}
EXPECTED_LOOKS = list(PERSONALITY_GLOSS)
GENDER_GROUP = {"boy": "male", "girl": "female"}
NATIVE_CANDIDATES = [
    {"address": "0x020FD7D8", "path": "derived/3.0.3/ghidra12.2/c/d7/020fd7d8.c",
     "evidence": "looks index returned from resident key through lookup, range 0..7; missing key returns 8 or fallback 0"},
    {"address": "0x025E50AC", "path": "derived/3.0.3/ghidra12.2/c/50/025e50ac.c",
     "evidence": "calls FUN_020fd7d8 and formats NNPCLooks_%s"},
    {"address": "0x025E6090", "path": "derived/3.0.3/ghidra12.2/c/60/025e6090.c",
     "evidence": "exports NNPCLooks for ordinary NPC state"},
    {"address": "0x0285C334", "path": "derived/3.0.3/ghidra12.2/c/c3/0285c334.c",
     "evidence": "uses looks index 0..7 to select a label in STR_Favorite"},
    {"address": "0x007C69C0", "path": "derived/3.0.3/ghidra12.2/c/69/007c69c0.c",
     "evidence": "contains NpcLooks enumeration registration string; no proof of BCSV-to-runtime field assignment"},
]


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def table(path: Path) -> tuple[list[dict[str, str]], list[str]]:
    with path.open("r", encoding="utf-8-sig", newline="") as f:
        reader = csv.DictReader(f)
        fields = reader.fieldnames or []
        rows = list(reader)
    if not fields or any(None in r for r in rows):
        raise ValueError(f"CSV header or row width invalid: {path}")
    return rows, fields


def packed_label(value: str) -> str:
    """The legacy CSV decoder exposes the 8-byte race label as decimal u64."""
    n = int(value)
    if not 0 <= n < (1 << 64):
        raise ValueError(f"Invalid 8-byte race label: {value}")
    return n.to_bytes(8, "little").split(b"\\x00", 1)[0].decode("ascii")


def enumerate_fields(rows: list[dict], fields: list[str]) -> list[dict]:
    result = []
    for field in fields:
        if not field.startswith("hash_"):
            continue
        counts = Counter(r[field] for r in rows)
        numeric = all(re.fullmatch(r"-?\\d+", v) for v in counts)
        result.append({
            "field_hash": field,
            "distinct_values": len(counts),
            "missing_rows": sum(n for v, n in counts.items() if v == ""),
            "numeric": numeric,
            "top_values": [{"raw_value": k, "rows": v}
                           for k, v in sorted(counts.items(), key=lambda x: (-x[1], x[0]))[:20]],
            "semantic_proven": field in (NPC_HASH, RES_HASH),
        })
    return result


def build(root: Path) -> tuple[dict, dict, list[dict]]:
    source = root / CSV
    npc, headers = table(source / "NmlNpcParam.csv")
    looks, _ = table(source / "NpcLooksParam.csv")
    races, _ = table(source / "NmlNpcRaceParam.csv")
    meta = json.loads((source / "NmlNpcParam.json").read_text("utf-8"))
    if len(npc) != 417 or len(looks) != 8 or len(races) != 110:
        raise ValueError("Native NmlNpcParam/NpcLooksParam/NmlNpcRaceParam row count drift")
    if meta["row_count"] != 417 or meta["row_size"] != 288:
        raise ValueError("NmlNpcParam raw BCSV metadata does not match")
    if meta["column_count"] != 41 or len([x for x in headers if x.startswith("hash_")]) != 41:
        raise ValueError("Unexpected native NPC column count")

    original = root / NCA
    raw = original.read_bytes()
    if digest(original) != EXPECTED_NML_BCSV_SHA256 or len(raw) != 120452:
        raise ValueError("R83 original 3.0.3 NPC source SHA/size drift")
    meta_cols = {"hash_" + c["crc32"]: c for c in meta["columns"]}
    if NPC_HASH not in meta_cols or RES_HASH not in meta_cols:
        raise ValueError("Missing native NpcLooks/ResName columns")
    looks_offset = meta_cols[NPC_HASH]["offset"]
    res_offset = meta_cols[RES_HASH]["offset"]
    res_width = meta_cols[RES_HASH]["width_hint"]

    by_hash = {}
    for row in looks:
        name = row[LOOK_LABEL]
        index = int(row[LOOK_ID])
        if name not in PERSONALITY_GLOSS or index != EXPECTED_LOOKS.index(name):
            raise ValueError(f"Unexpected original NpcLooks native Label/ID: {name}: {index}")
        # The BCSV enumeration is CRC32('Boy_normal'), not CRC32('boy_normal').
        native_enum = name[0].upper() + name[1:]
        raw_code = zlib.crc32(native_enum.encode("ascii")) & 0xFFFFFFFF
        if raw_code in by_hash:
            raise ValueError("CRC32 collision in original NpcLooks table")
        by_hash[raw_code] = (name, index)
    if len(by_hash) != 8:
        raise ValueError("Did not recover all eight original NpcLooks enums")

    race_rows = {}
    for row in races:
        label = packed_label(row[RACE_LABEL])
        if label:
            race_rows.setdefault(label.lower(), []).append(int(row["_row_index"]))
    # 35 normal-resident race codes, not all 110 rows in the wider race table.
    records = []
    ids, names = set(), set()
    for expected_index, row in enumerate(npc):
        index = int(row["_row_index"])
        offset = int(row["_row_offset_raw"])
        if index != expected_index or offset != 356 + index * 288:
            raise ValueError("NmlNpcParam row index / original byte offset drift")
        segment = raw[offset:offset + 288]
        if len(segment) != 288:
            raise ValueError("Original NPC BCSV row truncated")
        code = int(row[NPC_HASH])
        if int.from_bytes(segment[looks_offset:looks_offset + 4], "little") != code:
            raise ValueError(f"Original raw NpcLooks bytes disagree at row {index}")
        name = row[RES_HASH]
        decoded = segment[res_offset:res_offset + res_width].split(b"\\x00", 1)[0].decode("ascii")
        if decoded != name:
            raise ValueError(f"Original raw ResName bytes disagree at row {index}")
        match = re.fullmatch(r"NpcNml([A-Za-z]{3})\\d{2}", name)
        if match is None:
            raise ValueError(f"Unrecognized original normal resident identity: {name}")
        race = match[1].lower()
        if race not in race_rows:
            raise ValueError(f"Race '{race}' missing from original NmlNpcRaceParam")
        if code not in by_hash:
            raise ValueError(f"Unmatched original NpcLooks CRC32: {name} ({code})")
        look, look_index = by_hash[code]
        if name in names or index in ids:
            raise ValueError("Duplicate original NPC identity or row index")
        names.add(name)
        ids.add(index)
        group = look.split("_", 1)[0]
        records.append({
            "source_row_index": index, "res_name": name,
            "race_code": race, "race_original_row_indices": race_rows[race],
            "native_looks_crc32_u32": code,
            "npc_looks": look, "npc_looks_index": look_index,
            "gender_group_from_native_looks": group,
            "gender_community_gloss": GENDER_GROUP[group],
            "personality_community_gloss": PERSONALITY_GLOSS[look],
            "static_evidence": "ORIGINAL_BCSV_BYTES_AND_NATIVE_ENUM_CRC32_CROSS_JOIN",
            "native_runtime_consumer_fully_verified": False,
        })
    if len(records) != 417 or len({r["race_code"] for r in records}) != 35:
        raise ValueError("Normal resident identity / 35 original races coverage failed")

    field_report = {
        "schema": "acnh303-r91-nmlnpc-field-distribution-v1",
        "source_file": (source / "NmlNpcParam.csv").relative_to(root).as_posix(),
        "original_bcsv_file": NCA,
        "original_bcsv_sha256": EXPECTED_NML_BCSV_SHA256,
        "decoded_csv_sha256": digest(source / "NmlNpcParam.csv"),
        "rows": len(npc), "native_fields": 41,
        "fields": enumerate_fields(npc, headers),
        "not_runtime_consumer_proof": True,
    }
    summary = {
        "schema": "acnh303-r91-nmlnpc-native-looks-race-static-v1",
        "version": "3.0.3",
        "source_sha256": {p.name: digest(p) for p in
                           (source / "NmlNpcParam.csv", source / "NpcLooksParam.csv",
                            source / "NmlNpcRaceParam.csv", original)},
        "population": len(records),
        "looks_join_exact": 417,
        "race_code_joins": 417,
        "race_codes_observed": 35,
        "native_looks_counts": dict(sorted(Counter(r["npc_looks"] for r in records).items())),
        "native_race_counts": dict(sorted(Counter(r["race_code"] for r in records).items())),
        "gender_groups": dict(sorted(Counter(r["gender_group_from_native_looks"] for r in records).items())),
        "confidence": "BCSV_SOURCE_BYTE_AND_ENUM_STATIC_VERIFIED",
        "native_consumer_candidates": NATIVE_CANDIDATES,
        "native_BCSV_loader_to_runtime_cache_full_call_chain_verified": False,
        "in_game_dynamic_trait_mutation_verified": False,
        "community_personality_terms_are_not_original_BCSV_enums": True,
        "should_not_overwrite_existing_v2_export_automatically": True,
    }
    return field_report, summary, records


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--out", type=Path, default=Path("artifacts/acnh303-r91"))
    args = ap.parse_args()
    fields, summary, rows = build(args.root.resolve())
    args.out.mkdir(parents=True, exist_ok=True)
    for name, obj in (
        ("nmlnpc_field_enumeration.json", fields),
        ("nmlnpc_looks_race_manifest.json", summary),
        ("villager_native_static_semantics.json", rows),
    ):
        (args.out / name).write_text(
            json.dumps(obj, ensure_ascii=False, indent=2, sort_keys=True) + "\\n",
            encoding="utf-8")
    print(json.dumps({k: summary[k] for k in
                      ("population", "looks_join_exact", "race_code_joins",
                       "race_codes_observed", "native_looks_counts", "gender_groups")},
                     ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
