#!/usr/bin/env python3
"""HASH-007L.5: recursive bounded SSA resolution and original-cache dataflow.
Constants are bit vectors, RAM nodes are values, and relocation slots are not
ordinary mutable memory. A dependency is not a verified gameplay meaning.
"""
import argparse,collections,json,sqlite3
from pathlib import Path
from acnh303_global_bcsv_dictionary import read,require
from acnh303_global_bcsv_pcode import rows,SLIDE
MAX_DEPTH=64
MAX_ORIGINS=32
def bits(n):return max(1,n["size"])*8
def mask(n):return (1<<bits(n))-1
def signed(v,n):
    b=bits(n);v&=(1<<b)-1
    return v-(1<<b) if v>>(b-1) else v
def intval(n):return int(n["offset"],16)
def isram(n):return n is not None and n.get("space")=="ram"
def key(n):
    return (n.get("def"),n["space"],n["offset"],n["size"]) if n else None
def call_target(ssa,n):
    # CALL input 0 in Ghidra is a code address, not the contents of RAM.
    if isram(n) and not n.get("def"):return intval(n)
    return ssa.constant(n)
class SSA:
    def __init__(self,ops,aliases):
        self.ops={o["id"]:o for o in ops};self.aliases=aliases
        self.memo={};self.fail=collections.Counter()
    def constant(self,n,active=frozenset(),depth=0):
        if n is None:return None
        if n.get("constant"):return intval(n)&mask(n)
        k=key(n)
        if k in self.memo:return self.memo[k]
        if k in active or depth>=MAX_DEPTH:
            self.fail["cycle_or_depth"]+=1;return None
        d=n.get("def");o=self.ops.get(d)
        # Only authenticated relocation data, and only a definition-free 64-bit RAM value.
        if o is None:
            if not d and isram(n) and n["size"]==8:
                return self.aliases.get(intval(n))
            return None
        inputs=o["inputs"];m=o["mnemonic"];nactive=active|{k}
        def c(i):return self.constant(inputs[i],nactive,depth+1)
        v=None
        if m in ("COPY","CAST","INT_ZEXT","INT_SEXT") and len(inputs)==1:
            v=c(0)
            if v is not None and m=="INT_SEXT":v=signed(v,inputs[0])
        elif m=="LOAD" and len(inputs)==2 and n["size"]==8:
            p=c(1)
            if p is not None:v=self.aliases.get(p)
        elif m=="MULTIEQUAL" and inputs:
            vs=[c(i) for i in range(len(inputs))]
            if all(x is not None for x in vs) and len(set(vs))==1:v=vs[0]
        elif m in ("INT_ADD","INT_SUB","INT_MULT","INT_AND","INT_OR","INT_XOR","INT_LEFT","INT_RIGHT","INT_SRIGHT","PTRADD","PTRSUB","SUBPIECE","PIECE") and len(inputs)>=2:
            x,y=c(0),c(1)
            if x is not None and y is not None:
                if m=="PTRADD" and len(inputs)==3:
                    z=c(2)
                    if z is not None:v=x+y*z
                elif m in ("INT_ADD","PTRSUB"):v=x+y
                elif m=="INT_SUB":v=x-y
                elif m=="INT_MULT":v=x*y
                elif m=="INT_AND":v=x&y
                elif m=="INT_OR":v=x|y
                elif m=="INT_XOR":v=x^y
                elif m in ("INT_LEFT","INT_RIGHT","INT_SRIGHT") and y<=bits(inputs[0]):
                    v=x<<y if m=="INT_LEFT" else signed(x,inputs[0])>>y if m=="INT_SRIGHT" else x>>y
                elif m=="SUBPIECE" and y<inputs[0]["size"]:v=x>>(8*y)
                elif m=="PIECE":v=(x<<bits(inputs[1]))|y
        elif m in ("INT_NEGATE","INT_2COMP") and len(inputs)==1:
            x=c(0)
            if x is not None:v=~x if m=="INT_NEGATE" else -x
        if v is not None:v&=mask(n)
        # Do not cache failed/cyclic paths, which might have a valid noncyclic context.
        if v is not None:self.memo[k]=v
        return v
def membership(addr,width,index):
    # One aligned 32-bit slot only. Wide vector loads are not a slot-value proof.
    return index.get(addr,[]) if width==4 else []
def analyze_function(f,index,aliases,scopes,fields,prior):
    ops=f["ops"];ssa=SSA(ops,aliases);entry=int(f["entry"],16)-SLIDE
    origins={};node_origins=collections.defaultdict(set);direct=[];finder=[];usage=[];field_load=[]
    # Exact SSA definition IDs, not reused physical register names.
    def mark(n,ids):
        if n is not None and n.get("def"):node_origins[n["def"]].update(ids)
    def get(n):
        if n is None:return set()
        if n.get("def"):return set(node_origins.get(n["def"],()))
        return set()
    def add_origin(o,addr,ms,kind,out):
        oid=o["id"]+"|"+kind+"|"+str(addr)
        origins[oid]={"origin_id":oid,"entry_va":entry,"site_va":int(o["site"],16)-SLIDE,"op_id":o["id"],"kind":kind,"address":addr,"memberships":ms}
        mark(out,{oid})
        return oid
    # RAM inputs with no SSA def represent direct global values, not pointer addresses.
    # They are seeded at the use, including optimized COPY / comparison forms.
    for o in ops:
        out=o["output"];m=o["mnemonic"];ins=o["inputs"]
        if m=="LOAD" and out and len(ins)==2:
            p=ssa.constant(ins[1])
            if p is not None:
                ms=membership(p-SLIDE,out["size"],index)
                if ms:
                    oid=add_origin(o,p-SLIDE,ms,"cache_load",out)
                    direct.append(origins[oid])
        if m=="CALL" and len(ins)>=4:
            target=call_target(ssa,ins[0]);slot=ssa.constant(ins[2]);hv=ssa.constant(ins[3])
            if target is not None and slot is not None and hv is not None and 0<=slot<=4096 and 0<=hv<=0xffffffff:
                scope=scopes.get(target-SLIDE,[])
                if len(scope)==1:
                    t,b=scope[0];h=f"{hv:08X}";addr=b+4*slot
                    ms=[x for x in index.get(addr,[]) if x["table"]==t and x["cache_va"]==b and x["slot"]==slot]
                    if ms and (t,h) in fields:
                        oid=add_origin(o,addr,ms,"findfield_result",out)
                        rec={**origins[oid],"hash":h,"finder_va":target-SLIDE,"slot":slot,"row_arg":ins[1],"grade":"ssa_call_args_and_prior_helper_scope_candidate"}
                        finder.append(rec)
    direct_use={}
    for o in ops:
        # For LOAD/STORE, space ID is not a value; for CALL the target is not a field argument.
        for j,n in enumerate(o["inputs"]):
            if not n or not isram(n) or n.get("def"):continue
            if o["mnemonic"] in ("LOAD","STORE") and j==0 or o["mnemonic"] in ("CALL","CALLIND") and j==0:continue
            addr=intval(n)-SLIDE;ms=membership(addr,n["size"],index)
            if ms:
                oid=o["id"]+"|ram|"+str(j)+"|"+str(addr)
                origins[oid]={"origin_id":oid,"entry_va":entry,"site_va":int(o["site"],16)-SLIDE,"op_id":o["id"],"kind":"direct_ram_value","address":addr,"memberships":ms}
                direct_use[(o["id"],j)]={oid};direct.append(origins[oid])
    def input_origins(o,j):
        return get(o["inputs"][j])|direct_use.get((o["id"],j),set())
    passthrough={"COPY","CAST","INT_ZEXT","INT_SEXT","SUBPIECE","PIECE","INT_ADD","INT_SUB","PTRADD","PTRSUB","MULTIEQUAL","INT_AND","INT_OR","INT_XOR","INT_MULT","INT_LEFT","INT_RIGHT","INT_SRIGHT","INT_NEGATE","INT_2COMP"}
    # Monotone def-use fixpoint handles loops and phi nodes. Origins are may-dependencies;
    # ambiguous phi paths are not collapsed into a single proven field.
    users=collections.defaultdict(set)
    for o in ops:
        for n in o["inputs"]:
            if n and n.get("def"):users[n["def"]].add(o["id"])
    queue=collections.deque(o["id"] for o in ops if o["mnemonic"] in passthrough)
    queued=set(queue);overflow=set()
    while queue:
        oid=queue.popleft();queued.discard(oid);o=ssa.ops[oid]
        if o["mnemonic"] not in passthrough or not o["output"]:continue
        values=set().union(*(input_origins(o,j) for j in range(len(o["inputs"]))))
        if any(n and n.get("def") in overflow for n in o["inputs"]):overflow.add(oid)
        old=node_origins[oid]
        if len(old|values)>MAX_ORIGINS:
            overflow.add(oid);values=set(sorted(old|values)[:MAX_ORIGINS])
        new=values-old
        if new:
            old.update(new)
            for u in users[oid]:
                if u not in queued:queue.append(u);queued.add(u)
    # Separate field LOAD results from raw cache-offset dependencies; propagate
    # only actual field-load values to branch/return/call, never arbitrary memory.
    field_values=collections.defaultdict(set)
    for o in ops:
        m=o["mnemonic"];out=o["output"];ins=o["inputs"]
        if m=="LOAD" and out and len(ins)==2:
            ids=input_origins(o,1)
            if not ids or o["id"] in overflow or ins[1].get("def") in overflow:continue
            # Direct LOAD of a slot itself is not a gameplay field load.
            if ssa.constant(ins[1]) is not None:continue
            # Require a pointer expression or known FindField return; generic
            # taint alone remains a may-dependence and never upgrades the mapping.
            d=ssa.ops.get(ins[1].get("def"));shape=d["mnemonic"] if d else None
            kinds={origins[x]["kind"] for x in ids}
            if shape not in ("INT_ADD","PTRADD","PTRSUB","COPY","CAST","MULTIEQUAL") and "findfield_result" not in kinds:continue
            rec={"entry_va":entry,"site_va":int(o["site"],16)-SLIDE,"op_id":o["id"],"load_width":out["size"],"address_definition":ins[1].get("def"),"address_shape":shape,"origin_ids":sorted(ids),"grade":"ssa_may_dependency_address_load","consumer_verified":False}
            field_load.append(rec);field_values[o["id"]].add(o["id"])
    # Forward field-value tracking through arithmetic and comparisons; do not
    # propagate through calls or memory writes. Record actual operand positions.
    flowops=passthrough|{"INT_EQUAL","INT_NOTEQUAL","INT_LESS","INT_SLESS","INT_LESSEQUAL","INT_SLESSEQUAL","BOOL_NEGATE","BOOL_AND","BOOL_OR","BOOL_XOR","FLOAT_EQUAL","FLOAT_NOTEQUAL","FLOAT_LESS","FLOAT_LESSEQUAL","FLOAT_ADD","FLOAT_SUB","FLOAT_MULT","FLOAT_DIV","FLOAT_INT2FLOAT","FLOAT_FLOAT2FLOAT"}
    queue=collections.deque(o["id"] for o in ops if o["mnemonic"] in flowops);queued=set(queue)
    while queue:
        oid=queue.popleft();queued.discard(oid);o=ssa.ops[oid]
        if o["mnemonic"] not in flowops or not o["output"]:continue
        vals=set().union(*(field_values.get(n.get("def"),set()) for n in o["inputs"] if n)) if o["inputs"] else set()
        old=field_values[oid];new=vals-old
        if len(old|vals)>MAX_ORIGINS:overflow.add(oid);continue
        if new:
            old.update(new)
            for u in users[oid]:
                if u not in queued:queue.append(u);queued.add(u)
    for o in ops:
        if o["mnemonic"] not in ("INT_SEXT","INT_ZEXT","INT_EQUAL","INT_NOTEQUAL","INT_LESS","INT_SLESS","INT_LESSEQUAL","INT_SLESSEQUAL","CBRANCH","CALL","CALLIND","RETURN","STORE","FLOAT_EQUAL","FLOAT_LESS"):continue
        for j,n in enumerate(o["inputs"]):
            if not n or n.get("def") in overflow:continue
            ids=field_values.get(n.get("def"),set())
            if ids:
                usage.append({"entry_va":entry,"site_va":int(o["site"],16)-SLIDE,"op_id":o["id"],"mnemonic":o["mnemonic"],"operand":j,"field_load_ids":sorted(ids),"constant_operands":[{"operand":k,"value":v} for k,p in enumerate(o["inputs"]) if p and (v:=ssa.constant(p)) is not None],"call_target_va":(call_target(ssa,o["inputs"][0])-SLIDE) if o["mnemonic"]=="CALL" and call_target(ssa,o["inputs"][0]) is not None else None})
    return direct,finder,field_load,usage,origins,dict(ssa.fail)
def run(src,pc):
    slots=read(src/"native_cache_slot_votes.json");fields=read(src/"fields.json")
    idx=collections.defaultdict(list);prior={};fieldset={(f["table"],f["hash"]) for f in fields}
    for x in slots:
        m={"table":x["table"],"cache_va":x["cache_va"],"slot":x["slot"]}
        idx[x["slot_va"]].append(m);prior[(x["table"],x["cache_va"],x["slot"])]=set(x["combined_hash_candidates"])
    alias_doc=read(src/"native_cache_relocation_aliases.json")
    aliases={x["slot_va"]+SLIDE:x["target_va"]+SLIDE for x in alias_doc}
    scopes={x["finder_va"]:[(v["table"],v["cache_va"]) for v in x["cache_base_candidates"]] for x in read(src/"native_cache_helper_scope.json")}
    allorig=[];loads=[];uses=[];calls=[];direct=[];fail=collections.Counter();n=0
    for f in rows(pc/"high_pcode.ndjson"):
        if f["status"]!="ok":continue
        n+=1;d,c,l,u,o,errors=analyze_function(f,idx,aliases,scopes,fieldset,prior)
        direct.extend(d);calls.extend(c);loads.extend(l);uses.extend(u);allorig.extend(o.values());fail.update(errors)
    vote=collections.defaultdict(set)
    for c in calls:
        for m in c["memberships"]:vote[(m["table"],m["cache_va"],m["slot"])].add(c["hash"])
    merged=[]
    for x in slots:
        k=(x["table"],x["cache_va"],x["slot"]);old=prior[k];new=vote[k];combined=old|new
        merged.append({**x,"ssa_call_hash_candidates":sorted(new),"combined_hash_candidates":sorted(combined),"status":"unique_candidate" if len(combined)==1 else "conflict" if combined else "unmapped","consumer_verified":False})
    unknown={x["hash"] for x in read(src/"native_unknown_materializations.json")}
    summary={"functions_analyzed":n,"authenticated_relocation_aliases":len(aliases),"cache_value_origins":len(direct),"ssa_finder_calls":len(calls),"slots_with_ssa_call_votes":len(vote),"field_address_load_candidates":len(loads),"field_value_use_records":len(uses),"unique_slot_candidates":sum(x["status"]=="unique_candidate" for x in merged),"conflicting_slots":sum(x["status"]=="conflict" for x in merged),"unmapped_slots":sum(x["status"]=="unmapped" for x in merged),"unknown_hashes_with_ssa_call_votes":sorted({x["hash"] for x in calls if x["hash"] in unknown}),"resolution_limits":dict(fail),"verified_gameplay_consumers":0}
    for name,obj in [("ssa_summary",summary),("ssa_cache_origins",allorig),("ssa_finder_calls",calls),("ssa_field_load_candidates",loads),("ssa_field_use_candidates",uses),("ssa_slot_candidates",merged)]:
        (pc/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(src/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_ssa_origin(entry_va INTEGER,origin_id TEXT,evidence_json TEXT,PRIMARY KEY(entry_va,origin_id)); CREATE TABLE native_ssa_field_load(entry_va INTEGER,op_id TEXT,site_va INTEGER,read_width INTEGER,evidence_json TEXT,PRIMARY KEY(entry_va,op_id)); CREATE TABLE native_ssa_field_use(entry_va INTEGER,op_id TEXT,operand INTEGER,evidence_json TEXT,PRIMARY KEY(entry_va,op_id,operand)); CREATE TABLE native_ssa_slot_candidate(table_name TEXT,cache_va INTEGER,slot INTEGER,status TEXT,evidence_json TEXT,PRIMARY KEY(table_name,cache_va,slot));")
        db.executemany("INSERT INTO native_ssa_origin VALUES(?,?,?)",[(x["entry_va"],x["origin_id"],json.dumps(x)) for x in allorig])
        db.executemany("INSERT INTO native_ssa_field_load VALUES(?,?,?,?,?)",[(x["entry_va"],x["op_id"],x["site_va"],x["load_width"],json.dumps(x)) for x in loads])
        db.executemany("INSERT INTO native_ssa_field_use VALUES(?,?,?,?)",[(x["entry_va"],x["op_id"],x["operand"],json.dumps(x)) for x in uses])
        db.executemany("INSERT INTO native_ssa_slot_candidate VALUES(?,?,?,?,?)",[(x["table"],x["cache_va"],x["slot"],x["status"],json.dumps(x)) for x in merged])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite")
    print(json.dumps(summary,indent=2))
    for x in calls:
        if x["hash"] in unknown:print("SSA_UNKNOWN_FINDER",json.dumps(x))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--dictionary",type=Path,required=True);p.add_argument("--pcode",type=Path,required=True);a=p.parse_args();run(a.dictionary,a.pcode)
