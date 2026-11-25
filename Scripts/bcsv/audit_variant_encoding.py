#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Static remake validation. No runtime write or dispatch; preserve all non-target bits."""
import argparse,collections,csv,hashlib,json,sqlite3,subprocess
from pathlib import Path
BASE=Path("research/catalog/variants")
DECODED=Path("research/bcsv-data/decoded")
ROM=Path("e10617820db06889e1638499478da0de_NCA/1")
ANCHORS={
"1f/01af1f00":["0xfff8","FUN_01ad7260","FUN_01afd600"],
"dc/01afdcc4":["0xffe7","0xe01f","FUN_01afcfa0"],
"dd/01afdd70":["0xffe7 | 8","0xe01f","0x100","iVar1 == 2"],
"de/01afde50":["0xffe7 | 0x10","0xe01f","0xc80","0x7c","< 9"],
"3a/01ae3a80":[">> 5 & 0xff",">> 3 & 3","uVar2 != 3","0x6c","0x100"],
"ee/01afee38":["uVar3 < 0xdc","uVar6 == 1"],
"f0/01aff000":["0x5aebbfb5","FUN_01afee38"],
"ee/01afeef4":["%sReFabric0","%sReFabric%d"],
"d6/01afd600":["return param_1 + 0xc","return param_1 + 0xe","FUN_01ae4d10"],
"4d/01ae4d10":["param_1 = param_1 + 0xc","uVar3 != 9"],
"74/02bd74dc":["FUN_01afdcc4","FUN_01afdd70","FUN_01afde50","param_2[1] = local_44"],
"22/01af22a0":["-0x1fa9cafd","iVar7 - 1U"],
"1f/01af1f60":["FUN_01af22a0","iVar7 - iVar8"],
"c8/01aac820":["0x35917e05"],
"d2/01afd2f0":["99 < iVar4","0x100"]}
def need(v,m):
    if not v:raise ValueError(m)
def sha(p):
    return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):
    with p.open(encoding="utf-8-sig",newline="") as f:return list(csv.DictReader(f))
def write(p,columns,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=columns);w.writeheader();w.writerows(rows)
def decode(w,n,extended=False):
    raw=(w>>3)&3;mode=0 if raw==3 else raw
    idx=(w>>5)&255
    if not n:return 0,0
    limit=max(1,n) if mode==0 else 256 if mode==1 else 108 if extended and idx>=100 else 100
    return mode,idx if idx<limit else 0
def set_body(w,b,n):
    need(0<=w<=65535 and 0<=b<n<=8,"body bound")
    return (w&0xfff8)|b
def set_fabric(w,mode,i,n,typ,extended=False):
    need(0<=w<=65535 and n>0 and mode in (0,1,2),"fabric bound")
    if mode==0:need(0<=i<n<=8,"normal index")
    elif mode==1:need(typ=="CommonAndMyDesign" and 0<=i<220,"common resource domain")
    else:need(typ in ("MyDesign","CommonAndMyDesign") and 0<=i<(108 if extended else 100),"design context domain")
    return (w&0xe007)|(mode<<3)|(i<<5)
def test():
    # Exhaustively compare mathematical masks with the separate decompiled stores.
    for w in range(65536):
        b=w&7
        for val in (0,7):
            need(set_body(w,val,8)==((w&0xfff8)|val),"body mask")
        for mode,i,typ in [(0,7,"None"),(1,219,"CommonAndMyDesign"),(2,99,"MyDesign")]:
            x=set_fabric(w,mode,i,8,typ)
            ref=((w&0xffe7)|(mode<<3))&0xe01f|(i<<5)
            need(x==ref and x&0xe007==w&0xe007 and decode(x,8)==(mode,i),"fabric mask")
        need(decode((w&0xffe7)|24,8)==decode(w&0xffe7,8),"mode3 alias")
    need(decode((107<<5)|16,8,True)==(2,107),"extended")
    need(decode((108<<5)|16,8,True)==(2,0),"extended boundary")
    for m,i,n,t in [(0,8,8,"None"),(1,220,8,"CommonAndMyDesign"),(1,0,8,"MyDesign"),(2,100,8,"MyDesign"),(3,0,8,"None"),(0,0,0,"None")]:
        try:set_fabric(0,m,i,n,t)
        except ValueError:pass
        else:raise ValueError("invalid accepted")
def run(root,historical,out):
    test();out.mkdir(parents=True,exist_ok=True)
    sources={}
    for path,tokens in ANCHORS.items():
        p=historical/"derived/3.0.3/ghidra12.2/c"/(path+".c")
        need(all(t in p.read_text() for t in tokens),"native evidence drift "+path)
        sources[path]={"sha256":sha(p),"anchors":tokens}
    base=root/BASE;manifest=json.loads((base/"manifest.json").read_text())
    names=["remake_definition.csv","item_remake.csv","variant_combination.csv"]
    for n in names:need(sha(base/n)==manifest[n],"variant input "+n)
    dd={r["table"]:r for r in json.loads((root/DECODED/"manifest.json").read_text())}
    for n in ("ItemRemakeCommonPattern","ItemRemakeCommonPatternCategory"):
        p=root/DECODED/"tables"/(n+".csv");need(sha(p)==dd[n]["csv_sha256"],"decoded input "+n)
    defs=read(base/names[0]);items=read(base/names[1]);combos=read(base/names[2])
    common=read(root/DECODED/"tables/ItemRemakeCommonPattern.csv")
    categories=read(root/DECODED/"tables/ItemRemakeCommonPatternCategory.csv")
    need(len(defs)==1306 and len(items)==1785 and len(combos)==17184,"baseline")
    need(len(common)==220 and {int(r["UniqueID"]) for r in common}==set(range(220)),"common ids")
    need(len(categories)==12,"category count")
    need(all(int(r["_row_index"])==int(r["UniqueID"]) for r in common),"common row ordering")
    d={r["remake_id"]:r for r in defs};by={r["item_id"]:r for r in items}
    need(len(d)==len(defs) and len(by)==len(items),"unique keys")
    stats=collections.Counter();policies=[];verified=[]
    for r in items:
        q=d[r["remake_id"]];b,f=int(r["body_count"]),int(r["fabric_count"])
        need(b==int(q["body_raw_s8"])+1 and f==int(q["fabric_raw_s8"])+1,"count drift")
        typ=q["fabric_type_label"];need(typ in ("None","MyDesign","CommonAndMyDesign"),"fabric type")
        rej=int(q["body_reject_num_raw"]);lot=q["lot_type_label"];need(lot in ("Normal","ForceOriginal"),"lot")
        pool=b-min(max(0,rej),b-1) if b else 0
        stats["item_fabric_type_"+typ]+=1
        stats["item_lot_"+lot]+=1
        stats["item_reject_nonzero"]+=rej!=0
        stats["items_common_domain"]+=bool(f and typ=="CommonAndMyDesign")
        stats["items_design_domain"]+=bool(f and typ!="None")
        policies.append(dict(item_id=r["item_id"],remake_id=r["remake_id"],kind=r["kind"],body_count=b,fabric_count=f,fabric_type=typ,lot_type=lot,reject_raw=rej,lot_modulus_candidate=pool,mode0_index_count=f,mode1_resource_count=220 if f and typ=="CommonAndMyDesign" else 0,mode2_default_index_count=100 if f and typ!="None" else 0,mode2_extended_read_count=108 if f and typ!="None" else 0,mode3_generate=0,native_pointer_branch_verified=0,dispatch_verified=0))
    tree=subprocess.check_output(["git","-C",str(root),"ls-tree","-r","-z","HEAD","--",str(ROM/"Model")])
    paths={}
    for line in tree.split(b"\0"):
        if line:
            meta,p=line.split(b"\t",1);paths[p.decode()]=meta.decode().split()[2]
    need(bool(paths),"Model tree")
    def resource(stem):
        p=str(ROM/"Model"/(stem+".Nin_NX_NVN.zs"));return p,paths.get(p,"")
    commonrows=[]
    for r in common:
        idx=int(r["UniqueID"]);p,blob=resource(r["TextureResName"])
        stats["common_texture_exact_path"]+=bool(blob)
        commonrows.append(dict(index=idx,category=r["Category__label"],color1=r["Color1__label"],color2=r["Color2__label"],texture_name=r["TextureResName"],model_path_candidate=p,model_blob=blob,resource_lookup_evidence="native_consumer_01aff000_texture_field"))
    for r in combos:
        item=by[r["item_id"]];q=d[r["remake_id"]];b,f=int(r["body_index"]),int(r["fabric_index"]);bc,fc=int(item["body_count"]),int(item["fabric_count"])
        need(0<=b<max(1,bc) and 0<=f<max(1,fc),"slot bounds")
        w=0
        if bc:w=set_body(w,b,bc)
        if fc:w=set_fabric(w,0,f,fc,q["fabric_type_label"])
        need(w==int(r["word_candidate"]),"word drift")
        icon=r["icon_git_blob"];need(not icon or paths.get(r["icon_path_candidate"])==icon,"icon blob drift")
        flags=[]
        if q["lot_type_label"]=="ForceOriginal":flags.append("lot_force_original_review")
        if int(q["body_reject_num_raw"])!=0:flags.append("lot_reject_review")
        if item["kind"]=="Bromide":flags.append("photo_special_model_path")
        if not icon:flags.append("icon_path_missing")
        stats["ordinary_static_bounds_pass"]+=1
        stats["ordinary_icon_exists"]+=bool(icon)
        stats["ordinary_no_flag"]+=not flags
        for fl in flags:stats["ordinary_"+fl]+=1
        verified.append(dict(item_id=r["item_id"],remake_id=r["remake_id"],body_index=b,fabric_index=f,mode=0,word_candidate=w,word_hex=f"0x{w:04X}",static_bounds_pass=1,icon_path=r["icon_path_candidate"],icon_blob=icon,review_flags=";".join(flags),runtime_verified=0,dispatch_verified=0))
    datasets={"mode_policy":policies,"ordinary_validation":verified,"common_pattern":commonrows,"common_pattern_category":categories}
    dbpath=out/"encoding.sqlite3";dbpath.unlink(missing_ok=True)
    with sqlite3.connect(dbpath) as db:
        for t,rows in datasets.items():
            cols=list(rows[0]);write(out/(t+".csv"),cols,rows)
            types=["INTEGER" if all(type(r[c]) is int for r in rows) else "TEXT" for c in cols]
            db.execute("CREATE TABLE "+t+" ("+",".join('"'+c+'" '+ty for c,ty in zip(cols,types))+")")
            db.executemany("INSERT INTO "+t+" VALUES ("+",".join("?" for c in cols)+")",([r[c] for c in cols] for r in rows))
        db.execute("CREATE UNIQUE INDEX item_mode ON mode_policy(item_id)")
        db.execute("CREATE UNIQUE INDEX ordinary_key ON ordinary_validation(item_id,body_index,fabric_index)")
        need(db.execute("pragma integrity_check").fetchone()[0]=="ok","SQLite")
    report={"counts":dict(stats),"datasets":{k:len(v) for k,v in datasets.items()},"word_tests":65536,"source_anchors":sources,"source_variants":{n:manifest[n] for n in names},"native_runtime_replay":False,"mode3_policy":"read alias, never generate","mode2_policy":"100..107 conditional; raw writer can produce 108 but read rejects at exclusive bound 108; do not generate","lot_policy":"modulus is separate from manual setter bound; no runtime selectability claim","dispatch_verified":0}
    (out/"summary.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n")
    print(json.dumps({"counts":dict(stats),"datasets":report["datasets"],"word_tests":65536,"dispatch_verified":0}))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--historical",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("out/variant-encoding"));a=p.parse_args();run(a.root,a.historical,a.out)
