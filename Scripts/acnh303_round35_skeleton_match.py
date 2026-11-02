#!/usr/bin/env python3
"""Compare FULL source-backed 406 FSKA bone names with actual Player FMDL/FSKL bone names."""
import argparse,collections,hashlib,json
from pathlib import Path
def compare(anim,model):
 a=json.loads(anim.read_text("utf8"));m=json.loads(model.read_text("utf8"))
 if a.get("status")!="fully_deserialized_with_external_bfres_library" or m.get("status")!="BfresLibrary_FMDL_FSKL_deserialized":
  raise ValueError("original animation / model not genuinely decoded")
 allbones={bone["name"] for anim in a["skeletal_animations"] for bone in anim["bone_animations"]}
 analyses=[]
 for item in m["models"]:
  nodes=item["real_bones"]
  names=[n["name"] for n in nodes];name_set=set(names)
  if len(names)!=len(name_set):raise ValueError("duplicate skeleton bone names")
  roots=[n for n in nodes if n["parent_index"]<0]
  dangling=[n["name"] for n in nodes if n["parent_index"]>=len(nodes) or n["parent_index"]==n["bone_index"]]
  matched=sorted(allbones&name_set);missing=sorted(allbones-name_set);extra=sorted(name_set-allbones)
  analyses.append({"model_name":item["name"],"model_index":item["index"],"geometry_shapes":item["shape_count"],
  "vertex_buffers":item["vertex_buffer_count"],"model_bone_count":len(names),
  "animation_unique_bone_names":len(allbones),
  "matched_bone_count":len(matched),"match_ratio":len(matched)/len(allbones),
  "matched_names":matched,"missing_animation_bones":missing,"model_only_bones":extra,
  "parent_roots":[n["name"] for n in roots],"invalid_parent_nodes":dangling,
  "source_bone_hierarchy":nodes,"candidate_real_player_mesh":item["shape_count"]>0 and item["vertex_buffer_count"]>0})
 return {"schema":"acnh303-r35-original-skeleton-match-v1",
 "full_animation_records":len(a["skeletal_animations"]),
 "animation_unique_bones":len(allbones),"model_count":len(analyses),
 "actual_matches":analyses,
 "best_match_index":max(range(len(analyses)),key=lambda i:analyses[i]["match_ratio"]) if analyses else None,
 "limits":"Bone-name and parent identity validated. Same names alone not proof of glTF playback, Bind Pose or correct curve interpolation."}
if __name__=="__main__":
 p=argparse.ArgumentParser()
 p.add_argument("--fska",type=Path,required=True);p.add_argument("--model",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
 x=p.parse_args();d=compare(x.fska,x.model)
 x.out.parent.mkdir(parents=True,exist_ok=True);x.out.write_text(json.dumps(d,ensure_ascii=False,indent=2)+"\n")
 print("R35_PLAYER_FSKL_FSKA_REAL_MATCH",json.dumps([{k:v for k,v in m.items() if k not in ("source_bone_hierarchy","matched_names","missing_animation_bones","model_only_bones")} for m in d["actual_matches"]],ensure_ascii=False))
