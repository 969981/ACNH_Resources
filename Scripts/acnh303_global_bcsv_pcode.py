#!/usr/bin/env python3
"""Select original cache references, validate exact function bodies and index High P-code.
No inferred semantic promotion. All P-code candidate chains retain explicit provenance.
"""
import argparse,bisect,collections,json,sqlite3
from pathlib import Path
from acnh303_global_bcsv_dictionary import read,require
SLIDE=0x100000
def rows(p):
    with p.open(encoding="utf-8") as f:
        for l in f:yield json.loads(l)
def seed(src,dst):
    unknown={x["hash"] for x in read(src/"native_unknown_materializations.json")}
    material=read(src/"native_unknown_materializations.json")
    refs=read(src/"native_cache_xrefs.json")
    finder=read(src/"native_findfield_all_candidates.json")
    life=read(src/"native_lifecycle_methods.json")
    selected={}
    def add(va,tag):selected.setdefault(va,[]).append(tag)
    for x in material:
        for m in x["materializations"]:add(m["va"],"unknown:"+x["hash"])
    for f in finder:
        if f["hash"] in unknown:add(f["call_va"],"unknown_finder:"+f["hash"]);add(f["finder_va"],"unknown_helper:"+f["hash"])
    focus={"PlayerStateParam","RecipeCraftParam","ItemRemake","NmlNpcParam","SpNpcParam","ItemMailAttachCategoryGroup","WherearenRoll"}
    for x in refs:
        if x["kind"]=="read" and any(m["table"] in focus for m in x["memberships"]):add(x["va"],"focus_cache_read")
    for x in life:
        if x["table"] in focus and x["role"] in ("Clear","SetupRows"):add(x["va"],"focus_lifecycle:"+x["table"])
    for x in finder:add(x["finder_va"],"helper");add(x["call_va"],"finder_call")
    for x in refs:
        if x["kind"]=="read":add(x["va"],"cache_read")
    dst.parent.mkdir(parents=True,exist_ok=True)
    dst.write_text("".join(f"{va:x}\t{';'.join(dict.fromkeys(tags))}\n" for va,tags in selected.items()),encoding="utf-8")
    print("PCODE_SEEDS",len(selected))
def merge(src,pc):
    bodies=list(rows(pc/"function_bodies.ndjson"));owners=list(rows(pc/"seed_owners.ndjson"));summary=read(pc/"summary.json")
    require(len(bodies)==summary["function_count"] and len(owners)==summary["seeds"],"export count")
    entries={int(x["entry"],16):x for x in bodies};require(len(entries)==len(bodies),"duplicate function entry")
    ranges=[]
    for e,b in entries.items():
        rr=[(int(a,16),int(z,16)) for a,z in b["ranges"]]
        require(all(a<=z for a,z in rr) and sum(z-a+1 for a,z in rr)==b["byte_count"],"body size")
        ranges.extend((a,z,e) for a,z in rr)
    ranges.sort();owner_map={}
    for x in owners:
        site=int(x["site"],16);e=int(x["entry"],16) if x["entry"] is not None else None
        if e is not None:require(e in entries and any(int(a,16)<=site<=int(z,16) for a,z in entries[e]["ranges"]),"owner outside function body")
        owner_map[site]=e
    pcode=list(rows(pc/"high_pcode.ndjson"));require(len(pcode)==summary["attempted"],"pcode count")
    # P-code uses the original Ghidra address domain. No slot association by numeric proximity.
    chains=[];stats=collections.Counter()
    for f in pcode:
        if f["status"]!="ok":continue
        e=int(f["entry"],16);require(e in entries,"missing entry")
        ops=f["ops"];index={o["id"]:o for o in ops};require(len(index)==len(ops),"duplicate op")
        stats["ops"]+=len(ops);stats["blocks"]+=len(f["blocks"])
        for o in ops:
            if o["mnemonic"] not in ("LOAD","STORE","CALL","CALLIND"):continue
            stats[o["mnemonic"]]+=1
            # Export actual SSA predecessor IDs for inspection rather than guessing a pointer.
            predecessor=[v["def"] for v in o["inputs"] if v and v.get("def") in index]
            if predecessor:chains.append({"entry":e,"site":o["site"],"op":o["mnemonic"],"id":o["id"],"input_defs":predecessor,"consumer_verified":False})
    refs=read(src/"native_cache_xrefs.json")
    exact=[]
    for x in refs:
        if x["kind"]!="read":continue
        site=x["va"]+SLIDE
        if site not in owner_map or owner_map[site] is None:continue
        exact.append((x["va"],x["address"],owner_map[site]-SLIDE,json.dumps(x["memberships"])))
    with sqlite3.connect(src/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE ghidra_function_body(entry_va INTEGER PRIMARY KEY,name TEXT,byte_count INTEGER,evidence_json TEXT); CREATE TABLE ghidra_function_range(entry_va INTEGER,start_va INTEGER,end_va INTEGER,PRIMARY KEY(entry_va,start_va)); CREATE TABLE native_cache_exact_owner(site_va INTEGER,cache_address INTEGER,entry_va INTEGER,memberships_json TEXT); CREATE INDEX exact_owner_entry ON native_cache_exact_owner(entry_va); CREATE TABLE ghidra_high_pcode(entry_va INTEGER PRIMARY KEY,status TEXT,evidence_json TEXT);")
        db.executemany("INSERT INTO ghidra_function_body VALUES(?,?,?,?)",[(e-SLIDE,b["name"],b["byte_count"],json.dumps(b)) for e,b in entries.items()])
        db.executemany("INSERT INTO ghidra_function_range VALUES(?,?,?)",[(e-SLIDE,a-SLIDE,z-SLIDE) for a,z,e in ranges])
        db.executemany("INSERT INTO native_cache_exact_owner VALUES(?,?,?,?)",exact)
        db.executemany("INSERT INTO ghidra_high_pcode VALUES(?,?,?)",[(int(f["entry"],16)-SLIDE,f["status"],json.dumps(f)) for f in pcode])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    result={**summary,"body_ranges":len(ranges),"exact_cache_read_records":len(exact),"exact_cache_reader_functions":len({x[2] for x in exact}),"pcode_stats":dict(stats),"ssa_predecessor_records":len(chains),"verified_gameplay_consumers":0}
    (pc/"pcode_evidence_summary.json").write_text(json.dumps(result,indent=2)+"\n")
    (pc/"ssa_predecessor_candidates.json").write_text(json.dumps(chains,indent=2)+"\n")
    print(json.dumps(result,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("mode",choices=["seed","merge"]);p.add_argument("--dictionary",type=Path,required=True);p.add_argument("--pcode",type=Path,required=True);a=p.parse_args()
    if a.mode=="seed":seed(a.dictionary,a.pcode)
    else:merge(a.dictionary,a.pcode)
