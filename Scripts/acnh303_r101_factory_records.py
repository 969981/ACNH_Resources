#!/usr/bin/env python3
"""R101 original 16-byte factory records and conservative constructor/VTable audit."""
import argparse,collections,hashlib,json,sqlite3,struct,re
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
import acnh303_r100_nso_decode as dec
import acnh303_r99_relocation as r99
import acnh303_r96_native_tables as r96
import acnh303_r95_native_eventflags as r95
SLIDE=0x100000
TARGETS={
"NpcInviteCheck":(0x7d83e6a3,0x4881690,0x105de50,"query"),
"IsCollaboNpc":(0xbb045a73,0x48825f0,0x106aee8,"query"),
"NpcDecideQuestReward":(0xabc7e873,0x487df30,0x102bcf8,"action"),
"NpcAddFriendship":(0x924f928a,0x487d760,0x1024d30,"action"),
"CheckNpcFavorLevel":(0xf762c39c,0x4883310,0x1076188,"query")}
WRITES={0x6bb6c4:0x4b8ded8,0x6bb6e8:0x4b8dee0,0x6bb6f4:0x4b8def8,0x6bb784:0x4b8dfd8,
0x6bb788:0x4b8dfe0,0x6bb798:0x4b8dee8,0x6bb7a4:0x4b8def0,0x6bb7b4:0x4b8df68}
MISSING="TalkFreeMultiDayEventNow SetGreeting InputPhraseMemory GEventTalkBeforeFlag FriendOfHostPC TalkClothesNToday MailedVisitPLayout TalkRumorOActionToday TalkSnpcNow TalkHHAToday TalkProgressHelpBuildShop TalkRumorPActionToday CoordinateUpdate LastFtrNum EventFreeTalkCount SNpcVisitTalkCount EventAnnounceTalkCount MuseumGreet HalloweenReactionPrank TalkNpc1Count TalkNpc2Count TalkNpc3Count TalkNpc4Count TalkNpc5Count TalkNpc6Count TalkNpc7Count TalkNpc8Count TalkNpc9Count".split()
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    assert len(relocs)==380793
    im=r99.Image(elf);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def read(a,n):
        try:return raw(a,n)
        except ValueError:return None
    def ptr(a):
        r=relocs.get(a)
        return r["addend"] if r and r["type"] in ("RELR",1027) and r["symbol"]==0 else None
    def h(a):return hex(a) if a is not None else None
    def gh(a):return h(a+SLIDE) if a is not None else None
    def u(a,n):
        b=read(a,n);return int.from_bytes(b,"little") if b is not None else None
    def insns(a,n):return list(cs.disasm(read(a,n) or b"",a))
    def row(i):return {"va":h(i.address),"ghidra_va":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    exports={int(p.stem,16)-SLIDE:p for p in (root/r96.CROOT).rglob("*.c") if re.fullmatch("[0-9a-f]{8}",p.stem)}
    def export(a):return exports[a].relative_to(root).as_posix() if a in exports else None
    def reg(i,x):
        n=i.reg_name(x)
        return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    def table(a,n=12):
        return [{"offset":i*8,"slot":h(a+i*8),"target":h(ptr(a+i*8)),"target_ghidra":gh(ptr(a+i*8)),
                 "executable":im.exec(ptr(a+i*8)),"export":export(ptr(a+i*8))} for i in range(n)]
    # Straight-line symbolic address tracing. Invalidate volatile registers after calls,
    # all tracked values at conditional/unconditional branch boundaries; no path merging.
    def trace(a,n):
        tracked={};stores=[];calls=[];addresses=[]
        for i in insns(a,n):
            m=i.mnemonic;o=i.operands;pending={}
            if m in ("b","br","ret","cbz","cbnz","tbz","tbnz") or m.startswith("b."):
                tracked.clear()
                continue
            if m in ("bl","blr"):
                target=o[0].imm if o and o[0].type==ARM64_OP_IMM else tracked.get(reg(i,o[0].reg)) if o else None
                calls.append({**row(i),"target":h(target),"target_ghidra":gh(target),"export":export(target),"known_args":{k:h(v) for k,v in tracked.items() if k in ("x0","x1","x2","x3")}})
                for k in range(19):tracked.pop("x"+str(k),None)
                continue
            if m in ("adr","adrp") and len(o)==2 and o[1].type==ARM64_OP_IMM:pending[reg(i,o[0].reg)]=o[1].imm
            elif m=="add" and len(o)==3 and o[1].type==ARM64_OP_REG:
                v=tracked.get(reg(i,o[1].reg))
                w=o[2].imm if o[2].type==ARM64_OP_IMM else tracked.get(reg(i,o[2].reg)) if o[2].type==ARM64_OP_REG else None
                if v is not None and w is not None:pending[reg(i,o[0].reg)]=v+(w<<o[2].shift.value)
            elif m=="mov" and len(o)==2:
                v=o[1].imm if o[1].type==ARM64_OP_IMM else tracked.get(reg(i,o[1].reg)) if o[1].type==ARM64_OP_REG else None
                if v is not None:pending[reg(i,o[0].reg)]=v
            elif m in ("movz","movk") and len(o)==2 and o[1].type==ARM64_OP_IMM:
                k=reg(i,o[0].reg);s=o[1].shift.value;v=o[1].imm<<s
                if m=="movz":pending[k]=v
                elif k in tracked:pending[k]=(tracked[k]&~(0xffff<<s))|v
            elif m in ("ldr","ldur","ldp","str","stur","stp") and not i.writeback:
                for oi,x in enumerate(o):
                    if x.type!=ARM64_OP_MEM or x.mem.index:continue
                    base=tracked.get(reg(i,x.mem.base));num=2 if m in ("ldp","stp") else 1
                    width=8 if i.reg_name(o[0].reg).startswith("x") else 4
                    for k in range(num):
                        dest=base+x.mem.disp+k*width if base is not None else None
                        if m.startswith("ld") and dest is not None:
                            v=ptr(dest) if width==8 else None
                            if v is None and read(dest,width) is not None:v=u(dest,width)
                            if v is not None:pending[reg(i,o[k].reg)]=v
                        if m.startswith("st"):
                            value=tracked.get(reg(i,o[k].reg))
                            stores.append({**row(i),"dest":h(dest),"dest_ghidra":gh(dest),"base_reg":reg(i,x.mem.base),
                                "offset":x.mem.disp+k*width,"width":width,"value":h(value),"value_ghidra":gh(value) if width==8 and value is not None and im.region(value,1)!="unmapped" else None})
            try:
                _,wr=i.regs_access()
                for rr in wr:tracked.pop(reg(i,rr),None)
            except Exception:tracked.clear()
            tracked.update(pending)
            for k,v in pending.items():
                if ptr(v) is not None or im.exec(v):
                    addresses.append({**row(i),"register":k,"value":h(v),"value_ghidra":gh(v)})
        return {"stores":stores,"calls":calls,"addresses":addresses}
    # Exact contiguous factory records: every +8 slot has RELR -> executable, first word raw hash.
    def valid(a):return relocs.get(a+8,{}).get("table")=="RELR" and im.exec(ptr(a+8)) and read(a,16) is not None
    results={}
    for name,(hashval,a,ctor,kind) in TARGETS.items():
        assert u(a,4)==hashval and valid(a) and ptr(a+8)==ctor
        lo=a;hi=a+16
        while valid(lo-16):lo-=16
        while valid(hi):hi+=16
        nextcode=ptr(a+24)
        n=min(0x300,nextcode-ctor) if nextcode is not None and nextcode>ctor else 0x180
        tr=trace(ctor,n)
        vtables=[]
        # A store of an address with relocated executable slots at +0 and dispatch slots.
        for st in tr["stores"]:
            if st["offset"]!=0 or st["width"]!=8 or not st["value"]:continue
            v=int(st["value"],16);slots=table(v)
            dispatch=[0x30] if kind=="query" else [0x40,0x58]
            if slots[0]["executable"] and all(im.exec(ptr(v+d)) for d in dispatch):
                vtables.append({"store":st,"vtable_va":h(v),"vtable_ghidra":gh(v),"slots":slots,
                     "dispatch_candidates":[{"offset":d,"target":h(ptr(v+d)),"target_ghidra":gh(ptr(v+d)),"export":export(ptr(v+d))} for d in dispatch]})
        # Record callback machine code and direct calls, never infer actual gameplay from them.
        for vt in vtables:
            for cb in vt["dispatch_candidates"]:
                v=int(cb["target"],16);length=4 if insns(v,4)[0].mnemonic=="ret" else 0x380 if kind=="query" else 0x180
                cb["instructions"]=[row(i) for i in insns(v,length)];cb["trace"]=trace(v,length)
        results[name]={"hash":f"{hashval:08X}","kind":kind,"record_va":h(a),"record_ghidra":gh(a),"raw_record":raw(a,16).hex(),
            "constructor_va":h(ctor),"constructor_ghidra":gh(ctor),"constructor_export":export(ctor),
            "record_run_start":h(lo),"record_run_end_exclusive":h(hi),"record_run_count":(hi-lo)//16,
            "constructor_window_bytes":n,"instructions":[row(i) for i in insns(ctor,n)],"trace":tr,"vtable_store_candidates":vtables,
            "runtime_callback_verified":False}
    # All eight writes are in a compact code region. Preserve instructions and trace independently.
    writer_start=0x6bb680;writer_end=0x6bb8c0
    # Search slightly earlier for a conventional prologue. Treat as candidate only.
    prologues=[row(i) for i in insns(writer_start-0x300,0x300) if i.mnemonic=="stp" and "x29, x30, [sp" in i.op_str]
    tr=trace(writer_start-0x80,writer_end-writer_start+0x80)
    instructions={i.address:i for i in insns(writer_start,writer_end-writer_start)}
    writes=[]
    for a,d in WRITES.items():
        i=instructions[a];assert i.mnemonic.startswith("st")
        matches=[s for s in tr["stores"] if s["va"]==h(a) and s["dest"]==h(d)]
        writes.append({"instruction":row(i),"expected_target":gh(d),"trace_matches":matches})
    # The writer specifies exact arrays, not the neighboring overrun candidates.
    def store_value(site,dest):
        found=[x for x in tr["stores"] if x["va"]==h(site) and x["dest"]==h(dest) and x["value"] is not None]
        assert len(found)==1,(site,dest,found)
        return int(found[0]["value"],16)
    registry={};categories={}
    for kind,sites,dests in [("action",(0x6bb6c4,0x6bb6e8,0x6bb784,0x6bb788),(0x4b8ded8,0x4b8dee0,0x4b8dfd8,0x4b8dfe0)),("query",(0x6bb798,0x6bb7a4,0x6bb838,0x6bb83c),(0x4b8dee8,0x4b8def0,0x4b8dfe8,0x4b8dff0))]:
        count,start,cat_count,counts_ptr=[store_value(a,d) for a,d in zip(sites,dests)]
        assert (count,cat_count)==((1255,7) if kind=="action" else (959,7))
        cat_base=0x4b8def8 if kind=="action" else 0x4b8df68
        cats=[]
        for k in range(cat_count):
            nrows=[x for x in tr["stores"] if x["dest"]==h(cat_base+16*k) and x["value"] is not None]
            prows=[x for x in tr["stores"] if x["dest"]==h(cat_base+16*k+8) and x["value"] is not None]
            assert nrows and prows,(kind,k)
            n=int(nrows[-1]["value"],16);p=int(prows[-1]["value"],16)
            inds=list(struct.unpack("<"+"I"*n,raw(p,4*n)))
            assert all(v<count for v in inds)
            cats.append({"category":k,"count":n,"index_array_rva":h(p),"indices":inds})
        categories[kind]={"count":count,"start_rva":h(start),"category_counts_raw":list(struct.unpack("<7I",raw(counts_ptr,28))),"categories":cats}
        entries=[]
        for idx in range(count):
            a=start+idx*16
            assert valid(a),(kind,idx)
            v=ptr(a+8);nxt=ptr(a+24) if idx+1<count else None
            size=min(0x300,nxt-v) if nxt is not None and nxt>v else 0x180
            trace_result=trace(v,size)
            cands=[]
            for st in trace_result["stores"]:
                if st["offset"]!=0 or st["width"]!=8 or st["base_reg"]!="x0" or not st["value"]:continue
                vt=int(st["value"],16);dispatch=[0x30] if kind=="query" else [0x40,0x58]
                if im.exec(ptr(vt)) and all(im.exec(ptr(vt+d)) for d in dispatch):
                    cands.append({"vtable_ghidra":gh(vt),"store":st["ghidra_va"],"dispatch_slots":{hex(d):gh(ptr(vt+d)) for d in dispatch}})
            entries.append({"index":idx,"hash":f"{u(a,4):08X}","record_rva":h(a),"constructor_ghidra":gh(v),"categories":[c["category"] for c in cats if idx in c["indices"]],"vtable_candidates":cands})
        registry[kind]=entries
    # Full contiguous code-pointer groups and conservative ABI header classification.
    execslots=sorted(a for a in relocs if im.exec(ptr(a)))
    groups=[];group=[]
    def flush():
        if len(group)<3:return
        a=group[0];top=u(a-16,8);rtti=ptr(a-8)
        signed=top-(1<<64) if top is not None and top>=1<<63 else top
        abi= signed is not None and -0x100000<signed<=0 and (rtti is not None or u(a-8,8)==0)
        groups.append({"start":a,"end_exclusive":group[-1]+8,"slots":len(group),
            "offset_to_top_candidate":signed if abi else None,"rtti_candidate":rtti if abi else None,
            "classification":"abi_header_candidate" if abi else "unclassified_code_pointer_run"})
    for a in execslots:
        if group and a!=group[-1]+8:flush();group=[]
        group.append(a)
    flush();assert len(groups)==20590
    # Match state name hashes as the first word of the proved 16-byte record pattern only.
    states=[]
    for key in MISSING:
        val=r95.murmur3(key);needle=struct.pack("<I",val);hits=[]
        for va,data in mapped[1:]:
            pos=0
            while True:
                pos=data.find(needle,pos)
                if pos<0:break
                a=va+pos;pos+=1
                if a%8==0 and valid(a):hits.append({"record_va":h(a),"pointer":h(ptr(a+8))})
        states.append({"key":key,"murmur3":f"{val:08X}","factory_pattern_matches":hits,"scope_dataflow_verified":False})
    r96.write(out/"factory_registry_2214.json",registry)
    r96.write(out/"factory_categories.json",categories)
    r96.write(out/"factory_records.json",results)
    r96.write(out/"writer_review.json",{"instructions":[row(i) for i in instructions.values()],"prologue_candidates":prologues,"writes":writes,"trace":tr,"function_boundary_verified":False})
    r96.write(out/"pointer_run_classification.json",groups)
    r96.write(out/"remaining_28.json",states)
    report={"source_sha":dec.SOURCE_SHA,"records_verified":len(results),"factory_registry_counts":{k:len(v) for k,v in registry.items()},"registry_with_vtable_candidates":{k:sum(bool(x["vtable_candidates"]) for x in v) for k,v in registry.items()},"category_record_counts":{k:[x["count"] for x in v["categories"]] for k,v in categories.items()},"record_summary":{k:{x:v[x] for x in ("record_va","constructor_ghidra","record_run_start","record_run_end_exclusive","record_run_count")} | {"vtable_candidates":[{"vtable":t["vtable_ghidra"],"store":t["store"]["ghidra_va"],"dispatch":[{q:c[q] for q in ("offset","target_ghidra","export")} for c in t["dispatch_candidates"]]} for t in v["vtable_store_candidates"]]} for k,v in results.items()},
        "writer_instructions":8,"writer_trace_confirmed":sum(bool(w["trace_matches"]) for w in writes),
        "writer_store_details":[{"site":w["instruction"]["ghidra_va"],"target":w["expected_target"],"value_candidates":[s["value_ghidra"] or s["value"] for s in w["trace_matches"]]} for w in writes],
        "pointer_runs":len(groups),"classification":dict(collections.Counter(g["classification"] for g in groups)),
        "remaining_28_pattern_matches":sum(bool(x["factory_pattern_matches"]) for x in states),
        "callbacks_runtime_verified":False,"real_save_verified":False,"photo_probability":None,"ghidra_gui_verified":False}
    r96.write(out/"report.json",report);print(json.dumps(report,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
