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

def caller_context(root, code, start, hits):
    """Bounded read-only CFG from nearest C export. Ownership remains a candidate."""
    import bisect, re
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    from capstone.arm64 import ARM64_OP_IMM
    cs = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    cs.detail = True
    paths = {int(p.stem,16)-BASE:p for p in (root/"derived/3.0.3/ghidra12.2/c").rglob("*.c")
             if re.fullmatch(r"[0-9a-fA-F]{8}",p.stem)}
    entries = sorted(paths)
    end = start+len(code)
    def decode(a):
        if a%4 or not start<=a<=end-4: return None
        return next(cs.disasm(code[a-start:a-start+4],a),None)
    def row(i):
        return dict(va=hex(i.address+BASE),rva=hex(i.address),bytes=bytes(i.bytes).hex(),
                    instruction=i.mnemonic+" "+i.op_str)
    result=[]
    for h in hits:
        if int(h["target_va"],16)!=0x026776A0: continue
        site=int(h["site_rva"],16)
        k=bisect.bisect_right(entries,site)-1
        owners=[]
        if k>=0:
            entry=entries[k]
            limit=min(entries[k+1] if k+1<len(entries) else end,entry+0x40000,end)
            pending=[entry];seen=set();gaps=set();edges=[]
            while pending:
                a=pending.pop()
                if a in seen: continue
                if not entry<=a<limit:
                    gaps.add((a,"outside_export_candidate_bound"));continue
                i=decode(a)
                if i is None:
                    gaps.add((a,"decode"));continue
                seen.add(a)
                m=i.mnemonic;op=i.operands
                t=op[-1].imm if op and op[-1].type==ARM64_OP_IMM else None
                if m in ("ret","eret","br","brk","udf"):
                    succ=[]
                    if m=="br":gaps.add((a,"indirect_branch"))
                elif m=="b":succ=[t]
                elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,t]
                else:succ=[a+4]
                for v in succ:
                    if v is not None:
                        edges.append((a,v));pending.append(v)
            src=paths[entry];lines=src.read_text("utf-8",errors="replace").splitlines()
            owners.append(dict(entry_va=hex(entry+BASE),next_export_va=hex(entries[k+1]+BASE) if k+1<len(entries) else None,
                c_path=src.relative_to(root).as_posix(),c_sha256=hashlib.sha256(src.read_bytes()).hexdigest(),
                cfg_reaches_site=site in seen,reachable_instruction_count=len(seen),
                gap_count=len(gaps),gaps=[dict(va=hex(a+BASE),reason=b) for a,b in sorted(gaps)],
                c_call_lines=[dict(line=n+1,text=l.strip()) for n,l in enumerate(lines) if "FUN_026776a0" in l.lower().replace("fun_","FUN_")],
                site_predecessors=[hex(a+BASE) for a,b in edges if b==site]))
        window=[]
        for a in range(max(start,site-0x80),min(end,site+0x24),4):
            i=decode(a)
            if i is not None:window.append(row(i))
        result.append(dict(site_va=h["site_va"],owner_candidates=owners,linear_context=window,
            note="Nearest export is not proof of function extent; CFG reachability is bounded. Linear window is not a backward slice; register reaching definitions may differ by branch."))
    return result

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
    context=caller_context(root,code,start,hits)
    (out/"slot_consumption_callers.json").write_text(json.dumps(context,indent=2)+"\n",encoding="utf-8")
    md=["# Slot consumption caller candidates","","Read-only bounded CFG; linear context is not a register slice.",""]
    for q in context:
        md += ["## "+q["site_va"],"",json.dumps(q["owner_candidates"],ensure_ascii=False),"",
               "|VA|Bytes|Instruction|","|---|---|---|"]
        md += [f'|{x["va"]}|{x["bytes"]}|{x["instruction"]}|' for x in q["linear_context"]]
        md += [""]
    (out/"slot_consumption_callers.md").write_text("\n".join(md)+"\n",encoding="utf-8")
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
