#!/usr/bin/env python3
"""R86: exact ROM CNzh/TWzh/JPja/EUen STR_CategoryName MSBT label audit.

Uses only original 3.0.3 Message/String_<locale>.sarc.zs and native
ItemKind CSV. Does not translate developer notes, invent labels, or conflate
a UI category with an ItemKind class absent an exact native label link.
Python 3.10+; requires zstandard and repository Scripts/acnh_formats.py.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from pathlib import Path

from acnh_formats import decompress, parse_sarc, parse_msbt

NCA = "e10617820db06889e1638499478da0de_NCA/1"
LOCALES = ("CNzh", "TWzh", "JPja", "EUen")
MEMBER = "STR_CategoryName.msbt"
KIND_LABEL = "hash_87BF00E8"
NATIVE_NOTE = "hash_036E8EBE"


def csvout(path: Path, fields: list[str], rows: list[list]) -> None:
    with path.open("w", encoding="utf-8-sig", newline="") as out:
        w = csv.writer(out)
        w.writerow(fields)
        w.writerows(rows)


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo-root", type=Path, default=Path("."))
    p.add_argument("--out", type=Path, required=True)
    args = p.parse_args()
    root = args.repo_root.resolve()
    dest = args.out.resolve()
    dest.mkdir(parents=True, exist_ok=True)

    with (root / "UnPack/1/Bcsv/ItemKind.csv").open(
        encoding="utf-8-sig", newline=""
    ) as f:
        categories = list(csv.DictReader(f))
    if len(categories) != 189:
        raise ValueError("Expected 189 original ItemKind category rows")
    labels = [x[KIND_LABEL] for x in categories]
    if len(set(labels)) != len(labels):
        raise ValueError("Duplicate ItemKind Label")

    tables: dict[str, dict[str, str]] = {}
    manifest = {}
    rawrows = []
    for locale in LOCALES:
        path = root / NCA / "Message" / ("String_" + locale + ".sarc.zs")
        compressed = path.read_bytes()
        uncompressed, method = decompress(compressed)
        archive_manifest, members = parse_sarc(uncompressed)
        if len(members) != 133:
            raise ValueError(f"Expected 133 MSBT members: {locale}; got {len(members)}")
        hit = [(name, raw) for name, raw in members if name == MEMBER]
        if len(hit) != 1:
            raise ValueError(f"Missing or duplicate original {MEMBER} in {locale}")
        parsed = parse_msbt(hit[0][1])
        mapping: dict[str, str] = {}
        for entry in parsed["entries"]:
            label = entry.get("label")
            if not label:
                continue
            if label in mapping:
                raise ValueError(f"Duplicate {locale} MSBT label {label}")
            text = entry["text"]
            mapping[label] = text
            has_control = ("\x0e" in text or "\x0f" in text)
            rawrows.append([
                locale, MEMBER, label, entry["index"],
                json.dumps(text, ensure_ascii=False),
                "" if has_control else text, int(has_control),
            ])
        tables[locale] = mapping
        manifest[locale] = {
            "archive_path": path.relative_to(root).as_posix(),
            "archive_sha256": hashlib.sha256(compressed).hexdigest(),
            "decompression_method": method,
            "sarc_members": len(members),
            "target_member": MEMBER,
            "source_msbt_entries": len(parsed["entries"]),
            "distinct_nonempty_labels": len(mapping),
            "msbt_text_encoding": parsed["text_encoding"],
            "msbt_sections": parsed["sections"],
        }
    csvout(
        dest / "r86_original_category_msbt_labels_4locale.csv",
        ["locale", "original_member", "msbt_label", "txt2_index",
         "raw_text_json", "text_without_control_only", "has_inline_control"],
        rawrows,
    )

    linked = []
    stats = {loc: {"exact_label": 0, "casefold_candidate": 0,
                   "unmatched": 0} for loc in LOCALES}
    for source in categories:
        label = source[KIND_LABEL]
        row = [source["hash_54706054"], label, source[NATIVE_NOTE]]
        for locale in LOCALES:
            mapping = tables[locale]
            if label in mapping:
                text, matched_label, status = (
                    mapping[label], label, "exact_MSBT_label"
                )
            else:
                candidates = [k for k in mapping if k.casefold() == label.casefold()]
                if len(candidates) == 1:
                    matched_label = candidates[0]
                    text, status = mapping[matched_label], "casefold_candidate_not_proven"
                else:
                    matched_label, text, status = "", "", "no_verified_label"
            stats[locale][
                "exact_label" if status == "exact_MSBT_label"
                else "casefold_candidate" if status == "casefold_candidate_not_proven"
                else "unmatched"
            ] += 1
            # Do not mark text containing inline MSBT control as clean final UI text.
            ui_text = text if "\x0e" not in text and "\x0f" not in text else ""
            row.extend([matched_label, ui_text, status])
        linked.append(row)
    csvout(
        dest / "r86_itemkind_189_category_locale_join.csv",
        ["kind_unique_id", "itemkind_label", "raw_japanese_note",
         *[field for loc in LOCALES for field in (
             loc + "_msbt_label", loc + "_raw_text_no_control",
             loc + "_join_status")]],
        linked,
    )
    result = {
        "schema": "acnh303_r86_exact_original_category_msbt_join_v1",
        "game_version": "3.0.3",
        "source_member": MEMBER,
        "locales": manifest,
        "itemkind_rows": len(categories),
        "per_locale_status": stats,
        "evidence_boundary": [
            "Only exact native label match is treated as a verified join",
            "Casefold is recorded as a candidate, never promoted to a verified join",
            "Original ItemKind Japanese note is NOT a localized CNzh name",
            "No fuzzy translation or forced equivalence for unmatched labels",
            "MSBT inline controls are preserved in raw text JSON; clean UI strings remain blank when controls occur",
        ],
    }
    (dest / "r86_category_locale_evidence.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2) + "\n", "utf-8"
    )
    print(json.dumps({
        "itemkind_rows": len(categories),
        "msbt_labels_by_locale": {k: len(v) for k, v in tables.items()},
        "matches": stats,
        "output_dir": str(dest),
    }, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
