#!/usr/bin/env python3
"""Revalidate the pinned native dictionary and export every original ItemParam category."""
import argparse,collections,csv,json,sqlite3,zlib
from pathlib import Path
from acnh303_hash008e import bcsv,require,gitblob
from acnh303_hash008i import run as extract_native,murmur
def run(root,out):
    out.mkdir(parents=True,exist_ok=True)
    pinned=json.loads((root/"research/hash008j/mail_category_dictionary.json").read_text())
    native=out/"native";extract_native(root,native)
    actual=json.loads((native/"category_names.json").read_text())
    groups=json.loads((native/"group_bitmaps.json").read_text())
    require(actual==pinned["categories"],"native dictionary drift")
    by_crc={int(c["crc32"],16):c for c in actual}
    by_murmur={int(c["murmur3"],16):c for c in actual}
    require(len(actual)==len(by_crc)==len(by_murmur)==79,"category uniqueness")
    for i,c in enumerate(actual):
        require(c["index"]==i and c["bitmap_byte"]==i//8 and c["bitmap_mask"]==1<<(i%8),"bitmap layout")
        b=c["name"].encode("ascii")
        require(zlib.crc32(b)==int(c["crc32"],16) and murmur(b)==int(c["murmur3"],16),"hash disagreement")
    b,n,w,cols,val,string,width=bcsv(root,"ItemParam")
    require(n==11178 and gitblob(b)==pinned["source"]["itemparam_git_blob"],"ItemParam identity")
    rows=[];unmapped=collections.Counter();unknown_kinds=collections.defaultdict(collections.Counter);ids=set()
    for i in range(n):
        iid=val(i,"54706054",2);require(iid not in ids,"duplicate item");ids.add(iid)
        raw=val(i,"70E19913",4);c=by_crc.get(raw)
        kind=string(i,"FC275E86");model=string(i,"48EF0398")
        row={"item_id":iid,"row":i,"kind":kind,"model":model,"category_raw":f"{raw:08X}","category_index":c["index"] if c else None,"category_name":c["name"] if c else None,"category_murmur3":c["murmur3"] if c else None,"status":"matched_crc32" if c else "unmapped_raw"}
        if not c:unmapped[row["category_raw"]]+=1;unknown_kinds[row["category_raw"]][kind]+=1
        rows.append(row)
    actual_counts=collections.Counter(r["category_index"] for r in rows)
    require(all(actual_counts[c["index"]]==c["itemparam_crc_count"] for c in actual),"per-category counts")
    require(actual_counts[None]==2452 and len(unmapped)==1,"unmapped distribution drift")
    resolved_groups=[]
    for g,pg in zip(groups,pinned["groups"],strict=True):
        idx=[r["matches"][0]["index"] for r in g["refs"] if len(r["matches"])==1]
        require(len(idx)==len(g["refs"]) and idx==pg["category_indices"] and g["bitmap_hex"]==pg["bitmap_hex"],"group mapping drift")
        bitmap=bytes.fromhex(g["bitmap_hex"])
        require(len(bitmap)==10 and [i for i in range(80) if bitmap[i//8]&(1<<(i%8))]==sorted(idx),"bitmap mismatch")
        members=[r["item_id"] for r in rows if r["category_index"] in idx]
        require(len(members)==pg["itemparam_crc_count"],"group count mismatch")
        resolved_groups.append({**pg,"item_ids":members})
    summary={"item_count":len(rows),"category_count":len(actual),"matched_item_count":len(rows)-actual_counts[None],"unmapped_item_count":actual_counts[None],"unmapped_raw_counts":dict(unmapped),"unmapped_kind_counts":{k:dict(v) for k,v in unknown_kinds.items()},"unmapped_examples":[r for r in rows if r["status"]=="unmapped_raw"][:20],"none_count":actual_counts[0],"group_counts":[{"id":g["id"],"count":len(g["item_ids"])} for g in resolved_groups]}
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n")
    (out/"group_members.json").write_text(json.dumps(resolved_groups,ensure_ascii=False,indent=2)+"\n")
    with (out/"item_categories.csv").open("w",encoding="utf-8",newline="") as f:
        writer=csv.DictWriter(f,fieldnames=list(rows[0]));writer.writeheader();writer.writerows(rows)
    with sqlite3.connect(out/"mail_categories.sqlite3") as db:
        db.execute("PRAGMA foreign_keys=ON")
        db.executescript("""CREATE TABLE category(idx INTEGER PRIMARY KEY,name TEXT UNIQUE NOT NULL,crc32 TEXT UNIQUE NOT NULL,murmur3 TEXT UNIQUE NOT NULL,bitmap_byte INTEGER NOT NULL,bitmap_mask INTEGER NOT NULL,item_count INTEGER NOT NULL);
CREATE TABLE item(item_id INTEGER PRIMARY KEY,row_index INTEGER UNIQUE NOT NULL,kind TEXT,model TEXT,category_raw TEXT NOT NULL,category_index INTEGER REFERENCES category(idx),status TEXT NOT NULL);
CREATE TABLE mail_group(id INTEGER PRIMARY KEY,label TEXT NOT NULL,bitmap BLOB NOT NULL);
CREATE TABLE mail_group_category(group_id INTEGER REFERENCES mail_group(id),category_index INTEGER REFERENCES category(idx),PRIMARY KEY(group_id,category_index));
CREATE INDEX item_category_idx ON item(category_index);
CREATE VIEW item_category_dictionary AS SELECT i.*,c.name,c.crc32,c.murmur3 FROM item i LEFT JOIN category c ON i.category_index=c.idx;
CREATE VIEW mail_group_item AS SELECT g.group_id,i.item_id FROM mail_group_category g JOIN item i ON i.category_index=g.category_index;""")
        db.executemany("INSERT INTO category VALUES(?,?,?,?,?,?,?)",((c["index"],c["name"],c["crc32"],c["murmur3"],c["bitmap_byte"],c["bitmap_mask"],c["itemparam_crc_count"]) for c in actual))
        db.executemany("INSERT INTO item VALUES(?,?,?,?,?,?,?)",((r["item_id"],r["row"],r["kind"],r["model"],r["category_raw"],r["category_index"],r["status"]) for r in rows))
        db.executemany("INSERT INTO mail_group VALUES(?,?,?)",((g["id"],g["label"],bytes.fromhex(g["bitmap_hex"])) for g in resolved_groups))
        db.executemany("INSERT INTO mail_group_category VALUES(?,?)",((g["id"],i) for g in resolved_groups for i in g["category_indices"]))
        require(db.execute("PRAGMA integrity_check").fetchone()[0]=="ok" and not db.execute("PRAGMA foreign_key_check").fetchall(),"SQLite integrity")
    print("ITEM_CATEGORY_SUMMARY",json.dumps(summary,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True);a=p.parse_args();run(a.root.resolve(),a.out.resolve())
