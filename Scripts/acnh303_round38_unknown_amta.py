#!/usr/bin/env python3
"""R38 original Bgm_Base AMTA/BWAV metadata for 18 unlisted CRCs.

Forensic byte windows/ASCII only; do not call them resolved file paths.
"""
import argparse,hashlib,json,re,struct
from pathlib import Path
from acnh303_bars_probe import inspect
BARS_SHA="b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c"
def main():
 p=argparse.ArgumentParser()
 p.add_argument("--original",type=Path,required=True)
 p.add_argument("--matrix",type=Path,required=True)
 p.add_argument("--out",type=Path,required=True)
 a=p.parse_args();b=a.original.read_bytes()
 if hashlib.sha256(b).hexdigest()!=BARS_SHA:raise ValueError("actual original BARS source hash mismatch")
 r=inspect(b);d=json.loads(a.matrix.read_text())
 if r["asset_count"]!=945 or len(d["all_original_members"])!=891:raise ValueError("source index mismatch")
 names=d["CRC_matching_paths_by_explicit_hypothesis"]
 unresolved=sorted(set(x["name_crc32_hex"] for x in d["all_original_members"])-set(names))
 if len(unresolved)!=18:raise ValueError("original 18 CRC unexpected")
 positions=sorted({x["meta_offset"] for x in r["items"] if 16<=x["meta_offset"]<len(b)}
  |{x["asset_offset"] for x in r["items"] if 16<=x["asset_offset"]<len(b)}
  |{r["declared_file_size"]})
 parsed=[]
 for record in r["items"]:
  key=record["name_crc32_hex"]
  if key not in unresolved:continue
  off=record["meta_offset"]
  if record["meta_magic"]!="AMTA" or off<=0:raise ValueError("unresolved native member unexpectedly lacks AMTA")
  end=next(v for v in positions if v>off)
  raw=b[off:end];plain=[{"offset_relative":m.start(),"ascii":m.group().decode("ascii")} for m in
   re.finditer(rb"[\x20-\x7e]{4,}",raw[:min(len(raw),4096)])]
  parsed.append({"crc":key,"bars_member_index":record["index"],"source_meta_offset":off,
     "amta_bounded_member_length":len(raw),
     "amta_source_sha256":hashlib.sha256(raw).hexdigest(),
     "amta_header_hex":raw[:128].hex(),
     "verified_source_amta_declared_size_candidate":record.get("amta_size_candidate"),
     "amta_visible_printable_ascii_runs":plain[:30],
     "actual_source_asset_offset":record["asset_offset"]})
 res={"schema":"acnh303-r38-18-original-BgmBase-unresolved-metadata-source-bounded-AMTA-bytes-v1",
  "original_source_BARS_sha256":BARS_SHA,"unresolved_crc_count":len(unresolved),
  "unresolved_AMTA_records":parsed,
  "not_proven":"Even original AMTA metadata text/hex is not a verified full stream source. Only file content and runtime consumer could establish the hidden 18 source identities."}
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(res,indent=2,ensure_ascii=False,sort_keys=True)+"\n")
 print("R38_18_AMTA_NATIVE",[(x["crc"],x["amta_bounded_member_length"],len(x["amta_visible_printable_ascii_runs"])) for x in parsed])
if __name__=="__main__":main()
