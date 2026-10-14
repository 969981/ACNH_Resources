#!/usr/bin/env python3
"""R12: follow native BARS/BDLI/EventFlow sites; no invented field semantics."""
from __future__ import annotations
import argparse, collections, hashlib, json, re, struct
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf, get_bytes_va, adrp_target, add_imm
try:
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
except ImportError:
    Cs = None

SHA = "83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
SIZE = 79000340
GLOBAL_RECORDS = {
    "action_0": 0x4fb4c08, "action_1": 0x4fb4c18, "action_2": 0x4fb4c28,
    "query_0": 0x4fb8dd8, "query_1": 0x4fb8de8,
}

def disasm(blob, segments, start, size):
    if Cs is None:
        raise RuntimeError("capstone>=5,<6 required")
    if start % 4 or not 0 < size <= 0x2000:
        raise ValueError("unaligned or unbounded disassembly")
    raw = get_bytes_va(blob, segments, start, size)
    if raw is None:
        return []
    cs = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    return [{"pc":hex(i.address),"bytes":i.bytes.hex(),
             "mnemonic":i.mnemonic,"op_str":i.op_str}
            for i in cs.disasm(raw, start)]

def branch_target(i):
    op = i["mnemonic"]
    if op not in ("b","bl","cbz","cbnz","tbz","tbnz") and not op.startswith("b."):
        return None
    m = re.search(r"#(0x[0-9a-f]+)\\s*$", i["op_str"])
    return int(m.group(1),16) if m else None

def local_cfg(blob, segments, start, low, high, cap=1800):
    if not low <= start < high or high-low > 0x4000:
        raise ValueError("bad CFG bounds")
    inst = {int(x["pc"],16):x for x in disasm(blob,segments,low,high-low)}
    queue = collections.deque([start])
    seen = set()
    edges, calls = [], []
    while queue and len(seen)<cap:
        pc=queue.popleft()
        while pc in inst and pc not in seen and len(seen)<cap:
            seen.add(pc)
            i=inst[pc]; op=i["mnemonic"]
            target=branch_target(i)
            if op=="bl" and target is not None:
                calls.append({"at":hex(pc),"to":hex(target),"type":"direct"})
            elif target is not None:
                edges.append({"at":hex(pc),"to":hex(target),
                              "type":op,"inside_window":target in inst})
                if target in inst: queue.append(target)
                if op=="b": break
            if op=="blr":
                calls.append({"at":hex(pc),"to":None,"type":"indirect-unresolved"})
            if op in ("ret","br","blr","eret","udf"): break
            pc+=4
    return {"start":hex(start),"bounds":[hex(low),hex(high)],
            "visited_count":len(seen),"truncated":bool(queue) or len(seen)>=cap,
            "instructions":[inst[x] for x in sorted(seen)],
            "edges":edges,"calls":calls,
            "boundary":"local direct-edge CFG only; no indirect edges or runtime target resolution"}

def global_refs(blob, segments, targets, cap=120):
    pages={v & ~4095 for v in targets.values()}
    found={k:[] for k in targets}
    for seg in segments:
        if not seg["flags"]&1: continue
        lo=seg["file_offset"]; hi=lo+seg["filesz"]
        for off in range(lo,hi-4,4):
            pc=seg["vaddr"]+off-lo
            word=struct.unpack_from("<I",blob,off)[0]
            page=adrp_target(word,pc)
            if page not in pages:continue
            reg=word&31
            for step in range(1,5):
                nxt=off+step*4
                if nxt+4>hi:break
                w=struct.unpack_from("<I",blob,nxt)[0]
                if (w&0xfc000000) in (0x14000000,0x94000000) or w==0xd65f03c0: break
                a=add_imm(w)
                if a and a["rn"]==reg and a["rd"]==reg:
                    va=page+a["imm"]
                    for name,target in targets.items():
                        if va==target and len(found[name])<cap:
                            found[name].append({"adrp":hex(pc),"add":hex(pc+step*4),
                              "address":hex(va),"proof":"address formation, not reader"})
                    break
                if a and a["rd"]==reg:break
    return found

def analyze(blob):
    if len(blob)!=SIZE or hashlib.sha256(blob).hexdigest()!=SHA:
        raise ValueError("ACNH 3.0.3 ELF SHA/size mismatch")
    segments=parse_elf(blob)
    bars=local_cfg(blob,segments,0x3aca350,0x3aca300,0x3acaf00)
    bdli=local_cfg(blob,segments,0x1b0a014,0x1b0a000,0x1b0a500)
    action=local_cfg(blob,segments,0xff5d64,0xff5d00,0xff5d80)
    query=local_cfg(blob,segments,0x1084430,0x1084400,0x1084470)
    refs=global_refs(blob,segments,GLOBAL_RECORDS)
    expanded={}
    for kind,rs in refs.items():
        expanded[kind]=[]
        for hit in rs:
            at=int(hit["adrp"],16)
            start=max(0,at-32)&~3
            expanded[kind].append({**hit,"window":disasm(blob,segments,start,120)})
    return {"schema":"acnh303-r12-native-downstream-static-v1",
       "elf_sha256":SHA,"elf_bytes":len(blob),
       "address_space":"ELF PT_LOAD VA, not loaded game address",
       "bars_local_cfg":bars,"bdli_local_cfg":bdli,
       "eventflow_action_local_cfg":action,"eventflow_query_local_cfg":query,
       "eventflow_global_address_sites":expanded,
       "unverified":["AMTA v5 field readers and playback","BDLI LBLI identifier decoder",
                     "EventFlow record value type, table lookup and runtime dispatch"],
       "limitations":"Static code addresses/CFG/ADRP+ADD only; no real-time gameplay evidence."}

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--elf",required=True,type=Path)
    ap.add_argument("--out",required=True,type=Path)
    a=ap.parse_args()
    doc=analyze(a.elf.read_bytes())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(doc,ensure_ascii=False,sort_keys=True,indent=2)+"\n",encoding="utf-8")
    print("R12",doc["elf_sha256"],"BARS",doc["bars_local_cfg"]["visited_count"],
          "BDLI",doc["bdli_local_cfg"]["visited_count"],
          "global refs",{k:len(v) for k,v in doc["eventflow_global_address_sites"].items()})
if __name__=="__main__":
    main()
