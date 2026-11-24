#!/usr/bin/env python3
"""R126: recover inline dish enum candidate and narrow static dispatch.
Original field keys are tested independently of inferred enum dataflow.
"""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from acnh303_r123_birthday_dispatch import dispatch
from acnh303_r124_kind_bits import eat_candidate

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r125_report.json")
    assert prev["wrapping_pair_relocations_verified"] and prev["wrapping_synthetic_cases"]==768
    assert [x["crc"] for x in prev["writer_field_candidates"]]==["F44FAB3B"]
    item=db.BCSV(root,"ItemParam")
    assert item.cols["F44FAB3B"]==0x44 and item.width["F44FAB3B"]==4
    keys=["None","Dish"];hashes={db.crc(k):i for i,k in enumerate(keys)}
    assert hashes=={0xdfa2aff1:0,0x354f2386:1}
    hist=collections.Counter(item.val(i,"F44FAB3B") for i in range(item.n))
    # Preserve field values even if the expected English CRC mapping is incomplete.
    exact_key_set=set(hist)==set(hashes)
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root);S=0x100000
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return [{"address":f"0x{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    anchors={0x1a6e988:"mov w25, #0xab3b",0x1a6e98c:"movk w25, #0xf44f, lsl #16",0x1a6ea34:"cmp w10, w25",0x1a6eee8:"mov w8, #0x4e",0x1a6eef4:"mov w11, #0x6f",0x1a6eef8:"mov w12, #0x6e",0x1a6ef0c:"mov w12, #0x65",0x1a6ef54:"mov w11, #0x44",0x1a6ef5c:"mov w11, #0x69",0x1a6ef64:"mov w11, #0x73",0x1a6ef6c:"mov w11, #0x68",0x1a6f2b4:"strh w8, [x10, w9, sxtw #1]",0x10c8924:"str x8, [x0]",0x10c8940:"str x8, [x0]"}
    for a,op in anchors.items():assert ins(a,4)[0]["op"]==op,(hex(a),ins(a,4))
    for a in (0x10c891c,0x10c8938):
        w=int.from_bytes(raw(a-S,4),"little");v=int.from_bytes(raw(a+4-S,4),"little")
        assert adrp_target(w,a-S)+add_imm(v)["imm"]==0x4979268-S
    assert ptr(0x4979298-S)==0x10c89a0-S and ptr(0x49792a0-S)==0x10c89c0-S
    # Inspect the contiguous KindBitParam vtable and wrapper/leaf bodies.
    bitpoint=0x4978390
    bit_vtable=[{"slot":f"0x{a:08X}","target":f"0x{ptr(a-S)+S:08X}" if ptr(a-S) is not None else None} for a in range(bitpoint-16,bitpoint+0x58,8)]
    windows={"field_lookup":ins(0x1a6e988,0x190),"inline_japanese":ins(0x1a6eaa0,0x440),"inline_english":ins(0x1a6eee8,0x318),"writer":ins(0x1a6f1a0,0x118),"bit_wrapper_leaf":ins(0x10b876c,0x240),"wrapping_vptr_store":ins(0x10c891c,0x30)}
    old={x["item_id"]:x for x in load("r124_kind_bits.json")}
    names={x["index"]:x["name"] for x in load("r110_kind_bilingual.json")}
    routes={x["flow"]+":"+x["entry"]:x for x in load("r122_friendship_routes.json")}
    g=json.loads((root/"UnPack/1/EventFlow/NNPC_Select_Present.json").read_text("utf8"));g=g.get("graph",g)
    special_ids={v for x in g["events"] if x.get("query")=="EventFlowQueryMultiItemSelectInclude" for k,v in x["params"].items() if k.startswith("ItemUniqueID") and v!=65534}
    records=[];routecache={};ch=collections.Counter()
    for i in range(item.n):
        ident=item.val(i,"54706054");r=old[ident];v=item.val(i,"F44FAB3B")
        enum=hashes.get(v) if exact_key_set else None
        e=eat_candidate(r["native_kind"],r["kind_can_eat"],enum)
        bits={"植える":r["kind_can_plant"]}
        if e is not None:bits["食べる"]=e
        key=(r["native_kind"],ident if ident in special_ids else -1,e,r["kind_can_plant"])
        if key not in routecache:routecache[key]=dispatch(g,names[key[0]],key[1],bits)
        z=routecache[key];assert set(z["candidates"])<=set(r["category_candidates"])
        d=sorted({v for t in z["candidates"] if t in routes for v in routes[t]["delta_candidates"]})
        unknown=not z["all_routes_same_category"] or any(t not in routes or routes[t]["unknown_or_no_delta_paths"] for t in z["candidates"])
        records.append({"item_id":ident,"field_crc32":f"{v:08X}","dish_enum_candidate":enum,"dish_enum_native_verified":False,"conditional_eat":e,"category_candidates":z["candidates"],"all_routes_same_category":z["all_routes_same_category"],"first_friendship_delta_candidates":d,"unknown_or_no_delta_path":bool(unknown),"actual_dispatch":None,"actual_friendship_delta":None})
        ch[str(len(z["candidates"]))]+=1
    assert len(records)==11178
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3")
    con.execute("CREATE TABLE IF NOT EXISTS r126_dish_dispatch(item_id INTEGER PRIMARY KEY,field_crc32 TEXT NOT NULL,dish_enum_candidate INTEGER,conditional_eat INTEGER,category_candidates_json TEXT,first_friendship_delta_candidates_json TEXT,actual_dispatch TEXT,actual_friendship_delta INTEGER)")
    con.executemany("INSERT OR REPLACE INTO r126_dish_dispatch VALUES(?,?,?,?,?,?,NULL,NULL)",[(x["item_id"],x["field_crc32"],x["dish_enum_candidate"],x["conditional_eat"],json.dumps(x["category_candidates"],ensure_ascii=False),json.dumps(x["first_friendship_delta_candidates"])) for x in records])
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    report={"items":len(records),"raw_field_values":{f"{k:08X}":v for k,v in hist.items()},"english_keys_complete":exact_key_set,"dish_enum_candidate_1":sum(x["dish_enum_candidate"]==1 for x in records),"conditional_eat_true":sum(x["conditional_eat"] is True for x in records),"conditional_eat_unknown":sum(x["conditional_eat"] is None for x in records),"narrowed_items":sum(len(x["category_candidates"])<len(old[x["item_id"]]["category_candidates"]) for x in records),"category_candidate_histogram":dict(ch),"single_route_candidates":sum(x["all_routes_same_category"] for x in records),"single_delta_no_unknown_paths":sum(len(x["first_friendship_delta_candidates"])==1 and not x["unknown_or_no_delta_path"] for x in records),"wrapping_vptr_store_verified":True,"bit_vtable_candidate":bit_vtable,"dish_converter_full_dataflow_verified":False,"event_query_native_polarity_verified":False,"runtime_verified":False}
    for n,o in [("r126_report.json",report),("r126_dish_dispatch.json",records),("r126_machine_windows.json",windows),("r126_bit_vtable.json",bit_vtable)]:db.write(out/n,o)
    web=load("gift_web_sidecar_r124.json");byid={x["item_id"]:x for x in records}
    for x in web["items"]:x["r126_dish_dispatch"]=byid[x["id"]]
    web["limitations"].append("R126 None/Dish enum ordering is conditional on original inline converter interpretation; actual dispatch and cumulative friendship remain unknown.")
    db.write(out/"gift_web_sidecar_r126.json",web)
    print("R126 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for name,rows in windows.items():
        for x in rows:print("R126 WINDOW",name,json.dumps(x,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
