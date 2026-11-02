#!/usr/bin/env python3
"""R65: read all 960 original ACNH UI Layout sources for real FLYT/FLAN refs.

Only exact parsed FLYT txl1 names / FLAN texture names count as a static UI
reference. A name occurring in a binary blob or file name does not count.
No reference does not imply absence of runtime dynamic icon loading.
"""
from __future__ import annotations
import argparse,json,csv,subprocess,hashlib
from pathlib import Path
from collections import Counter,defaultdict
from acnh303_media_l3 import find_leaf
from acnh303_ui2d_parser import parse_flyt,parse_flan

PREFIX="e10617820db06889e1638499478da0de_NCA/1/Layout"
E=Path("assets/evidence/rom-ui-semantics")
R61=Path("assets/evidence/rom-items/r61-all-1254-original-native-sources.json")
def tree(root):
    proc=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",PREFIX],
      cwd=root,check=True,text=True,capture_output=True,timeout=100)
    return [s for s in proc.stdout.splitlines() if s.endswith(".Nin_NX_NVN.zs")]
def plan(root):
    files=tree(root)
    if len(files)!=960:raise ValueError("Expected 960 original UI archives; saw "+str(len(files)))
    Path("/tmp/acnh-r65-sparse-layouts.txt").write_text("\n".join("/"+s for s in files)+"\n","utf-8")
    print(json.dumps({"original_UI_layout_archives":len(files)}))
def verify(root):
    files=tree(root)
    if len(files)!=960:raise ValueError("Original UI tree changed")
    r61=json.loads((root/R61).read_text("utf-8"))
    src=[r for r in r61["records"] if r["source_type"]=="original_other_UI_layout"]
    if len(src)!=391:raise ValueError("391 original native texture baseline changed")
    byname=defaultdict(list)
    for r in src:
        byname[r["native_texture_BRTI_name"]].append(r)
    hits=defaultdict(list)
    counts=Counter()
    layouts=[]
    failure=[]
    def exact_match(text):
        # Only a supported literal file extension is stripped, NEVER substring
        # or case-folded/approximate associations.
        name=text.rsplit("/",1)[-1]
        options=[name]
        for ext in (".png",".bntx",".bfres"):
            if name.endswith(ext):options.append(name[:-len(ext)])
        return [(n,byname[n]) for n in options if n in byname]
    for index,path in enumerate(files):
        real=root/path
        if not real.is_file():raise FileNotFoundError("Real original layout absent "+path)
        blob=real.read_bytes()
        raw_hash=hashlib.sha256(blob).hexdigest()
        r={"original_source":path,"original_source_sha256":raw_hash,
           "source_bytes":len(blob),"members_parsed":0,"flyt_members":0,
           "flan_members":0,"textures_referenced":0,"exact_texture_name_matches":[],
           "parser_warnings":[]}
        try:
            for leaf in find_leaf(blob,path):
                r["members_parsed"]+=1
                if leaf["format"] not in ("bflyt","bflan"):continue
                dat=leaf["data"]
                if dat[:4]==b"FLYT":
                    r["flyt_members"]+=1
                    try:
                        doc=parse_flyt(dat)
                        vals=doc.get("named_resources",{}).get("txl1",[])
                        method="FLYT_txl1_name"
                    except Exception as exc:
                        r["parser_warnings"].append("FLYT:"+type(exc).__name__+":"+str(exc)[:160])
                        continue
                elif dat[:4]==b"FLAN":
                    r["flan_members"]+=1
                    try:
                        doc=parse_flan(dat)
                        vals=[]
                        for node in doc.get("animations",[]):
                            val=node.get("value",{})
                            if node.get("section")=="pai1":vals+=val.get("textures",[])
                        method="FLAN_pai1_texture"
                    except Exception as exc:
                        r["parser_warnings"].append("FLAN:"+type(exc).__name__+":"+str(exc)[:160])
                        continue
                else:continue
                r["textures_referenced"]+=len(vals)
                for text in vals:
                    if not isinstance(text,str):continue
                    for candidate,recs in exact_match(text):
                        for target in recs:
                            h={"original_UI_layout_source":path,
                               "source_sha256":raw_hash,
                               "layout_member":leaf["source_member"],
                               "native_target_texture_name":candidate,
                               "resource_name_as_stored":text,
                               "typed_reference":method}
                            r["exact_texture_name_matches"].append(h)
                            hits[target["requested_original_catalog_name"]].append(h)
        except Exception as exc:
            failure.append({"source":path,"error":type(exc).__name__+":"+str(exc)[:260]})
        layouts.append(r)
        counts.update({"ui_archives_scanned":1,"flyt_members":r["flyt_members"],
                       "flan_members":r["flan_members"],"texture_names_seen":r["textures_referenced"],
                       "layouts_with_exact_refs":int(bool(r["exact_texture_name_matches"]))})
        if (index+1)%200==0:
            print("UI2D archives parsed",index+1,"of 960",flush=True)
    rows=[]
    for r in src:
        name=r["requested_original_catalog_name"]
        exact=hits[name]
        rows.append({"catalog_name":name,"native_texture_name":r["native_texture_BRTI_name"],
            "original_texture_source":r["original_rom_source"],
            "original_ui_family":r["original_rom_source"].rsplit("/",1)[-1].split("_")[1],
            "exact_parsed_BFLYT_BFLAN_resource_reference_count":len(exact),
            "exact_parsed_UI_resource_references":exact[:20],
            "source_native_texture_PNG_verified_in_R61":True,
            "original_runtime_texture_load_and_pane_binding_verified":False})
    categories=Counter("exact_parsed_UI_reference" if r["exact_parsed_BFLYT_BFLAN_resource_reference_count"] else
                       "no_static_UI_reference_observed" for r in rows)
    output={"schema":"acnh303_r65_original_ui2d_real_archive_texture_consumers_v1",
      "original_layout_source_count":len(files),
      "original_UI_sources_actually_read":len(layouts),
      "original_UI2D_structured_reader":"Scripts/acnh303_ui2d_parser.py",
      "parsed_UI2D_results":dict(sorted(counts.items())),
      "archive_read_errors":failure[:30],"archive_read_error_count":len(failure),
      "UI2D_parse_warnings_in_archives":sum(bool(r["parser_warnings"]) for r in layouts),
      "source_391_other_UI_images":len(src),
      "classification":dict(categories),
      "static_FLYT_FLAN_texture_name_reference_not_runtime_UI_rendering":True,
      "no_static_name_reference_is_not_evidence_of_absence":True,
      "never_relabel_different_UI_families_as_standard_FtrIcon":True,
      "sources":layouts,"target_records":rows}
    dest=root/E;dest.mkdir(exist_ok=True,parents=True)
    (dest/"r65-native-ui2d-texture-consumers.json").write_text(json.dumps(output,indent=2,ensure_ascii=False)+"\n","utf-8")
    with (dest/"r65-native-ui2d-texture-consumers.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["catalog_name","original_family","matched_FLYT_FLAN_texture_refs","runtime_consumption_verified"])
        for r in rows:
            w.writerow([r["catalog_name"],r["original_ui_family"],
                        r["exact_parsed_BFLYT_BFLAN_resource_reference_count"],False])
    print(json.dumps({k:v for k,v in output.items() if k not in ("sources","target_records")},ensure_ascii=False))
def main():
    ap=argparse.ArgumentParser();ap.add_argument("mode",choices=("plan","verify"))
    ap.add_argument("--root",type=Path,default=Path("."))
    args=ap.parse_args();root=args.root.resolve()
    if args.mode=="plan":plan(root)
    else:verify(root)
if __name__=="__main__":main()
