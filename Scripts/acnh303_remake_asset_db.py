#!/usr/bin/env python3
"""ACNH original resource inventory, bounded FMAT/BRTI scan, normalized SQLite.
Ordinary mode-0 source candidates only; no implied valid runtime combination.
"""
import argparse, collections, hashlib, json, sqlite3, subprocess
from pathlib import Path
import acnh_formats as af
from acnh303_remake_fmat_bindings import parse_material, parse_fres, u32, nested_files, valid_bntx_slices, parse_bntx, require
SCHEMA="""
PRAGMA foreign_keys=ON;
CREATE TABLE definition(id INTEGER PRIMARY KEY,source_row INTEGER NOT NULL,reverse_item_id INTEGER NOT NULL,body_count INTEGER NOT NULL CHECK(body_count BETWEEN 0 AND 8),fabric_count INTEGER NOT NULL CHECK(fabric_count BETWEEN 0 AND 8));
CREATE TABLE item(item_id INTEGER PRIMARY KEY,remake_id INTEGER NOT NULL REFERENCES definition(id),label TEXT NOT NULL,model_name TEXT NOT NULL,kind TEXT NOT NULL,status TEXT NOT NULL,scan_requested INTEGER NOT NULL CHECK(scan_requested IN (0,1)));
CREATE TABLE resource(path TEXT PRIMARY KEY,git_blob TEXT,exists_in_tree INTEGER NOT NULL,scan_status TEXT NOT NULL DEFAULT 'not_scanned',sha256 TEXT,error TEXT);
CREATE TABLE item_resource(item_id INTEGER REFERENCES item(item_id),channel TEXT NOT NULL,slot INTEGER NOT NULL,path TEXT NOT NULL REFERENCES resource(path),PRIMARY KEY(item_id,channel,slot));
CREATE TABLE model(path TEXT REFERENCES resource(path),model_index INTEGER,name TEXT NOT NULL,PRIMARY KEY(path,model_index));
CREATE TABLE material(path TEXT,model_index INTEGER,material_index INTEGER,name TEXT NOT NULL,fmat_offset INTEGER NOT NULL,shader_archive TEXT,shader_model TEXT,pairing_supported INTEGER NOT NULL,parse_error TEXT,PRIMARY KEY(path,model_index,material_index),FOREIGN KEY(path,model_index) REFERENCES model(path,model_index));
CREATE TABLE texture_ref(path TEXT,model_index INTEGER,material_index INTEGER,slot INTEGER,name TEXT NOT NULL,name_ptr INTEGER NOT NULL,PRIMARY KEY(path,model_index,material_index,slot),FOREIGN KEY(path,model_index,material_index) REFERENCES material(path,model_index,material_index));
CREATE TABLE sampler(path TEXT,model_index INTEGER,material_index INTEGER,slot INTEGER,name TEXT NOT NULL,raw_hex TEXT NOT NULL,settings_json TEXT NOT NULL,PRIMARY KEY(path,model_index,material_index,slot),FOREIGN KEY(path,model_index,material_index) REFERENCES material(path,model_index,material_index));
CREATE TABLE shader_assign(path TEXT,model_index INTEGER,material_index INTEGER,shader_sampler TEXT,material_sampler TEXT,material_slots_json TEXT NOT NULL,PRIMARY KEY(path,model_index,material_index,shader_sampler),FOREIGN KEY(path,model_index,material_index) REFERENCES material(path,model_index,material_index));
CREATE TABLE texture(path TEXT REFERENCES resource(path),name TEXT NOT NULL,bntx_sha256 TEXT NOT NULL,bntx_offset INTEGER NOT NULL,brti_index INTEGER NOT NULL,width INTEGER,height INTEGER,format TEXT,mip_count INTEGER,PRIMARY KEY(path,name));
CREATE TABLE variant(item_id INTEGER REFERENCES item(item_id),body_slot INTEGER,fabric_slot INTEGER,status TEXT NOT NULL,PRIMARY KEY(item_id,body_slot,fabric_slot));
CREATE TABLE binding(item_id INTEGER,body_slot INTEGER,fabric_slot INTEGER,base_path TEXT,model_index INTEGER,material_index INTEGER,texture_slot INTEGER,source_path TEXT,texture_name TEXT NOT NULL,status TEXT NOT NULL,PRIMARY KEY(item_id,body_slot,fabric_slot,base_path,model_index,material_index,texture_slot),FOREIGN KEY(item_id,body_slot,fabric_slot) REFERENCES variant(item_id,body_slot,fabric_slot),FOREIGN KEY(base_path,model_index,material_index,texture_slot) REFERENCES texture_ref(path,model_index,material_index,slot),FOREIGN KEY(source_path,texture_name) REFERENCES texture(path,name));
CREATE INDEX item_remake ON item(remake_id);
CREATE INDEX item_resource_path ON item_resource(path);
CREATE INDEX binding_source ON binding(source_path,texture_name);
CREATE VIEW item_scan_status AS
SELECT i.item_id,i.remake_id,i.status AS inventory_status,i.scan_requested,
CASE WHEN i.scan_requested=0 THEN 'not_requested'
WHEN i.status IN ('photo_special_candidate','empty_model_name','missing_remake_definition') THEN i.status
WHEN NOT EXISTS(SELECT 1 FROM variant v WHERE v.item_id=i.item_id) THEN 'no_parsed_base_model'
WHEN EXISTS(SELECT 1 FROM variant v WHERE v.item_id=i.item_id AND v.status!='ordinary_source_candidate') THEN 'partial_or_unresolved'
ELSE 'ordinary_source_candidate' END AS binding_status
FROM item i;
CREATE VIEW definition_scan_status AS
SELECT d.id AS remake_id,count(i.item_id) AS item_references,
sum(CASE WHEN i.binding_status='ordinary_source_candidate' THEN 1 ELSE 0 END) AS ordinary_candidate_items,
sum(CASE WHEN i.binding_status='not_requested' THEN 1 ELSE 0 END) AS not_requested_items,
sum(CASE WHEN i.binding_status NOT IN ('not_requested','ordinary_source_candidate') THEN 1 ELSE 0 END) AS other_items
FROM definition d LEFT JOIN item_scan_status i ON i.remake_id=d.id GROUP BY d.id;
"""
def sha(b):return hashlib.sha256(b).hexdigest()
def blob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def write(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def inventory(p):
    rows=json.loads(p.read_text("utf-8"));require(len(rows)==1785 and len({r["remakeId"] for r in rows})==1306,"Inventory coverage")
    require(len({r["itemId"] for r in rows})==1785,"Duplicate item")
    return rows
def links(r):
    if "base" not in r:return []
    return [("base",-1,r["base"])]+[(ch,i,x) for ch in ("body","fabric") for i,x in enumerate(r[ch])]
def scan(root,x):
    p=x["path"];raw=(root/p).read_bytes()
    require(blob(raw)==x["gitBlobSha1"],"Original Git blob mismatch "+p)
    rec={"path":p,"sha256":sha(raw),"status":"parsed","models":[],"textures":[]}
    try:
        leaves=[b for _,b in nested_files(raw,p,af) if b.startswith(b"FRES")]
        require(len(leaves)==1,"FRES leaf count")
        b=leaves[0];require((u32(b,8)>>16)&255==9,"Unsupported FRES version")
        tex={}
        for off,bn in valid_bntx_slices(b):
            for t in parse_bntx(bn):
                require(t["name"] not in tex,"Duplicate BRTI name")
                tex[t["name"]]={**t,"bntxSha256":sha(bn),"bntxOffset":off}
        rec["textures"]=list(tex.values())
        parsed=parse_fres(b)
        require(parsed["status"]=="STRUCTURAL_FMDL_FMAT_SHADERPARAM_READ" or parsed["model_count"]==0,"Unsupported FMDL")
        for model in parsed["models"]:
            mats=[]
            for m in model["materials"]:
                try:mats.append(parse_material(b,m["header_offset"]))
                except (ValueError,struct_error,UnicodeError) as e:
                    rec["status"]="partial";mats.append({"name":m["name"],"offset":m["header_offset"],"error":str(e)})
            rec["models"].append({"index":model["model_index"],"name":model["model_name"],"materials":mats})
    except (ValueError,struct_error,UnicodeError) as e:rec.update(status="unsupported",error=str(e))
    return rec
from struct import error as struct_error
def choose(rows,shard,shards,sample):
    if sample:return [r for r in rows if r["itemId"] in (79,725,1501)]
    return [r for r in rows if r["remakeId"]%shards==shard]
def selection(rows):
    return {x["path"]:x for r in rows for _,_,x in links(r) if x["exists"]}
def scan_part(root,rows,out):
    paths=selection(rows);out.mkdir(parents=True,exist_ok=True)
    results=[]
    for p,x in sorted(paths.items()):results.append(scan(root,x))
    write(out/"scan.json",{"itemIds":[r["itemId"] for r in rows],"resources":results})
    print("SCAN",len(rows),len(results),dict(collections.Counter(x["status"] for x in results)))
def build_db(rows,parts,out,require_full=False):
    out.mkdir(parents=True,exist_ok=True);p=out/"remake-assets.sqlite3"
    require(not p.exists(),"Destination exists")
    scans={};seen=set()
    for part in parts:
        doc=json.loads(part.read_text("utf-8"));ids=set(doc["itemIds"]);require(not seen&ids,"Duplicate scanned item IDs");seen|=ids
        for x in doc["resources"]:
            if x["path"] in scans:require(scans[x["path"]]==x,"Shared resource mismatch")
            scans[x["path"]]=x
    if require_full:require(seen=={r["itemId"] for r in rows},"Full item scan coverage")
    expected=selection([r for r in rows if r["itemId"] in seen])
    require(set(scans)==set(expected),"Scanned resource coverage mismatch")
    c=sqlite3.connect(p);c.executescript(SCHEMA);defs={}
    for r in rows:
        d=r["definition"];defs[d["remakeId"]]=d
    with c:
        c.executemany("INSERT INTO definition VALUES(?,?,?,?,?)",[(d["remakeId"],d["sourceRow"],d["reverseItemId"],d["bodyCount"],d["fabricCount"]) for d in defs.values()])
        for r in rows:
            c.execute("INSERT INTO item VALUES(?,?,?,?,?,?,?)",(r["itemId"],r["remakeId"],r["label"],r["modelName"],r["kind"],r["status"],int(r["itemId"] in seen)))
            for ch,i,x in links(r):
                a=scans.get(x["path"],{})
                c.execute("INSERT OR IGNORE INTO resource VALUES(?,?,?,?,?,?)",(x["path"],x["gitBlobSha1"],int(x["exists"]),a.get("status","not_scanned" if x["exists"] else "missing_path"),a.get("sha256"),a.get("error")))
                c.execute("INSERT INTO item_resource VALUES(?,?,?,?)",(r["itemId"],ch,i,x["path"]))
        for path,a in scans.items():
            for t in a["textures"]:c.execute("INSERT INTO texture VALUES(?,?,?,?,?,?,?,?,?)",(path,t["name"],t["bntxSha256"],t["bntxOffset"],t["index"],t["width"],t["height"],t["format_hex"],t["mip_count"]))
            for m in a["models"]:
                mi=m["index"];c.execute("INSERT INTO model VALUES(?,?,?)",(path,mi,m["name"]))
                for j,mat in enumerate(m["materials"]):
                    sh=mat.get("shaderAssign") or {}
                    key=(path,mi,j)
                    c.execute("INSERT INTO material VALUES(?,?,?,?,?,?,?,?,?)",(*key,mat["name"],mat["offset"],sh.get("shaderArchive"),sh.get("shaderModel"),int(mat.get("ordinalPairingSupported",False)),mat.get("error")))
                    for t in mat.get("textureRefs",[]):c.execute("INSERT INTO texture_ref VALUES(?,?,?,?,?,?)",(*key,t["index"],t["texture"],t["textureNamePointer"]))
                    for s in mat.get("samplers",[]):c.execute("INSERT INTO sampler VALUES(?,?,?,?,?,?,?)",(*key,s["index"],s["sampler"],s["rawHex"],json.dumps(s,separators=(",",":"))))
                    for s in sh.get("samplerAssigns",[]):c.execute("INSERT INTO shader_assign VALUES(?,?,?,?,?,?)",(*key,s["shaderSampler"],s["materialSampler"],json.dumps(s["materialSlotIndices"])))
        for r in rows:
            if r["itemId"] not in seen or "base" not in r:continue
            d=r["definition"];base=r["base"]["path"];a=scans.get(base)
            if not a or not a["models"]:continue
            for b in range(max(1,d["bodyCount"])):
                for f in range(max(1,d["fabricCount"])):
                    ident=(r["itemId"],b if d["bodyCount"] else -1,f if d["fabricCount"] else -1)
                    vals=[];unsupported=a["status"]!="parsed";has_target=set()
                    for m in a["models"]:
                        for j,mat in enumerate(m["materials"]):
                            ch={"mReBody":"body","mReFabric":"fabric"}.get(mat["name"])
                            if ch:has_target.add(ch)
                            ref=r[ch][b if ch=="body" else f] if ch and r[ch] else None
                            src=scans.get(ref["path"]) if ref else None
                            if ref and (not src or src["status"]!="parsed"):unsupported=True
                            if "error" in mat or not mat.get("ordinalPairingSupported",False):unsupported=True
                            bt={t["name"] for t in a["textures"]};ot={t["name"] for t in src["textures"]} if src else set()
                            for t in mat.get("textureRefs",[]):
                                n=t["texture"]
                                source=ref["path"] if n in ot else base if n in bt else None
                                status="exact_override_name" if n in ot else "base_retained" if n in bt else "unresolved"
                                vals.append((*ident,base,m["index"],j,t["index"],source,n,status))
                    if (d["bodyCount"] and "body" not in has_target) or (d["fabricCount"] and "fabric" not in has_target):unsupported=True
                    status="partial_or_special" if unsupported or not vals else "unresolved_texture" if any(x[-1]=="unresolved" for x in vals) else "ordinary_source_candidate"
                    c.execute("INSERT INTO variant VALUES(?,?,?,?)",(*ident,status))
                    c.executemany("INSERT INTO binding VALUES(?,?,?,?,?,?,?,?,?,?)",vals)
    require(c.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity")
    require(not c.execute("PRAGMA foreign_key_check").fetchall(),"SQLite foreign keys")
    counts={t:c.execute("SELECT count(*) FROM "+t).fetchone()[0] for t in ("definition","item","resource","item_resource","model","material","texture_ref","sampler","shader_assign","texture","variant","binding")}
    samples=[]
    for ident in (79,725,1501):
        samples.append({"itemId":ident,"variants":dict(c.execute("SELECT status,count(*) FROM variant WHERE item_id=? GROUP BY status",(ident,))),"bindingStatuses":dict(c.execute("SELECT status,count(*) FROM binding WHERE item_id=? GROUP BY status",(ident,)))})
    report={"counts":counts,"scannedItems":len(seen),"resourceStatuses":dict(c.execute("SELECT scan_status,count(*) FROM resource GROUP BY scan_status")),"variantStatuses":dict(c.execute("SELECT status,count(*) FROM variant GROUP BY status")),"samples":samples,"itemScanStatuses":dict(c.execute("SELECT binding_status,count(*) FROM item_scan_status GROUP BY binding_status")),"runtimeVerified":False,"pixelVerified":False,"allDefinitionsIndexed":True,"fullScanRequested":require_full}
    c.close();write(out/"audit.json",report);print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("command",choices=["paths","scan","db"]);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--inventory",type=Path,required=True);p.add_argument("--out",type=Path,required=True);p.add_argument("--shard",type=int,default=0);p.add_argument("--shards",type=int,default=1);p.add_argument("--sample",action="store_true");p.add_argument("--full",action="store_true");p.add_argument("--parts",type=Path,nargs="*",default=[]);a=p.parse_args()
    rows=inventory(a.inventory);chosen=choose(rows,a.shard,a.shards,a.sample)
    if a.command=="paths":a.out.write_text("\n".join("/"+p for p in sorted(selection(chosen)))+"\n",encoding="utf-8")
    elif a.command=="scan":scan_part(a.root,chosen,a.out)
    else:build_db(rows,a.parts,a.out,a.full)
