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


def focus_dispatch(code, start, matched, rel, cs, factory_candidates, out):
    """Bounded static follow-up: pointer slot owners and constructor address windows."""
    from acnh303_round11_elf_xref import adr_target, adrp_target, add_imm, ldr_uimm
    from capstone.arm64 import ARM64_OP_REG, ARM64_OP_MEM
    end=start+len(code)
    slot=0x04BC38D8-BASE
    def row(i):
        return {"va":hex(i.address+BASE),"bytes":bytes(i.bytes).hex(),
                "instruction":i.mnemonic+" "+i.op_str}
    def window(a, size):
        lo=max(start,a); hi=min(end,a+size)
        return list(cs.disasm(code[lo-start:hi-start],lo))
    def reloc_window(a, before=0x20, after=0x58):
        rows=[]
        for q in range((a-before+7)&~7,a+after,8):
            b=matched(q,8)
            if b is None: continue
            rr=rel.get(q)
            t=rr.get("addend") if rr else None
            rows.append({"slot_va":hex(q+BASE),"bytes":b.hex(),"relocation":rr,
                         "target_va":hex(t+BASE) if isinstance(t,int) and rr.get("symbol")==0 and rr.get("type") in ("RELR",1027) else None,
                         "target_is_text":isinstance(t,int) and start<=t<end and rr.get("symbol")==0 and rr.get("type") in ("RELR",1027)})
        return rows
    # Exact and nearby address forms. Nearby matches are not proof of slot use.
    targets={slot}|{q for q,rr in rel.items() if rr.get("symbol")==0 and rr.get("type") in ("RELR",1027) and rr.get("addend")==slot}
    pages={q&~4095 for q in targets}
    refs=[]
    for off,(w,) in enumerate(struct.iter_unpack("<I",code)):
        pc=start+4*off
        a=adr_target(w,pc)
        if a is not None and any(abs(a-t)<=0x40 for t in targets):
            refs.append({"site_va":hex(pc+BASE),"formed_va":hex(a+BASE),"pattern":"ADR",
                         "exact":a in targets,"context":[row(i) for i in window(pc-0x10,0x40)]})
        page=adrp_target(w,pc)
        if page not in pages: continue
        rd=w&31
        for step in range(1,7):
            o=off*4+4*step
            if o+4>len(code):break
            follower=struct.unpack_from("<I",code,o)[0]
            add=add_imm(follower); ldr=ldr_uimm(follower)
            a=None; kind=None
            if add and add["rn"]==rd:
                a=page+add["imm"];kind="ADRP_ADD"
            elif ldr and ldr["rn"]==rd:
                a=page+ldr["imm"];kind="ADRP_LDR_slot"
            if a is not None and any(abs(a-t)<=0x40 for t in targets):
                refs.append({"site_va":hex(pc+BASE),"consumer_va":hex(pc+4*step+BASE),
                             "formed_va":hex(a+BASE),"pattern":kind,"exact":a in targets,
                             "context":[row(i) for i in window(pc-0x10,0x48)]})
            if add and add["rd"]==rd:break
    constructors=[]
    cs.detail=True
    for f in factory_candidates:
        a=int(f["constructor_candidate_va"],16)-BASE
        ins=window(a,0x180)
        # Linear instruction window: may cross a function boundary. Preserve first
        # terminal separately; do not call the complete window a recovered CFG.
        first_terminal=next((i.address for i in ins if i.mnemonic in ("ret","br","b")),None)
        addr_refs=[];stores=[];calls=[];regvals={}
        for i in ins:
            if first_terminal is not None and i.address>first_terminal:break
            w=int.from_bytes(i.bytes,"little")
            rd=w&31; new={}
            aa=adr_target(w,i.address); page=adrp_target(w,i.address)
            add=add_imm(w); ldr=ldr_uimm(w)
            if aa is not None:new[rd]=aa
            elif page is not None:new[rd]=page
            elif add and add["rn"] in regvals:
                v=regvals[add["rn"]]+add["imm"];new[add["rd"]]=v
                if matched(v,8) is not None:
                    rw=reloc_window(v)
                    addr_refs.append({"site_va":hex(i.address+BASE),"address_va":hex(v+BASE),
                                      "pattern":"address_formation","relocations":rw})
            elif ldr and ldr["rn"] in regvals:
                v=regvals[ldr["rn"]]+ldr["imm"];rr=rel.get(v,{})
                t=rr.get("addend")
                if isinstance(t,int) and rr.get("symbol")==0 and rr.get("type") in ("RELR",1027):
                    new[ldr["rt"]]=t
                    addr_refs.append({"site_va":hex(i.address+BASE),"address_va":hex(t+BASE),
                                      "pointer_slot_va":hex(v+BASE),"pattern":"relocated_load",
                                      "relocations":reloc_window(t)})
            if i.mnemonic=="mov" and len(i.operands)==2 and all(o.type==ARM64_OP_REG for o in i.operands):
                def idx(o):
                    n=i.reg_name(o.reg)
                    return int(n[1:]) if n.startswith("x") and n[1:].isdigit() else None
                dr,sr=map(idx,i.operands)
                if dr is not None and sr in regvals:new[dr]=regvals[sr]
            if i.mnemonic in ("str","stur","stp") and i.operands:
                for op in i.operands:
                    if op.type==ARM64_OP_REG:
                        n=i.reg_name(op.reg)
                        if n.startswith("x") and n[1:].isdigit() and int(n[1:]) in regvals:
                            v=regvals[int(n[1:])]
                            stores.append({**row(i),"stored_address_candidate_va":hex(v+BASE),
                                           "relocations":reloc_window(v)})
            b=branch_target(w,i.address)
            if b is not None:
                calls.append({"site_va":hex(i.address+BASE),"target_va":hex(b+BASE),"mnemonic":i.mnemonic,
                              "target_window":[row(x) for x in window(b,0x60)] if start<=b<end else []})
            if i.mnemonic in ("bl","blr"):
                regvals={k:v for k,v in regvals.items() if 19<=k<=28}
            else:
                try:
                    _,writes=i.regs_access()
                    for rr in writes:
                        n=i.reg_name(rr)
                        if n[0:1] in ("x","w") and n[1:].isdigit():regvals.pop(int(n[1:]),None)
                except Exception:regvals={}
            regvals.update(new)
        constructors.append({"factory":f,"linear_window":[row(i) for i in ins],
                             "first_terminal_va":hex(first_terminal+BASE) if first_terminal is not None else None,
                             "address_candidates":addr_refs,"address_store_candidates":stores,
                             "direct_branches":calls,"vtable_verified":False})
    result={"schema":"acnh303-item-capability-dispatch-focus-v1",
            "pointer_slot_va":hex(slot+BASE),"pointer_neighborhood":reloc_window(slot,0x80,0x88),
            "slot_alias_candidates":[hex(t+BASE) for t in sorted(targets-{slot})],
            "slot_reference_candidates":refs,"constructors":constructors,
            "limits":"Bounded linear ADR/ADRP patterns and constructor windows; register tracking is not CFG dataflow, nearby matches are not call ownership; VTable and callback identities unverified.",
            "runtime_verified":False}
    (out/"dispatch_focus.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("DISPATCH_FOCUS",json.dumps({"slot_refs":len(refs),"exact_slot_refs":sum(x["exact"] for x in refs),
          "constructors":len(constructors),"address_stores":sum(len(x["address_store_candidates"]) for x in constructors)}))


def focus_vtables(code,start,matched,rel,cs,out):
    """Read constructor-proven address points and callback owner global references."""
    from acnh303_round11_elf_xref import adr_target,adrp_target,add_imm,ldr_uimm
    end=start+len(code)
    def row(i):
        return {"va":hex(i.address+BASE),"bytes":bytes(i.bytes).hex(),"instruction":i.mnemonic+" "+i.op_str}
    def window(a,n):
        lo=max(start,a);hi=min(end,a+n)
        return [row(i) for i in cs.disasm(code[lo-start:hi-start],lo)] if hi>lo else []
    def ptr(a):
        rr=rel.get(a,{})
        t=rr.get("addend")
        b=matched(a,8)
        return t if b is not None and rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 and isinstance(t,int) else None
    # Manually recovered from the complete, byte-matched constructor windows.
    specs=[
      ("NetEnterVillage",0x01112070,0x049521A0),
      ("NetJoinSessionVillage",0x0113B570,0x04952730),
      ("NetEnterCloudIsland",0x01129314,0x049520C0),
      ("NetCloudIslandRevertSaveData",0x01100DF4,0x04951558),
      ("OpenVillageGate",0x0111F380,0x04954268)]
    common=ptr(0x04BB84D0-BASE)
    if common is not None:
        specs.append(("NetCommon",0x0113677C,common+BASE+0x10))
    tables=[]
    callback_targets=set()
    for name,store,va in specs:
        a=va-BASE
        if matched(a,8) is None:raise ValueError("unmatched vtable address "+name)
        slots=[]
        # Deliberately bounded; extent and ABI slot semantics are not assumed.
        for off in range(-0x10,0x80,8):
            q=a+off;b=matched(q,8);t=ptr(q)
            if b is None:continue
            in_text=t is not None and start<=t<end and t%4==0
            rec={"offset":off,"slot_va":hex(q+BASE),"raw":b.hex(),
                 "target_va":hex(t+BASE) if t is not None else None,
                 "target_is_text":in_text,"relocation":rel.get(q)}
            if in_text:
                callback_targets.add(t)
                rec["entry_window"]=window(t,0x100)
            slots.append(rec)
        tables.append({"action":name,"store_va":hex(store),"address_point_va":hex(va),
                       "store_window":window(store-0x28-BASE,0x30),"slots":slots,
                       "slot_semantics_verified":False})
    globals_va=(0x055B2610,0x055B2618)
    targets={x-BASE for x in globals_va}
    aliases={q for q in rel if rel[q].get("addend") in targets and ptr(q) in targets}
    watched=targets|aliases
    pages={x&~4095 for x in watched}
    refs=[];calls=[]
    for off,(w,) in enumerate(struct.iter_unpack("<I",code)):
        pc=start+off*4
        t=branch_target(w,pc)
        if t in callback_targets:
            calls.append({"site_va":hex(pc+BASE),"target_va":hex(t+BASE),"bytes":struct.pack("<I",w).hex()})
        a=adr_target(w,pc)
        if a in watched:
            refs.append({"site_va":hex(pc+BASE),"formed_va":hex(a+BASE),"kind":"ADR",
                         "context":window(pc-0x20,0x80)})
        page=adrp_target(w,pc)
        if page not in pages:continue
        rd=w&31
        for step in range(1,7):
            o=(off+step)*4
            if o+4>len(code):break
            f=struct.unpack_from("<I",code,o)[0]
            ad=add_imm(f);ld=ldr_uimm(f)
            a=None;k=None
            if ad and ad["rn"]==rd:a=page+ad["imm"];k="ADRP_ADD"
            elif ld and ld["rn"]==rd:a=page+ld["imm"];k="ADRP_LDR"
            # Direct global STR/LDR forms (64 bit, unsigned immediate).
            elif f&0xffc00000==0xf9000000 and (f>>5)&31==rd:
                a=page+((f>>10)&0xfff)*8;k="ADRP_STR"
            if a in watched:
                refs.append({"site_va":hex(pc+BASE),"consumer_va":hex(pc+step*4+BASE),
                             "formed_va":hex(a+BASE),"kind":k,"context":window(pc-0x20,0x80)})
            if ad and ad["rd"]==rd:break
    result={"schema":"acnh303-item-capability-vtables-v1","tables":tables,
            "owner_globals":[hex(x) for x in globals_va],
            "global_aliases":[{"slot_va":hex(q+BASE),"target_va":hex(ptr(q)+BASE)} for q in sorted(aliases)],
            "global_address_candidates":refs,"vtable_target_direct_candidates":calls,
            "registration_context":window(0x007BAF64-BASE-0x100,0x180),
            "runtime_verified":False,
            "limits":"Bounded vtable windows may include adjacent tables; constructor store identifies address point, not method semantics. Global address formations are linear candidates, not proof of BLR argument flow. No claims about actual online restriction."}
    (out/"vtable_focus.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("VTABLE_FOCUS",json.dumps({"tables":len(tables),"callback_target_candidates":len(callback_targets),"global_aliases":len(aliases),"global_refs":len(refs),"direct_candidates":len(calls)}))


def focus_save_sync(code,start,matched,rel,cs,out):
    """Byte-matched bounded save-sync states and callback adapters; no runtime claims."""
    from acnh303_round11_elf_xref import ldr_uimm
    end=start+len(code)
    def row(i):
        return {"va":hex(i.address+BASE),"bytes":bytes(i.bytes).hex(),
                "instruction":i.mnemonic+" "+i.op_str}
    def window(va,n):
        a=va-BASE
        if a<start or a+n>end:return []
        return [row(i) for i in cs.disasm(code[a-start:a-start+n],a)]
    def pointer(va):
        a=va-BASE; b=matched(a,8); rr=rel.get(a,{})
        t=rr.get("addend")
        return {"slot_va":hex(va),"raw":b.hex() if b is not None else None,
                "relocation":rr,"target_va":hex(t+BASE) if b is not None and rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 and isinstance(t,int) else None}
    # Proven registration GOT slots and related network-manager address slots.
    got=[pointer(x) for x in (0x04BB21D0,0x04BB2230,0x04BB27D0,0x04BB32E0,0x04BC38D8,0x04BC38E0,0x04BC38E8,0x04BC38F0,0x04BC38F8,0x04BD4738)]
    adapters=[]
    for va in (0x04A92240,0x04A92260,0x04A5BC70,0x04B64428):
        slots=[]
        for off in range(-0x10,0x40,8):
            q=pointer(va+off);t=q["target_va"]
            q["offset"]=off
            if t is not None:
                q["entry_window"]=window(int(t,16),0x100)
            slots.append(q)
        adapters.append({"address_point_va":hex(va),"slots":slots,"method_roles_verified":False})
    # Original named state entries recovered from 01DE57A8. Bound each window
    # by the next registered address, not a claim of a complete function CFG.
    states=[
      ("cIdle",0x01DE5C50,0x01DE5C58),
      ("cHostPreProc",0x01DE5DCC,0x01DE5DE4),
      ("cHostStartSave",0x01DE5E2C,0x01DE5FB0),
      ("cHostSyncCommit",0x01DE60A0,0x01DE61C4),
      ("cHostSyncRollback",0x01DE61C8,0x01DE61CC),
      ("cHostCommitAndWait",0x01DE61D0,0x01DE6250),
      ("cVisitStartSave",0x01DE6420,0x01DE6530),
      ("cVisitWaitCommit",0x01DE65D4,0x01DE6670),
      ("cVisitCommit",0x01DE6820,0x01DE6880),
      ("cVisitFinalizeWait",0x01DE6960,0x01DE696C),
      ("cRollback",0x01DE6A90,0x01DE6B0C)]
    anchors=sorted({a for _,x,y in states for a in (x,y)}|{0x01DE6B30})
    methods=[]
    for name,x,y in states:
        for role,a in (("registered_2",x),("registered_4",y)):
            limit=anchors[anchors.index(a)+1]
            ins=window(a,limit-a)
            edges=[];indirect=[];offset58=[]
            for i in ins:
                w=int.from_bytes(bytes.fromhex(i["bytes"]),"little");pc=int(i["va"],16)-BASE
                t=branch_target(w,pc)
                if t is not None:edges.append({"site_va":i["va"],"target_va":hex(t+BASE),"instruction":i["instruction"],"target_window":window(t+BASE,0x80)})
                if i["instruction"].split()[0] in ("blr","br"):indirect.append(i)
                ld=ldr_uimm(w)
                if ld and ld["imm"]==0x58:offset58.append(i)
            methods.append({"state":name,"role":role,"va":hex(a),"end_bound_va":hex(limit),"rows":ins,
                            "direct_edges":edges,"indirect_sites":indirect,"offset_58_load_candidates":offset58})
    # Preserve the complete bounded +40/+48 method regions from the known tables.
    network=[]
    for name,a,b in (("enter_start",0x00D72184,0x00D721B4),
                     ("enter_result",0x00D721B4,0x00D7229C),
                     ("join_start",0x00D76A04,0x00D76BF4),
                     ("join_result",0x00D76BF4,0x00D76D2C)):
        ins=window(a,b-a)
        edges=[]
        for i in ins:
            w=int.from_bytes(bytes.fromhex(i["bytes"]),"little")
            t=branch_target(w,int(i["va"],16)-BASE)
            if t is not None:
                edges.append({"site_va":i["va"],"target_va":hex(t+BASE),"instruction":i["instruction"],"target_window":window(t+BASE,0x100)})
        network.append({"role":name,"entry_va":hex(a),"end_bound_va":hex(b),"rows":ins,"direct_edges":edges})
    result={"schema":"acnh303-item-capability-save-sync-v1","got_slots":got,"callback_adapters":adapters,
            "state_methods":methods,"network_methods":network,"publication_context":window(0x007BDE94,0x28),
            "runtime_verified":False,"limits":"State registration addresses from C export; bounded linear intervals, not complete CFG; +58 load alone is not object identity. Adapter slots can include adjacent tables. No proof of normal online item filter invocation or parameter polarity."}
    (out/"save_sync_focus.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("SAVE_SYNC_FOCUS",json.dumps({"state_methods":len(methods),"network_methods":len(network),"adapters":len(adapters),"offset58_candidates":sum(len(m["offset_58_load_candidates"]) for m in methods)}))

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
    focus_dispatch(code,start,matched,rel,cs,factories,out)
    focus_vtables(code,start,matched,rel,cs,out)
    focus_save_sync(code,start,matched,rel,cs,out)

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
