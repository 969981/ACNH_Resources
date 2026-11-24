#!/usr/bin/env python3
"""R103: original gift graph routes, reward-mode predicates and 417 static invite profiles."""
import argparse,collections,csv,hashlib,json,re,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
import acnh303_r102_reward_query as r102
import acnh303_r100_nso_decode as dec
import acnh303_r96_native_tables as r96
import acnh303_r95_native_eventflags as r95
import acnh303_r99_relocation as r99
S=0x100000
FLOWS=("NNPC_Select_Present","NNPC_Select_Sell_Gift","NNPC_Select_Furniture","NNPC_Select_Equipment","NNPC_Select_Etc","NNPC_Select_Creature","NNPC_Select_Tool","NNPC_GEvent_BirthdayN_H","NNPC_Quest_AllReward","NNPC_Reaction_Moving","NNPC_Spot_Camp_Invite","System_Door_Hotel")
FILTERS={0x49ff448:0x1a46128,0x49ff4e8:0x1a467a8,0x49ff6a0:0x1a47d90,0x49ff740:0x1a484d4,0x49ff718:0x1a48358,0x4a91db0:0x28589b0,0x4a91d88:0x285875c,0x4a91d38:0x285825c,0x4a91d60:0x28584ac}
ANCHORS={
"5d/02845d90":["if (local_8c == 2)","FUN_02846ba0(param_1)","if (local_8c == 1)","2999","if (local_8c != 0)","0x508","0x4097a2e","if (iVar3 == 0)","0x40962f1","FUN_021f5c40","FUN_02846910(param_1)","2000"],
"6b/02846ba0":["1999","PTR_FUN_04a91d60"],
"69/02846910":["PTR_FUN_04a91d38","local_48[0] = 3"],
"84/01a484d4":["FUN_01aed730","return iVar3 <= *(int *)(param_1 + 8);"],
"83/01a48358":["FUN_01aed730","return *(int *)(param_1 + 8) <= iVar3;"],
"d7/01aed730":["0x718b024d","iVar7 * iVar3","(iVar7 * iVar3) / 5"],
"ab/00baab34":["case 2:","\"Friendship\"","FUN_021f5c40","< 0x5a"],
"5b/010f5bb0":['DAT_050b4c10 = "EventFlowActionExitFlowchart";'],
"62/010f62f0":["DAT_050b4c10","LAB_010f64d0:","*(undefined1 *)(param_1 + 0x50) = 1;","FUN_0070f4f0"],
"66/010f6690":["DAT_050b4c10","param_1 + 0x50"],
"9b/02209b90":["0x1c57897d","if (uVar3 < 4)"]}
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    old=out/"r102";r102.main(root,old)
    registry=r95.read(old/"r101/factory_registry_2214.json")
    mapping=r95.read(old/"eventflow_name_registry_map.json")
    cfg=r95.read(old/"callback_cfg.json")
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    im=r99.Image(elf);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def hx(v):return hex(v) if v is not None else None
    def ptr(v):
        rr=relocs.get(v,{})
        return rr.get("addend") if rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 else None
    def ir(i):return {"rva":hx(i.address),"ghidra":hx(i.address+S),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def instructions(gh,size):return list(cs.disasm(raw(gh-S,size),gh-S))
    def require(gh,expected):
        i=instructions(gh,4)[0];assert i.mnemonic+" "+i.op_str==expected,(hex(gh),i.mnemonic,i.op_str,expected)
    for gh,op in {0xbab55c:"cbz w8, #0xaabc68",0xbab564:"b.eq #0xaabc94",0xbab574:"mov w1, #1",0xbabc70:"mov x1, xzr",0xbabc84:"bl #0x2745d90",0xbabc98:"mov w1, #2",0xbabcac:"bl #0x2745d90",0xbab3a4:"bl #0xaaab34",0xeffa48:"cset w0, ne",0xf25504:"mov w0, wzr",0xf2550c:"mov w0, #1"}.items():require(gh,op)
    anchors=[]
    for p,need in ANCHORS.items():
        f=root/r96.CROOT/(p+".c");s=f.read_text("utf-8")
        assert all(n in s for n in need),(p,[n for n in need if n not in s])
        anchors.append({"path":f.relative_to(root).as_posix(),"sha256":hashlib.sha256(f.read_bytes()).hexdigest(),"anchors":need})
    assert zlib.crc32(b"Price s32")&0xffffffff==0x718b024d
    filters=[]
    for slot,target in FILTERS.items():
        assert ptr(slot-S)==target-S
        filters.append({"slot_ghidra":hx(slot),"target_ghidra":hx(target),"relocation":relocs[slot-S]})
    modes=[
      {"mode":0,"type0_sub":0,"photo_gate":"SkipCount==0 && F>=150 && 100*r<4*F","photo_branch_source":"02845d90","fallback_calls":["02846910","02845b50","02845944"],"fallback_kind_ids":[2,5,7,3,79],"conditional_kind_id":80,"result_codes":{"0":"valid nonempty photo candidate","1":"fallback singleton","2":"ordinary candidate pool after minimum price filter 2000"},"price_filter":"computed Price>=2000 on final ordinary pool, not gift sale price"},
      {"mode":1,"type0_sub":1,"photo_gate":"no direct photo selection in this mode","pool_kind_ids":[2,5,7,79],"conditional_kind_id":80,"price_max":2999,"predicates":["049ff448","049ff4e8:8","049ff6a0","04a91db0","02845b50","02845944"]},
      {"mode":2,"type0_sub":2,"photo_gate":"no direct photo selection in this mode","pool_kind_ids":[2,5,7,79],"conditional_kind_id":80,"price_max":1999,"predicates":["02846ba0","04a91d60","02845b50","02845944"]}]
    # Map source field, not assume it is purchase or selling price.
    mode_data={"modes":modes,"other_mode_item_id":0x508,"price_field":{"hash":"718B024D","signature":"Price s32","function":"01AED730","computed":"base*quantity; certain special-item equality branch divides by 5","gift_price_unit_verified":False},"filter_relocations":filters,"photo_paths":[{"type":0,"sub":0,"direct_skip_gate":True,"source":"02845d90 mode0"},{"type":0,"sub":1,"direct_photo_roll":False},{"type":0,"sub":2,"direct_photo_roll":False},{"type":2,"sub":2,"direct_photo_roll":True,"direct_skip_gate":False,"indirect_skip_gate_verified":False,"source":"00baab34"}]}
    # Capture full original graph, plus reachable routes within a graph to first reward.
    graphs={}
    for name in FLOWS:
        f=root/r96.FLOW/(name+".json");g=r95.read(f)["graph"]
        graphs[name]={"source":f.relative_to(root).as_posix(),"sha256":hashlib.sha256(f.read_bytes()).hexdigest(),"graph":g}
    def node(g,i):return next(x for x in graphs[g]["graph"]["events"] if x["index"]==i)
    for g,i,k,v in [("NNPC_Select_Present",34,"Border",1000),("NNPC_Select_Present",43,"Border",1000),("NNPC_Select_Present",92,"AddValue",1),("NNPC_Select_Present",93,"AddValue",1),("NNPC_Select_Sell_Gift",0,"Border",3000),("NNPC_Select_Sell_Gift",50,"Border",3000),("NNPC_Select_Sell_Gift",42,"Percent",90),("NNPC_Select_Sell_Gift",45,"Percent",85)]:
        assert node(g,i)["params"][k]==v
    routes=[]
    g="NNPC_Select_Sell_Gift";gg=graphs[g]["graph"];idx={e["index"]:e for e in gg["events"]};entry={e["name"]:e["main_event"] for e in gg["entrypoints"]}
    def walk(i,seen,path,guards):
        if i is None or i in seen or len(path)>80:return
        e=idx[i];p=path+[i];s=seen|{i};op=e.get("action","")
        if op in ("EventFlowActionNpcDecideGeneralQuestReward","EventFlowActionNpcDecideRewardFloorWall"):
            nxt=idx.get(e.get("next"),{});routes.append({"nodes":p,"conditions":guards,"reward":e["params"],"post_reward_add":nxt.get("params",{}).get("AddValue") if nxt.get("action")=="EventFlowActionNpcAddFriendship" else None});return
        if e.get("cases"):
            for c in e["cases"]:walk(c["target"],s,p,guards+[{"node":i,"query":e["query"],"params":e["params"],"case":c["value"]}])
        elif e["type"]=="SubFlowEvent":
            if not e.get("flowchart") and e["entrypoint"] in entry and e.get("next") is None:walk(entry[e["entrypoint"]],s,p,guards)
        else:walk(e.get("next"),s,p,guards)
    for n in ("Root","Root_Disappear","Root_OverFlow","Trade","Low_Trade"):
        before=len(routes);walk(entry[n],set(),[],[])
        for r in routes[before:]:r["entry"]=n
    assert routes and all(r["post_reward_add"] is not None for r in routes)
    # Preserve entry-specific raw path evidence for base gift affinity, without summing mutually exclusive nodes.
    additions=[]
    for name in FLOWS[:9]:
        g=graphs[name]["graph"];idx={x["index"]:x for x in g["events"]}
        for e in g["entrypoints"]:
            todo=[e["main_event"]];seen=set();hits=[]
            while todo:
                j=todo.pop()
                if j is None or j not in idx or j in seen:continue
                seen.add(j);n=idx[j]
                if n.get("action")=="EventFlowActionNpcAddFriendship":hits.append({"node":j,"delta":n["params"]["AddValue"]})
                if n.get("query") and re.search("Favor|Favorite|Price|Wrapping",n["query"]):hits.append({"node":j,"query":n["query"],"params":n["params"],"cases":n.get("cases")})
                todo.extend([n.get("next")]+[c["target"] for c in n.get("cases",[])]+n.get("forks",[]))
            if hits:additions.append({"graph":name,"entry":e["name"],"reachable_evidence":sorted(hits,key=lambda x:x["node"]),"cumulative_score_verified":False})
    # Verify every raw static NPC row against original BCSV for three fields.
    source=root/"e10617820db06889e1638499478da0de_NCA/1/Bcsv/NmlNpcParam.bcsv";b=source.read_bytes()
    assert hashlib.sha256(b).hexdigest()=="5a68a96c7962058ec8119536b53a713acd125747d2c6f2c057d8c788d5f3a797"
    count,stride=struct.unpack_from("<II",b);nc=struct.unpack_from("<H",b,8)[0];off=0x1c+8*nc
    cols={h:p for h,p in struct.iter_unpack("<II",b[0x1c:off])}
    assert (count,stride,off)==(417,288,356)
    with (root/"UnPack/1/Bcsv/NmlNpcParam.csv").open(encoding="utf-8-sig",newline="") as f:rows=list(csv.DictReader(f))
    assert len(rows)==417
    profiles=[]
    for i,r in enumerate(rows):
        p=off+i*stride
        def field(hashval,width):return int.from_bytes(b[p+cols[hashval]:p+cols[hashval]+width],"little")
        collab=field(0x1c57897d,4);uid=field(0x54706054,2);init=field(0x454b2adc,1)
        assert (collab,uid,init)==(int(r["hash_1C57897D"]),int(r["hash_54706054"]),int(r["hash_454B2ADC"]))
        label=b[p+cols[0x2f1b930d]:p+cols[0x2f1b930d]+8].split(b"\0",1)[0].decode("ascii")
        profiles.append({"unique_id":uid,"label":label,"resource_name":r["hash_48EF0398"],"collabo_type_raw":collab,"init_live_raw":init,
            "valid_actor_query_returns":{"cAny":int(collab==0),"cType1":int(collab!=1),"cType2":int(collab!=2),"cType3":int(collab!=3)},
            "dynamic_invite_checks":{"source_moveout_state":None,"target_same_npc_living":None,"target_same_npc_movein":None,"target_villager_max":None,"target_sell_place_nothing":None,"EnableInviteMoveoutNPC":None},"can_invite_online":None})
    assert len({r["unique_id"] for r in profiles})==417 and collections.Counter(r["collabo_type_raw"] for r in profiles)=={0:407,1:6,2:2,3:2}
    # Expand name evidence beyond graph nodes: raw NSO identifiers and resource alias entries.
    known={(x["kind"],m["index"]) for x in mapping if x["status"]=="unique_registry_hash_match" for m in x["matches"]}
    corpus=collections.defaultdict(set)
    for va,data in mapped[1:]:
        for match in re.finditer(rb"EventFlow(?:Action|Query)[A-Za-z0-9_]{1,120}\x00",data):
            corpus[match.group()[:-1].decode("ascii")].add("original_nso:"+hx(va+match.start()))
    bind=r95.read(root/r96.FLOW/"Info/BindInfo.json")["tree"]["root"]
    for typ in ("ActionBindData","QueryBindData"):
        for x in bind[typ]:
            for k in ("Key","Value"):corpus[x[k]].add("BindInfo:"+typ+":"+k)
    byhash=collections.defaultdict(list)
    for n,src in corpus.items():
        if n.startswith("EventFlowAction"):kind="action"
        elif n.startswith("EventFlowQuery"):kind="query"
        else:continue
        byhash[(kind,f"{r95.murmur3(n):08X}")].append({"name":n,"sources":sorted(src)})
    extra=[];remaining=[]
    for kind,entries in registry.items():
        for r in entries:
            if (kind,r["index"]) in known:continue
            matches=byhash[(kind,r["hash"])]
            x={"kind":kind,"index":r["index"],"hash":r["hash"],"constructor":r["constructor_ghidra"],"name_candidates":matches}
            (extra if len(matches)==1 else remaining).append(x)
    assert len(extra)+len(remaining)==206
    # Fingerprint and capture all 78 previously unmapped constructors; no arbitrary function ends.
    review=r95.read(old/"remaining_78_constructor_review.json")
    recovered=[]
    for row in review:
        gh=int(row["constructor"],16);code=instructions(gh,0x180)
        # Stronger candidate: exact nonvolatile base alias of incoming x0, preserved over calls.
        aliases={"x0"};evidence=[]
        for i in code:
            m=i.mnemonic;o=i.operands
            if m=="ret":break
            if m in ("b","br","cbz","cbnz","tbz","tbnz") or m.startswith("b."):break
            add=set()
            if m=="mov" and len(o)==2 and all(x.type==ARM64_OP_REG for x in o) and i.reg_name(o[1].reg) in aliases:
                add.add(i.reg_name(o[0].reg));evidence.append(ir(i))
            if m in ("bl","blr"):aliases.difference_update("x"+str(j) for j in range(19))
            for c in row["same_base_store_candidates"]:
                if int(c["site"],16)==i.address+S and c["base_register"] in aliases:c["incoming_x0_alias_proved_on_straight_line"]=True
            try:
                _,wr=i.regs_access();aliases.difference_update(i.reg_name(r) for r in wr)
            except Exception:aliases.clear()
            aliases.update(add)
        recovered.append({**row,"instructions":[ir(i) for i in code],"alias_evidence":evidence})
    # Extra callback disassembly windows, explicitly not full recovered function bounds.
    targets=("EventFlowQueryUICheckSelectedItemPrice","EventFlowQueryUISelectedItemIsWrapping","EventFlowQueryCheckNpcFavorLevel","EventFlowQueryPercentChoice","EventFlowQuerySubflowResultChoice2","EventFlowActionSetCalcPriceBySolo","EventFlowQueryDeliveryItemIsFavor","EventFlowQueryIsFavoriteMusic")
    windows=[]
    for row in mapping:
        if row["name"] not in targets:continue
        for m in row["matches"]:
            for t in m["vtable_candidates"]:
                slot="0x30" if row["kind"]=="query" else "0x58"
                gh=int(t["dispatch_slots"][slot],16);code=instructions(gh,0x240)
                windows.append({"name":row["name"],"callback":hx(gh),"instructions":[ir(i) for i in code],"window_only":True})
    # Reuse R102 importer; add all 78 exact factory constructor entries, not unproven callback targets.
    with (out/"ghidra_function_entries.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["rva","label","first16_hex"])
        for r in review:
            v=int(r["constructor"],16)-S;w.writerow([hx(v),f"R103_ctor_{r['kind']}_{r['index']}",raw(v,16).hex()])
    system={"ExitFlowchart":{"status":"wrapper_special_case_proved","init":"010F5BB0","wrapper":"010F62F0","completion":"010F6690"},"ReleaseVersionFile":{"status":"unresolved","event":node("System_Door_Hotel",1)}}
    assert system["ReleaseVersionFile"]["event"]["params"]["ReleaseVersion"]==30000
    report={"source_anchors":len(anchors),"reward_modes":3,"predicate_relocations":len(filters),"gift_graphs":len(graphs),"sell_gift_reward_routes":len(routes),"affinity_entry_evidence":len(additions),"villager_profiles":len(profiles),"collabo_types":dict(collections.Counter(r["collabo_type_raw"] for r in profiles)),
            "new_unique_hash_name_candidates":len(extra),"unmatched_or_ambiguous_registry_records":len(remaining),"reviewed_constructor_windows":len(recovered),"six_candidate_alias_proved":sum(bool(c.get("incoming_x0_alias_proved_on_straight_line")) for r in recovered for c in r["same_base_store_candidates"]),
            "callback_windows":len(windows),"system_actions":system,"runtime_verified":False,"real_save_verified":False,"ghidra_gui_verified":False,"online_invite_eligibility_verified":False}
    for n,data in [("reward_modes.json",mode_data),("gift_graphs.json",graphs),("sell_gift_reward_routes.json",routes),("gift_affinity_entries.json",additions),("villager_invite_profiles_417.json",profiles),("additional_registry_names.json",extra),("remaining_registry_names.json",remaining),("constructor_review_78.json",recovered),("gift_query_native_windows.json",windows),("source_evidence.json",anchors),("report.json",report)]:
        r96.write(out/n,data)
    print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
