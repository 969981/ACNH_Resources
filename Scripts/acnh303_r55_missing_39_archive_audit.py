#!/usr/bin/env python3
"""R55: content-level original ACNH 3.0.3 source audit for 39 catalog names.

Checks 234 decoded original BCSV tables, original StaticParam.pack SARC members,
960 original Layout .zs archives, and bounded high-signal Model candidates.
Do NOT conflate a binary string, a resource name, or a token with an extracted
picture, actual game runtime mapping, or proof of resource absence in other ROMs.
"""
from __future__ import annotations
import argparse,csv,hashlib,json,re,subprocess
from collections import Counter,defaultdict
from pathlib import Path
from acnh_formats import detect,decompress,parse_sarc,FormatError
from acnh303_r53_client_csv_audit import screenshot_name_hints

PREFIX="e10617820db06889e1638499478da0de_NCA/1"
EVID=Path("assets/evidence/rom-items")
MODEL=PREFIX+"/Model/"
LAYOUT=PREFIX+"/Layout/"
PACK=PREFIX+"/Pack/StaticParam.pack"
# Rare tokens identify candidate resources, never semantic equivalence. Exclude
# generic short fragments such as "Link" or "Tri", which produce false positives.
TOKENS=("inkling","octling","hylia","zelda","majora","tulin","mineru",
        "inktank","takoroka","ikasweat","trishred","legoblock","legohead","legologo",
        "fuka","utsuho","salmon","force","replica","champion","hotel","beans",
        "triangle","lowcut","kneeboot","backpack")
MAX_SELECTED_MODEL=200
MAX_SELECTED_BYTES=160*1024*1024

def sha(b):return hashlib.sha256(b).hexdigest()
def jsonfile(p):return json.loads(p.read_text("utf-8"))
def ls(root):
    output=subprocess.check_output(["git","ls-tree","-r","HEAD","--",PREFIX],cwd=root,text=True,timeout=180)
    files=[]
    for line in output.splitlines():
        meta,path=line.split("\t",1)
        fields=meta.split()
        if len(fields)!=3 or fields[1]!="blob":continue
        size=0  # filtered git tree does not hydrate blob sizes
        files.append({"path":path,"git_sha":fields[2],"size":size})
    return files
def inputs(root):
    r54=jsonfile(root/EVID/"r54-pokercore-versions-and-rom-name-gaps.json")
    names=[r["catalog_name"] for r in r54["unresolved_40"] if r["catalog_name"]!="FtrSoftdrinkOrange_3.0.0.png"]
    if len(names)!=39 or len(set(names))!=39:raise ValueError("39 unresolved catalog names changed")
    return names
def candidates(name):
    stem=name.removesuffix(".png")
    return list(dict.fromkeys(screenshot_name_hints(name)+[re.sub(r"0_0$", "",stem),re.sub(r"_0$", "",stem)]))
def plan(root,output):
    names=inputs(root)
    allfiles=ls(root)
    models=[]
    for f in allfiles:
        path=f["path"];filename=path.rsplit("/",1)[-1].lower()
        if not (path.startswith(MODEL) and filename.endswith(".zs")):continue
        rare=[x for x in TOKENS if x in filename]
        # Require strong token, don't treat generic Hotel as a definitive join.
        if rare:models.append({**f,"matched_lexical_tokens":rare})
    models.sort(key=lambda x:(-len(x["matched_lexical_tokens"]),x["size"],x["path"]))
    chosen=[];total=0
    for r in models:
        if len(chosen)>=MAX_SELECTED_MODEL or total+r["size"]>MAX_SELECTED_BYTES:continue
        chosen.append(r);total+=r["size"]
    layout=[r for r in allfiles if r["path"].startswith(LAYOUT) and r["path"].endswith(".zs")]
    packs=[r for r in allfiles if r["path"]==PACK]
    if len(packs)!=1 or not layout:raise ValueError("Missing source layouts or original StaticParam.pack")
    entry={"schema":"acnh303_r55_missing39_original_archive_scan_plan_v1",
           "pending_catalog_names":names,"rom_tree_file_count":len(allfiles),
           "original_layout_source_count":len(layout),
           "original_model_lexical_candidates":len(models),
           "selected_model_sources":chosen,
           "selected_model_bytes":None,
           "source_blob_sizes_unavailable_due_to_filtered_tree":True,
           "original_pack_sources":packs,
           "nca_1_git_tree_sha":"8809e830a4caa2593916239ef2391b5d17b98dd5",
           "plan_is_not_a_source_mapping":True}
    output.write_text(json.dumps(entry,indent=2,ensure_ascii=False)+"\n","utf-8")
    patterns=[f"/{LAYOUT}",f"/{PACK}"]+["/"+r["path"] for r in chosen]
    Path("/tmp/acnh-r55-original-sparse.txt").write_text("\n".join(patterns)+"\n","utf-8")
    print(json.dumps({k:v for k,v in entry.items() if k not in ("pending_catalog_names","selected_model_sources","original_pack_sources")},ensure_ascii=False))
def all_scans(raw,rel,depth=0):
    """bounded representation: original bytes, decompression, named SARC members."""
    if depth>3 or len(raw)>100*1024*1024:return []
    results=[(rel,raw)]
    typ=detect(raw)
    if typ in ("zstd","yaz0"):
        try:
            dec,how=decompress(raw,limit=100*1024*1024)
            results+=all_scans(dec,rel+"/"+how,depth+1)
        except (FormatError,MemoryError,ValueError) as exc:
            results.append((rel+"/DECOMPRESS_ERROR/"+str(exc)[:80],b""))
    elif typ=="sarc":
        try:
            listing,members=parse_sarc(raw)
            results.extend((rel+"/"+s["name"],b"") for s in listing)
            for member,contents in members:
                results+=all_scans(contents,rel+"/"+member,depth+1)
        except (FormatError,ValueError) as exc:
            results.append((rel+"/SARC_ERROR/"+str(exc)[:80],b""))
    return results
def scan(root,planfile):
    doc=jsonfile(planfile)
    names=inputs(root)
    if sorted(names)!=sorted(doc["pending_catalog_names"]):raise ValueError("Plan stale")
    listfiles=ls(root)
    binary_paths=[x["path"] for x in listfiles if x["path"].startswith(LAYOUT) and x["path"].endswith(".zs")]
    binary_paths += [PACK] + [x["path"] for x in doc["selected_model_sources"]]
    if len(binary_paths)!=len(set(binary_paths)):raise ValueError("Duplicate sources")
    rules={name:[(hint,hint.encode("ascii")) for hint in candidates(name)] for name in names}
    hits=defaultdict(list); counts=defaultdict(Counter);errors=[];sources=[]
    def add(name,kind,origin,term,extra=None):
        counts[name][kind]+=1
        if len(hits[name])<65:
            hits[name].append({"kind":kind,"source":origin,"term":term,**(extra or {})})
    for file in sorted((root/"UnPack/1/Bcsv").glob("*.csv")):
        with file.open("r",encoding="utf-8-sig",newline="",errors="replace") as f:
            reader=csv.reader(f)
            for index,row in enumerate(reader):
                if index==0:continue
                for cell in row:
                    v=cell.strip()
                    for name in names:
                        for term,unused in rules[name]:
                            if v==term:add(name,"bcsv_exact_cell",str(file.relative_to(root)),term,{"csv_row":index+1})
        sources.append({"source":str(file.relative_to(root)),"kind":"decoded_original_bcsv_csv"})
    for index,source in enumerate(binary_paths):
        path=root/source
        if not path.is_file():
            errors.append({"source":source,"error":"not_sparsely_checked_out"});continue
        raw=path.read_bytes()
        sourcehash=sha(raw)
        tree=list(all_scans(raw,source))
        for member,b in tree:
            # Exact string presence in actual decompressed payload and/or
            # original SARC filename; substring is not a proved BRTI binding.
            lower=member.lower()
            for name in names:
                for term,by in rules[name]:
                    if term.casefold() in lower:
                        add(name,"archive_member_name_substring",member,term)
                    if by in b:
                        add(name,"binary_utf8_name_substring",member,term)
            if "ERROR/" in member:errors.append({"source":member,"error":"decode_failure_or_unsupported"})
        sources.append({"source":source,"kind":"original_binary",
            "source_sha256":sourcehash,"source_size":len(raw),
            "decoded_views":len(tree)})
        if (index+1)%150==0:
            print("ROM sources scanned",index+1,"/",len(binary_paths),flush=True)
    # ROM filename hints should NEVER be promoted to binary evidence.
    r54=jsonfile(root/EVID/"r54-pokercore-versions-and-rom-name-gaps.json")
    out=[]
    for name in names:
        total=dict(sorted(counts[name].items()))
        out.append({"catalog_name":name,"name_hints_checked":[x for x,b in rules[name]],
                    "exact_bcsv_cell_count":counts[name]["bcsv_exact_cell"],
                    "archive_member_name_substring_count":counts[name]["archive_member_name_substring"],
                    "binary_utf8_name_substring_count":counts[name]["binary_utf8_name_substring"],
                    "total_content_hits":sum(total.values()),
                    "count_by_evidence_type":total,"sample_hits":hits[name],
                    "original_catalog_status":"pending_original_rom_source_verification",
                    "original_picture_extracted":False,
                    "original_runtime_resource_binding_verified":False,
                    "other_game_version_rom_verified":False})
    stats=Counter("bcsv_exact" if row["exact_bcsv_cell_count"] else
                  "archive_or_binary_substring" if row["total_content_hits"] else
                  "no_hit_in_scanned_scope" for row in out)
    result={"schema":"acnh303_r55_bcsv_archive_decompressed_original_39_audit_v1",
            "nca_tree_sha_from_prior_provenance":doc["nca_1_git_tree_sha"],
            "original_unresolved_39_names":39,
            "scanned_original_binary_sources":sum(s["kind"]=="original_binary" for s in sources),
            "scanned_original_bcsv_tables":sum(s["kind"]=="decoded_original_bcsv_csv" for s in sources),
            "selected_model_count":len(doc["selected_model_sources"]),
            "selected_model_bytes":doc["selected_model_bytes"],
            "original_layout_source_count":doc["original_layout_source_count"],
            "original_rom_pack_staticparam_checked":any(s["source"]==PACK for s in sources),
            "result_by_strict_evidence_class":dict(sorted(stats.items())),
            "sources_with_errors":errors[:100],"error_count":len(errors),
            "scanned_files":sources,
            "not_scanned_entire_103400_rom_file_contents":True,
            "no_hit_is_not_proof_of_absence":True,
            "version_confidence":"only_3.0.3_ROM_checked",
            "original_pending_catalog_entries_promoted":0,"entries":out}
    path=root/EVID
    (path/"r55-original-39-nested-archive-content.json").write_text(
        json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    with (path/"r55-original-39-nested-archive-content.csv").open("w",newline="",encoding="utf-8") as f:
        writer=csv.writer(f)
        writer.writerow(["catalog_name","exact_bcsv_cells","archive_filename_hits",
                        "decompressed_binary_name_hits","source_binding_verified"])
        for row in out:
            writer.writerow([row["catalog_name"],row["exact_bcsv_cell_count"],
                             row["archive_member_name_substring_count"],
                             row["binary_utf8_name_substring_count"],False])
    print(json.dumps({k:v for k,v in result.items() if k not in
      ("scanned_files","entries","sources_with_errors")},ensure_ascii=False))
def main():
    p=argparse.ArgumentParser()
    p.add_argument("mode",choices=("plan","scan"))
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--plan",type=Path,default=Path("/tmp/acnh-r55-plan.json"))
    args=p.parse_args()
    if args.mode=="plan":plan(args.root.resolve(),args.plan)
    else:scan(args.root.resolve(),args.plan)
if __name__=="__main__":main()
