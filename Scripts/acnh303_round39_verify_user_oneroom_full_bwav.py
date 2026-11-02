#!/usr/bin/env python3
"""R39 verify user-supplied, lawfully sourced OneRoom full BWAV originals.

No decryption or download; no source audio contents distributed. Compare
actual external BWAV SHA and channel codec/rate/samples/physical payload to
the exact original Bgm_Base short member and AMTA metadata. If the user has
not supplied those full files, mark missing; NEVER substitute BARS short
headers, a converted BWAV or public soundtrack recording for native original.
"""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path
from acnh303_round35_short_bwav import inspect_short
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--manifest",required=True,type=Path)
 p.add_argument("--source-root",required=True,type=Path)
 p.add_argument("--out",required=True,type=Path)
 p.add_argument("--strict",action="store_true")
 args=p.parse_args()
 doc=json.loads(args.manifest.read_text())
 expected=doc["native_OneRoom_18_original_name_and_channel_records"]
 if len(expected)!=18 or doc["number_of_missing_exact_named_original_external_files"]!=18:
  raise ValueError("original 18 independent AMTA/CRC source requirement invalid")
 if args.source_root.exists() and not args.source_root.is_dir():
  raise ValueError("source path must be a directory")
 # Only search explicitly user-supplied source location, do not fetch
 # copyright audio from third party nor create synthetic source files.
 by_stem={}
 if args.source_root.exists():
  for path in args.source_root.rglob("*.bwav"):
   if not path.is_file():continue
   by_stem.setdefault(path.stem,[]).append(path)
 rows=[]
 for e in expected:
  candidates=sorted(by_stem.get(e["verified_native_AMTA_name"],[]))
  out={"original_BARS_CRC32":e["crc32_original"],
   "original_BARS_asset_member_index":e["source_BARS_member_index"],
   "source_native_AMTA_name":e["verified_native_AMTA_name"],
   "input_file_count":len(candidates),"original_full_source_sha256":None,
   "physical_BWAV_source_bytes":None,"status":"EXTERNAL_ORIGINAL_FULL_BWAV_NOT_SUPPLIED",
   "exact_native_channel_matches":None,"physical_audio_payload_present":False}
  if len(candidates)>1:
   out["status"]="AMBIGUOUS_DUPLICATE_STEM_FILES_NEED_EXPLICIT_PROVENANCE"
  elif len(candidates)==1:
   candidate=candidates[0]
   raw=candidate.read_bytes()
   actual=inspect_short(raw)
   source=actual.get("channels",[])
   if actual.get("status")!="VALID_BOUNDED_NATIVE_HEADER" or len(source)!=e["native_header_channel_count"]:
    out["status"]="INVALID_OR_WRONG_ORIGINAL_BWAV_NATIVE_HEADER"
   else:
    fields=[]
    for i,ch in enumerate(source):
     sample_expect=e["native_declared_sample_count_per_channel"][i]
     rate_expect=e["native_header_sample_rates"][i]
     codec_expect=e["native_header_codec_ids"][i]
     fields.append({
       "channel":i,
       "encoding_matches":ch["encoding_id"]==codec_expect,
       "native_sample_rate_matches":ch["sample_rate"]==rate_expect,
       "sample_count_matches":ch["nonprefetch_samples"]==sample_expect and ch["file_samples"]==sample_expect,
       "actual_full_sample_data_present":bool(ch["payload_offset_in_member"] and ch["payload_bytes_from_offset"]>0),
       "observed_codec":ch["encoding_id"],"observed_rate":ch["sample_rate"],
       "observed_file_samples":ch["file_samples"]})
    all_ok=all(all(ch[k] for k in ("encoding_matches","native_sample_rate_matches",
                                  "sample_count_matches","actual_full_sample_data_present")) for ch in fields)
    out.update({"original_full_source_sha256":hashlib.sha256(raw).hexdigest(),
     "physical_BWAV_source_bytes":len(raw),"exact_native_channel_matches":fields,
     "physical_audio_payload_present":all(ch["actual_full_sample_data_present"] for ch in fields),
     "status":"SOURCE_SHA_AND_NATIVE_STREAM_CHANNELS_VERIFIED" if all_ok else "WRONG_STREAM_CHANNEL_OR_SAMPLES"})
  rows.append(out)
 passcount=sum(x["status"]=="SOURCE_SHA_AND_NATIVE_STREAM_CHANNELS_VERIFIED" for x in rows)
 report={"schema":"acnh303-r39-lawfully-supplied-OneRoom-18-BWAV-native-short-header-full-source-independent-SHA-validator-v1",
 "real_original_BARS_sha256":doc["real_source_Bgm_Base_BARS_SHA256"],
 "expected_full_OneRoom_BWAV_count":18,
 "actually_supplied_and_SHA_header_payload_verified":passcount,
 "verified_one_room_source_files":rows,
 "all_eighteen_full_audio_source_closed":passcount==18,
 "native_game_AAL_runtime_playback_checked":False,
 "literal_external_byte_source_required":True,
 "no_full_copyrighted_audio_copied_to_report":True,
 "limits":"This verifies only native original BARS short-header metadata compatibility with actual user-supplied full BWAV files and SHA. Matching counts do not prove the Nintendo game opened the file or that data came from the correct official DLC NCA; provenance must be independently documented."}
 args.out.parent.mkdir(parents=True,exist_ok=True)
 args.out.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R39_ORIGINAL_ONE_ROOM_EXTERNAL_SUPPLIED_VALID",passcount,"of",len(rows))
 if args.strict and passcount!=18:raise SystemExit("Strict validation incomplete: actual original 18 full BWAV files were not provided or didn't match")
if __name__=="__main__":main()
