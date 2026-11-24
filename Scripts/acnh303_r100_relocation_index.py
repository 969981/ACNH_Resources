#!/usr/bin/env python3
"""R100 source-authenticated full relocation index and bounded pointer dataflow."""
import argparse,bisect,collections,csv,hashlib,json,re,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
import acnh303_r96_native_tables as r96
import acnh303_r99_relocation as r99
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import adrp_target,adr_target
SLIDE=0x100000
GLOBALS={**r99.FACTORY,"action_category_count":0x4c8dfd8,"action_category_counts_ptr":0x4c8dfe0,
         "query_category_count":0x4c8dfe8,"query_category_counts_ptr":0x4c8dff0}
TARGETS={"NpcInviteCheck":0x7d83e6a3,"IsCollaboNpc":0xbb045a73,"NpcDecideQuestReward":0xabc7e873,
         "NpcAddFriendship":0x924f928a,"CheckNpcFavorLevel":0xf762c39c}
def write(p,o):r96.write(p,o)
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    im=r99.Image(elf)
    assert len(relocs)==380793
    counts=collections.Counter(x["table"] for x in relocs.values())
    assert counts=={"RELA":6586,"JMPREL":982,"RELR":373225}
    def read(v,n):
        try:return raw(v,n)
        except ValueError:return None
    def tag(t,default=0):return tags.get(t,[default])[0]
    def region(v):
        if v is None:return "unresolved"
        for s in im.loads:
            if s["vaddr"]<=v<s["vaddr"]+s["memsz"]:
                if v>=s["vaddr"]+s["filesz"]:return "bss"
                return "text" if s["flags"]&1 else "data" if s["flags"]&2 else "rodata"
        return "unmapped"
    paths=sorted((root/r96.CROOT).rglob("*.c"))
    exports={int(p.stem,16)-SLIDE:p for p in paths if re.fullmatch("[0-9a-f]{8}",p.stem)}
    starts=sorted(exports)
    def owner(v):
        i=bisect.bisect_right(starts,v)-1
        return starts[i] if i>=0 else None
    def path(v):
        return exports[v].relative_to(root).as_posix() if v in exports else None
    # Resolve only relative and defined in-module symbol relocations.
    records=[];rev=collections.defaultdict(list)
    for addr,r in sorted(relocs.items()):
        b=read(addr,8);word=int.from_bytes(b,"little") if b is not None else None
        target=None;symbol_name=None;kind="unresolved_external_or_unsupported"
        if r["type"] in ("RELR",1027) and r["symbol"]==0:
            target=r["addend"];kind="relative"
        elif r["type"] in (257,1025,1026) and r["symbol"]:
            sb=read(tag(6)+r["symbol"]*24,24)
            if sb:
                no,_,_,shndx,value,_=struct.unpack("<IBBHQQ",sb)
                if no<tag(10):
                    ss=read(tag(5)+no,min(256,tag(10)-no))
                    if ss and b"\0" in ss:symbol_name=ss.split(b"\0",1)[0].decode("utf-8","replace")
                if shndx and shndx<0xff00:
                    target=value+r["addend"];kind="defined_symbol"
        if target is not None and not 0<=target<2**63:
            target=None;kind="out_of_index_range"
        tr=region(target);sr=region(addr)
        # SQLite signed integer-safe raw word stored as hex.
        records.append((addr,addr+SLIDE,r["table"],str(r["type"]),r["symbol"],symbol_name,r["addend"],hex(word) if word is not None else None,target,target+SLIDE if target is not None else None,sr,tr,kind,path(target) if tr=="text" else None))
        if target is not None:rev[target].append(addr)
    byslot={r[0]:r for r in records}
    db=out/"acnh303_relocations.sqlite3"
    if db.exists():raise ValueError("output database already exists")
    con=sqlite3.connect(db)
    con.executescript("""
    PRAGMA journal_mode=DELETE;
    CREATE TABLE metadata(key TEXT PRIMARY KEY,value TEXT NOT NULL);
    CREATE TABLE relocations(slot_va INTEGER PRIMARY KEY,slot_ghidra INTEGER NOT NULL,table_name TEXT NOT NULL,
      type TEXT NOT NULL,symbol_index INTEGER NOT NULL,symbol_name TEXT,addend INTEGER,raw_word TEXT,
      target_va INTEGER,target_ghidra INTEGER,slot_region TEXT NOT NULL,target_region TEXT NOT NULL,resolution TEXT NOT NULL,exact_export TEXT);
    CREATE INDEX rel_target ON relocations(target_va);
    CREATE INDEX rel_target_ghidra ON relocations(target_ghidra);
    CREATE INDEX rel_region ON relocations(target_region,table_name);
    CREATE VIEW code_pointers AS SELECT * FROM relocations WHERE target_region='text';
    CREATE VIEW bss_pointers AS SELECT * FROM relocations WHERE target_region='bss';
    CREATE TABLE init_array(ordinal INTEGER PRIMARY KEY,slot_va INTEGER,target_va INTEGER,exact_export TEXT);
    CREATE INDEX init_target ON init_array(target_va);
    CREATE TABLE pointer_runs(start_va INTEGER PRIMARY KEY,end_va INTEGER,slot_count INTEGER,exact_export_count INTEGER,classification TEXT);
    CREATE TABLE xrefs(site_va INTEGER,operand_va INTEGER,mode TEXT,target_name TEXT,owner_candidate TEXT,instruction TEXT,
      PRIMARY KEY(site_va,operand_va,mode,target_name));
    """)
    con.executemany("INSERT INTO metadata VALUES (?,?)",[("schema","acnh303-r100-relocation-index-v1"),("nso_sha256",dec.SOURCE_SHA),("elf_sha256",r96.SHA),("build_id",nso[0x40:0x60].hex()),("ghidra_slide",hex(SLIDE)),("runtime_verified","false")])
    con.executemany("INSERT INTO relocations VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?)",records)
    # Adjacent relocated code pointers, not automatically VTables. Every slot remains queryable.
    runs=[];group=[]
    def flush():
        if len(group)>=3:
            runs.append((group[0][0],group[-1][0]+8,len(group),sum(bool(x[13]) for x in group),"contiguous_code_pointer_candidate"))
    for r in records:
        if r[11]!="text":
            flush();group=[];continue
        if group and r[0]!=group[-1][0]+8:flush();group=[]
        group.append(r)
    flush()
    con.executemany("INSERT INTO pointer_runs VALUES (?,?,?,?,?)",runs)
    init=[]
    for i,(v,) in enumerate(struct.iter_unpack("<Q",raw(tag(25),tag(27)))):
        slot=tag(25)+8*i;r=byslot.get(slot);target=r[8] if r else None
        init.append((i,slot,target,path(target)))
    assert len(init)==8748 and all(region(x[2])=="text" for x in init)
    con.executemany("INSERT INTO init_array VALUES (?,?,?,?)",init)
    # Reproduce R96's exact remaining state set, not a guessed list.
    prior=out/"r96_reproduced";r96.run(root,prior)
    missing=[x for x in json.loads((prior/"unresolved_62.json").read_text("utf-8")) if not x["elf_reference"]["code_address_candidates"]]
    assert len(missing)==28
    target_names={v-SLIDE:k for k,v in GLOBALS.items()}
    global_aliases={name:[hex(a) for a in rev.get(v-SLIDE,[])] for name,v in GLOBALS.items()}
    states={}
    for row in missing:
        key=row["key"];needle=key.encode()+b"\0";hits=[]
        for va,data in mapped[1:]:
            pos=0
            while True:
                pos=data.find(needle,pos)
                if pos<0:break
                if pos==0 or data[pos-1]==0:
                    loc=va+pos;slots=rev.get(loc,[])
                    hits.append({"literal_va":hex(loc),"relocation_slots":[hex(x) for x in slots]})
                    target_names[loc]="state:"+key
                pos+=1
        states[key]={"original_scope":row["scope"],"literal_hits":hits}
    # Reverse relocation slots themselves become searchable references.
    slots={a:v for v in target_names for a in rev.get(v,[])}
    search=set(target_names)|set(slots);pages={v&~4095 for v in search}
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    xrefs=set();details={}
    def emit(site,addr,mode,ins):
        original=slots.get(addr,addr)
        if original not in target_names:return
        name=target_names[original];own=owner(site)
        x=(site,addr,mode,name,path(own),ins.mnemonic+" "+ins.op_str)
        xrefs.add(x)
        details[str(site)]=hex(own) if own is not None else None
    def reg(ins,x):
        n=ins.reg_name(x)
        return "x"+n[1:] if n.startswith("w") and n[1:].isdigit() else n
    # Track within a single bounded window; terminate at branches, invalidate overwritten registers.
    def window(data,start,pc):
        tracked={}
        for ins in cs.disasm(data[start:start+96],pc):
            m=ins.mnemonic;ops=ins.operands;pending={}
            if m.startswith("b.") or m in ("b","bl","blr","br","ret","cbz","cbnz","tbz","tbnz"):break
            if m in ("adrp","adr") and len(ops)==2 and ops[1].type==ARM64_OP_IMM:
                v=ops[1].imm;pending[reg(ins,ops[0].reg)]=v
                if v in search:emit(ins.address,v,"address",ins)
            elif m=="add" and len(ops)==3 and ops[1].type==ARM64_OP_REG and ops[2].type==ARM64_OP_IMM:
                v=tracked.get(reg(ins,ops[1].reg))
                if v is not None:
                    shift=ops[2].shift.value;v+=ops[2].imm<<shift
                    pending[reg(ins,ops[0].reg)]=v
                    if v in search:emit(ins.address,v,"address",ins)
            elif m in ("ldr","ldp","str","stp","ldur","stur") and not ins.writeback:
                for oi,o in enumerate(ops):
                    if o.type!=ARM64_OP_MEM or o.mem.index:continue
                    base=tracked.get(reg(ins,o.mem.base))
                    if base is None:continue
                    addr=base+o.mem.disp;load=m.startswith("ld")
                    n=2 if m in ("ldp","stp") else 1
                    width=8 if ops[0].type==ARM64_OP_REG and ins.reg_name(ops[0].reg).startswith("x") else 4
                    for k in range(n):
                        a=addr+k*width
                        if a in search:emit(ins.address,a,"read" if load else "write_candidate",ins)
                        if load and width==8 and a in slots and k<oi:
                            pending[reg(ins,ops[k].reg)]=slots[a]
            elif m=="mov" and len(ops)==2 and ops[1].type==ARM64_OP_REG:
                v=tracked.get(reg(ins,ops[1].reg))
                if v is not None:pending[reg(ins,ops[0].reg)]=v
            try:
                _,written=ins.regs_access()
                for rr in written:tracked.pop(reg(ins,rr),None)
            except Exception:break
            tracked.update(pending)
    # One pass over text: targeted ADRP/ADR windows plus direct incoming branches to init/factory targets.
    # Init ownership is an export-boundary candidate, not an exhaustive call graph.
    initset={x[2] for x in init};factory=0x70fcd0-SLIDE;init_calls=[];factory_calls=[]
    for va,data in mapped[:1]:
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(data)[:len(data)//4*4])):
            pc=va+4*i;page=adrp_target(w,pc)
            if page in pages or adr_target(w,pc) in search:window(data,4*i,pc)
            if w&0xfc000000 in (0x94000000,0x14000000):
                v=pc+r99.sx(w&0x3ffffff,26)*4
                if v==factory:factory_calls.append({"site":hex(pc),"owner_candidate":path(owner(pc))})
                if v in initset:init_calls.append((pc,v))
    # Inspect all init entry exports, with actual direct function-name source references.
    init_review=[]
    for i,slot,v,p in init:
        row={"ordinal":i,"target_va":hex(v),"exact_export":p,"factory_tokens":[]}
        if p:
            text=(root/p).read_text("utf-8")
            row["factory_tokens"]=sorted({x for x in re.findall(r"(?:DAT_|PTR_DAT_|FUN_)[0-9a-f]{8}",text) if x in {"DAT_"+format(n,"08x") for n in GLOBALS.values()} or x=="FUN_0070fcd0"})
        init_review.append(row)
    xrefs=sorted(xrefs,key=lambda x:(x[0],x[1],x[2],x[3]))
    con.executemany("INSERT INTO xrefs VALUES (?,?,?,?,?,?)",xrefs)
    con.commit()
    assert con.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert con.execute("SELECT count(*) FROM relocations").fetchone()[0]==380793
    # Ghidra import CSV only contains mapped RELR data -> in-module destinations.
    with (out/"ghidra_relr_references.csv").open("w",newline="",encoding="utf-8") as f:
        w=csv.writer(f);w.writerow(["slot_rva","target_rva","raw_u64"])
        w.writerows((hex(r[0]),hex(r[8]),r[7]) for r in records if r[2]=="RELR" and r[7] and r[8] is not None and r[10] in ("data","rodata") and r[11]!="unmapped")
    # For hash targets, check original aligned words near actual relocated code slots.
    hash_candidates={k:[] for k in TARGETS}
    for name,value in TARGETS.items():
        needle=struct.pack("<I",value)
        for va,data in mapped[1:]:
            pos=0
            while True:
                pos=data.find(needle,pos)
                if pos<0:break
                a=va+pos;pos+=1
                if a%4:continue
                ptrs=[{"slot":hex(v),"target":hex(byslot[v][8])} for v in range((a&~7)-16,(a&~7)+32,8) if v in byslot and byslot[v][11]=="text"]
                hash_candidates[name].append({"word_va":hex(a),"neighbor_code_pointers":ptrs,"callback_verified":False})
    state_refs=collections.Counter(x[3][6:] for x in xrefs if x[3].startswith("state:"))
    for k,v in states.items():v["bounded_code_refs"]=state_refs[k]
    report={"source_nso_sha256":dec.SOURCE_SHA,"source_elf_sha256":r96.SHA,"relocations":len(records),"tables":dict(counts),
            "target_regions":dict(collections.Counter(r[11] for r in records)),"code_pointer_runs":len(runs),
            "init_entries":len(init),"init_exact_exports":sum(bool(x[3]) for x in init),
            "init_with_factory_tokens":sum(bool(x["factory_tokens"]) for x in init_review),
            "init_direct_incoming_edges":len(init_calls),"factory_direct_incoming":factory_calls,
            "factory_aliases":global_aliases,"xref_count":len(xrefs),"factory_write_candidates":sum(x[2]=="write_candidate" and not x[3].startswith("state:") for x in xrefs),
            "remaining_states":len(states),"states_with_pointer_slots":sum(any(h["relocation_slots"] for h in v["literal_hits"]) for v in states.values()),
            "states_with_bounded_code_refs":sum(bool(v["bounded_code_refs"]) for v in states.values()),
            "target_hash_data_hits":{k:len(v) for k,v in hash_candidates.items()},"callbacks_verified":False,"photo_probability":None,"real_save_verified":False}
    write(out/"report.json",report);write(out/"factory_xrefs.json",[{"site":hex(a),"operand":hex(b),"mode":c,"target":d,"nearest_export_candidate":e,"instruction":f} for a,b,c,d,e,f in xrefs])
    write(out/"init_review.json",init_review);write(out/"remaining_28_relocation_evidence.json",states);write(out/"target_hash_pointer_candidates.json",hash_candidates)
    con.close();print(json.dumps(report,ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
