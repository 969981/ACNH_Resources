#!/usr/bin/env python3
"""R87 original-ROM classification namespace and native query XREF triage.

Does not call any native query an eligibility function solely from a string XREF.
Requires original ACNH 3.0.3 main.elf, original BCSV-derived CSV/metadata, original
Message archives, and the existing round11 ARM64 exact-literal XREF parser.
Python stdlib + zstandard only. No save modifications.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
import re
from pathlib import Path
from acnh_formats import decompress, parse_sarc, parse_msbt
from acnh303_round11_elf_xref import (
    parse_elf, survey, locate_xrefs, bl_target, nearest_prologue
)

NCA="e10617820db06889e1638499478da0de_NCA"
ELF_SHA256="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
LOCALES=("CNzh","TWzh","JPja","EUen")
QUERY_TERMS=(
    "EventFlowQueryCanInduceNpc",
    "EventFlowQueryIsInduceFailedReasonFixUp",
    "EventFlowQueryNpcMoveOutState",
    "EventFlowQueryNpcIsInducementPlayer",
    "EventFlowQueryNpcInviteCheck",
    "EventFlowQueryCheckNpcMoveIn",
    "EventFlowQueryIsSameNpcLiving",
    "EventFlowQueryIsCallableAmiiboNpc",
    "EventFlowQueryIsAcceptableAmiibo",
    "EventFlowQueryCheckAmiiboNPC",
    "EventFlowQueryIsAmiiboNpcLiving",
    "EventFlowActionNpcFixedInducement",
    "Camp_InduceFailFlag",
    "Camp_InduceFailAlreadyInduced",
    "Camp_InduceFailVillagerMax",
    "STR_CategoryName",
    "ItemUIFurnitureCategory",
    "ItemOutfitCategory",
    "ItemKind",
    "ItemUICategory",
)
FUNCTION_CANDIDATES=(0x00EE5828,0x00F089A0)


def load_csv(root:Path,name:str):
    with (root/"UnPack/1/Bcsv"/(name+".csv")).open(
        encoding="utf-8-sig",newline=""
    ) as f:return list(csv.DictReader(f))


def dump_csv(path:Path,headers:list[str],rows:list[list]):
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(headers);w.writerows(rows)


def locales(root:Path):
    result={}; hashes={}
    for loc in LOCALES:
        path=root/NCA/"1/Message"/("String_"+loc+".sarc.zs")
        raw=path.read_bytes()
        archive,method=decompress(raw)
        _manifest,members=parse_sarc(archive)
        matches=[blob for name,blob in members if name=="STR_CategoryName.msbt"]
        if len(matches)!=1:raise ValueError("Missing unique category MSBT "+loc)
        data=parse_msbt(matches[0])
        d={}; duplicate=0
        for e in data["entries"]:
            if not e.get("label"):continue
            if e["label"] in d:duplicate+=1
            d[e["label"]]=e["text"]
        if duplicate or len(d)!=224:
            raise ValueError("Unexpected MSBT labels "+loc+": "+str(len(d)))
        result[loc]=d
        hashes[loc]={"archive_sha256":hashlib.sha256(raw).hexdigest(),
                     "source":path.relative_to(root).as_posix(),
                     "members":len(members),"labels":len(d),"method":method}
    return result,hashes


def exact_links(root:Path,out:Path,messages:dict):
    kind=load_csv(root,"ItemKind")
    ui=load_csv(root,"ItemUIFurnitureCategory")
    outfit=load_csv(root,"ItemOutfitCategory")
    item=load_csv(root,"ItemParam")
    meta=json.loads((root/"UnPack/1/Bcsv/ItemParam.json").read_text())
    if (len(kind),len(ui),len(outfit),len(item))!=(189,256,117,11178):
        raise ValueError("Original 3.0.3 UI BCSV row count mismatch")
    labels={x["hash_87BF00E8"] for x in kind}
    furniture_labels={r["hash_13AB5198"] for r in ui}
    outfit_labels={r["hash_87BF00E8"] for r in outfit}
    # Strict string equality is an actual *key equality*, not enough by itself
    # to establish that native game code joins these tables for a given UI.
    joins=[
        {"table":"ItemOutfitCategory","count":len(outfit),
         "label_exact_overlap_with_ItemKind":len(labels & outfit_labels),
         "labels":sorted(labels & outfit_labels)},
        {"table":"ItemUIFurnitureCategory","count":len(ui),
         "label_exact_overlap_with_ItemKind":len(labels & furniture_labels),
         "labels":sorted(labels & furniture_labels)},
    ]
    note_to_jp=defaultdict(list)
    for native_label,raw in messages["JPja"].items():
        note_to_jp[raw].append(native_label)
    # No fuzzy matching; category with multiple source labels is ambiguous.
    source_rows=[]
    count=Counter()
    for r in kind:
        kind_label=r["hash_87BF00E8"]
        jp_note=r["hash_036E8EBE"]
        codes=sorted(set(note_to_jp.get(jp_note,[])))
        status=("unique_same_JP_text_candidate" if len(codes)==1 else
                "ambiguous_same_JP_text_candidate" if codes else
                "no_same_JP_text_candidate")
        count[status]+=1
        source_rows.append([
            kind_label,jp_note,"|".join(codes),status,
            "|".join(messages["CNzh"].get(x,"") for x in codes),
        ])
    dump_csv(out/"r87_itemkind_to_ui_japanese_text_candidates.csv",
             ["itemkind_label","original_japanese_note","ui_numeric_msbt_labels",
              "evidence_status","candidate_CNzh_display"],source_rows)

    # Exact Japanese-name intersections from the two intermediate UI category tables.
    # Never promote shared display text to native enum identity.
    mid_rows=[]
    mid_counter=Counter()
    for table,rows,key,jpcol in (
        ("ItemUIFurnitureCategory",ui,"hash_13AB5198","hash_036E8EBE"),
        ("ItemOutfitCategory",outfit,"hash_87BF00E8","hash_977ADFCE"),
    ):
        for source in rows:
            note=source.get(jpcol,"")
            codes=sorted(set(note_to_jp.get(note,[]))) if note else []
            status=("unique_same_JP_text_candidate" if len(codes)==1 else
                    "ambiguous_same_JP_text_candidate" if codes else
                    "no_same_JP_text_candidate")
            mid_counter[table+"::"+status]+=1
            mid_rows.append([
                table,source["hash_54706054"],source[key],note,
                int(source[key] in labels),"|".join(codes),status,
                "|".join(messages["CNzh"].get(x,"") for x in codes),
            ])
    dump_csv(out/"r87_ui_intermediate_table_japanese_text_candidates.csv",
             ["native_table","table_unique_id","source_internal_label",
              "source_original_japanese_name","label_also_exists_in_ItemKind",
              "candidate_STR_CategoryName_numeric_labels","candidate_status",
              "candidate_CNzh_display"],mid_rows)

    # Very different key namespaces: preserve *numeric intersection only* as
    # a candidate and show that ID equality is not a verified foreign key.
    ui_numeric={int(k) for k in messages["JPja"] if k.isdecimal()}
    uid=[int(x["hash_54706054"]) for x in ui]
    outfit_ids=[int(x["hash_54706054"]) for x in outfit]
    overlaps={
        "ItemUIFurnitureCategory_unique_ID_numeric_overlap":
            len(set(uid)&ui_numeric),
        "ItemOutfitCategory_unique_ID_numeric_overlap":
            len(set(outfit_ids)&ui_numeric),
        "itemkind_note_JP_text":dict(count),
    }

    # Native ItemParam numeric candidates with nontrivial variety. Matching
    # numeric ranges is NOT a proof of UI enum semantics.
    candidates=[]
    for col in meta["columns"]:
        if col["width_hint"] not in (1,2,4):continue
        key=col["name"]
        nums=[]
        for row in item:
            v=row.get(key,"")
            if not v.isdecimal():continue
            n=int(v)
            if n<0 or n>0xffffffff:continue
            nums.append(n)
        if len(nums)<9000:continue
        nonzero=[n for n in nums if n!=0 and n!=65534 and n!=65535 and n!=4294967295]
        dset=set(nonzero)
        if len(dset)<8:continue
        msbt_overlap=len(dset & ui_numeric)
        furniture_overlap=len(dset & set(uid))
        outfit_overlap=len(dset & set(outfit_ids))
        if msbt_overlap<5 and furniture_overlap<7 and outfit_overlap<7:continue
        candidates.append({
            "field":key, "offset":col["offset"],"width_hint":col["width_hint"],
            "nonzero_unique":len(dset),"nonzero_total":len(nonzero),
            "ui_msbt_numeric_intersection":msbt_overlap,
            "furniture_uniqueid_numeric_intersection":furniture_overlap,
            "outfit_uniqueid_numeric_intersection":outfit_overlap,
            "status":"candidate_numeric_overlap_only_not_native_join",
        })
    candidates.sort(key=lambda x:(-
        (x["furniture_uniqueid_numeric_intersection"]+
         x["outfit_uniqueid_numeric_intersection"]+
         x["ui_msbt_numeric_intersection"]),
         -x["nonzero_unique"],x["field"]))
    (out/"r87_itemparam_numeric_ui_field_candidates.json").write_text(
        json.dumps(candidates,ensure_ascii=False,indent=2)+"\n")
    return {"itemkind_count":len(kind),"ui_furniture_count":len(ui),
            "ui_outfit_count":len(outfit),"item_count":len(item),
            "strict_label_intersections":joins,"numeric_intersections":overlaps,
            "itemparam_numeric_candidates":candidates[:40],
            "intermediate_UI_original_JP_text_matches":dict(mid_counter),
            "strong_claims":"NONE; only exact text and numeric matches, no game consumer proof"}


def elf_sources(root:Path,out:Path):
    path=root/NCA/"0/main.elf"
    b=path.read_bytes()
    sha=hashlib.sha256(b).hexdigest()
    if sha!=ELF_SHA256:
        raise ValueError(f"Original ELF hash mismatch {sha}")
    seg=parse_elf(b)
    hits=survey(b,seg,QUERY_TERMS,site_cap=32)
    refs,adrp_count=locate_xrefs(b,seg,hits,cap_per_term=32)
    rows=[]
    for name in QUERY_TERMS:
        rows.append({
            "query_or_literal":name,"literal_locations":hits[name]["locations"],
            "literal_cap":hits[name]["location_count_capped"],
            "aarch64_address_formations":refs.get(name,[]),
            "status":("exact_code_literal_ref_not_registered_dispatch" if
                refs.get(name) else "literal_no_verified_AArch64_ref" if
                hits[name]["locations"] else "string_not_literal_in_mapped_elf"),
        })
    bl_hits={hex(v):[] for v in FUNCTION_CANDIDATES}
    # Direct BL edge alone is a proven machine-code call-site target,
    # but never by itself establishes the function's event query identity.
    for s in seg:
        if not s["flags"]&1:continue
        st=s["file_offset"];end=st+s["filesz"]
        for offset in range(st,end-3,4):
            w=int.from_bytes(b[offset:offset+4],"little")
            if w&0xfc000000!=0x94000000:continue
            pc=s["vaddr"]+(offset-st)
            dest=bl_target(w,pc)
            if dest in FUNCTION_CANDIDATES:
                bl_hits[hex(dest)].append({
                    "callsite_va_hex":hex(pc),
                    "direct_BL_to_target_va_hex":hex(dest),
                    "possible_prologue_hex":(
                        hex(nearest_prologue(b,s,pc)) if
                        nearest_prologue(b,s,pc) is not None else None),
                    "status":"exact_ARM64_BL_encoding_no_caller_function_identity",
                })
    output={"schema":"acnh303_r87_native_elf_query_literals_v1",
        "main_elf":path.relative_to(root).as_posix(),
        "sha256":sha,"bytes":len(b),
        "architecture":"ELF64 AArch64 exact original",
        "string_xref_scanner":"Scripts/acnh303_round11_elf_xref.py",
        "terms":rows,"candidate_native_direct_bl_calls":bl_hits,
        "adrp_candidate_pages":adrp_count,
        "limitations":[
            "literal absence may mean hashes or indirect dispatch",
            "ADRP/ADD references identify literal uses, not function registration",
            "nearby BL calls do not prove argument dataflow",
            "direct BL caller's function entry is only a prologue heuristic",
            "indirect BLR/callback/vtable edges are not identified",
            "there is no per-NPC game-state eligibility evaluation",
        ]}
    (out/"r87_native_elf_query_xrefs.json").write_text(
        json.dumps(output,ensure_ascii=False,indent=2)+"\n")
    return {
        "native_elf_sha256":sha,"native_elf_bytes":len(b),
        "terms_with_literals":sum(bool(x["literal_locations"]) for x in rows),
        "terms_with_AArch64_refs":sum(bool(x["aarch64_address_formations"]) for x in rows),
        "literal_counts":{x["query_or_literal"]:len(x["literal_locations"]) for x in rows},
        "xref_counts":{x["query_or_literal"]:len(x["aarch64_address_formations"])
                       for x in rows},
        "BL_sites":{key:len(value) for key,value in bl_hits.items()},
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo-root",type=Path,default=Path("."))
    ap.add_argument("--out",type=Path,required=True)
    args=ap.parse_args()
    root=args.repo_root.resolve()
    out=args.out.resolve()
    out.mkdir(parents=True,exist_ok=True)
    msg,archive_meta=locales(root)
    ui=exact_links(root,out,msg)
    nat=elf_sources(root,out)
    progress=root/"derived/3.0.3/ghidra12.2/progress.json"
    ghidra=json.loads(progress.read_text()) if progress.exists() else {}
    result={
        "schema":"acnh303_r87_ui_enum_and_npc_native_xrefs_v1",
        "version":"3.0.3","source_archives":archive_meta,
        "ghidra_saved_export_progress":ghidra,
        "native_ui_namespace":ui,
        "native_query_xrefs":nat,
        "verified_per_villager_recruitability":0,
        "status":"static_source_candidates_not_final_runtime_eligibility"}
    (out/"r87_evidence_summary.json").write_text(
        json.dumps(result,ensure_ascii=False,indent=2)+"\n")
    print(json.dumps(result,ensure_ascii=False,indent=2)[:15000])

if __name__=="__main__":
    main()
