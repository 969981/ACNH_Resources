#!/usr/bin/env python3
"""R17 Model/BFRES real L3 classification and failure census.

Source identity is taken from exact R16/R17 manifests, never heuristically
from filenames; "mesh" requires decoder-validated GLB POSITION accessors.
"""
import argparse
import gzip
import json
from collections import Counter
from pathlib import Path

BASE=Path("derived/3.0.3")
def rows(p):
    with gzip.open(p,"rt",encoding="utf-8") as f:
        for line in f:
            if line.strip():yield json.loads(line)

def classify():
    old={r["source_path"] for r in rows(BASE/"media_round16_cumulative/source_manifest.jsonl.gz")}
    new=[r for r in rows(BASE/"media_round17_cumulative/source_manifest.jsonl.gz")
         if r["source_path"] not in old and r["source_path"].startswith("Model/")]
    if len(old)!=1918 or len(new)!=288 or len({r["source_path"] for r in new})!=288:
        raise ValueError("R17 Model source baseline or source uniqueness mismatch")
    classes=Counter()
    statuses=Counter()
    errors=Counter()
    outputs=Counter()
    records=[]
    for r in sorted(new,key=lambda x:x["source_path"]):
        cls=r.get("source_media_class","unknown_unclassified")
        media={o["validation"]["type"] for o in r["validated_outputs"]}
        if cls=="texture_only_fres_bntx" and ("glb" in media or "png" not in media):
            raise ValueError("texture-only FRES not proven by PNG: "+r["source_path"])
        if cls=="model_geometry_bfres" and r["status"] in ("converted_media","partial_media") and "glb" not in media:
            raise ValueError("geometry classification without actual GLB: "+r["source_path"])
        if cls not in ("texture_only_fres_bntx","model_geometry_bfres"):
            if r["status"] in ("converted_media","partial_media"):
                raise ValueError("converted Model has no proven class")
        classes[cls]+=1
        statuses[r["status"]]+=1
        for output in r["validated_outputs"]:outputs[output["validation"]["type"]]+=1
        for error in r["parser_errors"]:
            errors[error.get("error","unknown")]+=1
        records.append({"source_path":r["source_path"],"source_sha256":r["sha256"],
                        "source_bytes":r["source_bytes"],"class":cls,
                        "state":r["status"],"output_types":sorted(media),
                        "errors":r["parser_errors"]})
    return {"schema":"acnh303-r17-bfres-real-geometry-vs-texture-v1",
            "new_model_sources":len(new),
            "class_counts":dict(sorted(classes.items())),
            "status_counts":dict(sorted(statuses.items())),
            "validated_media_output_counts":dict(sorted(outputs.items())),
            "failure_reason_counts":dict(sorted(errors.items())),
            "records":records,
            "limits":"GLB implies real validated geometry. Texture-only FRES requires real validated BNTX PNG; unknown/failed never counts as a model."}

def main():
    cli=argparse.ArgumentParser()
    cli.add_argument("--out",type=Path,default=BASE/"model_round17_classification/coverage.json")
    args=cli.parse_args()
    result=classify()
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n","utf-8")
    print("R17_BFRES_CLASSIFICATION",json.dumps({k:v for k,v in result.items() if k!="records"}))

if __name__=="__main__":main()
