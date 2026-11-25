#!/usr/bin/env python3
"""HASH-008R: original predicate windows and context-dependent candidate scenarios."""
import argparse,json,sqlite3,datetime,itertools
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_hash008e import decode,parse_elf,get_bytes_va,require
S=0x100000
FLOWER=((154,0x81f),(152,0xe),(155,0x3c),(153,0xe70),(151,0x7c0),(150,0x1e0),(148,0xf81),(156,0xc0f))
def sources_for_month(month,hemisphere):
    if not 1<=month<=12 or hemisphere not in (0,1):raise ValueError("month/hemisphere")
    m=(month+5)%12+1 if hemisphere==1 else month
    return {index for index,mask in FLOWER if mask & (1<<(m-1))}
def seasonal_sources(now,hemisphere,excluded_seed_ordinals):
    if not isinstance(now,datetime.datetime):raise ValueError("explicit local game date required")
    if len(excluded_seed_ordinals)!=2 or any(not 0<=i<8 for i in excluded_seed_ordinals):raise ValueError("two island seed indices required")
    day=now-datetime.timedelta(days=1) if now.hour<5 else now
    return sources_for_month(day.month,hemisphere)-{FLOWER[i][0] for i in excluded_seed_ordinals}
def furniture_sources(state):
    if not 0<=state<=3:raise ValueError("native caller normalizes invalid state to 0")
    return {1} if state<2 else {1,5} if state==2 else {1,5,7}
def furniture_pool(items,state,excluded_normalized_ids):
    if excluded_normalized_ids is None:raise ValueError("explicit NPC exclusion context required")
    return {i for i,k,f,g in items if k==0 and f in furniture_sources(state)}-set(excluded_normalized_ids)
def run(root,out):
    db=sqlite3.connect(out/"mail_rewards.sqlite")
    db.execute("PRAGMA foreign_keys=ON")
    items=db.execute("select item_id,kind_index,from_index,can_gift from item").fetchall()
    cfg=db.execute("select config_id,handling from config where handling in (7,9)").fetchall()
    require(len(cfg)==4,"config coverage")
    db.executescript("CREATE TABLE IF NOT EXISTS context_case(config_id TEXT REFERENCES config(config_id),case_id TEXT,inputs_json TEXT,status TEXT,PRIMARY KEY(config_id,case_id)); CREATE TABLE IF NOT EXISTS context_case_candidate(config_id TEXT,case_id TEXT,item_id INTEGER REFERENCES item(item_id),PRIMARY KEY(config_id,case_id,item_id),FOREIGN KEY(config_id,case_id) REFERENCES context_case(config_id,case_id));")
    db.execute("DELETE FROM context_case_candidate");db.execute("DELETE FROM context_case")
    cases=[]
    def add(cid,key,inputs,pool,status):
        ids=sorted(pool)
        db.execute("INSERT INTO context_case VALUES(?,?,?,?)",(cid,key,json.dumps(inputs),status))
        db.executemany("INSERT INTO context_case_candidate VALUES(?,?,?)",[(cid,key,i) for i in ids])
        cases.append({"config_id":cid,"case_id":key,"inputs":inputs,"item_ids":ids,"count":len(ids),"status":status})
    for cid,t in cfg:
        if t==7:
            for h,m in itertools.product(range(2),range(1,13)):
                src=sources_for_month(m,h)
                # Pre-exclusion reference plus all ordered context pairs (including equal).
                add(cid,f"season_{h}_{m:02}_pre",{"hemisphere":h,"effective_month":m,"source_indices":sorted(src)}, {i for i,k,f,g in items if f in src and g},"pre_island_exclusion")
                for a,b in itertools.product(range(8),repeat=2):
                    selected=src-{FLOWER[a][0],FLOWER[b][0]}
                    add(cid,f"season_{h}_{m:02}_{a}_{b}",{"hemisphere":h,"effective_month":m,"seed_ordinals":[a,b],"source_indices":sorted(selected)}, {i for i,k,f,g in items if f in selected and g},"explicit_context_static_template_proxy")
        else:
            for state in range(4):
                add(cid,f"furniture_state_{state}",{"state":state,"source_indices":sorted(furniture_sources(state)),"npc_exclusions":None},furniture_pool(items,state,[]) & {i for i,k,f,g in items if g},"before_npc_exclusion")
    require(sources_for_month(1,1)==sources_for_month(7,0),"hemisphere shift")
    require(seasonal_sources(datetime.datetime(2026,2,1,4),0,[0,0])==sources_for_month(1,0)-{154},"5am boundary")
    require(furniture_sources(0)==furniture_sources(1) and furniture_sources(3)=={1,5,7},"state")
    require(db.execute("pragma integrity_check").fetchone()[0]=="ok" and not db.execute("pragma foreign_key_check").fetchall(),"db integrity")
    db.commit()
    coverage=db.execute("""select count(*) from config c where proxy_count>0 or exists(select 1 from scenario_candidate s where s.config_id=c.config_id) or exists(select 1 from context_case_candidate d where d.config_id=c.config_id)""").fetchone()[0]
    db.close()
    (out/"context_cases.json").write_text(json.dumps(cases,ensure_ascii=False,indent=2)+"\n")
    elf,nso,mapped,segments,raw,tags,relocs=decode(root);segs=parse_elf(elf);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    # Bounded window of unknown predicate; retains neighbouring instructions rather than claiming function boundary.
    a=0x01A4775C-S;data=raw(a,0x600);require(data==get_bytes_va(elf,segs,a,len(data)),"predicate bytes mismatch")
    ins=list(md.disasm(data,a));lines=[{"address":f"{i.address+S:08X}","asm":i.mnemonic+" "+i.op_str} for i in ins]
    (out/"type3_predicate_window.json").write_text(json.dumps(lines,indent=2)+"\n")
    print("TYPE3_WINDOW",json.dumps(lines))
    summary={"cases":len(cases),"members":sum(x["count"] for x in cases),"covered_configs":coverage,"unresolved_configs":144-coverage,"type7_pre":[{"case":x["case_id"],"count":x["count"]} for x in cases if x["status"]=="pre_island_exclusion"],"type9":[{"case":x["case_id"],"config":x["config_id"],"count":x["count"]} for x in cases if x["status"]=="before_npc_exclusion"],"runtime_final_verified":0}
    (out/"context_summary.json").write_text(json.dumps(summary,indent=2)+"\n");print("CONTEXT_SUMMARY",json.dumps(summary))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
