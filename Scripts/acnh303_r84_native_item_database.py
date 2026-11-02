#!/usr/bin/env python3
"""R84 ACNH 3.0.3 item raw fields, original file existence, remake joins.

Evidence tiers: exact ROM bytes / exact Git file path / joined native item ID /
unverified in-game runtime. Do not promote a tier without an appropriate test.
"""
import argparse,csv,hashlib,json,sqlite3,shutil,subprocess
from collections import defaultdict
from pathlib import Path
import zstandard
NCA="e10617820db06889e1638499478da0de_NCA/1"
ID="hash_54706054"
def sha(b):return hashlib.sha256(b).hexdigest()
def csvout(p,h,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(h);w.writerows(rows)
def main(root,out,baseline):
    root=root.resolve();out=out.resolve();out.mkdir(parents=True,exist_ok=True)
    dec=root/"UnPack/1/Bcsv";raw=root/NCA/"Bcsv"
    schema=json.loads((dec/"ItemParam.json").read_text("utf-8"))
    fields=schema["columns"]
    assert schema["row_count"]==11178 and schema["row_size"]==548 and len(fields)==107
    hashes=["hash_"+c["crc32"] for c in fields]
    src=(dec/"ItemParam.csv").read_bytes()
    assert sha(src)=="ff4637555a07a649070b19677b3c633c853d3ada7c784bb4de4cf35ca5ba26f0"
    rom=(raw/"ItemParam.bcsv").read_bytes();native_sha=sha(rom)
    rows={}
    with (dec/"ItemParam.csv").open(encoding="utf-8-sig",newline="") as f:
        for r in csv.DictReader(f):
            ident=int(r[ID]);idx=int(r["_row_index"]);off=int(r["_row_offset_raw"])
            assert idx==len(rows) and off>=0 and off+548<=len(rom)
            data=rom[off:off+548]
            pos=next(c["offset"] for c in fields if "hash_"+c["crc32"]==ID)
            assert int.from_bytes(data[pos:pos+2],"little")==ident,(ident,idx)
            assert ident not in rows
            values={h:r[h] for h in hashes}
            hexes={h:data[c["offset"]:c["offset"]+c["width_hint"]].hex() for h,c in zip(hashes,fields)}
            rows[ident]=(idx,off,sha(data),values,hexes)
    assert len(rows)==11178
    rm=defaultdict(list)
    with (dec/"ItemRemake.csv").open(encoding="utf-8-sig",newline="") as f:
        for r in csv.DictReader(f):
            if r[ID].isdigit():rm[int(r[ID])].append(int(r["_row_index"]))
    cmd=["git","-C",str(root),"ls-tree","-r","-z","--name-only","HEAD","--",f"{NCA}/Model","assets/images/items"]
    native_paths=set(x.decode("utf-8") for x in subprocess.check_output(cmd).split(b"\0") if x)
    asset_variants=defaultdict(list)
    for p in native_paths:
        if p.startswith("assets/images/items/") and "_Remake_" in p and p.endswith(".png"):
            asset_variants[p.split("/")[-1].split("_Remake_",1)[0]].append(p)
    dbfile=out/"r84-acnh303-item-native.sqlite3"
    with baseline.open("rb") as f,dbfile.open("wb") as g:
        if baseline.suffix==".zst":zstandard.ZstdDecompressor().copy_stream(f,g)
        else:shutil.copyfileobj(f,g)
    db=sqlite3.connect(dbfile)
    db.execute("PRAGMA foreign_keys=ON")
    itemlist=db.execute("SELECT id,res_name,original_kind,base_kind FROM item ORDER BY id").fetchall()
    assert {r[0] for r in itemlist}==set(rows)
    db.executescript("""
    CREATE TABLE IF NOT EXISTS item_r84_raw107(
     item_id INTEGER PRIMARY KEY REFERENCES item(id), original_row_index INTEGER NOT NULL UNIQUE,
     original_row_offset INTEGER NOT NULL UNIQUE, row_sha256 TEXT NOT NULL,
     raw_values_json TEXT NOT NULL, raw_field_hex_json TEXT NOT NULL,
     native_rom_sha256 TEXT NOT NULL, decoded_csv_sha256 TEXT NOT NULL, id_bytes_checked INTEGER NOT NULL);
    CREATE TABLE IF NOT EXISTS item_r84_asset_paths(
     item_id INTEGER PRIMARY KEY REFERENCES item(id), rom_model_path TEXT, rom_model_exists INTEGER NOT NULL,
     rom_ftricon_path TEXT,rom_ftricon_exists INTEGER NOT NULL,
     original_png_path TEXT, original_png_exists INTEGER NOT NULL,
     remake_png_variants INTEGER NOT NULL,
     native_BNTX_texture_verified INTEGER, runtime_icon_selection_verified INTEGER,
     evidence TEXT NOT NULL);
    CREATE TABLE IF NOT EXISTS item_r84_remake(
     item_id INTEGER PRIMARY KEY REFERENCES item(id),native_row_indices_json TEXT NOT NULL,
     native_row_count INTEGER NOT NULL, exact_item_id_join INTEGER NOT NULL,
     runtime_default_variant_verified INTEGER, runtime_replacement_verified INTEGER);
    CREATE TABLE IF NOT EXISTS item_r84_runtime(
     item_id INTEGER PRIMARY KEY REFERENCES item(id),pickup_verified INTEGER,drop_verified INTEGER,
     multiplayer_transfer_verified INTEGER,save_verified INTEGER,
     native_test_trace TEXT, status TEXT NOT NULL);
    """)
    for table in ("item_r84_raw107","item_r84_asset_paths","item_r84_remake","item_r84_runtime"):
        db.execute("DELETE FROM "+table)
    wide=[];assets=[];remakes=[]
    for ident,res,kind,basekind in itemlist:
        idx,off,rsha,values,hexes=rows[ident]
        db.execute("INSERT INTO item_r84_raw107 VALUES(?,?,?,?,?,?,?,?,1)",
         (ident,idx,off,rsha,json.dumps(values,ensure_ascii=False),json.dumps(hexes),
          native_sha,sha(src)))
        wide.append([ident,idx,off,rsha]+[values[h] for h in hashes])
        model=f"{NCA}/Model/{res}.Nin_NX_NVN.zs"
        icon=f"{NCA}/Model/Layout_FtrIcon_{res}.Nin_NX_NVN.zs"
        png=f"assets/images/items/{res}.png"
        mo,ic,pg=(int(x in native_paths) for x in (model,icon,png))
        n=len(asset_variants.get(res,[]));rr=rm.get(ident,[])
        db.execute("INSERT INTO item_r84_asset_paths VALUES(?,?,?,?,?,?,?,?,NULL,NULL,?)",
         (ident,model if mo else None,mo,icon if ic else None,ic,png if pg else None,pg,n,
          "exact_repository_path_only;BNTX_contents_and_runtime_icon_UNVERIFIED"))
        db.execute("INSERT INTO item_r84_remake VALUES(?,?,?,?,NULL,NULL)",
          (ident,json.dumps(rr),len(rr),int(bool(rr))))
        db.execute("INSERT INTO item_r84_runtime VALUES(?,NULL,NULL,NULL,NULL,NULL,?)",
          (ident,"no_native_runtime_trace"))
        assets.append([ident,res,mo,model if mo else "",ic,icon if ic else "",pg,png if pg else "",n,"unverified"])
        remakes.append([ident,res,len(rr),";".join(str(z) for z in rr),"unverified"])
    csvout(out/"r84-itemparam-original-107-fields.csv",
       ["item_id","native_row_index","native_row_offset","native_row_sha256"]+hashes,wide)
    csvout(out/"r84-original-model-icon-source-audit.csv",
       ["item_id","res_name","model_exists","model_original_path","icon_exists","icon_original_path","png_exists","png_path","variant_png_count","runtime_texture_verified"],assets)
    csvout(out/"r84-itemremake-ID-mapping.csv",
       ["item_id","res_name","remake_row_count","remake_original_rows","runtime_default_variant_verified"],remakes)
    with (out/"r84-field-hash-dictionary.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.writer(f);w.writerow(["field_hash","row_offset","byte_width","verified_semantics","original_path"])
        for c in fields:
            h="hash_"+c["crc32"]
            sem=("ItemId_u16_verified" if h==ID else "ResName_verified" if h=="hash_3FEBC642" else "unknown_keep_raw")
            w.writerow([h,c["offset"],c["width_hint"],sem,f"{NCA}/Bcsv/ItemParam.bcsv"])
    report={"version":"3.0.3","round":"R84","item_count":len(rows),"original_field_count":len(fields),
        "id_byte_verified_rows":len(rows),"original_bcsv_sha256":native_sha,"original_csv_sha256":sha(src),
        "remake_native_id_joined":sum(bool(rm.get(i)) for i in rows),
        "model_paths_present":sum(x[2] for x in assets),"icon_source_paths_present":sum(x[4] for x in assets),
        "committed_png_paths_present":sum(x[6] for x in assets),
        "original_BNTX_texture_content_verified":0,"native_runtime_restrictions_verified":0,
        "reason":"static-only evidence; still needs BNTX extraction and in-game traces"}
    assert db.execute("SELECT count(*) FROM item_r84_raw107").fetchone()[0]==11178
    assert db.execute("PRAGMA integrity_check").fetchone()[0]=="ok"
    db.commit();db.close()
    (out/"r84-evidence-summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    compressed=dbfile.with_suffix(".sqlite3.zst")
    with dbfile.open("rb") as f,compressed.open("wb") as g:
        zstandard.ZstdCompressor(level=10,write_checksum=True).copy_stream(f,g)
    # Avoid putting an uncompressed >180 MB SQLite into the GitHub artifact.
    dbfile.unlink()
    print(json.dumps(report,ensure_ascii=False))
if __name__=="__main__":
    p=argparse.ArgumentParser()
    p.add_argument("--repo-root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("assets/evidence/rom-database/r84"))
    p.add_argument("--baseline",type=Path,default=Path("assets/evidence/rom-database/r82-acnh303-villager-provenance.sqlite3.zst"))
    a=p.parse_args();main(a.repo_root,a.out,a.baseline)
