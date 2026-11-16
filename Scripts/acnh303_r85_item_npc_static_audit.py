#!/usr/bin/env python3
"""ACNH 3.0.3 R85: read-only ItemKind / villager invitation static evidence audit.

Only BCSV-derived original CSV, BFEVFL-derived original JSON, and specifically
named Ghidra C candidates are read. No guessed per-villager invite booleans.
Python 3.10+, standard library only.
"""
from __future__ import annotations

import argparse
import collections
import csv
import hashlib
import json
import re
import zlib
from pathlib import Path

FLOWS = (
    "NNPC_Spot_Camp_Invite", "NNPC_Spot_Camp", "NNPC_Spot_MysteryTour",
    "NNPC_Reaction_Moving", "NNPC_Reaction_First_Acquaintance",
    "Obj_RcoMachine_Amiibo", "Obj_RcoMachine_AmiiboCall",
    "System_WherearenNPCMoveMode_Amiibo", "System_CastUI_Amiibo",
    "Obj_Common_AmiiboProcess", "NNPC_Talk_Situation", "System_PhotoStudio_Call",
)
FLAGS = (
    "CanBury", "CanEat", "CanFtr", "CanGift", "CanNpcBirthdayPresent",
    "CanNpcPresent", "CanPlant", "CanPut", "CanPutWallAndFloor",
    "CanSell", "CanSellSimple", "CanSetChest", "CanSetCloset",
    "CanSetInTrashBox", "CanSetItem", "CanUsePhotoStudio",
    "CantTakeOver", "IsCollectAchievement",
)
PARENT_CANDIDATES = {
    "Ftr_": "Ftr", "Top_": "Tops", "Onepiece_": "OnePiece",
    "Bottoms_": "Bottoms", "Shoes_": "Shoes",
}
NATIVE = (
    "derived/3.0.3/ghidra12.2/c/58/00ee5828.c",
    "derived/3.0.3/ghidra12.2/c/89/00f089a0.c",
)
RELEVANT = re.compile(
    r"Induce|Inducement|MoveIn|MoveOut|Moving|Amiibo|Npc|Camper|CampSite|"
    r"Nfp|Nfc|LandForSale|Settler|SelectNpc", re.I
)
ACTION = re.compile(
    r"Induce|NpcFixed|LandForSale|MoveOut|ChangeAmiibo|StartAmiibo|"
    r"ReadAmiibo|SetAmiiboCamper|ClearInduce|SetSettler", re.I
)
FLAG_PREFIX = re.compile(
    r"^(Induce|MoveIn|MoveOut|MoveNpc|ForceMoveOut|AbandonedHouse|"
    r"NnpcHouse|Camp_Induce|CampInvite)"
)


def hash_field(name: str, kind: str) -> str:
    return "hash_%08X" % (zlib.crc32((name + " " + kind).encode()) & 0xffffffff)


def read_csv(root: Path, name: str) -> list[dict]:
    path = root / "UnPack/1/Bcsv" / (name + ".csv")
    with path.open(encoding="utf-8-sig", newline="") as fp:
        return list(csv.DictReader(fp))


def write_csv(path: Path, columns: list[str], rows: list[list]) -> None:
    with path.open("w", encoding="utf-8-sig", newline="") as fp:
        w = csv.writer(fp)
        w.writerow(columns)
        w.writerows(rows)


def to_s16(s: str) -> int:
    value = int(s)
    if not 0 <= value <= 65535:
        raise ValueError("ItemKind stack storage is not u16: " + s)
    return value - 65536 if value >= 32768 else value


def category_link(raw: str, labels: set[str]) -> tuple[str, str]:
    value = raw.removeprefix("Kind_")
    if value in labels:
        return value, "exact_ItemKind_label"
    for prefix, parent in PARENT_CANDIDATES.items():
        if value.startswith(prefix) and parent in labels:
            return parent, "prefix_candidate_not_proven"
    return "", "unmapped_unknown"


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo-root", type=Path, default=Path("."))
    ap.add_argument("--out", type=Path, required=True)
    args = ap.parse_args()
    root = args.repo_root.resolve()
    out = args.out.resolve()
    out.mkdir(parents=True, exist_ok=True)

    kind = read_csv(root, "ItemKind")
    item = read_csv(root, "ItemParam")
    normal = read_csv(root, "NmlNpcParam")
    special = read_csv(root, "SpNpcParam")
    amiibo = read_csv(root, "AmiiboData")
    if (len(kind), len(item), len(normal), len(special), len(amiibo)) != (
        189, 11178, 417, 74, 581
    ):
        raise ValueError("Not the expected 3.0.3 BCSV row counts")

    labels = {x["hash_87BF00E8"] for x in kind}
    if len(labels) != 189:
        raise ValueError("Duplicate original ItemKind labels")
    flags = {name: hash_field(name, "u8") for name in FLAGS}
    if not all(h in kind[0] for h in flags.values()):
        raise ValueError("Original ItemKind flag fields do not match CRC32")

    counts = collections.Counter()
    exact_by_kind = collections.Counter()
    candidate_by_kind = collections.Counter()
    joined = []
    seen_ids = set()
    for row in item:
        ident = int(row["hash_54706054"])
        if ident in seen_ids:
            raise ValueError("Duplicate original item ID " + str(ident))
        seen_ids.add(ident)
        raw = row["hash_FC275E86"]
        base, status = category_link(raw, labels)
        counts[status] += 1
        if status == "exact_ItemKind_label":
            exact_by_kind[base] += 1
        elif status == "prefix_candidate_not_proven":
            candidate_by_kind[base] += 1
        joined.append([
            ident, f"{ident:04X}", row["hash_3FEBC642"], raw,
            base, status, "yes" if status == "exact_ItemKind_label" else "no",
        ])
    expected = {
        "exact_ItemKind_label": 6076,
        "prefix_candidate_not_proven": 5050,
        "unmapped_unknown": 52,
    }
    if dict(counts) != expected:
        raise ValueError(f"Native item-kind counts differ: {dict(counts)}")
    write_csv(
        out / "r85_item_category_link_11178.csv",
        ["item_id", "item_id_hex", "res_name", "original_kind", "base_kind",
         "base_kind_evidence", "can_inherit_flags_or_stack_as_proven"],
        joined,
    )

    category_rows = []
    for row in kind:
        label = row["hash_87BF00E8"]
        category_rows.append([
            row["hash_54706054"], label, row["hash_036E8EBE"],
            row["hash_4C9BA961"], to_s16(row["hash_4C9BA961"]),
            exact_by_kind[label], candidate_by_kind[label],
            "", *[row[flags[name]] for name in FLAGS],
        ])
    write_csv(
        out / "r85_itemkind_189.csv",
        ["kind_id", "label", "original_japanese_note_not_locale",
         "stack_raw_u16", "stack_s16", "exact_item_count",
         "prefix_candidate_item_count", "runtime_stack_capacity_verified",
         *FLAGS],
        category_rows,
    )

    npc_ids = set()
    normal_rows = []
    for row in normal:
        ident = row["hash_54706054"]
        if ident in npc_ids:
            raise ValueError("Duplicate original normal NPC ID " + ident)
        npc_ids.add(ident)
        normal_rows.append([
            row["hash_48EF0398"], ident, row["hash_9456B6A3"],
            row["hash_919EA52A"], row["hash_33AF13E1"],
            "", "", "", "", "unknown_not_false_requires_native_runtime",
        ])
    write_csv(
        out / "r85_normal_npc_eligibility_417.csv",
        ["res_name", "unique_id", "birth_month", "birth_day", "talk_type_raw",
         "can_move_in_island", "can_adopt_from_other_island",
         "can_invite_to_campsite", "can_invite_with_amiibo",
         "eligibility_evidence"],
        normal_rows,
    )

    flows = []
    queries = []
    actions = []
    event_types = collections.Counter()
    for name in FLOWS:
        path = root / "UnPack/1/EventFlow" / (name + ".json")
        source = json.loads(path.read_text(encoding="utf-8"))
        graph = source["graph"]
        events = graph["events"]
        if len(events) != graph["event_count"]:
            raise ValueError("EVFL event count mismatch: " + name)
        flows.append({
            "path": path.relative_to(root).as_posix(),
            "sha256": source["sha256"], "events": len(events),
            "entrypoints": [{"name": e["name"], "main_event": e["main_event"]}
                            for e in graph["entrypoints"]],
        })
        for ev in events:
            event_types[ev["type"]] += 1
            access = ev.get("params", {}).get("AccessKey", "")
            if ev.get("query") and (
                RELEVANT.search(ev["query"]) or RELEVANT.search(str(access))
            ):
                queries.append({
                    "source": name, "event_id": ev["index"],
                    "query": ev["query"], "params": ev.get("params", {}),
                    "cases": ev.get("cases", []),
                })
            if ev.get("action") and (
                ACTION.search(ev["action"]) or RELEVANT.search(str(access))
            ):
                actions.append({
                    "source": name, "event_id": ev["index"],
                    "action": ev["action"], "params": ev.get("params", {}),
                    "next": ev.get("next"),
                })

    native_references = []
    for relative in NATIVE:
        path = root / relative
        if path.is_file():
            content = path.read_text(encoding="utf-8", errors="replace")
            native_references.append({
                "path": relative, "function_address": "0x" + path.stem,
                "matched_strings": [s for s in (
                    "Camp_InduceFailFlag", "Camp_%s", "InduceFailAlreadyInduced"
                ) if s in content],
                "status": "decompiled_static_string_reference_not_dispatch",
            })
    if not native_references:
        raise ValueError("No native Ghidra C candidates available in sparse checkout")

    flag_rows = []
    for source_name in (
        "EventFlagsNpcMemoryParam", "EventFlagsNpcSaveParam",
        "EventFlagsPlayerParam"
    ):
        for row in read_csv(root, source_name):
            keys = [value for value in row.values() if FLAG_PREFIX.match(value)]
            if keys:
                flag_rows.append({
                    "source": source_name, "original_row_index": row["_row_index"],
                    "flag_keys": keys,
                })
    special_ids = {r["hash_54706054"] for r in special}
    amiibo_num = {r["hash_04A47035"] for r in amiibo}
    report = {
        "schema": "acnh303_r85_item_npc_static_audit_v1",
        "version": "3.0.3",
        "item_kind": {
            "items": len(item), "kinds": len(kind), "mapping": dict(counts),
            "flag_columns": list(flags),
            "japanese_description_column": "hash_036E8EBE",
            "verified_locale_itemkind_translation": False,
        },
        "npc": {
            "normal": len(normal), "special": len(special),
            "eligibility_true_or_false_proven": 0,
            "eligibility_status": "unknown_for_all_417",
            "amiibo_rows": len(amiibo),
            "amiibo_candidate_numeric_column": "hash_04A47035",
            "numeric_overlap_normal": len(amiibo_num & npc_ids),
            "numeric_overlap_special": len(amiibo_num & special_ids),
            "warning": "Numeric overlap alone does not prove identity join or invite rights",
        },
        "eventflow": {
            "flows": flows, "event_types": dict(event_types),
            "total_events": sum(r["events"] for r in flows),
            "relevant_queries": queries, "relevant_actions": actions,
            "warning": "Switch numeric branches and native query dispatch not proven",
        },
        "event_flag_sources": flag_rows,
        "native_candidates": native_references,
        "verification_status": "static_sources_only_no_game_runtime_or_per_NPC_adoption",
    }
    (out / "r85_static_report.json").write_text(
        json.dumps(report, indent=2, ensure_ascii=False) + "\n", "utf-8"
    )
    print(json.dumps({
        "items": len(item), "categories": len(kind), "kind_mapping": dict(counts),
        "normal_villagers": len(normal), "invite_eligibility": "unknown",
        "flows": len(flows), "events": report["eventflow"]["total_events"],
        "queries": len(queries), "native_candidates": len(native_references),
        "output": str(out),
    }, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
