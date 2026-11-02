#!/usr/bin/env python3
"""Forensically classify *all* 224 real R34 short BWAV failures by exact original bytes.

Each failed R34 Sound member is recovered from the original NCA Git blob, SHA
matched, and header/channel sample pointer compared to actual member bounds.
Do NOT assume external audio service just because member is header-only.
"""
import argparse,hashlib,json,struct,collections
from pathlib import Path
ROOT=Path("e10617820db06889e1638499478da0de_NCA/1")
def sha(b):return hashlib.sha256(b).hexdigest()
def u16(b,o):return struct.unpack_from("<H",b,o)[0]
def u32(b,o):return struct.unpack_from("<I",b,o)[0]
def inspect_short(data):
    if len(data)<16 or data[:4]!=b"BWAV":return {"status":"INVALID_BWAV_MAGIC"}
    n=u16(data,14)
    if not 1<=n<=32:return {"status":"BAD_CHANNEL_COUNT","channel_count":n}
    pos=16;channels=[]
    for i in range(n):
        if pos+0x40>len(data):
            return {"status":"CHANNEL_RECORD_TRUNCATED","channel_count":n,"decoded_channels":len(channels)}
        loops=u16(data,pos+0x38)
        rec=0x40+12*loops
        if loops>32 or pos+rec>len(data):
            return {"status":"CHANNEL_LOOPS_TRUNCATED","channel_count":n,"decoded_channels":len(channels),
                "loop_count":loops}
        encoding=u16(data,pos)
        off=u32(data,pos+0x34)
        samples=u32(data,pos+8)
        channels.append({"index":i,"encoding_id":encoding,
                         "sample_rate":u32(data,pos+4),
                         "nonprefetch_samples":samples,
                         "file_samples":u32(data,pos+12),
                         "payload_offset":off,
                         "payload_offset_in_member":off<len(data),
                         "payload_bytes_from_offset":max(0,len(data)-off) if off<len(data) else 0,
                         "loop_count":loops,
                         "nonprefetch_offset":u32(data,pos+0x30)})
        pos+=rec
    return {"status":"VALID_BOUNDED_NATIVE_HEADER",
      "version_hex":hex(u16(data,6)),"bom_hex":hex(u16(data,4)),
      "channel_count":n,"header_end":pos,"bytes_after_channel_headers":len(data)-pos,
      "no_channel_has_payload_in_member":all(not c["payload_offset_in_member"] for c in channels),
      "channels":channels}
def execute(report):
    d=json.loads(report.read_text("utf8"))
    fails=d["exact_failures"]
    if len(fails)!=224:raise ValueError("must audit 224 real failed member SHA")
    originals={}
    for item in fails:
        source=item["original_source_path"]
        if source not in originals:
            b=(ROOT/source).read_bytes()
            if sha(b)!=item["source_sha256"] or len(b)!=item["source_bytes"]:
                raise ValueError("original BARS SHA/size mismatch "+source)
            originals[source]=b
    results=[];statuses=collections.Counter()
    for item in fails:
        source=item["original_source_path"];raw=originals[source]
        off=item["asset_offset"];length=item["member_bytes"]
        member=raw[off:off+length]
        if len(member)!=length or sha(member)!=item["member_sha256"]:
            raise ValueError("real failed BWAV source-member SHA mismatch "+source)
        parsed=inspect_short(member)
        statuses[parsed["status"]]+=1
        results.append({"original_path":source,"asset_index":item["asset_index"],
             "member_offset":off,"member_bytes":length,"member_sha256":item["member_sha256"],
             "parsed_header":parsed})
    sizes=collections.Counter(item["member_bytes"] for item in fails)
    return {"schema":"acnh303-r35-source-validated-224-header-only-bwav-v1",
      "genuine_original_file_count":len(originals),"short_member_total":len(results),
      "member_sizes":dict(sizes),"native_header_statuses":dict(statuses),
      "members_with_no_internal_sample_payload":sum(
           x["parsed_header"].get("no_channel_has_payload_in_member") is True for x in results),
      "member_details":results,
      "limits":"Internal sample byte absence is verified. External sample storage, BARS streaming relationship, runtime mixer routing and ADPCM playback are still unproven."}
def main():
    p=argparse.ArgumentParser();p.add_argument("--report",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    d=execute(a.report);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(d,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
    print("R35_SHORT_BWAV_NATIVE",json.dumps({k:v for k,v in d.items() if k!="member_details"},ensure_ascii=False))
if __name__=="__main__":main()
