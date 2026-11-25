#!/usr/bin/env python3
"""Normalized evidence overlay for the 25 special remake definitions."""
import argparse,hashlib,json,sqlite3
from pathlib import Path
SCHEMA="""
PRAGMA foreign_keys=ON;
CREATE TABLE special_definition(remake_id INTEGER PRIMARY KEY,body_count INTEGER NOT NULL,fabric_count INTEGER NOT NULL);
CREATE TABLE special_item(item_id INTEGER PRIMARY KEY,remake_id INTEGER NOT NULL REFERENCES special_definition(remake_id),label TEXT NOT NULL,model_name TEXT NOT NULL,kind TEXT NOT NULL,source_row INTEGER NOT NULL,category TEXT NOT NULL,evidence_status TEXT NOT NULL);
CREATE TABLE resource(path TEXT PRIMARY KEY,sha256 TEXT NOT NULL,git_blob TEXT NOT NULL,status TEXT NOT NULL);
CREATE TABLE texture(path TEXT REFERENCES resource(path),bntx_offset INTEGER,brti_index INTEGER,name TEXT NOT NULL,width INTEGER,height INTEGER,format TEXT,mip_count INTEGER,bntx_sha256 TEXT NOT NULL,PRIMARY KEY(path,bntx_offset,brti_index));
CREATE TABLE fg_slot(item_id INTEGER REFERENCES special_item(item_id),slot INTEGER,fg_id INTEGER NOT NULL UNIQUE,variant_name TEXT NOT NULL,group_name TEXT NOT NULL,model_name TEXT NOT NULL,model_path TEXT REFERENCES resource(path),variant_path TEXT REFERENCES resource(path),source_row INTEGER NOT NULL,PRIMARY KEY(item_id,slot));
CREATE TABLE photo_frame(stem TEXT,slot INTEGER,path TEXT NOT NULL REFERENCES resource(path),PRIMARY KEY(stem,slot));
CREATE TABLE photo_binding(stem TEXT,slot INTEGER,texture_name TEXT,source_path TEXT NOT NULL REFERENCES resource(path),PRIMARY KEY(stem,slot,texture_name),FOREIGN KEY(stem,slot) REFERENCES photo_frame(stem,slot));
CREATE TABLE icon(item_id INTEGER REFERENCES special_item(item_id),body_slot INTEGER,fabric_slot INTEGER,path TEXT NOT NULL REFERENCES resource(path),bntx_offset INTEGER,brti_index INTEGER,PRIMARY KEY(item_id,body_slot,fabric_slot),FOREIGN KEY(path,bntx_offset,brti_index) REFERENCES texture(path,bntx_offset,brti_index));
CREATE TABLE material(path TEXT REFERENCES resource(path),ordinal INTEGER,name TEXT NOT NULL,model_name TEXT NOT NULL,shader_archive TEXT,shader_model TEXT,PRIMARY KEY(path,ordinal));
CREATE TABLE shader_option(path TEXT,ordinal INTEGER,name TEXT,value TEXT NOT NULL,PRIMARY KEY(path,ordinal,name),FOREIGN KEY(path,ordinal) REFERENCES material(path,ordinal));
CREATE TABLE material_param(path TEXT,ordinal INTEGER,name TEXT,raw_hex TEXT,type_raw INTEGER,byte_size INTEGER,PRIMARY KEY(path,ordinal,name),FOREIGN KEY(path,ordinal) REFERENCES material(path,ordinal));
CREATE TABLE texture_assignment(path TEXT,ordinal INTEGER,shader_sampler TEXT,material_sampler TEXT,material_slot INTEGER,texture_name TEXT,PRIMARY KEY(path,ordinal,shader_sampler,material_slot),FOREIGN KEY(path,ordinal) REFERENCES material(path,ordinal));
CREATE TABLE evidence(key TEXT PRIMARY KEY,value TEXT NOT NULL);
CREATE VIEW special_icon_detail AS SELECT i.item_id,i.label,i.remake_id,v.body_slot,v.fabric_slot,t.name AS texture_name,t.width,t.height,t.format,v.path FROM icon v JOIN special_item i USING(item_id) JOIN texture t USING(path,bntx_offset,brti_index);
"""
ICE={743,3497,3498,3499,3500,3501,3502,3503,3504,3505}
FENCE={3402,4357,5207,5208,11711,11712,12894,14756,14758,14759}
LADDER={13526,13530,13534}
def build(root,out):
    def read(n):return json.loads((root/n).read_text("utf-8"))
    plan=read("special-plan.json");resources=read("special-resources.json");native=read("special-native.json")
    assert len(plan["items"])==503 and len({r["remakeId"] for r in plan["items"]})==25
    assert len(resources)==len(plan["selected"]) and all(r["status"]=="parsed" for r in resources)
    assert not out.exists()
    c=sqlite3.connect(out);c.executescript(SCHEMA)
    lookup={r["path"]:r for r in resources}
    with c:
        for r in plan["items"]:
            id=r["itemId"];category="ice" if id in ICE else "fence" if id in FENCE else "ladder" if id in LADDER else "phone_case" if id==8760 else "photo"
            status={"ice":"native_float_rule_and_material_source","fence":"fg_slot_and_shared_model_source","ladder":"fg_slot_and_shared_model_source","phone_case":"candidate_phone_resource_family","photo":"shared_frame_source_candidate"}[category]
            c.execute("INSERT OR IGNORE INTO special_definition VALUES(?,?,?)",(r["remakeId"],r["bodyCount"],r["fabricCount"]))
            c.execute("INSERT INTO special_item VALUES(?,?,?,?,?,?,?,?)",(id,r["remakeId"],r["label"],r["model"],r["kind"],r["sourceRow"],category,status))
        for r in resources:
            p=r["path"];c.execute("INSERT INTO resource VALUES(?,?,?,?)",(p,r["sha256"],r["gitBlob"],r["status"]))
            for t in r["textures"]:c.execute("INSERT INTO texture VALUES(?,?,?,?,?,?,?,?,?)",(p,t["bntxOffset"],t["index"],t["name"],t["width"],t["height"],t["format_hex"],t["mip_count"],t["bntxSha256"]))
            for j,m in enumerate(r["materials"]):
                sh=m["shaderAssign"] or {};key=(p,j)
                c.execute("INSERT INTO material VALUES(?,?,?,?,?,?)",(*key,m["name"],m["modelName"],sh.get("shaderArchive"),sh.get("shaderModel")))
                c.executemany("INSERT INTO shader_option VALUES(?,?,?,?)",[(*key,k,v) for k,v in m["shaderOptions"].items()])
                for t in m["parameters"]:c.execute("INSERT INTO material_param VALUES(?,?,?,?,?,?)",(*key,t["name"],t["raw_source_param_prefix_hex"],t["type_raw_byte"],t["declared_data_size"]))
                for a in sh.get("samplerAssigns",[]):
                    for slot in a["materialSlotIndices"]:
                        t=m["textureRefs"][slot] if slot<len(m["textureRefs"]) and len(m["textureRefs"])==len(m["samplers"]) else None
                        c.execute("INSERT INTO texture_assignment VALUES(?,?,?,?,?,?)",(*key,a["shaderSampler"],a["materialSampler"],slot,t["texture"] if t else None))
        for r in plan["fgRows"]:c.execute("INSERT INTO fg_slot VALUES(?,?,?,?,?,?,?,?,?)",(r["itemId"],r["slot"],r["fgId"],r["variantName"],r["groupName"],r["modelName"],r["modelPath"],r["variantPath"],r["sourceRow"]))
        for r in plan["photos"]:c.execute("INSERT INTO photo_frame VALUES(?,?,?)",(r["stem"],r["slot"],r["path"]))
        for stem in ("FtrBromideFrame","FtrBromideFrameWall"):
            base=next(r["path"] for r in plan["photos"] if r["stem"]==stem and r["slot"]==-1)
            mats=lookup[base]["materials"];refs=[t["texture"] for m in mats if m["name"]=="mReBody" for t in m["textureRefs"]]
            assert len(refs)==3
            for slot in range(8):
                p=next(r["path"] for r in plan["photos"] if r["stem"]==stem and r["slot"]==slot)
                assert set(refs)=={t["name"] for t in lookup[p]["textures"]}
                c.executemany("INSERT INTO photo_binding VALUES(?,?,?,?)",[(stem,slot,t,p) for t in refs])
        for r in plan["icons"]:
            p=r["path"];assert p and len(lookup[p]["textures"])==1
            t=lookup[p]["textures"][0]
            expected=next(i["label"] for i in plan["items"] if i["itemId"]==r["itemId"])+"_Remake_"+str(r["body"])+"_"+str(r["fabric"])
            assert t["name"]==expected,(t["name"],expected)
            c.execute("INSERT INTO icon VALUES(?,?,?,?,?,?)",(r["itemId"],r["body"],r["fabric"],p,t["bntxOffset"],t["index"]))
        for name in ("special-plan.json","special-resources.json","special-native.json","audit.json"):
            c.execute("INSERT INTO evidence VALUES(?,?)",(name,hashlib.sha256((root/name).read_bytes()).hexdigest()))
        c.execute("INSERT INTO evidence VALUES(?,?)",("native_parameter_table",json.dumps(native["parameterTable"],ensure_ascii=False)))
        c.execute("INSERT INTO evidence VALUES(?,?)",("scope","Source evidence overlay only; runtime binding and pixel rendering not verified."))
    assert c.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    assert not c.execute("PRAGMA foreign_key_check").fetchall()
    counts={t:c.execute("SELECT count(*) FROM "+t).fetchone()[0] for t in ("special_definition","special_item","resource","texture","fg_slot","photo_frame","photo_binding","icon","material","shader_option","material_param","texture_assignment")}
    assert counts["fg_slot"]==91 and counts["icon"]==190 and counts["photo_binding"]==48
    c.close();print(json.dumps(counts))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--input",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();build(a.input,a.out)
