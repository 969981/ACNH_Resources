#!/usr/bin/env python3
"""R122: source-backed price primitive and eventflow friendship route audit.
Only evaluates read-only synthetic instances; selected delivery/price context is not inferred.
"""
import argparse,collections,json,sqlite3,struct
from pathlib import Path

def effective_quantity(raw,stack_max,stack_gate,solo=False):
    if len(raw)!=8:raise ValueError("exactly eight bytes")
    if stack_gate is None:return None
    if not stack_gate:return 1
    if stack_max is None:return None
    # 01AF2BC0 only writes amount-1 when the stack gate is true and amount<=max.
    if solo and stack_max>=1:return 1
    q=(raw[4]+1)&255
    return 1 if q>stack_max else q

def native_price(raw,base,stack_max,stack_gate,kind,solo=False,special_equality=None):
    q=effective_quantity(raw,stack_max,stack_gate,solo)
    if q is None or base is None or kind is None:return None
    if kind==0x57 and special_equality is None:return None
    v=base*q
    # Do not extrapolate signed overflow in the C export.
    if not -(1<<31)<=v<(1<<31):return None
    if kind==0x57 and special_equality:return (abs(v)//5)*(-1 if v<0 else 1)
    return v

def birthday_price_tier(price,special_kind_group):
    # Entry 162 and price queries 93/94/95/96; assumes this route is reached.
    if special_kind_group:return 0 if price>=8000 else 1 if price>=2001 else 2
    return 0 if price>=2000 else 1 if price>=501 else 2

def birthday_delta(tier,result0):
    # Result0 is exact EventFlow subflow index 0, not guessed wrapping polarity.
    return {0:(8,5),1:(6,4),2:(4,3)}[tier][result0]

def test():
    def r(b):return bytes([0,0,0,0,b,0,0,0])
    assert effective_quantity(r(0),30,True)==1
    assert effective_quantity(r(29),30,True)==30
    assert effective_quantity(r(30),30,True)==1
    assert effective_quantity(r(255),30,True)==0
    assert effective_quantity(r(255),30,True,True)==1
    assert effective_quantity(r(29),-1,False)==1
    assert effective_quantity(r(29),30,None) is None
    assert native_price(r(2),400,30,True,0)==1200
    assert native_price(r(2),400,30,True,0,True)==400
    assert native_price(r(2),400,30,True,0x57) is None
    assert native_price(r(2),400,30,True,0x57,special_equality=True)==240
    assert native_price(r(0),-7,30,True,0x57,special_equality=True)==-1
    assert [birthday_price_tier(x,True) for x in (2000,2001,7999,8000)]==[2,1,1,0]
    assert [birthday_price_tier(x,False) for x in (500,501,1999,2000)]==[2,1,1,0]
    assert [birthday_delta(t,b) for t in range(3) for b in range(2)]==[8,5,6,4,4,3]

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    test();S=0x100000
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r121_report.json");assert prev["outfit_native_mapping"]==11178 and prev["conditional_reward_cases"]==216
    src=root/"derived/3.0.3/ghidra12.2/c";evidence={}
    for name,p,need in [
      ("quantity","02/01af02d0",["FUN_01af0020","*(ushort *)(param_1 + 0xc) + 1 & 0xff","0x4c9ba961","if (iVar10 < (int)uVar3)","uVar3 = 1"]),
      ("quantity_setter","2b/01af2bc0",["0x4c9ba961","FUN_01af0020","*(byte *)(param_1 + 0xc) = param_2 - 1"]),
      ("stack_gate","00/01af0020",["0x4c9ba961","< 2","FUN_01b032d0"]),
      ("price","d7/01aed730",["FUN_01af02d0","0x718b024d","== 0x57","0x1c24d0","0x1c24c8","0x900","FUN_0277d7b4","(iVar7 * iVar3) / 5"])]:
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in need),(name,[x for x in need if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":need}
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ins(a,n):return [{"address":f"0x{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    for a,target in [(0x10bf3b4,0x1af0020),(0x10bf3c4,0x1af2bc0),(0x10bf3cc,0x1aed730)]:
        assert bl_target(int.from_bytes(raw(a-S,4),"little"),a-S)==target-S
    for a,op in [(0x10bf3c0,"mov w1, #1"),(0x10bf3d4,"cmp w0, w8"),(0x10bf3d8,"cset w0, ge")]:assert ins(a,4)[0]["op"]==op
    windows={"price_query":ins(0x10bf39c,0x48),"quantity":ins(0x1af02d0,0x280),"quantity_setter":ins(0x1af2bc0,0x280),"price":ins(0x1aed730,0x310)}
    stems=("NNPC_Select_Present","NNPC_Select_Furniture","NNPC_Select_Equipment","NNPC_Select_Etc","NNPC_Select_Creature","NNPC_Select_Tool","NNPC_GEvent_BirthdayN_H")
    graphs={};nodes=[]
    for stem in stems:
        f=root/"UnPack/1/EventFlow"/(stem+".json");g=json.loads(f.read_text("utf8"));g=g.get("graph",g);graphs[stem]=g
        for x in g["events"]:
            if x.get("action")=="EventFlowActionNpcAddFriendship":
                nodes.append({"flow":stem,"event":x["index"],"delta":x["params"]["AddValue"],"next":x.get("next"),"source_sha256":db.digest(f.read_bytes())})
    birthday={x["index"]:x for x in graphs[stems[-1]]["events"]}
    for a,b in [(93,2000),(94,2001),(95,8000),(96,501)]:assert birthday[a]["params"]["Border"]==b
    assert birthday[166]["cases"]==[{"target":160,"value":0},{"target":159,"value":1},{"target":158,"value":2}]
    for tier,a in enumerate((160,159,158)):
        for x in birthday[a]["cases"]:assert birthday[x["target"]]["params"]["AddValue"]==birthday_delta(tier,x["value"])
    assert birthday[92]["params"]["AddValue"]==-5
    assert birthday[197]["action"]=="EventFlowActionSetCalcPriceBySolo"
    eq={x["index"]:x for x in graphs["NNPC_Select_Equipment"]["events"]}
    assert eq[19]["cases"]==[{"target":20,"value":0},{"target":21,"value":1}] and eq[20]["next"]==17
    assert eq[17]["params"]["AddValue"]==2 and eq[21]["params"]["AddValue"]==1
    # Walk local paths through named subflow entrypoints; report first reached delta(s),
    # plus no-delta exits; do not treat all paths as simultaneously feasible.
    routes=[]
    for stem,g in graphs.items():
        if stem in (stems[0],stems[-1]):continue
        by={x["index"]:x for x in g["events"]};entries={x["name"]:x["main_event"] for x in g["entrypoints"]}
        for name,start in entries.items():
            result=[]
            def walk(i,path,guards,stack):
                if i is None:
                    if stack:walk(stack[-1],path,guards,stack[:-1])
                    else:result.append({"path":path,"guards":guards,"delta":None,"reason":"return_without_delta"})
                    return
                if i in path or len(path)>=128 or i not in by:
                    result.append({"path":path,"guards":guards,"delta":None,"reason":"unresolved_or_cycle"});return
                x=by[i];path=path+[i]
                if x.get("action")=="EventFlowActionNpcAddFriendship":
                    result.append({"path":path,"guards":guards,"delta":x["params"]["AddValue"]});return
                if x.get("action")=="EventFlowActionExitFlowchart":
                    result.append({"path":path,"guards":guards,"delta":None,"reason":"exit_without_delta"});return
                if x.get("cases"):
                    for c in x["cases"]:walk(c["target"],path,guards+[{"event":i,"query":x.get("query"),"case":c["value"],"params":x.get("params")}],stack)
                elif "entrypoint" in x:
                    if x.get("flowchart") in ("",stem) and x["entrypoint"] in entries:walk(entries[x["entrypoint"]],path,guards,stack+[x.get("next")])
                    else:result.append({"path":path,"guards":guards,"delta":None,"reason":"external_subflow"})
                elif "branches" in x or x.get("type") in ("fork","join"):
                    result.append({"path":path,"guards":guards,"delta":None,"reason":"parallel_unmodeled"})
                else:walk(x.get("next"),path,guards,stack)
            walk(start,[],[],[])
            routes.append({"flow":stem,"entry":name,"paths":result,"delta_candidates":sorted({x["delta"] for x in result if x["delta"] is not None}),"unknown_or_no_delta_paths":sum(x["delta"] is None for x in result)})
    item=db.BCSV(root,"ItemParam");kind=db.BCSV(root,"ItemKind");km={db.crc(kind.string(i,"87BF00E8")):i for i in range(kind.n)}
    model={x["item_id"]:x for x in load("r120_gift_model_data.json")["items"]}
    data=[];hist=collections.Counter()
    for i in range(item.n):
        ident=item.val(i,"54706054");k=km[item.val(i,"5270EB75")];stack=kind.val(k,"4C9BA961",True,2);m=model[ident];base=item.val(i,"718B024D",True,4)
        # Only unwrapped zero-tail original resource assumption, no special equality inferred.
        rec=struct.pack("<Q",ident);price=native_price(rec,base,stack,stack>=2,m["native_kind"])
        data.append({"item_id":ident,"base_price_s32":base,"stack_max_s16":stack,"native_kind":m["native_kind"],"conditional_unwrapped_single_price":price,"special_equality_required":m["native_kind"]==0x57,"actual_selected_price":None})
        hist[str(stack)]+=1
    assert len(data)==11178
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r122_price_item(item_id INTEGER PRIMARY KEY,base_price_s32 INTEGER,stack_max_s16 INTEGER,native_kind INTEGER,conditional_single_price INTEGER,actual_selected_price INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r122_price_item VALUES(?,?,?,?,?,NULL)",[(x["item_id"],x["base_price_s32"],x["stack_max_s16"],x["native_kind"],x["conditional_unwrapped_single_price"]) for x in data])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    report={"price_rows":len(data),"special_kind_57_count":sum(x["special_equality_required"] for x in data),"stack_distribution":dict(hist),"friendship_nodes":len(nodes),"flow_entry_routes":len(routes),"birthday_tiers":[{"tier":t,"result0":r,"delta":birthday_delta(t,r)} for t in range(3) for r in range(2)],"runtime_verified":False}
    for n,o in [("r122_report.json",report),("r122_price_items.json",data),("r122_friendship_nodes.json",nodes),("r122_friendship_routes.json",routes),("r122_c_evidence.json",evidence),("r122_machine_windows.json",windows)]:db.write(out/n,o)
    web=load("gift_web_sidecar_r121.json");byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["r122_price"]=byid[x["id"]]
    web["limitations"].append("R122 price values are conditional primitives, not verified selected price; friendship routes require actual event entry and branch context")
    db.write(out/"gift_web_sidecar_r122.json",web)
    print("R122 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for r in routes:print("R122 ROUTE",json.dumps({k:v for k,v in r.items() if k!="paths"},ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
