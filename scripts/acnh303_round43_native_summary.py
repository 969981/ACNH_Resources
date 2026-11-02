#!/usr/bin/env python3
"""R43 native gap matrix: independently retain only bounded original-byte evidence."""
from __future__ import annotations
import argparse,collections,json,hashlib
from pathlib import Path
def aggregate(reports,model,r42):
 docs=sorted(reports.rglob("native_header_audit.json"))
 if len(docs)!=4:raise ValueError("exactly four BARS native shard audits required")
 total=0;rows=[];counts=collections.Counter();unique=set()
 for path in docs:
  doc=json.loads(path.read_text("utf8"))
  if doc["failed_member_count"]!=len(doc["failed_members"]):
   raise ValueError("native failure count drift")
  total+=doc["original_sources_verified"]
  for row in doc["failed_members"]:
   key=(row["source_path"],row["index"])
   if key in unique:raise ValueError("duplicate original failed BWAV member")
   unique.add(key);counts[row["category"]]+=1;rows.append(row)
 if total!=128:raise ValueError("last 128 BARS not independently audited")
 cedar=json.loads(model.read_text("utf8"))
 earlier=json.loads(r42.read_text("utf8"))
 if cedar["source_sha256"]!=earlier["Cedar_FRES_source"]["source_sha256"] or not cedar["leaves"]:
  raise ValueError("original Cedar source SHA mismatch")
 for x in cedar["leaves"]:
  if x.get("magic_occurrences_not_counts",{}).get("FMAA",0)!=len(x.get("bounded_FMAA_occurrences",[])):
   raise ValueError("FMAA offset/magic count inconsistent")
 return {"schema":"acnh303-r43-native-evidence-and-semantic-gates-v1",
  "new_BARS_original_sources_verified":total,"new_BARS_failed_BWAV_count":len(rows),
  "new_BARS_failure_categories":dict(sorted(counts.items())),"new_BARS_failed_members":rows,
  "prior_R42_native_gap_matrix_sha256":hashlib.sha256(r42.read_bytes()).hexdigest(),
  "Cedar_FMAA_original_bytes_audit":cedar,
  "independent_semantic_gates":{
   "FMAA":{"source_bytes_and_magic_verified":True,"animation_records_deserialized":False,
           "material_curve_frames_verified":False,"runtime_playback_verified":False},
   "AAL":{"failed_member_bytes_verified":True,"external_stream_file_identity_verified":False,
          "runtime_AAL_file_IO_trace_verified":False,"external_stream_pcm_verified":False},
   "BDLI_LBLI":{"prior_L2_extraction_reported":True,"native_label_and_control_semantics_verified":False},
   "EventFlow":{"prior_graph_extraction_reported":True,"action_query_runtime_binding_verified":False},
   "BNSH_Shader":{"prior_native_members_extracted":True,"GPU_stage_reflection_and_material_binding_verified":False}},
  "limits":"L3 source test completeness does not prove every member decodes or original runtime semantics."}
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--reports",type=Path,required=True)
 p.add_argument("--model",type=Path,required=True)
 p.add_argument("--r42",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();v=aggregate(a.reports,a.model,a.r42)
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(v,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
 print("R43_NATIVE_GAPS",v["new_BARS_original_sources_verified"],v["new_BARS_failure_categories"])
if __name__=="__main__":main()
