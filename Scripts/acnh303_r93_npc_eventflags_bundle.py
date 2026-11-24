#!/usr/bin/env python3
"""R93: reproducible, read-only raw/decoded/processed/integrated NPC flag bundle."""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import shutil
from acnh_formats import parse_bcsv

BUNDLE = Path("derived/3.0.3/npc_event_flags")
COUNTS = {"EventFlagsNpcMemoryParam": 167, "EventFlagsNpcSaveParam": 65,
          "EventFlagsNpcTempParam": 72, "EventFlagsPlayerActivityParam": 67}
FIELDS = ("table", "scope", "unique_id", "row_index", "row_offset", "key",
          "description_ja", "raw_fields_json", "actual_value")

def check(condition, message):
    if not condition:
        raise ValueError(message)

def digest(data):
    return hashlib.sha256(data).hexdigest()

def git_blob_sha(data):
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()

def read_json(path):
    return json.loads(path.read_text(encoding="utf-8"))

def write_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")

def read_csv(path):
    with path.open(encoding="utf-8-sig", newline="") as stream:
        return list(csv.DictReader(stream))

def csv_rows(records):
    return [{**{k: "" if r[k] is None else str(r[k])
                for k in FIELDS if k != "raw_fields_json"},
             "raw_fields_json": json.dumps(r["raw_fields"], ensure_ascii=False, separators=(",", ":"))}
            for r in records]

def run(root, out, verify):
    bundle = root / BUNDLE
    manifest = read_json(bundle / "source_manifest.json")
    check(manifest["game_version"] == "3.0.3" and
          {t["table"]: t["rows"] for t in manifest["tables"]} == COUNTS,
          "Expected 3.0.3 source manifest and counts")
    check(out.resolve() != bundle.resolve(), "Output must be separate from committed evidence")
    check(not out.exists() or not any(out.iterdir()), "Use an empty output directory")
    out.mkdir(parents=True, exist_ok=True)
    combined, audit = [], []
    for t in manifest["tables"]:
        name, scope = t["table"], t["scope"]
        raw_path = root / t["original_path"]
        raw = raw_path.read_bytes()
        check(len(raw) == t["original_size"] and git_blob_sha(raw) == t["original_git_blob_sha1"],
              f"{name}: immutable original blob/size mismatch")
        csv_path = root / t["decoded_csv_path"]
        meta_path = root / t["decoded_metadata_path"]
        check(git_blob_sha(csv_path.read_bytes()) == t["decoded_csv_git_blob_sha1"] and
              git_blob_sha(meta_path.read_bytes()) == t["decoded_metadata_git_blob_sha1"],
              f"{name}: decoded source blob mismatch")
        check((bundle/"raw"/(name+".bcsv")).read_bytes() == raw, f"{name}: packaged raw mismatch")
        for ext, source in (("csv", csv_path), ("json", meta_path)):
            check((bundle/"decoded"/(name+"."+ext)).read_bytes() == source.read_bytes(),
                  f"{name}: packaged decoded mismatch {ext}")
        meta, rows = parse_bcsv(raw)
        existing = read_csv(csv_path)
        check(meta == read_json(meta_path), f"{name}: regenerated metadata mismatch")
        check(len(rows) == len(existing) == t["rows"] and meta["row_size"] == t["row_size"] and
              meta["column_count"] == t["columns"], f"{name}: dimensions mismatch")
        check([{k:str(v) for k,v in r.items()} for r in rows] == existing,
              f"{name}: re-decoded original CSV differs from committed source")
        results = []
        start = 28 + 8*meta["column_count"]
        field_cells = 0
        for i, row in enumerate(rows):
            offset = start + i*meta["row_size"]
            check(int(row["_row_index"]) == i and int(row["_row_offset_raw"]) == offset,
                  f"{name}: original row offset {i}")
            field_values = {k:v for k,v in row.items() if k.startswith("hash_")}
            check(len(field_values) == t["columns"], f"{name}: field count {i}")
            field_cells += len(field_values)
            results.append(dict(table=name,scope=scope,unique_id=int(row["hash_54706054"]),
                                row_index=i,row_offset=offset,key=row["hash_45F320F2"],
                                description_ja=row["hash_85CF1615"],raw_fields=field_values,
                                actual_value=None))
        check(len({r["unique_id"] for r in results}) == len(results) and
              len({r["key"] for r in results}) == len(results), f"{name}: duplicate identity")
        if verify:
            check(read_json(bundle/"processed"/(name+".json")) == results, f"{name}: processed snapshot drift")
        for folder, source, ext in (("raw",raw_path,"bcsv"),("decoded",csv_path,"csv"),("decoded",meta_path,"json")):
            target = out/folder/(name+"."+ext)
            target.parent.mkdir(parents=True,exist_ok=True)
            shutil.copyfile(source,target)
        write_json(out/"processed"/(name+".json"),results)
        combined.extend(results)
        audit.append(dict(table=name, rows=len(results), columns=meta["column_count"],
                          row_size=meta["row_size"], original_bytes=len(raw),
                          original_sha256=digest(raw), decoded_csv_sha256=digest(csv_path.read_bytes()),
                          decoded_metadata_sha256=digest(meta_path.read_bytes()),
                          original_field_cells_verified=field_cells,
                          raw_metadata_csv_redecode_exact=True))
    check(len(combined)==371 and len({(r["table"],r["unique_id"]) for r in combined})==371,
          "Integrated table coverage or identity mismatch")
    check(all(r["actual_value"] is None for r in combined), "Actual save state must remain unknown")
    integrated=out/"integrated"
    integrated.mkdir()
    write_json(integrated/"eventflag_definitions_371.json",combined)
    with (integrated/"eventflag_definitions_371.csv").open("w",encoding="utf-8",newline="") as f:
        writer=csv.DictWriter(f,fieldnames=FIELDS,lineterminator="\n")
        writer.writeheader()
        writer.writerows(csv_rows(combined))
    if verify:
        check(read_json(bundle/"integrated"/"eventflag_definitions_371.json")==combined,"Integrated JSON drift")
        check(read_csv(bundle/"integrated"/"eventflag_definitions_371.csv")==csv_rows(combined),"Integrated CSV drift")
    shutil.copyfile(bundle/"source_manifest.json",out/"source_manifest.json")
    report=dict(schema="acnh303-r93-npc-eventflag-source-audit-v1",tables=audit,
                total_definitions=len(combined),
                total_original_field_cells=sum(r["original_field_cells_verified"] for r in audit),
                runtime_state_verified=False,committed_snapshots_checked=verify)
    report["output_sha256"]={str(p.relative_to(out)).replace("\\","/"):digest(p.read_bytes())
                             for p in sorted(out.rglob("*")) if p.is_file()}
    write_json(out/"verification_report.json",report)
    print(json.dumps(report,ensure_ascii=False,indent=2))
    return report

if __name__ == "__main__":
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=Path("."))
    parser.add_argument("--out",type=Path,required=True)
    parser.add_argument("--verify-committed",action="store_true")
    args=parser.parse_args()
    run(args.root.resolve(),args.out.resolve(),args.verify_committed)
