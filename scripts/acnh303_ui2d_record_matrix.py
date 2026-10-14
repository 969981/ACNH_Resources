#!/usr/bin/env python3
"""Summarize real v9 FCPX font 0x28 records & 44B mat1 words.

Do not claim FCPX record order is font fallback priority, or that raw mat1
bytes prove a pixel shader. Input JSON is sourced from 41 original source hashes.
"""
from __future__ import annotations
from collections import Counter
import csv,hashlib,json
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA"
def js(p):return json.loads(p.read_text(encoding="utf-8"))
def verify(record):
    p=Path(record["output"])
    if hashlib.sha256(p.read_bytes()).hexdigest()!=record["output_sha256"]:
        raise ValueError("source-derived JSON output hash mismatch: "+str(p))
    return js(p)

def main():
    base=Path("Unpack_UI2D_Font")/NCA/"1"/"Layout"
    assert base.is_dir()
    fonts={}
    mats=[]
    states=Counter()
    for folder in sorted(base.glob("*.zs.ui2d")):
        manifest=js(folder/"_ui2d_source_manifest.json")
        if len(manifest["source_sha256"])!=64:raise ValueError("unverified source")
        states["sources"]+=1
        for member in manifest["leaves"]:
            if member["status"]=="font_references_only":
                data=verify(member)
                key=data["file_sha256"]
                states["total_fcpx_members"]+=1
                if key not in fonts:
                    fonts[key]=data
                if data["font_reference_table"]["record_stride"]!=40:
                    raise ValueError("font record stride mismatch")
            elif member.get("kind")=="bflyt":
                data=verify(member)
                for mt in data["material_parts_control_metadata"]["materials"]:
                    states["material_sections"]+=1
                    for item in mt["items"]:
                        if item["byte_size"]!=44 or len(item.get("native_words_u32_le",[]))!=4:
                            raise ValueError("material not matching observed 44-byte records")
                        mats.append((manifest["source"],manifest["source_sha256"],item))
    if states["sources"]!=41 or states["total_fcpx_members"]!=12 or len(fonts)!=2 or len(mats)!=22:
        raise ValueError("unexpected 41-source FCPX/mat1 totals: "+str(states))
    out=Path("derived/3.0.3/ui2d_native_v7")
    out.mkdir(parents=True,exist_ok=True)
    with (out/"font_reference_record_matrix.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["FCPX_SHA256","FCPX_size","index_in_file_not_fallback_rank","font_file_reference",
                    "font_record_offset","name_pointer_word_offset","name_pointer_raw","name_file_offset",
                    *[f"opaque_word_{i}_hex" for i in range(10)],"record_sha256"])
        for key,data in sorted(fonts.items()):
            for record in data["fonts"]:
                w.writerow([key,data["file_bytes"],record["index"],record["name"],
                            record["record_file_offset"],record["name_pointer_field_file_offset"],
                            record["name_pointer_raw"],record["offset"],
                            *[f"0x{v:08x}" for v in record["record_words_u32_le"]],record["record_sha256"]])
                states["native_font_records"]+=1
    with (out/"material_native_words.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f)
        w.writerow(["source","source_sha256","material_name","material_index","record_sha256",
                    "native_word_0","native_word_1","native_word_2","native_word_3","RGBA_candidate_byte_0",
                    "RGBA_candidate_byte_1","RGBA_candidate_byte_2","RGBA_candidate_byte_3"])
        for source,digest,item in mats:
            w.writerow([source,digest,item["name"],item["index"],item["record_sha256"],
                        *[f"0x{v:08x}" for v in item["native_words_u32_le"]],
                        *item["last_word_rgba_byte_candidate"]])
    colors=Counter("0x%08x"%item["native_words_u32_le"][-1] for _,_,item in mats)
    wflags=Counter("0x%08x"%item["native_words_u32_le"][1] for _,_,item in mats)
    summary={"schema":"acnh303-v7-native-record-matrix","state_counts":dict(states),
             "unique_fcpx_hashes":sorted(fonts),"unique_font_record_count":states["native_font_records"],
             "material_tint_candidate_word_distribution":dict(colors),
             "mat1_word_at_record_plus_0x20_distribution":dict(wflags),
             "font_fallback_rank_proven":False,"mat1_gpu_shader_proven":False,
             "limits":"native record words and name pointers only; conditions, fallback, alpha blending, font rasterizer remain unverified"}
    if states["native_font_records"]!=20:raise ValueError("not 20 validated index rows")
    (out/"record_matrix_summary.json").write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n")
    print("RECORD_MATRIX",json.dumps(summary,ensure_ascii=False),flush=True)
if __name__=="__main__":main()
