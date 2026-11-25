#!/usr/bin/env python3
# /// script
# requires-python = ">=3.11"
# dependencies = ["zstandard==0.23.0"]
# ///
"""Loss-aware MSBT text database: original bytes, all labels, control tokens and catalog bindings."""
import argparse, collections, csv, hashlib, json, re, sqlite3, subprocess, sys
from pathlib import Path
ROM=Path("e10617820db06889e1638499478da0de_NCA/1/Message")
def need(ok,msg):
    if not ok:raise ValueError(msg)
def digest(b):return hashlib.sha256(b).hexdigest()
def j(v):return json.dumps(v,ensure_ascii=False,separators=(",",":"))
def parse(data):
    need(data[:8]==b"MsgStdBn" and len(data)>=32,"MSBT header")
    order={b"\xff\xfe":"little",b"\xfe\xff":"big"}.get(data[8:10]);need(order,"BOM")
    def num(b,p,n):
        need(0<=p<=len(b)-n,"integer bounds");return int.from_bytes(b[p:p+n],order)
    enc=data[12];need(enc in (0,1,2),"encoding");unit=(1,2,4)[enc]
    codec="utf-8" if enc==0 else ("utf-16-" if enc==1 else "utf-32-")+("le" if order=="little" else "be")
    sections=[];tags=collections.defaultdict(list);p=32
    for _ in range(num(data,14,2)):
        need(p+16<=len(data),"section header")
        tag=data[p:p+4].decode("ascii");size=num(data,p+4,4);start=p+16;need(start+size<=len(data),"section bounds")
        b=data[start:start+size];sections.append([tag,start,size,digest(b)]);tags[tag].append(b);p=(start+size+15)&~15
    need(len(tags["TXT2"])==1,"TXT2 count");b=tags["TXT2"][0];n=num(b,0,4)
    need(n<=200000 and 4+4*n<=len(b),"text count")
    offsets=[num(b,4+4*i,4) for i in range(n)]
    need(all(4+4*n<=x<=len(b) for x in offsets) and offsets==sorted(offsets),"TXT2 offsets")
    aliases=collections.defaultdict(list)
    for lb in tags["LBL1"]:
        groups=num(lb,0,4);need(4+8*groups<=len(lb),"LBL1 groups")
        for g in range(groups):
            count=num(lb,4+g*8,4);at=num(lb,8+g*8,4);need(count<=200000,"label count")
            for _ in range(count):
                size=num(lb,at,1);need(at+1+size+4<=len(lb),"label bounds")
                raw=lb[at+1:at+1+size];idx=num(lb,at+1+size,4);need(idx<n,"label index")
                aliases[idx].append([raw.decode("utf-8","replace"),raw.hex(),g]);at+=1+size+4
    rows=[]
    for i,off in enumerate(offsets):
        raw=b[off:offsets[i+1] if i+1<n else len(b)]
        tokens=[];parts=[];pos=0;start=0;status="ok";tail=""
        # Nintendo message control framing; UTF-8/UTF-32 retained raw until independently validated.
        if unit==2:
            while pos+2<=len(raw):
                v=num(raw,pos,2)
                if v==0:
                    parts.append(raw[start:pos].decode(codec,"replace"));tail=raw[pos:].hex();break
                if v in (14,15):
                    parts.append(raw[start:pos].decode(codec,"replace"));begin=pos
                    header=8 if v==14 else 6
                    if pos+header>len(raw):status="truncated_control";break
                    group=num(raw,pos+2,2);typ=num(raw,pos+4,2)
                    size=num(raw,pos+6,2) if v==14 else 0;end=pos+header+size
                    if end>len(raw) or end%2:status="invalid_control_length";break
                    tokens.append({"offset":begin,"marker":v,"group":group,"type":typ,"payload_hex":raw[pos+header:end].hex(),"raw_hex":raw[begin:end].hex(),"status":"framing_candidate"})
                    pos=end;start=pos;continue
                pos+=2
            else:
                parts.append(raw[start:].decode(codec,"replace"));status="no_terminator"
            display="".join(parts) if status=="ok" else None
        else:
            display=None;status="control_framing_not_validated_for_encoding"
        rows.append((i,off,raw,aliases[i],display,status,tokens,tail))
    return order,codec,sections,rows
def export(root,historical,out):
    sys.path.insert(0,str(historical/"Scripts"))
    from acnh_formats import decompress,parse_sarc,detect,parse_msbt
    out.mkdir(parents=True,exist_ok=True);(out/"entries").mkdir(exist_ok=True)
    raw=subprocess.check_output(["git","-C",str(root),"ls-tree","-r","-z","HEAD","--",str(ROM)])
    sources={}
    for line in raw.split(b"\0"):
        if line:
            meta,p=line.split(b"\t",1);sources[p.decode()]=meta.decode().split()[2]
    need(len(sources)==155,"archive baseline")
    dbpath=out/"message.sqlite3";dbpath.unlink(missing_ok=True)
    db=sqlite3.connect(dbpath);db.executescript("""
    PRAGMA foreign_keys=ON;
    CREATE TABLE archive(id INTEGER PRIMARY KEY,path TEXT UNIQUE, family TEXT,locale TEXT,sha256 TEXT,git_blob TEXT,status TEXT);
    CREATE TABLE member(id INTEGER PRIMARY KEY,archive_id INTEGER REFERENCES archive(id),path TEXT,sha256 TEXT,bytes INTEGER,format TEXT,status TEXT,sections_json TEXT,error TEXT,UNIQUE(archive_id,path));
    CREATE TABLE entry(member_id INTEGER REFERENCES member(id),text_index INTEGER,txt2_offset INTEGER,raw BLOB,display_text TEXT,status TEXT,tail_hex TEXT,PRIMARY KEY(member_id,text_index));
    CREATE TABLE label(member_id INTEGER,text_index INTEGER,label TEXT,label_raw_hex TEXT,label_group INTEGER,FOREIGN KEY(member_id,text_index) REFERENCES entry(member_id,text_index));
    CREATE TABLE control(member_id INTEGER,text_index INTEGER,offset INTEGER,marker INTEGER,group_id INTEGER,type_id INTEGER,payload_hex TEXT,raw_hex TEXT,status TEXT,FOREIGN KEY(member_id,text_index) REFERENCES entry(member_id,text_index));
    CREATE TABLE binding(entity_type TEXT,entity_id TEXT,locale TEXT,member_path TEXT,label TEXT,original_status TEXT,match_status TEXT,member_id INTEGER,text_index INTEGER,source_text TEXT);
    CREATE INDEX label_lookup ON label(member_id,label);
    CREATE INDEX archive_locale ON archive(family,locale);
    CREATE INDEX binding_entity ON binding(entity_type,entity_id,locale);
    """)
    stats=collections.Counter();family_stats=collections.defaultdict(collections.Counter)
    for p,git_blob in sorted(sources.items()):
        b=(root/p).read_bytes();need(hashlib.sha1(f"blob {len(b)}\0".encode()+b).hexdigest()==git_blob,"blob "+p)
        m=re.fullmatch(r"(.+)_([A-Z]{2}[a-z]{2})\.sarc\.zs",Path(p).name)
        fam,loc=m.groups() if m else ("project","")
        aid=db.execute("INSERT INTO archive(path,family,locale,sha256,git_blob,status) VALUES(?,?,?,?,?,?)",(p,fam,loc,digest(b),git_blob,"parsed" if m else "inventory_only")).lastrowid
        if not m:continue
        unpack,_=decompress(b,limit=128*1024*1024);_,members=parse_sarc(unpack)
        stats["archives"]+=1
        with (out/"entries"/(fam+"_"+loc+".csv")).open("w",encoding="utf-8-sig",newline="") as f:
            w=csv.writer(f);w.writerow(["member","text_index","txt2_offset","labels_json","raw_hex","display_text_json","decode_status","controls_json","tail_hex"])
            for name,content in members:
                fmt=detect(content);status="not_msbt";error="";sec=[];rows=[]
                if fmt=="msbt":
                    try:
                        _,codec,sec,rows=parse(content);status="parsed"
                        if fam=="String":
                            old=parse_msbt(content);need(len(old["entries"])==len(rows),"historical text count")
                            need(all(len(r[3])==1 and r[3][0][0]==o["label"] for r,o in zip(rows,old["entries"])),"historical label mismatch")
                    except Exception as exc:status="parse_error";error=str(exc)[:500];rows=[]
                mid=db.execute("INSERT INTO member(archive_id,path,sha256,bytes,format,status,sections_json,error) VALUES(?,?,?,?,?,?,?,?)",(aid,name,digest(content),len(content),fmt,status,j(sec),error)).lastrowid
                stats[status]+=1;family_stats[fam][status]+=1
                for i,off,raw,ls,display,st,tokens,tail in rows:
                    db.execute("INSERT INTO entry VALUES(?,?,?,?,?,?,?)",(mid,i,off,raw,display,st,tail))
                    db.executemany("INSERT INTO label VALUES(?,?,?,?,?)",[(mid,i,*v) for v in ls])
                    db.executemany("INSERT INTO control VALUES(?,?,?,?,?,?,?,?,?)",[(mid,i,t["offset"],t["marker"],t["group"],t["type"],t["payload_hex"],t["raw_hex"],t["status"]) for t in tokens])
                    w.writerow([name,i,off,j(ls),raw.hex(),j(display),st,j(tokens),tail])
                    stats["entries"]+=1;stats["labels"]+=len(ls);stats["controls"]+=len(tokens);stats["decode_"+st]+=1;family_stats[fam]["entries"]+=1
        db.commit()
    need(stats["archives"]==154 and family_stats["String"]["parsed"]==1862 and family_stats["String"]["entries"]==408156,"String baseline")
    # Existing binding evidence is rechecked by exact resource identity, not by text similarity.
    specs=[("item","research/catalog/item_locale.csv","item_id","source_member","source_label","display_name","association_status",None),("npc","research/bcsv-data/decoded/locales/Npc.csv","source_index",None,"msbt_label","display_name","association_status",None),("category","research/catalog/category_locale_candidate.csv","category_id",None,"source_message_label","text_candidate","status","STR_CategoryName.msbt"),("color","research/catalog/color_locale_candidate.csv","color_id",None,"source_message_label","text_candidate","status","STR_ItemColor.msbt")]
    lookup=collections.defaultdict(list)
    for mid,idx,loc,path,label,display in db.execute("SELECT m.id,l.text_index,a.locale,m.path,l.label,e.display_text FROM label l JOIN member m ON l.member_id=m.id JOIN archive a ON m.archive_id=a.id JOIN entry e ON e.member_id=m.id AND e.text_index=l.text_index WHERE a.family='String'"):
        lookup[(loc,path,label)].append((mid,idx,display))
    for typ,path,idcol,membercol,labelcol,textcol,statuscol,fixed in specs:
        with (root/path).open(encoding="utf-8-sig",newline="") as f:
            for r in csv.DictReader(f):
                loc=r["locale"];label=r[labelcol];ident=r[idcol]
                member=r[membercol] if membercol else fixed
                if typ=="npc":
                    ident=r["npc_type"]+":"+ident;member="Npc/STR_NNpcName.msbt" if r["npc_type"]=="normal" else "Npc/STR_SNpcName.msbt"
                match=lookup.get((loc,member,label),[]) if label and member else []
                one=match[0] if len(match)==1 else (None,None,None)
                st="exact_resource_text_equal" if len(match)==1 and one[2]==r[textcol] else "exact_resource_text_differs" if len(match)==1 else "ambiguous" if match else "unmatched_or_missing"
                db.execute("INSERT INTO binding VALUES(?,?,?,?,?,?,?,?,?,?)",(typ,ident,loc,member,label,r[statuscol],st,one[0],one[1],r[textcol]));stats["binding_"+st]+=1
    db.commit();need(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok","SQLite integrity");need(not db.execute("PRAGMA foreign_key_check").fetchall(),"foreign keys")
    for table in ("archive","member","label","control","binding"):
        cur=db.execute("SELECT * FROM "+table)
        with (out/(table+".csv")).open("w",encoding="utf-8-sig",newline="") as f:
            w=csv.writer(f);w.writerow([c[0] for c in cur.description]);w.writerows(cur)
    db.close()
    summary={"stats":dict(stats),"families":{k:dict(v) for k,v in sorted(family_stats.items())},"sqlite_integrity":"ok","control_semantics":"framing candidates only; raw TXT2 bytes authoritative"}
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8");print(json.dumps(summary))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--historical",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("out/message-data"));a=p.parse_args();export(a.root,a.historical,a.out)
