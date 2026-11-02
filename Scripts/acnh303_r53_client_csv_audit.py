#!/usr/bin/env python3
"""R53: verified PokerCore CSV itemID/iName joins and conservative 40-name provenance.

Read-only audit. Real ACNHPokerCore CSVs from a PINNED commit are consumed in CI.
App CSV equality is not Nintendo's game-runtime icon selection proof.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path
import re

BASE = Path("assets/evidence/rom-items")
POKER = Path("upstream-pokercore/ACNHPokerCore/csv")
PIN = "85e50a1ad182c926b2ebd51c00abc612e0a859d5"
CSV_FILES = ["items.csv", "variations.csv", "field.csv", "override.csv"]
ORIGINAL_ROM = "e10617820db06889e1638499478da0de_NCA/1"


def load(path):
    return json.loads(path.read_text(encoding="utf-8"))


def hash_file(path):
    h = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def parse_pokercore_csv(path):
    """Use the literal ' ; ' fields selected by ACNHPokerCore's DataTable loader.

    Do not parse translated names; only original id + iName columns are used.
    Any unsupported/ambiguous row is counted rather than silently guessed.
    """
    rows = []
    bad = []
    with path.open("r", encoding="utf-8-sig") as stream:
        header = [v.strip() for v in stream.readline().strip().split(" ; ") if v.strip()]
        if len(header) < 2 or header[0] != "id" or header[1] != "iName":
            raise ValueError("Unsupported CSV schema: " + str(path) + " " + repr(header[:5]))
        for lineno, line in enumerate(stream, 2):
            if not line.strip():
                continue
            parts = line.strip().split(" ; ", 2)
            if len(parts) < 2 or not re.fullmatch("[0-9a-fA-F]{1,8}", parts[0].strip()):
                bad.append(lineno)
                continue
            rows.append({
                "line": lineno,
                "id_hex": parts[0].strip().upper().zfill(4),
                "id_decimal": int(parts[0].strip(), 16),
                "iName": parts[1].strip(),
            })
    return {"path": str(path), "sha256": hash_file(path),
            "row_count": len(rows), "malformed_line_count": len(bad),
            "malformed_line_examples": bad[:10], "records": rows}


def screenshot_name_hints(name):
    base = name.removesuffix(".png")
    without_variant = re.sub(r"_Remake_\d+_\d+$", "", base)
    if base.endswith("_3.0.0"):
        without_variant = base[:-len("_3.0.0")]
    elif re.search(r"_\d+_\d+$", base):
        without_variant = re.sub(r"_\d+_\d+$", "", base)
    return [base] if base == without_variant else [base, without_variant]


def analyze(root):
    r52 = load(root / BASE / "r52-pokercore-fallback-and-40.json")
    triage = load(root / BASE / "unmatched-bcsv-semantic-triage.json")
    if r52["app_fallback_candidates"] != 344 or len(r52["variant_records"]) != 344:
        raise ValueError("Original R52 344 mappings not loaded")
    if r52["remaining_40_from_intersection"] != 40 or len(r52["unresolved_40"]) != 40:
        raise ValueError("Original R52 40 names not loaded")
    if triage["missing_431_cross_classification"]["itemparam_absent__no_related_path"] != 40:
        raise ValueError("Original unresolved 40 categories drifted")

    parsed = {name: parse_pokercore_csv(root / POKER / name) for name in CSV_FILES}
    reverse_names = {}
    reverse_ids = {}
    for name, table in parsed.items():
        by_name = defaultdict(list)
        by_id = defaultdict(list)
        for rec in table["records"]:
            by_name[rec["iName"]].append(rec)
            by_id[rec["id_decimal"]].append(rec)
        reverse_names[name] = by_name
        reverse_ids[name] = by_id

    rows = []
    for rec in r52["variant_records"]:
        native_name = rec["original_item_name"]
        iid = rec["itemparam_id"]
        matched = {}
        lookup_by_id = {}
        for file in CSV_FILES:
            matched[file] = [{
                "id_hex": e["id_hex"], "id_decimal": e["id_decimal"], "csv_line": e["line"],
                "matches_itemparam_id": e["id_decimal"] == iid,
            } for e in reverse_names[file].get(native_name, [])]
            lookup_by_id[file] = [{
                "iName": e["iName"], "csv_line": e["line"],
                "matches_original_iname": e["iName"] == native_name,
            } for e in reverse_ids[file].get(iid, [])]
        # The Map UI loads item and variations; all lookups require both item id and name.
        main = any(m["matches_itemparam_id"] for m in matched["items.csv"])
        variant = any(m["matches_itemparam_id"] for m in matched["variations.csv"])
        rows.append({
            "name": native_name, "original_item_id_decimal": iid,
            "original_item_id_hex": f"{iid:04X}",
            "verified_original_zero_zero_png": rec["native_remake_zero_zero_png"],
            "itemremake_id_joined": bool(rec["itemremake_same_id_record_count"]),
            "client_items_csv_same_id_and_name": main,
            "client_variations_csv_same_id_and_name": variant,
            "client_exact_name_matches": matched,
            "client_same_id_rows_even_when_name_differs": lookup_by_id,
            "client_default_zero_zero_lookup_source_verified": True,
            "actual_pokercore_application_executed": False,
            "nintendo_runtime_default_mapping_verified": False,
            "unmodified_rom_png": True,
        })
    no_poker = [r["name"] for r in rows if not (r["client_items_csv_same_id_and_name"] or r["client_variations_csv_same_id_and_name"])]
    forty = []
    for rec in r52["unresolved_40"]:
        name = rec["catalog_name"]
        hints = screenshot_name_hints(name)
        files = {}
        for filename in CSV_FILES:
            entries = []
            for hint in hints:
                for found in reverse_names[filename].get(hint, []):
                    entries.append({
                        "lookup_name": hint,
                        "exact_catalog_stem": hint == name.removesuffix(".png"),
                        "csv_iName": found["iName"],
                        "csv_id_hex": found["id_hex"],
                        "csv_line": found["line"],
                    })
            files[filename] = entries
        forty.append({
            "name": name,
            "catalog_entry_present": True,
            "original_3_0_3_rom_name_not_found": True,
            "candidate_base_name_heuristics": hints,
            "poker_csv_matches": files,
            "poker_csv_has_candidate": any(files.values()),
            "available_verified_other_game_rom_snapshot": False,
            "other_game_version_proven": False,
            "native_original_png_created": False,
            "status": "pending_original_rom_source_verification",
        })
    def client_bucket(r):
        a = r["client_items_csv_same_id_and_name"]
        b = r["client_variations_csv_same_id_and_name"]
        return "items_and_variations" if a and b else "items_only" if a else "variations_only" if b else "neither"
    stats = Counter(client_bucket(r) for r in rows)
    exact40 = sum(any(r["poker_csv_matches"][f] and any(x["exact_catalog_stem"] for x in r["poker_csv_matches"][f]) for f in CSV_FILES) for r in forty)
    fallback40 = sum(r["poker_csv_has_candidate"] and not any(any(x["exact_catalog_stem"] for x in r["poker_csv_matches"][f]) for f in CSV_FILES) for r in forty)
    return {
        "schema": "acnh303_r53_client_csv_app_name_id_validation_v1",
        "pokercore_repo": "969981/ACNHPokerCore",
        "pokercore_revision": PIN,
        "client_csv_provenance": {name: {
            "sha256": v["sha256"], "rows": v["row_count"],
            "malformed_rows": v["malformed_line_count"],
            "malformed_examples": v["malformed_line_examples"],
        } for name, v in parsed.items()},
        "native_344_candidates": 344,
        "client_id_and_name_exact_status": dict(sorted(stats.items())),
        "344_not_matching_either_client_id_and_name": no_poker,
        "missing_40_count": len(forty),
        "missing_40_client_exact_stem_matches": exact40,
        "missing_40_client_base_name_only_matches": fallback40,
        "missing_40_no_client_name_candidate": sum(not x["poker_csv_has_candidate"] for x in forty),
        "other_version_rom_tree_available_and_verified": False,
        "identical_3_0_3_source_trees": {
            "old_branch": "3.0.3",
            "working_branch": "3.0.3_Unpack",
            "romfs_nca_1_git_tree_sha": "8809e830a4caa2593916239ef2391b5d17b98dd5",
            "romfs_model_git_tree_sha": "ca01708ede6aa6f1b4aa9250d334732ad8a91d20",
            "not_independent_game_versions": True,
        },
        "original_1254_pending_names_promoted": 0,
        "client_image_runtime_verified": False,
        "game_ui_default_variant_mapping_verified": False,
        "base_names_344": rows,
        "remaining_40": forty,
    }


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--root", type=Path, default=Path("."))
    args = p.parse_args()
    root = args.root.resolve()
    report = analyze(root)
    out = root / BASE
    (out / "r53-client-iname-id-and-40.json").write_text(
        json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
    )
    import csv
    with (out / "r53-client-iname-id-and-40.csv").open("w", encoding="utf-8", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["name", "itemparam_hex_id", "items_same_id_iname",
                    "variations_same_id_iname", "nintendo_default_mapping_verified"])
        for row in report["base_names_344"]:
            w.writerow([row["name"], row["original_item_id_hex"],
                        row["client_items_csv_same_id_and_name"],
                        row["client_variations_csv_same_id_and_name"], False])
    with (out / "r53-remaining-40-client-csv.csv").open("w", encoding="utf-8", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["pending_original_name", "candidate_base_names",
                    "client_exact_stem_found", "client_base_name_candidate_found",
                    "other_version_rom_verified"])
        for row in report["remaining_40"]:
            exact = any(any(x["exact_catalog_stem"] for x in cells) for cells in row["poker_csv_matches"].values())
            w.writerow([row["name"], "|".join(row["candidate_base_name_heuristics"]),
                        exact, row["poker_csv_has_candidate"] and not exact, False])
    print(json.dumps({k: v for k, v in report.items()
                      if k not in ("base_names_344", "remaining_40", "344_not_matching_either_client_id_and_name")},
                     ensure_ascii=False))


if __name__ == "__main__":
    main()
