#!/usr/bin/env python3
"""R35 native TalkNNpc/TalkSNpc LBL1/ATR1/TXT2 audit, offline and read-only.

Keep every label alias and raw attribute/text record. A same-file decimal
label hit is structural evidence, not proof of EventFlow completion.
"""
from __future__ import annotations
import argparse, collections, hashlib, json, re, sqlite3, struct, tempfile
from pathlib import Path
from acnh_formats import decompress, parse_sarc

LOCALES = ("JPja","USen","USes","USfr","EUen","EUes","EUfr","EUde","EUit","EUnl","EUru","KRko","CNzh","TWzh")
ROM = Path("e10617820db06889e1638499478da0de_NCA/1/Message")
CATEGORIES = {"TalkNNpc":1,"TalkSNpc":2}
def require(ok, message):
    if not ok:
        raise ValueError(message)
def sha(b): return hashlib.sha256(b).hexdigest()
def label_hash(b):
    h=0
    for v in b:
        h=(1170*h+v)&0xffffffff
    return h
def parse(data):
    require(len(data)>=32 and data[:8]==b"MsgStdBn","MSBT header")
    order={b"\xff\xfe":"little",b"\xfe\xff":"big"}.get(data[8:10])
    require(order is not None,"BOM")
    def number(b,p,n=4):
        require(0<=p<=len(b)-n,"numeric bounds")
        return int.from_bytes(b[p:p+n],order)
    count=number(data,14,2); require(count<=64,"section count")
    encoding=data[12]; at=32; sections={}
    for _ in range(count):
        require(at+16<=len(data),"section header")
        tag=data[at:at+4].decode("ascii"); size=number(data,at+4)
        require(tag not in sections and at+16+size<=len(data),"section bounds or duplicate")
        sections[tag]=data[at+16:at+16+size]
        at=(at+16+size+15)&~15
    require("LBL1" in sections and "TXT2" in sections,"missing LBL1/TXT2")
    txt=sections["TXT2"]; n=number(txt,0)
    require(n<=200000 and 4+4*n<=len(txt),"TXT2 count")
    offsets=[number(txt,4+4*i) for i in range(n)]+[len(txt)]
    require(all(4+4*n<=a<=b<=len(txt) for a,b in zip(offsets,offsets[1:])),"TXT2 offsets")
    strings=[txt[a:b] for a,b in zip(offsets,offsets[1:])]
    lbl=sections["LBL1"]; buckets=number(lbl,0)
    require(0<buckets<=100000 and 4+8*buckets<=len(lbl),"LBL1 groups")
    labels=[]; used=set(); bucket_mismatch=0
    for g in range(buckets):
        m=number(lbl,4+8*g); p=number(lbl,8+8*g)
        require(m<=200000 and 4+8*buckets<=p<=len(lbl),"LBL1 group bounds")
        for _ in range(m):
            k=number(lbl,p,1); end=p+1+k
            require(end+4<=len(lbl),"LBL1 entry bounds")
            raw=lbl[p+1:end]; name=raw.decode("utf-8","strict"); index=number(lbl,end)
            require(index<n and name not in used,"invalid index or duplicate label")
            used.add(name); h=label_hash(raw); bucket_mismatch+=h%buckets!=g
            labels.append((name,index,g,h)); p=end+4
    atr=sections.get("ATR1"); attrs=[]; stride=None; atr_count=None; trailing=None
    if atr is not None:
        atr_count=number(atr,0); stride=number(atr,4)
        require(atr_count<=200000 and stride<=4096 and 8+atr_count*stride<=len(atr),"ATR1 bounds")
        attrs=[atr[8+i*stride:8+(i+1)*stride] for i in range(atr_count)]
        trailing=len(atr)-8-atr_count*stride
    return dict(order=order,encoding=encoding,sections={k:len(v) for k,v in sections.items()},
                strings=strings,labels=labels,buckets=buckets,bucket_mismatch=bucket_mismatch,
                attrs=attrs,stride=stride,atr_count=atr_count,atr_trailing=trailing)
def schema_fields(attr,schema,order):
    if attr is None or not 0<len(attr)<={1:8,2:4}[schema]:
        return None,None,None
    mode_pos={1:2,2:0}[schema]
    # Schema 1: A+4 u16, A+6 mode, A+8 auxiliary.
    # Schema 2: A+C mode, A+E auxiliary. Do not interpret leading u16 as an ID.
    # Both readers copy exactly ATR1 stride, zero-fill only when consumer had zeroed storage.
    value=int.from_bytes(attr[:2],order) if schema==1 and len(attr)>=2 else None
    mode=attr[mode_pos] if len(attr)>mode_pos else None
    aux_pos={1:4,2:2}[schema]
    aux=attr[aux_pos] if len(attr)>aux_pos else None
    return value,mode,aux
def selftest():
    for order,bom in [("little",b"\xff\xfe"),("big",b"\xfe\xff")]:
        def p(v,n=4):return v.to_bytes(n,order)
        def section(tag,b):
            x=tag+p(len(b))+bytes(8)+b
            return x+bytes((-len(x))%16)
        names=[b"001_a",b"alias",b"012"]; group=b"".join(p(len(x),1)+x+p(i) for x,i in zip(names,[0,0,1]))
        lbl=p(1)+p(3)+p(12)+group
        a=p(12,2)+bytes([1,0,3,0,0,0]); atr=p(2)+p(8)+a+bytes(8)
        s1="A".encode("utf-16-"+("le" if order=="little" else "be"))+bytes(2)
        txt=p(2)+p(12)+p(12+len(s1))+s1+bytes(2)
        head=bytearray(32);head[:8]=b"MsgStdBn";head[8:10]=bom;head[12]=1;head[14:16]=p(3,2)
        raw=bytes(head)+section(b"LBL1",lbl)+section(b"ATR1",atr)+section(b"TXT2",txt)
        d=parse(raw);assert len(d["labels"])==3 and len(d["strings"])==2 and d["labels"][1][1]==0
        assert schema_fields(d["attrs"][0],1,order)==(12,1,3)
        assert schema_fields(bytes([4,0,9,0]),2,order)==(None,4,9)
        try:parse(raw[:50])
        except ValueError:pass
        else:raise AssertionError("truncation accepted")
    print("synthetic selftest passed (LE/BE, aliases, attributes, truncation)")
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    dbpath=out/"dialogue_msbt.sqlite3"
    require(not dbpath.exists(),"refuse overwrite existing database")
    db=sqlite3.connect(dbpath)
    db.executescript("""
    CREATE TABLE archives(id INTEGER PRIMARY KEY, category TEXT, locale TEXT, path TEXT, sha256 TEXT, compressed_bytes INTEGER, members INTEGER, UNIQUE(category,locale));
    CREATE TABLE files(id INTEGER PRIMARY KEY, archive_id INTEGER REFERENCES archives(id), name TEXT, sha256 TEXT, schema INTEGER, byteorder TEXT, encoding INTEGER, sections_json TEXT, labels INTEGER, texts INTEGER, atr_count INTEGER, atr_stride INTEGER, atr_trailing INTEGER, bucket_mismatch INTEGER, UNIQUE(archive_id,name));
    CREATE TABLE messages(file_id INTEGER REFERENCES files(id), idx INTEGER, attr BLOB, text_raw BLOB, attr_u16 INTEGER, choice_mode INTEGER, auxiliary INTEGER, PRIMARY KEY(file_id,idx));
    CREATE TABLE labels(file_id INTEGER REFERENCES files(id), label TEXT, idx INTEGER, bucket INTEGER, hash INTEGER, PRIMARY KEY(file_id,label));
    CREATE TABLE attribute_edges(file_id INTEGER REFERENCES files(id), source_label TEXT, source_idx INTEGER, value INTEGER, target_label TEXT, target_idx INTEGER, source_is_choice_suffix INTEGER, PRIMARY KEY(file_id,source_label));
    CREATE TABLE errors(archive_id INTEGER, member TEXT, error TEXT);
    """)
    report={"schema":"acnh303_dialogue_msbt_audit_v1","runtime_verified":False,"production_eligible":False,"archives":[],"schema_fields":{"1":{"u16":0,"mode":2,"auxiliary":4,"max_stride":8},"2":{"u16":None,"mode":0,"auxiliary":2,"max_stride":4}}}
    for category,schema in CATEGORIES.items():
        for locale in LOCALES:
            path=ROM/(category+"_"+locale+".sarc.zs")
            raw=(root/path).read_bytes(); blob,method=decompress(raw,limit=128*1024*1024)
            _,members=parse_sarc(blob)
            aid=db.execute("INSERT INTO archives(category,locale,path,sha256,compressed_bytes,members) VALUES(?,?,?,?,?,?)",(category,locale,str(path),sha(raw),len(raw),len(members))).lastrowid
            stat=collections.Counter(); strides=collections.Counter(); modes=collections.Counter()
            for name,b in members:
                if not name.lower().endswith(".msbt"):
                    stat["non_msbt"]+=1;continue
                try:
                    d=parse(b); n=len(d["strings"]); a=d["attrs"]; stride=d["stride"]
                    # STR_Select_Talk etc. would override archive schema; do not misclassify.
                    basename=Path(name).stem
                    effective=6 if basename in ("STR_Select_Talk","CmnSubWin") else 7 if basename in ("NookMilage_Keyword_Modifier","NookMilage_Keyword_Noun") else schema
                    with db:
                        fid=db.execute("INSERT INTO files(archive_id,name,sha256,schema,byteorder,encoding,sections_json,labels,texts,atr_count,atr_stride,atr_trailing,bucket_mismatch) VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?)",(aid,name,sha(b),effective,d["order"],d["encoding"],json.dumps(d["sections"]),len(d["labels"]),n,d["atr_count"],stride,d["atr_trailing"],d["bucket_mismatch"])).lastrowid
                        fields=[]
                        for i,t in enumerate(d["strings"]):
                            attr=a[i] if i<len(a) else None
                            v,m,x=schema_fields(attr,effective,d["order"]) if effective in (1,2) else (None,None,None)
                            fields.append((fid,i,attr,t,v,m,x))
                        # Preserve ATR records even if count differs from TXT2.
                        fields.extend((fid,i,a[i],None,*((schema_fields(a[i],effective,d["order"])) if effective in (1,2) else (None,None,None))) for i in range(n,len(a)))
                        db.executemany("INSERT INTO messages VALUES(?,?,?,?,?,?,?)",fields)
                        db.executemany("INSERT INTO labels VALUES(?,?,?,?,?)",[(fid,*v) for v in d["labels"]])
                        lookup={label:i for label,i,_,_ in d["labels"]}
                        edges=[]
                        for label,i,_,_ in d["labels"]:
                            v=fields[i][4]
                            if v not in (None,0):
                                target=f"{v:03d}"
                                edges.append((fid,label,i,v,target,lookup.get(target),int(bool(re.fullmatch(r"\d{3,}(?:_\d{2,})?_[a-z]",label)))))
                        db.executemany("INSERT INTO attribute_edges VALUES(?,?,?,?,?,?,?)",edges)
                    stat["parsed"]+=1;stat["labels"]+=len(d["labels"]);stat["texts"]+=n
                    stat["alias_excess"]+=len(d["labels"])-len({x[1] for x in d["labels"]})
                    stat["bucket_mismatch"]+=d["bucket_mismatch"]
                    stat["atr_count_mismatch"]+=d["atr_count"] is not None and d["atr_count"]!=n
                    stat["missing_atr"]+=stride is None
                    stat["nonzero_schema1_label_candidates"]+=len(edges)
                    stat["same_file_target_hits"]+=sum(e[5] is not None for e in edges)
                    stat["choice_suffix_candidates"]+=sum(e[6] for e in edges)
                    stat["choice_suffix_target_hits"]+=sum(e[6] and e[5] is not None for e in edges)
                    strides[str(stride)]+=1
                    modes.update(str(row[5]) for row in fields if row[5] is not None)
                except Exception as exc:
                    stat["failed"]+=1
                    db.execute("INSERT INTO errors VALUES(?,?,?)",(aid,name,f"{type(exc).__name__}: {str(exc)[:500]}"))
            db.commit()
            report["archives"].append({"category":category,"locale":locale,"sha256":sha(raw),"method":method,"members":len(members),"stats":dict(stat),"atr_stride_files":dict(strides),"choice_mode_records":dict(modes)})
            print(category,locale,dict(stat),flush=True)
    db.executescript("""
    CREATE INDEX label_lookup ON labels(label);
    CREATE INDEX file_lookup ON files(name,archive_id);
    CREATE INDEX edge_targets ON attribute_edges(value,target_idx);
    """)
    report["integrity"]=db.execute("PRAGMA quick_check").fetchone()[0]
    report["totals"]={k:db.execute("SELECT count(*) FROM "+k).fetchone()[0] for k in ("archives","files","messages","labels","attribute_edges","errors")}
    report["cross_locale_attribute_comparison"]=db.execute("""SELECT a.category,count(*),sum(CASE WHEN m.attr IS n.attr THEN 1 ELSE 0 END)
      FROM archives a JOIN files f ON f.archive_id=a.id JOIN labels l ON l.file_id=f.id JOIN messages m ON m.file_id=l.file_id AND m.idx=l.idx
      JOIN archives b ON b.category=a.category AND b.locale='JPja' JOIN files g ON g.archive_id=b.id AND g.name=f.name
      JOIN labels k ON k.file_id=g.id AND k.label=l.label JOIN messages n ON n.file_id=k.file_id AND n.idx=k.idx
      WHERE a.locale<>'JPja' GROUP BY a.category""").fetchall()
    report["edge_examples"]=db.execute("""SELECT a.locale,f.name,e.source_label,e.value,e.target_label,e.target_idx
      FROM attribute_edges e JOIN files f ON f.id=e.file_id JOIN archives a ON a.id=f.archive_id
      WHERE a.locale='CNzh' AND e.source_is_choice_suffix=1 AND e.target_idx IS NOT NULL ORDER BY f.name,e.source_label LIMIT 30""").fetchall()
    report["special_npc_file_candidates"]=db.execute("""SELECT DISTINCT f.name FROM files f JOIN archives a ON a.id=f.archive_id
      WHERE a.category='TalkSNpc' AND a.locale='CNzh' AND (lower(f.name) LIKE '%airport%' OR lower(f.name) LIKE '%dodo%' OR lower(f.name) LIKE '%pilot%' OR lower(f.name) LIKE '%flight%') ORDER BY f.name""").fetchall()
    db.close()
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    require(report["integrity"]=="ok","database integrity")
    require(report["totals"]["archives"]==28 and report["totals"]["errors"]==0,"incomplete archive audit; inspect report")
    require(all(not x["stats"].get("bucket_mismatch") for x in report["archives"]),"label hash mismatch")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--selftest",action="store_true");p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,default=Path("artifacts/acnh303-dialogue-msbt"));a=p.parse_args()
    if a.selftest:selftest()
    else:run(a.root,a.out)
