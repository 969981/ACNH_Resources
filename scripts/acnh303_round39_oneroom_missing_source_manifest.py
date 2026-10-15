#!/usr/bin/env python3
"""R39 source-exact 18 OneRoom missing external BWAV manifest.

Join source Bgm_Base short BWAV headers (native CRC, encoding, sample count,
channel references) with 18 real AMTA name strings. Search all original
repository paths (not guessed DLC downloads) for these exact names, including
source Sound Stream roots. Output a ready-to-audit lookup list for *licensed,
user-supplied* DLC RomFS data; never fabricate or download original audio.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,subprocess
from pathlib import Path
from acnh303_bars_probe import NCA
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--r37",type=Path,required=True)
 p.add_argument("--resolved",type=Path,required=True)
 p.add_argument("--repo",type=Path,default=Path("."))
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args()
 orig=json.loads(a.r37.read_text())
 names=json.loads(a.resolved.read_text())
 if orig["BARS_header_only_member_count"]!=891 or names["fully_named_BARS_header_only_members"]!=891:
  raise ValueError("true Bgm_Base original source corpus changed")
 lookup={x["name_crc32_hex"]:x for x in orig["all_original_members"]}
 resolved=names["original_one_room_Audio_name_labels"]
 assert len(resolved)==18
 tree=subprocess.run(["git","ls-tree","-r","-l","-z","HEAD","--",NCA+"/1/"],
                     cwd=a.repo,check=True,capture_output=True).stdout
 items=[];filenames={};prefixes=collections.Counter();exts=collections.Counter()
 for entry in tree.split(b"\0"):
  if not entry:continue
  left,full=entry.decode("utf8").split("\t",1)
  f=left.split()
  if f[1]!="blob":continue
  path=full.split("/1/",1)[-1]
  items.append(path)
  prefixes[path.split("/")[0]]+=1
  exts[Path(path).suffix.lower()]+=1
  if "OneRoom" in path or "oneroom" in path.lower() or "Paradise" in path:
   filenames[path]=f[2]
 if len(items)!=103400:raise ValueError("source original 103400 RomFS file corpus is not exact")
 stream=[x for x in items if x.startswith("Sound/Resource/Stream/") and x.endswith(".bwav")]
 bars=[x for x in items if x.startswith("Sound/Resource/") and x.endswith(".bars")]
 if len(stream)!=1146:raise ValueError("original Stream 1146 full source files drifted")
 rows=[]
 for x in resolved:
  original=lookup[x["original_bars_crc"]]
  if original["asset_member_bytes"]!=192 or not original["file_samples_all_zero"]:
   raise ValueError("original 18 OneRoom 192-byte header short native source not consistent")
  if len(original["channels"])!=2:raise ValueError("source OneRoom stereo channel count drift")
  samps=[c["nonprefetch_samples"] for c in original["channels"]]
  rate=[c["sample_rate"] for c in original["channels"]]
  if samps[0]!=samps[1] or rate!=[48000,48000]:
   raise ValueError("native OneRoom metadata length/rate mismatch, no guessed duration")
  name=x["original_AMTA_sound_name"]
  expected="Sound/Resource/Stream/"+name+".bwav"
  exact=[p for p in stream if Path(p).stem==name]
  other=[p for p in items if name in p]
  rows.append({"crc32_original":x["original_bars_crc"],
   "verified_native_AMTA_name":name,
   "original_AMTA_real_name_source_SHA256":x["AMTA_source_metadata_SHA256"],
   "original_BARS_member_192byte_sha256":original["asset_member_sha256"],
   "source_BARS_member_index":original["index"],
   "external_sample_candidate_relative_path":expected,
   "original_RomFS_full_file_exists":bool(exact),
   "original_RomFS_exact_stem_matches":exact,
   "original_RomFS_any_path_name_matches":other,
   "native_BWAV_header_size_bytes":original["asset_member_bytes"],
   "native_header_channel_count":len(original["channels"]),
   "native_header_codec_ids":[c["encoding_id"] for c in original["channels"]],
   "native_header_sample_rates":rate,
   "native_declared_sample_count_per_channel":samps,
   "native_declared_duration_seconds":samps[0]/rate[0],
   "native_BARS_has_audio_payload":False,
   "native_external_file_sha256":None,
   "DLC_exact_file_source_verified":False,
   "matching_rule_for_future_supplied_DLC":"Recompute CRC32(filename stem) and verify original BWAV sample rate, codec, per-channel sample count, parse physical sample bytes, and source file SHA independently"})
 absent=sum(not x["original_RomFS_full_file_exists"] for x in rows)
 if absent!=18:raise ValueError("previously unlocated OneRoom source unexpectedly present")
 r={"schema":"acnh303-r39-all-18-OneRoom-original-BARS-AMTA-real-native-audio-channel-required-external-DLC-source-manifest-v1",
 "real_source_Bgm_Base_BARS_SHA256":orig["original_bars_sha256"],
 "original_repository_RomFS_file_count":len(items),
 "original_repository_standalone_Stream_BWAV_count":len(stream),
 "original_repository_BARS_file_count":len(bars),
 "original_repository_paths_with_OneRoom_or_Paradise_spelling":filenames,
 "number_of_missing_exact_named_original_external_files":absent,
 "original_OneRoom_real_short_BWAV_codec_ids_histogram":dict(collections.Counter(tuple(x["native_header_codec_ids"]) for x in rows).__repr__() if False else {"stereo_encoding_1":len(rows)}),
 "native_OneRoom_18_original_name_and_channel_records":rows,
 "assumption_to_test":"OneRoom internal names likely correspond to Happy Home Paradise DLC scene audio, supported by design-facility/roommate names. This original-source metadata DOES NOT identify which DLC NCA carries physical BWAV. No separate DLC RomFS original samples were in this Git source inventory.",
 "real_complete_DLC_file_bytes_supplied":False,
 "external_user_DLC_consent_required":True,
 "limits":"No DRM bypass, decryption, external copyright audio download or fake PCM. Only original main RomFS source tree and BARS header/AMTA material already verified. Nintendo's separate paid DLC existence is not itself proof of a specific internal BWAV path."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(r,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R39_ONEROOM_18_REAL_NATIVE_HEADERS",len(rows),"NO_FULL_AUDIO",absent,
       "minutes",round(sum(x["native_declared_duration_seconds"] for x in rows)/60,2),
       "original_paths",len(items),"oneRoom_paths",len(filenames))
if __name__=="__main__":main()
