#!/usr/bin/env python3
"""Original AArch64 support rectangle replay with controlled dependency stubs.
Not a game runtime: synthetic descriptor, lookup and dimension inputs; real instructions
for rectangle/rotation only. No final placement, geometry collision or height oracle."""
import argparse,collections,hashlib,json,struct
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *
import acnh303_r100_nso_decode as dec
from acnh303_furniture_space import NCA,Table,tree,crc,write,check
BASE=0x100000
MEM=0x10000000
STACK=MEM+0x100000
STOP=MEM+0x200000
SUPPORT=0x01500520
BOUNDS=0x01afb7fc
FUNCTIONS={SUPPORT:0x2e8,BOUNDS:0xec,0x0148e51c:0x1000,0x022acc00:0x530,0x01500808:0x300,0x0148bf70:0x480,0x01490b64:0x180}
def main(root,verified,out):
    paths=tree(root);it=Table(root,"ItemParam",paths);sz=Table(root,"ItemSize",paths)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(verified)
    out.mkdir(parents=True,exist_ok=True)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    windows={}
    for a,n in FUNCTIONS.items():
        b=raw(a-BASE,n);(out/(f"{a:08x}.bin")).write_bytes(b)
        windows[f"{a:08x}"]={"sha256":hashlib.sha256(b).hexdigest(),"instructions":[{"va":hex(i.address),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in cs.disasm(b,a)],"boundedWindow":True}
    write(out/"instruction-windows.json",windows)
    # Only original relative pointers needed by the replay. External imports are not executed.
    uc=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
    end=max(v+len(b) for v,b in mapped)+BASE
    extent=(max(end,0x08000000)+0xfff)&~0xfff
    uc.mem_map(BASE,extent-BASE)
    for v,b in mapped:uc.mem_write(v+BASE,b)
    def put64(a,v):uc.mem_write(a,struct.pack("<Q",v))
    def put32(a,v):uc.mem_write(a,struct.pack("<I",v))
    def u64(a):return struct.unpack("<Q",uc.mem_read(a,8))[0]
    # Relocate the explicit native GOT cells used by both functions and other
    # loaded relative data; do not install external symbols.
    for a,r in relocs.items():
        if r["type"] in ("RELR",1027) and r["symbol"]==0 and r["addend"] is not None and BASE<=a+BASE<extent-8:
            target=r["addend"]+BASE
            if 0<=target<2**64:put64(a+BASE,target)
    uc.mem_map(MEM,0x210000)
    # Synthetic singleton/table chain for footprint branch only.
    singleton=u64(0x04bb43c0);check(BASE<=singleton<extent-8,"Singleton pointer")
    fake=MEM+0x3000;table=MEM+0x60000;rows=MEM+0x61000
    put64(fake+0x57e58,table);put32(table+0x1d8,1);put64(table+0x1e0,rows);put64(rows,MEM+0x62000)
    params={};trace=[]
    def ret(v):uc.reg_write(UC_ARM64_REG_X0,v);uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
    def hook(u,a,size,data):
        if a==STOP:u.emu_stop();return
        if a==0x0277e294:trace.append("valid_item_stub");ret(1)
        elif a==0x0277d6c4:trace.append("item_id_stub");ret(0)
        elif a==0x01ae7550:trace.append("placement_type_stub");ret(params["type"])
        elif a==0x01afb8e8:trace.append("axis_mode_stub");ret(params["mode"])
        elif a==0x01afb1a0:
            trace.append("dimension_stub");p=u.reg_read(UC_ARM64_REG_X1);u.mem_write(p+8,struct.pack("<ii",params["w"],params["h"]));ret(0)
        elif a==0x01aee3b4:trace.append("size_enum_stub");ret(params["size"])
        elif a==BOUNDS and params["entry"]==SUPPORT:
            trace.append("footprint_stub");p=u.reg_read(UC_ARM64_REG_X1);rot=u.reg_read(UC_ARM64_REG_X2)&3
            w,h=params["w"],params["h"]
            if rot&1:w,h=h,w
            u.mem_write(p+0x10,struct.pack("<ii",0,0));u.mem_write(p+0x20,struct.pack("<ii",w-1,h-1));ret(0)
    uc.hook_add(UC_HOOK_CODE,hook)
    def run(entry,w,h,typ,rot,size,mode=0,x=10,y=20):
        params.update(entry=entry,w=w,h=h,type=typ,rot=rot,size=size,mode=mode);trace.clear()
        # Support routine gets an otherwise empty descriptor; all dependent
        # lookups are explicitly stubbed. Bounds uses synthetic valid row.
        put64(singleton,fake if entry==BOUNDS else 0)
        uc.mem_write(MEM+0x1000,b"\0"*0x1000);uc.mem_write(STACK-0x2000,b"\0"*0x2000)
        dst=MEM+0x1000;item=MEM+0x1100;pos=MEM+0x1200;direction=MEM+0x1300
        uc.mem_write(pos+8,struct.pack("<ii",x,y));put32(direction,rot)
        for i,r in enumerate([UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X3]):uc.reg_write(r,[dst,item,pos,direction][i] if entry==SUPPORT else [item,dst,rot,0][i])
        uc.reg_write(UC_ARM64_REG_SP,STACK);uc.reg_write(UC_ARM64_REG_LR,STOP)
        uc.emu_start(entry,STOP,count=10000)
        check(uc.reg_read(UC_ARM64_REG_PC)==STOP,"Replay did not return")
        result=uc.reg_read(UC_ARM64_REG_X0)
        lo=struct.unpack("<ii",uc.mem_read(dst+0x10,8));hi=struct.unpack("<ii",uc.mem_read(dst+0x20,8))
        return {"result":result if entry==SUPPORT else None,"min":lo,"max":hi,"stubs":list(trace)}
    labels={crc(sz.text(i,"87BF00E8")):(i,sz.val(i,"16B8F524",1),sz.val(i,"BCB13DAF",1)) for i in range(sz.n)}
    kinds=["Floor","Floor_Downer","Floor_DownerLeft","Floor_DownerRight","Floor_DownerFront","Floor_DownerUpper","Floor_DownerCenter","Floor_Upper","Floor_Gate","Floor_Corner","Wall_NoCol","Wall_HalfUnit","Wall_1Unit","Rug","Ceiling"]
    pmap={crc(n):i for i,n in enumerate(kinds)}
    groups=collections.Counter((pmap[it.val(i,"9DCEA17E",4)],*labels[it.val(i,"E06FB090",4)]) for i in range(it.n))
    tests=[];supports=[]
    for s,w,h in sorted(set(labels.values())):
        for rot in range(4):
            for mode in (0,1):
                a=run(BOUNDS,w,h,0,rot,s,mode)
                ow,oh=(h,w) if rot&1 and mode!=1 else (w,h)
                check(a["min"]==(0,0) and a["max"]==(ow-1,oh-1),"Original bounds mismatch "+str((s,w,h,rot,mode,a)))
                tests.append({"sizeEnum":s,"w":w,"h":h,"rot":rot,"axisMode":mode,**a})
    for (typ,s,w,h),n in sorted(groups.items()):
        for rot in range(4):
            a=run(SUPPORT,w,h,typ,rot,s)
            check(a["result"]==int(1<=typ<=6 and (typ!=6 or s==2)),"Support gate mismatch")
            if a["result"]:
                lo,hi=a["min"],a["max"];ow,oh=(h,w) if rot&1 else (w,h)
                check(10<=lo[0]<=hi[0]<10+ow and 20<=lo[1]<=hi[1]<20+oh,"Support outside footprint")
            supports.append({"type":typ,"typeName":kinds[typ],"sizeEnum":s,"w":w,"h":h,"rot":rot,"itemCount":n,**a})
    write(out/"rotation-replay.json",tests);write(out/"support-replay.json",supports)
    result={"nativeNsoSha256":hashlib.sha256(nso).hexdigest(),"sizeRotationCases":len(tests),"supportCases":len(supports),"acceptedSupportCases":sum(r["result"]==1 for r in supports),"declaredSupportItems":sum(n for (typ,*_),n in groups.items() if 1<=typ<=6),"scope":"Original ARM64 instructions, synthetic input and dependency stubs; not in-game placement","heightVerified":False,"collisionVerified":False}
    write(out/"audit.json",result);print(json.dumps(result))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--verified",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.verified.resolve(),a.out)
