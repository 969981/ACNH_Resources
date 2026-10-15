#!/usr/bin/env python3
"""R38 exhaustively SHA/real-header/PCM-payload verify R37 Bgm_Base 873 CRC-named sources.

Workload sharded across CI runners. Only original Git tree blobs, original
BARS name CRC, original 891 short metadata and actual whole BWAV bytes count.
Do not assert runtime AAL reading behavior, decoding or gameplay output.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,subprocess,zlib
from pathlib import Path
from acnh303_bars_probe import NCA
from acnh303_round35_short_bwav import inspect_short

SHARDS=12
def file_tree(repo):
 r=subprocess.run(["git","ls-tree","-r","-l","-z","HEAD","--",
         NCA+"/1/Sound/Resource/Stream/"],cwd=repo,capture_output=True,check=True)
 out={}
 for item in r.stdout.split(b"\0"):
  if not item:continue
  a,p=item.decode().split("\t",1)
  a=a.split()
  if len(a)!=4 or a[1]!="blob":continue
  out[p]={"git_oid":a[2],"git_blob_size":int(a[3])}
 if len(out)!=1146:raise ValueError("Original exact Git tree standalone BWAV source count drifted")
 return out
def git_blob_sha1(raw):
 return hashlib.sha1(b"blob "+str(len(raw)).encode()+b"\0"+raw).hexdigest()
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--matrix",type=Path,required=True)
 p.add_argument("--repo",type=Path,default=Path("."))
 p.add_argument("--index",type=int,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 if a.index<0 or a.index>=SHARDS:raise ValueError("bad shard index")
 repo=a.repo.resolve();d=json.loads(a.matrix.read_text("utf8"))
 if d["BARS_header_only_member_count"]!=891 or d["BARS_original_asset_count"]!=945:
  raise ValueError("Original R37 BARS structure changed")
 matches=d["CRC_matching_paths_by_explicit_hypothesis"]
 if len(matches)!=873:raise ValueError("R37 873 name match inventory changed")
 source={x["name_crc32_hex"]:x for x in d["all_original_members"]}
 if len(source)!=891:raise ValueError("real original BARS CRC collision")
 paths=file_tree(repo)
 rows=[]
 for key,vals in sorted(matches.items()):
  if len(vals)!=1 or vals[0]["hypothesis"]!="stem":raise ValueError("ambiguous hash candidate")
  v=vals[0]
  full=NCA+"/1/"+v["source_path"]
  if full not in paths:raise ValueError("missing original Git audio path")
  if "0x%08x"%(zlib.crc32(Path(full).stem.encode("utf8"))&0xffffffff)!=key:
   raise ValueError("native member naming hash not recreated")
  rows.append((key,full,paths[full],v))
 selected=[r for i,r in enumerate(rows) if i%SHARDS==a.index]
 if len(selected)<65:raise ValueError("too few shard assets")
 selected_files=[x[1] for x in selected]
 # Import many blobs in ONE checkout instead of 70+ network round trips.
 # Sparse Git checkout paths are explicit and unchanged original sources.
 subprocess.run(["git","checkout","--ignore-skip-worktree-bits","HEAD","--",
     *selected_files],cwd=repo,check=True,timeout=1500)
 total=0;out=[];status=collections.Counter()
 for key,path,tree,record in selected:
  raw=(repo/path).read_bytes()
  size=len(raw);total+=size
  digest=hashlib.sha256(raw).hexdigest()
  git_oid=git_blob_sha1(raw)
  if size!=tree["git_blob_size"] or git_oid!=tree["git_oid"]:
   raise ValueError("actual Git blob bytes fail original repository tree SHA verification "+path)
  actual=inspect_short(raw)
  original=source[key]
  cur=actual.get("channels",[])
  old=original["channels"]
  if actual.get("status")!="VALID_BOUNDED_NATIVE_HEADER":
   outcome="INVALID_ORIGINAL_STREAM_NATIVE_HEADER"
  elif len(cur)!=len(old):
   outcome="CHANNEL_COUNT_MISMATCH"
  else:
   channels=[]
   for x,y in zip(old,cur):
    channels.append({"format_match":x["encoding_id"]==y["encoding_id"],
       "sample_rate_match":x["sample_rate"]==y["sample_rate"],
       "nonprefetch_sample_count_match":x["nonprefetch_samples"]==y["nonprefetch_samples"],
       "stream_file_sample_count_match":x["nonprefetch_samples"]==y["file_samples"],
       "stream_has_reachable_sample_data":bool(y["payload_offset_in_member"] and y["payload_bytes_from_offset"]>0),
       "stream_file_sample_count":y["file_samples"],
       "bars_declared_nonprefetch_samples":x["nonprefetch_samples"],
       "stream_payload_offset":y["payload_offset"],"stream_sample_bytes_after_offset":y["payload_bytes_from_offset"]})
   outcome="MATCH_NATIVE_HEADER_AND_REAL_PAYLOAD" if all(all(
       z[k] for k in ("format_match","sample_rate_match","nonprefetch_sample_count_match",
                    "stream_file_sample_count_match","stream_has_reachable_sample_data"))
       for z in channels) else "NATIVE_PARAMETER_OR_PAYLOAD_MISMATCH"
  entry={"name_crc32_hex":key,"source_path":record["source_path"],
         "name_crc32_input":record["actual_hashed_text"],
         "original_git_blob_oid_sha1":git_oid,"original_source_sha256":digest,
         "original_stream_bytes":size,"related_short_member_sha256":original["asset_member_sha256"],
         "status":outcome,
         "channel_comparisons":channels if actual.get("status")=="VALID_BOUNDED_NATIVE_HEADER" and len(cur)==len(old) else [],
         "actual_native_status":actual.get("status")}
  status[outcome]+=1;out.append(entry)
 result={"schema":"acnh303-r38-sharded-all-real-source-BWAV-byte-SHA-native-channel-and-sample-crosscheck-v1",
    "shard":a.index,"shard_count":SHARDS,"R37_original_name_crc_matches":len(matches),
    "original_BARS_source_SHA256":d["original_bars_sha256"],"original_ELF_SHA256":d["source_elf_sha256"],
    "original_source_git_tree_BWAV_total":len(paths),
    "checked_actual_git_original_files":len(out),
    "checked_actual_git_original_stream_bytes":total,
    "real_source_outcome_counts":dict(status),"all_native_sample_params_match":status.get("MATCH_NATIVE_HEADER_AND_REAL_PAYLOAD",0)==len(out),
    "source_file_records":out,
    "native_runtime_file_open_observed":False,
    "codec_decode_or_wav_verified":False,
    "scope":"Original Git SHA-1 BLOB bytes and computed SHA-256, native BWAV header and physical payload presence. Name CRC is not runtime path-resolution proof."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n")
 print("R38_SOURCE_SHARD",a.index,"FILES",len(out),"BYTES",total,"STATUS",dict(status),flush=True)
if __name__=="__main__":main()
