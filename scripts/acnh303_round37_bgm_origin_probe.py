#!/usr/bin/env python3
"""Source-backed Bgm_Base BARS external sample origin inquiry.

Rebuild original 891 member bounds, enumerate source Sound path candidates,
match only explicitly recorded CRC32 hypotheses and inspect *real* ELF ARM64
string-address-forming XREF. No claim external sample links absent matching
data, nor physical audio decoding from header-only assets.
"""
from __future__ import annotations
import argparse,collections,hashlib,json,struct,subprocess,sys,zlib
from pathlib import Path
from acnh303_bars_probe import inspect,NCA
from acnh303_round35_short_bwav import inspect_short
from acnh303_round11_elf_xref import parse_elf,survey,locate_xrefs

ELF_SHA="83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
BARS_SHA="b2a7131f6de904a8c381b25f1c890797ea09075c93c5b0c366833f45656c9a5c"
def tree_paths(root):
 cp=subprocess.run(["git","ls-tree","-rz","HEAD","--",NCA+"/1/Sound/"],
  cwd=root,capture_output=True,check=True)
 paths=[]
 for member in cp.stdout.split(b"\0"):
  if not member:continue
  h,p=member.split(b"\t",1)
  if h.startswith(b"100644 blob "):paths.append(p.decode("utf8"))
 return sorted(paths)
def file_path_crc_candidates(name):
 p=Path(name)
 rel=name.split("/1/",1)[1] if "/1/" in name else name
 vals={"basename":p.name,"stem":p.stem,"relative_path":rel,
       "stem_from_relative":rel.rsplit(".",1)[0],
       "relative_path_no_Sound_prefix":rel.removeprefix("Sound/"),
       "relative_stem_no_Sound_prefix":rel.removeprefix("Sound/").rsplit(".",1)[0]}
 return {k:{"text":v,"crc32":zlib.crc32(v.encode("utf-8"))&0xffffffff} for k,v in vals.items()}
def run(root,bars_path,elf_path,report_path):
 raw=bars_path.read_bytes()
 if hashlib.sha256(raw).hexdigest()!=BARS_SHA:raise ValueError("original Bgm_Base SHA drift")
 b=inspect(raw)
 if b["asset_count"]!=891:raise ValueError("Bgm_Base original asset count not 891")
 limit=b["declared_file_size"]
 offsets=sorted({i["meta_offset"] for i in b["items"] if 0<i["meta_offset"]<limit}
     |{i["asset_offset"] for i in b["items"] if 0<i["asset_offset"]<limit and i["asset_offset"]!=0xffffffff}
     |{limit})
 items=[];signatures=collections.Counter()
 for x in b["items"]:
  if x["asset_magic"]!="BWAV":raise ValueError("Bgm_Base non-BWAV asset needs separate parser")
  start=x["asset_offset"];stop=next((o for o in offsets if o>start),None)
  if stop is None:raise ValueError("no next asset offset")
  member=raw[start:stop];head=inspect_short(member)
  if head.get("status")!="VALID_BOUNDED_NATIVE_HEADER" or not head["no_channel_has_payload_in_member"]:
   raise ValueError("member expected native header only")
  h=head["channels"]
  if not h:raise ValueError("empty native channels")
  signatures[str((len(member),len(h),tuple(c["encoding_id"] for c in h)))]+=1
  items.append({"index":x["index"],"name_crc32_hex":x["name_crc32_hex"],
    "asset_offset":start,"asset_member_bytes":len(member),
    "asset_member_sha256":hashlib.sha256(member).hexdigest(),
    "amta_offset":x["meta_offset"],
    "metadata_magic":x["meta_magic"],
    "channels":head["channels"],
    "file_samples_all_zero":all(c["file_samples"]==0 for c in h)})
 pathlist=tree_paths(root)
 sound_paths=[x for x in pathlist if x.startswith(NCA+"/1/Sound/")]
 extensions=collections.Counter("".join(Path(x).suffixes).lower() for x in sound_paths)
 prefixes=collections.Counter(str(Path(x).parent).split("/1/",1)[-1] for x in sound_paths)
 crc={x["name_crc32_hex"] for x in items}
 collision=collections.defaultdict(list)
 for path in sound_paths:
  for label,hyp in file_path_crc_candidates(path).items():
   key="0x%08x"%hyp["crc32"]
   if key in crc:collision[key].append({"source_path":path.split("/1/",1)[-1],
       "hypothesis":label,"actual_hashed_text":hyp["text"]})
 blob=elf_path.read_bytes()
 if hashlib.sha256(blob).hexdigest()!=ELF_SHA:raise ValueError("real native ACNH ELF SHA mismatch")
 segments=parse_elf(blob)
 # Terms are hypotheses only; a literal is not a proven resource consumer.
 terms=["Bgm_Base.bars","Bgm_Base","BARS","BWAV","AMTA","AAL","aal::","stream","prefetch",
        "nonprefetch","Sound/Resource/","Resource/","bfstm","BFSTM","bfwav","BWAV",
        "nn::audio","nn::atk","audio::"]
 hits=survey(blob,segments,terms)
 xrefs,adrcandidates=locate_xrefs(blob,segments,hits,cap_per_term=25)
 terms_report=[{"term":t,"literal_locations":hits[t]["locations"],
   "code_formations":xrefs.get(t,[]),
   "code_ref_count":len(xrefs.get(t,[]))} for t in terms]
 report={"schema":"acnh303-r37-real-BgmBase-BARS-bwav891-sound-path-CRC-ELF-XREF-v1",
  "original_bars_sha256":BARS_SHA,"original_bars_bytes":len(raw),
  "original_BARS_version":b["version_hex"],"BARS_member_count":len(items),
  "source_elf_sha256":ELF_SHA,"source_elf_bytes":len(blob),
  "all_original_members":items,
  "native_member_signature_histogram":dict(signatures),
  "unique_BARS_name_CRC_count":len(crc),
  "sound_git_original_path_count":len(sound_paths),
  "sound_original_extensions":dict(sorted(extensions.items())),
  "sound_original_prefix_counts":dict(sorted(prefixes.items())),
  "source_paths_containing_bgm":[p.split("/1/",1)[-1] for p in sound_paths if "bgm" in p.lower()][:250],
  "CRC_matching_paths_by_explicit_hypothesis":dict(collision),
  "CRC_path_match_hypotheses":list(file_path_crc_candidates(sound_paths[0])) if sound_paths else [],
  "elf_literal_code_xrefs":terms_report,
  "native_ADRP_page_candidates":adrcandidates,
  "external_sample_payload_sha_matched":False,
  "external_stream_reader_runtime_proven":False,
  "decoded_audio_count":0,
  "limits":"Exact original BARS and ELF source SHAs, asset boundaries and static code string-XREF only; CRC32 match is a naming hypothesis, not a proven AUDIO payload pointer or program call argument. No runtime AAL captured and no actual external stream bytes matched."}
 report_path.parent.mkdir(parents=True,exist_ok=True)
 report_path.write_text(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+"\n")
 print("R37_REAL_BGM_BASE",len(items),"SIZE",len(raw),"CRC PATH MATCH",len(collision),
  "ELF CODE XREF",[(t["term"],t["code_ref_count"]) for t in terms_report if t["code_ref_count"]])
 print("R37_BGM_SOUND_EXTS",dict(extensions),"PATHS",len(sound_paths))
 return report
if __name__=="__main__":
 a=argparse.ArgumentParser()
 a.add_argument("--repo",type=Path,default=Path("."))
 a.add_argument("--bars",type=Path,required=True)
 a.add_argument("--elf",type=Path,required=True)
 a.add_argument("--out",type=Path,required=True)
 x=a.parse_args();run(x.repo.resolve(),x.bars,x.elf,x.out)
