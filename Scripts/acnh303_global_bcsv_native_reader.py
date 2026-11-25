#!/usr/bin/env python3
"""HASH-007A/B: exact ELF reader filename getters, vtable candidates, and hash materializations.
Static evidence only. A hash constant or nearby BL is not a field consumer.
"""
import argparse, collections, hashlib, json, sqlite3, struct
from pathlib import Path
from acnh303_global_bcsv_dictionary import read, require, DATA
from acnh303_round11_elf_xref import parse_elf, get_bytes_va, adr_target, adrp_target, add_imm, bl_target, sx
ELF=Path("e10617820db06889e1638499478da0de_NCA/0/main.elf")
SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
RET=0xd65f03c0
METHODS=("IsDerivedFrom","GetTypeInfo","Destructor","DeletingDestructor","Load","Reload","GetFileName","Clear","SetupRows")

def movwide(w):
    op=w&0x7f800000
    if op not in (0x52800000,0x72800000,0x12800000):return None
    shift=((w>>21)&3)*16
    if shift>16:return None
    return op,w&31,shift,(w>>5)&0xffff

def pair(a,b):
    x,y=movwide(a),movwide(b)
    if not x or not y or x[1]!=y[1] or x[0] not in (0x52800000,0x12800000) or y[0]!=0x72800000:return None
    if x[2]==y[2]:return None
    if (a>>31)!=(b>>31):return None
    v=x[3]<<x[2]
    if x[0]==0x12800000:v=(~v)&0xffffffff
    v=(v&~(0xffff<<y[2]))|(y[3]<<y[2])
    return v,x[1]

def run(root,out):
    blob=(root/ELF).read_bytes();require(hashlib.sha256(blob).hexdigest()==SHA,"ELF hash")
    segs=parse_elf(blob);code=[s for s in segs if s["flags"]&1];data=[s for s in segs if not s["flags"]&1]
    fields=read(out/"fields.json");tables=read(out/"tables.json");remaining=read(root/DATA/"hash008b_remaining.json")["remaining"]
    wanted={int(f["hash"],16) for f in fields};unknown={int(x["hash"],16) for x in remaining}
    require(len(wanted)==2075 and len(unknown)==28,"input counts")
    # Exact NUL terminated filename strings in mapped non-executable segments.
    literals=collections.defaultdict(list);by_va=collections.defaultdict(list)
    for t in tables:
        n=t["table"];needle=(n+".bcsv").encode()+b"\0"
        for s in data:
            start=s["file_offset"];end=start+s["filesz"];pos=start
            while True:
                i=blob.find(needle,pos,end)
                if i<0:break
                va=s["vaddr"]+i-start
                literals[n].append(va);by_va[va].append(n);pos=i+1
    pages={v&~4095 for v in by_va};getters=collections.defaultdict(set);refs=collections.defaultdict(list);hits=collections.defaultdict(list)
    def record(h,pc,reg,pattern,words,seg):
        # Nearby call is deliberately not claimed to use the hash.
        calls=[]
        for delta in range(4,36,4):
            off=seg["file_offset"]+pc-seg["vaddr"]+delta
            if off+4>seg["file_offset"]+seg["filesz"]:break
            w=struct.unpack_from("<I",blob,off)[0]
            if w==RET or w&0x7c000000==0x14000000 and w&0xfc000000!=0x94000000:break
            target=bl_target(w,pc+delta)
            if target is not None:
                calls.append({"site":pc+delta,"target":target});break
        hits[h].append({"va":pc,"register":reg,"pattern":pattern,"words":[f"{w:08X}" for w in words],"nearby_bl":calls})
    count=0
    for s in code:
        start=s["file_offset"];base=s["vaddr"];end=start+s["filesz"]
        prev=None
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(blob)[start:end-(end-start)%4])):
            off=start+i*4;pc=base+i*4;count+=1
            if w&0x7f800000==0x72800000 and prev is not None:
                p=pair(prev,w)
                if p and p[0] in wanted:record(p[0],pc,p[1],"adjacent_movwide_pair",[prev,w],s)
            # LDR W literal, only exact mapped 4-byte value.
            if w&0xff000000==0x18000000:
                addr=pc+sx((w>>5)&0x7ffff,19)*4
                raw=get_bytes_va(blob,segs,addr,4)
                if raw:
                    h=int.from_bytes(raw,"little")
                    if h in wanted:record(h,pc,w&31,"ldr_w_literal",[w],s)
            # Filename getter: exact address formation into x0, immediately RET.
            addr=adr_target(w,pc)
            if addr in by_va:
                for n in by_va[addr]:
                    refs[n].append({"va":pc,"pattern":"ADR","target":addr})
                    if w&31==0 and off+8<=end and struct.unpack_from("<I",blob,off+4)[0]==RET:getters[n].add(pc)
            page=adrp_target(w,pc)
            if page in pages and off+8<=end:
                w2=struct.unpack_from("<I",blob,off+4)[0];a=add_imm(w2)
                if a and a["rn"]==w&31 and page+a["imm"] in by_va:
                    addr=page+a["imm"]
                    for n in by_va[addr]:
                        refs[n].append({"va":pc,"pattern":"ADRP_ADD","target":addr})
                        if a["rd"]==0 and off+12<=end and struct.unpack_from("<I",blob,off+8)[0]==RET:getters[n].add(pc)
            prev=w
    def executable(v):return any(s["vaddr"]<=v<s["vaddr"]+s["filesz"] and v%4==0 for s in code)
    readers=[];vtable_count=0
    for t in tables:
        n=t["table"];candidates=[]
        for g in sorted(getters[n]):
            needle=struct.pack("<Q",g)
            for s in data:
                start=s["file_offset"];end=start+s["filesz"];pos=start
                while True:
                    i=blob.find(needle,pos,end)
                    if i<0:break
                    pos=i+1
                    if (i-start)%8 or i-48<start or i+24>end:continue
                    entries=struct.unpack_from("<9Q",blob,i-48)
                    if entries[6]!=g or not all(executable(v) for v in entries):continue
                    va=s["vaddr"]+i-start-48
                    candidates.append({"vtable_va":va,"getter_va":g,"methods":dict(zip(METHODS,entries)),"grade":"nine_executable_pointers_and_filename_getter_candidate"})
        vtable_count+=len(candidates)
        readers.append({"table":n,"filename_literals":sorted(set(literals[n])),"filename_code_refs":refs[n],"filename_getters":sorted(getters[n]),"vtable_candidates":candidates})
    by_hash=collections.defaultdict(list)
    for f in fields:by_hash[int(f["hash"],16)].append({"table":f["table"],"ordinal":f["ordinal"],"offset":f["offset"],"width_hint":f["width_hint"]})
    records=[{"hash":f"{h:08X}","occurrences":by_hash[h],"materializations":hits[h],"consumer_verified":False} for h in sorted(wanted)]
    focused=[x for x in records if int(x["hash"],16) in unknown]
    summary={"elf_sha256":SHA,"executable_words_scanned":count,"tables":len(readers),"tables_with_filename_literal":sum(bool(x["filename_literals"]) for x in readers),"tables_with_code_reference":sum(bool(x["filename_code_refs"]) for x in readers),"tables_with_filename_getter":sum(bool(x["filename_getters"]) for x in readers),"tables_with_vtable_candidate":sum(bool(x["vtable_candidates"]) for x in readers),"vtable_candidates":vtable_count,"hashes_with_materialization":sum(bool(x["materializations"]) for x in records),"materialization_sites":sum(len(x["materializations"]) for x in records),"unknown_hashes_with_materialization":sum(bool(x["materializations"]) for x in focused),"unknown_materialization_sites":sum(len(x["materializations"]) for x in focused),"verified_consumers":0,"runtime_verified":0}
    for name,obj in [("native_reader_summary",summary),("native_reader_candidates",readers),("native_hash_materializations",records),("native_unknown_materializations",focused)]:
        (out/(name+".json")).write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    with sqlite3.connect(out/"dictionary.sqlite3") as db:
        db.executescript("CREATE TABLE native_reader_candidate(table_name TEXT PRIMARY KEY,evidence_json TEXT); CREATE TABLE native_hash_materialization(hash TEXT,va INTEGER,pattern TEXT,evidence_json TEXT,PRIMARY KEY(hash,va,pattern));")
        db.executemany("INSERT INTO native_reader_candidate VALUES(?,?)",[(x["table"],json.dumps(x)) for x in readers])
        db.executemany("INSERT INTO native_hash_materialization VALUES(?,?,?,?)",[(x["hash"],v["va"],v["pattern"],json.dumps(v)) for x in records for v in x["materializations"]])
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","sqlite integrity")
    print(json.dumps(summary,indent=2))
    for x in focused:print("NATIVE_UNKNOWN",x["hash"],len(x["materializations"]),json.dumps([hex(v["va"]) for v in x["materializations"][:12]]))
    for x in readers:
        if x["table"] in ("PlayerStateParam","ItemRemake","RecipeCraftParam","ItemMailAttachCategoryGroup","NmlNpcParam","SpNpcParam"):
            print("READER_FOCUS",x["table"],json.dumps({"getters":[hex(v) for v in x["filename_getters"]],"vtables":[{"va":hex(v["vtable_va"]),"methods":{k:hex(a) for k,a in v["methods"].items()}} for v in x["vtable_candidates"]]}))
    return summary
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();run(a.root.resolve(),a.out.resolve())
