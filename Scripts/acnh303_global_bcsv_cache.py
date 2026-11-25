#!/usr/bin/env python3
"""HASH-007B.3-5: original NSO relocation, cache initialization and field-slot voting.
Candidate mapping is deliberately separate from verified consumer semantics.
"""
import argparse,bisect,collections,hashlib,json,re,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
from acnh303_global_bcsv_dictionary import read,require,DATA,blob
from acnh303_global_bcsv_native_reader import ELF,SHA
from acnh303_round11_elf_xref import parse_elf,get_bytes_va,adrp_target
from acnh303_global_bcsv_lifecycle import reg,finder_pattern
from acnh303_r100_nso_decode import decode
MASK=(1<<64)-1
def width(name,m):
    if m.endswith("b") and m.startswith(("ldr","str","ldur","stur")):return 1
    if m.endswith("h") and m.startswith(("ldr","str","ldur","stur")):return 2
    return {"w":4,"x":8,"q":16,"d":8,"s":4,"h":2,"b":1}.get(name[:1],0)
def intervals(points):
    out=[]
    for v in sorted(set(points)):
        if not out or v!=out[-1][1]:out.append([v,v+1])
        else:out[-1][1]+=1
    return out
def cache_candidates(refs,field_count):
    flags={x["address"] for x in refs if x["kind"]=="write" and x.get("value")==1 and x["width"] in (1,4)}
    filled=set()
    for x in refs:
        if x["kind"]=="write" and x.get("value")==((1<<(8*x["width"]))-1):
            filled.update(range(x["address"],x["address"]+x["width"]))
    out=[]
    for flag in sorted(flags):
        base=(flag+4)&~3;end=base
        while end-base<4*field_count and all(i in filled for i in range(end,end+4)):end+=4
        if end>base and not any(i in filled for i in range(end,end+4)):
            out.append({"flag":flag,"base":base,"slot_count":(end-base)//4,"full_schema_count":end-base==4*field_count})
    return out
def scan(md,elf,segs,reloc,va,size,address_events=None):
    raw=get_bytes_va(elf,segs,va,size)
    if raw is None:return [],[],[]
    ins=list(md.disasm(raw,va));regs={"zero":0};refs=[];calls=[]
    writable=lambda a,n:any(s["flags"]&2 and s["vaddr"]<=a and a+n<=s["vaddr"]+s["memsz"] for s in segs)
    # Values are only tracked locally; no branch merges or interprocedural claims.
    for i in ins:
        ops=i.operands;m=i.mnemonic;pending={}
        def name(o):return i.reg_name(o.reg)
        def val(o):
            return o.imm if o.type==ARM64_OP_IMM else regs.get(reg(name(o))) if o.type==ARM64_OP_REG else None
        dest=reg(name(ops[0])) if ops and ops[0].type==ARM64_OP_REG else None
        result=None
        if m in ("adr","adrp") and len(ops)==2:result=val(ops[1])
        elif m in ("mov","movz","movn") and len(ops)==2:
            result=val(ops[1])
            if result is not None:
                result<<=ops[1].shift.value
                if m=="movn":result=~result
        elif m=="movk" and len(ops)==2 and dest in regs:
            shift=ops[1].shift.value;result=(regs[dest]&~(65535<<shift))|(ops[1].imm<<shift)
        elif m in ("add","sub") and len(ops)==3:
            x,y=val(ops[1]),val(ops[2])
            if x is not None and y is not None:result=x+(1 if m=="add" else -1)*(y<<ops[2].shift.value)
        elif m=="movi" and ops and re.search(r"#(?:0xff|0xffffffffffffffff)(?:$|,)",i.op_str):
            if ".16b" in i.op_str or ".2d" in i.op_str:result=(1<<128)-1
        if not i.writeback:
            for oi,o in enumerate(ops):
                if o.type!=ARM64_OP_MEM:continue
                base=regs.get(reg(i.reg_name(o.mem.base)))
                if o.mem.index:
                    if address_events is not None and base is not None:
                        address_events.append({'va':i.address,'address':base+o.mem.disp,'kind':'indexed_base','asm':m+' '+i.op_str})
                    continue
                if base is None:continue
                address=base+o.mem.disp
                load=m.startswith(("ldr","ldp","ldur","ldar"));store=m.startswith(("str","stp","stur","stlr"))
                if not (load or store):continue
                for k in range(2 if m in ("ldp","stp") else 1):
                    if k>=oi or ops[k].type!=ARM64_OP_REG:continue
                    n=width(name(ops[k]),m)
                    if not n:continue
                    addr=address+k*n
                    if writable(addr,n):
                        x={"va":i.address,"address":addr,"width":n,"kind":"read" if load else "write","asm":m+" "+i.op_str}
                        if store:
                            v=val(ops[k])
                            if v is not None:x["value"]=v&((1<<(8*n))-1)
                        refs.append(x)
                    if load and n==8 and addr in reloc and writable(reloc[addr],1):
                        pending[reg(name(ops[k]))]=reloc[addr]
                        if address_events is not None:address_events.append({'va':i.address,'address':reloc[addr],'kind':'relocated_pointer','pointer_slot':addr,'asm':m+' '+i.op_str})
        if m=="bl" and ops and ops[0].type==ARM64_OP_IMM:
            calls.append({"va":i.address,"target":ops[0].imm,"args":{f"x{k}":regs[f"x{k}"] for k in range(3) if f"x{k}" in regs}})
        try:_,writes=i.regs_access()
        except Exception:writes=[]
        for rr in writes:
            k=reg(i.reg_name(rr))
            if k!="zero":regs.pop(k,None)
        if result is not None and dest and dest!="zero":
            n=32 if name(ops[0]).startswith("w") else 128 if name(ops[0]).startswith("v") else 64
            regs[dest]=result&((1<<n)-1)
            if address_events is not None and m in ('adr','adrp','add','sub'):
                address_events.append({'va':i.address,'address':regs[dest],'kind':'address_formation','asm':m+' '+i.op_str})
        regs.update(pending)
        if m in ("bl","blr"):
            for k in range(19):regs.pop(f"x{k}",None)
        if m in ("b","br","ret") or m.startswith(("b.","cbz","cbnz","tbz","tbnz")):regs={"zero":0}
    return ins,refs,calls
def run(root,out):
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    require(hashlib.sha256(elf).hexdigest()==SHA and len(relocs)==380793,"original identity")
    segs=parse_elf(elf);reloc={}
    for addr,r in relocs.items():
        if r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None:reloc[addr]=r["addend"]
        elif r["symbol"] and r["type"] in (257,1025,1026):
            try:
                sb=raw(tags[6][0]+r["symbol"]*24,24);_,_,_,idx,v,_=struct.unpack("<IBBHQQ",sb)
                if 0<idx<0xff00:reloc[addr]=v+r["addend"]
            except ValueError:pass
    # Independently authenticated known FindField decompiler anchor and relocated pointer pair.
    cpath=root/"derived/3.0.3/ghidra12.2/c/8f/01d38ff0.c"
    c=cpath.read_bytes();s=c.decode("utf-8")
    for needle in ("param_2 < 0x20","0xfffffffe","piVar10 = piVar10 + 2","puVar6 + 0x78","PTR_DAT_04bc11e8","PTR_DAT_04bc11f0"):
        require(needle in s,"Ghidra anchor "+needle)
    flagptr,cacheptr=0x04bc11e8-0x100000,0x04bc11f0-0x100000
    require(flagptr in reloc and cacheptr in reloc,"FindField pointer relocation missing")
    anchor={"function_va":0x1c38ff0,"ghidra_va":0x1d38ff0,"flag_pointer_slot":flagptr,"cache_pointer_slot":cacheptr,"flag_va":reloc[flagptr],"cache_va":reloc[cacheptr],"slots":32,"sentinels":{"unsearched":-1,"not_found":-2},"source":str(cpath.relative_to(root)),"source_sha256":hashlib.sha256(c).hexdigest(),"table_scope":"unverified"}
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    methods=read(out/"native_lifecycle_methods.json");fields=read(out/"fields.json");hashes=read(out/"native_hash_materializations.json")
    schema=collections.defaultdict(set)
    for f in fields:schema[f["table"]].add(f["hash"])
    cache_records={};seen_methods=set()
    for m in methods:
        if m["role"] not in ("Clear","SetupRows"):continue
        key=(m["table"],m["va"])
        if key in seen_methods or not m["window_bytes"]:continue
        seen_methods.add(key)
        _,refs,calls=scan(md,elf,segs,reloc,m["va"],m["window_bytes"])
        for p in cache_candidates(refs,len(schema[m["table"]])):
            k=(m["table"],p["base"],p["slot_count"])
            v=cache_records.setdefault(k,{"table":m["table"],**p,"init_sites":[],"grade":"local_init_pattern_candidate"})
            v["init_sites"].append({"va":m["va"],"role":m["role"],"write_instructions":[x for x in refs if x["kind"]=="write" and p["flag"]<=x["address"]<p["base"]+p["slot_count"]*4]})
    caches=list(cache_records.values())
    # Index every possible slot address, retaining ambiguous ownership.
    address_index=collections.defaultdict(list)
    for p in caches:
        for slot in range(p["slot_count"]):address_index[p["base"]+4*slot].append((p["table"],p["base"],slot))
    # Read-side voting across all 6074 original hash materialization sites.
    # Require single read cache slot for that table and hash within a bounded window;
    # no schema-order promotion. A single vote is a candidate, not proof.
    votes=collections.defaultdict(lambda:collections.defaultdict(set));finder_votes=[];finder_targets={};read_refs=set();unknown=read(root/DATA/"hash008b_remaining.json")["remaining"]
    unknown_set={x["hash"] for x in unknown}
    for h in hashes:
        hv=int(h["hash"],16);tables={x["table"] for x in h["occurrences"]}
        for site in h["materializations"]:
            va=site["va"];ins,refs,calls=scan(md,elf,segs,reloc,va-80,192)
            by_table=collections.defaultdict(set)
            for x in refs:
                if x["kind"]!="read" or x["width"]!=4:continue
                for t,b,sl in address_index.get(x["address"],[]):
                    if t in tables:
                        by_table[t].add((b,sl));read_refs.add((t,b,sl,x["va"]))
            for t,slots in by_table.items():
                if len(slots)==1:
                    b,sl=next(iter(slots));votes[(t,b,sl)][h["hash"]].add(va)
            for call in calls:
                args=call["args"];slot=args.get("x1")
                if args.get("x2")!=hv or slot is None or not 0<=slot<=4096:continue
                target=call["target"]
                if target not in finder_targets:
                    di,dr,dc=scan(md,elf,segs,reloc,target,96)
                    finder_targets[target]=finder_pattern(di)
                if finder_targets[target]:
                    finder_votes.append({"hash":h["hash"],"tables":sorted(tables),"call_va":call["va"],"finder_va":target,"slot":slot,"grade":"local_argument_and_finder_pattern"})
    slot_rows=[]
    for p in caches:
        for slot in range(p["slot_count"]):
            v=votes[(p["table"],p["base"],slot)]
            slot_rows.append({"table":p["table"],"cache_va":p["base"],"slot":slot,"slot_va":p["base"]+4*slot,"hash_candidates":[{"hash":h,"materialization_sites":sorted(s)} for h,s in sorted(v.items())],"status":"unanimous_local_vote" if len(v)==1 else "conflict" if v else "unmapped","verified":False})
    # All table names remain in the coverage report, including no-cache tables.
    coverage=[{"table":t,"cache_candidates":sum(p["table"]==t for p in caches),"unanimous_slots":sum(x["table"]==t and x["status"]=="unanimous_local_vote" for x in slot_rows)} for t in sorted(schema)]
    funiq={(x["hash"],x["call_va"],x["finder_va"],x["slot"]):x for x in finder_votes}
    summary={"original_nso_relocations":len(relocs),"resolved_relative_or_defined_pointers":len(reloc),"lifecycle_methods_scanned":len(seen_methods),"tables_total":len(schema),"tables_with_cache_candidates":sum(x["cache_candidates"]>0 for x in coverage),"cache_candidates":len(caches),"candidate_slots":len(slot_rows),"unanimous_slot_candidates":sum(x["status"]=="unanimous_local_vote" for x in slot_rows),"conflict_slots":sum(x["status"]=="conflict" for x in slot_rows),"unmapped_slots":sum(x["status"]=="unmapped" for x in slot_rows),"unknown_hashes_with_slot_votes":len({v["hash"] for x in slot_rows for v in x["hash_candidates"] if v["hash"] in unknown_set}),"findfield_call_candidates":len(funiq),"findfield_targets":len({x["finder_va"] for x in funiq.values()}),"verified_field_consumers":0}
    for name,obj in [("native_cache_summary",summary),("native_cache_candidates",caches),("native_cache_slots",slot_rows),("native_cache_coverage",coverage),("native_findfield_all_candidates",list(funiq.values())),("native_findfield_anchor",anchor)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_cache_candidate(table_name TEXT,cache_va INTEGER,slot_count INTEGER,evidence_json TEXT,PRIMARY KEY(table_name,cache_va,slot_count)); CREATE TABLE native_cache_slot(table_name TEXT,cache_va INTEGER,slot INTEGER,slot_va INTEGER,status TEXT,evidence_json TEXT,PRIMARY KEY(table_name,cache_va,slot)); CREATE INDEX cache_slot_va ON native_cache_slot(slot_va);")
        db.executemany("INSERT INTO native_cache_candidate VALUES(?,?,?,?)",[(p["table"],p["base"],p["slot_count"],json.dumps(p)) for p in caches])
        # A conflicting length hypothesis must not silently duplicate physical slots.
        unique={(p["table"],p["cache_va"],p["slot"]):p for p in slot_rows}
        db.executemany("INSERT INTO native_cache_slot VALUES(?,?,?,?,?,?)",[(p["table"],p["cache_va"],p["slot"],p["slot_va"],p["status"],json.dumps(p)) for p in unique.values()])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite")
    print(json.dumps(summary,indent=2));print("FIND_FIELD_ANCHOR",json.dumps(anchor))
    for t in coverage:
        if t["table"] in ("PlayerStateParam","ItemRemake","RecipeCraftParam","NmlNpcParam","SpNpcParam","WherearenRoll","ItemMailAttachCategoryGroup"):
            print("CACHE_FOCUS",json.dumps(t))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
