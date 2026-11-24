#!/usr/bin/env python3
"""Read-only, Build-ID-gated comparison of coherent offline captures; never writes game memory."""
import argparse
import hashlib
import json
import sqlite3
import struct
from pathlib import Path

INDEX = Path(__file__).resolve().parents[1] / "derived/3.0.3/external_pointers/build_id_pointer_index.json"
def num(v):
    return int(v, 0) if isinstance(v, str) else int(v)

def require(ok, why):
    if not ok:
        raise ValueError(why)

def checked_file(path, sha):
    data = path.read_bytes()
    require(hashlib.sha256(data).hexdigest() == sha.lower(), f"SHA256 mismatch: {path}")
    return data

class Memory:
    def __init__(self, segments):
        self.segments = sorted(segments)
        for i, (base, data) in enumerate(self.segments):
            require(base > 0 and len(data) > 0 and base + len(data) <= 1 << 64, "invalid range")
            if i:
                p, b = self.segments[i-1]
                require(p+len(b) <= base, "overlapping capture ranges")
    def read(self, a, n):
        for base, data in self.segments:
            if base <= a and a+n <= base+len(data):
                return data[a-base:a-base+n]
        raise ValueError(f"unmapped capture range {a:#x}+{n:#x}")
    def u(self,a,n=8):
        return int.from_bytes(self.read(a,n),"little")
    def ptr(self,a):
        p=self.u(a)
        require(p != 0 and p % 8 == 0, f"null/unaligned pointer at {a:#x}")
        self.read(p,1)
        return p
    def pair(self,a,offsets):
        p=sum(self.u(a+num(o)) for o in offsets)
        require(0 < p < 1<<64,"invalid payload sum")
        self.read(p,1)
        return p

def decode_money(raw):
    require(len(raw)==8,"encoded value width")
    if raw==bytes(8):
        return {"valid":True,"value":0,"raw":raw.hex()}
    v,salt,shift,check=struct.unpack("<IHBB",raw)
    valid=check==((v+(v>>16)+(v>>24)+(v>>8)-0x2d)&255)
    acc=(v<<((29-shift)&63))&0xffffffffffffffff
    value=((acc&0xffffffff)+(acc>>32)-salt-0x7f1cd4ef)&0xffffffff
    if value>=1<<31:
        value-=1<<32
    return {"valid":valid,"value":value if valid else None,"raw":raw.hex()}

def resolve(mem, record, main, player, npc=None, heap=None):
    require(0<=player<8,"player index")
    p,u=mem.ptr,mem.u
    M=p(main+num(record["root_rva"]))
    T=p(M+record["backend_table_offset"])
    mode=u(M+record["mode_offset"],1)&1
    backend=record["backends"][mode]
    O=p(T+backend["table_offset"])
    vt=p(O)
    require(vt==main+num(backend["vtable_rva"]),"unexpected backend vtable")
    fn=p(vt+0x38)
    require(fn==main+num(backend["getter_rva"]),"unexpected getter")
    require(mem.read(fn,8).hex()==record["getter_bytes"],"unexpected getter bytes")
    R=p(O+record["backend_getter_object_offset"])
    B=R+backend["result_adjustment"]
    mem.read(B,1)
    rules=record["player"]
    ident=rules["replacement_identity" if mode else "normal_identity"]
    identity=mem.pair(B if mode else R,ident["pair_offsets"])+num(ident.get("base_adjustment",0))+player*ident["stride"]
    require(any(mem.read(identity,16)),"empty identity")
    if mode:
        r=rules["replacement_slot_map"]
        W=p(T+r["table_offset"]+player*8)
    else:
        r=rules["normal_slot_map"]
        slots=[k for k in range(8) if u(M+r["offset"]+k*8,4)==player and u(M+r["offset"]+k*8+4,4)==r["state"]]
        require(len(slots)==1,"ambiguous or inactive player slot")
        W=p(T+r["table_offset"]+slots[0]*8)
    G=p(W+r["wrapper_pointer_offset"])
    D=G+num(rules["descriptor_offset"])
    if u(D+8)==0:
        D=p(M+rules["fallback_manager_offset"])
    fields=rules["fields"]
    I=mem.pair(D,fields["inventory"]["pair_offsets"])
    L=mem.pair(G,fields["miles"]["pair_offsets"])
    S=mem.pair(D,fields["storage"]["pair_offsets"])
    A=mem.pair(D,fields["bank"]["pair_offsets"])
    addresses={"slot21":I,"inventory":I+184,"wallet":I+368,"bank":A,"miles":L+num(fields["miles"]["offset"]),"storage":S}
    pockets=[]
    for seg in fields["inventory"]["segments"]:
        n=u(I+seg["count_offset"],4)
        require(n<=seg["max_count"],"invalid pocket count")
        pockets.extend(mem.read(I+seg["offset"]+8*i,8).hex() for i in range(n))
    cap=u(S+num(fields["storage"]["capacity_offset"]),4)
    require(cap<=fields["storage"]["max_capacity"],"invalid storage capacity")
    raw_storage=mem.read(S,cap*8)
    used=sum(struct.unpack_from("<h",raw_storage,i*8)[0]!=-2 for i in range(cap))
    values={k:decode_money(mem.read(addresses[k],8)) for k in ("wallet","bank","miles")}
    out={"mode":mode,"manager":hex(M),"backend_table":hex(T),"backend":hex(O),"descriptor_root":hex(B),"player":player,"player_descriptor":hex(G),"data_descriptor":hex(D),"identity_hex":mem.read(identity,16).hex(),"addresses":{k:hex(v) for k,v in addresses.items()},"values":values,"pockets_raw":pockets,"storage_capacity":cap,"storage_used":used,"storage_sha256":hashlib.sha256(raw_storage).hexdigest(),"snapshot_consistent":all(v["valid"] for v in values.values()),"runtime_verified":False,"actual_save_verified":False}
    if npc is not None:
        n=record["npc"]
        require(0<=npc<n["count"],"NPC index")
        N=mem.pair(B+n["descriptor_offset"],n["pair_offsets"])
        a=N+npc*num(n["stride"])+player*num(n["friendship"]["player_stride"])+n["friendship"]["offset"]
        out["friendship"]={"npc":npc,"address":hex(a),"value":u(a,1)}
    if heap is not None and player==0:
        out["legacy_heap_comparison"]={k:{"expected":v,"observed":hex(addresses[k]-heap),"equal":addresses[k]-heap==num(v)} for k,v in record["legacy_heap_candidates"].items() if k in addresses}
    return out,addresses

def compare_save(mem,manifest,folder,addresses):
    # Explicit user-provided mappings only. No assumed disk offsets.
    rows=[]
    for item in manifest.get("save_ranges",[]):
        key=item["field"]
        require(key in addresses,"unknown field mapping")
        offset,n=num(item["offset"]),num(item["size"])
        relative=num(item.get("relative",0))
        require(offset>=0 and relative>=0 and n>0,"invalid comparison range")
        data=checked_file(folder/item["file"],item["sha256"])
        require(offset+n<=len(data),"save range out of bounds")
        a=addresses[key]+relative
        ram=mem.read(a,n)
        disk=data[offset:offset+n]
        rows.append({"field":key,"address":hex(a),"file_offset":hex(offset),"size":n,"equal":ram==disk,"ram_sha256":hashlib.sha256(ram).hexdigest(),"save_sha256":hashlib.sha256(disk).hexdigest()})
    return rows

def build_db(index,out):
    with sqlite3.connect(out) as db:
        db.execute("CREATE TABLE IF NOT EXISTS builds(build_id TEXT PRIMARY KEY, version TEXT, elf_sha256 TEXT, nso_sha256 TEXT, runtime_verified INTEGER, evidence_json TEXT)")
        for bid,r in index["builds"].items():
            db.execute("INSERT OR REPLACE INTO builds VALUES(?,?,?,?,?,?)",(bid,r["version"],r["elf_sha256"],r["nso_sha256"],int(r["runtime_verified"]),json.dumps(r,sort_keys=True)))
        db.commit()
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")

def selftest(record):
    main=0x100000000
    for mode in (0,1):
        # Synthetic coherent segments; never considered real capture evidence.
        segments={}
        def alloc(a,n): segments[a]=bytearray(n);return a
        def put(a,v,n=8):
            for base,b in segments.items():
                if base<=a and a+n<=base+len(b):
                    b[a-base:a-base+n]=v.to_bytes(n,"little");return
            raise AssertionError(hex(a))
        root=alloc(main+num(record["root_rva"]),8)
        M=alloc(0x200000000,0x558); T=alloc(0x200001000,0x1a8)
        O=alloc(0x200002000,0x40)
        R=alloc(0x200010000,0xf0000);B=R+(0 if mode else 0x70)
        W=alloc(0x200110000,0x40); G=alloc(0x200120000,0x30000)
        D=G+0x194b0
        I=alloc(0x200160000,0x200); L=alloc(0x200170000,0x6000)
        S=alloc(0x200180000,0x11944); A=alloc(0x2001a0000,8)
        identity=alloc(0x2001b0000,0x200000)
        N=alloc(0x2003c0000,0xc0000)
        b=record["backends"][mode]
        vt=alloc(main+num(b["vtable_rva"]),0x48);fn=alloc(main+num(b["getter_rva"]),8)
        put(fn,int.from_bytes(bytes.fromhex(record["getter_bytes"]),"little"))
        put(root,M);put(M+16,T);put(M+0x453,mode,1);put(T+b["table_offset"],O)
        put(O,vt);put(vt+56,fn);put(O+32,R)
        if mode:
            put(B+0xe7120,identity);put(T+0x140,W);put(W+16,G)
            put(identity,1)
        else:
            put(R+0x78,identity);put(identity+0x1e33b0,1)
            put(M+0x94,1,4);put(T+0x60,W);put(W+32,G)
        put(D+8,1);put(D+0x78,I);put(D+0x158,S);put(D+0x8620,A);put(G+0x18338,L)
        put(I+0x158,20,4);put(I+0xa0,20,4)
        v=0x7f1cd4ef+1234; c=(v+(v>>16)+(v>>24)+(v>>8)-0x2d)&255
        put(I+368,int.from_bytes(struct.pack("<IHBB",v,0,29,c),"little"))
        put(S+0x11940,2,4);put(S,0xfffe,2)
        put(B+0xa8+8,N);put(N+0x46,100,1)
        mem=Memory(list(segments.items()))
        out,_=resolve(mem,record,main,0,0)
        assert out["values"]["wallet"]["value"]==1234 and out["storage_used"]==1 and len(out["pockets_raw"])==40 and out["friendship"]["value"]==100
        assert not out["runtime_verified"]
    assert not decode_money(bytes.fromhex("0100000000000000"))["valid"]
    print("synthetic tests passed: both backends, wallet codec, inventory, storage, NPC, invalid checksum")

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--index",type=Path,default=INDEX)
    p.add_argument("--manifest",type=Path)
    p.add_argument("--out",type=Path)
    p.add_argument("--build-db",type=Path)
    p.add_argument("--selftest",action="store_true")
    a=p.parse_args()
    index=json.loads(a.index.read_text(encoding="utf-8"))
    if a.selftest:
        for r in index["builds"].values(): selftest(r)
    if a.build_db: build_db(index,a.build_db)
    if a.manifest:
        m=json.loads(a.manifest.read_text(encoding="utf-8"))
        require(m.get("capture_kind")=="coherent_offline","require coherent offline snapshot declaration")
        bid=m["build_id"].lower()
        require(bid in index["builds"],"unsupported Build ID")
        r=index["builds"][bid]
        require(m["elf_sha256"].lower()==r["elf_sha256"],"ELF identity mismatch")
        folder=a.manifest.parent
        mem=Memory([(num(s["base"]),checked_file(folder/s["file"],s["sha256"])) for s in m["segments"]])
        out,addresses=resolve(mem,r,num(m["main_base"]),int(m.get("player",0)),m.get("npc"),num(m["heap_base"]) if "heap_base" in m else None)
        out["build_id"]=bid
        out["save_range_comparison"]=compare_save(mem,m,folder,addresses)
        out["provenance"]="caller-supplied capture; internal consistency only"
        payload=json.dumps(out,indent=2)
        if a.out: a.out.write_text(payload+"\n",encoding="utf-8")
        else: print(payload)
    elif not(a.selftest or a.build_db): p.error("choose --manifest, --build-db, or --selftest")
if __name__=="__main__": main()
