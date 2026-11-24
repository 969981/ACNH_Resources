#!/usr/bin/env python3
"""R121: combine R120 callback, static resident preference and conditional ordinary reward model."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path
from acnh303_r120_gift_instance import Model
import acnh303_r104_gift_model as reward

def analyze(model,con,npc_id,raw,mode="ordinary",friendship=None,base_delta=None,wrap_delta=None,skip_count=None,native_price=None,pocket_space=None,entry_reached=False,photo_item_valid=None):
    cb=model.evaluate(raw,mode)
    con.row_factory=sqlite3.Row
    n=con.execute("SELECT * FROM npc WHERE id=?",(npc_id,)).fetchone()
    if n is None:raise ValueError("unknown NPC UniqueID")
    q=cb["query_id"]
    i=con.execute("SELECT i.*,s.style2_index FROM items i JOIN r110_static_item s ON s.item_id=i.id WHERE i.id=?",(q,)).fetchone()
    result={"npc":{"id":npc_id,"resource_name":n["res_name"],"styles":[n["style1"],n["style2"]],"colors":[n["color1"],n["color2"]]},"callback":cb,"preference":None,"reward":None,"final_delivered_photo_probability":None,"actual_gift_success":None}
    if i is not None:
        # Wrapped query IDs represent wrappers, not necessarily the gift's underlying identity.
        if raw[3]&3==0:
            styles=[i["style_raw"],i["style2_index"]]
            matched=sorted(set(x for x in styles if x in range(1,7))&{n["style1"],n["style2"]})
            result["preference"]={"item_id":q,"style_indices":styles,"nonzero_style_overlap":matched,"clothing_kind_candidate":bool(i["clothing_kind_candidate"]),"base_color_candidates":[i["base_color1_candidate"],i["base_color2_candidate"]],"actual_affinity":None,"raw_price_s32":i["price_s32"],"scope":"static overlap; not native preference score"}
        else:result["preference"]={"item_id":q,"scope":"wrapped record: underlying gift identity not established here","actual_affinity":None}
    if cb["callback_model_result"] is not True:
        result["reward_status"]="callback_rejected_or_unknown";return result
    if mode!="ordinary":
        result["reward_status"]="birthday_reward_not_modeled";return result
    if not entry_reached or any(x is None for x in (friendship,base_delta,wrap_delta,skip_count,native_price,pocket_space)):
        result["reward_status"]="requires_explicit_native_price_and_event_context";return result
    entry=reward.present_entry(native_price,pocket_space)
    result["reward"]=reward.model(friendship,base_delta,wrap_delta,skip_count,entry,photo_item_valid)
    result["reward_status"]="conditional_ordinary_event_model"
    return result

def main(root,out):
    import acnh303_r100_nso_decode as dec
    import acnh303_r105_gift_db as db
    from acnh303_round11_elf_xref import bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    S=0x100000
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r120_report.json");assert prev["synthetic_matrix_cases"]==67068 and prev["flag_cases"]==3072
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return list(cs.disasm(raw(a-S,n),a-S))
    def row(i):return {"address":f"0x{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def check(a,m,o):
        i=ins(a,4)[0];assert (i.mnemonic,i.op_str)==(m,o),(hex(a),row(i))
    assert ptr(0x4bbe238-S)+0x760==0x49c0770-S
    assert bl_target(int.from_bytes(raw(0x1a7b098-S,4),"little"),0x1a7b098-S)==0x1a8cdd0-S
    for a,m,o in [(0x1a7b024,"cmp","w10, w24"),(0x1a7b090,"mov","w0, w25"),(0x1a7b094,"mov","x1, xzr"),(0x1a7b09c,"cmp","w0, #0xa2"),(0x1b0814c,"mov","w8, #0x9c4"),(0x1b08150,"str","x8, [x0]"),(0x1b08180,"mov","w8, #0x839"),(0x1b08184,"str","x8, [x0]")]:check(a,m,o)
    for a in (0x1b08154,0x1b08188):assert bl_target(int.from_bytes(raw(a-S,4),"little"),a-S)==0x277d4ac-S
    f=root/"derived/3.0.3/ghidra12.2/c/cd/01a8cdd0.c";b=f.read_bytes()
    anchors=["PTR_s_STowelN_04bbe238 + lVar19 * 8 + 0x760","lVar19 != 0xa2","crc32b"]
    assert all(x.encode() in b for x in anchors)
    table=load("r119_outfit_tables.json");assert len(table)==1 and len(table[0]["keys"])==162
    idx={k:i for i,k in enumerate(table[0]["keys"])}
    outfits=load("r119_outfit_items.json");assert len(outfits)==11178
    model=Model(load("r120_gift_model_data.json"))
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3");con.row_factory=sqlite3.Row
    con.execute("CREATE TABLE IF NOT EXISTS r121_outfit_index(item_id INTEGER PRIMARY KEY,native_outfit_index INTEGER NOT NULL)")
    con.executemany("INSERT OR REPLACE INTO r121_outfit_index VALUES(?,?)",[(x["item_id"],idx[x["outfit_key"]]) for x in outfits])
    con.execute("DROP VIEW IF EXISTS r121_static_style_pairs")
    con.execute("""CREATE VIEW r121_static_style_pairs AS
      SELECT n.id npc_id,i.id item_id,b.synthetic_zero_tail_result callback_model_result,
      CASE WHEN (i.style_raw BETWEEN 1 AND 6 AND i.style_raw IN (n.style1,n.style2)) OR
      (s.style2_index BETWEEN 1 AND 6 AND s.style2_index IN (n.style1,n.style2)) THEN 1 ELSE 0 END nonzero_style_overlap,
      i.clothing_kind_candidate, NULL actual_affinity
      FROM npc n CROSS JOIN items i JOIN r110_static_item s ON s.item_id=i.id
      JOIN r120_synthetic_callback b ON b.item_id=i.id AND b.mode='ordinary'""")
    groups=[dict(x) for x in con.execute("SELECT callback_model_result,nonzero_style_overlap,clothing_kind_candidate,COUNT(*) pair_count FROM r121_static_style_pairs GROUP BY 1,2,3")]
    assert sum(x["pair_count"] for x in groups)==417*11178
    nid=con.execute("SELECT MIN(id) FROM npc").fetchone()[0]
    def rec(ident,amount=0):return struct.pack("<HBBBBBB",ident,0,0,0,0,amount,0)
    assert analyze(model,con,nid,rec(1877,1),entry_reached=True)["reward"] is None
    assert analyze(model,con,nid,rec(1877),mode="birthday")["reward_status"]=="birthday_reward_not_modeled"
    assert analyze(model,con,nid,rec(1877))["reward"] is None
    cases=[]
    for f in (0,29,59,99,149,150,199,200,255):
        for price in (999,1000,2999,3000):
            for pocket in (False,True):
                for skip in (0,1,10):
                    x=analyze(model,con,nid,rec(1877),friendship=f,base_delta=0,wrap_delta=0,skip_count=skip,native_price=price,pocket_space=pocket,entry_reached=True)
                    assert x["reward"] is not None and x["final_delivered_photo_probability"] is None
                    if skip or price<1000 or f<150:assert x["reward"]["conditional_direct_photo_roll"]==0
                    cases.append({"friendship":f,"native_price":price,"pocket_space":pocket,"skip_count":skip,"conditional":x["reward"]})
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    web=load("gift_web_sidecar_r120.json");byid={x["item_id"]:idx[x["outfit_key"]] for x in outfits}
    for x in web["items"]:x["r121_native_outfit_index"]=byid[x["id"]]
    web["limitations"].append("R121 preference overlap is not actual affinity; reward calculations require explicit native price and event-route assumptions")
    db.write(out/"gift_web_sidecar_r121.json",web)
    report={"outfit_native_mapping":len(outfits),"outfit_enum_count":162,"converter":"0x01A8CDD0","table":"0x049C0770","default_initial_records":{"2500":"c409000000000000","2105":"3908000000000000"},"default_post_normalization_runtime_verified":False,"style_pairs":sum(x["pair_count"] for x in groups),"style_groups":groups,"conditional_reward_cases":len(cases),"runtime_verified":False}
    for n,o in [("r121_report.json",report),("r121_conditional_reward_cases.json",cases),("r121_converter_window.json",[row(i) for i in ins(0x1a8cdd0,0x500)]),("r121_c_evidence.json",{"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":anchors})]:db.write(out/n,o)
    print("R121 REPORT",json.dumps(report,ensure_ascii=False),flush=True)

if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path);p.add_argument("--model",type=Path);p.add_argument("--db",type=Path);p.add_argument("--npc-id",type=int);p.add_argument("--raw");p.add_argument("--mode",choices=["ordinary","birthday"],default="ordinary");p.add_argument("--friendship",type=int);p.add_argument("--base-delta",type=int);p.add_argument("--wrap-delta",type=int);p.add_argument("--skip",type=int);p.add_argument("--native-price",type=int);p.add_argument("--pocket-space",choices=["yes","no"]);p.add_argument("--entry-reached",action="store_true");a=p.parse_args()
    if a.out:main(a.root.resolve(),a.out.resolve())
    elif a.model and a.db and a.raw and a.npc_id is not None:
        m=Model(json.loads(a.model.read_text("utf8")));con=sqlite3.connect(f"file:{a.db.resolve()}?mode=ro",uri=True)
        print(json.dumps(analyze(m,con,a.npc_id,bytes.fromhex(a.raw),a.mode,a.friendship,a.base_delta,a.wrap_delta,a.skip,a.native_price,None if a.pocket_space is None else a.pocket_space=="yes",a.entry_reached),ensure_ascii=False,indent=2));con.close()
    else:p.error("supply --out or model/db/npc-id/raw")
