#!/usr/bin/env python3
"""Forensic Git HEAD tree availability of one historically failed source."""
import argparse,hashlib,json,subprocess
from pathlib import Path
from difflib import get_close_matches
from acnh303_round33_failed_source import locate
NCA="e10617820db06889e1638499478da0de_NCA"
def main():
  a=argparse.ArgumentParser();a.add_argument("--out",type=Path,required=True);args=a.parse_args()
  old=locate()["failed_source"]
  wanted=NCA+"/1/"+old["original_source_relative_path"]
  raw=subprocess.run(["git","ls-tree","-rz","HEAD","--",NCA+"/1/Model/"],
      check=True,capture_output=True).stdout
  data=[]
  for row in raw.split(b"\0"):
    if not row:continue
    head,sep,path=row.partition(b"\t")
    if not sep or not head.startswith(b"100644 blob "):continue
    data.append(path.decode("utf8"))
  exact=wanted in data
  related=[n for n in data if "charactoranimation" in n.lower()]
  close=get_close_matches(wanted,data,n=12,cutoff=0.80)
  report={"schema":"acnh303-r33-exact-historical-failure-git-tree-identity-v1",
    "historical_source_relative_path":old["original_source_relative_path"],
    "historical_sha256":old["original_source_sha256"],
    "historical_converter_failure":old["original_record"]["parser_errors"],
    "head_commit":subprocess.run(["git","rev-parse","HEAD"],capture_output=True,text=True,check=True).stdout.strip(),
    "exact_original_path_in_head":exact,
    "original_git_blob_count_in_model":len(data),
    "casefold_matches":[x for x in related if Path(x).name.lower()==Path(wanted).name.lower()][:20],
    "related_original_paths":related[:35],
    "closest_original_names":close,
    "replay_requirement":"Must obtain an exact source file SHA match before any converter replay; never substitute another source."}
  args.out.parent.mkdir(parents=True,exist_ok=True)
  args.out.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n",encoding="utf8")
  print("R33_FAILED_TREE",json.dumps(report,ensure_ascii=False)[:4400])
if __name__=="__main__":main()
