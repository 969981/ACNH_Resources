#!/usr/bin/env python3
"""HASH-007B: bounded ARM64 instruction evidence for BCSV reader lifecycle and cache lookups.
Uses Capstone, not Ghidra. All memory refs and call args are local static candidates.
"""
import argparse, collections, hashlib, json, sqlite3, struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN,CS_AC_READ,CS_AC_WRITE
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
from acnh303_global_bcsv_dictionary import read, require, DATA
from acnh303_global_bcsv_native_reader import ELF,SHA
from acnh303_round11_elf_xref import parse_elf,get_bytes_va

FOCUS={"PlayerStateParam","ItemRemake","RecipeCraftParam","NmlNpcParam","SpNpcParam","ItemMailAttachCategoryGroup"}
def reg(name):
    if name in ("xzr","wzr"):return "zero"
    if name.startswith(("x","w")) and name[1:].isdigit():return "x"+name[1:]
    return name

def finder_pattern(ins):
    # Community heuristic: CMP W1,#limit; CSEL Xd,XZR,Xs,HI in next 4 instructions.
    for i,x in enumerate(ins):
        if x.mnemonic=="cmp" and x.op_str.startswith("w1, #"):
            if any(y.mnemonic=="csel" and ", xzr," in y.op_str and y.op_str.endswith(", hi") for y in ins[i+1:i+5]):
                return True
    return False

def analyze(md,blob,segs,start,size):
    raw=get_bytes_va(blob,segs,start,size)
    if raw is None:return [],[],[]
    ins=list(md.disasm(raw,start)); regs={"zero":0}; refs=[];calls=[]
    writable=lambda a,n=1:any(s["flags"]&2 and s["vaddr"]<=a and a+n<=s["vaddr"]+s["memsz"] for s in segs)
    def rv(i):return regs.get(reg(i.reg_name(i.operands[0].reg))) if i.operands else None
    for i in ins:
        ops=i.operands;m=i.mnemonic
        def val(o):
            if o.type==ARM64_OP_IMM:return o.imm
            if o.type==ARM64_OP_REG:return regs.get(reg(i.reg_name(o.reg)))
            return None
        result=None;dest=None
        if ops and ops[0].type==ARM64_OP_REG:
            dest=reg(i.reg_name(ops[0].reg))
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
        for o in ops:
            if o.type!=ARM64_OP_MEM or o.mem.index:continue
            base=regs.get(reg(i.reg_name(o.mem.base)))
            if base is None:continue
            addr=base+o.mem.disp
            kind="read" if m.startswith(("ldr","ldp","ldur","ldar","ldrb","ldrs")) else "write" if m.startswith(("str","stp","stur","stlr")) else "other"
            if writable(addr) and kind!="other":
                ref={"va":i.address,"address":addr,"kind":kind,"instruction":m+" "+i.op_str}
                if kind=="write" and ops[0].type==ARM64_OP_REG:ref["source_value"]=val(ops[0])
                refs.append(ref)
            # Only resolve mapped 64-bit pointer loads, never arbitrary mutable values.
            if m=="ldr" and dest and i.reg_name(ops[0].reg).startswith("x") and not writable(addr):
                b=get_bytes_va(blob,segs,addr,8)
                if b:
                    pointer=int.from_bytes(b,"little")
                    if writable(pointer):result=pointer
        if m=="bl" and ops and ops[0].type==ARM64_OP_IMM:
            calls.append({"va":i.address,"target":ops[0].imm,"args":{f"x{n}":regs[f"x{n}"] for n in range(3) if f"x{n}" in regs}})
        # Invalidate modified registers before setting a known result. Calls invalidate volatile regs.
        try:_,writes=i.regs_access()
        except Exception:writes=[]
        for x in writes:
            k=reg(i.reg_name(x))
            if k!="zero":regs.pop(k,None)
        if result is not None and dest and dest!="zero":
            bits=32 if i.reg_name(ops[0].reg).startswith("w") else 64
            regs[dest]=result&((1<<bits)-1)
        if m in ("bl","blr"):
            for n in range(19):regs.pop(f"x{n}",None)
        # A branch target may have other predecessors; do not carry local values through branch.
        if m=="b" or m in ("ret","br") or m.startswith("b.") or m.startswith(("cbz","cbnz","tbz","tbnz")):
            regs={"zero":0}
    return ins,refs,calls

def run(root,out):
    blob=(root/ELF).read_bytes();require(hashlib.sha256(blob).hexdigest()==SHA,"ELF SHA")
    segs=parse_elf(blob);md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    readers=read(out/"native_reader_candidates.json"); fields=read(out/"fields.json"); hashes=read(out/"native_hash_materializations.json")
    unknown={x["hash"] for x in read(root/DATA/"hash008b_remaining.json")["remaining"]}
    schema=collections.defaultdict(set)
    for f in fields:schema[f["table"]].add(int(f["hash"],16))
    boundaries=sorted({v for t in readers for c in t["vtable_candidates"] for v in c["methods"].values()})
    def limit(va,cap):
        import bisect
        i=bisect.bisect_right(boundaries,va)
        return min(cap,boundaries[i]-va) if i<len(boundaries) else cap
    def listing(ins):return [{"va":x.address,"bytes":x.bytes.hex(),"asm":x.mnemonic+" "+x.op_str} for x in ins]
    methods=[];method_map={};targets=collections.defaultdict(set);cache_refs=collections.defaultdict(set)
    for t in readers:
        for c in t["vtable_candidates"]:
            for role in ("Clear","SetupRows","Load","Reload"):
                va=c["methods"][role];key=(t["table"],role,va)
                if key in method_map:continue
                ins,refs,calls=analyze(md,blob,segs,va,limit(va,0x900))
                # Scan may include fall-through or following unknown functions: label window explicitly.
                rec={"table":t["table"],"role":role,"va":va,"window_bytes":sum(x.size for x in ins),"global_refs":refs,"calls":calls,"boundary_grade":"bounded_window_not_full_cfg"}
                if t["table"] in FOCUS:rec["instructions"]=listing(ins)
                methods.append(rec);method_map[key]=rec
                if role in ("Clear","SetupRows"):
                    for x in refs:cache_refs[t["table"]].add(x["address"])
                for x in calls:targets[x["target"]].add(t["table"])
    focused=[];finder_calls=[];finders={}
    for h in hashes:
        if h["hash"] not in unknown:continue
        hv=int(h["hash"],16);tables={x["table"] for x in h["occurrences"]}
        for site in h["materializations"]:
            va=site["va"];start=va-48
            ins,refs,calls=analyze(md,blob,segs,start,128)
            for call in calls:
                args=call["args"]
                if args.get("x2")!=hv:continue
                slot=args.get("x1")
                if slot is None or slot<0 or slot>4096:continue
                dest=call["target"]
                dins,drefs,dcalls=analyze(md,blob,segs,dest,96)
                if not finder_pattern(dins):continue
                rec={"hash":h["hash"],"tables":sorted(tables),"call_va":call["va"],"target":dest,"slot_candidate":slot,"grade":"local_w1_w2_and_finder_pattern","consumer_verified":False}
                finder_calls.append(rec);finders[dest]={"va":dest,"instructions":listing(dins),"global_refs":drefs}
            focused.append({"hash":h["hash"],"tables":sorted(tables),"materialization_va":va,"instructions":listing(ins),"global_refs":refs,"calls":calls,"same_table_lifecycle_address_refs":[x for x in refs if any(x["address"] in cache_refs[t] for t in tables)],"consumer_verified":False})
    # Shared call candidates ranked by number of distinct tables, not named functions.
    shared=[{"target":va,"table_count":len(ts),"tables":sorted(ts)} for va,ts in sorted(targets.items(),key=lambda x:(-len(x[1]),x[0])) if len(ts)>=10]
    # Global addresses written with all ones and nearby flag=1: candidate evidence, not full cache.
    init=[]
    for m in methods:
        if m["role"] not in ("Clear","SetupRows"):continue
        flags=[x for x in m["global_refs"] if x["kind"]=="write" and x.get("source_value")==1]
        fill=[x for x in m["global_refs"] if x["kind"]=="write" and x.get("source_value") in (0xffffffff,0xffffffffffffffff)]
        for f in flags:
            close=[x for x in fill if 0<=x["address"]-f["address"]<=4*(len(schema[m["table"]])+2)]
            if close:init.append({"table":m["table"],"role":m["role"],"function_va":m["va"],"flag":f,"all_ones_writes":close,"grade":"nearby_global_flag_and_fill_candidate"})
    summary={"reader_method_windows":len(methods),"clear_windows":sum(x["role"]=="Clear" for x in methods),"setup_rows_windows":sum(x["role"]=="SetupRows" for x in methods),"global_ref_records":sum(len(x["global_refs"]) for x in methods),"shared_call_targets_ge10_tables":len(shared),"unknown_site_windows":len(focused),"unknown_site_windows_with_lifecycle_address":sum(bool(x["same_table_lifecycle_address_refs"]) for x in focused),"finder_pattern_call_candidates":len(finder_calls),"distinct_finder_targets":len(finders),"flag_fill_candidates":len(init),"verified_cache_slots":0,"verified_consumers":0}
    for n,obj in [("native_lifecycle_summary",summary),("native_lifecycle_methods",methods),("native_shared_call_candidates",shared),("native_cache_init_candidates",init),("native_unknown_access_windows",focused),("native_findfield_candidates",{"calls":finder_calls,"targets":list(finders.values())})]:
        (out/(n+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_lifecycle_window(table_name TEXT,role TEXT,va INTEGER,evidence_json TEXT,PRIMARY KEY(table_name,role,va)); CREATE TABLE native_findfield_candidate(hash TEXT,call_va INTEGER,target INTEGER,slot_candidate INTEGER,evidence_json TEXT,PRIMARY KEY(hash,call_va));")
        db.executemany("INSERT INTO native_lifecycle_window VALUES(?,?,?,?)",[(x["table"],x["role"],x["va"],json.dumps(x)) for x in methods])
        db.executemany("INSERT OR IGNORE INTO native_findfield_candidate VALUES(?,?,?,?,?)",[(x["hash"],x["call_va"],x["target"],x["slot_candidate"],json.dumps(x)) for x in finder_calls])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","sqlite integrity")
    print(json.dumps(summary,indent=2))
    for x in shared[:12]:print("SHARED_CALL",hex(x["target"]),x["table_count"])
    for x in finder_calls:print("FINDER_CANDIDATE",x["hash"],hex(x["call_va"]),hex(x["target"]),x["slot_candidate"])
    for x in init[:15]:print("CACHE_INIT_CANDIDATE",x["table"],x["role"],hex(x["flag"]["address"]),[hex(v["address"]) for v in x["all_ones_writes"]])
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve())
