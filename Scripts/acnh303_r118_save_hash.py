#!/usr/bin/env python3
"""R118: authenticate getters and checksum source, scan original text for writer references."""
import argparse,hashlib,json,struct,zipfile
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
import acnh303_r100_nso_decode as dec
BASE=Path("derived/3.0.3/npc_event_flags/r118_save_hash")
S=0x100000
def run(root,prior,out):
    e=json.loads((root/BASE/"evidence.json").read_text())
    assert hashlib.sha256(prior.read_bytes()).hexdigest()==e["prior"]["sha256"]
    with zipfile.ZipFile(prior) as z:
        getters=json.loads(z.read("backend_getters.json"));report=json.loads(z.read("report.json"))
    assert report["simple_getters"]==report["getter_windows"]==len(getters)==32
    for a in e["sources"]:
        b=(root/a["path"]).read_bytes()
        assert hashlib.sha1(("blob %d"%len(b)).encode()+b"\0"+b).hexdigest()==a["blob"],a["path"]
        for n in a["needles"]:assert n in b.decode("utf-8"),(a["path"],n)
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);assert len(relocs)==380793
    assert hashlib.sha256(nso).hexdigest()==e["nso_sha256"]
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    def win(a,n):
        return [{"va":f"{i.address+S:08X}","bytes":i.bytes.hex(),"op":i.mnemonic,"args":i.op_str} for i in cs.disasm(raw(a-S,n),a-S)]
    field={16:16,24:16,32:24,40:24,48:32,56:32,64:56,72:56}
    for g in getters:
        a=int(g["target"],16);v=int(g["vptr"],16)+g["slot_offset"]
        r=relocs[v-S];assert r["type"]=="RELR" and r["addend"]==a-S
        assert win(a,8)==g["instructions"]
        assert g["return_pointer_offset"]==field[g["slot_offset"]]
    writers=[f"{int(a,16):08X}" for a in e["writers"]]
    targets={int(a,16)-S:f"{int(a,16):08X}" for a in writers+[e["hash_function"],"028C29B0","028CB2A0"]}
    calls={a:[] for a in targets.values()}
    base,text=mapped[0];assert segments[0]["type"]=="text"
    for i,(w,) in enumerate(struct.iter_unpack("<I",text[:len(text)//4*4])):
        if w&0x7c000000!=0x14000000:continue
        imm=w&0x3ffffff
        if imm&0x2000000:imm-=0x4000000
        a=base+i*4;t=a+imm*4
        if t not in targets:continue
        site=a+S
        calls[targets[t]].append({"site":f"{site:08X}","kind":"BL" if w&0x80000000 else "B","window":win(site-16,36)})
    slots={a:[] for a in targets.values()}
    for a,r in relocs.items():
        t=r.get("addend")
        if r.get("type")=="RELR" and t in targets:slots[targets[t]].append(f"{a+S:08X}")
    def hash32(buf,seed=0):
        mask=0xffffffff
        def rot(x,n):return ((x<<n)|(x>>(32-n)))&mask
        def mix(k):return rot(k*0xcc9e2d51&mask,15)*0x1b873593&mask
        h=seed
        for i in range(0,len(buf)//4*4,4):
            h=rot(h^mix(int.from_bytes(buf[i:i+4],"little")),13)
            h=(h*5+0xe6546b64)&mask
        tail=buf[len(buf)//4*4:]
        if tail:h^=mix(int.from_bytes(tail,"little"))
        h^=len(buf);h=(h^(h>>16))*0x85ebca6b&mask
        h=(h^(h>>13))*0xc2b2ae35&mask
        return h^(h>>16)
    vectors={s:f"{hash32(s.encode()):08X}" for s in ("","foo","hello")}
    assert vectors=={"":"00000000","foo":"F6A5C420","hello":"248BFA47"}
    windows={}
    for f in e["files"]:
        a=f["checksum_validator"]
        if not a:continue
        # Validation prologues include fixed field/length arguments. Preserve bytes; do not
        # treat a decompiler LAB label as numeric length until reviewed.
        windows[a]=win(int(a,16),0xc0)
        for r in f["checksum_regions"]:
            if r["length"] is not None:
                assert r["start"]+r["length"]<=f["write_size"]
        key=f"{int(f['save_handler'],16):08X}"
        f["caller_sites"]=calls[key]
        f["relocation_references"]=slots[key]
    out.mkdir(parents=True,exist_ok=True)
    def write(n,x):(out/n).write_text(json.dumps(x,indent=2,ensure_ascii=False)+"\n")
    write("savefile_index.json",e["files"]);write("writer_direct_refs.json",calls);write("writer_relr_refs.json",slots)
    write("checksum_validator_windows.json",windows);write("hash_function_window.json",win(0x6f6900,0x140))
    write("report.json",{"getter_slots_verified":32,"source_blobs":len(e["sources"]),"ordinary_validators":7,"hash_regions_source_backed":9,"main_symbolic_length_pending":1,"profile_conditional_regions":3,"writer_direct_refs":{a:len(calls[a]) for a in writers},"writer_relr_refs":{a:len(slots[a]) for a in writers},"synthetic_hash_vectors":vectors,"cloud_disk_mapping_verified":False,"runtime_verified":False})
    print((out/"report.json").read_text())
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--prior",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.prior,a.out.resolve())
