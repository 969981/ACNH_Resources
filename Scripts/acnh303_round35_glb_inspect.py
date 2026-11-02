#!/usr/bin/env python3
"""Source-backed actual converted original PlayerBody GLB mesh/skin/bone inventory."""
import argparse,hashlib,json,struct
from pathlib import Path
def read_glb(path):
    data=path.read_bytes()
    if data[:4]!=b"glTF" or len(data)<20:raise ValueError("not a genuine binary glTF")
    version,total=struct.unpack_from("<II",data,4)
    if version!=2 or total!=len(data):raise ValueError("invalid GLB v2 declared length")
    jlen,jtype=struct.unpack_from("<II",data,12)
    if jtype!=0x4e4f534a or jlen+20>len(data):raise ValueError("GLB missing JSON section")
    doc=json.loads(data[20:20+jlen])
    if doc.get("asset",{}).get("version")!="2.0":raise ValueError("GLB not glTF2")
    nodes=doc.get("nodes",[]);skins=doc.get("skins",[])
    for skin in skins:
        for i in skin.get("joints",[]):
            if not isinstance(i,int) or i<0 or i>=len(nodes):raise ValueError("invalid GLB skin joint")
    return data,doc
def inspect(glb,match):
    data,doc=read_glb(glb)
    matchdata=json.loads(match.read_text("utf8"))
    m=matchdata["actual_matches"][0]
    actual_names={x["name"] for x in m["source_bone_hierarchy"]}
    nodes=doc.get("nodes",[])
    skinnames=[(i,[nodes[k].get("name","") for k in v.get("joints",[])]) for i,v in enumerate(doc.get("skins",[]))]
    names={n.get("name","") for n in nodes}
    bone_names=actual_names&names
    matched={n["name"] for n in m["source_bone_hierarchy"] if n["name"] in names}
    return {"schema":"acnh303-r35-real-playerbody-gltf-mesh-skin-inventory-v1",
      "glb_source_path":str(glb),"real_glb_sha256":hashlib.sha256(data).hexdigest(),
      "real_glb_bytes":len(data),
      "valid_gltf2":True,
      "meshes":len(doc.get("meshes",[])),
      "nodes":len(nodes),
      "skin_count":len(doc.get("skins",[])),
      "joint_names_by_skin":skinnames,
      "source_original_fskl_bones":m["model_bone_count"],
      "gltf_nodes_matching_exact_fskl_bones":len(matched),
      "matched_node_names":sorted(matched),
      "source_fska_animated_bones":m["animation_unique_bone_names"],
      "source_fska_matching_playerbody_fskl":m["matched_bone_count"],
      "limitations":"Real validated mesh GLB introspected. Skinning, actual FSKL rest transforms and source FSKA cubic interpolation require additional correspondence evidence."}
def main():
    p=argparse.ArgumentParser();p.add_argument("--manifest",type=Path,required=True);p.add_argument("--match",type=Path,required=True);p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    recs=json.loads(a.manifest.read_text())
    if len(recs)!=1:raise ValueError("exactly one original PlayerBody media source expected")
    outs=[x for x in recs[0]["validated_outputs"] if x["validation"]["type"]=="glb"]
    if len(outs)!=1:raise ValueError("PlayerBody GLB not successfully converted")
    glb=Path(outs[0]["path"])
    if hashlib.sha256(glb.read_bytes()).hexdigest()!=outs[0]["sha256"]:raise ValueError("player mesh converted SHA mismatch")
    d=inspect(glb,a.match);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
    print("R35_PLAYER_MESH_GLB",json.dumps({k:v for k,v in d.items() if k not in ("joint_names_by_skin","matched_node_names")},ensure_ascii=False))
if __name__=="__main__":main()
