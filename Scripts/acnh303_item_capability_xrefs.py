#!/usr/bin/env python3
"""CAP-01..05 read-only matched NSO/ELF branch, relocation and EventFlow factory candidates.
No live access. No callback or runtime claim from a hash hit or nearest C export.
"""
import argparse
import bisect
import hashlib
import json
import struct
import zlib
from pathlib import Path

BASE = 0x100000
TARGETS = (0x028BCB18, 0x02818BC0, 0x02813DF0, 0x0277C210, 0x01B04F00,
           0x0281CB30, 0x026F52AC, 0x026F66E0, 0x026F5394, 0x0232697C,
           0x016E49E4, 0x02673A50, 0x027FAA50, 0x01392D64, 0x0317513C,
           0x031752C0, 0x03176698, 0x01B06140, 0x025579BC, 0x024282D0)
NAMES = tuple("EventFlowAction" + n for n in (
    "NetEnterVillage", "NetJoinSessionVillage", "NetLeaveSessionVillage",
    "NetEndSessionVillage", "NetDestroySessionVillage", "NetCommon",
    "NetEnterCloudIsland", "OpenVillageGate", "NetCloudIslandRevertSaveData"))
FLOW = Path("UnPack/1/EventFlow")

def sha(blob):
    return hashlib.sha256(blob).hexdigest()

def branch_target(w, pc):
    op = w & 0xfc000000
    if op not in (0x14000000, 0x94000000):
        return None
    d = w & 0x3ffffff
    if d & 0x2000000:
        d -= 0x4000000
    return pc + d * 4

def selftest():
    assert branch_target(0x94000002, 0x100) == 0x108
    assert branch_target(0x17ffffff, 0x100) == 0xfc
    assert branch_target(0xd63f0000, 0x100) is None
    print("branch decoder synthetic tests passed")

def run(root, out):
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import parse_elf, get_bytes_va, survey, locate_xrefs
    from acnh303_r95_native_eventflags import murmur3
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    elf, nso, mapped, segments, raw, tags, rel = dec.decode(root)
    es = parse_elf(elf)
    elfbase = min(s["vaddr"] for s in es) & ~0xfff
    start, code = mapped[0]
    end = start + len(code)
    executable = [s for s in es if s["flags"] & 1]
    assert len(code) % 4 == 0
    for off in range(0, len(code), 4096):
        chunk = code[off:off+4096]
        if get_bytes_va(elf, executable, elfbase+start+off, len(chunk)) != chunk:
            raise ValueError("NSO/ELF text mismatch")
    def matched(a, n):
        try:
            b = raw(a, n)
        except ValueError:
            return None
        return b if get_bytes_va(elf, es, a+elfbase, n) == b else None
    targets = {a-BASE for a in TARGETS}
    if not all(start <= a < end and a % 4 == 0 for a in targets):
        raise ValueError("target out of text")
    croot = root/"derived/3.0.3/ghidra12.2/c"
    entries = sorted(int(p.stem, 16)-BASE for p in croot.rglob("*.c")
                     if len(p.stem)==8 and all(c in "0123456789abcdefABCDEF" for c in p.stem))
    def owner(a):
        k = bisect.bisect_right(entries, a)-1
        return hex(entries[k]+BASE) if k>=0 else None
    cs = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    def context(a):
        lo, hi = max(start, a-48), min(end, a+24)
        return [{"va":hex(i.address+BASE),"bytes":bytes(i.bytes).hex(),
                 "instruction":i.mnemonic+" "+i.op_str}
                for i in cs.disasm(code[lo-start:hi-start],lo)]
    direct = []
    for i, (w,) in enumerate(struct.iter_unpack("<I",code)):
        pc = start + i*4
        t = branch_target(w,pc)
        if t in targets:
            direct.append({"site_va":hex(pc+BASE),"target_va":hex(t+BASE),
                           "word":struct.pack("<I",w).hex(),"nearest_export":owner(pc),
                           "context":context(pc),"ownership_verified":False})
    # Original relative pointer targets, including potential vtable/dispatch slots.
    # RELR addends are read from original NSO, RELA addends from dynamic table.
    pointers = []
    hashes = {}
    for full in NAMES:
        for n in (full, full.removeprefix("EventFlowAction")):
            for algo,v in (("murmur3_seed0",murmur3(n)),("crc32",zlib.crc32(n.encode())&0xffffffff)):
                hashes.setdefault(v,[]).append({"name":n,"algorithm":algo})
    factories = []
    for slot, rr in rel.items():
        t = rr.get("addend")
        if rr.get("type") not in ("RELR",1027) or rr.get("symbol")!=0 or not isinstance(t,int):
            continue
        b = matched(slot,8)
        if b is None:
            continue
        if t in targets:
            pointers.append({"slot_va":hex(slot+BASE),"target_va":hex(t+BASE),
                             "relocation":rr,"raw_slot":b.hex(),"slot_role_verified":False})
        if not start <= t < end or t%4:
            continue
        # Reuse established 16-byte hash + constructor-pointer record shape as a hypothesis.
        record = matched(slot-8,16)
        if record is None:
            continue
        h = int.from_bytes(record[:4],"little")
        if h in hashes:
            factories.append({"record_va":hex(slot-8+BASE),"pointer_slot_va":hex(slot+BASE),
                              "raw":record.hex(),"hash":f"{h:08x}","names":hashes[h],
                              "constructor_candidate_va":hex(t+BASE),"nearest_export":owner(t),
                              "relocation":rr,"callback_verified":False})
    # Existing exact-string helper is bounded and only yields address formation candidates.
    terms = sorted(set(NAMES)|{n.removeprefix("EventFlowAction") for n in NAMES}|
                   {"LE_PlayerVillager_MoveOut","LE_PlayerVillager_MoveIn"})
    literals=survey(elf,es,terms,site_cap=64)
    refs,adrps=locate_xrefs(elf,es,literals,cap_per_term=64)
    bindpath=root/FLOW/"Info/BindInfo.json"
    bind=json.loads(bindpath.read_text("utf-8"))["tree"]["root"]["ActionBindData"]
    aliases={x["Key"]:x["Value"] for x in bind}
    flows=[]
    for p in sorted((root/FLOW).rglob("*.json")):
        j=json.loads(p.read_text("utf-8"))
        g=j.get("graph") if isinstance(j,dict) else None
        if not isinstance(g,dict):
            continue
        found=[e for e in g.get("events",[]) if e.get("action") in NAMES]
        if found:
            flows.append({"path":p.relative_to(root).as_posix(),"sha256":sha(p.read_bytes()),
                          "entrypoints":g.get("entrypoints",[]),"events":found})
    report={"schema":"acnh303-item-capability-candidate-xrefs-v1",
            "elf_sha256":sha(elf),"nso_sha256":sha(nso),"build_id":nso[0x40:0x60].hex(),
            "elf_base":hex(elfbase),"text_words":len(code)//4,"targets":[hex(x) for x in TARGETS],
            "direct_candidates":direct,"relative_pointer_candidates":pointers,
            "factory_candidates":factories,"name_hashes":{f"{k:08x}":v for k,v in hashes.items()},
            "string_locations":literals,"string_reference_candidates":dict(refs),
            "string_adrp_candidates":adrps,"bind_aliases":{n:aliases.get(n) for n in NAMES},
            "eventflows":flows,"callback_verified":False,"runtime_verified":False,
            "limits":"Linear B/BL scan may include data. Nearest C export is not a function boundary. Relative pointer hits need vtable/registry ownership; not all indirect calls covered. Hash+relocation record shape and exact string XREF are candidates, not dispatch binding. String refs capped; ELF coordinates in string fields use elf_base; other VA uses Ghidra BASE."}
    out.mkdir(parents=True,exist_ok=True)
    (out/"evidence.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    summary={k:len(report[k]) for k in ("direct_candidates","relative_pointer_candidates","factory_candidates","eventflows")}
    summary["build_id"]=report["build_id"]
    summary["runtime_verified"]=False
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,indent=2))

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path)
    p.add_argument("--selftest",action="store_true")
    a=p.parse_args()
    if a.selftest:
        selftest()
    else:
        if a.out is None:
            p.error("--out required")
        run(a.root.resolve(),a.out.resolve())
