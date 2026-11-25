#!/usr/bin/env python3
"""Pack and restore the validated MSBT SQLite and CSV artifact losslessly."""
import argparse,gzip,hashlib,json,shutil,sqlite3
from pathlib import Path
BLOCK=32*1024*1024
def sha(p):
    with p.open("rb") as f:return hashlib.file_digest(f,"sha256").hexdigest()
def compress(src,dst):
    with src.open("rb") as f,dst.open("wb") as g:
        with gzip.GzipFile(filename="",fileobj=g,mode="wb",mtime=0,compresslevel=5) as z:shutil.copyfileobj(f,z)
    with gzip.open(dst,"rb") as f:
        if hashlib.file_digest(f,"sha256").hexdigest()!=sha(src):raise ValueError("CSV mismatch")
def pack(src,dst):
    dst.mkdir(parents=True,exist_ok=True);manifest={"source_run":45573308371,"source_artifact":15003017972,"files":{},"sqlite_parts":[]}
    summary=json.loads((src/"summary.json").read_text())
    if summary["stats"]["entries"]!=1686972 or summary["sqlite_integrity"]!="ok":raise ValueError("artifact baseline")
    csvs=sorted(src.rglob("*.csv"))
    if len(list((src/"entries").glob("*.csv")))!=154:raise ValueError("archive coverage")
    for p in csvs:
        rel=p.relative_to(src);q=dst/rel;q.parent.mkdir(parents=True,exist_ok=True)
        if rel.parts[0]=="entries" or p.name in ("label.csv","control.csv","binding.csv"):
            q=q.with_suffix(".csv.gz");compress(p,q)
        else:shutil.copyfile(p,q)
        if q.stat().st_size>=95*1024*1024:raise ValueError("Git file limit "+str(q))
        manifest["files"][str(q.relative_to(dst))]={"csv_sha256":sha(p),"stored_sha256":sha(q)}
    db=src/"message.sqlite3"
    with sqlite3.connect("file:"+str(db.resolve())+"?mode=ro",uri=True) as conn:
        if conn.execute("PRAGMA integrity_check").fetchone()[0]!="ok":raise ValueError("DB integrity")
        if conn.execute("SELECT count(*) FROM entry").fetchone()[0]!=1686972:raise ValueError("DB count")
    manifest["sqlite_sha256"]=sha(db);manifest["sqlite_bytes"]=db.stat().st_size
    folder=dst/"database";folder.mkdir(exist_ok=True);digest=hashlib.sha256()
    with db.open("rb") as f:
        i=0
        while b:=f.read(BLOCK):
            q=folder/f"message.sqlite3.part-{i:04d}.gz"
            with q.open("wb") as g:
                with gzip.GzipFile(filename="",mode="wb",fileobj=g,mtime=0,compresslevel=5) as z:z.write(b)
            with gzip.open(q,"rb") as z:back=z.read()
            if back!=b:raise ValueError("SQLite block")
            digest.update(back)
            manifest["sqlite_parts"].append({"path":str(q.relative_to(dst)),"stored_sha256":sha(q),"raw_bytes":len(b),"raw_sha256":hashlib.sha256(b).hexdigest()});i+=1
    if digest.hexdigest()!=manifest["sqlite_sha256"]:raise ValueError("SQLite roundtrip")
    shutil.copyfile(src/"summary.json",dst/"summary.json")
    (dst/"manifest.json").write_text(json.dumps(manifest,indent=2)+"\n")
    print(json.dumps({"csv_files":len(csvs),"sqlite_parts":len(manifest["sqlite_parts"]),"sqlite_bytes":manifest["sqlite_bytes"],"sqlite_sha256":manifest["sqlite_sha256"],"roundtrip":"ok"}))
def restore(src,dest):
    m=json.loads((src/"manifest.json").read_text());digest=hashlib.sha256()
    with dest.open("xb") as f:
        for x in m["sqlite_parts"]:
            p=src/x["path"]
            if sha(p)!=x["stored_sha256"]:raise ValueError("stored hash")
            with gzip.open(p,"rb") as z:b=z.read()
            if len(b)!=x["raw_bytes"] or hashlib.sha256(b).hexdigest()!=x["raw_sha256"]:raise ValueError("raw hash")
            f.write(b);digest.update(b)
    if digest.hexdigest()!=m["sqlite_sha256"]:raise ValueError("restored DB SHA")
    with sqlite3.connect("file:"+str(dest.resolve())+"?mode=ro",uri=True) as c:
        if c.execute("pragma integrity_check").fetchone()[0]!="ok":raise ValueError("DB integrity")
    print("Restored and validated",dest)
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("mode",choices=["pack","restore"]);p.add_argument("source",type=Path);p.add_argument("destination",type=Path);a=p.parse_args();(pack if a.mode=="pack" else restore)(a.source,a.destination)
