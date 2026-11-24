#!/usr/bin/env python3
"""R94: source-backed bilingual flag semantics and exact literal Ghidra xrefs."""
import argparse
import csv
import hashlib
import json
import re
from collections import Counter, defaultdict
from pathlib import Path
import zlib

BASE = Path("derived/3.0.3/npc_event_flags")
C_ROOT = Path("derived/3.0.3/ghidra12.2/c")
FLOW_ROOT = Path("UnPack/1/EventFlow")
def load(p):
    return json.loads(p.read_text(encoding="utf-8"))
def write(p, obj):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(obj,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def require(test, message):
    if not test:
        raise ValueError(message)

def literal_index(root, keys):
    """Exact quoted-key references, not proof of table binding or function role."""
    pattern = re.compile(r'"(' + "|".join(re.escape(x) for x in sorted(keys,key=len,reverse=True)) + r')"')
    result=defaultdict(list)
    files=sorted((root/C_ROOT).rglob("*.c"))
    require(len(files)>=59000,"Full Ghidra C export required")
    for p in files:
        try:
            text=p.read_text(encoding="utf-8",errors="strict")
        except UnicodeDecodeError as exc:
            raise ValueError(f"Invalid Ghidra text: {p}") from exc
        for i,line in enumerate(text.splitlines(),1):
            for key in set(pattern.findall(line)):
                result[key].append({"source":p.relative_to(root).as_posix(),"line":i,
                                    "function_file_address":p.stem,
                                    "matched_line":line.strip(),
                                    "evidence":"EXACT_QUOTED_KEY_LITERAL_ONLY"})
    return result,len(files)

def run(root,out,scan):
    base=root/BASE
    sem=base/"semantics"
    records=load(base/"integrated/eventflag_definitions_371.json")
    translations=load(sem/"translations_zh_cn.json")
    schema=load(sem/"field_semantics.json")
    native=load(sem/"native_functions.json")
    tr={(table,r["unique_id"]):r for table,rows in translations.items() for r in rows}
    require(len(records)==len(tr)==371,"371 distinct definitions and translations required")
    for h,d in schema["known"].items():
        crc=zlib.crc32(f"{d['native_name']} {d['native_type']}".encode("ascii"))&0xffffffff
        require(h==f"hash_{crc:08X}",f"Bad CRC proof {h}")
    known=schema["known"]
    unknown=schema["unknown"]
    keys={r["key"] for r in records}
    index,n=literal_index(root,keys) if scan else ({},0)
    result=[]
    for r in records:
        t=tr[(r["table"],r["unique_id"])]
        require(t["key"]==r["key"] and t["description_ja"]==r["description_ja"] and
                bool(t["description_zh_cn"]),"Translation identity drift")
        raw=r["raw_fields"]
        fields={}
        unresolved={}
        for h,v in raw.items():
            require(h in known or h in unknown,f"Uncatalogued hash {h}")
            if h in known:
                d=known[h]
                fields[d["native_name"]]=int(v) if d["native_type"].startswith("u") else v
            else:
                unresolved[h]={"raw_value":int(v),**unknown[h]}
        reset=raw.get("hash_5140E4B4")
        refs=index.get(r["key"],[]) if scan else None
        rec={**r,"description_zh_cn":t["description_zh_cn"],"translation_status":"HUMAN_READABLE_RESEARCH_TRANSLATION",
             "semantic_fields":fields,"unknown_fields":unresolved,
             "default_value":fields.get("DefaultValue"),
             "max_value":fields.get("MaxValue"),
             "flags_flow_access_raw":fields.get("FlagsFlowAccess"),
             "flags_flow_access_enum_semantics":None,
             "conditional_reset_rule_raw":int(reset) if reset is not None else None,
             "conditional_reset_rule_candidate":schema["reset_rules"].get(reset),
             "runtime_storage_type":native[r["scope"]]["storage_type"],
             "storage_evidence":native[r["scope"]]["evidence"],
             "native_literal_references":refs,"native_literal_scan_performed":scan,
             "native_business_logic":None,"actual_value":None}
        if r["scope"]=="npc_save" and r["key"]=="NnpcHouseLoan":
            rec["native_business_logic"]={"evidence":"NATIVE_STATIC","consumer":"0x026AA970",
                 "summary_zh_cn":"读取贷款计数；与另一项计算值相加达到80时设置NnpcHouseBuildOk。200为MaxValue，不是触发阈值。"}
        result.append(rec)
    require(all(x["actual_value"] is None for x in result),"Actual value must remain unknown")
    require(len({(r["table"],r["unique_id"]) for r in result})==371,"Identity drift")
    out.mkdir(parents=True,exist_ok=True)
    write(out/"eventflag_semantics_371.json",result)
    for table in translations:
        write(out/"tables"/(table+".json"),[r for r in result if r["table"]==table])
    fields=("table","scope","unique_id","key","description_ja","description_zh_cn","default_value","max_value",
            "flags_flow_access_raw","conditional_reset_rule_raw","runtime_storage_type","native_literal_scan_performed",
            "native_literal_reference_count","actual_value")
    with (out/"eventflag_semantics_371.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=fields)
        w.writeheader()
        for row in result:
            w.writerow({k:(len(row["native_literal_references"]) if scan else None) if k=="native_literal_reference_count" else row.get(k) for k in fields})
    write(out/"field_semantics.json",schema)
    write(out/"native_functions.json",native)
    report={"definitions":len(result),"chinese_translations":len(tr),"known_distinct_hashes":len(known),
            "unknown_distinct_hashes":len(unknown),"ghidra_c_files_scanned":n,
            "definitions_with_exact_literal_reference":sum(bool(r["native_literal_references"]) for r in result) if scan else None,
            "unique_keys_with_exact_literal_reference":sum(bool(index.get(k)) for k in keys) if scan else None,
            "literal_references":sum(len(v) for v in index.values()) if scan else None,
            "scope_disambiguation_verified":False,"all_business_logic_verified":False,
            "all_actual_values_unknown":True,
            "table_counts":dict(Counter(r["table"] for r in result))}
    write(out/"report.json",report)
    print(json.dumps(report,ensure_ascii=False,indent=2))
    return result
if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--scan-ghidra",action="store_true")
    args=p.parse_args()
    run(args.root.resolve(),args.out.resolve(),args.scan_ghidra)
