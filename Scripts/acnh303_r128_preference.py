#!/usr/bin/env python3
"""R128: source-backed rank getter and conservative resident preference candidates."""
import argparse,collections,json,sqlite3,struct
from pathlib import Path

def rank_getter(masks,tag):
    if not 0<=tag<51:return 4
    for i,m in enumerate(masks):
        if m&(1<<tag):return i
    return 4

def main(root,out):
    import acnh303_r105_gift_db as db
    import acnh303_r100_nso_decode as dec
    from acnh303_round11_elf_xref import adrp_target,add_imm,ldr_uimm,bl_target
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    def load(n):return json.loads((out/n).read_text("utf8"))
    prev=load("r127_report.json")
    assert prev["conditional_eat_unknown"]==0 and prev["dish_enum_candidate_1"]==20
    assert prev["single_route_candidates"]==10952
    src=root/"derived/3.0.3/ghidra12.2/c";evidence={}
    for name,p,anchors in [
      ("color1","32/01ae3210",["PTR_DAT_04bc0028","FUN_01ad7260","FUN_01afd600","return 0xe","0x34a14cc1"]),
      ("color2","3b/01ae3bc0",["PTR_DAT_04bc0030","FUN_01afcfa0","FUN_01afd600","0xcb5eb33f","0xece3e00c","return 0xe"]),
      ("style1","0c/01ae0cf0",["-0x645fbf3e","uVar4 < 7"]),
      ("clothing_property","58/01ae58b0",["PTR_DAT_04bc0198","DAT_05326d28","DAT_05326d30","uVar4 < 3"]),
      ("rank","0e/007b0ea4",["uVar2 < 0x33","puVar3 + 7","puVar3 + 0xe","puVar3 + 0x15","return 4;"]),
      ("tag_group","11/007b1100",["DAT_04ca7a00","DAT_04ca7a18","DAT_04ca7a20","uVar3 < 4"]),
      ("filter","a5/00efa550",["FUN_01b07660","DAT_053271b0","DAT_053271b8","FUN_01ae58b0","FUN_01ae6420"])]:
        f=src/(p+".c");b=f.read_bytes();assert all(x.encode() in b for x in anchors),(name,[x for x in anchors if x.encode() not in b])
        evidence[name]={"file":str(f.relative_to(root)),"sha256":db.digest(b),"anchors":anchors}
    for t in range(51):
        for i in range(4):
            masks=[0]*4;masks[i]=1<<t;assert rank_getter(masks,t)==i
        assert rank_getter([1<<t]*4,t)==0 and rank_getter([0]*4,t)==4
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root);S=0x100000
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);va,code=mapped[0];end=va+len(code)
    def gh(a):return f"0x{a+S:08X}" if a is not None else None
    def ptr(a):
        r=rel.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def ins(a,n):return [{"address":gh(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    known={0xef1d64:0x1ae3210,0xef1d70:0x1ae3bc0,0xef2014:0x1ae0cf0,0xef20ac:0x1ae58b0,0xef21e0:0x7b0ea4,0xef21fc:0x7b0ea4,0xef2270:0x7b0de0,0xef2290:0x7b1100,0xef22a4:0x7b0ea4,0xef22c0:0x7b0ea4}
    for a,t in known.items():assert bl_target(int.from_bytes(raw(a-S,4),"little"),a-S)==t-S
    windows={gh(a-S):ins(a-32,96) for a in known}
    # Direct callers are exact BL sites, not necessarily function boundaries.
    targets={x-S for x in (0xef16c0,0xef1fd8,0xefa550,0x1ae3210,0x1ae3bc0,0x1ae0cf0,0x1ae58b0,0x7b0ea4,0x7b1100)}
    calls=[]
    for j,(w,) in enumerate(struct.iter_unpack("<I",memoryview(code)[:len(code)//4*4])):
        if w&0xfc000000!=0x94000000:continue
        a=va+j*4;t=bl_target(w,a)
        if t in targets:calls.append({"site":gh(a),"target":gh(t)})
    slots=[{"slot":gh(a),"target":gh(ptr(a))} for a in rel if ptr(a) in targets]
    item=db.BCSV(root,"ItemParam");npc=db.BCSV(root,"NmlNpcParam");color=db.BCSV(root,"ItemColor")
    color_names=[{"id":color.val(i,"54706054"),"key":color.string(i,"87BF00E8")} for i in range(color.n)]
    color_map={db.crc(x["key"]):x["id"] for x in color_names}
    # Color base cache and clothing-property cache writer windows. Locate GOT
    # slots by relocated descriptor, then collect bounded ADRP/LDR references.
    got={0x4bc0028-S,0x4bc0030-S,0x4bc0198-S}
    for a in rel:
        if ptr(a) in (0x53271b0-S,0x5326d28-S):got.add(a)
    pages={a&~4095 for a in got};refs={}
    for a in range(max(va,0x1a60000-S),min(end,0x1aa0000-S),4):
        w=struct.unpack_from("<I",code,a-va)[0];p=adrp_target(w,a)
        if p not in pages:continue
        for q in range(a+4,min(a+64,end),4):
            v=struct.unpack_from("<I",code,q-va)[0];op=add_imm(v) or ldr_uimm(v)
            if op and op["rn"]==w&31 and p+op["imm"] in got:
                refs[(q,p+op["imm"])]=dict(site=gh(q),got=gh(p+op["imm"]),descriptor=gh(ptr(p+op["imm"])),window=ins(q+S-32,128))
    # Rank getter operates on 51 native bits; NPC raw tag values still need
    # independent enum mapping confirmation. Keep these as numeric candidates.
    data=[];rank_hist=collections.Counter();rank_fields=db.RANKS
    r110={x["item_id"]:x for x in load("r110_items.json")}
    for i in range(item.n):
        ident=item.val(i,"54706054");masks=[int.from_bytes(item.raw(i,h),"little") for h in rank_fields]
        ranks=[rank_getter(masks,t) for t in range(51)]
        rank_hist.update(ranks)
        data.append({"item_id":ident,"base_color_candidates":[color_map.get(item.val(i,h)) for h in ("A6B1A7FD","B7CCCD84")],"styles":[item.val(i,"9BA040C2"),r110[ident]["style2_index"]],"rank_by_native_bit":ranks,"native_rank_getter_order_verified":True,"actual_preference":None})
    assert len(data)==11178 and sum(rank_hist.values())==11178*51
    con=sqlite3.connect(out/"r105/acnh303_gift_research.sqlite3");con.row_factory=sqlite3.Row
    con.execute("CREATE TABLE IF NOT EXISTS r128_item_tag_rank(item_id INTEGER NOT NULL,tag_bit INTEGER NOT NULL,rank_index INTEGER NOT NULL,PRIMARY KEY(item_id,tag_bit)) WITHOUT ROWID")
    con.executemany("INSERT OR REPLACE INTO r128_item_tag_rank VALUES(?,?,?)",((x["item_id"],t,v) for x in data for t,v in enumerate(x["rank_by_native_bit"])))
    con.execute("DROP VIEW IF EXISTS r128_static_preference_candidates")
    con.execute("""CREATE VIEW r128_static_preference_candidates AS
        SELECT n.id npc_id,i.id item_id,b.synthetic_zero_tail_result callback_model_result,s.native_kind,
        CASE WHEN (i.style_raw BETWEEN 1 AND 6 AND i.style_raw IN(n.style1,n.style2)) OR (s.style2_index BETWEEN 1 AND 6 AND s.style2_index IN(n.style1,n.style2)) THEN 1 ELSE 0 END style_overlap,
        CASE WHEN i.base_color1_candidate IN(n.color1,n.color2) OR i.base_color2_candidate IN(n.color1,n.color2) THEN 1 WHEN i.base_color1_candidate IS NULL OR i.base_color2_candidate IS NULL THEN NULL ELSE 0 END base_color_overlap_candidate,
        a.rank_index npc_tag1_numeric_candidate,z.rank_index npc_tag2_numeric_candidate,
        NULL actual_wearable,NULL actual_preference,NULL actual_friendship_delta
        FROM npc n CROSS JOIN items i JOIN r110_static_item s ON s.item_id=i.id
        JOIN r120_synthetic_callback b ON b.item_id=i.id AND b.mode='ordinary'
        JOIN r128_item_tag_rank a ON a.item_id=i.id AND a.tag_bit=n.tag1
        JOIN r128_item_tag_rank z ON z.item_id=i.id AND z.tag_bit=n.tag2""")
    # Indexed per-villager query: no materialization of 4.66 million pair rows.
    ncount=con.execute("SELECT COUNT(*) FROM npc").fetchone()[0];assert ncount==417
    assert con.execute("SELECT COUNT(*) FROM r128_item_tag_rank").fetchone()[0]==11178*51
    nid=con.execute("SELECT MIN(id) FROM npc").fetchone()[0]
    sample_count=con.execute("SELECT COUNT(*) FROM r128_static_preference_candidates WHERE npc_id=?",(nid,)).fetchone()[0];assert sample_count==11178
    sample=[dict(r) for r in con.execute("SELECT * FROM r128_static_preference_candidates WHERE npc_id=? AND callback_model_result=1 AND native_kind IN(9,10) ORDER BY style_overlap DESC,base_color_overlap_candidate DESC,npc_tag1_numeric_candidate,item_id LIMIT 20",(nid,))]
    con.commit();assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok";con.close()
    report={"items":len(data),"villagers":ncount,"logical_pairs":ncount*len(data),"rank_cells":sum(rank_hist.values()),"rank_distribution":dict(rank_hist),"rank_synthetic_cases":306,"color_candidate_complete_rows":sum(None not in x["base_color_candidates"] for x in data),"cache_got_targets":[{"got":gh(a),"descriptor":gh(ptr(a))} for a in sorted(got)],"cache_refs":len(refs),"known_preference_window_calls":len(known),"direct_call_counts":dict(collections.Counter(x["target"] for x in calls)),"relocation_slots":slots,"npc_tag_to_native_bit_verified":False,"actual_wearability_verified":False,"actual_preference_verified":False,"runtime_verified":False}
    for n,o in [("r128_report.json",report),("r128_rank_color_items.json",data),("r128_call_windows.json",windows),("r128_direct_calls.json",calls),("r128_cache_refs.json",list(refs.values())),("r128_c_evidence.json",evidence),("r128_sample_candidates.json",sample)]:db.write(out/n,o)
    web=load("gift_web_sidecar_r127.json");byid={x["item_id"]:x for x in data}
    for x in web["items"]:x["r128_preference_inputs"]=byid[x["id"]]
    web["limitations"].append("R128 native tag rank getter verified; NPC tag-to-bit identity, base color enum and actual wearability/affinity remain unverified. Sample ordering is heuristic.")
    db.write(out/"gift_web_sidecar_r128.json",web)
    print("R128 REPORT",json.dumps(report,ensure_ascii=False),flush=True)
    for a,rows in windows.items():print("R128 CALL",a,json.dumps(rows,ensure_ascii=False),flush=True)
    for x in refs.values():print("R128 CACHE",json.dumps(x,ensure_ascii=False),flush=True)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
