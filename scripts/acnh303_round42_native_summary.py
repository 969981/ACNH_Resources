#!/usr/bin/env python3
"""Reconcile independent original-file proof for R42 failures and Native gaps."""
from __future__ import annotations
import argparse,collections,json
from pathlib import Path
def aggregate(root,model):
 docs=sorted(root.rglob("native_header_audit.json"))
 if len(docs)!=8:raise ValueError("8 BARS native header audits required, found "+str(len(docs)))
 rows=[];source_total=0;bycat=collections.Counter();identities=set()
 for p in docs:
  d=json.loads(p.read_text("utf8"))
  if d["failed_member_count"]!=len(d["failed_members"]):raise ValueError("BARS failure count drift")
  source_total+=d["original_sources_verified"]
  for x in d["failed_members"]:
   key=(x["source_path"],x["index"])
   if key in identities:raise ValueError("duplicate failed BWAV original")
   identities.add(key);bycat[x["category"]]+=1;rows.append(x)
 if source_total!=320:raise ValueError("R42 original BARS sources audit incomplete")
 d=json.loads(model.read_text("utf8"))
 if d["source_sha256"]!="3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f" or not d["leaves"]:
  raise ValueError("Cedar raw source header provenance absent")
 return {"schema":"acnh303-r42-verified-native-gap-matrix-v1",
 "audited_BARS_original_sources":source_total,
 "BARS_failed_BWAV_members":len(rows),
 "failed_BWAV_categories":dict(sorted(bycat.items())),
 "Cedar_FRES_source":d,"BARS_failed_member_details":rows,
 "semantic_verification":{"Native_FSKA_playback":False,"AAL_external_file_reads":False,
 "GPU_shader_material_bindings":False,"BDLI_LBLI_full_meaning":False,
 "EventFlow_full_execution":False},
 "limitations":"Original bytes and member SHA-proven. The external AAL file open/read/close chain and engine animation playback require runtime evidence."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--reports",type=Path,required=True)
 p.add_argument("--model",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();v=aggregate(a.reports,a.model)
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(v,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
 print("R42_NATIVE_GAPS",v["BARS_failed_BWAV_members"],v["failed_BWAV_categories"])
if __name__=="__main__":main()
