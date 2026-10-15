#!/usr/bin/env python3
"""R38 identify 18 R37 Bgm_Base BARS CRC names across *all* original Git tree.

Read-only original repository tree, no guessed source files/decoded media.
Report exact CRC32 on stem/basename and resource-relative spelling hypotheses.
Never silently treat a path collision as unique provenance.
"""
from __future__ import annotations
import argparse,collections,json,subprocess,zlib
from pathlib import Path
from acnh303_bars_probe import NCA
def crc(s):return "0x%08x"%(zlib.crc32(s.encode("utf8"))&0xffffffff)
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--matrix",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 p.add_argument("--repo",type=Path,default=Path("."))
 a=p.parse_args();d=json.loads(a.matrix.read_text())
 if d["BARS_header_only_member_count"]!=891 or len(d["CRC_matching_paths_by_explicit_hypothesis"])!=873:
  raise ValueError("R37 source checkpoint changed")
 c=set(d["CRC_matching_paths_by_explicit_hypothesis"])
 missing=sorted({x["name_crc32_hex"] for x in d["all_original_members"]}-c)
 if len(missing)!=18:raise ValueError("Not the original 18 unmatched hash cases")
 cmd=subprocess.run(["git","ls-tree","-r","-z","HEAD","--",NCA+"/1/"],
                    cwd=a.repo,capture_output=True,check=True)
 seen=0;matches=collections.defaultdict(list);extensions=collections.Counter();domains=collections.Counter()
 for entry in cmd.stdout.split(b"\0"):
  if not entry:continue
  left,path=entry.split(b"\t",1)
  if not left.startswith(b"100644 blob "):continue
  path=path.decode("utf8")
  source=path.split("/1/",1)[-1]
  name=Path(path).name
  stem=Path(path).stem
  candidates={"basename":name,"stem":stem,
              "romfs_relative":source,
              "romfs_relative_stem":source.rsplit(".",1)[0],
              "sound_relative":source.removeprefix("Sound/"),
              "sound_relative_stem":source.removeprefix("Sound/").rsplit(".",1)[0]}
  for typ,s in candidates.items():
   key=crc(s)
   if key in missing:
    matches[key].append({"source_path":source,"matched_candidate_kind":typ,
        "crc_input":s,"original_git_blob_oid":left.split()[-1].decode()})
  seen+=1;extensions[Path(path).suffix.lower()]+=1
  domains[source.split("/")[0]]+=1
 if seen<100000:raise ValueError("original source Git tree suspiciously too small")
 res={"schema":"acnh303-r38-real-RomFS-103k-entry-18-BARS-CRC-name-search-v1",
  "original_source_git_tree_file_count":seen,"unresolved_r37_crc_count":len(missing),
  "original_unresolved_crc":missing,
  "exact_crc_name_matches":dict(matches),
  "unresolved_after_full_actual_tree":[x for x in missing if x not in matches],
  "actual_original_RomFS_category_counts":dict(sorted(domains.items())),
  "original_git_file_extension_counts":dict(extensions.most_common(25)),
  "conclusion_limit":"CRC32 exact spelling hit does not by itself prove resource loader/stream association. Name variants searched are explicit; suffix or localized hidden internal names are NOT exhaustively recovered. Original Git tree paths only; no undeclared source content inferred."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(res,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
 print("R38_REAL_TREE_CRC_18",seen,"MATCH",len(matches),"REMAIN",len(res["unresolved_after_full_actual_tree"]))
 for k,v in matches.items():print("R38_CRC_MATCH",k,v[:3])
if __name__=="__main__":main()
