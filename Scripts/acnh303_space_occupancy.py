#!/usr/bin/env python3
"""Native occupancy and height evidence. Controlled scene replay, not physics mesh."""
import argparse,collections,hashlib,json,math,sqlite3,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *
import acnh303_r100_nso_decode as dec
from acnh303_furniture_space import Table,tree,crc,write,check,sha
BASE=0x100000
MEM=0x10000000
STACK=MEM+0x600000
STOP=MEM+0x610000
PRED=0x0277da10
SCAN=0x0149bc40
HEIGHT=0x01ae8c70
RIDE=0x01ae8db0
WINDOWS={0x01a50240:0xfc,0x01a5033c:0xe8,0x012e4d78:0x1e0,0x012e4f58:0x330,PRED:0x100,0x0149a6f0:0x1534,0x0149be24:0x150,SCAN:0x1e4,HEIGHT:0x140,RIDE:0x140}
def main(root,verified,out):
    it=Table(root,"ItemParam",tree(root));check(it.n==11178 and sha(it.b)=="9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609","Original ItemParam")
    check(crc("Height f32")==0xc187c516 and crc("RideHeight f32")==0xb662662c,"CRC names")
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(verified)
    check(sha(nso)=="68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1","Original NSO")
    out.mkdir(parents=True,exist_ok=True);cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    windows={}
    for a,n in WINDOWS.items():
        b=raw(a-BASE,n);windows[hex(a)]={"sha256":sha(b),"instructions":[{"va":hex(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in cs.disasm(b,a)],"boundedWindow":True}
    write(out/"instructions.json",windows)
    uc=Uc(UC_ARCH_ARM64,UC_MODE_ARM);end=max(v+len(b) for v,b in mapped)+BASE;extent=(max(end,0x08000000)+0xfff)&~0xfff
    uc.mem_map(BASE,extent-BASE)
    for v,b in mapped:uc.mem_write(v+BASE,b)
    def put64(a,v):uc.mem_write(a,struct.pack("<Q",v))
    def put32(a,v):uc.mem_write(a,struct.pack("<I",v))
    def u64(a):return struct.unpack("<Q",uc.mem_read(a,8))[0]
    for a,r in relocs.items():
        if r["type"] in ("RELR",1027) and r["symbol"]==0 and r["addend"] is not None and BASE<=a+BASE<extent-8:
            target=r["addend"]+BASE
            if 0<=target<2**64:put64(a+BASE,target)
    uc.mem_map(MEM,0x620000)
    item=MEM+0x1000;desc=MEM+0x2000;row=MEM+0x3000;fake=MEM+0x10000;table=MEM+0x70000;rows=MEM+0x71000
    scene=MEM+0x100000;rect=MEM+0x1c00
    # A 64x64x8 array of 24-byte records, plus object header.
    cache=u64(0x04bbfe90);flag=u64(0x04bbfe88)
    def singleton(got,v):a=u64(got);check(BASE<=a<extent-8,"GOT");put64(a,v)
    singleton(0x04bbbc68,0);singleton(0x04bb43c0,fake)
    put64(fake+0x57e58,table);put32(table+0x1d8,1);put64(table+0x1e0,rows);put64(rows,row)
    uc.mem_write(table+0x1f8,struct.pack("<H",79))
    singleton(0x04bb2720,0)
    def ret(v):uc.reg_write(UC_ARM64_REG_X0,v);uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
    def hook(u,a,size,data):
        if a==STOP:u.emu_stop()
        elif a==0x017baf44:ret(0)
    uc.hook_add(UC_HOOK_CODE,hook)
    def run(entry,args,s0=None):
        for r,v in zip((UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3),args):uc.reg_write(r,v)
        if s0 is not None:uc.reg_write(UC_ARM64_REG_S0,struct.unpack("<I",struct.pack("<f",s0))[0])
        uc.reg_write(UC_ARM64_REG_SP,STACK);uc.reg_write(UC_ARM64_REG_LR,STOP);uc.emu_start(entry,STOP,count=200000)
        check(uc.reg_read(UC_ARM64_REG_PC)==STOP,"Did not return "+hex(entry))
        return uc.reg_read(UC_ARM64_REG_X0)&0xffffffff
    preds=[]
    for id in (0xfffd,0xfffe,0xffff,0,79,80,0xf618,*range(0xf619,0xf620),0xf620):
        uc.mem_write(item,struct.pack("<HBBI",id,0,0,0));result=run(PRED,[item])
        expected=int(id==79 or 0xf619<=id<=0xf61f)
        check(result==expected,"Predicate "+hex(id));preds.append({"itemId":id,"result":result,"tableContainsOnly":79})
    # Actual accessors with explicit pre-resolved cache offsets. All original raw
    # rows are read; cache name resolution itself is not emulated.
    uc.mem_write(flag,b"\x01");put32(cache+0x28,it.cols["C187C516"]);put32(cache+0xf0,it.cols["B662662C"]);put64(desc+0x10,row)
    db=sqlite3.connect(out/"space-height.sqlite3")
    db.executescript("CREATE TABLE height(item_id INTEGER PRIMARY KEY,label TEXT,placement_crc INTEGER,height REAL,ride_height REAL,height_bits INTEGER,ride_height_bits INTEGER); CREATE TABLE evidence(key TEXT PRIMARY KEY,value TEXT);")
    vals=[];access=0
    for i in range(it.n):
        b=it.b[it.start+i*it.stride:it.start+(i+1)*it.stride];uc.mem_write(row,b)
        # The row's back-pointer is initialized by the engine; only the first
        # metadata word is synthetic, original field bytes remain unchanged.
        put32(row,0x1000)
        hb=it.val(i,"C187C516",4);rb=it.val(i,"B662662C",4)
        check(run(HEIGHT,[desc])==hb and run(RIDE,[desc])==rb,"Height getter mismatch "+str(i));access+=2
        h=struct.unpack("<f",struct.pack("<I",hb))[0];r=struct.unpack("<f",struct.pack("<I",rb))[0]
        check(math.isfinite(h) and math.isfinite(r),"Nonfinite height")
        vals.append((it.val(i,"54706054",2),it.text(i,"3FEBC642"),it.val(i,"9DCEA17E",4),h,r,hb,rb))
    db.executemany("INSERT INTO height VALUES(?,?,?,?,?,?,?)",vals)
    db.executemany("INSERT INTO evidence VALUES(?,?)",[("height_field","C187C516 = CRC32(Height f32)"),("ride_height_field","B662662C = CRC32(RideHeight f32)"),("getter_scope","Original instructions with explicit resolved offsets; synthetic row metadata and cache"),("runtimeVerified","false")])
    db.commit();check(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","DB integrity")
    samples=[dict(zip(("id","label","height","rideHeight"),x)) for x in db.execute("SELECT item_id,label,height,ride_height FROM height WHERE item_id IN (79,725,998,1499,1500,1501,3270,3505,12766,12767,13520)")]
    db.close()
    # Actual vertical occupancy scan, 0149BC40; scene metadata callback stubbed.
    # The 15.0 wrapper would scan precisely the first 3 height slots.
    scans=[]
    for h in (0.0,4.9,5.0,10.0,15.0,35.0,40.0):
        for y in (0,1,2,3,6,7):
            for flag0,kind in ((0,2),(1,0),(1,1),(1,2),(1,3)):
                x,z=12,21;uc.mem_write(rect+0x10,struct.pack("<ii",x,z));uc.mem_write(rect+0x20,struct.pack("<ii",x,z))
                p=scene+0x280+x*0x3000+z*0xc0+y*0x18
                uc.mem_write(p,bytes([flag0,kind])+b"\0"*22)
                result=run(SCAN,[scene,rect],s0=h)
                expected=int(flag0!=0 and kind>1 and y<math.floor(h/5))
                check(result==expected,"Vertical occupancy mismatch "+str((h,y,flag0,kind,result,expected)))
                scans.append({"height":h,"slot":y,"active":flag0,"typeByte":kind,"result":result})
                uc.mem_write(p,b"\0"*24)
    write(out/"predicate-replay.json",preds);write(out/"vertical-replay.json",scans)
    report={"nsoSha256":sha(nso),"heightRows":len(vals),"getterChecks":access,"predicateCases":len(preds),"verticalCases":len(scans),"samples":samples,"fieldOffsets":{h:it.cols[h] for h in ("B662662C","C187C516")},"heightRange":[min(v[3] for v in vals),max(v[3] for v in vals)],"rideHeightRange":[min(v[4] for v in vals),max(v[4] for v in vals)],"scope":"Native getter/predicate/vertical scan replay with synthetic scene, no runtime physics mesh or full placement"}
    write(out/"audit.json",report);print(json.dumps(report))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--verified",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.verified.resolve(),a.out)
