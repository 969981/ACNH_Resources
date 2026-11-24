#!/usr/bin/env python3
"""Authenticated targeted direct B/BL, decompiled hash/caller scan and CRC search."""
import argparse,bisect,csv,hashlib,json,re,struct,zlib
from collections import Counter,defaultdict
from pathlib import Path
from acnh303_round11_elf_xref import parse_elf,get_bytes_va
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
BASE=Path("derived/3.0.3/npc_event_flags/r102_growth_reset")
CROOT=Path("derived/3.0.3/ghidra12.2/c")
ELF=Path("e10617820db06889e1638499478da0de_NCA/0/main.elf")
SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
SLIDE=0x100000
TARGETS={"culling_caller":0x01ea4530,"stage_memory_caller":0x027ea3e0,"stage_temp_caller":0x02199cf0,
         "calendar":0x0276aab0,"moving_u16":0x0274f840,"moving_parallel":0x027a5750,
         "moving_memory":0x027478c0,"moving_resident":0x02690d60,"memory_dispatch":0x020ec6c4,
         "temp_dispatch":0x02198d70}
HASHES={0x5140e4b4,0xfdb1f290,0x3dad9135,0x3c7fb88f,0xbed25a86}
MASK=0xffffffff
def reverse_crc(c,s):
    for b in reversed(s.encode("ascii")):
        j=INV[c>>24]
        c=(((c^TABLE[j])<<8)|(j^b))&MASK
    return c
TABLE=[]
for i in range(256):
    v=i
    for _ in range(8): v=(v>>1)^(0xedb88320 if v&1 else 0)
    TABLE.append(v)
INV={v>>24:i for i,v in enumerate(TABLE)}
def mitm(e):
    words=e["words"]
    frags=sorted(set([""]+words+[a+b for a in words for b in words]))
    assert len(frags)==e["fragments"]
    assert len(frags)**2*len(e["prefixes"])*3==e["logical_combinations"]
    hits=set()
    for p in e["prefixes"]:
        idx=defaultdict(list)
        for f in frags: idx[zlib.crc32((p+f).encode())^MASK].append(f)
        for h in (0x5140e4b4,0x3dad9135,0x3c7fb88f):
            for s in frags:
                for f in idx.get(reverse_crc(h^MASK,s+" u8"),()):
                    n=p+f+s
                    assert zlib.crc32((n+" u8").encode())==h
                    hits.add((f"{h:08X}",n))
    assert dict(Counter(h for h,_ in hits))==e["counts"]
    assert ("3C7FB88F","AttrClearSceneChange") in hits
    return [{"hash":h,"name":n,"type":"u8","status":"CRC_CANDIDATE_ONLY"} for h,n in sorted(hits)]
def gitblob(p):
    b=p.read_bytes()
    return hashlib.sha1(("blob %d"%len(b)).encode()+bytes([0])+b).hexdigest()
def run(root,out):
    e=json.loads((root/BASE/"evidence.json").read_text(encoding="utf-8"))
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x): (out/n).write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    for h,f in e["fields"].items():
        p=root/f["path"]
        assert gitblob(p)==f["blob"]
        with p.open(encoding="utf-8-sig",newline="") as stream: rows=list(csv.DictReader(stream))
        assert len(rows)==f["total"]
        assert dict(Counter(r["hash_"+h] for r in rows))==f["distribution"]
        selected=[r for r in rows if r["hash_"+h]!="0"]
        assert [r["hash_45F320F2"] for r in selected]==[r["key"] for r in f["selected"]]
        default="hash_4C24F1CF" if h=="BED25A86" else "hash_797F5754"
        assert dict(Counter(r[default] for r in selected))==f["default_distribution"]
    write("mitm_candidates.json",mitm(e["local_mitm"]))
    b=(root/ELF).read_bytes()
    assert hashlib.sha256(b).hexdigest()==SHA
    segments=parse_elf(b)
    summary=json.loads((root/"derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json").read_text())
    assert int(summary["image_base"],16)-(min(x["vaddr"] for x in segments)&~0xfff)==SLIDE
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def disasm(va,size):
        raw=get_bytes_va(b,segments,va,size)
        return [] if raw is None else [{"ghidra_va":f"{x.address+SLIDE:08X}","bytes":x.bytes.hex(),"mnemonic":x.mnemonic,"operands":x.op_str} for x in cs.disasm(raw,va)]
    files=sorted((root/CROOT).rglob("*.c"))
    assert len(files)==59971
    owners=sorted((int(p.stem,16),p) for p in files if re.fullmatch(r"[0-9a-fA-F]{8}",p.stem))
    starts=[a for a,_ in owners]
    lookup={v-SLIDE:k for k,v in TARGETS.items()}
    branches={k:[] for k in TARGETS}
    for seg in segments:
        if not seg["flags"]&1:continue
        start=seg["file_offset"];end=start+seg["filesz"]
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[start:end-(end-start)%4])):
            kind=w&0xfc000000
            if kind not in (0x14000000,0x94000000):continue
            imm=w&0x3ffffff
            if imm&0x2000000:imm-=0x4000000
            va=seg["vaddr"]+i*4
            name=lookup.get(va+4*imm)
            if name is None:continue
            j=bisect.bisect_right(starts,va+SLIDE)-1
            near=owners[j] if j>=0 else None
            branches[name].append({"ghidra_va":f"{va+SLIDE:08X}","kind":"BL" if kind==0x94000000 else "B",
                "nearest_preceding_export":None if near is None else {"path":near[1].relative_to(root).as_posix(),"distance":va+SLIDE-near[0]},
                "owner_verified":False,"instruction_window":disasm(va-32,48)})
    hx=re.compile(r"(?<![\w])(-?0[xX][0-9a-fA-F]{1,8})(?![\w])")
    call=re.compile(r"\bFUN_("+"|".join(f"{v:08x}" for v in TARGETS.values())+r")\s*\(",re.I)
    literal={f"{h:08X}":[] for h in HASHES};calls=[]
    for p in files:
        ls=p.read_text(encoding="utf-8").splitlines()
        for i,line in enumerate(ls):
            for m in call.finditer(line):
                if p.stem.lower()!=m.group(1).lower():calls.append({"target":m.group(1),"file":p.relative_to(root).as_posix(),"line":i+1,"context":ls[max(0,i-5):i+6]})
            for lit in set(hx.findall(line)):
                h=int(lit,16)&MASK
                if h in HASHES:literal[f"{h:08X}"].append({"file":p.relative_to(root).as_posix(),"line":i+1,"literal":lit,"context":ls[max(0,i-7):i+8]})
    for row in e["calendar_calls"]:
        va=int(row["ghidra_va"],16)-SLIDE
        raw=get_bytes_va(b,segments,va-4,8)
        prev,w=struct.unpack("<II",raw)
        assert prev==int(row["previous_instruction_word"],16) and w&0xfc000000==0x94000000
        assert any(x["ghidra_va"]==row["ghidra_va"] for x in branches["calendar"])
    windows={k:{"ghidra_va":f"{v:08X}","rva":v-SLIDE,"bytes":get_bytes_va(b,segments,v-SLIDE,16).hex()} for k,v in TARGETS.items()}
    write("direct_branches.json",branches);write("decompiled_calls.json",calls);write("field_literals.json",literal)
    write("calendar_wrappers_window.json",disasm(0x00db2bc0-SLIDE,0x200))
    write("runtime_fingerprints.json",{"schema":"r102-reset-fingerprint-v1","elf_sha256":SHA,"ghidra_slide":SLIDE,"targets":windows,"runtime_verified":False})
    report={"native_c_files":len(files),"direct_branches":{k:len(v) for k,v in branches.items()},
            "literal_counts":{k:len(v) for k,v in literal.items()},"calendar_mode_calls_verified":8,
            "mitm_reproduced":True,"player_selected":len(e["fields"]["BED25A86"]["selected"]),
            "original_name_5140E4B4":None,"player_transfer_entry_verified":False,"runtime_verified":False}
    write("report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve())
