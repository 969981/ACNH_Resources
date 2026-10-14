#!/usr/bin/env python3
"""Evidence matrices for ACNH AMTA v5 / LBLI; no guessed loop or language semantics."""
from __future__ import annotations
import argparse,collections,gzip,json,re
from pathlib import Path

BARS="acnh303-BARS-BWAV-real-PCM-v1"
AMTA="acnh303-bars-amta-lossless-v1"
BDLI="acnh303-bdli-lbli-extracted-v1"
def load_records(path):
    with gzip.open(path,"rt",encoding="utf-8") as f:
        return [json.loads(line) for line in f if line.strip()]
def write(path,data):
    path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(data,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf-8")

def build(records):
    bykind=collections.defaultdict(list)
    for rec in records:bykind[rec["source_type"]].append(rec)
    if len(bykind[BARS])!=32 or len(bykind[AMTA])!=32 or len(bykind[BDLI])!=32:
        raise ValueError("R9 proven 32 BARS/AMTA/BDLI source manifests required")
    bars={r["source_path"]:r for r in bykind[BARS]}
    fields=collections.defaultdict(list)
    amta_join=[]
    native_versions=collections.Counter()
    for archive in bykind[AMTA]:
        src=archive["source_path"]
        peer=bars[src]
        assert archive["source_sha256"]==peer["source_sha256"]
        audio={x["asset_index"]:x for x in peer["members"]}
        for member in archive["members"]:
            if member["status"]!="lossless_amta_extracted":continue
            native=member["native"]
            ver=native["version_hex"]
            native_versions[ver]+=1
            if ver!="0x0500":
                continue
            size=native["declared_size"]
            words=native.get("native_header_u32",[])
            if len(words)!=10: raise ValueError("AMTA v5 should preserve ten opaque words")
            for field in words:
                value=int(field["raw_u32_hex"],16)
                at=field["offset_hex"]
                fields[at].append((value,size))
            match=audio.get(member["asset_index"],{})
            amta_join.append({"source":src,"asset_index":member["asset_index"],
                              "name_crc32":member["name_crc32_hex"],
                              "amta_sha256":member["amta_sha256"],
                              "amta_bytes":size,"audio_status":match.get("status","unmatched"),
                              "audio_native_magic":match.get("input_type","unknown")})
    matrix=[]
    for field,samples in sorted(fields.items()):
        vals=[x for x,_ in samples]
        nonzero=[(x,sz) for x,sz in samples if x!=0]
        offsets=[(v,sz) for v,sz in nonzero if 0<v<sz]
        matrix.append({"field_offset":field,"observations":len(vals),"zero_count":len(vals)-len(nonzero),
                       "unique_u32_values":len(set(vals)),
                       "in_bounds_unsigned_candidate_count":len(offsets),
                       "aligned_in_bounds_candidate_count":sum(v%4==0 for v,sz in offsets),
                       "first_12_unique_values_hex":[hex(v) for v in sorted(set(vals))[:12]],
                       "confidence":"opaque measured words; even in-range values are not proven pointers, loop parameters or locale settings"})
    bdli_matrix=collections.defaultdict(list)
    raw_counts=collections.Counter()
    for original in bykind[BDLI]:
        for item in original.get("sections",[]):
            if item["status"]=="raw_extracted":
                bdli_matrix[item["identifier_hex"]].append(item)
                raw_counts[item["count_raw"]]+=1
    ids=[]
    for ident,group in bdli_matrix.items():
        ids.append({"identifier_hex":ident,"observed_section_count":len(group),
                    "distinct_raw_payload_sha":len({x["sha256"] for x in group}),
                    "section_sizes_first_12":sorted({x["bytes"] for x in group})[:12],
                    "count_raw_first_12":sorted({x["count_raw"] for x in group})[:12]})
    ids.sort(key=lambda x:(-x["observed_section_count"],x["identifier_hex"]))
    return {"schema":"acnh303-r10-native-opaque-field-matrix-v1",
            "input":"round9-cumulative/source_manifest.jsonl.gz (SHA-backed native results)",
            "sources":{"bars":len(bykind[BARS]),"amta":len(bykind[AMTA]),"bdli":len(bykind[BDLI])},
            "amta":{"versions":dict(native_versions),"joined_native_member_count":len(amta_join),
                    "fields":matrix,"members":amta_join},
            "bdli":{"nonempty_raw_section_count":sum(len(x) for x in bdli_matrix.values()),
                    "unique_identifier_hex_count":len(ids),
                    "top_100_identifiers":ids[:100],
                    "count_raw_values_top_30":raw_counts.most_common(30)},
            "limits":"NO original game ELF runtime traces. All fields are descriptive observations; BARS CRC32 hashes are not native audio names; LBLI section IDs are not known language keys."}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--round9",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    doc=build(load_records(a.round9))
    write(a.out/"matrix.json",doc)
    print("NATIVE_R10",json.dumps({"sources":doc["sources"],"amta":{k:v for k,v in doc["amta"].items() if k not in ("members","fields")},"bdli":{k:v for k,v in doc["bdli"].items() if k not in ("top_100_identifiers","count_raw_values_top_30")}},ensure_ascii=False))

if __name__=="__main__":main()
