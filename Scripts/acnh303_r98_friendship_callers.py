#!/usr/bin/env python3
"""R98: authenticated friendship arithmetic and targeted static caller audit."""
import argparse
import bisect
import hashlib
import json
import re
import struct
from pathlib import Path
from collections import Counter
import acnh303_r96_native_tables as r96
from acnh303_round11_elf_xref import bl_target
FLOORS = (0, 30, 60, 100, 150, 200)
MASK = 0xffffffff
TARGETS = ("0276aab0", "020ec6c4", "02198d70", "027478c0", "021d7650",
           "026b7690", "0070fb10", "02747170")
FIELDS = ("CCD4C25F", "E6317726", "110A7053", "FA93F14B", "5140E4B4",
          "5F77B61A", "BED25A86", "8D401DF7", "7D83E6A3", "BB045A73", "F762C39C")
HEX = re.compile(r"(?<![0-9A-Za-z_])(-?0[xX][0-9a-fA-F]{1,8})(?![0-9A-Za-z_])")
CALL = re.compile(r"\bFUN_(" + "|".join(TARGETS) + r")\s*\(", re.I)

def level(v, floors=FLOORS):
    return bisect.bisect_right(floors, v)

def friendship(old, delta, floors=FLOORS):
    if not 0 <= old <= 255 or not -(1<<31) <= delta < (1<<31):
        raise ValueError("invalid u8 state or signed delta")
    v = (old + delta) & MASK
    if level(v, floors) < level(old, floors):
        v = floors[level(old, floors)-1]
    signed = v if v < (1<<31) else v-(1<<32)
    return max(0, min(255, signed))

def selftest(floors=FLOORS):
    n = 0
    for old in range(256):
        for d in range(-255, 256):
            expected = 0 if old+d < 0 else min(255, max(floors[level(old,floors)-1], old+d))
            if friendship(old,d,floors) != expected:
                raise ValueError(("model mismatch",old,d))
            n += 1
    return n

def run(root,out):
    b = (root/r96.ELF).read_bytes()
    if hashlib.sha256(b).hexdigest() != r96.SHA:
        raise ValueError("ELF SHA mismatch")
    segs = r96.parse_elf(b)
    summary = json.loads((root/"derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json").read_text())
    slide = int(summary["image_base"],16) - (min(s["vaddr"] for s in segs)&~0xfff)
    table_va = 0x04179ca0 - slide
    raw = r96.get_bytes_va(b,segs,table_va,24)
    if raw is None or tuple(struct.unpack("<6I",raw)) != FLOORS:
        raise ValueError("Friendship table mismatch")
    count = selftest()
    cfiles = sorted((root/r96.CROOT).rglob("*.c"))
    if len(cfiles) != 59971:
        raise ValueError("complete C export required")
    calls = {t:[] for t in TARGETS}
    refs = {h:[] for h in FIELDS}
    flookup = {int(h,16):h for h in FIELDS}
    for p in cfiles:
        lines = p.read_text(encoding="utf-8").splitlines()
        rel = p.relative_to(root).as_posix()
        for i,line in enumerate(lines):
            for m in CALL.finditer(line):
                t=m.group(1).lower()
                if p.stem.lower() == t:
                    continue
                calls[t].append({"file":rel,"line":i+1,"context":lines[max(0,i-3):i+4],
                                 "status":"DECOMPILED_CALL_CANDIDATE"})
            for lit in sorted(set(HEX.findall(line))):
                h=flookup.get(int(lit,16)&MASK)
                if h is not None:
                    refs[h].append({"file":rel,"line":i+1,"literal":lit,
                                    "context":lines[max(0,i-3):i+4],
                                    "status":"NUMERIC_MATCH_NOT_CONSUMER_PROOF"})
    # ELF direct BL sites independently from the C export.
    lookup={int(t,16)-slide:t for t in TARGETS}
    bls={t:[] for t in TARGETS}
    for seg in segs:
        if not seg["flags"] & 1:
            continue
        start=seg["file_offset"]; end=start+seg["filesz"]
        for i,(word,) in enumerate(struct.iter_unpack("<I",memoryview(b)[start:end-(end-start)%4])):
            if word & 0xfc000000 != 0x94000000:
                continue
            pc=seg["vaddr"]+i*4
            t=lookup.get(bl_target(word,pc))
            if t is not None:
                prior=r96.get_bytes_va(b,segs,pc-16,16)
                bls[t].append({"elf_call_va":hex(pc),"ghidra_call_va":hex(pc+slide),
                              "preceding_words_le":prior.hex() if prior else None,
                              "mode_argument_verified":False})
    out.mkdir(parents=True,exist_ok=True)
    for name,data in (("c_call_candidates",calls),("field_and_dispatch_hash_candidates",refs),("elf_direct_bl_sites",bls)):
        (out/(name+".json")).write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n")
    report={"elf_sha256":r96.SHA,"table_va":hex(table_va),"raw_hex":raw.hex(),
            "floors":list(FLOORS),"model_test_cases":count,"native_c_files_scanned":len(cfiles),
            "c_call_counts":{k:len(v) for k,v in calls.items()},
            "field_candidate_counts":{k:len(v) for k,v in refs.items()},
            "elf_direct_bl_counts":{k:len(v) for k,v in bls.items()},
            "mode_1_game_event":None,"callback_addresses":None,"photo_probability":None,
            "flags_flow_access_native_enforcement_verified":False,"runtime_verified":False}
    (out/"report.json").write_text(json.dumps(report,indent=2)+"\n")
    print(json.dumps(report,indent=2))

if __name__ == "__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path)
    p.add_argument("--selftest",action="store_true")
    a=p.parse_args()
    if a.selftest:
        print("Static arithmetic model cases:", selftest())
    else:
        if a.out is None:
            p.error("--out is required")
        run(a.root.resolve(),a.out.resolve())
