#!/usr/bin/env python3
"""R36 real original BFRES candidate FSKL survey, not inferred name matches.

Samples Player face/hair and several animal NPC models by verified original Git
path. Extract exact FRES leaves, parse native FMDL/FSKL with BfresLibrary and
compare ONLY actual skeleton bone names against the 19 missing R35 names.
"""
from __future__ import annotations
import argparse,hashlib,json,subprocess,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[2]/"scripts"))
from acnh303_media_l3 import find_leaf,NCA

CANDIDATES=("PlayerEye00","PlayerHair00","NpcSpFox","NpcSpKpp","NpcSpOwl",
            "NpcSpTap","NpcSpPoo","NpcSpRcm","NpcSpPyn","NpcSpSzo",
            "NpcSpGul","NpcSpMob","NpcNmlRbt00","NpcNmlSqu00",
            "NpcNmlCat00","NpcNmlDog00","NpcNmlBea00","NpcNmlCbr00")
SUFFIX=".Nin_NX_NVN.zs"

def execute(repo,match_path,report_path):
    match=json.loads(match_path.read_text("utf8"))["actual_matches"][0]
    missing=set(match["missing_animation_bones"])
    if len(missing)!=19:raise ValueError("R35 19 missing bone identities changed")
    prefix=NCA+"/1/Model/"
    out=subprocess.run(["git","ls-tree","-rz","HEAD","--",prefix],cwd=repo,
                       capture_output=True,check=True).stdout
    names=set()
    for part in out.split(b"\0"):
        if not part:continue
        head,p=part.split(b"\t",1)
        if head.startswith(b"100644 blob "):names.add(p.decode("utf8"))
    selected=[prefix+x+SUFFIX for x in CANDIDATES if prefix+x+SUFFIX in names]
    if len(selected)<8:raise ValueError("fewer than eight actual target files in original 60166 Model tree")
    if len(set(selected))!=len(selected):raise ValueError("duplicate original paths")
    rows=[];unions=set()
    with tempfile.TemporaryDirectory(prefix="r36-real-FSKL-") as tmp:
        directory=Path(tmp)
        for idx,original in enumerate(selected):
            subprocess.run(["git","checkout","--ignore-skip-worktree-bits","HEAD","--",original],
                           cwd=repo,check=True,capture_output=True)
            f=repo/original
            data=f.read_bytes();sha=hashlib.sha256(data).hexdigest()
            if not data:raise ValueError("empty original "+original)
            leaves=[x for x in find_leaf(data,original) if x["data"][:4]==b"FRES"]
            row={"original_path":original[len(NCA+"/1/"):],"source_sha256":sha,
                 "source_bytes":len(data),"fres_member_count":len(leaves),
                 "actual_models":[],"matching_missing_names":[]}
            if len(leaves)>4:raise ValueError("too many real FRES leaves")
            for n,leaf in enumerate(leaves):
                payload=leaf["data"]
                if len(payload)>64*1024*1024:raise ValueError("FRES candidate is too large")
                inp=directory/f"candidate_{idx}_{n}.bfres"
                parsed=directory/f"candidate_{idx}_{n}.json"
                inp.write_bytes(payload)
                cmd=["dotnet","run","--no-build","--configuration","Release",
                     "--project","tools/r35-player-skeleton/SkeletonProbe.csproj","--",
                     str(inp),str(parsed)]
                proc=subprocess.run(cmd,cwd=repo,capture_output=True,text=True,timeout=180)
                if not parsed.exists():
                    row["actual_models"].append({"status":"PARSE_FAILED",
                          "error":proc.stderr[-350:],"source_fres_sha256":hashlib.sha256(payload).hexdigest()})
                    continue
                j=json.loads(parsed.read_text("utf8"))
                if j.get("status")!="BfresLibrary_FMDL_FSKL_deserialized":
                    row["actual_models"].append({"status":"PARSE_FAILED",
                          "error":j.get("error","unspecified"),
                          "source_fres_sha256":hashlib.sha256(payload).hexdigest()})
                    continue
                for model in j["models"]:
                    skeleton={bone["name"] for bone in model["real_bones"]}
                    found=sorted(skeleton & missing);unions.update(found)
                    row["matching_missing_names"].extend(found)
                    row["actual_models"].append({"status":"REAL_FMDL_FSKL",
                          "fres_sha256":hashlib.sha256(payload).hexdigest(),
                          "model_name":model["name"],"shape_count":model["shape_count"],
                          "bone_count":model["real_fskl_bone_count"],
                          "matched_missing_19":found,
                          "all_source_FSKL_bone_names":sorted(skeleton),
                          "native_parent_count":sum(b["parent_index"]>=0 for b in model["real_bones"])})
            row["matching_missing_names"]=sorted(set(row["matching_missing_names"]))
            row["status"]="native_FSKL_matched" if row["matching_missing_names"] else (
                "native_FSKL_parsed_no_missing_match" if row["actual_models"] else "no_model_fres")
            rows.append(row)
            print("R36_ACTUAL_FSKL_CANDIDATE",row["original_path"],row["status"],
                  row["matching_missing_names"],flush=True)
            del data
    report={"schema":"acnh303-r36-real-original-sampled-face-hair-NPC-FSKL-lookup-v1",
      "original_Model_total_from_R35":60166,
      "sampled_original_count":len(rows),
      "sampled_exact_source_sha_count":len({r["source_sha256"] for r in rows}),
      "source_R35_missing_bones":sorted(missing),
      "union_actually_found_missing_bones":sorted(unions),
      "still_not_matched_among_these_samples":sorted(missing-unions),
      "actual_original_records":rows,
      "limitations":"Only selected source names were fetched, source-SHA validated and truly parsed. A matching bone name on another NPC species is NOT evidence that NPC mesh belongs in a PlayerBody rig or shares bind pose, source animation BindIndices, or skinned transforms. 19 refers to union across FSKA, not a single player animation."}
    report_path.parent.mkdir(parents=True,exist_ok=True)
    report_path.write_text(json.dumps(report,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf8")
    print("R36_MISSING_BONES_VERIFIED",len(unions),sorted(unions))
    return report

if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--repo",type=Path,default=Path("."))
    p.add_argument("--match",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    x=p.parse_args();execute(x.repo.resolve(),x.match,x.out)
