#!/usr/bin/env python3
"""Audit unpaired ACNH 3.0.3 PNG names against ORIGINAL ROM source metadata.

Hypothetical matches and model textures are never counted as extracted PNGs.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import subprocess
from collections import Counter
from datetime import datetime, timezone
from pathlib import Path

NCA = "e10617820db06889e1638499478da0de_NCA/1/Model"
EXT = ".Nin_NX_NVN.zs"
FAMILIES = ("FtrIcon", "ClosetIcon", "NpcIcon")
SAFE = re.compile(r"[A-Za-z0-9_.-]+\.png\Z")


def filenames(path: Path) -> list[str]:
    result, seen = [], set()
    for line in path.read_text(encoding="utf-8-sig").splitlines():
        name = line.strip()
        if not name or name.startswith("#") or name in seen:
            continue
        if not SAFE.fullmatch(name):
            raise ValueError(f"unexpected catalog filename: {name[:180]}")
        seen.add(name)
        result.append(name)
    return result


def rom_tree(root: Path) -> set[str]:
    proc = subprocess.run(
        ["git", "ls-tree", "-r", "--name-only", "HEAD", "--", NCA],
        cwd=root, capture_output=True, text=True, timeout=90, check=True,
    )
    return set(proc.stdout.splitlines())


def family_path(family: str, stem: str) -> str:
    return f"{NCA}/Layout_{family}_{stem}{EXT}"


def find_candidates(stem: str, tree: set[str]) -> tuple[str, list[dict]]:
    candidates: list[dict] = []
    seen: set[str] = set()

    def consider(path: str, hypothesis: str) -> None:
        if path in tree and path not in seen:
            candidates.append({
                "source_path": path, "hypothesis": hypothesis,
                "mapping_verified": False, "pixel_verified": False,
            })
            seen.add(path)

    # Photo portraits, item icons and model material textures are independent.
    consider(family_path("NpcBromide", stem), "independent_villager_photo_layout")

    for family in ("FtrIcon", "ClosetIcon"):
        consider(family_path(family, stem + "_Remake_0_0"), "possible_remake_zero_zero")
        consider(family_path(family, stem + "_0_0"), "possible_style_zero_zero")
        consider(family_path(family, stem + "0"), "possible_style_zero")

    consider(f"{NCA}/{stem}{EXT}", "model_not_rendered_item_icon")
    if "_Remake_" in stem:
        base = stem.split("_Remake_", 1)[0]
        consider(f"{NCA}/{base}{EXT}", "base_model_not_icon")
        for family in FAMILIES:
            consider(family_path(family, base), "base_layout_not_named_variant")

    if any(c["hypothesis"] == "independent_villager_photo_layout" for c in candidates):
        category = "villager_photo_other_family"
    elif any(c["hypothesis"].startswith("possible_") for c in candidates):
        category = "variant_mapping_needed"
    elif candidates:
        category = "model_or_base_resource_only"
    else:
        category = "no_named_candidate_in_rom_tree"
    return category, candidates


def audit(names: list[str], tree: set[str]) -> dict:
    unmatched, matched_count, alternate_count = [], 0, 0
    for filename in names:
        stem = filename[:-4]
        direct = [family_path(family, stem) for family in FAMILIES
                  if family_path(family, stem) in tree]
        # Mirror the exact-name matching policy in acnh303_rom_item_icons.py:
        # a filename with embedded dots is *not* accepted as a direct match.
        canonical = bool(re.fullmatch("[A-Za-z0-9_-]+[.]png", filename))
        if direct and canonical:
            matched_count += 1
            alternate_count += len(direct) - 1
            continue
        category, candidates = find_candidates(stem, tree)
        if direct and not canonical:
            category = "noncanonical_filename_requires_manual_mapping"
            candidates = [
                {"source_path": path, "hypothesis": "noncanonical_exact_name",
                 "mapping_verified": False, "pixel_verified": False}
                for path in direct
            ] + candidates
        unmatched.append({
            "filename": filename,
            "status": "pending_original_rom_source_verification",
            "category": category,
            "candidate_count": len(candidates),
            "candidates": candidates,
            "direct_same_named_layout_found": False,
            "native_png_extracted_for_this_entry": False,
            "manual_mapping_or_runtime_verification_required": True,
        })
    return {
        "schema": "acnh303_unmatched_rom_source_candidate_audit_v1",
        "source": "original_ACNH_3_0_3_git_tree_metadata",
        "source_root": NCA,
        "native_pngs_produced_by_this_audit": 0,
        "candidate_is_not_proven_image": True,
        "expected_image_names": len(names),
        "direct_same_named_layout_sources": matched_count,
        "multiple_same_named_layout_sources": alternate_count,
        "unmatched_names": len(unmatched),
        "classification_counts": dict(sorted(Counter(r["category"] for r in unmatched).items())),
        "entries": unmatched,
    }


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--catalog", type=Path, default=Path("assets/catalog/expected-png-names.txt"))
    p.add_argument("--out", type=Path, default=Path("assets/evidence/rom-items/unmatched-candidate-audit.json"))
    p.add_argument("--csv", type=Path, default=Path("assets/evidence/rom-items/unmatched-candidate-audit.csv"))
    p.add_argument("--expect-unmatched", type=int, default=None)
    args = p.parse_args()
    root = args.root.resolve()
    catalog = root / args.catalog
    names = filenames(catalog)
    tree = rom_tree(root)
    report = audit(names, tree)
    report["catalog_sha256"] = hashlib.sha256(catalog.read_bytes()).hexdigest()
    report["generated_utc"] = datetime.now(timezone.utc).isoformat()
    report["original_model_entries_in_tree"] = len(tree)

    if args.expect_unmatched is not None and report["unmatched_names"] != args.expect_unmatched:
        raise ValueError(
            f"catalog/tree changed: expected {args.expect_unmatched}, got {report['unmatched_names']}"
        )

    out = root / args.out
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    csv_path = root / args.csv
    csv_path.parent.mkdir(parents=True, exist_ok=True)
    with csv_path.open("w", encoding="utf-8", newline="") as handle:
        writer = csv.writer(handle)
        writer.writerow(["filename", "status", "category", "candidate_count", "hypotheses", "rom_candidate_paths"])
        for row in report["entries"]:
            writer.writerow([
                row["filename"], row["status"], row["category"], row["candidate_count"],
                " | ".join(c["hypothesis"] for c in row["candidates"]),
                " | ".join(c["source_path"] for c in row["candidates"]),
            ])
    print(json.dumps({k: v for k, v in report.items() if k != "entries"}, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
