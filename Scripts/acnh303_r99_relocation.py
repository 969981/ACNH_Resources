#!/usr/bin/env python3
"""R99 authenticated ELF relocation, initializer reference and camp failure evidence.
No runtime mutation, no inferred callback from a constructor or adjacent pointer.
"""
import argparse, bisect, collections, hashlib, json, struct
from pathlib import Path
import acnh303_r96_native_tables as r96
from acnh303_round11_elf_xref import adrp_target, add_imm, ldr_uimm, get_bytes_va, sx
SLIDE=0x100000
FACTORY={"action_count":0x4c8ded8,"action_pointer":0x4c8dee0,"query_count":0x4c8dee8,"query_pointer":0x4c8def0,
         "action_categories":0x4c8def8,"query_categories":0x4c8df68}
CAMP=0x4a765d8
ANCHORS={
 "89/00f089a0":["PTR_s_InduceFailAlreadyInduced_04bb9b88","PTR_LAB_04a765d8","local_24 < 5","(long)(int)local_24 * 2"],
 "58/00ee5828":["Camp_InduceFailFlag","PTR_FUN_04a765e8","PTR_FUN_04a765f8","PTR_FUN_04a76608","PTR_FUN_04a76618"],
 "9e/020d9e80":["lVar34 + 0x14c","lVar34 + 0x154","lVar34 + 0x156","lVar34 + 0x5b4","lVar34 + 0x5bc","lVar34 + 0x5be","TalkClothesPToday","FUN_0277d7b4(&local_d0,&local_120)"],
 "81/00ed8124":["FUN_020d9e80","DAT_05454084"],
 "d6/0277d6c4":["*param_1","bVar1 & 3"],
 "d7/0277d7b4":["FUN_0277d6c4(param_2)","FUN_0277d6c4(param_1)"],
 "fc/0070fcd0":["DAT_04c8dee0","DAT_04c8def0"],
 "96/01da9600":["InducedNpcNum","FUN_021c2ea8(&DAT_05453f20"]
}
def sha(b):return hashlib.sha256(b).hexdigest()
def write(p,d):r96.write(p,d)
class Image:
    def __init__(self,b):
        self.b=b
        assert b[:6]==b"\x7fELF\x02\x01"
        h=struct.unpack_from("<HHIQQQIHHHHHH",b,16)
        if h[1]!=183:raise ValueError("not AArch64")
        self.loads=[];self.sections=[];self.reloc={};self.stats=collections.Counter()
        for i in range(h[9]):
            typ,fl,off,va,pa,fs,ms,al=struct.unpack_from("<IIQQQQQQ",b,h[4]+i*h[8])
            if typ==1:
                if off+fs>len(b) or fs>ms:raise ValueError("invalid segment")
                self.loads.append({"vaddr":va,"file_offset":off,"filesz":fs,"memsz":ms,"flags":fl})
        if min(s["vaddr"] for s in self.loads)&~0xfff!=0:raise ValueError("unexpected load base")
        if h[11]<64 or h[5]+h[11]*h[12]>len(b):raise ValueError("invalid section table")
        for i in range(h[12]):
            n,t,f,a,o,z,l,info,al,ent=struct.unpack_from("<IIQQQQIIQQ",b,h[5]+i*h[11])
            self.sections.append(dict(index=i,name_off=n,type=t,flags=f,va=a,off=o,size=z,link=l,entsize=ent))
        st=self.sections[h[13]]
        strings=b[st["off"]:st["off"]+st["size"]]
        for s in self.sections:
            x=s["name_off"];end=strings.find(b"\0",x)
            s["name"]=strings[x:end].decode("ascii","replace") if end>=0 else ""
        for s in self.sections:
            if s["type"]!=4:continue # SHT_RELA
            if s["entsize"]!=24 or s["size"]%24:raise ValueError("bad RELA")
            if s["off"]+s["size"]>len(b):raise ValueError("bad relocation bounds")
            for addr,info,addend in struct.iter_unpack("<QQq",memoryview(b)[s["off"]:s["off"]+s["size"]]):
                typ=info&0xffffffff;sym=info>>32
                self.stats[f"{s['name']}:{typ}"]+=1
                val=None;kind="unresolved"
                if typ==1027 and sym==0:
                    val=addend;kind="R_AARCH64_RELATIVE"
                elif typ in (257,1025,1026) and sym and s["link"]<len(self.sections):
                    sy=self.sections[s["link"]]
                    if sy["entsize"]==24 and sym*24+24<=sy["size"]:
                        _,_,_,shndx,value,_=struct.unpack_from("<IBBHQQ",b,sy["off"]+sym*24)
                        if shndx and shndx<0xff00:
                            val=value+addend;kind="defined_symbol_relocation"
                row=dict(section=s["name"],type=typ,symbol=sym,addend=addend,target=val,kind=kind)
                if addr in self.reloc and self.reloc[addr]!=row:raise ValueError("duplicate relocation")
                self.reloc[addr]=row
        # SHT_RELR: packed relative relocations use existing word as implicit addend.
        for s in self.sections:
            if s["type"]!=19:continue
            if s["size"]%8 or s["off"]+s["size"]>len(b):raise ValueError("bad RELR")
            base=None
            for (entry,) in struct.iter_unpack("<Q",memoryview(b)[s["off"]:s["off"]+s["size"]]):
                if entry&1:
                    if base is None:raise ValueError("RELR bitmap before address")
                    offsets=[base+8*i for i in range(63) if entry&(2<<i)];base+=504
                else:offsets=[entry];base=entry+8
                for addr in offsets:
                    if addr in self.reloc:raise ValueError("duplicate RELR")
                    raw=self.raw(addr,8)
                    self.reloc[addr]=dict(section=s["name"],type="RELR",symbol=0,addend=None,target=int.from_bytes(raw,"little") if raw is not None else None,kind="implicit_relative")
                    self.stats[f"{s['name']}:RELR"]+=1
    def raw(self,v,n):return get_bytes_va(self.b,self.loads,v,n)
    def region(self,v,n):
        for s in self.loads:
            if s["vaddr"]<=v and v+n<=s["vaddr"]+s["memsz"]:
                return "file_backed" if v+n<=s["vaddr"]+s["filesz"] else "zero_fill_or_boundary"
        return "unmapped"
    def exec(self,v):
        return v is not None and any(s["flags"]&1 and s["vaddr"]<=v<s["vaddr"]+s["filesz"] for s in self.loads)
    def ptr(self,v):
        raw=self.raw(v,8);rr=self.reloc.get(v);word=int.from_bytes(raw,"little") if raw is not None else None
        target=rr["target"] if rr else word
        return dict(slot=hex(v),ghidra_slot=hex(v+SLIDE),raw_word=hex(word) if word is not None else None,
                    relocation=rr,target_elf_va=hex(target) if target is not None else None,
                    target_ghidra_va=hex(target+SLIDE) if self.exec(target) else None,
                    executable=self.exec(target),source="relocation" if rr else "raw_word_candidate")
    def cstr(self,v,limit=100):
        if v is None:return None
        a=self.raw(v,limit)
        if a is None or b"\0" not in a:return None
        try:return a.split(b"\0",1)[0].decode("ascii")
        except UnicodeDecodeError:return None
def scan_refs(im,targets):
    # Narrow instruction patterns; no assertion of reaching definition across arbitrary instructions.
    reverse=collections.defaultdict(list)
    for addr,r in im.reloc.items():
        if r["target"] in targets:reverse[addr].append(r["target"])
    keys=set(targets)|set(reverse);pages={v&~4095 for v in keys}
    results=[];calls=[]
    for s in im.loads:
        if not s["flags"]&1:continue
        n=s["filesz"]//4;view=memoryview(im.b)[s["file_offset"]:s["file_offset"]+4*n]
        for i,(w,) in enumerate(struct.iter_unpack("<I",view)):
            pc=s["vaddr"]+4*i
            if w&0xfc000000 in (0x14000000,0x94000000) and pc+sx(w&0x3ffffff,26)*4==0x70fcd0-SLIDE:
                calls.append({"site":hex(pc+SLIDE),"kind":"direct B/BL"})
            page=adrp_target(w,pc)
            if page not in pages:continue
            rd=w&31
            # Check direct adjacent accesses, and ADD address followed by immediate store/load.
            for j in range(i+1,min(i+9,n)):
                ins=struct.unpack_from("<I",view,4*j)[0]
                add=add_imm(ins);ldr=ldr_uimm(ins)
                store=None
                op=ins&0xffc00000
                if op in (0xb9000000,0xf9000000):
                    store={"rn":(ins>>5)&31,"imm":((ins>>10)&0xfff)*(8 if op==0xf9000000 else 4),"rt":ins&31}
                for kind,d in (("ADD",add),("LDR",ldr),("STR",store)):
                    if not d or d["rn"]!=rd:continue
                    dest=page+d["imm"]
                    if dest not in keys:continue
                    for target in reverse.get(dest,[dest]):
                        if target not in targets:continue
                        results.append({"adrp_ghidra":hex(pc+SLIDE),"access_ghidra":hex(s["vaddr"]+4*j+SLIDE),"kind":kind,
                            "address":hex(dest+SLIDE),"global":targets[target],"through_relocation_slot":dest!=target,
                            "instruction_distance":j-i,"confidence":"adjacent_pattern" if j==i+1 else "bounded_candidate"})
                    if add or ldr:
                        reg=add["rd"] if add else ldr["rt"]
                        base=dest if add else (reverse[dest][0] if dest in reverse else None)
                        if base is None:continue
                        for k in range(j+1,min(j+7,n)):
                            st=struct.unpack_from("<I",view,4*k)[0];op2=st&0xffc00000
                            if op2 in (0xb9000000,0xf9000000) and (st>>5)&31==reg:
                                final=base+((st>>10)&4095)*(8 if op2==0xf9000000 else 4)
                                if final in targets:
                                    results.append({"adrp_ghidra":hex(pc+SLIDE),"access_ghidra":hex(s["vaddr"]+4*k+SLIDE),"kind":"indirect_STR_candidate","global":targets[final],"confidence":"bounded_candidate"})
    return results,calls
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    anchors=[]
    for rel,need in ANCHORS.items():
        p=root/r96.CROOT/(rel+".c");s=p.read_text("utf-8")
        if not all(x in s for x in need):raise ValueError("anchor mismatch "+rel)
        anchors.append({"path":p.relative_to(root).as_posix(),"sha256":sha(p.read_bytes()),"anchors":need})
    b=(root/r96.ELF).read_bytes()
    if sha(b)!=r96.SHA:raise ValueError("ELF identity drift")
    im=Image(b);globals={}
    for key,gh in FACTORY.items():
        v=gh-SLIDE;n=8 if "pointer" in key else 4
        globals[key]={"ghidra_va":hex(gh),"region":im.region(v,n),"raw":im.raw(v,n).hex() if im.raw(v,n) is not None else None,"relocation":im.reloc.get(v)}
    refs,calls=scan_refs(im,{v-SLIDE:k for k,v in FACTORY.items()})
    paths=sorted((root/r96.CROOT).rglob("*.c"))
    byva={int(p.stem,16):p for p in paths if len(p.stem)==8 and all(c in "0123456789abcdef" for c in p.stem)}
    owners=sorted(byva)
    for x in refs+calls:
        v=int(x.get("access_ghidra",x.get("site")),16);idx=bisect.bisect_right(owners,v)-1
        if idx>=0:x["nearest_prior_export"]=byva[owners[idx]].relative_to(root).as_posix()
    # Resolve five exact 16-byte slots and their companion words, with actual relocation provenance.
    strptr=im.ptr(0x4bb9b88-SLIDE);strval=strptr["target_elf_va"];strbase=int(strval,16) if strval else None
    defs=(root/"UnPack/1/Bcsv/EventFlagsPlayerParam.csv").read_text("utf-8").splitlines()
    camp=[]
    for i,delta in enumerate([0,0x1a,0x33,0x4c,99]):
        ptr=im.ptr(CAMP-SLIDE+16*i);comp=im.raw(CAMP-SLIDE+16*i+8,8)
        reason=im.cstr(strbase+delta) if strbase is not None else None
        entry={"index":i,"function":ptr,"companion_word_raw":comp.hex() if comp is not None else None,"reason_string":reason,
               "player_flag_rows":[l for l in defs if reason and ",Camp_"+reason+"," in l]}
        gh=ptr["target_ghidra_va"];p=byva.get(int(gh,16)) if gh else None
        if p:
            source=p.read_text("utf-8");entry.update({"exact_export":p.relative_to(root).as_posix(),"sha256":sha(p.read_bytes()),"excerpt":source[:12000]})
        camp.append(entry)
    # Link direct reward callback candidates only via a future object-table snapshot.
    report={"elf_sha256":sha(b),"relocation_entries":len(im.reloc),"relocation_types":dict(im.stats),
            "factory_globals":globals,"factory_reference_candidates":len(refs),"factory_store_candidates":sum("STR" in x["kind"] for x in refs),
            "factory_direct_incoming_branches":calls,"camp_pointer_slots":camp,
            "camp_executable_targets":sum(x["function"]["executable"] for x in camp),
            "camp_exact_source_exports":sum("exact_export" in x for x in camp),"anchors_verified":len(anchors),
            "reward_vtable_verified":False,"real_receptor_snapshot_verified":False,"real_save_verified":False,
            "photo_probability":None,"unknown_original_names":["5140E4B4","5F77B61A","BED25A86","8D401DF7"]}
    write(out/"report.json",report);write(out/"factory_global_references.json",refs)
    write(out/"relocation_inventory.json",{"loads":im.loads,"sections":im.sections,"types":dict(im.stats),"source_sha256":sha(b)})
    write(out/"native_source_anchors.json",anchors)
    print(json.dumps({**report,"camp_pointer_slots":[{k:v for k,v in x.items() if k!="excerpt"} for x in camp]},ensure_ascii=False,indent=2))
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
