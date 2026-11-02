#!/usr/bin/env python3
"""Exact other-Layout ROM source discovery; no PNG copies, no name promotion."""
import argparse,csv,json,re,subprocess
from collections import Counter,defaultdict
from pathlib import Path

ROM="e10617820db06889e1638499478da0de_NCA/1/Model"
SUF=".Nin_NX_NVN.zs"
UNSAFE={"FtrIcon","ClosetIcon","NpcIcon","NpcBromide"}

def generate(root):
    doc=json.loads((root/"assets/evidence/rom-items/unmatched-candidate-audit.json").read_text("utf-8"))
    pending=[x for x in doc["entries"] if x["category"]=="no_named_candidate_in_rom_tree"]
    if len(pending)!=431 or doc["unmatched_names"]!=1254:
        raise ValueError("Original pending list mismatch")
    names={x["filename"][:-4]:x["filename"] for x in pending}
    result=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",ROM],cwd=root,
        check=True,capture_output=True,text=True,timeout=120)
    candidates=defaultdict(list)
    for path in result.stdout.splitlines():
        base=path.rsplit("/",1)[-1]
        if not base.startswith("Layout_") or not base.endswith(SUF):continue
        middle=base[7:-len(SUF)]
        for stem in names:
            if not middle.endswith("_"+stem):continue
            family=middle[:-(len(stem)+1)]
            if family in UNSAFE or not re.fullmatch(r"[A-Za-z0-9_-]+",family):continue
            candidates[stem].append({"layout_family":family,"original_rom_source":path,
                "native_brti_name_expected_but_not_yet_checked":stem,
                "is_standard_FtrIcon":False})
    rows=[]
    for stem,name in sorted(names.items()):
        source=sorted(candidates[stem],key=lambda z:z["original_rom_source"])
        rows.append({"pending_name":name,"exact_other_layout_source_count":len(source),
                     "candidates":source,"catalog_mapping_verified":False,
                     "native_png_extracted_for_catalog_name":False})
    sums=Counter()
    for row in rows:
        for source in row["candidates"]:sums[source["layout_family"]]+=1
    return {"schema":"acnh303_exact_alternate_layout_candidate_plan_v1",
            "total_unmatched_no_named_layout":431,
            "names_with_exact_other_layout_source":sum(bool(r["candidates"]) for r in rows),
            "total_source_candidates":sum(len(r["candidates"]) for r in rows),
            "layout_families":dict(sorted(sums.items())),
            "all_1254_original_names_still_pending":True,
            "source_name_is_not_final_ui_semantic_proof":True,
            "entries":rows}

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("--root",type=Path,default=Path("."))
    args=parser.parse_args()
    root=args.root.resolve()
    result=generate(root)
    out=root/"assets/evidence/rom-items"
    (out/"unmatched-exact-other-layout.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    with (out/"unmatched-exact-other-layout.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["pending_name","exact_source_count","layout_family","original_rom_source","mapping_verified"])
        for row in result["entries"]:
            for src in row["candidates"] or [None]:
                w.writerow([row["pending_name"],row["exact_other_layout_source_count"],
                    src["layout_family"] if src else "",
                    src["original_rom_source"] if src else "",False])
    print(json.dumps({k:v for k,v in result.items() if k!="entries"},ensure_ascii=False))
if __name__=="__main__":
    main()
