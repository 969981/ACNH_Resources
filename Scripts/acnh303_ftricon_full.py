#!/usr/bin/env python3
"""All original FtrIcon sources, independent of old catalog selection."""
import argparse,collections,hashlib,json,re,sqlite3,subprocess,tempfile
from pathlib import Path
from acnh303_babybed_texture_export import extract,convert
from probe_acnh_babybed_textures import NCA
PREFIX=NCA+"/1/Model/Layout_FtrIcon_"
SUFFIX=".Nin_NX_NVN.zs"
def require(ok,msg):
    if not ok:raise ValueError(msg)
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def write(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def tree(root):
    data=subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--",NCA+"/1/Model","assets/images","assets/evidence/rom-items"])
    out={}
    for v in data.split(b"\0"):
        if v:
            meta,p=v.split(b"\t",1);mode,kind,h=meta.decode().split()
            if kind=="blob":out[p.decode()]=h
    return out
def plan(root,out):
    t=tree(root);old={};counts=collections.Counter()
    for p in sorted((root/"assets/evidence/rom-items").glob("batch-*.json")):
        doc=json.loads(p.read_text("utf-8"))
        for r in doc["items"]:
            s=r["source_path"];require(s not in old,"Duplicate historical source")
            old[s]=r;counts[r["layout_kind"]]+=1
    require(len(old)==26277,"Historical batch size")
    records=[]
    for p,h in sorted(t.items()):
        if not(p.startswith(PREFIX) and p.endswith(SUFFIX)):continue
        name=p[len(PREFIX):-len(SUFFIX)];require(bool(re.fullmatch(r"[A-Za-z0-9_-]+",name)),"Unexpected icon name")
        r=old.get(p);z={"path":p,"blob":h,"name":name}
        if r and r["status"] in ("existing_identical_png","new_original_rom_icon","existing_cdn_preserved_native_separately"):
            dest=r.get("output_path") or "assets/images/items/"+name+".png"
            require(dest in t and r["native_brti_name"]==name,"Historical evidence path/name")
            z.update(status="prior_verified_png",output=dest,pngSha256=r["native_png_sha256"],pngBlob=t[dest],sourceSha256=r["source_sha256"],width=r["width"],height=r["height"])
        else:z["status"]="needs_decode"
        m=re.fullmatch(r"(.+)_Remake_(\d+)_(\d+)",name)
        z["resourceLabel"]=m[1] if m else name
        z["bodySlot"]=int(m[2]) if m else None;z["fabricSlot"]=int(m[3]) if m else None
        records.append(z)
    require(len(records)==25794,"Original FtrIcon inventory")
    out.mkdir(parents=True,exist_ok=True);write(out/"inventory.json",records)
    print(json.dumps({"sourceCount":len(records),"historicFamilies":dict(counts),"statuses":dict(collections.Counter(r["status"] for r in records)),"remakeNames":sum(r["bodySlot"] is not None for r in records)}))
def chosen(records,shard,shards):return [r for i,r in enumerate([x for x in records if x["status"]=="needs_decode"]) if i%shards==shard]
def decode(root,rows,out,wimgt):
    out.mkdir(parents=True,exist_ok=True);png=out/"png";png.mkdir(exist_ok=True);results=[]
    for r in rows:
        z={**r}
        try:
            raw,containers=extract(root/r["path"],r["path"]);require(blob(raw)==r["blob"],"Original blob mismatch")
            z["sourceSha256"]=sha(raw);require(len(containers)==1,"Multiple BNTX")
            b=containers[0];require(len(b["native_textures"])==1,"Multiple BRTI");t=b["native_textures"][0]
            require(t["name"]==r["name"],"BRTI name mismatch")
            with tempfile.TemporaryDirectory() as d:
                decoded=convert(wimgt,b["bntx_bytes"],Path(d),120);require(len(decoded)==1,"Decoder count")
                p,_,m=decoded[0];require((m["width"],m["height"])==(t["width"],t["height"]),"Native dimensions")
                data=p.read_bytes();dest=png/(r["name"]+".png");dest.write_bytes(data);require(sha(data)==m["sha256"],"PNG SHA")
                z.update(status="new_native_png",output="png/"+dest.name,pngSha256=sha(data),width=m["width"],height=m["height"],bntxSha256=sha(b["bntx_bytes"]),format=t["format_hex"])
        except Exception as e:z.update(status="decode_failed",error=str(e)[:500])
        results.append(z)
    write(out/"results.json",results);print(json.dumps({"decoded":len(results),"statuses":dict(collections.Counter(r["status"] for r in results))}))
def aggregate(inv,parts,out):
    records=json.loads(inv.read_text("utf-8"));new={}
    for part in parts:
        for r in json.loads(part.read_text("utf-8")):
            require(r["path"] not in new,"Duplicate part source")
            if r["status"]=="new_native_png":
                p=part.parent/r["output"];require(p.is_file() and sha(p.read_bytes())==r["pngSha256"],"Part PNG hash")
            new[r["path"]]=r
    expected={r["path"] for r in records if r["status"]=="needs_decode"};require(set(new)==expected,"Full partition coverage")
    rows=[new.get(r["path"],r) for r in records]
    out.mkdir(parents=True,exist_ok=True);write(out/"all-icons.json",rows)
    c=sqlite3.connect(out/"ftricon.sqlite3");c.execute("CREATE TABLE icon(path TEXT PRIMARY KEY,git_blob TEXT NOT NULL,name TEXT NOT NULL UNIQUE,resource_label TEXT NOT NULL,body_slot INTEGER,fabric_slot INTEGER,status TEXT NOT NULL,source_sha256 TEXT,png_sha256 TEXT,width INTEGER,height INTEGER,output TEXT,error TEXT)")
    with c:
        c.executemany("INSERT INTO icon VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?)",[(r["path"],r["blob"],r["name"],r["resourceLabel"],r["bodySlot"],r["fabricSlot"],r["status"],r.get("sourceSha256"),r.get("pngSha256"),r.get("width"),r.get("height"),r.get("output"),r.get("error")) for r in rows])
    require(c.execute("PRAGMA integrity_check").fetchone()[0]=="ok","Database integrity")
    c.close();result={"sources":len(rows),"statuses":dict(collections.Counter(r["status"] for r in rows)),"runtimeUiVerified":False}
    write(out/"audit.json",result);print(json.dumps(result))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("mode",choices=["plan","paths","decode","aggregate"]);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--inventory",type=Path);p.add_argument("--out",type=Path,required=True);p.add_argument("--shard",type=int,default=0);p.add_argument("--shards",type=int,default=8);p.add_argument("--wimgt",type=Path);p.add_argument("--parts",nargs="*",type=Path,default=[]);a=p.parse_args()
    if a.mode=="plan":plan(a.root.resolve(),a.out)
    elif a.mode=="aggregate":aggregate(a.inventory,a.parts,a.out)
    else:
        rows=chosen(json.loads(a.inventory.read_text("utf-8")),a.shard,a.shards)
        if a.mode=="paths":a.out.write_text("\n".join("/"+r["path"] for r in rows)+"\n",encoding="utf-8")
        else:decode(a.root.resolve(),rows,a.out,a.wimgt.resolve())
