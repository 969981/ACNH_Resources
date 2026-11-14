#!/usr/bin/env python3
"""R89 read-only Ghidra 12.2 SQLite function, symbol and XREF triage.

Requires exact preexisting 3.0.3 Ghidra shard-joined SQLite. No claim
of gameplay behavior without query registration -> target -> return proof.
"""
from __future__ import annotations
import argparse
import json
import sqlite3
from collections import Counter
from pathlib import Path

GHIDRA_BASE=0x00100000
FUNCTION_ADDRESSES={
    "Ghidra_FUN_00EE5828":"00ee5828",
    "Ghidra_FUN_00F089A0":"00f089a0",
    "Ghidra_UI_03133080":"03133080",
    "Ghidra_UI_01ACEDD4":"01acedd4",
    "Ghidra_UI_01AA3914":"01aa3914",
}
RAW_LITERAL_VA={
    "Camp_InduceFailFlag":0x3F671ED,
    "Camp_InduceFailAlreadyInduced":0x3FFE938,
    "Camp_InduceFailVillagerMax":0x3FD461D,
    "STR_CategoryName":0x3F83652,
    "ItemUIFurnitureCategory":0x3F96F2B,
    "ItemOutfitCategory":0x3FDF833,
}
SEARCH_NAMES=("CanInduceNpc","InduceFailedReason","NpcMoveOutState",
    "IsCallableAmiiboNpc","IsAcceptableAmiibo","STR_CategoryName",
    "ItemKind","ItemUIFurnitureCategory","ItemOutfitCategory")


def xrefs_for(db,va):
    # address strings in the Ghidra export are 8-hex-digit,
    # no address arithmetic inside sqlite, preserving index usage.
    canonical=f"{va:08x}"
    options=[canonical,canonical.upper(),"0x"+canonical,"0x"+canonical.upper()]
    options=list(dict.fromkeys(options))
    slots=",".join("?" for _ in options)
    count=db.execute(
        "SELECT COUNT(*) FROM xrefs WHERE target IN ("+slots+")",options
    ).fetchone()[0]
    rows=db.execute(
        "SELECT source,target,ref_type,operand_index FROM xrefs "
        "WHERE target IN ("+slots+") ORDER BY source LIMIT 128",options
    ).fetchall()
    return count,[dict(row) for row in rows]


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--db",required=True,type=Path)
    ap.add_argument("--repo-root",default=Path("."),type=Path)
    ap.add_argument("--out",required=True,type=Path)
    args=ap.parse_args()
    output=args.out.resolve()
    output.mkdir(parents=True,exist_ok=True)
    p=args.db.resolve()
    if not p.is_file() or p.stat().st_size<100_000_000:
        raise ValueError("Missing verified full Ghidra SQLite")
    db=sqlite3.connect("file:"+str(p)+"?mode=ro&immutable=1",uri=True)
    db.row_factory=sqlite3.Row
    db.execute("PRAGMA query_only=ON")
    required={"functions","symbols","xrefs","metadata"}
    names={r[0] for r in db.execute("SELECT name FROM sqlite_master WHERE type='table'")}
    if not required.issubset(names):
        raise ValueError("Ghidra SQLite table set missing")
    version=db.execute(
        "SELECT value FROM metadata WHERE name='ghidra_version'"
    ).fetchone()
    if version is None or version[0]!="12.2":
        raise ValueError("Unexpected Ghidra version")
    source_summary=json.loads((args.repo_root/
        "derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json"
        ).read_text(encoding="utf-8"))
    imagebase=int(source_summary["image_base"],16)
    if imagebase!=GHIDRA_BASE or source_summary["program"]!="main.elf":
        raise ValueError("Ghidra image base changed")

    functions={}
    for name,address in FUNCTION_ADDRESSES.items():
        va=int(address,16)
        row=db.execute("SELECT idx,address,name,namespace,signature,byte_count,"
          "decompile_status,c_path FROM functions WHERE lower(address)=?",
          (address.lower(),)).fetchone()
        count,refs=xrefs_for(db,va)
        functions[name]={
            "ghidra_va":"0x"+address.upper(),
            "original_elf_va":hex(va-imagebase),
            "ghidra_function_metadata":dict(row) if row else None,
            "xref_target_exact_count":count,
            "xref_samples":refs,
            "status":"registered_query_not_proven_even_if_callers_exist",
        }

    strings={}
    for name,raw in RAW_LITERAL_VA.items():
        count,refs=xrefs_for(db,raw+imagebase)
        strings[name]={
            "raw_elf_string_va":hex(raw),
            "ghidra_string_va":hex(raw+imagebase),
            "xref_target_exact_count":count,
            "xref_samples":refs,
        }

    symbol_hits=[]
    for name in SEARCH_NAMES:
        for row in db.execute(
            "SELECT address,name,symbol_type,source_type FROM symbols "
            "WHERE name LIKE ? LIMIT 120",("%"+name+"%",)):
            symbol_hits.append({"term":name,**dict(row)})
    source_group=Counter((s["ref_type"] or "") for t in functions.values()
                         for s in t["xref_samples"])
    report={
        "schema":"acnh303_r89_native_ghidra_all_xrefs_v1",
        "game_version":"3.0.3",
        "ghidra_image_base":hex(imagebase),
        "ghidra_progress":{"functions_exported":db.execute(
            "SELECT COUNT(*) FROM functions").fetchone()[0],
            "xref_rows":db.execute("SELECT COUNT(*) FROM xrefs").fetchone()[0],
            "symbol_rows":db.execute("SELECT COUNT(*) FROM symbols").fetchone()[0],
            "program":source_summary["program"]},
        "function_targets":functions,
        "original_string_targets":strings,
        "relevant_symbol_name_matches":symbol_hits,
        "xref_sample_types":dict(source_group),
        "limitations":[
            "Indexed Ghidra references are static; neither absence nor presence proves runtime eligibility",
            "Ghidra exported 25k of ~60k functions at this checkpoint; all source refs depend on analyzed project",
            "No spelled-out Query name in ELF and no verified Query register->target function mapping",
            "Image base corrected to 0x00100000 for all Ghidra addresses",
        ],
    }
    (output/"r89_ghidra_xref_evidence.json").write_text(
        json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8"
    )
    summary={
        "schema":"acnh303_r89_ghidra_xref_summary_v1",
        "functions_exported":report["ghidra_progress"]["functions_exported"],
        "xref_rows":report["ghidra_progress"]["xref_rows"],
        "symbol_rows":report["ghidra_progress"]["symbol_rows"],
        "function_refs":{n:v["xref_target_exact_count"] for n,v in functions.items()},
        "string_refs":{n:v["xref_target_exact_count"] for n,v in strings.items()},
        "relevant_symbols":len(symbol_hits),
        "gameplay_eligibility_proven":False,
    }
    (output/"r89_ghidra_xref_summary.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    db.close()

if __name__=="__main__":
    main()
