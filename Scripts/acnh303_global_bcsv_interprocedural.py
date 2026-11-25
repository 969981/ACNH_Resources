#!/usr/bin/env python3
"""Exact direct CALL graph and interprocedural field-value boundary candidates.
No ABI parameter binding or dynamic dispatch proof: CALL operand position is not a proven callee formal.
"""
import argparse,collections,json,sqlite3
from pathlib import Path
from acnh303_global_bcsv_dictionary import read,require
from acnh303_global_bcsv_pcode import rows,SLIDE
from acnh303_global_bcsv_ssa import SSA
def run(src,pc):
    aliases={x["slot_va"]+SLIDE:x["target_va"]+SLIDE for x in read(src/"native_cache_relocation_aliases.json")}
    bodies={int(x["entry"],16)-SLIDE:x for x in rows(pc/"function_bodies.ndjson")}
    uses=read(pc/"ssa_field_use_candidates.json")
    arguses=collections.defaultdict(list);returns=collections.defaultdict(list)
    for x in uses:
        if x["mnemonic"] in ("CALL","CALLIND") and x["operand"]>0:arguses[(x["entry_va"],x["op_id"])].append(x)
        elif x["mnemonic"]=="RETURN" and x["operand"]>0:returns[x["entry_va"]].append(x)
    edges=[];boundaries=[];indirect=0
    for f in rows(pc/"high_pcode.ndjson"):
        if f["status"]!="ok":continue
        entry=int(f["entry"],16)-SLIDE;ops=f["ops"];ssa=SSA(ops,aliases)
        users=collections.defaultdict(list)
        for o in ops:
            for i,n in enumerate(o["inputs"]):
                if n and n.get("def"):users[n["def"]].append((o,i))
        for o in ops:
            if o["mnemonic"]=="CALLIND":indirect+=1;continue
            if o["mnemonic"]!="CALL" or not o["inputs"]:continue
            t=ssa.constant(o["inputs"][0])
            target=t-SLIDE if t is not None else None
            if target not in bodies:continue
            e={"caller_va":entry,"callee_va":target,"call_site_va":int(o["site"],16)-SLIDE,"op_id":o["id"],"arg_count":len(o["inputs"])-1,"grade":"direct_high_pcode_call_exact_function_entry"}
            edges.append(e)
            for u in arguses[(entry,o["id"])]:
                boundaries.append({**e,"direction":"argument","operand":u["operand"],"field_load_ids":u["field_load_ids"],"grade":"field_argument_may_dependency","verified":False})
            if returns[target] and o["output"]:
                for successor,operand in users.get(o["id"],[]):
                    boundaries.append({**e,"direction":"return","callee_return_records":returns[target],"caller_consumer_op":successor["mnemonic"],"caller_consumer_id":successor["id"],"operand":operand,"grade":"callee_field_return_and_direct_caller_use_candidate","verified":False})
    summary={"direct_call_records":len(edges),"distinct_call_edges":len({(e["caller_va"],e["callee_va"]) for e in edges}),"unresolved_indirect_calls":indirect,"field_argument_boundary_candidates":sum(x["direction"]=="argument" for x in boundaries),"field_return_boundary_candidates":sum(x["direction"]=="return" for x in boundaries),"verified_interprocedural_semantics":0}
    for name,obj in [("interprocedural_summary",summary),("interprocedural_call_edges",edges),("interprocedural_field_boundaries",boundaries)]:
        (pc/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(src/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_pcode_call_edge(caller_va INTEGER,callee_va INTEGER,call_site_va INTEGER,op_id TEXT,evidence_json TEXT,PRIMARY KEY(caller_va,op_id)); CREATE INDEX native_pcode_call_callee ON native_pcode_call_edge(callee_va); CREATE TABLE native_field_call_boundary(caller_va INTEGER,callee_va INTEGER,call_site_va INTEGER,direction TEXT,evidence_json TEXT);")
        db.executemany("INSERT INTO native_pcode_call_edge VALUES(?,?,?,?,?)",((e["caller_va"],e["callee_va"],e["call_site_va"],e["op_id"],json.dumps(e)) for e in edges))
        db.executemany("INSERT INTO native_field_call_boundary VALUES(?,?,?,?,?)",((e["caller_va"],e["callee_va"],e["call_site_va"],e["direction"],json.dumps(e)) for e in boundaries))
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite")
    print(json.dumps(summary,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--dictionary",type=Path,required=True);p.add_argument("--pcode",type=Path,required=True);a=p.parse_args();run(a.dictionary,a.pcode)
