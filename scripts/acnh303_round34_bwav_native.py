#!/usr/bin/env python3
"""Source verified Nintendo aal::atom BWAV v1 0xA8 header and sample bounds audit.

This is a real header decode, not an attempt to manufacture PCM samples.
"""
from __future__ import annotations
import argparse,hashlib,json,struct
from pathlib import Path
from acnh303_bars_probe import inspect
SOURCE="Sound/Resource/Env_TourCounterDemo.bars"
SHA="50195465110f6de17ebdf6942b9ca940e49efe0482082fc06bbefc58b285ac04"
MEMBER_SHA="7e1712e42cbbe183f5cf3c89cc4455f1dd327c52f354d8ff1f290f817076c0fa"
NCA="e10617820db06889e1638499478da0de_NCA"
def h(d):return hashlib.sha256(d).hexdigest()
def u16(d,o):return struct.unpack_from("<H",d,o)[0]
def u32(d,o):return struct.unpack_from("<I",d,o)[0]
def analyze(blob):
    if len(blob)!=168 or blob[:4]!=b"BWAV":raise ValueError("invalid 168 byte original BWAV source")
    bom=u16(blob,4);version=u16(blob,6);flags=u16(blob,12);ch=u16(blob,14)
    channels=[]
    at=16
    if ch>32:raise ValueError("impossible BWAV channel count")
    for i in range(ch):
        if at+0x40>len(blob):raise ValueError("truncated native channel info")
        encoding=u16(blob,at)
        num_loops=u16(blob,at+0x38)
        if num_loops>16:raise ValueError("unreasonable BWAV loop count")
        size=0x40+num_loops*12
        if at+size>len(blob):raise ValueError("channel loop points exceed source")
        rate=u32(blob,at+4)
        first_samples=u32(blob,at+8)
        count=u32(blob,at+12)
        nonprefetch=u32(blob,at+0x30)
        sample=u32(blob,at+0x34)
        channels.append({"channel":i,"encoding_id":encoding,"pan":u16(blob,at+2),
           "sample_rate":rate,"nonprefetch_sample_count":first_samples,
           "file_sample_count":count,
           "nonprefetch_data_offset":nonprefetch,
           "sample_data_offset":sample,
           "sample_offset_inside_file":sample<len(blob),
           "sample_data_bytes_after_offset":max(0,len(blob)-sample) if sample<len(blob) else 0,
           "loop_count":num_loops,"base_loop_point":u16(blob,at+0x3a),
           "loop_end":u32(blob,at+0x3c),
           "header_bytes":size,
           "channel_header_raw_hex":blob[at:at+size].hex(),
           "insufficient_16_bit_pcm_for_declared_frames":encoding==0 and sample+2*count>len(blob)})
        at+=size
    return {"schema":"acnh303-r34-real-aal-bwav-header-v1","source_member_bytes":len(blob),
       "sha256":h(blob),"header":{"bom_hex":hex(bom),"version_hex":hex(version),
       "samples_hash_hex":hex(u32(blob,8)),"flags_hex":hex(flags),
       "prefetch_flag_set":bool(flags&1),"channel_count":ch},
       "channels":channels,"channel_header_end":at,
       "tail_hex":blob[at:].hex(),"entire_bwav_hex":blob.hex(),
       "status":"BOUNDED_NATIVE_HEADER_PARSED_NOT_PCM_DECODED",
       "limits":"AAL BWAV offsets and counts are parsed from original; no valid PCM WAV or codec interpretation asserted when converter failed."}
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    path=a.root/NCA/"1"/SOURCE
    raw=path.read_bytes()
    if len(raw)!=296 or h(raw)!=SHA:raise ValueError("BARS original bytes or SHA mismatch")
    parsed=inspect(raw)
    item=next((x for x in parsed["items"] if x["index"]==0),None)
    if not item or item["asset_offset"]!=128 or item["asset_magic"]!="BWAV":
        raise ValueError("BARS actual member offset or magic drift")
    leaf=raw[128:296]
    if len(leaf)!=168 or h(leaf)!=MEMBER_SHA:raise ValueError("original BWAV exact SHA mismatch")
    result=analyze(leaf)
    result["provenance"]={"source_path":SOURCE,"source_sha256":SHA,
        "source_bytes":len(raw),"source_asset_offset":128,"exact_member_sha256":MEMBER_SHA,
        "bars_header_metadata":parsed}
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(result,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf8")
    print("R34_REAL_BWAV_NATIVE",json.dumps({k:v for k,v in result.items() if k not in ("entire_bwav_hex","tail_hex","provenance")},ensure_ascii=False)[:4500])
if __name__=="__main__":main()
