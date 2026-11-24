#!/usr/bin/env python3
"""R100 corpus-based CRC32 MITM and authenticated ELF string audit."""
import argparse
import hashlib
import json
import re
import zlib
from pathlib import Path
from collections import defaultdict
BASE = Path("derived/3.0.3/npc_event_flags/r100_name_corpus")
ELF = Path("e10617820db06889e1638499478da0de_NCA/0/main.elf")
SHA = "145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
TARGETS = (0x5140e4b4, 0x5f77b61a, 0xbed25a86, 0x8d401df7)
FAMILY = {0x5f77b61a:"AttrClearCulling",0xbed25a86:"AttrClearMoving",0x8d401df7:"AttrClearStageChange"}
MASK = 0xffffffff
FOCUS = re.compile(r"^(reset|clear|init|initialize|delete|erase|remove|move|moving|moved|migration|migrate|transfer|day|daily|date|time|today|scene|talk|player|npc|land|island|flags?|save|memory|start|end|change|update|load|default|new|old|before|after|on|at|by|type|mode|kind|condition|timing|event|finish|complete|check|enable|keep|carry|entry|exit|visit|return|in|out|data)$",re.I)
def table():
    t=[]
    for i in range(256):
        c=i
        for _ in range(8):
            c=(c>>1)^(0xedb88320 if c&1 else 0)
        t.append(c)
    return t
TABLE=table()
INV={v>>24:i for i,v in enumerate(TABLE)}
def advance(state,s):
    return zlib.crc32(s.encode("ascii"),state^MASK)^MASK
def reverse(state,s):
    for c in reversed(s.encode("ascii")):
        i=INV[state>>24]
        state=(((state^TABLE[i])<<8)|(i^c))&MASK
    return state
def selftest():
    for name,h in [("FlagsFlowAccess",0xfa93f14b), *[(n,h) for h,n in FAMILY.items()]]:
        sig=name+" u8"
        assert zlib.crc32(sig.encode("ascii"))==h
        assert advance(MASK,sig)==h^MASK
        for i in range(len(sig)+1):
            assert reverse(h^MASK,sig[i:])==advance(MASK,sig[:i])
def split(s):
    s=re.sub(r"([A-Z]+)([A-Z][a-z])",r"\1 \2",s)
    s=re.sub(r"([a-z0-9])([A-Z])",r"\1 \2",s)
    return [x for x in re.split(r"[^A-Za-z0-9]+",s) if re.fullmatch(r"[A-Za-z][A-Za-z0-9]*",x)]
def run(root,out,scan_elf=False):
    selftest()
    corpus=json.loads((root/BASE/"corpus.json").read_text(encoding="utf-8"))
    baseline=json.loads((root/BASE/"report.json").read_text(encoding="utf-8"))
    for x in corpus["verified_signatures"]:
        assert zlib.crc32((x["name"]+" "+x["type"]).encode("ascii"))==int(x["hash"],16)
    identifiers={x["name"] for x in corpus["verified_signatures"]}|{x["name"] for x in corpus["enum_labels"]}|{x["name"] for x in corpus["migration_keys"]["keys"]}
    tokens=set(); frags=set()
    for name in identifiers:
        ts=split(name);tokens.update(ts)
        for i in range(len(ts)):
            for j in range(i+1,min(len(ts),i+3)+1):
                frags.add("".join(ts[i:j]))
    focused={x for x in tokens if FOCUS.fullmatch(x)}
    left={s for s in frags if len(s)<=48}
    for a in focused:
        for b in tokens:
            left.update((a+b,b+a))
    right={s for s in tokens|{a+b for a in focused for b in focused}|frags if len(s)<=48}
    assert len(left)==baseline["left_fragments"] and len(right)==baseline["right_fragments"]
    idx=defaultdict(list)
    for p in sorted(left):
        idx[advance(MASK,p)].append(p)
    hits={}
    def add(name,typ,h):
        sig=name+" "+typ
        assert zlib.crc32(sig.encode("ascii"))==h
        hits[sig]={"name":name,"type":typ,"hash":f"{h:08X}","status":"CRC_CANDIDATE_ONLY"}
    for name in identifiers:
        for typ in ("u8","s8"):
            h=zlib.crc32((name+" "+typ).encode("ascii"))
            if h in TARGETS:
                add(name,typ,h)
    for h in TARGETS:
        for typ in ("u8","s8"):
            for suffix in right:
                for p in idx.get(reverse(h^MASK,suffix+" "+typ),()):
                    add(p+suffix,typ,h)
    assert set(hits)=={x["name"]+" "+x["type"] for x in baseline["candidates"]}
    result={"historical_mitm_reproduced":True,"candidate_signatures":list(hits.values()),
            "high_confidence_reconstructed":{f"{h:08X}":n for h,n in FAMILY.items()},
            "original_header_attested":False,"unknown_5140E4B4":None,"elf_scan_executed":False}
    if scan_elf:
        blob=(root/ELF).read_bytes()
        if hashlib.sha256(blob).hexdigest()!=SHA:
            raise ValueError("original ELF SHA mismatch")
        # Exact ASCII NUL-terminated identifiers only. Offset is a file offset, not VA.
        ids=defaultdict(list)
        for m in re.finditer(rb"(?<![A-Za-z0-9_])[A-Za-z_][A-Za-z0-9_]{2,127}\x00",blob):
            name=m.group()[:-1].decode("ascii")
            ids[name].append(m.start())
        exact={}
        for name,offsets in ids.items():
            for typ in ("u8","s8"):
                h=zlib.crc32((name+" "+typ).encode("ascii"))
                if h in TARGETS:
                    exact[name+" "+typ]={"hash":f"{h:08X}","file_offsets":offsets}
        semantic={n:v for n,v in ids.items() if re.search(r"AttrClear|ClearCulling|ClearMoving|ClearStage|PlayerMoving|MoveIsland|DateChange|DayChange|DayUpdate",n,re.I)}
        result.update(elf_scan_executed=True,elf_sha256=SHA,unique_ascii_identifiers=len(ids),
                      exact_elf_identifier_crc_candidates=exact,semantic_elf_identifiers=semantic,
                      note="Exact strings still need field usage proof. No-match does not mean a name never existed.")
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in result.items() if k!="semantic_elf_identifiers"},ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path)
    p.add_argument("--scan-elf",action="store_true")
    p.add_argument("--selftest",action="store_true")
    a=p.parse_args()
    if a.selftest:
        selftest();print("CRC32 forward/reverse controls and 3 reconstructed signatures verified")
    elif a.out:
        run(a.root.resolve(),a.out.resolve(),a.scan_elf)
    else:
        p.error("--out is required")
