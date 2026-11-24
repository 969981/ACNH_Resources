#!/usr/bin/env python3
"""R98: verify receptor factories, raw ELF availability, and graph-level state machine."""
import argparse,hashlib,json,struct
from pathlib import Path
from collections import Counter
import acnh303_r95_native_eventflags as r95
import acnh303_r96_native_tables as r96
from acnh303_round11_elf_xref import get_bytes_va,adrp_target,adr_target,add_imm,ldr_uimm
BASE=r96.BASE
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    e=r95.read(root/BASE/"r98/evidence.json")
    anchors=[]
    for rel,need in e["anchors"]:
        p=root/r96.CROOT/(rel+".c");s=p.read_text(encoding="utf-8")
        if not all(x in s for x in need):raise ValueError("Source anchor mismatch "+rel)
        anchors.append({"file":p.relative_to(root).as_posix(),"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),"anchors":need})
    for target in e["targets"]:
        if f"{r95.murmur3(target['name']):08X}"!=target["hash"]:raise ValueError("Hash mismatch")
    blob=(root/r96.ELF).read_bytes()
    if hashlib.sha256(blob).hexdigest()!=r96.SHA:raise ValueError("ELF hash mismatch")
    seg=r96.parse_elf(blob);slide=0x100000-(min(x["vaddr"] for x in seg)&~0xfff)
    def raw(gh,n): return get_bytes_va(blob,seg,gh-slide,n)
    def executable(v):return any(s["flags"]&1 and s["vaddr"]<=v<s["vaddr"]+s["filesz"] for s in seg)
    globals={}
    candidates=[]
    for kind in ("action","query"):
        d=e["receptor"][kind]
        count_raw=raw(d["factory_count_global"],4);ptr_raw=raw(d["factory_pointer_global"],8)
        count=int.from_bytes(count_raw,"little") if count_raw is not None else None
        pointer=int.from_bytes(ptr_raw,"little") if ptr_raw is not None else None
        globals[kind]={"count_ghidra_va":hex(d["factory_count_global"]),"pointer_ghidra_va":hex(d["factory_pointer_global"]),
                       "count_raw":count,"pointer_raw":hex(pointer) if pointer is not None else None,
                       "category_index_raw":(raw(d["category_index_base"],0x70) or b"").hex(),
                       "static_table_available":False}
        # A pointer in reconstructed ELF is not automatically relocated: test both known coordinate systems.
        if count and count<=65536 and pointer:
            for mode,va in (("ELF_VA",pointer),("GHIDRA_VA",pointer-slide)):
                table=get_bytes_va(blob,seg,va,count*16)
                if table is None:continue
                records=[]
                for i in range(count):
                    word,pad,fn=struct.unpack_from("<IIQ",table,16*i)
                    if executable(fn) or executable(fn-slide):
                        records.append({"index":i,"word0":f"{word:08X}","padding_raw":pad,"constructor_raw":hex(fn)})
                globals[kind].update(static_table_available=True,pointer_interpretation=mode,records_with_executable_pointer=records)
                for target in e["targets"]:
                    if target["kind"]==kind:
                        for r in records:
                            if r["word0"]==target["hash"]:candidates.append({"target":target,"record":r,"status":"factory_word_match_not_callback"})
                break
    # Address formation evidence for global addresses; scan mapped executable instructions.
    # Only nearby same-register ADRP/ADD or ADRP/LDR is admitted; never call a reference a writer.
    targets={e["receptor"][k][f]-slide:(k,f) for k in ("action","query") for f in ("factory_count_global","factory_pointer_global","category_index_base")}
    pages={v&~4095 for v in targets};xref=[]
    for s in seg:
        if not s["flags"]&1:continue
        start=s["file_offset"];end=start+s["filesz"];view=memoryview(blob)[start:end-(end-start)%4]
        for i,(w,) in enumerate(struct.iter_unpack("<I",view)):
            pc=s["vaddr"]+4*i
            page=adrp_target(w,pc)
            if page not in pages:continue
            rd=w&31
            for j in range(i+1,min(i+7,len(view)//4)):
                word=struct.unpack_from("<I",view,4*j)[0]
                add=add_imm(word);ldr=ldr_uimm(word)
                for op,decoded in (("ADD",add),("LDR",ldr)):
                    if decoded and decoded["rn"]==rd and page+decoded["imm"] in targets:
                        v=page+decoded["imm"];xref.append({"site":hex(pc),"use":hex(s["vaddr"]+4*j),"operation":op,"target":hex(v),"field":targets[v],"status":"address_formation_candidate"})
    # Maintain exact graph and explicit case values, no Boolean assumptions.
    graphs={};rewards=[];checks=[]
    bind=r95.read(root/r96.FLOW/"Info/BindInfo.json")["tree"]["root"]
    actions={x["Key"]:x["Value"] for x in bind["ActionBindData"]}
    for p in sorted((root/r96.FLOW).rglob("*.json")):
        j=r95.read(p);g=j.get("graph") if isinstance(j,dict) else None
        if not isinstance(g,dict):continue
        for ev in g.get("events",[]):
            op=ev.get("action","")
            if actions.get(op,op)=="EventFlowActionNpcDecideQuestReward":
                rewards.append({"file":p.relative_to(root).as_posix(),"event":ev,"canonical_action":actions.get(op,op)})
        if p.stem in ("NNPC_Reaction_Moving","NNPC_Spot_Camp_Invite","Obj_RcoMachine_AmiiboCall","System_WherearenNPCMoveMode_Amiibo","NNPC_Select_Present","NNPC_Select_Sell_Gift","NNPC_GEvent_BirthdayN_H","NNPC_Quest_AllReward"):
            graphs[p.stem]={"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),"entrypoints":g["entrypoints"],"events":g["events"]}
    for n,g in graphs.items():
        ids={ev["index"] for ev in g["events"]}
        for ev in g["events"]:
            dest=[c["target"] for c in ev.get("cases",[]) if c.get("target") is not None]
            if ev.get("next") is not None:dest.append(ev["next"])
            if not all(d in ids for d in dest):raise ValueError("Dangling graph node "+n)
    m={ev["index"]:ev for ev in graphs["NNPC_Reaction_Moving"]["events"]}
    for i,v,expected in [(35,4,54),(35,0,112),(112,0,109),(112,1,90),(90,0,99),(97,1,96),(96,1,50),(99,1,37)]:
        if not any(c["value"]==v and c["target"]==expected for c in m[i]["cases"]):raise ValueError("Moving graph drift")
        checks.append([i,v,expected])
    spans=[i for r in e["tail"] for i in range(r["offset"],r["offset"]+r["size"])]
    if spans!=list(range(0x138,0x158)):raise ValueError("Tail byte coverage invalid")
    report={"native_anchors_verified":len(anchors),"factory_globals":globals,"factory_hash_candidates":candidates,
            "factory_global_xrefs":len(xref),"reward_action_nodes":len(rewards),"reward_parameter_pairs":dict(Counter(str([r["event"]["params"].get("RewardType"),r["event"]["params"].get("RewardTypeSub")]) for r in rewards)),
            "graph_count":len(graphs),"moving_edges_verified":len(checks),"tail_bytes_accounted":len(spans),
            "target_callbacks_verified":False,"real_save_verified":False,"photo_probability_verified":False}
    r96.write(out/"report.json",report);r96.write(out/"native_evidence.json",{**e,"verified_anchors":anchors})
    r96.write(out/"factory_global_xrefs.json",xref);r96.write(out/"reward_action_nodes.json",rewards)
    r96.write(out/"recruitment_gift_graphs.json",graphs)
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
