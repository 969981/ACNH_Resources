#!/usr/bin/env python3
"""R120: read-only original ARM64 emulation and bounded native reference audit."""
import argparse, hashlib, json, random, struct, zipfile
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_MEM_WRITE
from unicorn.arm64_const import UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X30, UC_ARM64_REG_SP, UC_ARM64_REG_PC
import acnh303_r100_nso_decode as dec
from acnh303_r119_save_dispatch import hash32

S=0x100000
BUF=0x20000000
STACK=0x30000000
STOP=0x40000000
PAGE=0x1000
WRITERS=[0x2837970,0x2838430,0x2838e10,0x2839940,0x283a1b0,0x283b370,0x283aa30]
CLOUD=[(0x283ebc0,0xa2458),(0x283ebf8,0xc6788),(0x283ec30,0x14c618)]

def align(n):return (n+PAGE-1)&-PAGE
def hx(n):return f"{n:08X}"
def sha(b):return hashlib.sha256(b).hexdigest()

def load_archive(p,digest,names):
    assert sha(p.read_bytes())==digest, p
    with zipfile.ZipFile(p) as z:
        return [json.loads(z.read(n)) for n in names]

def vm(mapped, length):
    u=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
    for start,data in mapped:
        addr=start+S
        p=addr&-PAGE
        u.mem_map(p,align(addr-p+len(data)))
        u.mem_write(addr,data)
    u.mem_map(BUF,align(length))
    u.mem_map(STACK,0x20000)
    u.mem_map(STOP,PAGE)
    return u

def invoke(u,entry,x0,x1=0,count=100000000):
    u.reg_write(UC_ARM64_REG_SP,STACK+0x1fff0)
    u.reg_write(UC_ARM64_REG_X30,STOP)
    u.reg_write(UC_ARM64_REG_X0,x0)
    u.reg_write(UC_ARM64_REG_X1,x1)
    u.emu_start(entry,STOP,timeout=120000000,count=count)
    assert u.reg_read(UC_ARM64_REG_PC)==STOP, "native execution did not return"

def main_emulation(mapped,files):
    m=next(f for f in files if f["name"]=="main")
    rs=m["checksum_regions"]+m["generator_only_inner_regions"]
    assert len(rs)==19
    size=m["write_size"]
    original=random.Random(120).randbytes(size)
    u=vm(mapped,size)
    u.mem_write(BUF,original)
    writes=[]
    def onwrite(uc,access,address,size,value,user):
        writes.append((address-BUF,size,value))
    u.hook_add(UC_HOOK_MEM_WRITE,onwrite,begin=BUF,end=BUF+size-1)
    invoke(u,0x27b3ad0,BUF)
    expected=bytearray(original)
    rows=[]
    for r in rs:
        p,n,h=r["start"],r["length"],r["hash_offset"]
        value=hash32(memoryview(original)[p:p+n])
        struct.pack_into("<I",expected,h,value)
        rows.append({"hash_offset":h,"start":p,"length":n,"expected":f"{value:08X}","actual":bytes(u.mem_read(BUF+h,4))[::-1].hex().upper()})
    assert bytes(u.mem_read(BUF,size))==expected, "native/reference full buffer mismatch"
    assert sorted((p,n) for p,n,v in writes)==sorted((r["hash_offset"],4) for r in rs), writes
    return {"entry":"027B3AD0","seed":120,"input_sha256":sha(original),"output_sha256":sha(expected),"writes":writes,"regions":rows,"full_buffer_equal":True,"synthetic_only":True}

def cloud_emulation(mapped):
    u=vm(mapped,PAGE)
    rows=[]
    for entry,size in CLOUD:
        for name,n,present in [("exact",size,True),("short",size-1,True),("long",size+1,True),("null",size,False)]:
            u.mem_write(BUF,bytes(PAGE))
            x0,x1,ctx,res,link,desc= [BUF+i for i in (0x0,0x10,0x100,0x200,0x300,0x400)]
            for p,v in [(x0,ctx),(x1,desc if present else 0),(ctx+8,res),(ctx+16,link),(link,desc),(desc+8,n)]:
                u.mem_write(p,struct.pack("<Q",v))
            u.mem_write(res,b"\xff")
            invoke(u,entry,x0,x1,count=100)
            got=u.mem_read(res,1)[0]
            assert got==int(present and n==size)
            rows.append({"entry":hx(entry),"test":name,"size":n,"present":present,"result":got})
    return rows

def direct_scan(mapped,targets):
    base,code=mapped[0]
    refs={hx(t):[] for t in targets}
    for i,(w,) in enumerate(struct.iter_unpack("<I",code[:len(code)//4*4])):
        if w&0x7c000000!=0x14000000:continue
        imm=w&0x3ffffff
        if imm&0x2000000:imm-=0x4000000
        site=base+i*4+S;t=site+imm*4
        if t in targets:refs[hx(t)].append({"site":hx(site),"kind":"BL" if w>>31 else "B","bytes":struct.pack("<I",w).hex()})
    return refs

def bounded_dispatch(raw,refs):
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    sites={int(r["site"],16) for t in WRITERS for r in refs[hx(t)] if r["kind"]=="BL"}
    lo=min(sites)&~0xff; hi=(max(sites)+0x100)&~0xff
    lo-=0x200;hi+=0x200
    ins={i.address:i for i in cs.disasm(raw(lo-S,hi-lo),lo)}
    edges=[]; external=[]; indirect=[]
    for a,i in ins.items():
        op=i.mnemonic
        if op in ("ret","eret"):continue
        if op in ("br","blr"):
            indirect.append({"site":hx(a),"op":op,"args":i.op_str})
            if op=="br":continue
        if op=="b" or op.startswith("b.") or op in ("cbz","cbnz","tbz","tbnz"):
            try:t=int(i.op_str.split("#")[-1],16)
            except ValueError:t=None
            if t is not None:
                (edges if t in ins else external).append([hx(a),hx(t)])
            if op=="b":continue
        if a+4 in ins:edges.append([hx(a),hx(a+4)])
    return {"scope":"bounded instruction window; no claim of complete function ownership","start":hx(lo),"end_exclusive":hx(hi),"writer_sites":[hx(a) for a in sorted(sites)],"instructions":[{"va":hx(a),"bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for a,i in ins.items()],"edges":edges,"external_edges":external,"indirect":indirect}

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--r117",type=Path,required=True)
    p.add_argument("--r119",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    files,prior=load_archive(a.r119,"170f6060a8fc6345a2a950417a9febac49db4f9af9d119723b8bcd7ac0c29a08",["savefile_index.json","direct_calls_verified.json"])
    cfg,groups=load_archive(a.r117,"c97248b700ea7684e6ef6543d1b5a458f7cdbcc5f120b1aeccffd81cbf3fca15",["selector_cfg.json","selector_groups.json"])
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(a.root)
    for group in groups:
        for r in group["entries"]:
            slot,target=int(r["slot"],16)-S,int(r["target"],16)-S
            assert relocs[slot]["type"]=="RELR" and relocs[slot]["addend"]==target
            for i in cfg[r["target"]]["instructions"]:
                assert raw(int(i["va"],16)-S,4).hex()==i["bytes"]
    targets=set(WRITERS+[0x27b3ad0,0x278ef80,0x26eb5c0,0x26eb980,0x26ef2cc,0x2701270,0x27014c0,0x283cba8,0x283cc58,0x283ccbc,0x283e838,0x283e8f8,0x283e9bc,0x283ebc0,0x283ebf8,0x283ec30,0x283ec6c,0x283ec84,0x283ec9c])
    refs=direct_scan(mapped,targets)
    for r in prior:
        if int(r["target"],16) in WRITERS:
            assert any(x["site"]==r["site"] and x["bytes"]==r["bytes"] for x in refs[r["target"]])
    a.out.mkdir(parents=True,exist_ok=True)
    def write(n,v):(a.out/n).write_text(json.dumps(v,indent=2)+"\n")
    write("direct_refs.json",refs)
    write("writer_dispatch_window.json",bounded_dispatch(raw,refs))
    cloud=cloud_emulation(mapped)
    write("cloud_size_emulation.json",cloud)
    native=main_emulation(mapped,files)
    write("main_native_hash_emulation.json",native)
    report={"main_native_hash_fields":len(native["regions"]),"main_buffer_equal":native["full_buffer_equal"],"cloud_size_cases":len(cloud),"selector_relocations":sum(len(g["entries"]) for g in groups),"ordinary_writer_bl":sum(sum(r["kind"]=="BL" for r in refs[hx(t)]) for t in WRITERS),"cloud_disk_mapping_verified":False,"cloud_content_hash_verified":False,"runtime_verified":False,"real_save_samples":0}
    write("report.json",report)
    print(json.dumps(report,indent=2))
if __name__=="__main__":main()
