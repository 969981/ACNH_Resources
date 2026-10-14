#!/usr/bin/env python3
"""Cross-check actual ACNH 3.0.3 layout, font-reference and animation names.

Read existing SHA-proven JSON exports, emit source-to-pane / font / material
reference table. This is an offline structural binding analysis, NOT native
Nintendo UI runtime evaluation or rendered animation fidelity proof.
"""
import collections
import csv
import hashlib
import json
from pathlib import Path

NCA="e10617820db06889e1638499478da0de_NCA"

def normalize_font(name):
    return Path(name).stem.casefold()
def load_record(path):
    with path.open(encoding="utf-8") as f:return json.load(f)
def main():
    root=Path("Unpack_UI2D_Font")/NCA/"1"/"Layout"
    assert root.is_dir()
    all_records=[]
    sums=collections.Counter()
    issues=[]
    for directory in sorted(root.iterdir()):
        if not directory.is_dir():continue
        origin=load_record(directory/"_ui2d_source_manifest.json")
        docs=[]
        for x in origin["leaves"]:
            if x.get("output") and x["status"] in ("structured_json","font_references_only"):
                target=Path(x["output"])
                doc=load_record(target)
                actual=hashlib.sha256(target.read_bytes()).hexdigest()
                if actual!=x["output_sha256"]:raise ValueError("output JSON hash drift "+str(target))
                docs.append((x,doc))
        layouts=[d for x,d in docs if x["kind"]=="bflyt"]
        flans=[d for x,d in docs if x["kind"]=="bflan"]
        fcpxs=[d for x,d in docs if x["status"]=="font_references_only"]
        if len(layouts)!=1:raise ValueError("expected exactly one layout: "+origin["source"])
        lay=layouts[0]
        pane_names={p["name"] for p in lay["panes"]}
        materials={m["name"] for table in lay["material_parts_control_metadata"]["materials"] for m in table["items"]}
        fonts={normalize_font(Path(d["origin_member"]).name):d for d in fcpxs}
        refs=lay["named_resources"].get("fnl1",[])
        font_refs=[]
        for name in refs:
            key=normalize_font(name)
            hit=key in fonts
            font_refs.append({"fnl1":name,"matching_embedded_fcpx":hit,
                              "matched_source_member":fonts[key]["origin_member"] if hit else None})
            sums["matched_fonts" if hit else "unmatched_fonts"]+=1
        tracks=[]
        for anim in flans:
            for block in anim["animations"]:
                if block["section"]!="pai1":continue
                for target in block["value"]["entries"]:
                    name=target.get("name","")
                    t=target.get("target_type_name")
                    pane_hit=name in pane_names
                    mat_hit=name in materials
                    sums["animation_entries"]+=1
                    sums["animation_pane_bound" if pane_hit else "animation_pane_not_bound"]+=1
                    sums["animation_material_bound" if mat_hit else "animation_material_not_bound"]+=1
                    keys=sum(len(j.get("keys",[])) for info in target.get("infos",[])
                             for j in info.get("keyframes",[]) if isinstance(j,dict))
                    sums["keyframes"]+=keys
                    tracks.append({"animation_member":anim["origin_member"],"target":name,
                                   "target_type":t,"matched_pane":pane_hit,
                                   "matched_material":mat_hit,"keyframes":keys,
                                   "animation_source_sha256":anim["origin_member_sha256"]})
        sem=lay["material_parts_control_metadata"]
        sums["panes"]+=len(lay["panes"])
        sums["material_items"]+=sum(t["count"] for t in sem["materials"])
        sums["part_items"]+=sum(t["part_count"] for t in sem["parts"])
        sums["control_sections"]+=len(sem["controls"])
        sums["material_sections"]+=len(sem["materials"])
        sums["part_sections"]+=len(sem["parts"])
        sums["semantic_warnings"]+=len(sem["warnings"])
        if sem["warnings"]:issues.append({"source":origin["source"],"warnings":sem["warnings"]})
        all_records.append({"source":origin["source"],"source_sha256":origin["source_sha256"],
            "pane_count":len(lay["panes"]),"material_names":sorted(materials),
            "parts_count":sum(t["part_count"] for t in sem["parts"]),
            "font_references":font_refs,"animation_bindings":tracks,
            "layout_warnings":sem["warnings"],"font_config_references_only":True})
    if len(all_records)!=41:raise ValueError("expected 41 UI2D source matches")
    report={"schema":"acnh303-native-ui2d-crossref-v6",
            "source_count":len(all_records),"totals":dict(sums),
            "issues":issues,"records":all_records,
            "scope":"static section/pane/material/font/animation name binding only; no runtime shader/animation simulation proof"}
    out=Path("derived/3.0.3/ui2d_crossref_v6")
    out.mkdir(parents=True,exist_ok=True)
    (out/"crossrefs.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n")
    with (out/"animation_bindings.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["source","source_sha256","animation_member","target","target_type","pane_found","material_found","decoded_keys"])
        for a in all_records:
            for x in a["animation_bindings"]:
                w.writerow([a["source"],a["source_sha256"],x["animation_member"],x["target"],x["target_type"],x["matched_pane"],x["matched_material"],x["keyframes"]])
    print("ACTUAL_UI2D_CROSSREF",json.dumps({"sources":len(all_records),"totals":dict(sums),"issues":len(issues)},ensure_ascii=False),flush=True)
if __name__=="__main__":main()
