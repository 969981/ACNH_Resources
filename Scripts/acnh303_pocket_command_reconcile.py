#!/usr/bin/env python3
"""Reconcile byte-matched command initializer with Ghidra C and menu resources.
Read-only offline analysis. Numeric joins do not establish enum identity.
"""
import argparse,csv,hashlib,json,re
from pathlib import Path
BASE=0x56ff62c
def get(p):return json.loads(p.read_text(encoding="utf-8"))
def recover(rows):
    regs={};result=[]
    for r in rows:
        va=int(r["va"],16);i=r["instruction"].strip()
        if not 0x317d514<=va<=0x317d758:continue
        m=re.fullmatch(r"mov ([wx]\d+), #(0x[0-9a-f]+|\d+)",i)
        if m:regs["x"+m[1][1:]]=int(m[2],0);continue
        m=re.fullmatch(r"movk (x\d+), #(0x[0-9a-f]+|\d+), lsl #32",i)
        if m:regs[m[1]]=(regs[m[1]]&0xffffffff)|(int(m[2],0)<<32);continue
        m=re.fullmatch(r"stp (x\d+), (x\d+), \[x8(?:, #(0x[0-9a-f]+|\d+))?\]",i)
        if m:
            for k,n in enumerate(m.groups()[:2]):
                v=regs[n];result.append(dict(record_va=hex(BASE+int(m[3] or "0",0)+k*8),command=v&0xffffffff,index=v>>32,store_va=r["va"]))
            continue
        m=re.fullmatch(r"str (x\d+), \[x8, #(0x[0-9a-f]+|\d+)\]",i)
        if m:
            v=regs[m[1]];result.append(dict(record_va=hex(BASE+int(m[2],0)),command=v&0xffffffff,index=v>>32,store_va=r["va"]));continue
        if i in ("adrp x0, #0x55ff000","add x0, x0, #0x808"):continue
        raise ValueError("unexpected initializer instruction "+str(r))
    assert len(result)==59 and len({r["command"] for r in result})==59 and {r["index"] for r in result}==set(range(59))
    assert sorted(int(r["record_va"],16) for r in result)==list(range(BASE,BASE+59*8,8))
    return result
def main(root,artifact,out):
    f=artifact/"Functions"
    src=root/"derived/3.0.3/ghidra12.2/c/d4/0317d490.c"
    csvpath=root/"UnPack/1/Bcsv/ItemUIContextMenu.csv"
    j=get(f/"FUN_0317D490.json")
    assert not j["gaps"]
    r=recover(j["rows"])
    cp={int(a,16):(int(v,16)&0xffffffff,int(v,16)>>32) for a,v in re.findall(r"(?:_?DAT_)(056ff[0-9a-f]+)\s*=\s*(0x[0-9a-f]+);",src.read_text(encoding="utf-8"))}
    assert len(cp)==59 and all(cp[int(q["record_va"],16)]==(q["command"],q["index"]) for q in r)
    with csvpath.open(encoding="utf-8-sig",newline="") as h:menus=list(csv.DictReader(h))
    table=get(artifact/"FactoryAudit/factory_audit.json")["callback_records"]
    assert len(table)==59
    for q in r:
        t=table[q["index"]]
        assert int(t["record_va"],16)==0x4b06740+q["index"]*16
        q["callback_va"]=t["callback_va"]
        q["callback_record_va"]=t["record_va"]
        q["same_numeric_command_menus"]=[m["hash_87BF00E8"] for m in menus if int(m["hash_54706054"])==q["command"]]
        q["same_numeric_index_menus"]=[m["hash_87BF00E8"] for m in menus if int(m["hash_54706054"])==q["index"]]
        q["enum_identity_verified"]=False
    cbs=[]
    for cb in sorted({q["callback_va"] for q in r},key=lambda x:int(x,16)):
        j=get(f/("FUN_%08X.json"%int(cb,16)))
        cbs.append(dict(callback_va=cb,commands=[q["command"] for q in r if q["callback_va"]==cb],
                        rows=len(j["rows"]),gaps=j["gaps"],calls=j["calls"]))
    result=dict(records=sorted(r,key=lambda q:q["index"]),callbacks=cbs,
                menu_rows=len(menus),numeric_command_matches=sum(bool(q["same_numeric_command_menus"]) for q in r),
                source_sha256=hashlib.sha256(src.read_bytes()).hexdigest(),menu_sha256=hashlib.sha256(csvpath.read_bytes()).hexdigest(),
                initializer_matches_C=True,runtime_verified=False)
    out.mkdir(parents=True,exist_ok=True)
    (out/"command_reconciliation.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in result.items() if k not in ("records","callbacks")}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--artifact",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root,a.artifact,a.out)
