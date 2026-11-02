#!/usr/bin/env python3
"""R54 compare real pinned PokerCore CSV revisions 3.0.0 vs 3.0.2.

This is *not* an independent 3.0.0/3.0.2 RomFS binary comparison. Historical
client tables are labels/metadata, not proof that an icon lived in either ROM.
"""
from __future__ import annotations
import argparse,csv,hashlib,json,re,subprocess
from collections import Counter,defaultdict
from pathlib import Path
from acnh303_r53_client_csv_audit import parse_pokercore_csv, screenshot_name_hints

PREFIX="e10617820db06889e1638499478da0de_NCA/1"
REVISIONS={
  "client_3_0_0":{"commit":"3cda3450bf7b432bc39d206856dda530cbf22432","folder":"upstream-pokercore-300"},
  "client_3_0_2":{"commit":"ec697289b079eb933fcd4bc21b40aa9b8c1c0ca8","folder":"upstream-pokercore-302"}
}
FILES=("items.csv","variations.csv","field.csv","override.csv")
EVIDENCE=Path("assets/evidence/rom-items")
def load(p):return json.loads(p.read_text(encoding="utf-8"))
def collect(root,rev):
    data={}
    for name in FILES:
        p=root/rev["folder"]/"ACNHPokerCore/csv"/name
        data[name]=parse_pokercore_csv(p)
    indexes={}
    for name,a in data.items():
        ix=defaultdict(list)
        for row in a["records"]:
            ix[row["iName"]].append(row)
        indexes[name]=ix
    return data,indexes

def assess(root):
    r53=load(root/EVIDENCE/"r53-client-iname-id-and-40.json")
    if r53.get("native_344_candidates")!=344 or r53.get("missing_40_count")!=40:
        raise ValueError("Previous evidence missing/invalid")
    if r53["client_id_and_name_exact_status"]!={"items_and_variations":344}:
        raise ValueError("R53 complete current-app mapping changed")
    v={k:collect(root,rev) for k,rev in REVISIONS.items()}
    variants=[]
    for rec in r53["base_names_344"]:
        name=rec["name"];iid=rec["original_item_id_decimal"]
        comparisons={}
        for label,(tables,idx) in v.items():
            comparisons[label]={}
            for file in ("items.csv","variations.csv"):
                matching=[x for x in idx[file].get(name,[]) if x["id_decimal"]==iid]
                comparisons[label][file]={"exact_id_and_iname":bool(matching),
                    "matched_rows":len(matching)}
        variants.append({"name":name,"original_3_0_3_item_id":iid,"client_snapshots":comparisons,
              "independent_older_game_rom_verified":False})
    version_counts={}
    for label in REVISIONS:
        version_counts[label]={
          filename:sum(r["client_snapshots"][label][filename]["exact_id_and_iname"] for r in variants)
          for filename in ("items.csv","variations.csv")
        }
    r40=[]
    for item in r53["remaining_40"]:
        name=item["name"]
        hints=screenshot_name_hints(name)
        by_version={}
        for label,(data,index) in v.items():
            found=[]
            for filename in FILES:
                for term in hints:
                    for row in index[filename].get(term,[]):
                        found.append({"csv":filename,"iName":row["iName"],
                                      "id_hex":row["id_hex"],"line":row["line"],
                                      "literal_catalog_stem":term==name.removesuffix(".png")})
            by_version[label]=found
        r40.append({"catalog_name":name,"in_client_tables":by_version,
                    "client_3_0_0_name_found":bool(by_version["client_3_0_0"]),
                    "client_3_0_2_name_found":bool(by_version["client_3_0_2"]),
                    "separate_verified_game_rom_3_0_0":False,
                    "separate_verified_game_rom_3_0_2":False,
                    "catalog_mapping_verified":False})
    tree=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",
                         PREFIX+"/Model"],cwd=root,capture_output=True,
                         text=True,check=True,timeout=120).stdout.splitlines()
    soft=[p for p in tree if p.rsplit("/",1)[-1].endswith("_FtrSoftdrinkOrange.Nin_NX_NVN.zs")]
    # Also detect actual original sources for all 40 names using *candidate base*
    # stems, as opposed to only the exact supplied (possibly version-suffixed) filename.
    candidate_paths=[]
    for item in r40:
        candidates=screenshot_name_hints(item["catalog_name"])[1:]
        matches=[p for p in tree for base in candidates
                 if p.rsplit("/",1)[-1].endswith("_"+base+".Nin_NX_NVN.zs")]
        item["original_3_0_3_rom_alternate_base_source_paths"]=matches[:24]
        item["original_3_0_3_rom_alternate_base_source_count"]=len(matches)
        if matches:candidate_paths.append(item["catalog_name"])
    stats=Counter(
        ("both" if x["client_3_0_0_name_found"] and x["client_3_0_2_name_found"]
         else "3_0_0_only" if x["client_3_0_0_name_found"]
         else "3_0_2_only" if x["client_3_0_2_name_found"] else "neither")
        for x in r40
    )
    return {"schema":"acnh303_r54_historical_pokercore_client_versions_v1",
            "historical_client_commits":{k:v["commit"] for k,v in REVISIONS.items()},
            "historical_client_csv_sha256":{k:{n:r["sha256"] for n,r in item[0].items()}
                                             for k,item in v.items()},
            "historical_client_csv_row_counts":{k:{n:r["row_count"] for n,r in item[0].items()}
                                                 for k,item in v.items()},
            "original_344_client_snapshot_name_id_matches":version_counts,
            "remaining_40_client_snapshot_presence":dict(sorted(stats.items())),
            "remaining_40_with_3_0_3_alternate_base_rom_source":len(candidate_paths),
            "remaining_40_with_3_0_3_alternate_base_rom_source_names":candidate_paths,
            "FtrSoftdrinkOrange_3_0_3_same_base_source_examples":soft[:10],
            "separately_verified_older_game_roms_available":False,
            "historic_client_csv_is_not_an_older_rom_dump":True,
            "original_1254_pending_names_promoted":0,
            "base_344":variants,
            "unresolved_40":r40}
def main():
    ap=argparse.ArgumentParser();ap.add_argument("--root",type=Path,default=Path("."))
    args=ap.parse_args();root=args.root.resolve()
    doc=assess(root)
    target=root/EVIDENCE
    (target/"r54-pokercore-versions-and-rom-name-gaps.json").write_text(
         json.dumps(doc,indent=2,ensure_ascii=False)+"\n","utf-8")
    with (target/"r54-unresolved-40-versions.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["catalog_name","client_3_0_0_name_found","client_3_0_2_name_found",
                    "rom_3_0_3_other_base_sources","older_rom_version_ever_verified"])
        for r in doc["unresolved_40"]:
            w.writerow([r["catalog_name"],r["client_3_0_0_name_found"],
                r["client_3_0_2_name_found"],
                "|".join(r["original_3_0_3_rom_alternate_base_source_paths"]),False])
    print(json.dumps({k:v for k,v in doc.items() if k not in ("base_344","unresolved_40")},ensure_ascii=False))
if __name__=="__main__":main()
