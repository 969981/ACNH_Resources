#!/usr/bin/env python3
"""Very small exact-original audio data proof against Bgm_Base native name CRC."""
import argparse,hashlib,json,subprocess,zlib
from pathlib import Path
from acnh303_bars_probe import NCA
from acnh303_round35_short_bwav import inspect_short

CANDIDATES=["BGM_Radio_Jingle_Normal_03","BGM_MusicBox_014_Mambo","BGM_Indoor_Cafe"]
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--repo",type=Path,default=Path("."))
 p.add_argument("--matrix",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();repo=a.repo.resolve()
 d=json.loads(a.matrix.read_text("utf8"))
 short={x["name_crc32_hex"]:x for x in d["all_original_members"]}
 rows=[]
 for name in CANDIDATES:
  crc="0x%08x"%(zlib.crc32(name.encode())&0xffffffff)
  candidates=d["CRC_matching_paths_by_explicit_hypothesis"].get(crc,[])
  if len(candidates)!=1 or candidates[0]["actual_hashed_text"]!=name:
   raise ValueError("native BARS name hash did not identify original independently named file "+name)
  path=candidates[0]["source_path"];source=repo/NCA/"1"/path
  git_path=str(source.relative_to(repo))
  subprocess.run(["git","checkout","--ignore-skip-worktree-bits","HEAD","--",git_path],
                 cwd=repo,capture_output=True,check=True)
  data=source.read_bytes()
  if data[:4]!=b"BWAV":raise ValueError("original standalone file is not BWAV magic")
  head=inspect_short(data)
  old=short[crc]
  if head.get("status")!="VALID_BOUNDED_NATIVE_HEADER":raise ValueError("invalid original full BWAV native header")
  if len(head["channels"])!=len(old["channels"]):raise ValueError("name matching but channel count differs")
  vals=[]
  for s,o in zip(head["channels"],old["channels"]):
   vals.append({"matching_codec_id":s["encoding_id"]==o["encoding_id"],
    "matching_sample_rate":s["sample_rate"]==o["sample_rate"],
    "short_nonprefetch_samples":o["nonprefetch_samples"],
    "stream_nonprefetch_samples":s["nonprefetch_samples"],
    "stream_file_samples":s["file_samples"],
    "short_file_samples":o["file_samples"],
    "sample_bytes_reachable":bool(s["payload_offset_in_member"] and s["payload_bytes_from_offset"]>0),
    "full_stream_payload_offset":s["payload_offset"],
    "full_stream_payload_remaining":s["payload_bytes_from_offset"]})
  rows.append({"name":name,"source_path":path,"original_source_bytes":len(data),
    "original_source_sha256":hashlib.sha256(data).hexdigest(),
    "native_crc32_hex":crc,"source_short_member_sha256":old["asset_member_sha256"],
    "standalone_native_channel_comparison":vals})
  print("R37_SINGLE_ORIGINAL_STREAM",name,len(data),vals,flush=True)
 r={"schema":"acnh303-r37-three-original-independent-BWAV-source-byte-proof-v1",
 "original_bars_SHA":d["original_bars_sha256"],"original_native_BARS_header_only_members":891,
 "CRC_name_mapping_total":len(d["CRC_matching_paths_by_explicit_hypothesis"]),
 "strict_actual_source_files_read":len(rows),"real_audio_source_samples":rows,
 "original_stream_member_contains_payload":sum(any(v["sample_bytes_reachable"] for v in x["standalone_native_channel_comparison"]) for x in rows),
 "native_live_audio_file_open_verified":False,
 "limits":"Original three standalone Sound/Resource/Stream BWAV original Git blob bytes, SHA and channel header vs name CRC. Sample payload in file and metadata alignment are evidence of actual related external source; runtime AAL selection still needs real read trace."}
 a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(r,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R37_THREE_ORIGINAL_INDEPENDENT_AUDIO_SOURCES_VERIFIED",r["original_stream_member_contains_payload"])
if __name__=="__main__":main()
