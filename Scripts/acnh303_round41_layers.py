#!/usr/bin/env python3
"""Layer-segregated R41 RomFS report. Never interpret header/partial as full decode."""
from __future__ import annotations
import argparse,csv,gzip,json
from collections import Counter
from pathlib import Path
BASE=Path("derived/3.0.3")
def calculate(delta):
    with gzip.open(BASE/"inventory/source_manifest.csv.gz","rt",encoding="utf8",newline="") as f:
        original=list(csv.DictReader(f))
    inv={r["source_relative_path"]:int(r["source_size"]) for r in original}
    if len(original)!=103400 or len(inv)!=103400:
        raise ValueError("L0 full original inventory missing/duplicated")
    early=json.loads((BASE/"effective/coverage.json").read_text("utf8"))
    if early["processed_source_count"]!=103400 or early["missing"]!=0 or early["extra"]!=0:
        raise ValueError("historical L1/L2 source-coverage records invalid")
    with gzip.open(delta,"rt",encoding="utf8") as f:
        records=[json.loads(s) for s in f if s.strip()]
    if len(records)!=480 or len({x["source_path"] for x in records})!=480:
        raise ValueError("R41 480 original SHA-proven sources missing")
    for r in records:
        if r["source_path"] not in inv or inv[r["source_path"]]!=r["source_bytes"] or len(r["source_sha256"])!=64:
            raise ValueError("R41 original path, size or SHA unavailable")
    if Counter(r["category"] for r in records)!={"Model":320,"BARS":160}:
        raise ValueError("R41 original-source category mismatch")
    counts={"Model":(60166,2868),"Layout":(960,960),"standalone_BWAV":(1146,1146),"BARS":(1696,1248)}
    bytype={name:{"original":total,"entered_l3":tested,"not_l3_tested":total-tested,
                  "qualification":"L3 source tested; not necessarily output media or native semantics"}
            for name,(total,tested) in counts.items()}
    return {"schema":"acnh303-r41-separate-layers-v1",
      "l0_original_romfs":{"files":len(inv),"bytes":sum(inv.values()),"missing":0},
      "historical_l1_l2_parser":{"converted":early["status_counts"]["converted"],
          "partial":early["status_counts"]["partial"],
          "note":"Historical 2026-10-13 parser classification, NOT updated by later L3 conversions"},
      "l3_tested_source_categories":bytype,
      "new_r41_originals":{"model":320,"bars":160},
      "remaining_unmeasured_model_plus_bars":bytype["Model"]["not_l3_tested"]+bytype["BARS"]["not_l3_tested"],
      "native_semantic_backlog":["FSKA and original engine animation parity","AMTA v5 and external streamed audio",
          "BDLI LBLI semantics","EventFlow native handlers","BNSH GPU stage/binding",
          "BFLYT BFLAN GPU renderer and playback"],
      "limits":"L0 completeness does not mean complete content extraction, media transcoding or runtime semantic parity."}
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--delta",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args(); report=calculate(a.delta)
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
    print("R41 SEPARATE LAYERS",report["remaining_unmeasured_model_plus_bars"])
if __name__=="__main__":main()
