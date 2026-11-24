#!/usr/bin/env python3
"""R96 authenticated ELF table extraction, callbacks and original flow arithmetic evidence."""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from collections import Counter
import acnh303_r95_native_eventflags as r95
from acnh303_round11_elf_xref import parse_elf,get_bytes_va,survey,locate_xrefs,adrp_target,adr_target,add_imm
BASE=Path("derived/3.0.3/npc_event_flags")
CROOT=Path("derived/3.0.3/ghidra12.2/c")
FLOW=Path("UnPack/1/EventFlow")
ELF=Path("e10617820db06889e1638499478da0de_NCA/0/main.elf")
SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
def write(p,o): p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    rows=r95.read(root/BASE/"integrated/eventflag_definitions_371.json")
    e=r95.read(root/BASE/"r96/evidence.json")
    anchors=[]
    for rel,role,needles in e["native_sources"]:
        p=root/CROOT/(rel+".c"); s=p.read_text(encoding="utf-8")
        if not all(x in s for x in needles): raise ValueError("Evidence drift: "+rel)
        anchors.append({"file":p.relative_to(root).as_posix(),"role":role,"sha256":hashlib.sha256(p.read_bytes()).hexdigest(),
                        "anchors":needles})
    b=(root/ELF).read_bytes()
    if hashlib.sha256(b).hexdigest()!=SHA: raise ValueError("Ghidra source ELF SHA mismatch")
    seg=parse_elf(b)
    summary=r95.read(root/"derived/3.0.3/ghidra12.2/ndjson/batch-00000000/export-summary.json")
    image_base=int(summary["image_base"],16)
    elf_base=min(x["vaddr"] for x in seg)&~0xfff
    slide=image_base-elf_base
    table_va=0x04179ca0-slide
    function_va=0x021d7650-slide
    raw=get_bytes_va(b,seg,table_va,24)
    if raw is None: raise ValueError("Table not file backed")
    window=get_bytes_va(b,seg,function_va,0x380)
    if window is None: raise ValueError("Function window not mapped")
    refs=[]
    for i in range(0,len(window)-4,4):
        pc=function_va+i; word=struct.unpack_from("<I",window,i)[0]
        if adr_target(word,pc)==table_va: refs.append({"pc":hex(pc),"pattern":"ADR"})
        page=adrp_target(word,pc)
        if page!=table_va&~0xfff: continue
        for j in range(i+4,min(i+44,len(window)),4):
            add=add_imm(struct.unpack_from("<I",window,j)[0])
            if add and add["rn"]==word&31 and page+add["imm"]==table_va:
                refs.append({"pc":hex(pc),"add_pc":hex(function_va+j),"pattern":"ADRP_ADD_CANDIDATE"})
                break
    values=list(struct.unpack("<6I",raw))
    table={"ghidra_va":"0x04179ca0","ghidra_image_base":hex(image_base),"elf_image_base":hex(elf_base),
           "elf_va":hex(table_va),"raw_hex":raw.hex(),"u32_le_values":values,
           "function_ghidra_va":"0x021d7650","function_elf_va":hex(function_va),
           "address_formation_candidates":refs,"byte_extraction_verified":True,
           "range_plausible":all(x<=255 for x in values),
           "interpretation":"only source function level-drop branch; no runtime test"}
    # Preserve actual EventFlow action parameters, plus graph context for friendship and recruitment.
    actions=[]; queries=[]; flow_count=0
    for p in sorted((root/FLOW).rglob("*.json")):
        j=r95.read(p); g=j.get("graph") if isinstance(j,dict) else None
        if not isinstance(g,dict): continue
        flow_count+=1
        for ev in g.get("events",[]):
            op=ev.get("action") or ev.get("query") or ""
            item={"file":p.relative_to(root).as_posix(),"event":ev}
            if op=="EventFlowActionNpcAddFriendship" or re.search("Npc.*(Reward|Present|Gift)",op) and ev.get("action"):
                actions.append(item)
            if op in ("EventFlowQueryNpcInviteCheck","EventFlowQueryIsCollaboNpc"):
                queries.append(item)
    # Recompute R95 baseline, then look for exact string bytes in authenticated ELF.
    r95e=r95.read(root/BASE/"r95/native_evidence.json")
    literals,numeric,cols,candidates,_,n,_=r95.refs(root,r95e,rows)
    flow,*_=r95.flow_scan(root,rows)
    missing=[r for r in rows if not literals[r["key"]] and not flow[(r["scope"],r["key"])] and not numeric[r["key"]]]
    if len(missing)!=62: raise ValueError("R95 unresolved baseline changed")
    terms=sorted({r["key"] for r in missing}|{"EventFlowQueryNpcInviteCheck","EventFlowQueryIsCollaboNpc","NpcInviteCheck","IsCollaboNpc",
                 "EventFlowActionNpcAddFriendship","NpcAddFriendship","EventFlowActionNpcDecideGeneralQuestReward"})
    hits=survey(b,seg,terms)
    for term,d in hits.items():
        d["locations"]=[x for x in d["locations"] if x["has_null_suffix"] and
                        (get_bytes_va(b,seg,x["vaddr"]-1,1) in (None,b"\0"))]
    xrefs,adrps=locate_xrefs(b,seg,hits)
    refsout={t:{"literal_locations":hits[t]["locations"],"code_address_candidates":xrefs.get(t,[]),
                "native_callback_verified":False} for t in terms}
    flags=[r["key"] for r in rows if r["raw_fields"].get("hash_BED25A86")=="1"]
    if len(flags)!=11: raise ValueError("BED25A86 selection mismatch")
    report={"source_elf_sha256":SHA,"ghidra_image_base":hex(image_base),"elf_base":hex(elf_base),
            "table":table,"bed25a86_native_consumers":3,"bed25a86_npc_memory_keys":flags,
            "source_anchors_verified":len(anchors),"eventflow_graphs_seen":flow_count,
            "friendship_reward_action_nodes":len(actions),"friendship_add_nodes":sum(x["event"].get("action")=="EventFlowActionNpcAddFriendship" for x in actions),
            "friendship_constant_delta_counts":dict(Counter(str(x["event"].get("params",{}).get("AddValue")) for x in actions if x["event"].get("action")=="EventFlowActionNpcAddFriendship")),
            "recruitment_query_nodes":len(queries),
            "callback_names":{t:{"literal_count":len(hits[t]["locations"]),"xref_candidates":len(xrefs.get(t,[]))} for t in ("EventFlowQueryNpcInviteCheck","EventFlowQueryIsCollaboNpc","NpcInviteCheck","IsCollaboNpc")},
            "prior_unresolved":len(missing),"prior_unresolved_elf_literals":sum(bool(hits[r["key"]]["locations"]) for r in missing),
            "prior_unresolved_elf_code_candidates":sum(bool(xrefs.get(r["key"])) for r in missing),
            "native_callbacks_proven":False,"gift_formula_verified":False,"real_save_verified":False}
    write(out/"report.json",report);write(out/"native_evidence.json",{**e,"verified_source_anchors":anchors})
    write(out/"elf_reference_candidates.json",refsout);write(out/"friendship_reward_and_recruitment_events.json",{"actions":actions,"queries":queries})
    write(out/"unresolved_62.json",[{**r,"elf_reference":refsout[r["key"]]} for r in missing])
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
