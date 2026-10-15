#!/usr/bin/env python3
"""R37 real standalone Stream/*.bwav sample-payload vs Bgm_Base BARS headers.

Cautious evidence gates: original source member SHA, CRC32(stem) and authentic
standalone stream SHA, native channel header and payload bounds. Do not conflate
matching CRC with proven in-game loader call or perceptual audio parity.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,subprocess,zlib
from pathlib import Path
from acnh303_bars_probe import NCA
from acnh303_round35_short_bwav import inspect_short

MAX_INDIVIDUAL=64*1024*1024
MAX_ALL=256*1024*1024
def sh(b):return hashlib.sha256(b).hexdigest()
def repo_entry_size(repo,p):
 cmd=subprocess.run(["git","ls-tree","-r","-l","HEAD","--",p],cwd=repo,
  capture_output=True,text=True,check=True)
 items=[s for s in cmd.stdout.splitlines() if s.strip()]
 if len(items)!=1:raise ValueError("missing exact original file path "+p)
 left,path=items[0].split("\t",1)
 if path!=p:raise ValueError("git source mismatch")
 return int(left.split()[-1])
def category(path):
 name=Path(path).stem
 if name.startswith("BGM_Audio_"):return "audio"
 if name.startswith("BGM_MusicBox_"):return "musicbox"
 if name.startswith("BGM_24Hour_"):return "24hour"
 if name.startswith("BGM_Live_"):return "live"
 if name.startswith("BGM_Indoor_"):return "indoor"
 if name.startswith("BGM_"):return "other_bgm"
 if name.startswith("Radio_"):return "radio"
 return "other"
def main():
 cli=argparse.ArgumentParser()
 cli.add_argument("--repo",type=Path,default=Path("."))
 cli.add_argument("--matrix",type=Path,required=True)
 cli.add_argument("--out",type=Path,required=True)
 cli.add_argument("--sample-cap",type=int,default=18)
 args=cli.parse_args();repo=args.repo.resolve()
 d=json.loads(args.matrix.read_text("utf8"))
 if d["BARS_header_only_member_count"]!=891:raise ValueError("original audio key table changed")
 names=d["CRC_matching_paths_by_explicit_hypothesis"]
 for key,v in names.items():
  if len(v)!=1 or v[0]["hypothesis"]!="stem" or not v[0]["source_path"].startswith("Sound/Resource/Stream/"):
   raise ValueError("ambiguous/nonstandard matched CRC")
  if zlib.crc32(Path(v[0]["source_path"]).stem.encode())&0xffffffff!=int(key,16):
   raise ValueError("candidate filename did not actually produce BARS native CRC")
 shorts={x["name_crc32_hex"]:x for x in d["all_original_members"]}
 if len(shorts)!=891 or not set(names)<=shorts.keys():raise ValueError("unverifiable native CRC set")
 unmatched=sorted(set(shorts)-set(names))
 if len(names)<800:raise ValueError("too few original CRC name matches to claim structural linkage")
 groups=collections.defaultdict(list)
 for key,v in sorted(names.items()):
  path=NCA+"/1/"+v[0]["source_path"]
  n=repo_entry_size(repo,path)
  groups[category(path)].append((key,path,n))
 # Stable categories and spread within each category, with size-limits to avoid
 # downloading hundreds of MB on a shared CI runner.
 chosen=[];taken=set();size_total=0
 for group in ("audio","24hour","musicbox","live","indoor","radio","other_bgm","other"):
  rows=groups[group]
  for idx in (0,len(rows)//2,len(rows)-1) if rows else ():
   k,p,n=rows[idx]
   if (p not in taken and n<=MAX_INDIVIDUAL and size_total+n<=MAX_ALL and
      len(chosen)<args.sample_cap):
    chosen.append((k,p,n,group));taken.add(p);size_total+=n
 # Fill with evenly distributed hashes; retain at least 8 if real inputs allow.
 rows=[(k,NCA+"/1/"+v[0]["source_path"],category(v[0]["source_path"])) for k,v in sorted(names.items())]
 stride=max(1,len(rows)//max(1,args.sample_cap))
 for k,p,group in rows[::stride]:
  if len(chosen)>=args.sample_cap:break
  if p in taken:continue
  n=repo_entry_size(repo,p)
  if n<=MAX_INDIVIDUAL and size_total+n<=MAX_ALL:
   chosen.append((k,p,n,group));taken.add(p);size_total+=n
 if len(chosen)<6:raise ValueError("too few original independent stream files fit audit bounds")
 results=[]
 for k,p,size,group in chosen:
  subprocess.run(["git","checkout","--ignore-skip-worktree-bits","HEAD","--",p],
   cwd=repo,check=True,capture_output=True)
  stream=(repo/p).read_bytes()
  if len(stream)!=size:raise ValueError("original Git blob size mismatch")
  ch=inspect_short(stream)
  original=shorts[k]
  old=original["channels"]
  new=ch.get("channels",[])
  if ch.get("status")!="VALID_BOUNDED_NATIVE_HEADER" or len(new)!=len(old):
   raise ValueError("standalone original BWAV malformed or different channel count")
  rows=[]
  for a,b in zip(old,new):
   same_fmt=a["encoding_id"]==b["encoding_id"]
   same_rate=a["sample_rate"]==b["sample_rate"]
   rows.append({"encoding_matches":same_fmt,"sample_rate_matches":same_rate,
       "bars_nonprefetch_samples":a["nonprefetch_samples"],
       "standalone_nonprefetch_samples":b["nonprefetch_samples"],
       "standalone_file_samples":b["file_samples"],
       "bars_file_samples":a["file_samples"],
       "sample_count_exact_match_nonprefetch":a["nonprefetch_samples"]==b["nonprefetch_samples"],
       "sample_count_exact_match_file":a["nonprefetch_samples"]==b["file_samples"],
       "stream_payload_offset":b["payload_offset"],
       "stream_payload_in_file":b["payload_offset_in_member"],
       "bytes_beyond_stream_payload_offset":b["payload_bytes_from_offset"]})
  results.append({"crc":k,"original_audio_path":p.split("/1/",1)[1],
      "name_crc32_input":Path(p).stem,"category":group,
      "original_source_bytes":size,"original_source_sha256":sh(stream),
      "standalone_BWAV_native_status":ch["status"],
      "stream_contains_actual_payload":any(x["stream_payload_in_file"] and x["bytes_beyond_stream_payload_offset"]>0 for x in rows),
      "channel_pair_comparisons":rows})
  print("R37_ACTUAL_EXTERNAL_SOURCE",k,Path(p).name,size,rows,flush=True)
 by=collections.Counter(x["category"] for x in results)
 r={"schema":"acnh303-r37-real-standalone-BWAV-stream-versus-BARS-891-CRC-and-sample-byte-audit-v1",
  "original_short_members":891,"source_stream_name_crc_matches":len(names),
  "unmatched_BARS_name_CRCs":unmatched,"unmatched_BARS_name_CRC_count":len(unmatched),
  "native_CRC_name_match_not_sufficient_for_audio_provenance":True,
  "sampled_real_source_stream_files":len(results),
  "source_original_BWAV_bytes_read_and_sha_verified":sum(x["original_source_bytes"] for x in results),
  "stream_sample_categories":dict(by),
  "actually_payload_bearing_sample_streams":sum(x["stream_contains_actual_payload"] for x in results),
  "sampled_stream_channel_params":results,
  "source_original_BARS_sha":d["original_bars_sha256"],
  "source_elf_sha":d["source_elf_sha256"],
  "actual_live_AAL_loader_proven":False,
  "exhaustive_bytes_of_all_873_linked_streams_verified":False,
  "limits":"Source CRC32 matches independently named Stream/*.bwav assets. These additional original stream file bytes and channel headers were verified for selected samples only, NOT the other matching names. No live AAL IO call graph/dynamic confirmation; stream contained sample payload is not proof of full audio decode/parity."}
 args.out.parent.mkdir(parents=True,exist_ok=True)
 args.out.write_text(json.dumps(r,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R37_ACTUAL_PAYLOAD_STREAMS",r["actually_payload_bearing_sample_streams"],"/",len(results),
    "CRC_FILENAME_MATCH",len(names),"/891","BY_CATEGORY",dict(by))
if __name__=="__main__":main()
