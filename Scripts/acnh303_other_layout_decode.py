#!/usr/bin/env python3
"""Decode verified exact other-layout ROM sources, never overwrite FtrIcon assets."""
import json,argparse
from pathlib import Path
from collections import Counter
from acnh303_villager_rom_extract import convert_one
from acnh303_assets import png_info

def main():
 p=argparse.ArgumentParser()
 p.add_argument("mode",choices=["plan","export"])
 p.add_argument("--wimgt",type=Path)
 args=p.parse_args()
 root=Path(".").resolve()
 doc=json.loads((root/"assets/evidence/rom-items/unmatched-exact-other-layout.json").read_text("utf-8"))
 if doc["total_source_candidates"]!=391 or doc["all_1254_original_names_still_pending"] is not True:
  raise ValueError("Source evidence changed")
 rows=[(r,c) for r in doc["entries"] for c in r["candidates"]]
 if len(rows)!=391 or any(len(r["candidates"])>1 for r in doc["entries"]):
  raise ValueError("Expected 391 unique exact sources")
 if args.mode=="plan":
  Path("/tmp/acnh-other-sources.txt").write_text("".join("/"+c["original_rom_source"]+"\n" for _,c in rows))
  print("Planned genuine non-FtrIcon source files:",len(rows))
  return
 if not args.wimgt or not args.wimgt.is_file():p.error("real decoder needed")
 results=[]
 for r,c in rows:
  family=c["layout_family"]
  src=root/c["original_rom_source"]
  try:
   result=convert_one(root,args.wimgt.resolve(),
     (family,"assets/images/other-layout/"+family,src,r["pending_name"]),
     seconds=120,output_mb=20,raw_dir=Path("assets/textures/other-layout"))
   for img in result["pngs"]:
    if png_info(root/img["output"])["sha256"]!=img["sha256"]:raise ValueError("Output PNG mismatch")
  except Exception as e:
   result={"status":"original_decode_error","source":c["original_rom_source"],
     "category":family,"requested_png_name":r["pending_name"],"error":str(e)[:300],"pngs":[]}
  result["standard_item_icon_mapping_verified"]=False
  results.append(result)
 counts=Counter(r["status"] for r in results)
 report={"schema":"acnh303_other_UI_layout_native_exports_v1","original_sources_attempted":391,
         "counts":dict(counts),"original_unmatched_names_preserved":1254,
         "not_standard_FtrIcon_equivalence":True,"results":results}
 dst=root/"assets/evidence/rom-other-layout";dst.mkdir(parents=True,exist_ok=True)
 (dst/"report.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
 print(json.dumps({k:v for k,v in report.items() if k!="results"},ensure_ascii=False))
if __name__=="__main__":main()
