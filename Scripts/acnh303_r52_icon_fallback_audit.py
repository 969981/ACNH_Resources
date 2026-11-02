#!/usr/bin/env python3
"""R52: ACNHPokerCore image fallback audit and the 40 unresolved catalog names.

This verifies app-source lookup precedence + original extracted PNG hashes. It
does NOT prove Nintendo's runtime chooses body/fabric (0,0), nor that assets
absent in this 3.0.3 source tree were absent in other game versions.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import re
import subprocess

ROOT = "e10617820db06889e1638499478da0de_NCA/1"
UI_MODEL = ROOT + "/Model/"
EXT = ".Nin_NX_NVN.zs"
ITEM_FILE = "assets/evidence/rom-items/itemparam-itemremake-id-crossref.json"
TRIAGE_FILE = "assets/evidence/rom-items/unmatched-bcsv-semantic-triage.json"
CATALOG_FILE = "assets/catalog/expected-png-names.txt"
UPSTREAM_MAP = "upstream-pokercore/ACNHPokerCore/Map/map.cs"
UPSTREAM_VARIATION = "upstream-pokercore/ACNHPokerCore/Custom/variation.cs"
UPSTREAM_COMMIT = "85e50a1ad182c926b2ebd51c00abc612e0a859d5"


def load(root: Path, name: str) -> dict:
    return json.loads((root / name).read_text("utf-8"))


def sha(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for data in iter(lambda: f.read(1024 * 1024), b""):
            h.update(data)
    return h.hexdigest()


def app_contract(root: Path) -> dict:
    mp = (root / UPSTREAM_MAP).read_text("utf-8")
    vr = (root / UPSTREAM_VARIATION).read_text("utf-8")
    begin = mp.find("public string GetImagePathFromID(string itemID, DataTable source")
    end = mp.find("private string GetSize(", begin)
    if begin < 0 or end < begin:
        raise ValueError("Pinned Map.GetImagePathFromID method missing")
    body = mp[begin:end]
    remake = 'imagePath + imageName + "_Remake_0_0.png"'
    ordinary = 'imagePath + imageName + ".png"'
    if remake not in body or ordinary not in body or body.rfind(remake) >= body.rfind(ordinary):
        raise ValueError("Map fallback source no longer agrees with expected method")
    if "VarRow" not in body or '"_Remake_" + main + "_" + sub + ".png"' not in body:
        raise ValueError("Map nondefault variation handling missing")
    if "if (File.Exists(path))" not in body or "return path;" not in body:
        raise ValueError("Map filesystem check missing")
    p0 = vr.find("public static string GetImagePathFromID(string itemID, DataTable source)")
    p1 = vr.find("return \"\";", p0)
    if p0 < 0:
        raise ValueError("Pinned variation.GetImagePathFromID missing")
    snippet = vr[p0:p0 + 1300]
    first = 'row["iName"] + "_Remake_0_0" + ".png"'
    second = 'row["iName"] + ".png"'
    if first not in snippet or second not in snippet or snippet.index(first) >= snippet.index(second):
        raise ValueError("Variation fallback ordering changed")
    return {
        "repository": "969981/ACNHPokerCore",
        "pinned_commit": UPSTREAM_COMMIT,
        "map_source": UPSTREAM_MAP,
        "variation_source": UPSTREAM_VARIATION,
        "map_source_sha256": sha(root / UPSTREAM_MAP),
        "variation_source_sha256": sha(root / UPSTREAM_VARIATION),
        "map_prefers_remake_zero_zero_when_found": True,
        "map_supports_data_driven_nonzero_variations": True,
        "variation_dialog_prefers_remake_zero_zero_when_found": True,
        "runtime_executed": False,
    }


def rom_tree(root: Path) -> list[str]:
    r = subprocess.run(
        ["git", "ls-tree", "-r", "--name-only", "HEAD", "--", ROOT],
        cwd=root, text=True, capture_output=True, check=True, timeout=120,
    )
    return r.stdout.splitlines()


def index_variants(paths: list[str], stems: set[str]) -> dict:
    pattern = re.compile(r"^Layout_FtrIcon_(.+)_Remake_(\d+)_(\d+)\.Nin_NX_NVN\.zs$")
    variants = defaultdict(list)
    for name in paths:
        if not name.startswith(UI_MODEL):
            continue
        hit = pattern.fullmatch(name.rsplit("/", 1)[-1])
        if hit and hit[1] in stems:
            variants[hit[1]].append((int(hit[2]), int(hit[3]), name))
    return variants


def classify_absent_name(name: str) -> dict:
    stem = name[:-4]
    marker = re.search(r"_\d+\.\d+\.\d+$", stem)
    return {
        "has_embedded_version_label": bool(marker),
        "embedded_version_label": marker.group()[1:] if marker else None,
        "has_zero_zero_variant_suffix": stem.endswith("0_0"),
        "potential_collaboration_label": any(
            token in stem.casefold()
            for token in ("hylia", "zelda", "inkling", "octling", "majora",
                          "hotel", "champion", "tulin", "mineru", "trishred",
                          "legoblock", "legohead", "legologo", "fuka", "utsuho")
        ),
        "name_heuristics_are_not_verified_version_evidence": True,
    }


def analyze(root: Path, *, verify_pngs: bool) -> dict:
    cross = load(root, ITEM_FILE)
    tri = load(root, TRIAGE_FILE)
    if cross.get("variant_candidate_count") != 344 or cross.get("one_to_one_item_id_joins") != 30:
        raise ValueError("Unexpected 344/30 ItemParam-ItemRemake baseline")
    if tri["missing_431_cross_classification"] != {
        "itemparam_absent__no_related_path": 40,
        "itemparam_absent__rom_related_path": 6,
        "itemparam_exact__rom_related_path": 385,
    }:
        raise ValueError("Unexpected 431 unresolved original ROM baseline")
    contract = app_contract(root)
    names = {r["original_item_name"] for r in cross["records"]}
    if len(names) != 344:
        raise ValueError("Duplicate original item base name")
    paths = rom_tree(root)
    sources = index_variants(paths, names)
    variants = []
    for item in cross["records"]:
        name = item["original_item_name"]
        img = item["original_remake_0_0_png"]
        raw = sources.get(name, [])
        zero_zero = [(b, f, p) for b, f, p in raw if (b, f) == (0, 0)]
        if len(zero_zero) != 1 or len(raw) != len({p for _, _, p in raw}):
            raise ValueError("Missing or duplicated native (0,0) original source: " + name)
        if item["shared_item_id_join_cardinality"] not in (0, 1):
            raise ValueError("Unexpected ItemRemake join cardinality")
        if verify_pngs:
            path = root / img
            if not path.is_file() or sha(path) != item["original_remake_0_0_png_sha256"]:
                raise ValueError("Original (0,0) image missing/changed: " + img)
        variants.append({
            "original_item_name": name,
            "itemparam_id": item["item_param"]["itemparam_id"],
            "itemremake_same_id_record_count": item["shared_item_id_join_cardinality"],
            "native_remake_zero_zero_source": zero_zero[0][2],
            "native_remake_zero_zero_png": img,
            "native_remake_zero_zero_png_sha256": item["original_remake_0_0_png_sha256"],
            "other_native_variant_source_count": len(raw) - 1,
            "native_variation_dimensions": {
                "body_values": sorted({b for b, _, _ in raw}),
                "fabric_values": sorted({f for _, f, _ in raw}),
            },
            "pokercore_application_fallback_path_available": True,
            "pokercore_lookup_source_contract_verified": True,
            "nintendo_default_selection_verified": False,
            "catalog_base_filename_png_created": False,
        })
    no_itemremake = [r for r in variants if r["itemremake_same_id_record_count"] == 0]
    no_itemremake_extra = Counter(
        "only_0_0" if r["other_native_variant_source_count"] == 0 else "also_other_variations"
        for r in no_itemremake
    )
    expected_names = set((root / CATALOG_FILE).read_text("utf-8-sig").splitlines())
    missing = tri["missing_431_not_in_itemparam"]
    no_path = tri["missing_431_without_related_tree_filename"]
    names_40 = sorted(set(missing) & set(no_path))
    if len(names_40) != 40:
        raise ValueError("The 40 current-ROM unresolved names changed")
    name_records = []
    for name in names_40:
        if name not in expected_names:
            raise ValueError("Unresolved name not found in actual original catalog")
        name_records.append({
            "catalog_name": name,
            "original_catalog_name_present": True,
            "itemparam_exact_name_found_in_3_0_3": False,
            "rom_tree_filename_related_hit_in_3_0_3": False,
            "other_game_version_rom_checked": False,
            "proven_absent_from_other_versions": False,
            "version_origin_verified": False,
            "hypotheses": classify_absent_name(name),
        })
    return {
        "schema": "acnh303_r52_application_fallback_and_unresolved_40_v1",
        "itemremake_joined": 30,
        "itemremake_without_same_id": len(no_itemremake),
        "remake_0_0_png_hashes_checked": verify_pngs,
        "app_fallback_candidates": len(variants),
        "no_itemremake_native_variant_groups": dict(sorted(no_itemremake_extra.items())),
        "pokercore_source_contract": contract,
        "original_3_0_3_tree_entries": len(paths),
        "catalog_path": CATALOG_FILE,
        "catalog_sha256": sha(root / CATALOG_FILE),
        "remaining_40_from_intersection": len(names_40),
        "remaining_40_heuristic_counts": {
            "embedded_version_label": sum(r["hypotheses"]["has_embedded_version_label"] for r in name_records),
            "trailing_0_0": sum(r["hypotheses"]["has_zero_zero_variant_suffix"] for r in name_records),
            "possible_collab_labels": sum(r["hypotheses"]["potential_collaboration_label"] for r in name_records),
        },
        "other_game_version_rom_available_in_this_evidence": False,
        "original_1254_pending_names_promoted": 0,
        "original_26277_verified_icon_count_unchanged": True,
        "nintendo_default_icon_selection_verified": False,
        "variant_records": variants,
        "unresolved_40": name_records,
    }


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("mode", choices=("plan", "report"))
    ap.add_argument("--root", type=Path, default=Path("."))
    ap.add_argument("--sparse-list", type=Path, default=Path("/tmp/acnh-r52-original-pngs.txt"))
    args = ap.parse_args()
    root = args.root.resolve()
    doc = analyze(root, verify_pngs=args.mode == "report")
    if args.mode == "plan":
        paths = sorted({"/" + r["native_remake_zero_zero_png"] for r in doc["variant_records"]})
        args.sparse_list.write_text("\n".join(paths) + "\n", "utf-8")
    else:
        base = root / "assets/evidence/rom-items"
        (base / "r52-pokercore-fallback-and-40.json").write_text(
            json.dumps(doc, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
        )
        import csv
        with (base / "r52-unresolved-40.csv").open("w", encoding="utf-8", newline="") as f:
            w = csv.writer(f)
            w.writerow(["name", "embedded_version_label", "trailing_0_0",
                        "possible_collab_name", "other_version_verified"])
            for r in doc["unresolved_40"]:
                h = r["hypotheses"]
                w.writerow([r["catalog_name"], h["embedded_version_label"],
                            h["has_zero_zero_variant_suffix"],
                            h["potential_collaboration_label"], False])
    print(json.dumps({k: v for k, v in doc.items() if k not in ("variant_records", "unresolved_40")},
                     ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
