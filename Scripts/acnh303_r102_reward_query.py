#!/usr/bin/env python3
"""R102: original callback control flow, EventFlow names and reward gate evidence."""
import argparse,collections,hashlib,json,re,struct,zlib,csv
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM,ARM64_OP_REG,ARM64_OP_MEM
import acnh303_r101_factory_records as r101
import acnh303_r100_nso_decode as dec
import acnh303_r99_relocation as r99
import acnh303_r96_native_tables as r96
import acnh303_r95_native_eventflags as r95
from acnh303_round11_elf_xref import adrp_target,adr_target
S=0x100000
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    prior=out/"r101";r101.main(root,prior)
    registry=r95.read(prior/"factory_registry_2214.json")
    records=r95.read(prior/"factory_records.json")
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    im=r99.Image(elf);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def hx(v):return hex(v) if v is not None else None
    def ptr(v):
        rr=relocs.get(v,{})
        return rr.get("addend") if rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 else None
    def text_at(v):
        for va,b in mapped:
            if va<=v<va+len(b):
                end=b.find(b"\0",v-va,min(len(b),v-va+256))
                if end>=0:return b[v-va:end].decode("ascii","replace")
        return None
    def ins(v,n):return list(cs.disasm(raw(v,n),v))
    def ir(i):return {"rva":hx(i.address),"ghidra":hx(i.address+S),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    # Exact branch table: decode original byte offsets, not guess case ordering.
    switches={}
    for name,table,base,n,br in [
        ("IsCollaboNpc",0x406a1d8,0xdffa1c,4,0xdffa18),
        ("RewardType",0x40687b3,0xaab364,5,0xaab360)]:
        assert ins(br,4)[0].mnemonic=="br"
        values=list(raw(table,n));targets=[base+4*v for v in values]
        switches[name]={"table_rva":hx(table),"raw":values,"branch_rva":hx(br),"cases":{str(i):hx(v+S) for i,v in enumerate(targets)}}
    # Walk direct control-flow paths, include explicitly decoded indirect tables.
    # Other indirect branch targets remain unresolved; do not fall through BR.
    callback_specs=[("NpcInviteCheck",0xf25370,0xf25558),("IsCollaboNpc",0xeff7e8,0xeffa94),("NpcDecideQuestReward",0xbab2f0,0xbac200)]
    cfs={}
    for name,gh,upper in callback_specs:
        lo,hi=gh-S,upper-S
        known={}
        if name=="IsCollaboNpc":known[0xdffa18]=[int(x,16)-S for x in switches[name]["cases"].values()]
        if name=="NpcDecideQuestReward":known[0xaab360]=[int(x,16)-S for x in switches["RewardType"]["cases"].values()]
        todo=[lo];seen={};edges=[];calls=[];unknown=[];outside=[]
        while todo:
            v=todo.pop()
            if v in seen:continue
            if not lo<=v<hi or v%4:outside.append(hx(v+S));continue
            ii=ins(v,4)
            if not ii:unknown.append({"site":hx(v+S),"reason":"decode_failure"});continue
            i=ii[0];seen[v]=ir(i);m=i.mnemonic;o=i.operands
            target=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            succ=[]
            if m=="ret":pass
            elif m=="br":
                succ=known.get(v,[])
                if not succ:unknown.append({"site":hx(v+S),"op":i.op_str,"reason":"unresolved_indirect_branch"})
            elif m=="b":succ=[target] if target is not None else []
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[v+4,target] if target is not None else [v+4]
            else:
                succ=[v+4]
                if m in ("bl","blr"):calls.append({"site":hx(v+S),"target":hx(target+S) if m=="bl" and target is not None else None,"instruction":i.op_str})
            for t in succ:
                edges.append([hx(v+S),hx(t+S)]);todo.append(t)
        cfs[name]={"entry":hx(gh),"bounded_upper":hx(upper),"reachable_instructions":[seen[v] for v in sorted(seen)],"edges":edges,"calls":calls,"unresolved_indirect_branches":unknown,"outside_bound":sorted(set(outside)),"complete_direct_cfg":not unknown and not outside}
    # Verify constructor parameter-name literals and actual source keys in the authenticated NSO.
    strings={hx(v+S):text_at(v) for v in [0x3fee8f8,0x3fbfa0c,0x3f97a2e,0x3f962f1,0x48680b0,0x48680b7,0x48680c0,0x48680c9]}
    source_anchors={
    "fb/0070fb10":["uVar6 = (**(code **)(*plVar11 + 0x30))","return uVar6;"],
    "9b/02209b90":["0x1c57897d","if (uVar3 < 4)"],
    "ab/00baab34":["switch(*(undefined4 *)(param_2 + 0x110))","\"Friendship\"","if (4 < uVar7)","FUN_021f5c40","FUN_01a45058","FUN_00bab1f0","< 0x5a","FUN_00baab34(&local_70,param_2)"],
    "5c/021f5c40":["0x71bf253b","FUN_0277d4ac"],
    "5d/02845d90":["local_78 = (uint *)0x4097a2e","iVar3 = FUN_02746c30(param_3,param_4,&local_80)","if (iVar3 == 0)","local_78 = (uint *)0x40962f1","FUN_021f5c40","FUN_01a45058"],
    "50/01a45058":["FUN_0277d6c4","| 1 <<"],
    "b1/00bab1f0":["0x754"],
    "87/027a87a4":["BromideRewardSkipCount","0xffffffff"],
    "5d/027b5d00":["BromideRewardSkipCount","0xffffffff"],
    "76/026b7690":["BromideRewardSkipCount","FUN_02747170(pbVar8 + 0x38,&local_98,10)"],
    "91/00ba91e0":["switch(local_98)","param_2 + 0x110"]}
    anchors=[]
    for p,need in source_anchors.items():
        f=root/r96.CROOT/(p+".c");s=f.read_text("utf-8")
        assert all(x in s for x in need),(p,[x for x in need if x not in s])
        anchors.append({"path":f.relative_to(root).as_posix(),"sha256":hashlib.sha256(f.read_bytes()).hexdigest(),"anchors":need})
    # Preserve actual binding aliases, with duplicate/collision checks.
    bind=r95.read(root/r96.FLOW/"Info/BindInfo.json")["tree"]["root"]
    aliases={}
    for kind,k in [("action","ActionBindData"),("query","QueryBindData")]:
        a=collections.defaultdict(set)
        for x in bind[k]:a[x["Key"]].add(x["Value"])
        aliases[kind]={k:sorted(v) for k,v in a.items()}
    lookup={}
    for kind,rows in registry.items():
        h=collections.defaultdict(list)
        for x in rows:h[x["hash"]].append(x)
        lookup[kind]=h
    names=collections.defaultdict(lambda:{"actors":set(),"declared_files":set(),"node_count":0})
    reward_nodes=[];invite_nodes=[];graphs=0
    for p in sorted((root/r96.FLOW).rglob("*.json")):
        obj=r95.read(p);g=obj.get("graph") if isinstance(obj,dict) else None
        if not isinstance(g,dict):continue
        graphs+=1;path=p.relative_to(root).as_posix()
        for actor in g.get("actors",[]):
            for kind in ("action","query"):
                for n in actor.get(kind+"s",[]):
                    x=names[(kind,n)];x["actors"].add(actor.get("identifier",""));x["declared_files"].add(path)
        for ev in g.get("events",[]):
            for kind in ("action","query"):
                n=ev.get(kind)
                if not isinstance(n,str):continue
                x=names[(kind,n)];x["actors"].add(ev.get("actor",""));x["node_count"]+=1
                if kind=="action" and aliases[kind].get(n,[n])==["EventFlowActionNpcDecideQuestReward"]:
                    reward_nodes.append({"file":path,"event":ev})
                if n in ("EventFlowQueryNpcInviteCheck","EventFlowQueryIsCollaboNpc"):
                    invite_nodes.append({"file":path,"event":ev})
    mapped_names=[];matched_regs=collections.defaultdict(set)
    for (kind,name),x in sorted(names.items()):
        canon=aliases[kind].get(name,[name]);matches=[]
        for n in canon:
            h=f"{r95.murmur3(n):08X}"
            for row in lookup[kind].get(h,[]):matches.append({"canonical":n,"hash":h,"index":row["index"],"constructor":row["constructor_ghidra"],"vtable_candidates":row["vtable_candidates"]})
        status="unique_registry_hash_match" if len(matches)==1 and len(canon)==1 else "ambiguous" if matches else "unmatched"
        if status=="unique_registry_hash_match":matched_regs[kind].add(matches[0]["index"])
        mapped_names.append({"kind":kind,"name":name,"aliases":canon,"status":status,"matches":matches,"actors":sorted(x["actors"]),"declared_files":sorted(x["declared_files"]),"node_count":x["node_count"]})
    pairs=collections.defaultdict(list)
    for r in reward_nodes:
        ev=r["event"];p=ev.get("params",{})
        pairs[(str(p.get("RewardType")),str(p.get("RewardTypeSub")))].append({"file":r["file"],"index":ev["index"],"action":ev["action"]})
    # For unresolved constructor entries, search for stores through a non-x0 register;
    # only count a candidate when the same base register also receives hash at +0x10.
    def rn(i,r):
        n=i.reg_name(r);return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    unresolved=[];new=[]
    for kind,rows in registry.items():
        for idx,r in enumerate(rows):
            if r["vtable_candidates"]:continue
            v=int(r["constructor_ghidra"],16)-S;nxt=int(rows[idx+1]["constructor_ghidra"],16)-S if idx+1<len(rows) else v+0x180
            size=min(0x500,nxt-v) if nxt>v else 0x180
            regs={};stores=[];hashbases=set()
            for i in ins(v,size):
                m=i.mnemonic;o=i.operands;pending={}
                if m=="ret":break
                if m in ("bl","blr","b","br","cbz","cbnz","tbz","tbnz") or m.startswith("b."):
                    regs.clear();continue
                if m in ("adr","adrp") and len(o)==2 and o[1].type==ARM64_OP_IMM:pending[rn(i,o[0].reg)]=o[1].imm
                elif m=="add" and len(o)==3 and o[2].type==ARM64_OP_IMM:
                    b=regs.get(rn(i,o[1].reg))
                    if b is not None:pending[rn(i,o[0].reg)]=b+(o[2].imm<<o[2].shift.value)
                elif m=="mov" and len(o)==2 and o[1].type==ARM64_OP_REG:
                    b=regs.get(rn(i,o[1].reg))
                    if b is not None:pending[rn(i,o[0].reg)]=b
                elif m=="ldr" and len(o)==2 and o[1].type==ARM64_OP_MEM and not i.writeback and not o[1].mem.index:
                    b=regs.get(rn(i,o[1].mem.base))
                    if b is not None:
                        t=ptr(b+o[1].mem.disp)
                        if t is not None:pending[rn(i,o[0].reg)]=t
                elif m=="str" and len(o)==2 and o[1].type==ARM64_OP_MEM and not i.writeback and not o[1].mem.index:
                    b=rn(i,o[1].mem.base);off=o[1].mem.disp;src=i.reg_name(o[0].reg)
                    if b!="sp" and off==0x10 and src.startswith("w"):hashbases.add(b)
                    t=regs.get(rn(i,o[0].reg));slots=[0x30] if kind=="query" else [0x40,0x58]
                    if b!="sp" and off==0 and src.startswith("x") and t is not None and im.exec(ptr(t)) and all(im.exec(ptr(t+d)) for d in slots):
                        stores.append({"site":hx(i.address+S),"base_register":b,"vtable":hx(t+S),"slots":{hex(d):hx(ptr(t+d)+S) for d in slots}})
                try:
                    _,wr=i.regs_access()
                    for rr in wr:regs.pop(rn(i,rr),None)
                except Exception:regs.clear()
                regs.update(pending)
            candidates=[x for x in stores if x["base_register"] in hashbases]
            result={"kind":kind,"index":r["index"],"hash":r["hash"],"constructor":r["constructor_ghidra"],"same_base_store_candidates":candidates,"object_dataflow_proved":False}
            unresolved.append(result)
            if candidates:new.append(result)
    assert len(unresolved)==78
    # Recover suffix-merged C strings omitted by older exact-boundary scans.
    keys=[x["key"] for x in r95.read(prior/"remaining_28.json")]
    suffix={k:[] for k in keys};wanted={}
    for k in keys:
        needle=k.encode()+b"\0"
        for va,b in mapped[1:]:
            p=0
            while True:
                p=b.find(needle,p)
                if p<0:break
                addr=va+p
                suffix[k].append({"rva":hx(addr),"preceding_nul":p==0 or b[p-1]==0,"xref_candidates":[]});wanted[addr]=(k,len(suffix[k])-1);p+=1
    pages={v&~4095 for v in wanted}
    for va,b in mapped[:1]:
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[:len(b)//4*4])):
            pc=va+4*i;page=adrp_target(w,pc);direct=adr_target(w,pc)
            if direct in wanted:
                k,j=wanted[direct];suffix[k][j]["xref_candidates"].append({"site":hx(pc+S),"kind":"ADR"})
            if page not in pages:continue
            dd=ins(pc,min(24,len(b)-4*i));reg=w&31
            for x in dd[1:]:
                if x.mnemonic=="add" and len(x.operands)==3 and x.operands[2].type==ARM64_OP_IMM and x.reg_name(x.operands[1].reg)==f"x{reg}":
                    dest=page+(x.operands[2].imm<<x.operands[2].shift.value)
                    if dest in wanted:
                        k,j=wanted[dest];suffix[k][j]["xref_candidates"].append({"site":hx(pc+S),"use":hx(x.address+S),"kind":"bounded_ADRP_ADD"})
    # Field name candidates from actual NSO identifier strings; CRC match is not semantic proof.
    unknown={0x5140e4b4,0x5f77b61a,0xbed25a86,0x8d401df7};field_candidates=collections.defaultdict(list)
    corpus=set()
    for _,b in mapped[1:]:
        corpus.update(x.decode("ascii") for x in re.findall(rb"[A-Za-z_][A-Za-z0-9_]{2,79}\x00",b) if x)
    for word in sorted(corpus):
        word=word.rstrip("\0")
        for ty in (" u8"," s8"," bool"):
            v=zlib.crc32((word+ty).encode())&0xffffffff
            if v in unknown:field_candidates[f"{v:08X}"].append(word+ty)
    # Source-byte fingerprinted importer only for missing exports of the five proven chains.
    with (out/"ghidra_function_entries.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["rva","label","first16_hex"])
        for name,r in records.items():
            v=int(r["constructor_va"],16);w.writerow([hx(v),"R102_ctor_"+name,raw(v,16).hex()])
            for t in r["vtable_store_candidates"]:
                for c in t["dispatch_candidates"]:
                    if c["offset"]==0x40:continue
                    v=int(c["target"],16);w.writerow([hx(v),"R102_"+name,raw(v,16).hex()])
    for name,obj in [("callback_cfg.json",cfs),("switch_tables.json",switches),("eventflow_name_registry_map.json",mapped_names),("reward_event_matrix.json",[{"RewardType":k[0],"RewardTypeSub":k[1],"nodes":v} for k,v in sorted(pairs.items())]),("recruitment_nodes.json",invite_nodes),("remaining_78_constructor_review.json",unresolved),("remaining_28_suffix_refs.json",suffix),("source_evidence.json",{"anchors":anchors,"strings":strings,"field_crc_candidates":dict(field_candidates)})]:
        r96.write(out/name,obj)
    report={"native_source_anchors":len(anchors),"original_strings":strings,"switch_tables":switches,
      "callbacks":{k:{"instructions":len(x["reachable_instructions"]),"unresolved_indirect_branches":x["unresolved_indirect_branches"],"outside_bound":x["outside_bound"],"complete_direct_cfg":x["complete_direct_cfg"]} for k,x in cfs.items()},
      "eventflow_graphs":graphs,"distinct_eventflow_names":len(mapped_names),"name_match_status":dict(collections.Counter(x["status"] for x in mapped_names)),"registry_named":{k:len(v) for k,v in matched_regs.items()},
      "reward_nodes":len(reward_nodes),"reward_parameter_pairs":{str(k):len(v) for k,v in sorted(pairs.items())},"invite_nodes":len(invite_nodes),
      "remaining_78_new_candidates":len(new),"remaining_28_suffix_hits":sum(bool(v) for v in suffix.values()),"remaining_28_address_candidates":sum(any(x["xref_candidates"] for x in v) for v in suffix.values()),"unknown_field_crc_candidates":dict(field_candidates),
      "photo_skip_gate_string_confirmed":strings["0x4097a2e"]=="BromideRewardSkipCount" and strings["0x40962f1"]=="Friendship",
      "photo_skip_gate_scope":"FUN_02845d90 mode 0 only; not proof for FUN_00baab34 sub 2","runtime_verified":False,"real_save_verified":False,"ghidra_gui_verified":False}
    r96.write(out/"report.json",report);print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
