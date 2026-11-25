#!/usr/bin/env python3
"""HASH-007B.7: full executable segment cache reverse reference and scoped finder votes."""
import argparse,bisect,collections,hashlib,json,re,sqlite3,struct,subprocess
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from acnh303_global_bcsv_dictionary import read,require,DATA
from acnh303_global_bcsv_native_reader import SHA
from acnh303_round11_elf_xref import parse_elf,adrp_target,adr_target
from acnh303_global_bcsv_cache import scan
from acnh303_r100_nso_decode import decode
CROOT="derived/3.0.3/ghidra12.2/c"
SLIDE=0x100000
def run(root,out):
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    require(hashlib.sha256(elf).hexdigest()==SHA and len(relocs)==380793,"original identity")
    segs=parse_elf(elf);reloc={}
    for a,r in relocs.items():
        if r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None:reloc[a]=r["addend"]
        elif r["symbol"] and r["type"] in (257,1025,1026):
            try:
                _,_,_,idx,v,_=struct.unpack("<IBBHQQ",raw(tags[6][0]+r["symbol"]*24,24))
                if 0<idx<0xff00:reloc[a]=v+r["addend"]
            except ValueError:pass
    caches=read(out/"native_cache_candidates.json");slots=read(out/"native_cache_slots.json")
    hashes=read(out/"native_hash_materializations.json");finders=read(out/"native_findfield_all_candidates.json")
    anchor=read(out/"native_findfield_anchor.json");lifecycle=read(out/"native_lifecycle_methods.json")
    known_lifecycle={x["va"] for x in lifecycle};finder_entries={x["finder_va"] for x in finders}
    unknown={x["hash"] for x in read(root/DATA/"hash008b_remaining.json")["remaining"]}
    # Every byte mapped to one or more candidate slots. Flag and generic helper
    # ranges have separate roles, never automatically labelled table-owned.
    address=collections.defaultdict(set);bases=collections.defaultdict(set);flags=collections.defaultdict(set)
    for p in caches:
        key=(p["table"],p["base"]);bases[p["base"]].add(key);flags[p["flag"]].add(key)
        for n in range(p["slot_count"]):
            for k in range(4):address[p["base"]+4*n+k].add((p["table"],p["base"],n))
    tracked=set(address)|set(flags)|{anchor["flag_va"]}|set(range(anchor["cache_va"],anchor["cache_va"]+4*anchor["slots"]))
    aliases={a:v for a,v in reloc.items() if v in tracked}
    pages={v&~4095 for v in tracked|set(aliases)}
    exports={}
    p=subprocess.run(["git","ls-tree","-r","--name-only","HEAD","--",CROOT],cwd=root,check=True,capture_output=True,text=True)
    for path in p.stdout.splitlines():
        stem=Path(path).stem
        if re.fullmatch("[0-9a-fA-F]{8}",stem):exports[int(stem,16)-SLIDE]=path
    starts=sorted(exports)
    def owner(v):
        i=bisect.bisect_right(starts,v)-1
        return starts[i] if i>=0 and v-starts[i]<0x1000 else None
    # Export starts only: no claim that nearest predecessor covers the instruction.
    hash_by_owner=collections.defaultdict(set)
    for h in hashes:
        for s in h["materializations"]:
            o=owner(s["va"])
            if o is not None:hash_by_owner[o].add(h["hash"])
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    records={};seed_count=0;words=0
    def emit(x):
        addr=x["address"];kind=x["kind"];v=x["va"];n=x.get("width",1)
        if addr not in tracked and not any(addr+k in tracked for k in range(n)):return
        own=owner(v)
        memberships=set()
        if kind in ("read","write"):
            for k in range(n):memberships.update(address.get(addr+k,()))
        elif kind=="indexed_base":memberships.update((t,b,-1) for t,b in bases.get(addr,()))
        else:memberships.update(address.get(addr,()))
        roles=["offset_slot"] if memberships else []
        if addr in flags:roles.append("init_flag")
        if anchor["cache_va"]<=addr<anchor["cache_va"]+anchor["slots"]*4:roles.append("anchor_cache_range")
        if addr==anchor["flag_va"]:roles.append("anchor_init_flag")
        if not roles:return
        # Pointer formation is not a read; indexed base is not a known slot.
        key=(v,addr,kind,n)
        records[key]={**x,"roles":roles,"memberships":[{"table":t,"cache_va":b,"slot":s if s>=0 else None} for t,b,s in sorted(memberships)],"function_entry_candidate":own,"function_export":exports.get(own),"function_owner_grade":"nearest_export_start_bounded" if own is not None else "unknown","consumer_verified":False}
    for seg in segs:
        if not seg["flags"]&1:continue
        off=seg["file_offset"];end=off+seg["filesz"];base=seg["vaddr"]
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[off:end-(end-off)%4])):
            pc=base+4*i;words+=1
            page=adrp_target(w,pc)
            adr=adr_target(w,pc)
            if page not in pages and adr not in tracked and adr not in aliases:continue
            seed_count+=1;events=[]
            size=min(160,end-off-4*i)
            _,refs,_=scan(md,elf,segs,reloc,pc,size,address_events=events)
            for x in refs+events:emit(x)
    refs=list(records.values());refs.sort(key=lambda x:(x["va"],x["address"],x["kind"]))
    # Use precise helper-level cache base evidence before accepting any slot call vote.
    helper_scopes={};helper_evidence={}
    for va in sorted(finder_entries):
        events=[];ins,rr,_=scan(md,elf,segs,reloc,va,0x300,address_events=events)
        hit=collections.defaultdict(set)
        for x in rr+events:
            addr=x["address"]
            if x["kind"] in ("relocated_pointer","indexed_base","read") and addr in bases:
                for t,b in bases[addr]:hit[(t,b)].add(x["va"])
        if va==anchor["function_va"]:
            for t,b in bases.get(anchor["cache_va"],()):hit[(t,b)].add(va)
        helper_scopes[va]=set(hit)
        helper_evidence[va]={"finder_va":va,"cache_base_candidates":[{"table":t,"cache_va":b,"evidence_sites":sorted(v)} for (t,b),v in sorted(hit.items())],"scope_status":"unique_base_candidate" if len(hit)==1 else "ambiguous" if hit else "unresolved"}
    slot_keys={(x["table"],x["cache_va"],x["slot"]):x for x in slots}
    votes=collections.defaultdict(lambda:collections.defaultdict(set))
    for f in finders:
        va=f["finder_va"];scopes=helper_scopes[va]
        if len(scopes)!=1:continue
        t,b=next(iter(scopes));k=(t,b,f["slot"])
        if t in f["tables"] and k in slot_keys:votes[k][f["hash"]].add(f["call_va"])
    mapped=[]
    for k,x in slot_keys.items():
        original={h["hash"] for h in x["hash_candidates"]};new=set(votes[k]);combined=original|new
        mapped.append({"table":k[0],"cache_va":k[1],"slot":k[2],"slot_va":x["slot_va"],"prior_candidates":sorted(original),"scoped_finder_votes":[{"hash":h,"call_sites":sorted(v)} for h,v in sorted(votes[k].items())],"combined_hash_candidates":sorted(combined),"status":"unique_candidate" if len(combined)==1 else "conflict" if combined else "unmapped","consumer_verified":False})
    mapped_by_key={(x["table"],x["cache_va"],x["slot"]):x for x in mapped}
    fn=collections.defaultdict(list)
    for x in refs:
        if x["kind"]=="read" and x["function_entry_candidate"] is not None and x["memberships"]:fn[x["function_entry_candidate"]].append(x)
    functions=[]
    for o,rr in sorted(fn.items()):
        keys={(v["table"],v["cache_va"],v["slot"]) for x in rr for v in x["memberships"] if v["slot"] is not None}
        # Reads of a slot with a candidate hash, without matching adjacent-MOV/literal
        # materialization in the same nearest-export ownership bucket.
        associated=[mapped_by_key[k] for k in sorted(keys) if k in mapped_by_key]
        known={h for x in associated for h in x["combined_hash_candidates"]}
        observed=hash_by_owner[o]
        functions.append({"entry_candidate":o,"ghidra_va":o+SLIDE,"source_path":exports[o],"cache_read_sites":sorted({x["va"] for x in rr}),"candidate_fields":[{"table":x["table"],"cache_va":x["cache_va"],"slot":x["slot"],"hash_candidates":x["combined_hash_candidates"]} for x in associated],"materialized_hashes_in_owner_bucket":sorted(observed),"associated_hashes_not_observed":sorted(known-observed),"lifecycle_entry":o in known_lifecycle,"finder_entry":o in finder_entries,"consumer_verified":False,"owner_grade":"nearest_export_start_bounded"})
    independent=[f for f in functions if f["associated_hashes_not_observed"] and not f["lifecycle_entry"] and not f["finder_entry"]]
    summary={"executable_words_scanned":words,"targeted_address_seed_instructions":seed_count,"ghidra_export_starts":len(exports),"relocation_alias_slots":len(aliases),"cache_reference_records":len(refs),"read_records":sum(x["kind"]=="read" for x in refs),"write_records":sum(x["kind"]=="write" for x in refs),"pointer_records":sum(x["kind"]=="relocated_pointer" for x in refs),"indexed_base_records":sum(x["kind"]=="indexed_base" for x in refs),"tables_with_read_refs":len({v["table"] for x in refs if x["kind"]=="read" for v in x["memberships"]}),"reader_function_owner_candidates":len(functions),"non_materializing_candidate_functions":len(independent),"helper_unique_scope_candidates":sum(len(v)==1 for v in helper_scopes.values()),"slot_unique_candidates":sum(x["status"]=="unique_candidate" for x in mapped),"slot_conflicts":sum(x["status"]=="conflict" for x in mapped),"slot_unmapped":sum(x["status"]=="unmapped" for x in mapped),"slots_with_scoped_finder_votes":sum(bool(x["scoped_finder_votes"]) for x in mapped),"unknown_hashes_with_slot_candidates":len({h for x in mapped for h in x["combined_hash_candidates"] if h in unknown}),"verified_consumers":0}
    for name,obj in [("native_cache_xref_summary",summary),("native_cache_xrefs",refs),("native_cache_helper_scope",list(helper_evidence.values())),("native_cache_slot_votes",mapped),("native_cache_function_candidates",functions),("native_cache_non_materializing_candidates",independent)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_cache_xref(site_va INTEGER,address INTEGER,kind TEXT,width INTEGER,owner_candidate INTEGER,evidence_json TEXT,PRIMARY KEY(site_va,address,kind,width)); CREATE INDEX native_cache_xref_address ON native_cache_xref(address); CREATE TABLE native_cache_xref_member(site_va INTEGER,address INTEGER,kind TEXT,width INTEGER,table_name TEXT,cache_va INTEGER,slot INTEGER); CREATE INDEX native_cache_xref_member_slot ON native_cache_xref_member(table_name,cache_va,slot); CREATE TABLE native_cache_slot_vote(table_name TEXT,cache_va INTEGER,slot INTEGER,status TEXT,evidence_json TEXT,PRIMARY KEY(table_name,cache_va,slot)); CREATE TABLE native_cache_function_candidate(entry_va INTEGER PRIMARY KEY,evidence_json TEXT);")
        db.executemany("INSERT INTO native_cache_xref VALUES(?,?,?,?,?,?)",[(x["va"],x["address"],x["kind"],x.get("width",1),x["function_entry_candidate"],json.dumps(x)) for x in refs])
        db.executemany("INSERT INTO native_cache_xref_member VALUES(?,?,?,?,?,?,?)",[(x["va"],x["address"],x["kind"],x.get("width",1),m["table"],m["cache_va"],m["slot"]) for x in refs for m in x["memberships"]])
        db.executemany("INSERT INTO native_cache_slot_vote VALUES(?,?,?,?,?)",[(x["table"],x["cache_va"],x["slot"],x["status"],json.dumps(x)) for x in mapped])
        db.executemany("INSERT INTO native_cache_function_candidate VALUES(?,?)",[(x["entry_candidate"],json.dumps(x)) for x in functions])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite")
    print(json.dumps(summary,indent=2))
    for x in independent[:12]:print("CACHE_CONSUMER_CANDIDATE",hex(x["entry_candidate"]),json.dumps(x["associated_hashes_not_observed"]))
    for x in mapped:
        if unknown.intersection(x["combined_hash_candidates"]):print("UNKNOWN_SLOT_CANDIDATE",json.dumps(x))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
