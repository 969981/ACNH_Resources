#!/usr/bin/env python3
"""HASH-008E original BCSV join + bounded native cache slot xrefs.
The three unknown PlayerStateParam slot numbers are ordinal hypotheses only.
"""
import argparse,collections,hashlib,json,struct,re
from pathlib import Path
import lz4.block
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
ROM=Path("e10617820db06889e1638499478da0de_NCA")
ELF_SHA="145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664"
def sha(b):return hashlib.sha256(b).hexdigest()
def gitblob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def require(x,m):
    if not x:raise ValueError(m)
MACHINE_AARCH64=183
MAX_ELF=256*1024*1024
MAGICS=["AMTA","BARS","BDLI","LBLI","EventFlow","EventFlowAction","EventFlowQuery",
        "EventFlowSystemActor","MainNpc","evfl","aal::","nn::audio"]
RUNTIME_STATUS="STATIC_STRING_CROSS_REFERENCE_ONLY_NOT_DISPATCH_OR_GAMEPLAY_PROOF"

def sx(x,bits):
    return x-(1<<bits) if x&(1<<(bits-1)) else x

def adrp_target(word,pc):
    if word & 0x9f000000 != 0x90000000:return None
    imm=((word>>5)&0x7ffff)<<2 | ((word>>29)&3)
    return (pc&~4095)+(sx(imm,21)<<12)

def adr_target(word,pc):
    if word & 0x9f000000 != 0x10000000:return None
    imm=((word>>5)&0x7ffff)<<2 | ((word>>29)&3)
    return pc+sx(imm,21)

def add_imm(word):
    # ADD (immediate) 64-bit, no flags, standard ADRP+ADD address formation.
    if word&0xff000000 != 0x91000000:return None
    sh=(word>>22)&3
    if sh>1:return None
    return {"rd":word&31,"rn":(word>>5)&31,
            "imm":((word>>10)&0xfff)<<(12 if sh==1 else 0)}

def ldr_uimm(word):
    # LDR Wt/Xt, [Xn,#imm12] unsigned address, not arbitrary STR/LDR variants.
    if (word & 0xffc00000) not in (0xb9400000,0xf9400000):return None
    return {"rt":word&31,"rn":(word>>5)&31,
            "imm":((word>>10)&0xfff)*(4 if (word>>30)&3==2 else 8)}

def bl_target(word,pc):
    if word&0xfc000000 != 0x94000000:return None
    return pc+sx(word&0x03ffffff,26)*4

def parse_elf(blob):
    if len(blob)>MAX_ELF or len(blob)<64 or blob[:4]!=b"\x7fELF" or blob[4]!=2 or blob[5]!=1:
        raise ValueError("requires bounded little-endian ELF64, not NSO, git-lfs pointer or PE")
    e=struct.unpack_from("<HHIQQQIHHHHHH",blob,16)
    if e[1]!=MACHINE_AARCH64:raise ValueError(f"expected AArch64 e_machine=183, got {e[1]}")
    phoff=e[4];phentsize=e[8];phnum=e[9]
    if phentsize<56 or phnum>4096 or phoff+phentsize*phnum>len(blob):
        raise ValueError("ELF program header table invalid")
    segments=[]
    for i in range(phnum):
        typ,flags,off,va,pa,filesz,memsz,align=struct.unpack_from("<IIQQQQQQ",blob,phoff+i*phentsize)
        if typ!=1 or not filesz:continue
        if off+filesz>len(blob) or memsz<filesz:raise ValueError("mapped segment exceeds file")
        segments.append({"index":i,"flags":flags,"file_offset":off,"vaddr":va,
                         "filesz":filesz,"memsz":memsz})
    if not segments or not any(x["flags"]&1 for x in segments):
        raise ValueError("ELF lacks mapped executable region")
    return segments

def get_bytes_va(blob,segments,va,count):
    for x in segments:
        if x["vaddr"]<=va and va+count<=x["vaddr"]+x["filesz"]:
            off=x["file_offset"]+va-x["vaddr"]
            return blob[off:off+count]
    return None


def reg(name):
    if name in ("xzr","wzr"):return "zero"
    if name.startswith(("x","w")) and name[1:].isdigit():return "x"+name[1:]
    return name

SOURCE_SHA="68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1"
def decode(root):
    p=root/ROM/'0/main.elf';elf=p.read_bytes();nso=p.with_name("main").read_bytes()
    if sha(elf)!=ELF_SHA or sha(nso)!=SOURCE_SHA:raise ValueError("source drift")
    if nso[:4]!=b"NSO0":raise ValueError("NSO magic")
    flags=struct.unpack_from("<I",nso,12)[0];segments=[];mapped=[]
    for i in range(3):
        off,va,size,extra=struct.unpack_from("<IIII",nso,0x10+16*i)
        packed=struct.unpack_from("<I",nso,0x60+4*i)[0]
        if off+packed>len(nso) or size>128*1024*1024:raise ValueError("NSO segment bounds")
        raw=nso[off:off+packed]
        data=lz4.block.decompress(raw,uncompressed_size=size) if flags&(1<<i) else raw
        if len(data)!=size:raise ValueError("NSO decompressed size")
        expected=nso[0xa0+32*i:0xc0+32*i].hex()
        if flags&(1<<(3+i)) and sha(data)!=expected:raise ValueError("NSO segment digest")
        mapped.append((va,data));segments.append({"type":["text","rodata","data"][i],"va":hex(va),"length":size,"sha256":sha(data),"hash_flag":bool(flags&(1<<(3+i)))})
    def raw(va,n):
        for start,b in mapped:
            if start<=va and va+n<=start+len(b):return b[va-start:va-start+n]
        raise ValueError(f"unmapped original NSO range {va:#x}+{n:#x}")
    def u64(va):return struct.unpack("<Q",raw(va,8))[0]
    mod=struct.unpack("<I",raw(4,4))[0]
    if raw(mod,4)!=b"MOD0":raise ValueError("MOD0 absent")
    dyn=mod+struct.unpack("<i",raw(mod+4,4))[0]
    tags={}
    for i in range(4096):
        t,v=struct.unpack("<qQ",raw(dyn+16*i,16))
        if not t:break
        tags.setdefault(t,[]).append(v)
    else:raise ValueError("unterminated dynamic table")
    def tag(t,default=0):return tags.get(t,[default])[0]
    relocs={}
    def add(va,row):
        if va in relocs:raise ValueError(f"duplicate original relocation {va:#x}")
        relocs[va]=row
    for name,va,size in [("RELA",tag(7),tag(8)),("JMPREL",tag(23),tag(2))]:
        if not size:continue
        if size%24:raise ValueError("invalid RELA size")
        for dest,info,a in struct.iter_unpack("<QQq",raw(va,size)):
            add(dest,{"table":name,"type":info&0xffffffff,"symbol":info>>32,"addend":a})
    # DT_RELR = 36, DT_RELRSZ = 35, DT_RELRENT = 37.
    if tag(35):
        if tag(37,8)!=8 or tag(35)%8:raise ValueError("invalid RELR size")
        base=None
        for (entry,) in struct.iter_unpack("<Q",raw(tag(36),tag(35))):
            if entry&1:
                if base is None:raise ValueError("RELR bitmap before base")
                addresses=[base+i*8 for i in range(63) if entry&(2<<i)]
                base+=63*8
            else:addresses=[entry];base=entry+8
            for a in addresses:
                try:value=u64(a)
                except ValueError:value=None
                add(a,{"table":"RELR","type":"RELR","symbol":0,"addend":value})
    return elf,nso,mapped,segments,raw,tags,relocs

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

def bcsv(root,name):
    p=root/ROM/"1/Bcsv"/(name+".bcsv");b=p.read_bytes()
    n,w,c=struct.unpack_from("<IIH",b);start=28+8*c
    require(b[12:16]==b"VSCB" and start+n*w<=len(b),"BCSV header")
    cols={f"{h:08X}":(i,o) for i,(h,o) in enumerate(struct.unpack_from("<II",b,28+8*i) for i in range(c))}
    def width(h):
        o=cols[h][1];return min([w]+[x[1] for x in cols.values() if x[1]>o])-o
    def val(i,h,size):
        o=cols[h][1];return int.from_bytes(b[start+i*w+o:start+i*w+o+size],"little")
    def string(i,h):
        o=cols[h][1];return b[start+i*w+o:start+i*w+o+width(h)].split(b"\0",1)[0].decode("utf-8",errors="replace")
    return b,n,w,cols,val,string,width
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    b,n,w,cols,val,string,width=bcsv(root,"ItemParam")
    require(gitblob(b)=="431bbd26a575197a1bd963c1721b093ae3e4df84" and n==11178,"original ItemParam identity")
    require(cols["54706054"][1]==280,"ItemParam ID offset")
    items={}
    for i in range(n):
        item=val(i,"54706054",2)
        require(item not in items,"duplicate ID")
        items[item]={"item_id":item,"item_row":i,"model_base":string(i,"48EF0398"),"res_name":string(i,"3FEBC642"),"raw_kind":val(i,"FC275E86",width("FC275E86"))}
    rb,rn,rw,rc,rv,rs,rwidth=bcsv(root,"RecipeCraftParam")
    require(rn==924 and rc["AD0C787A"]==(27,136),"recipe identity")
    require(rc["EFA5DDA4"]==(25,71),"recipe field")
    result=[];harvest=0
    for i in range(rn):
        v=rv(i,"AD0C787A",1);season=rs(i,"33DDEFC8");harvest+=season=="HarvestFestival"
        require((v==1)==(season=="HarvestFestival"),"season/flag mismatch")
        if v:
            item=rv(i,"89A3482C",2)
            require(item in items,"unresolved item FK")
            result.append({"recipe_id":rv(i,"54706054",2),"serial_id":rv(i,"39DEDE36",2),"recipe_row":i,"AD0C787A":v,"EFA5DDA4":rv(i,"EFA5DDA4",1),"event":season,**items[item]})
    require(len(result)==harvest==8,"eight recipe records")
    require({x["item_id"] for x in result}=={13447,13448,13449,13450,13453,13818,13819,13820},"recipe item IDs")
    print("ITEM_JOIN",json.dumps(result,ensure_ascii=False))
    (out/"recipe_item_join.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n")
    pb,pn,pw,pc,pv,ps,pwidth=bcsv(root,"PlayerStateParam")
    require(pn==329 and len(pc)==42,"PlayerStateParam schema")
    focus={"5B6D5751":30,"65FD6B0D":33,"A84507AA":38}
    states={}
    for h,slot in focus.items():
        require(pc[h][0]==slot and pwidth(h)==1,"ordinal hypothesis changed")
        states[h]={"ordinal":slot,"row_offset":pc[h][1],"ones":[ps(i,"2AE273E3") for i in range(pn) if pv(i,h,1)==1],"other_values":sorted({pv(i,h,1) for i in range(pn)}-{0,1})}
    (out/"player_states.json").write_text(json.dumps(states,indent=2)+"\n")
    elf,nso,mapped,segments,raw,tags,relocs=decode(root)
    require(len(relocs)==380793,"reloc count")
    segs=parse_elf(elf);reloc={}
    for addr,r in relocs.items():
        if r["symbol"]==0 and r["type"] in ("RELR",1027) and r["addend"] is not None:reloc[addr]=r["addend"]
        elif r["symbol"] and r["type"] in (257,1025,1026):
            try:
                _,_,_,idx,v,_=struct.unpack("<IBBHQQ",raw(tags[6][0]+r["symbol"]*24,24))
                if 0<idx<0xff00:reloc[addr]=v+r["addend"]
            except ValueError:pass
    # Known shared GOT pointer, not derived from ordinal.
    slotptr=0x04bc2fe8-0x100000;flagptr=slotptr-8
    require(slotptr in reloc and flagptr in reloc,"missing PlayerState cache relocation")
    base=reloc[slotptr];flag=reloc[flagptr]
    require(any(s["flags"]&2 and s["vaddr"]<=base and base+168<=s["vaddr"]+s["memsz"] for s in segs),"cache address not writable")
    targets={base+4*v:h for h,v in focus.items()}
    aliases={a:v for a,v in reloc.items() if v==flag or base<=v<base+168}
    pages={a&~4095 for a in set(aliases)|{base,base+167,flag}}
    direct_targets=set(aliases)|set(targets)
    md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.detail=True
    records={};seeds=words=0
    for s in segs:
        if not s["flags"]&1:continue
        start=s["file_offset"];size=s["filesz"];va=s["vaddr"]
        for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(elf)[start:start+size-size%4])):
            site=va+i*4;words+=1
            if adrp_target(w,site) not in pages and adr_target(w,site) not in direct_targets:continue
            seeds+=1
            ins,refs,calls=scan(md,elf,segs,reloc,site,min(192,size-i*4))
            for x in refs:
                for target,h in targets.items():
                    if x["address"]<target+4 and target<x["address"]+x["width"]:
                        key=(h,x["va"],x["address"],x["kind"],x["width"])
                        records[key]={**x,"hash_hypothesis":h,"slot_address":target,"exact_32bit":x["address"]==target and x["width"]==4,"source_seed_va":site,"grade":"bounded_address_reference_not_field_consumer_proof","context":[{"va":y.address,"asm":y.mnemonic+" "+y.op_str} for y in ins if x["va"]-24<=y.address<=x["va"]+48]}
    rows=sorted(records.values(),key=lambda x:(x["hash_hypothesis"],x["va"],x["kind"]))
    (out/"player_cache_refs.json").write_text(json.dumps(rows,indent=2)+"\n")
    summary={"original_item_blob":gitblob(b),"recipe_blob":gitblob(rb),"player_blob":gitblob(pb),"item_count":n,"recipe_count":rn,"special_recipes":len(result),"cache_base_elf":base,"cache_flag_elf":flag,"relocation_pointer_slot":slotptr,"relocation_aliases":len(aliases),"executable_words":words,"seed_count":seeds,"remaining_hypotheses":{h:{"slot":v,"slot_va":base+v*4,"one_count":len(states[h]["ones"]),"read_refs":sum(x["hash_hypothesis"]==h and x["kind"]=="read" for x in rows),"exact_32bit_reads":sum(x["hash_hypothesis"]==h and x["kind"]=="read" and x["exact_32bit"] for x in rows),"write_refs":sum(x["hash_hypothesis"]==h and x["kind"]=="write" for x in rows)} for h,v in focus.items()},"verified_new_original_names":0}
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n");print(json.dumps(summary,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
