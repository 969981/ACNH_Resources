#!/usr/bin/env python3
"""Read-only AArch64 immediate B/BL cross-reference audit of matched NSO/ELF text.

No live process access. Linear word scanning includes possible embedded data;
results are candidates until function boundaries/CFG establish code. Indirect
BLR/BR and unresolved relocations are not claimed as covered.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

BASE = 0x100000
TARGETS = (0x02613AC0, 0x02628C90, 0x026776A0, 0x0262C5E8,
           0x0262E304, 0x03190D10, 0x030DED60, 0x03454A44)
def branch_target(word, pc):
    opcode = word & 0xFC000000
    if opcode not in (0x14000000, 0x94000000):
        return None
    imm = word & 0x03FFFFFF
    if imm & (1 << 25):
        imm -= 1 << 26
    return ("BL" if opcode == 0x94000000 else "B", pc + imm * 4)

def scan(code, start, targets):
    if start % 4 or len(code) % 4:
        raise ValueError("unaligned text")
    found = []
    for i, (word,) in enumerate(struct.iter_unpack("<I", code)):
        pc = start + 4 * i
        b = branch_target(word, pc)
        if b and b[1] in targets:
            found.append(dict(site_rva=hex(pc), site_va=hex(pc+BASE),
                target_rva=hex(b[1]), target_va=hex(b[1]+BASE),
                opcode=code[i*4:i*4+4].hex(), mnemonic=b[0],
                status="matched_text_word_candidate"))
    return found

def selftest():
    assert branch_target(0x94000002, 0x100) == ("BL", 0x108)
    assert branch_target(0x17FFFFFF, 0x100) == ("B", 0xFC)
    assert branch_target(0xD63F0000, 0x100) is None
    code = struct.pack("<III", 0x94000002, 0xD503201F, 0x17FFFFFE)
    hits = scan(code, 0x100, {0x100, 0x108})
    assert len(hits) == 2 and hits[0]["site_rva"] == "0x100"
    assert hits[1]["target_rva"] == "0x100"
    print("synthetic branch decoder selftest passed")

def main(root, out):
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import parse_elf, get_bytes_va
    elf, nso, mapped, segments, raw, tags, rel = dec.decode(root)
    es = parse_elf(elf)
    elfbase = min(s["vaddr"] for s in es) & ~0xFFF
    start, code = mapped[0]
    # Fail closed on gaps or mismatches. Cover only actual executable mapping.
    executable = [s for s in es if s["flags"] & 1]
    for off in range(0, len(code), 4096):
        n = min(4096, len(code)-off)
        addr = start+off+elfbase
        if get_bytes_va(elf, executable, addr, n) != code[off:off+n]:
            raise ValueError(f"ELF/NSO text mismatch or unmapped at RVA {start+off:#x}")
    target_rvas = {v-BASE for v in TARGETS}
    if not all(start <= t < start+len(code) and t%4 == 0 for t in target_rvas):
        raise ValueError("target outside matched text")
    hits = scan(code, start, target_rvas)
    report = dict(elf_sha256=hashlib.sha256(elf).hexdigest(),
        nso_sha256=hashlib.sha256(nso).hexdigest(),
        nso_build_id=nso[0x40:0x60].hex(), elf_base=hex(elfbase),
        text_rva=hex(start), text_size=len(code), words_scanned=len(code)//4,
        targets=[hex(x) for x in TARGETS], direct_candidates=hits,
        indirect_coverage="unresolved", runtime_verified=False)
    out.mkdir(parents=True, exist_ok=True)
    (out/"direct_xrefs.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    rows=["# Matched text direct B/BL cross-references", "",
          "Linear word candidates, not proof of function ownership or complete XREF.",
          "", "|Site VA|Site RVA|Bytes|Instruction|Target VA|",
          "|---|---|---|---|---|"]
    rows += [f'|{h["site_va"]}|{h["site_rva"]}|{h["opcode"]}|{h["mnemonic"]}|{h["target_va"]}|' for h in hits]
    (out/"README.md").write_text("\n".join(rows)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in report.items() if k!="direct_candidates"},indent=2))
    print(f"candidate count: {len(hits)}")

if __name__ == "__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path)
    p.add_argument("--selftest",action="store_true")
    a=p.parse_args()
    if a.selftest:
        selftest()
    else:
        if a.out is None:
            p.error("--out is required without --selftest")
        main(a.root.resolve(),a.out.resolve())
