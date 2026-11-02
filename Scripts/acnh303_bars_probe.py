#!/usr/bin/env python3
"""Research native ACNH 3.0.3 BARS archives from verified original sources.

BARS -> header / CRC32 name hashes / AMTA / audio member offset table.
This is structural metadata ONLY until extracted members are independently
decoded and PCM output validated. Never relabel .bars as .bwav/.wav.
"""
from __future__ import annotations
from collections import Counter
import argparse,hashlib,json,struct
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA"
def dig(data):return hashlib.sha256(data).hexdigest()
def inspect(src):
    if len(src)<16 or src[:4]!=b"BARS":raise ValueError("not a BARS audio archive")
    bom=src[8:10]
    if bom==b"\xff\xfe":endian="<"
    elif bom==b"\xfe\xff":endian=">"
    else:raise ValueError("unrecognized BARS BOM")
    length=struct.unpack_from(endian+"I",src,4)[0]
    version=struct.unpack_from(endian+"H",src,10)[0]
    count=struct.unpack_from(endian+"I",src,12)[0]
    # One real 3.0.3 BARS sample declares 57344 bytes but the source blob
    # contains 57345. Retain the original SHA and unexplained extra byte;
    # parse only references within the declared file, never silently strip it.
    tail_bytes=len(src)-length
    if length<16 or tail_bytes<0 or tail_bytes>16 or count>50000 or 16+12*count>length:
        raise ValueError(f"BARS header size/count invalid {length} {len(src)} {count}")
    offsets=16+4*count
    sources=[]
    names=[]
    for i in range(count):
        crc=struct.unpack_from(endian+"I",src,16+4*i)[0]
        meta,asset=struct.unpack_from(endian+"II",src,offsets+8*i)
        def magic(off):
            if off==0xffffffff:return "ABSENT"
            if off<0 or off+4>length:return "OUT_OF_BOUNDS"
            return src[off:off+4].decode("ascii","replace")
        m={"index":i,"name_crc32_unsigned":crc,"name_crc32_hex":f"0x{crc:08x}",
           "meta_offset":meta,"meta_magic":magic(meta),
           "asset_offset":asset,"asset_magic":magic(asset)}
        if meta not in (0xffffffff,0) and meta+12<=length and src[meta:meta+4]==b"AMTA":
            m["amta_version_bytes"]=src[meta+4:meta+8].hex()
            m["amta_size_candidate"]=struct.unpack_from(endian+"I",src,meta+8)[0]
            if m["amta_size_candidate"]>length-meta:m["warning"]="invalid AMTA declared size"
        names.append(crc);sources.append(m)
    types=Counter(x["asset_magic"] for x in sources)
    status="structural_index" if all(x["meta_magic"] in ("AMTA","ABSENT") for x in sources) else "mixed_or_unknown_meta"
    if tail_bytes and status=="structural_index":
        status="structural_index_trailing_unconfirmed"
    return {"magic":"BARS","bytes":len(src),"declared_file_size":length,"bom":bom.hex(),
            "version_hex":f"0x{version:04x}","asset_count":count,
            "trailing_bytes_after_declared_size":tail_bytes,
            "unexplained_trailing_hex":src[length:].hex(),
            "crc32_name_hashes_sorted":names==sorted(names),"audio_magic_counts":dict(types),
            "index_status":status,"items":sources,
            "limits":"CRC32 name hashes are NOT recovered names; embedded audio offsets/magic only, no PCM decoder or sound playback claimed"}
def main():
    cli=argparse.ArgumentParser()
    cli.add_argument("--selection",type=Path,default=Path("selection.json"))
    cli.add_argument("--out",type=Path,default=Path("derived/3.0.3/bars_probe_round8"))
    a=cli.parse_args()
    sel=json.loads(a.selection.read_text())
    if sel["category"]!="Sound" or sel["suffix"]!=".bars":raise ValueError("expected a Sound BARS-only selection")
    out=[];counts=Counter()
    for path in sel["paths"]:
        prefix=f"{NCA}/1/Sound/"
        if not path.startswith(prefix):raise ValueError("unexpected path "+path)
        original=Path(path).read_bytes()
        row={"source_path":path[len(f"{NCA}/1/"):],"source_sha256":dig(original),
             "bytes":len(original)}
        try:
            evidence=inspect(original)
            row["structure"]=evidence
            row["status"]=evidence["index_status"]
            counts["BARS_files_parsed"]+=1
            counts["total_indexed_audio_assets"]+=evidence["asset_count"]
            for k,v in evidence["audio_magic_counts"].items():counts["audio_magic_"+k]+=v
        except ValueError as exc:
            row["status"]="failed_to_parse_BARS"
            row["error"]=str(exc)
            counts["BARS_parse_failures"]+=1
        out.append(row)
        print("BARS",row["source_path"],row["status"],row.get("structure",{}).get("audio_magic_counts",{}),flush=True)
    if len(out)!=sel["selected_files"]:raise ValueError("source selection is incomplete")
    a.out.mkdir(parents=True,exist_ok=True)
    report={"schema":"acnh303-BARS-header-offset-probe-v1","tested_bars_originals":len(out),
        "counts":dict(counts),"records":out,
        "scope":"native source/membership offset structure only; no decoded WAVs and no full audio metadata semantics"}
    (a.out/"report.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n")
    print("SUMMARY",json.dumps({k:v for k,v in report.items() if k!="records"},ensure_ascii=False),flush=True)
if __name__=="__main__":main()
