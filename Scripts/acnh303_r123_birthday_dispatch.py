#!/usr/bin/env python3
"""R123: bounded ordinary gift dispatch and birthday reward selection graph.
Static graph model, not a simulation of delivery, save flags or live NPC state.
"""
import argparse,collections,json,sqlite3
from pathlib import Path
from acnh303_r122_price_friendship import birthday_delta,birthday_price_tier

def birthday_reward_sub(tier,level,decorated,equipped):
    if tier not in (0,1,2) or level not in range(1,7):raise ValueError("tier/level")
    # Exact routes: 108/109 level case=6-level; high skips the level query.
    if tier!=0 and level<3:return tier
    if decorated is True or equipped is True:return 1 if tier!=2 else 2
    if decorated is False and equipped is False:return 0 if tier!=2 else 1
    return None

def birthday_model(price,group,result0,level_after,decorated,equipped):
    tier=birthday_price_tier(price,group)
    sub=birthday_reward_sub(tier,level_after,decorated,equipped)
    return {"tier":tier,"friendship_delta":birthday_delta(tier,result0),"reward_type":0 if sub is not None else None,"reward_sub":sub,"deferred_flag_value":3-sub if sub is not None else None,"conditional_route_only":True,"final_delivery":None}

def dispatch(graph,kind,item_id,kind_bits=None,query_cases=None,start=4):
    """Find first external category call from specified local entry.
    Choice convention is a source-graph interpretation, not newly proven native semantics.
    Unknown queries branch over their recorded edges. Missing cases may return.
    """
    by={x["index"]:x for x in graph["events"]};entries={x["name"]:x["main_event"] for x in graph["entrypoints"]}
    bits=kind_bits or {};overrides=query_cases or {};routes=[]
    def visit(i,path,guards,stack,seen):
        if i is None:
            if stack:visit(stack[-1],path,guards,stack[:-1],seen)
            else:routes.append({"path":path,"guards":guards,"target":None,"status":"return_without_category"})
            return
        state=(i,tuple(stack))
        if state in seen or len(path)>=120 or i not in by:
            routes.append({"path":path,"guards":guards,"target":None,"status":"unresolved_cycle"});return
        x=by[i];path=path+[i];seen=seen|{state}
        if x.get("type")=="SubFlowEvent":
            f=x.get("flowchart");e=x["entrypoint"]
            if f and f!="NNPC_Select_Present":
                routes.append({"path":path,"guards":guards,"target":f+":"+e,"status":"first_external_category"});return
            if e in entries:visit(entries[e],path,guards,stack+[x.get("next")],seen)
            else:routes.append({"path":path,"guards":guards,"target":None,"status":"unknown_local_entry"})
            return
        q=x.get("query");p=x.get("params",{});c=x.get("cases",[])
        if q:
            v=overrides.get(i)
            if v is None:
                if q=="EventFlowQueryMultiKindItemSelectInclude":
                    v=0 if kind in [p.get("ItemKindType"+str(j)) for j in range(1,9)] else 1
                elif q.startswith("EventFlowQueryMultiKindItemSelectIncludeChoice"):
                    vals=[p.get("ItemKindType"+k) for k in "ABCD"]
                    v=vals.index(kind)+1 if kind in vals else 0
                elif q=="EventFlowQueryMultiItemSelectInclude":
                    v=0 if item_id in [p.get("ItemUniqueID"+str(j)) for j in range(1,9)] else 1
                elif q=="EventFlowQueryKindBitParamItemSelectInclude" and p.get("BitParamType") in bits:
                    v=0 if bits[p["BitParamType"]] else 1
            choices=[z for z in c if v is None or z["value"]==v]
            if not choices or (v is None and len(c)==1):
                routes.append({"path":path,"guards":guards+[{"event":i,"query":q,"case":v}],"target":None,"status":"missing_or_unmodeled_case"})
            for z in choices:visit(z["target"],path,guards+[{"event":i,"query":q,"case":z["value"],"inferred":v is None}],stack,seen)
        elif x.get("action")=="EventFlowActionExitFlowchart":
            routes.append({"path":path,"guards":guards,"target":None,"status":"exit"})
        elif x.get("type")=="ActionEvent":visit(x.get("next"),path,guards,stack,seen)
        else:routes.append({"path":path,"guards":guards,"target":None,"status":"unmodeled_event_type"})
    visit(start,[],[],[],set())
    targets=sorted({r["target"] for r in routes if r["target"] is not None})
    return {"candidates":targets,"all_routes_same_category":len(targets)==1 and all(r["target"]==targets[0] for r in routes),"routes":routes}

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    from acnh303_round11_elf_xref import bl_target
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r122_report.json");assert prev["price_rows"]==11178
    def graph(stem):
        f=root/"UnPack/1/EventFlow"/(stem+".json");g=json.loads(f.read_text("utf8"));return g.get("graph",g),db.digest(f.read_bytes())
    birth,bsha=graph("NNPC_GEvent_BirthdayN_H");g,gsha=graph("NNPC_Select_Present")
    b={x["index"]:x for x in birth["events"]}
    def cases(i,targets):
        assert {z["value"]:z["target"] for z in b[i]["cases"]}==targets
    cases(108,{0:116,1:116,2:116,3:116,4:123,5:123})
    cases(109,{0:110,1:110,2:110,3:110,4:126,5:126})
    cases(110,{0:127,1:111});cases(111,{0:127,1:128})
    cases(116,{0:124,1:117});cases(117,{0:124,1:125})
    for i,sub in [(118,0),(119,1),(120,2),(180,0),(181,1),(182,2)]:
        assert b[i]["params"]=={"RewardType":0,"RewardTypeSub":sub}
    for i,v in [(173,2),(174,1),(175,3),(176,0),(185,0)]:
        assert b[i]["params"]=={"AccessKey":"cNpcMemory:DC_NPCBirthdayFlag","SetNum":v}
    cases(178,{0:182,1:179});cases(179,{0:181,1:180})
    cases(64,{0:157,1:197})
    assert b[157]["params"]=={"ResultValue":0,"SetIndex":0}
    assert b[197]["next"]==161 and b[161]["params"]=={"ResultValue":1,"SetIndex":0}
    matrix=[]
    for t in range(3):
        for lv in range(1,7):
            for d in (False,True,None):
                for e in (False,True,None):
                    sub=birthday_reward_sub(t,lv,d,e)
                    matrix.append({"tier":t,"level_after_increment":lv,"decorated":d,"equipped":e,"reward_sub":sub,"flag_value":3-sub if sub is not None else None})
    assert birthday_reward_sub(0,1,False,False)==0
    assert birthday_reward_sub(1,2,False,False)==1
    assert birthday_reward_sub(2,2,False,False)==2
    assert birthday_reward_sub(1,3,False,False)==0
    assert birthday_reward_sub(2,3,False,False)==1
    assert birthday_reward_sub(0,6,True,None)==1
    assert birthday_reward_sub(0,6,None,False) is None
    for kind,id_,expected in [("Fish",0,"NNPC_Select_Creature:Fish"),("Insect",0,"NNPC_Select_Creature:Insect"),("DiveFish",0,"NNPC_Select_Creature:DiveFish"),("Ftr",1,"NNPC_Select_Furniture:Furniture"),("Money",0,"NNPC_Select_Etc:Money")]:
        z=dispatch(g,kind,id_,{"食べる":False,"植える":False})
        assert expected in z["candidates"],(kind,z["candidates"])
    # Preserve exact native Kind names; calculate first category candidates
    # for unwrapped original items only, with unknown bit/context gates.
    kinds={x["index"]:x["name"] for x in load("r110_kind_bilingual.json")}
    inputs=load("r120_gift_model_data.json")["items"]
    cache={};records=[];hist=collections.Counter()
    special_ids={v for x in g["events"] if x.get("query")=="EventFlowQueryMultiItemSelectInclude" for k,v in x["params"].items() if k.startswith("ItemUniqueID") and v!=65534}
    for x in inputs:
        ident=x["item_id"];kind=kinds[x["native_kind"]];key=(kind,ident if ident in special_ids else -1)
        if key not in cache:cache[key]=dispatch(g,kind,key[1])
        z=cache[key]
        records.append({"item_id":ident,"native_kind":kind,"category_candidates":z["candidates"],"all_routes_same_category":z["all_routes_same_category"],"actual_dispatch":None})
        hist[str(len(z["candidates"]))]+=1
    # Extract wrapper and downstream branch windows for independent polarity review.
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root);S=0x100000;cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ins(a,n):return [{"address":f"0x{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    wrapping=ins(0x10c89a0,0x250)
    # Keep price special kind name grounded in original table.
    special_name=kinds[0x57]
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r123_dispatch_candidate(item_id INTEGER PRIMARY KEY,category_candidates_json TEXT,all_routes_same_category INTEGER,actual_dispatch TEXT)")
    con.executemany("INSERT OR REPLACE INTO r123_dispatch_candidate VALUES(?,?,?,NULL)",[(x["item_id"],json.dumps(x["category_candidates"],ensure_ascii=False),int(x["all_routes_same_category"])) for x in records])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    report={"birthday_matrix_cases":len(matrix),"birthday_known_reward_cases":sum(x["reward_sub"] is not None for x in matrix),"birthday_deferred_flag_map":{"1":2,"2":1,"3":0},"dispatch_items":len(records),"dispatch_cache_cases":len(cache),"dispatch_candidate_count_histogram":dict(hist),"dispatch_single_route_candidates":sum(x["all_routes_same_category"] for x in records),"kind_57_name":special_name,"wrapping_query_polarity_verified":False,"native_dispatch_query_polarity_verified":False,"runtime_verified":False,"source_sha256":{"birthday":bsha,"ordinary":gsha}}
    for n,o in [("r123_report.json",report),("r123_birthday_reward_matrix.json",matrix),("r123_dispatch_items.json",records),("r123_dispatch_routes.json",[{"kind":k[0],"special_id":k[1],**v} for k,v in cache.items()]),("r123_wrapping_window.json",wrapping)]:db.write(out/n,o)
    web=load("gift_web_sidecar_r122.json");byid={x["item_id"]:x for x in records}
    for x in web["items"]:x["r123_dispatch"]=byid[x["id"]]
    web["limitations"].append("R123 dispatch uses inferred graph query convention; unknown bit/context gates are branched, actual dispatch and delivery remain unknown")
    db.write(out/"gift_web_sidecar_r123.json",web)
    print("R123 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for x in wrapping:print("R123 WRAP",json.dumps(x),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
