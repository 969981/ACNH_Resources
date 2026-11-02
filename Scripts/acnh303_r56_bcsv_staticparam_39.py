#!/usr/bin/env python3
"""R56: strict source-level probe of 39 names in BCSV and original StaticParam.pack."""
from pathlib import Path
import csv,hashlib,json,re
from collections import defaultdict,Counter
from acnh_formats import detect,decompress,parse_sarc,FormatError
from acnh303_r53_client_csv_audit import screenshot_name_hints

ROOT=Path(".")
PACK=Path("e10617820db06889e1638499478da0de_NCA/1/Pack/StaticParam.pack")
E=Path("assets/evidence/rom-items")
names=[x["catalog_name"] for x in json.loads((E/"r54-pokercore-versions-and-rom-name-gaps.json").read_text())["unresolved_40"] if x["catalog_name"]!="FtrSoftdrinkOrange_3.0.0.png"]
if len(names)!=39 or len(set(names))!=39:raise ValueError("39 original catalog names changed")
names=sorted(names)
stems={}
for name in names:
 stem=name[:-4]
 candidates=screenshot_name_hints(name)
 if stem.endswith("0_0") and stem[:-3] not in candidates:candidates.append(stem[:-3])
 if stem.endswith("_0") and stem[:-2] not in candidates:candidates.append(stem[:-2])
 stems[name]=list(dict.fromkeys(candidates))
rows={name:{"catalog_name":name,"candidate_names":stems[name],"bcsv_exact_cell_hits":[],
 "pack_exact_member_matches":[],"pack_binary_utf8_hits":[],"runtime_image_equivalence_verified":False} for name in names}
source_csvs=sorted((ROOT/"UnPack/1/Bcsv").glob("*.csv"))
if len(source_csvs)!=234:raise ValueError("Original decoded BCSV inventory must contain 234 files")
seen_files=[]
for csvfile in source_csvs:
 n=0;hits=0
 with csvfile.open(encoding="utf-8-sig",newline="",errors="replace") as stream:
  r=csv.reader(stream)
  for lineno,line in enumerate(r,1):
   if lineno==1:continue
   n+=1
   cell_set=set(x.strip() for x in line if x)
   for name in names:
    matched=cell_set.intersection(stems[name])
    if matched:
     rows[name]["bcsv_exact_cell_hits"].append({"file":csvfile.as_posix(),"row":lineno,"matched_strings":sorted(matched)})
     hits+=len(matched)
 seen_files.append({"source":csvfile.as_posix(),"line_count":n,"matched_terms":hits})
data=PACK.read_bytes()
archive={"original_source":PACK.as_posix(),"source_sha256":hashlib.sha256(data).hexdigest(),
 "source_bytes":len(data),"raw_detected_format":detect(data),
 "sarc_member_count":None,"inner_format":None,"parsed":False,"parse_errors":[]}
try:
 if detect(data) in ("zstd","yaz0"):
  data,kind=decompress(data,limit=100*1024*1024)
  archive["inner_format"]=kind+"->"+detect(data)
 if detect(data)=="sarc":
  entries,members=parse_sarc(data)
  archive["sarc_member_count"]=len(entries)
  archive["parsed"]=True
  for member,payload in members:
   # String association is NOT picture/resource identity.
   for name in names:
    for stem in stems[name]:
     if member.rsplit("/",1)[-1].split(".")[0]==stem:
      rows[name]["pack_exact_member_matches"].append({"member":member,"term":stem})
     if stem.encode("ascii") in payload:
      rows[name]["pack_binary_utf8_hits"].append({"member":member,"term":stem,
          "member_sha256":hashlib.sha256(payload).hexdigest()})
 else:
  archive["parse_errors"].append("source_is_not_a_supported_sarc_archive")
except (FormatError,OSError,ValueError) as exc:
 archive["parse_errors"].append(type(exc).__name__+": "+str(exc)[:180])
stats=Counter(
 "bcsv_exact" if row["bcsv_exact_cell_hits"] else
 "pack_candidate" if row["pack_exact_member_matches"] or row["pack_binary_utf8_hits"] else "no_hit"
 for row in rows.values())
report={"schema":"acnh303_r56_original_bcsv_staticparam_39_v1",
 "input_count":39,"original_bcsv_tables_scanned":len(source_csvs),
 "original_pack_archive":archive,"result_groups":dict(stats),
 "original_image_source_verified":False,
 "does_not_search_all_original_model_textures":True,
 "old_rom_version_independently_verified":False,
 "original_pending_1254_promoted":0,
 "source_csvs":seen_files,"items":list(rows.values())}
(E/"r56-bcsv-staticparam-original-39.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
with (E/"r56-bcsv-staticparam-original-39.csv").open("w",encoding="utf-8",newline="") as f:
 w=csv.writer(f);w.writerow(["catalog_name","bcsv_exact_row_hits","pack_exact_member_hits","pack_binary_string_hits","source_mapping_verified"])
 for row in rows.values():w.writerow([row["catalog_name"],len(row["bcsv_exact_cell_hits"]),len(row["pack_exact_member_matches"]),len(row["pack_binary_utf8_hits"]),False])
print(json.dumps({k:v for k,v in report.items() if k not in ("source_csvs","items")},ensure_ascii=False))
