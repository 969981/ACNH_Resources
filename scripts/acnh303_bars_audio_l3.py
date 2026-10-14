#!/usr/bin/env python3
"""Real ACNH BARS -> embedded BWAV -> decoded PCM WAV, with source/output hashes.

The BARS index is parsed from a *real original archive*; the asset bounds are
established from sorted absolute offsets in that archive (including metadata).
AAL sample data must actually decode via vgmstream and then wave.open before it
can count as WAV. Metadata/unknown assets remain partial, never mislabeled.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib,json,subprocess,tempfile
from pathlib import Path
from acnh303_bars_probe import inspect,NCA
from acnh303_media_l3 import validate_wav

def digest(data):return hashlib.sha256(data).hexdigest()
def write(path,obj):
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--selection",type=Path,default=Path("selection.json"))
    p.add_argument("--out",type=Path,default=Path("Unpack_BARS_L3"))
    p.add_argument("--report",type=Path,default=Path("derived/3.0.3/bars_audio_round8"))
    p.add_argument("--tool-vgmstream",required=True)
    a=p.parse_args()
    selection=json.loads(a.selection.read_text())
    if selection["category"]!="Sound" or selection["suffix"]!=".bars":raise ValueError("BARS sources only")
    records=[];tally=Counter();seen=set()
    for original_name in selection["paths"]:
        if original_name in seen:raise ValueError("duplicate source");seen.add(original_name)
        if not original_name.startswith(NCA+"/1/Sound/"):raise ValueError("invalid original path")
        src=Path(original_name).read_bytes()
        name=original_name[len(NCA+"/1/"):]
        out=a.out/NCA/"1"/(name+".converted")
        out.mkdir(parents=True,exist_ok=True)
        source={"source_path":name,"source_sha256":digest(src),"original_bytes":len(src),
                "members":[],"status":"no_decodable_BWAV"}
        try:
            parsed=inspect(src)
            source["BARS_structure"]=parsed
            length=parsed["declared_file_size"]
            points=sorted({i["meta_offset"] for i in parsed["items"] if 0<i["meta_offset"]<length}
                        |{i["asset_offset"] for i in parsed["items"] if 0<i["asset_offset"]<length and i["asset_offset"]!=0xffffffff}
                        |{length})
            with tempfile.TemporaryDirectory(prefix="acnh303-bars-") as tmp:
                temp=Path(tmp)
                for item in parsed["items"]:
                    rec={"asset_index":item["index"],"name_crc32_hex":item["name_crc32_hex"],
                         "source_asset_offset":item["asset_offset"],"meta_offset":item["meta_offset"],
                         "meta_magic":item["meta_magic"],"input_type":item["asset_magic"],
                         "status":"unsupported_asset"}
                    if item["asset_magic"]!="BWAV":
                        source["members"].append(rec)
                        tally["unsupported_member"]+=1
                        continue
                    start=item["asset_offset"]
                    candidates=[q for q in points if q>start]
                    if not candidates:rec.update({"status":"invalid_bounds","error":"no next section / end offset"})
                    else:
                        end=candidates[0]
                        payload=src[start:end]
                        if len(payload)<16 or payload[:4]!=b"BWAV":
                            rec.update({"status":"invalid_bounds","error":"bounded member missing BWAV header"})
                        else:
                            rec["source_member_bytes"]=len(payload)
                            rec["source_member_sha256"]=digest(payload)
                            inp=temp/f"asset_{item['index']:04d}.bwav"
                            wav=out/f"asset_{item['index']:04d}_{item['name_crc32_hex'][2:]}.wav"
                            inp.write_bytes(payload)
                            try:
                                conv=subprocess.run([a.tool_vgmstream,"-i","-o",str(wav),str(inp)],
                                                    capture_output=True,text=True,timeout=120)
                                rec["converter_exit_code"]=conv.returncode
                                rec["stderr_tail"]=conv.stderr[-300:]
                                if conv.returncode!=0 or not wav.is_file():
                                    raise ValueError("vgmstream returned error or produced no WAV")
                                valid=validate_wav(wav)
                                rec.update({"status":"converted_pcm_wav",
                                    "output_path":wav.as_posix(),"output_sha256":digest(wav.read_bytes()),
                                    "output_size":wav.stat().st_size,"validation":valid})
                                tally["validated_pcm_wav"]+=1
                            except (ValueError,OSError,subprocess.TimeoutExpired) as exc:
                                rec.update({"status":"decode_failed","error":str(exc)})
                                tally["decoder_failures"]+=1
                                if wav.exists():wav.unlink()
                    source["members"].append(rec)
            successes=sum(r["status"]=="converted_pcm_wav" for r in source["members"])
            source["status"]="converted" if successes and all(
                r["status"]=="converted_pcm_wav" for r in source["members"]) else "partial" if successes else "no_decodable_BWAV"
            if successes:tally["sources_with_pcm"]+=1
            source["decoded_wav_count"]=successes
            if parsed["trailing_bytes_after_declared_size"]:tally["sources_with_unexplained_tail"]+=1
        except (ValueError,OSError) as exc:
            source.update({"status":"parse_failed","error":str(exc)})
            tally["parse_failures"]+=1
        records.append(source)
        write(out/"_bars_source_manifest.json",source)
        print("BARS_CONVERT",name,source["status"],
              "WAV",source.get("decoded_wav_count",0),flush=True)
    if len(records)!=selection["selected_files"]:raise ValueError("incomplete selection")
    report={"schema":"acnh303-BARS-BWAV-real-PCM-v1","tested_bars_originals":len(records),
            "counts":dict(tally),"records":records,
            "scope":"Real BARS->BWAV->PCM WAV when decoded; source-bounds from native offset table; no inferred file names or other codec success."}
    write(a.report/"report.json",report)
    print("BARS_PCM_SUMMARY",json.dumps({k:v for k,v in report.items() if k!="records"},ensure_ascii=False))
if __name__=="__main__":main()
