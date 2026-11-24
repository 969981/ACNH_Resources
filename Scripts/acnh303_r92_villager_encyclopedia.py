#!/usr/bin/env python3
"""R92: build provenance-rich 417-villager catalog and research-only adoption/save evidence.

Input: original ACNH 3.0.3 BCSV/decoded EventFlow plus independently generated
R91 static and R82/R84 14-locale v2 exports. Never fabricate current island
state, online adoption success, amiibo eligibility, or Native function addresses.
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

HOBBIES = ("Education", "Fitness", "Fashion", "Nature", "Play", "Music")
COLLABS = {0: "ordinary", 1: "sanrio", 2: "splatoon", 3: "zelda"}
COLLAB_RESNAME = {
    "sanrio": {"NpcNmlGor11", "NpcNmlCbr18", "NpcNmlShp14",
               "NpcNmlElp11", "NpcNmlDer10", "NpcNmlRbt20"},
    "splatoon": {"NpcNmlSqu19", "NpcNmlSqu20"},
    "zelda": {"NpcNmlDer12", "NpcNmlBrd20"},
}
NPC_RES = "hash_48EF0398"
HOBBY_HASH = "hash_9EEA1288"
COLLAB_HASH = "hash_1C57897D"
INIT_LIVE = "hash_454B2ADC"
INITIAL_RAIN_HAT = "hash_03200971"
INITIAL_RAIN_WEAR = "hash_1D69405F"
WALL_ID = "hash_DA63A0CC"
FLOOR_ID = "hash_0B52F5BB"
NATIVE_LOOKS = "hash_04F52F6A"
NATIVE_MEM_LABEL = "hash_45F320F2"
NATIVE_ID = "hash_54706054"
EVENTS = (
    "NNPC_Reaction_Moving",
    "NNPC_Spot_Camp_Invite",
    "Obj_RcoMachine_AmiiboCall",
    "System_WherearenNPCMoveMode_Amiibo",
    "NNPC_Talk_Situation",
)
STATE_FILES = {
    "npc_memory_definitions": "EventFlagsNpcMemoryParam.csv",
    "npc_save_definitions": "EventFlagsNpcSaveParam.csv",
    "npc_temporary_definitions": "EventFlagsNpcTempParam.csv",
    "player_activity_definitions": "EventFlagsPlayerActivityParam.csv",
}
IMPORTANT_QUERIES = {
    "EventFlowQueryIsCollaboNpc",
    "EventFlowQueryNpcInviteCheck",
    "EventFlowQueryNpcMoveOutState",
    "EventFlowQueryIsMyVillage",
    "EventFlowQueryNpcIsInducementPlayer",
    "EventFlowQueryIsInduceFailedReasonFixUp",
    "EventFlowQueryNpcIsMovingRoom",
    "EventFlowQueryCanInduceNpc",
    "EventFlowQueryNpcHouseNum",
    "EventFlowQueryIsAbandonedHouseNpc",
    "EventFlowQueryIsAmiiboNpcLiving",
    "EventFlowQueryIsCallableAmiiboNpc",
    "EventFlowQueryIsAcceptableAmiibo",
}
IMPORTANT_ACTIONS = {
    "EventFlowActionNpcFixedInducement",
    "EventFlowActionMoveIntoLandForSale",
    "EventFlowActionSetAmiiboCamperNPC",
    "EventFlowActionSelectMoveOutNpcRandom",
    "EventFlowActionUISelectNpcMoveOut",
    "EventFlowActionNpcSetMoveLandWord",
}

def read_json(path: Path):
    return json.loads(path.read_text("utf-8"))

def read_csv(path: Path) -> list[dict]:
    with path.open("r", encoding="utf-8-sig", newline="") as f:
        return list(csv.DictReader(f))

def checksum(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()

def write_json(path: Path, obj):
    path.write_text(json.dumps(obj, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    return checksum(path)

def make_catalog(root: Path, web14: Path, r91: Path):
    full = read_json(web14 / "villager_db_multi_v2.json")
    static = read_json(r91 / "villager_native_static_semantics.json")
    proof = read_json(r91 / "nmlnpc_looks_race_manifest.json")
    source = root / "UnPack/1/Bcsv/NmlNpcParam.csv"
    original = read_csv(source)
    if len(full) != len(static) != len(original):
        raise ValueError("Invalid villager population")
    if len(full) != 417 or len(static) != 417 or len(original) != 417:
        raise ValueError("Requires all 417 original residents")
    if proof["looks_join_exact"] != 417 or proof["race_code_joins"] != 417:
        raise ValueError("R91 original-static prerequisite not verified")
    r91_map = {x["res_name"]: x for x in static}
    src_map = {x[NPC_RES]: x for x in original}
    v2_map = {x["ResName"]: x for x in full}
    if not (len(r91_map) == len(src_map) == len(v2_map) == 417):
        raise ValueError("Duplicate or absent original ResName")
    if set(r91_map) != set(src_map) or set(src_map) != set(v2_map):
        raise ValueError("Original 417-villager identities disagree across sources")

    hobby_by_hash = {str(zlib.crc32(x.encode("ascii")) & 0xFFFFFFFF): x for x in HOBBIES}
    if len(hobby_by_hash) != 6:
        raise ValueError("Hobby CRC collision")
    catalog = []
    for row in full:
        name = row["ResName"]
        p, s = src_map[name], r91_map[name]
        native_looks = int(p[NATIVE_LOOKS])
        if native_looks != s["native_looks_crc32_u32"]:
            raise ValueError(f"R91 static Looks mismatch for {name}")
        raw_hobby = p[HOBBY_HASH]
        if raw_hobby not in hobby_by_hash:
            raise ValueError(f"Unrecognized original 3.0.3 hobby candidate {raw_hobby}")
        collab = int(p[COLLAB_HASH])
        if collab not in COLLABS:
            raise ValueError("Unexpected original collaboration enum")
        group = COLLABS[collab]
        if group != "ordinary" and name not in COLLAB_RESNAME[group]:
            raise ValueError(f"Collaboration identity/group mismatch: {name}")
        if group == "ordinary" and any(name in z for z in COLLAB_RESNAME.values()):
            raise ValueError(f"Special resident improperly classified ordinary: {name}")
        init = int(p[INIT_LIVE])
        if init != (1 if group == "ordinary" else 0):
            raise ValueError("Expected InitLive group cross-distribution drift")
        locale = row["names"]
        if len(locale) != 14 or any(not v for v in locale.values()):
            raise ValueError(f"Missing authentic 14-locale villager display names {name}")
        if row["unique_id"] != int(p[NATIVE_ID]):
            raise ValueError("R82/R84 original unique NPC ID disagrees")
        images = row.get("native_images", [])
        image_by_family = {}
        for image in images:
            family = image.get("category")
            if not family:
                continue
            image_by_family.setdefault(family, []).append({
                "source_rom_path": image.get("source_rom_path"),
                "source_sha256": image.get("source_rom_sha256"),
                "png_path": image.get("png_path"),
                "png_sha256": image.get("png_sha256"),
                "mapping_evidence": image.get("mapping_evidence"),
            })
        catalog.append({
            "res_name": name,
            "native_unique_id": row["unique_id"],
            "source_row_index": s["source_row_index"],
            "names_14_locale": locale,
            "name_provenance_14_locale": row["name_evidence"],
            "birthday": row["birthday"],
            "birth_month": row["birth_month"], "birth_day": row["birth_day"],
            "npc_looks": s["npc_looks"], "npc_looks_index": s["npc_looks_index"],
            "gender_group_from_looks": s["gender_group_from_native_looks"],
            "personality_community_gloss": s["personality_community_gloss"],
            "race_code": s["race_code"],
            "race_original_row_indices": s["race_original_row_indices"],
            "hobby_native_crc32_u32": int(raw_hobby),
            "hobby_native_enum_candidate": hobby_by_hash[raw_hobby],
            "hobby_evidence": "ORIGINAL_ENUM_CRC32_CROSSREF_NATIVE_FIELD_NAME_PENDING",
            "collaboration_type_raw": collab, "collaboration_group_by_identity": group,
            "collaboration_evidence": "ORIGINAL_GROUP_VALUE_AND_EXACT_RESNAME_JOIN",
            "init_live_raw": init,
            "initial_outfit": {
                "tops_item_id": row["initial_tops_id"],
                "umbrella_item_id": row["initial_umbrella_id"],
                "rain_hat_item_id_candidate": int(p[INITIAL_RAIN_HAT]),
                "rain_wear_item_id_candidate": int(p[INITIAL_RAIN_WEAR]),
                "initial_remake_id": row["initial_remake_id"],
                "item_id_relations_runtime_verified": False,
            },
            "house": {
                "wall_type_raw": int(p[WALL_ID]),
                "floor_type_raw": int(p[FLOOR_ID]),
                "native_path_template": "Param/NpcHouse/%s.byml",
                "template_parameter_link_to_resident_verified": False,
                "original_house_byml_extracted": False,
                "furniture_layout": None,
            },
            "npc_color_raw": row["npc_color_raw"],
            "npc_talk_type_raw": row["npc_talk_type_raw"],
            "bromide_item_id": row["bromide_item_id"],
            "poster_item_id": row["poster_item_id"],
            "images_by_family": image_by_family,
            "image_runtime_family_selection_verified": False,
            "recruitment_capabilities": {
                "can_be_adopted_from_other_island": None,
                "can_spawn_on_mystery_island": None,
                "can_invite_by_amiibo": None,
                "runtime_verified": False,
            },
            "island_specific_state": {
                "friendship": None,
                "move_out_state": None,
                "is_in_boxes": None,
                "player_relationship": None,
                "invite_failure_reason": None,
                "source": "REQUIRES_ACTUAL_SAVE_OR_LIVE_CONTEXT",
            },
            "evidence": {
                "static_looks_race": "R91_ORIGINAL_BCSV_BYTE_VERIFIED",
                "14_locale": "R82_ROM_MSBT_EXACT_KEY",
                "hobby": "ORIGINAL_ENUM_CRC32_CROSSREF",
                "adoption": "RUNTIME_UNVERIFIED",
            },
        })
    ordered = sorted(catalog, key=lambda x:x["source_row_index"])
    if [x["source_row_index"] for x in ordered] != list(range(417)):
        raise ValueError("Missing source index sequence")
    expected = {0: 407, 1: 6, 2: 2, 3: 2}
    counts = Counter(x["collaboration_type_raw"] for x in ordered)
    if dict(counts) != expected:
        raise ValueError(f"Collaboration group count drift: {counts}")
    if len({x["race_code"] for x in ordered}) != 35 or len({x["npc_looks"] for x in ordered}) != 8:
        raise ValueError("Expected native race or looks distribution unavailable")
    return ordered, {
        "identity_coverage": len(ordered),
        "locale_per_record": 14,
        "hobby_candidates": dict(sorted(Counter(x["hobby_native_enum_candidate"] for x in ordered).items())),
        "collaboration_count": dict(sorted(counts.items())),
        "race_codes": len({x["race_code"] for x in ordered}),
        "look_types": len({x["npc_looks"] for x in ordered}),
        "image_source_references": sum(len(v) for x in ordered for v in x["images_by_family"].values()),
        "source_sha256": checksum(source),
        "hobby_native_consumer_verified": False,
        "collab_adoption_runtime_verified": False,
    }

def make_eventflow_evidence(root: Path):
    group = {}
    query_names = Counter()
    action_names = Counter()
    native_proven = False
    for stem in EVENTS:
        source = root / "UnPack/1/EventFlow" / (stem + ".json")
        document = read_json(source)
        graph = document["graph"]
        events = graph["events"]
        indices = {int(e["index"]) for e in events}
        if len(indices) != len(events):
            raise ValueError(f"Duplicate EventFlow event index {stem}")
        nodes = []
        for e in events:
            links = [{"kind": "case", "value": c["value"], "target": c["target"]}
                     for c in e.get("cases", [])]
            if e.get("next") is not None:
                links.append({"kind": "next", "target": e["next"]})
            for edge in links:
                if edge["target"] not in indices:
                    raise ValueError(f"{stem}: invalid event target {edge['target']}")
            node = {
                "index": e["index"], "name": e.get("name"), "type": e["type"],
                "query": e.get("query"), "action": e.get("action"),
                "actor": e.get("actor"), "params": e.get("params", {}),
                "links": links,
                "subflow_entrypoint": e.get("entrypoint"),
                "subflow_flowchart": e.get("flowchart"),
            }
            if node["query"]: query_names[node["query"]] += 1
            if node["action"]: action_names[node["action"]] += 1
            nodes.append(node)
        group[stem] = {
            "source": source.relative_to(root).as_posix(),
            "source_sha256": checksum(source),
            "entrypoints": graph["entrypoints"],
            "native_callback_va": None,
            "native_callback_verified": False,
            "nodes": nodes,
        }
    moving = group["NNPC_Reaction_Moving"]["nodes"]
    collabs = [x for x in moving if x["query"] == "EventFlowQueryIsCollaboNpc"]
    if len(collabs) != 3 or not all(x["params"].get("CollaboType") == "cAny" for x in collabs):
        raise ValueError("Original three collaboration-sensitive MoveOut nodes changed")
    types = {x["params"].get("Type") for x in moving if x["query"]=="EventFlowQueryNpcInviteCheck"}
    if types != {0, 1, 2}:
        raise ValueError(f"Original NpcInviteCheck type coverage drift: {types}")
    return {
        "schema": "acnh303-r92-recruitment-eventflow-static-evidence-v1",
        "flows": group,
        "identified_priority_queries": {
            x: query_names[x] for x in sorted(IMPORTANT_QUERIES) if query_names[x]},
        "identified_priority_actions": {
            x: action_names[x] for x in sorted(IMPORTANT_ACTIONS) if action_names[x]},
        "collabo_query_event_indices": [x["index"] for x in collabs],
        "collabo_query_type": "cAny",
        "invite_check_type_values": sorted(types),
        "all_native_query_implementations_verified": native_proven,
        "live_online_move_in_tested": False,
        "does_not_infer_collaboration_blocks_adoption": True,
    }

def make_state_dictionary(root: Path):
    tables = {}
    for logical_name, source_file in STATE_FILES.items():
        path = root / "UnPack/1/Bcsv" / source_file
        records = read_csv(path)
        if not records:
            raise ValueError(f"No definitions in {path}")
        definition_list = []
        keys = set()
        for row in records:
            label = row.get(NATIVE_MEM_LABEL)
            if label is None:
                raise ValueError(f"Native save/flag label hash absent in {path}")
            if label in keys:
                raise ValueError(f"Duplicate Native state definition key {label} in {path}")
            keys.add(label)
            definition_list.append({
                "source_row_index": int(row["_row_index"]),
                "unique_id": int(row[NATIVE_ID]) if row.get(NATIVE_ID, "").isdigit() else None,
                "raw_key": label,
                "native_columns": {k: v for k, v in row.items() if k.startswith("hash_")},
                "storage_instance_value": None,
                "storage_instance_known": False,
                "original_definition_verified": True,
            })
        tables[logical_name] = {
            "source": path.relative_to(root).as_posix(),
            "source_sha256": checksum(path),
            "definition_count": len(definition_list),
            "records": definition_list,
        }
    memory = {x["raw_key"] for x in tables["npc_memory_definitions"]["records"]}
    save = {x["raw_key"] for x in tables["npc_save_definitions"]["records"]}
    required_memory = {
        "Friendship", "NextMoveOutTalk", "TalkMoveOut", "HasAcquaintanceship",
        "InduceFailAlreadyInduced", "InduceFailSameNpcLiving",
        "InduceFailSameNpcMoveIn", "InduceFailVillagerMax",
        "InduceFailSellPlaceNothing", "InducementAtMovingDay", "InducementFlag",
    }
    required_save = {"MoveInCompletion", "MoveRoomIndex", "AbandonedHouse", "ForceMoveOut"}
    if not required_memory.issubset(memory) or not required_save.issubset(save):
        raise ValueError("Required native memory/save definitions are missing")
    return {
        "schema": "acnh303-r92-villager-state-definitions-only-v1",
        "tables": tables,
        "static_definition_count": sum(len(t["records"]) for t in tables.values()),
        "required_memory_keys": sorted(required_memory),
        "required_save_keys": sorted(required_save),
        "example_memory_max_from_param": {"Friendship": 255},
        "actual_island_save_provided": False,
        "actual_island_friendship_or_moving_values": None,
        "actual_guest_player_state_provided": False,
        "online_session_trace_provided": False,
        "join_policy": {
            "static_catalog": "ROM 3.0.3 only",
            "island_save": "particular island resident slot and NPC save data, currently absent",
            "player_npc_memory": "per player/resident interactions, currently absent",
            "live_session": "host/visitor and invitation result, currently absent",
        },
    }

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--web14", type=Path, default=Path("artifacts/acnh303-web14"))
    ap.add_argument("--r91", type=Path, default=Path("artifacts/acnh303-r91"))
    ap.add_argument("--out", type=Path, default=Path("artifacts/acnh303-r92"))
    args = ap.parse_args()
    root = args.root.resolve()
    web14 = args.web14.resolve()
    r91 = args.r91.resolve()
    out = args.out.resolve()
    if out == root or out.is_relative_to(root/"e10617820db06889e1638499478da0de_NCA"):
        raise ValueError("Refusing original/source overwrite")
    out.mkdir(parents=True, exist_ok=True)
    catalog, stats = make_catalog(root, web14, r91)
    flow = make_eventflow_evidence(root)
    states = make_state_dictionary(root)
    artefacts = {}
    for name, payload in [
        ("villager_encyclopedia_417.json", catalog),
        ("villager_recruitment_eventflow_evidence.json", flow),
        ("villager_save_state_definitions.json", states),
    ]:
        artefacts[name] = {"sha256": write_json(out/name, payload)}
    manifest = {
        "schema": "acnh303-r92-villager-encyclopedia-evidence-v1",
        "version": "3.0.3",
        "stats": stats,
        "eventflow_source_count": len(flow["flows"]),
        "eventflow_collaboration_branch_count": len(flow["collabo_query_event_indices"]),
        "state_definition_count": states["static_definition_count"],
        "artifacts": artefacts,
        "all_runtime_invitation_flags_remain_unknown": True,
        "all_save_state_values_remain_unknown": True,
        "native_function_boundaries_verified": False,
        "existing_v2_data_unchanged": True,
    }
    write_json(out/"villager_research_manifest.json", manifest)
    print(json.dumps({k:manifest[k] for k in (
        "stats", "eventflow_source_count", "eventflow_collaboration_branch_count",
        "state_definition_count", "all_runtime_invitation_flags_remain_unknown",
    )}, ensure_ascii=False, indent=2))

if __name__ == "__main__":
    main()
