#!/usr/bin/env python3
"""R107: targeted NSO relocation / enum / gift-filter audit; preserve unproved mappings."""
import argparse,collections,json,re,struct,zlib
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG,ARM64_OP_IMM,ARM64_OP_MEM
import acnh303_r100_nso_decode as dec
import acnh303_r105_gift_db as db
import acnh303_r101_factory_records as r101
import acnh303_r95_native_eventflags as r95
from acnh303_round11_elf_xref import adrp_target,adr_target,add_imm,ldr_uimm,bl_target
S=0x100000
CROOT=Path("derived/3.0.3/ghidra12.2/c")
def main(root,out):
    out.mkdir(parents=True,exist_ok=True)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM);cs.detail=True
    def hx(v):return hex(v+S) if v is not None else None
    def ptr(a):
        r=relocs.get(a,{})
        return r.get("addend") if r.get("type") in ("RELR",1027) and r.get("symbol")==0 else None
    def dis(a,n):
        try:return list(cs.disasm(raw(a,n),a))
        except ValueError:return []
    def row(i):return {"site":hx(i.address),"bytes":i.bytes.hex(),"op":i.mnemonic+" "+i.op_str}
    def path(a):
        h=f"{a+S:08x}";p=root/CROOT/h[-4:-2]/(h+".c")
        return p if p.is_file() else None
    def string(a):
        for va,b in mapped[1:]:
            if va<=a<va+len(b):
                i=a-va;j=b.find(b"\0",i,min(i+128,len(b)))
                if j>=i:return b[i:j].decode("utf8",errors="replace")
        return None
    anchors={}
    for a,need in {0x1a5a3e8:['_AITagBitEnum','LAB_01a60c10','LAB_01acb930'],0x1acaac0:['0xa8eacf70','DAT_05325c8c = CONCAT44(1,~uVar10)','DAT_05325c94 = CONCAT44(2,~uVar8)','DAT_05325c9c = CONCAT44(3,~uVar12)'],0x7b1100:['DAT_04ca7a20','uVar3 < 4'],0x1a63910:['PTR_DAT_04bc0100'],0x20d9e80:['PTR_DAT_04bc0100','DAT_041797d0'],0x1ad7260:['-0x4fcfb4f3'],0x1afcfa0:['0xcb402a3']}.items():
        p=path(a-S);assert p
        t=p.read_text("utf8");assert all(x in t for x in need),(p,need)
        anchors[hex(a)]={"path":p.relative_to(root).as_posix(),"sha256":db.digest(p.read_bytes()),"anchors":need}
    # Recover R106's static permissions and exact signed count bounds from raw BCSV.
    kind,item,tag,remake=[db.BCSV(root,n) for n in ("ItemKind","ItemParam","AITag","ItemRemake")]
    flag_names=("CanNpcPresent","CanNpcBirthdayPresent","CanGift")
    fs={n:f"{db.crc(n+' u8'):08X}" for n in flag_names}
    assert fs["CanNpcPresent"]=="0732BB98"
    kinds={kind.string(i,"87BF00E8"):{n:kind.val(i,h) for n,h in fs.items()} for i in range(kind.n)}
    hkeys={db.crc(k):k for k in kinds}
    fields=[]
    for h,w in item.width.items():
        if w!=4:continue
        vs=[item.val(i,h) for i in range(item.n)]
        n=sum(v in hkeys for v in vs)
        if n>item.n*.8:fields.append({"hash":h,"matched":n,"distinct":len(set(vs)&hkeys.keys())})
    fields.sort(key=lambda x:(-x["matched"],-x["distinct"],x["hash"]))
    permissions=[]
    for i in range(item.n):
        label=item.string(i,"FC275E86");k=label.removeprefix("Kind_")
        permissions.append({"item_id":item.val(i,"54706054"),"kind_label":label,"exact_kind_flags":kinds.get(k),"hash_kind_candidates":{f["hash"]:hkeys.get(item.val(i,f["hash"])) for f in fields},"actual_eligible":None})
    groups={db.crc(s):(s,i) for i,s in enumerate(("Season","MinorSeries","Purpose","None"))}
    # Independently replay original crc32b literal byte chains, including overwritten temporaries.
    c=path(0x1acaac0-S).read_text("utf8");regs={}
    for dst,src,b in re.findall(r"(uVar\d+) = crc32b\((0xffffffff|uVar\d+),0x([0-9a-f]+),0x4c11db7\);",c.split("do {",1)[0]):
        regs[dst]=(b"" if src=="0xffffffff" else regs[src])+bytes([int(b,16)])
    assert [regs[x].decode() for x in ("uVar9","uVar10","uVar8","uVar12")]==["Season","MinorSeries","Purpose","None"]
    tagrows=[]
    for i in range(tag.n):
        g,n=groups[tag.val(i,"A8EACF70")]
        tagrows.append({"row":i,"unique_id":tag.val(i,"54706054"),"key":tag.string(i,"87BF00E8"),"group":g,"group_enum":n,"native_bit_index":None})
    assert len(tagrows)==51
    counts=[{"remake_id":remake.val(i,"54706054"),"body_count":max(0,remake.val(i,"B0304B0D",True,1)+1),"fabric_count":max(0,remake.val(i,"0CB402A3",True,1)+1)} for i in range(remake.n)]
    assert all(0<=x["body_count"]<=8 and 0<=x["fabric_count"]<=8 for x in counts)
    # Exact relocation aliases: include BSS targets and all pointers to the same target,
    # so references to stripped aliases cannot be missed by Ghidra textual search.
    seeds={"style2_slot":0x04bc0100,"tag_group_slot":0x04bb43b8,"tag_group_bss":0x04ca7a18,"tag_manager":0x04ca7a00,"tag_rank_base":0x04ca7a08,"color1_slot":0x04bc0028,"color2_slot":0x04bc0030}
    targets=collections.defaultdict(set)
    for name,a in seeds.items():
        v=a-S;targets[v].add(name)
        t=ptr(v)
        if t is not None:
            targets[t].add(name+":relocation_target")
            targets[t+8].add(name+":array_pointer")
            for p in relocs:
                if ptr(p)==t:targets[p].add(name+":alias")
    # Search exact string suffixes and hash immediate constructions for UI filter.
    strings={}
    for name in ("cGiftToNpc","GiftToNpc","_AITagBitEnum","CanNpcPresent","EventFlowActionUIItemSelectWindowHandling"):
        hits=[]
        for va,b in mapped[1:]:
            p=0;needle=name.encode()+b"\0"
            while True:
                p=b.find(needle,p)
                if p<0:break
                v=va+p;hits.append(hx(v));targets[v].add("string:"+name);p+=1
        strings[name]=hits
    hashes=collections.defaultdict(set)
    for name in ("cGiftToNpc","GiftToNpc","CanNpcPresent u8","CanNpcBirthdayPresent u8","EventFlowActionUIItemSelectWindowHandling"):
        hashes[db.crc(name)].add(name+":CRC32");hashes[r95.murmur3(name)].add(name+":Murmur3")
    pages={v&~4095 for v in targets}
    refs=[];hashrefs=[];seen=set()
    def ref(site,dest,kind,first):
        if dest not in targets or (site,dest,kind) in seen:return
        seen.add((site,dest,kind));refs.append({"site":hx(site),"address":hx(dest),"labels":sorted(targets[dest]),"kind":kind,"adrp":hx(first),"context":[row(i) for i in dis(max(mapped[0][0],site-16),48)]})
    va,b=mapped[0]
    for i,(w,) in enumerate(struct.iter_unpack("<I",memoryview(b)[:len(b)//4*4])):
        pc=va+i*4;direct=adr_target(w,pc)
        if direct in targets:ref(pc,direct,"ADR",pc)
        page=adrp_target(w,pc)
        if page in pages:
            # bounded straight-line ADRP use; stop on overwrite/control transfer.
            reg=w&31
            for q in dis(pc+4,min(48,len(b)-4*i-4)):
                if q.mnemonic in ("b","br","bl","blr","ret","cbz","cbnz","tbz","tbnz") or q.mnemonic.startswith("b."):break
                for o in q.operands:
                    if o.type==ARM64_OP_MEM and not o.mem.index and q.reg_name(o.mem.base)==f"x{reg}":
                        ref(q.address,page+o.mem.disp,q.mnemonic,pc)
                if q.mnemonic=="add" and len(q.operands)==3 and q.operands[1].type==ARM64_OP_REG and q.reg_name(q.operands[1].reg)==f"x{reg}" and q.operands[2].type==ARM64_OP_IMM:
                    o=q.operands[2];ref(q.address,page+(o.imm<<o.shift.value),"ADD",pc)
                if f"x{reg}" in [q.reg_name(x) for x in q.regs_access()[1]] or f"w{reg}" in [q.reg_name(x) for x in q.regs_access()[1]]:break
        if w&0x7f800000==0x52800000 and i+1<len(b)//4: # MOVZ w/x
            rd=w&31;v=((w>>5)&0xffff)<<(16*((w>>21)&3))
            for j in range(1,min(5,len(b)//4-i)):
                q=struct.unpack_from("<I",b,4*(i+j))[0]
                if q&0x7f800000==0x72800000 and q&31==rd:
                    shift=16*((q>>21)&3);v=(v&~(0xffff<<shift))|(((q>>5)&0xffff)<<shift)
                    if v in hashes:hashrefs.append({"site":hx(pc),"end":hx(pc+4*j),"value":f"{v:08X}","labels":sorted(hashes[v]),"context":[row(x) for x in dis(pc,32)]})
                else:break
    # Registration records for UI action, use original R101 factory reconstruction.
    regdir=out/"r101";r101.main(root,regdir)
    registry=json.loads((regdir/"factory_registry_2214.json").read_text("utf8"))
    h=f"{r95.murmur3('EventFlowActionUIItemSelectWindowHandling'):08X}"
    matched=[x for x in registry["action"] if x["hash"]==h]
    assert len(matched)==1
    # Unexported initializer callbacks: machine-code windows, tail branches and exact relocations.
    callbacks={}
    for a in (0x01a60c10,0x01acb930,0x00ef1fd4,0x01a60520):
        code=dis(a-S,0x140)
        callbacks[hex(a)]={"instructions":[row(i) for i in code],"direct_targets":[{"site":hx(i.address),"target":hx(i.operands[0].imm),"export":str(p.relative_to(root)) if (p:=path(i.operands[0].imm)) else None} for i in code if i.mnemonic in ("b","bl") and i.operands[0].type==ARM64_OP_IMM],"window_not_function_boundary":True}
    # Compare the six raw enum-to-message values against exact original strings where possible.
    enum_words=list(struct.unpack("<6I",raw(0x041797d0-S,24)))
    style_names=["None","Simple","Cute","Cool","Elegant","Gorgeous","Active"]
    style_evidence=[{"value":i+1,"raw_word":f"{v:08X}","crc32_name_candidates":[n for n in style_names if db.crc(n)==v]} for i,v in enumerate(enum_words)]
    graph=json.loads((root/"UnPack/1/EventFlow/NNPC_Select_Present.json").read_text("utf8"))["graph"]
    filters=[x for x in graph["events"] if x.get("params",{}).get("FilterType")=="cGiftToNpc"];assert len(filters)==1
    for n,o in [("static_permissions.json",permissions),("tag_groups.json",tagrows),("remake_counts.json",counts),("native_refs.json",refs),("filter_hash_refs.json",hashrefs),("initializer_windows.json",callbacks),("ui_action_registry.json",matched),("style_enum_words.json",style_evidence),("source_evidence.json",{"anchors":anchors,"filter_nodes":filters,"strings":strings})]:db.write(out/n,o)
    report={"static_kind_label_joined":sum(x["exact_kind_flags"] is not None for x in permissions),"item_count":len(permissions),"kind_crc_candidates":fields,"tag_groups":dict(collections.Counter(x["group"] for x in tagrows)),"body_slots":sum(x["body_count"] for x in counts),"fabric_slots":sum(x["fabric_count"] for x in counts),"target_aliases":len(targets),"xref_counts":dict(collections.Counter(l for x in refs for l in x["labels"])),"hash_refs":len(hashrefs),"ui_action":matched,"style_words":style_evidence,"strings":strings,"native_filter_proved":False,"style2_writer_proved":False,"native_tag_index_proved":False,"runtime_verified":False}
    db.write(out/"report.json",report);print(json.dumps(report,ensure_ascii=False,indent=2))
    for a,v in callbacks.items():
        print("CALLBACK",a)
        for i in v["instructions"][:28]:print(i["site"],i["op"])
    print("STYLE2 REFERENCES")
    for x in refs:
        if any(l.startswith("style2_slot") for l in x["labels"]):print(x["site"],x["kind"],x["address"])
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.out.resolve())
