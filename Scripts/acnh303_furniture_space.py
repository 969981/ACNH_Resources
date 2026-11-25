#!/usr/bin/env python3
"""Original static space/interaction evidence database, not an in-game placement oracle."""
import argparse,collections,hashlib,json,re,sqlite3,struct,subprocess,zlib
from pathlib import Path
NCA="e10617820db06889e1638499478da0de_NCA"
TABLES=("ItemParam","ItemSize","ItemKind","ItemAct","ItemNpcFtrActionParam","ItemNpcWherearenFtrActionParam")
def check(x,m):
    if not x:raise ValueError(m)
def sha(b):return hashlib.sha256(b).hexdigest()
def crc(s):return zlib.crc32(s.encode())&0xffffffff
def gitblob(b):return hashlib.sha1(b"blob "+str(len(b)).encode()+b"\0"+b).hexdigest()
def write(p,o):p.write_text(json.dumps(o,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def tree(root):
    raw=subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--",NCA+"/1"])
    result={}
    for row in raw.split(b"\0"):
        if row:
            meta,p=row.split(b"\t",1);mode,typ,h=meta.decode().split()
            if typ=="blob":result[p.decode()]=h
    return result
class Table:
    def __init__(self,root,n,paths):
        self.path=NCA+"/1/Bcsv/"+n+".bcsv";self.b=(root/self.path).read_bytes()
        check(gitblob(self.b)==paths[self.path],"Original blob "+n)
        self.n,self.stride=struct.unpack_from("<II",self.b);cnt=struct.unpack_from("<H",self.b,8)[0]
        start=28 if self.b[10] else 12;self.start=start+8*cnt
        self.cols={f"{h:08X}":o for h,o in struct.iter_unpack("<II",self.b[start:self.start])}
        check(len(self.cols)==cnt and self.start+self.n*self.stride==len(self.b),"BCSV extent "+n)
        order=sorted(self.cols.values())+[self.stride];self.width={h:order[order.index(o)+1]-o for h,o in self.cols.items()}
    def raw(self,i,h,w=None):
        w=self.width[h] if w is None else w;o=self.start+i*self.stride+self.cols[h]
        check(0<=i<self.n and w<=self.width[h],"Field bounds");return self.b[o:o+w]
    def val(self,i,h,w=None,signed=False):return int.from_bytes(self.raw(i,h,w),"little",signed=signed)
    def text(self,i,h):return self.raw(i,h).split(b"\0",1)[0].decode("utf-8",errors="replace")
    def record(self,i):return {h:self.raw(i,h).hex() for h in self.cols}
def native(root,labels):
    import acnh303_r100_nso_decode as dec
    from capstone import Cs,CS_ARCH_ARM64,CS_MODE_ARM
    elf,nso,mapped,segments,raw,tags,relocs=dec.decode(root);base=0x100000
    names=[]
    for i in range(28):
        a=0x04a2c6c0-base+i*8;r=relocs.get(a)
        check(r and r["type"] in ("RELR",1027) and r["symbol"]==0 and r["addend"] is not None,"Size enum relocation")
        t=r["addend"];s=None
        for v,b in mapped[1:]:
            if v<=t<v+len(b):
                off=t-v;end=b.find(b"\0",off,min(len(b),off+128))
                if end>=0:s=b[off:end].decode("utf-8")
        check(s in labels,"Unknown runtime size label "+str(s));names.append({"index":i,"name":s,"crc":crc(s),"pointerVA":hex(a+base),"stringVA":hex(t+base)})
    check(len({x["name"] for x in names})==28,"Size enum coverage")
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
    windows={}
    for a,n in [(0x01aa64a0,0x380),(0x01a8e060,0x500),(0x01a8da80,0x600),(0x01aee3b4,0x410),(0x01afb1a0,0x2a0),(0x01afb7fc,0x120),(0x01afb8e8,0x160)]:
        data=raw(a-base,n);windows[hex(a)]={"sha256":sha(data),"instructions":[{"va":hex(i.address+base),"bytes":i.bytes.hex(),"asm":i.mnemonic+" "+i.op_str} for i in cs.disasm(data,a-base)],"windowNotFunctionBoundary":True}
    return {"nsoSha256":sha(nso),"enum":names,"windows":windows,"runtimeVerified":False}
SCHEMA="""
PRAGMA foreign_keys=ON;
CREATE TABLE source(name TEXT PRIMARY KEY,path TEXT,sha256 TEXT,git_blob TEXT,rows INTEGER,stride INTEGER);
CREATE TABLE size(id INTEGER PRIMARY KEY,label TEXT UNIQUE,crc INTEGER UNIQUE,source_row INTEGER UNIQUE,runtime_enum INTEGER UNIQUE,plane TEXT,half_width INTEGER,half_depth_or_height INTEGER,raw_09B64264 INTEGER,raw_3CF05708 INTEGER,raw_float_bits INTEGER,raw_fields_json TEXT);
CREATE TABLE kind(id INTEGER PRIMARY KEY,label TEXT UNIQUE,source_row INTEGER UNIQUE,stack_raw_s16 INTEGER,can_ftr INTEGER,can_put INTEGER,can_set_item INTEGER,can_put_wall_floor INTEGER,raw_fields_json TEXT);
CREATE TABLE action(family TEXT,label TEXT,crc INTEGER,source_id INTEGER,source_row INTEGER,raw_fields_json TEXT,PRIMARY KEY(family,crc));
CREATE TABLE item(id INTEGER PRIMARY KEY,source_row INTEGER UNIQUE,label TEXT,model_name TEXT,raw_kind TEXT,base_kind_crc INTEGER NOT NULL,kind_id INTEGER REFERENCES kind(id),kind_status TEXT,size_id INTEGER NOT NULL REFERENCES size(id),size_crc INTEGER NOT NULL,remake_id INTEGER,raw_fields_json TEXT);
CREATE TABLE action_candidate(item_id INTEGER REFERENCES item(id),field_hash TEXT,family TEXT,crc INTEGER,PRIMARY KEY(item_id,field_hash,family),FOREIGN KEY(family,crc) REFERENCES action(family,crc));
CREATE TABLE asset(path TEXT PRIMARY KEY,git_blob TEXT NOT NULL,category TEXT NOT NULL);
CREATE TABLE item_asset(item_id INTEGER REFERENCES item(id),path TEXT REFERENCES asset(path),match_rule TEXT,PRIMARY KEY(item_id,path,match_rule));
CREATE TABLE space_runtime(item_id INTEGER PRIMARY KEY REFERENCES item(id),can_place_on_surface INTEGER,can_support_other INTEGER,support_height REAL,support_slots_json TEXT,collision_geometry_verified INTEGER,rotation_verified INTEGER,interaction_verified INTEGER);
CREATE INDEX item_size ON item(size_id);
CREATE INDEX item_kind ON item(raw_kind);
CREATE INDEX action_lookup ON action_candidate(family,crc);
CREATE VIEW item_space AS SELECT i.id,i.label,i.model_name,i.raw_kind,k.label AS base_kind,i.kind_status,s.label AS size_label,s.plane,s.half_width/2.0 AS width_tiles,s.half_depth_or_height/2.0 AS depth_or_height_tiles,s.half_width*s.half_depth_or_height/4.0 AS nominal_area_tiles,k.can_ftr,k.can_put,k.can_set_item,k.can_put_wall_floor,k.stack_raw_s16,r.can_place_on_surface,r.can_support_other,r.support_height,r.support_slots_json,r.collision_geometry_verified FROM item i JOIN size s ON i.size_id=s.id LEFT JOIN kind k ON k.id=i.kind_id JOIN space_runtime r ON r.item_id=i.id;
"""
def main(root,verified,out):
    out.mkdir(parents=True,exist_ok=True);paths=tree(root);t={n:Table(root,n,paths) for n in TABLES};it=t["ItemParam"];sz=t["ItemSize"];ki=t["ItemKind"]
    check(it.n==11178 and sha(it.b)=="9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609","Original ItemParam")
    check(sz.n==28 and ki.n==189,"Original table counts")
    sizes={};kinds={};actions={}
    for i in range(sz.n):
        n=sz.text(i,"87BF00E8");m=re.fullmatch(r"(\d+)_(\d)x(\d+)_(\d)(?:_(Wall|Rug|Pillar))?",n);check(m,"Size label")
        x=int(m[1])*2+int(m[2])//5;y=int(m[3])*2+int(m[4])//5
        check((x,y)==(sz.val(i,"16B8F524",1),sz.val(i,"BCB13DAF",1)),"Half-cell fields")
        sizes[crc(n)]={"id":sz.val(i,"54706054",2),"label":n,"row":i,"plane":m[5] or "Floor","x":x,"y":y,"raw":sz.record(i)}
    nv=native(verified,{x["label"] for x in sizes.values()});write(out/"native-size-evidence.json",nv)
    enum={x["name"]:x["index"] for x in nv["enum"]}
    c=sqlite3.connect(out/"furniture-space.sqlite3");c.executescript(SCHEMA)
    for n,v in t.items():c.execute("INSERT INTO source VALUES(?,?,?,?,?,?)",(n,v.path,sha(v.b),paths[v.path],v.n,v.stride))
    for h,s in sizes.items():
        i=s["row"];c.execute("INSERT INTO size VALUES(?,?,?,?,?,?,?,?,?,?,?,?)",(s["id"],s["label"],h,i,enum[s["label"]],s["plane"],s["x"],s["y"],sz.val(i,"09B64264",2),sz.val(i,"3CF05708",2),sz.val(i,"801351E6",4),json.dumps(s["raw"])))
    flags=["CanFtr","CanPut","CanSetItem","CanPutWallAndFloor"]
    for i in range(ki.n):
        name=ki.text(i,"87BF00E8");kid=ki.val(i,"54706054",2);kinds[name]=kid
        vs=[ki.val(i,f"{crc(n+' u8'):08X}",1) for n in flags];check(all(v in (0,1) for v in vs),"Kind flag")
        c.execute("INSERT INTO kind VALUES(?,?,?,?,?,?,?,?,?)",(kid,name,i,ki.val(i,"4C9BA961",2,True),*vs,json.dumps(ki.record(i))))
    for n in TABLES[3:]:
        v=t[n];actions[n]={}
        for i in range(v.n):
            name=v.text(i,"87BF00E8");h=crc(name);check(h not in actions[n],"Action CRC collision")
            actions[n][h]=name;c.execute("INSERT INTO action VALUES(?,?,?,?,?,?)",(n,name,h,v.val(i,"54706054",2),i,json.dumps(v.record(i))))
    kind_crc={crc(k):v for k,v in kinds.items()};check(len(kind_crc)==len(kinds),"Kind CRC collision")
    # Candidate source fields: exact full-domain matches only, plus non-None evidence.
    hashes=[h for h,w in it.width.items() if w==4]
    coverage=collections.Counter();nonempty=collections.Counter()
    for i in range(it.n):
        for h in hashes:
            v=it.val(i,h,4)
            for family,vals in actions.items():
                if v in vals:
                    coverage[family,h]+=1
                    if vals[v]!="None":nonempty[family,h]+=1
    selected={(f,h) for (f,h),n in coverage.items() if n==it.n and nonempty[f,h]>0}
    # Inventory asset paths by original top-level directory and exact filename stem.
    dirs=collections.Counter();asset_index=collections.defaultdict(list);candidate_paths=[]
    for p,b in paths.items():
        rel=p.split("/1/",1)[1];d=rel.split("/",1)[0];dirs[d]+=1;name=Path(p).name
        stem=name.split(".",1)[0]
        if d=="Model" and not stem.startswith("Layout_"):cat="model"
        elif re.search(r"(?:^|[/_.])(?:collision|physics|phive|kcl|hkcl|bphcl|bphsh|col)(?:$|[/_.])",rel,re.I):cat="collision_path_candidate"
        elif d in ("Param","BDLI","AnimationInfo","AnimationSequence","EventFlow"):cat="auxiliary_resource_path_candidate"
        else:continue
        candidate_paths.append((p,b,cat));asset_index[stem].append((p,cat))
    c.executemany("INSERT INTO asset VALUES(?,?,?)",candidate_paths)
    for i in range(it.n):
        ident=it.val(i,"54706054",2);label=it.text(i,"3FEBC642");model=it.text(i,"48EF0398");kind=it.text(i,"FC275E86")
        k=kind.removeprefix("Kind_");exact=kinds.get(k);kh=it.val(i,"5270EB75",4);kid=kind_crc.get(kh);check(kid is not None and (exact is None or exact==kid),"Kind CRC cross-check")
        h=it.val(i,"E06FB090",4);check(h in sizes,"Size CRC")
        c.execute("INSERT INTO item VALUES(?,?,?,?,?,?,?,?,?,?,?,?)",(ident,i,label,model,kind,kh,kid,"exact_label_and_crc" if exact is not None else "exact_native_kind_crc",sizes[h]["id"],h,it.val(i,"CB5EB33F",2),json.dumps(it.record(i),separators=(",",":"))))
        c.execute("INSERT INTO space_runtime VALUES(?,?,?,?,?,?,?,?)",(ident,None,None,None,None,0,0,0))
        for fam,field in sorted(selected):
            v=it.val(i,field,4);c.execute("INSERT INTO action_candidate VALUES(?,?,?,?)",(ident,field,fam,v))
        for stem,rule in [(label,"exact_item_label"),(model,"exact_model_name")]:
            if stem:
                for p,cat in asset_index.get(stem,[]):c.execute("INSERT OR IGNORE INTO item_asset VALUES(?,?,?)",(ident,p,rule))
    c.commit();check(c.execute("PRAGMA integrity_check").fetchone()[0]=="ok" and not c.execute("PRAGMA foreign_key_check").fetchall(),"SQLite integrity")
    counts={n:c.execute("SELECT count(*) FROM "+n).fetchone()[0] for n in ("source","size","kind","action","item","action_candidate","asset","item_asset","space_runtime")}
    report={"counts":counts,"kindStatuses":dict(c.execute("SELECT kind_status,count(*) FROM item GROUP BY kind_status")),"sizeDistribution":[dict(zip(("label","width","depth","plane","count"),r)) for r in c.execute("SELECT size_label,width_tiles,depth_or_height_tiles,plane,count(*) FROM item_space GROUP BY size_label ORDER BY count(*) DESC")],"actionFields":[{"family":f,"hash":h,"matchCount":coverage[f,h],"nonNone":nonempty[f,h]} for f,h in sorted(selected)],"sourceDirectories":dict(dirs),"assetCategories":dict(c.execute("SELECT category,count(*) FROM asset GROUP BY category")),"assetLinkCategories":dict(c.execute("SELECT a.category,count(DISTINCT i.item_id) FROM item_asset i JOIN asset a USING(path) GROUP BY a.category")),"samples":[dict(zip(("id","label","kind","size","width","depth","plane"),r)) for r in c.execute("SELECT id,label,raw_kind,size_label,width_tiles,depth_or_height_tiles,plane FROM item_space WHERE id IN (2,79,725,1499,1500,1501,2213,3410,3411,3412,6426,12766,12767,12773)")],"runtimeVerified":False}
    c.close();write(out/"audit.json",report);print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--verified",type=Path,required=True);p.add_argument("--out",type=Path,required=True);a=p.parse_args();main(a.root.resolve(),a.verified.resolve(),a.out)
