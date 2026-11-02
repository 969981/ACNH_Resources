#!/usr/bin/env python3
"""R63: execute a faithful *static model* of the pinned PokerCore map image lookup.

The model interprets only the verified C# Map.GetImagePathFromID branch order.
Its image filesystem is a hypothetical single folder populated by EXACT native
filename matches already committed in ROM-backed items/ and items-rom/. It is
not an executed C# GUI or original Nintendo runtime trace.
"""
from __future__ import annotations
from collections import Counter,defaultdict
from pathlib import Path
import argparse,csv,json,re
from acnh303_r53_client_csv_audit import parse_pokercore_csv

E=Path("assets/evidence/rom-items")
V=Path("assets/evidence/rom-clothing-layout/catalog-alias-candidates.json")
ORIGINAL=Path("UnPack/1/Bcsv/ItemParam.csv")
PIN="85e50a1ad182c926b2ebd51c00abc612e0a859d5"
UP=Path("upstream-pokercore/ACNHPokerCore")
CSV_FILES=("items.csv","variations.csv","field.csv","override.csv")
CATEGORIES=("original_remake_variant_icon","original_FtrIcon_clothing_instance","original_other_UI_layout")
def load(p):return json.loads(p.read_text("utf-8"))
def pinned_contract(root):
    maptext=(root/UP/"Map/map.cs").read_text("utf-8")
    start=maptext.find("public string GetImagePathFromID(string itemID, DataTable source, UInt32 data = 0)")
    end=maptext.find("#endregion",start)
    if start<0:raise ValueError("Expected native C# method absent")
    s=maptext[start:end if end>=0 else start+6000]
    predicates=[
      'fieldSource.Rows.Find(itemID)','DataRow row = source.Rows.Find(itemID)',
      'VarRow = variationSource.Rows.Find(itemID)',
      'string main = (data & 0xF).ToString()',
      'string sub = (((data & 0xFF) - (data & 0xF)) / 0x20).ToString()',
      '"_Remake_" + main + "_" + sub + ".png"',
      'imageName + "_Remake_0_0.png"',
      'path = imagePath + RemoveNumber(imageName) + ".png"',
      'OverrideDict.TryGetValue(imageName, out string value)',
    ]
    if any(p not in s for p in predicates):
        raise ValueError("Pinned C# source method changed: "+
            repr([p for p in predicates if p not in s]))
    if not(s.index("fieldSource.Rows.Find(itemID)")<s.index("DataRow row = source.Rows.Find(itemID)")):
        raise ValueError("Client branch order changed")
    index=maptext.find("private static string RemoveNumber(string filename)")
    if index<0 or "filename.Trim(MyChar)" not in maptext[index:index+300]:
        raise ValueError("C# Trim(0..4) fallback not reproduced")
    return {"pinned_upstream_revision":PIN,
            "map_source":"ACNHPokerCore/Map/map.cs",
            "expected_file_lookup_order_asserted":True,
            "client_cpp_or_csharp_binary_executed":False}

def read_client(root):
    d={}
    for f in CSV_FILES:
        parsed=parse_pokercore_csv(root/UP/"csv"/f)
        byid=defaultdict(list);byname=defaultdict(list)
        for r in parsed["records"]:
            byid[r["id_decimal"]].append(r)
            byname[r["iName"]].append(r)
        d[f]={"rows":parsed["row_count"],"sha256":parsed["sha256"],
            "byid":byid,"byname":byname}
    return d

def load_itemparam(root):
    with (root/ORIGINAL).open("r",encoding="utf-8-sig",newline="") as f:
        rdr=csv.DictReader(f)
        fields=set(rdr.fieldnames or ())
        if not {"hash_54706054","hash_3FEBC642"}.issubset(fields):
            raise ValueError("Original ItemParam fields unknown")
        out=defaultdict(list)
        for row in rdr:
            name=row["hash_3FEBC642"]
            try: id=int(row["hash_54706054"])
            except(ValueError,TypeError):continue
            if name:out[name].append(id)
    return out

def client_variation_file(iname,data):
    main=data&0xf
    sub=((data&0xff)-(data&0xf))//0x20
    return iname+"_Remake_"+str(main)+"_"+str(sub)+".png"

def remove_number_csharp(name):
    return name.strip("01234")

def simulate(id_,c,inventory,data=0,source_recipe=False):
    """A narrow deterministic file-lookup model, preserving C# ordering."""
    visited=[]
    def try_file(n,branch):
        found=n in inventory
        visited.append({"filename":n,"branch":branch,"exists_in_virtual_native_folder":found})
        return n if found else None
    field=c["field.csv"]["byid"].get(id_,[])
    if len(field)>1:raise ValueError("Ambiguous field IDs")
    overrides={r["iName"]:r for r in c["override.csv"]["byid"].get(id_,[])}
    if field:
        fname=field[0]["iName"]
        override=overrides.get(fname)
        # Extra override source is checked in native C#, but the static
        # override list is not necessarily loaded in Map. Treat conservatively.
        if override:
            # skip override target if not known; no verified value index
            pass
        for name,branch in ((fname+"_Remake_0_0.png","field_zero_zero"),
                            (fname+".png","field_base"),
                            (remove_number_csharp(fname)+".png","field_trim")):
            r=try_file(name,branch)
            if r:return {"filename":r,"branch":branch,"visits":visited}
    base=c["items.csv"]["byid"].get(id_,[])
    var=c["variations.csv"]["byid"].get(id_,[])
    if len(base)>1 or len(var)>1:raise ValueError("Ambiguous client ID")
    if not base:return {"filename":None,"branch":"items_row_missing","visits":visited}
    if var and not source_recipe:
        name=client_variation_file(var[0]["iName"],data)
        r=try_file(name,"variation_payload")
        if r:return {"filename":r,"branch":"variation_payload","visits":visited}
        r=try_file(var[0]["iName"]+".png","variation_base")
        if r:return {"filename":r,"branch":"variation_base","visits":visited}
    iname=base[0]["iName"]
    for name,branch in ((iname+"_Remake_0_0.png","items_zero_zero"),
                        (iname+".png","items_base"),
                        (remove_number_csharp(iname)+".png","items_trim")):
        r=try_file(name,branch)
        if r:return {"filename":r,"branch":branch,"visits":visited}
    return {"filename":None,"branch":"no_image_found","visits":visited}

def analyze(root):
    r53=load(root/E/"r53-client-iname-id-and-40.json")
    r61=load(root/E/"r61-all-1254-original-native-sources.json")
    r62=load(root/E/"r62-all-27531-source-reconciliation.json")
    cloth=load(root/V)
    if len(r53["base_names_344"])!=344 or len(cloth["entries"])!=39 or len(r61["records"])!=1254 or r62["exact_name_original_BRTI_PNGs"]!=26277:
        raise ValueError("R53/R61/R62 baseline changed")
    contract=pinned_contract(root)
    client=read_client(root)
    itemparam=load_itemparam(root)
    # Source of exact native filenames: original 27531 index, not unverified
    # renames of its 1254 candidates.
    native=set()
    with (root/"assets/catalog/original-27531-sourced-lookup.csv").open("r",encoding="utf-8",newline="") as f:
        for r in csv.DictReader(f):
            if r["source_status"]=="exact_original_name_native_png":
                native.add(r["native_png_path"].rsplit("/",1)[-1])
    if len(native)!=26277:raise ValueError("Missing 26277 native exact PNG filenames")
    trials=(0,1,0x20,0x21)
    records=[]
    for row in r53["base_names_344"]:
        name=row["name"]; id_=row["original_item_id_decimal"]
        if any(not row[f"client_{f}_same_id_and_name"] for f in ("items_csv","variations_csv")):
            raise ValueError("Previously verified two CSV identifiers changed")
        bydata={str(d):simulate(id_,client,native,d) for d in trials}
        records.append({"itemparam_iname":name,"itemparam_id_decimal":id_,
            "itemremake_same_id":any(str(iid)==str(id_) for iid in []),
            "predicted_client_file_found_for_data_0":bydata["0"]["filename"],
            "predicted_default_branch":bydata["0"]["branch"],
            "request_data_trials":bydata,
            "source_native_image_name_match":bydata["0"]["filename"]==name+"_Remake_0_0.png",
            "this_is_not_game_or_client_runtime_execution":True})
    clothing=[]
    for r in cloth["entries"]:
        target=r["requested_catalog_png_name"]
        name=r["original_itemparam_instance_name"]
        ids=itemparam.get(name,[])
        if len(ids)!=1:raise ValueError("ItemParam instance not uniquely identifiable "+name)
        id_=ids[0]
        citems=client["items.csv"]["byid"].get(id_,[])
        cvars=client["variations.csv"]["byid"].get(id_,[])
        cfield=client["field.csv"]["byid"].get(id_,[])
        result=simulate(id_,client,native,0)
        clothing.append({"catalog_name":target,"native_instance":name,
            "native_itemparam_id":id_,"poker_items_csv_id_records":[x["iName"] for x in citems],
            "poker_variations_csv_id_records":[x["iName"] for x in cvars],
            "poker_field_csv_id_records":[x["iName"] for x in cfield],
            "poker_model_default_filename":result["filename"],
            "poker_model_branch":result["branch"],
            "original_ROM_FtrIcon_png":r["original_ftricon"]["output_png"],
            "original_ROM_ClosetIcon_png":r["original_closeticon"]["output_png"],
            "original_catalog_filename_equivalence_verified":False})
    other=[]
    for r in r61["records"]:
        if r["source_type"]!="original_other_UI_layout":continue
        name=r["native_texture_BRTI_name"]
        hits={t:sorted({x["id_decimal"] for x in client[t]["byname"].get(name,[])})
             for t in ("items.csv","variations.csv","field.csv","override.csv")}
        family=r["original_rom_source"].rsplit("/",1)[-1].split("_")[1]
        other.append({"catalog_name":r["requested_original_catalog_name"],
            "native_texture_name":name,"source_family_name":family,
            "client_csv_name_hits":hits,
            "client_csv_name_found":any(hits.values()),
            "original_Nintendo_UI_loader_verified":False})
    if len(other)!=391:raise ValueError("Other-layout expected 391")
    def cats(items,key):return dict(sorted(Counter(x[key] for x in items).items()))
    return {"schema":"acnh303_r63_pinned_client_static_selection_replay_v1",
        "pinned_client":contract,
        "client_tables_sha":{k:{"sha256":v["sha256"],"rows":v["rows"]} for k,v in client.items()},
        "virtual_folder_scope":"existing_exact_original_native_filenames_only_no_candidate_png_renames",
        "client_CSharp_executable_invoked":False,
        "Nintendo_original_runtime_invoked":False,
        "remake_344_total":len(records),
        "remake_344_default_native_matches":sum(r["source_native_image_name_match"] for r in records),
        "remake_344_default_selection_branch":cats(records,"predicted_default_branch"),
        "remake_344_data_samples":{str(d):dict(sorted(Counter(x["request_data_trials"][str(d)]["branch"] for x in records).items())) for d in trials},
        "clothing_39_total":len(clothing),
        "clothing_39_model_branches":cats(clothing,"poker_model_branch"),
        "clothing_39_current_client_id_known":sum(bool(x["poker_items_csv_id_records"]) for x in clothing),
        "other_layout_391_total":len(other),
        "other_layout_family_counts":cats(other,"source_family_name"),
        "other_layout_391_matching_some_client_table_name":sum(x["client_csv_name_found"] for x in other),
        "no_pictures_created_or_renamed":True,
        "unverified_original_catalog_names_remain_pending":1254,
        "furniture_rows":records,"clothing_rows":clothing,"other_layout_rows":other}

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    a=p.parse_args();root=a.root.resolve()
    out=analyze(root)
    dest=root/"assets/evidence/rom-items"
    (dest/"r63-pokercore-lookup-replay.json").write_text(
        json.dumps(out,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with (dest/"r63-pokercore-selection.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["source_group","catalog_name","client_id","modeled_image_path",
                                   "modeled_branch","runtime_verified"])
        for r in out["furniture_rows"]:
            w.writerow(["344 default",r["itemparam_iname"]+".png",r["itemparam_id_decimal"],
                       r["predicted_client_file_found_for_data_0"],r["predicted_default_branch"],False])
        for r in out["clothing_rows"]:
            w.writerow(["39 clothes",r["catalog_name"],r["native_itemparam_id"],
                       r["poker_model_default_filename"],r["poker_model_branch"],False])
    print(json.dumps({k:v for k,v in out.items() if k not in ("furniture_rows","clothing_rows","other_layout_rows")},ensure_ascii=False))

if __name__=="__main__":main()
