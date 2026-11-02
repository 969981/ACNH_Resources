#!/usr/bin/env python3
"""R60: decode FtrSoftdrinkOrange from the two actual original 3.0.3 UI layouts.

The external catalog asks for FtrSoftdrinkOrange_3.0.0.png; neither source
below proves byte-identity with that old filename. Do not rename images.
"""
from pathlib import Path
import argparse,csv,json
from acnh303_villager_rom_extract import convert_one
from acnh303_assets import png_info

PREFIX="e10617820db06889e1638499478da0de_NCA/1/Model/"
SUFFIX=".Nin_NX_NVN.zs"
FAMILIES=("FtrIcon","CookingIcon")
REQUESTED="FtrSoftdrinkOrange_3.0.0.png"
NAME="FtrSoftdrinkOrange"

def sources(root):
    return [(family,PREFIX+"Layout_"+family+"_"+NAME+SUFFIX) for family in FAMILIES]

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument("mode",choices=("plan","export"))
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--wimgt",type=Path)
    args=parser.parse_args()
    root=args.root.resolve()
    if args.mode=="plan":
        Path("/tmp/acnh-r60-original-sources.txt").write_text(
            "".join("/"+p+"\n" for _,p in sources(root)),encoding="utf-8")
        print(json.dumps({"source_count":2,"original_layouts":[p for _,p in sources(root)]}))
        return 0
    if args.wimgt is None or not args.wimgt.is_file():
        parser.error("real pinned wimgt decoder required")
    outcomes=[]
    for family,path in sources(root):
        try:
            p=root/path
            if not p.is_file():raise FileNotFoundError(path)
            result=convert_one(root,args.wimgt.resolve(),
                (family,"assets/images/softdrink-original/"+family,p,NAME+".png"),
                seconds=120,output_mb=20,
                raw_dir=Path("assets/textures/softdrink-original"))
            pngs=result.get("pngs",[])
            matched=(result.get("status")=="one_original_rom_texture_exported"
                and result.get("native_bnti_name_matches_filename") is True and len(pngs)==1
                and png_info(root/pngs[0]["output"])["sha256"]==pngs[0]["sha256"])
            result["native_bnti_name_verified"]=matched
        except Exception as exc:
            result={"source":path,"status":"failed","error":str(exc)[:300],
                    "pngs":[],"native_bnti_name_verified":False}
        result["original_catalog_requested_png"]=REQUESTED
        result["original_catalog_filename_byte_equivalence_verified"]=False
        result["older_3_0_0_rom_bytes_obtained"]=False
        outcomes.append(result)
    out={"schema":"acnh303_r60_original_softdrink_layout_comparison_v1",
         "catalog_name":REQUESTED,
         "current_3_0_3_base_name":NAME,
         "real_original_sources":2,
         "native_pngs_bnti_and_sha_verified":sum(x["native_bnti_name_verified"] for x in outcomes),
         "catalog_3_0_0_version_suffix_not_evidence_of_pixel_identity":True,
         "independent_3_0_0_rom_compared":False,
         "status":"candidate_base_source_verified_not_old_version_pixel_equivalence",
         "source_records":outcomes}
    target=root/"assets/evidence/rom-softdrink"
    target.mkdir(exist_ok=True,parents=True)
    (target/"report.json").write_text(json.dumps(out,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    with (target/"report.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f)
        w.writerow(["family","original_source","native_png_path","native_sha256","original_catalog_filename_identity"])
        for x in outcomes:
            w.writerow([x.get("category"),x.get("source"),
                        x["pngs"][0]["output"] if x["pngs"] else "",
                        x["pngs"][0]["sha256"] if x["pngs"] else "",False])
    print(json.dumps({k:v for k,v in out.items() if k!="source_records"},ensure_ascii=False))
    return 0 if out["native_pngs_bnti_and_sha_verified"]==2 else 1

if __name__=="__main__":raise SystemExit(main())
