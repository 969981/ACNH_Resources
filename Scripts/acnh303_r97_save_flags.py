#!/usr/bin/env python3
"""R97 read-only full and light memory parser, no identity export."""
import argparse,hashlib,json,struct
from pathlib import Path
import acnh303_r96_save_flags as r96
BASE=r96.BASE
def light(data,rows,e):
    l=e["layout"]
    if l["light_memory_base"]+l["stride"]*l["count"]!=l["end_exclusive"]:
        raise ValueError("Light memory boundary mismatch")
    memory=[r for r in rows if r["scope"]=="npc_memory"]
    if len(memory)!=167 or any(not 0<=r["unique_id"]<256 for r in memory): raise ValueError("Definitions mismatch")
    result=[]
    for i in range(10):
        b=0x120+i*0x13230; records=[]
        for j in range(l["count"]):
            p=b+l["light_memory_base"]+j*l["stride"]
            block=data[p:p+l["stride"]]
            if len(block)!=l["stride"]: raise ValueError("Out of bounds")
            flags=block[0x38:0x138]
            records.append({"memory_index":j,"file_offset":p,"identity_nonzero":bool(struct.unpack_from("<I",block,0)[0] and struct.unpack_from("<I",block,0x1c)[0]),
                "flags_file_offset":p+0x38,"raw_flags_hex":flags.hex(),
                "flags":{r["key"]:flags[r["unique_id"]] for r in memory},
                "tail_raw_hex":block[0x138:].hex(),
                "tail_fields":{r["name"]:int.from_bytes(block[r["offset"]:r["offset"]+r["width"]],"little") for r in l["tail_raw_fields"]}})
        result.append(records)
    return result
def run(d,h,rows,old,e):
    r96.validate(d,h,old)
    full=r96.extract(d,rows,old)
    for resident,records in zip(full,light(d,rows,e),strict=True):
        resident["npc_light_memory"]=records
    return {"schema":"acnh303-r97-readonly-save-flags-v1","save_revision":34,"sha256":hashlib.sha256(d).hexdigest(),
            "checksum_regions_verified":len(old["hash_regions"]),"real_fixture_attestation":"caller must independently establish provenance",
            "occupancy_note":"identity_nonzero is only a raw identity test; unused slots and active resident eligibility not proven",
            "residents":full}
def selftest(rows,old,e):
    d=bytearray(old["layout"]["file_size"]); h=bytearray(64)
    struct.pack_into("<IIHHHH",h,0,0xa0002,0xa0028,2,0,2,34)
    for i,j,v in [(0,0,25),(0,159,60),(9,0,150),(9,159,255)]:
        p=0x120+i*0x13230+0x2f84+j*0x158
        struct.pack_into("<I",d,p,123); struct.pack_into("<I",d,p+0x1c,456)
        d[p+0x38+10]=v; d[p+0x38+255]=0x5a; d[p+0x156]=0x6b
    for p,n in old["hash_regions"]:
        struct.pack_into("<I",d,p,r96.checksum(memoryview(d)[p+4:p+4+n]))
    result=run(d,h,rows,old,e)
    for i,j,v in [(0,0,25),(0,159,60),(9,0,150),(9,159,255)]:
        r=result["residents"][i]["npc_light_memory"][j]
        assert r["identity_nonzero"] and r["flags"]["Friendship"]==v
        assert r["raw_flags_hex"].endswith("5a") and r["tail_fields"]["unknown_156"]==0x6b
    assert sum(len(r["npc_light_memory"]) for r in result["residents"])==1600
    assert not result["residents"][0]["npc_light_memory"][1]["identity_nonzero"]
    d[0x120+0x2f84+0x38]^=1
    try: run(d,h,rows,old,e)
    except ValueError: pass
    else: raise AssertionError("corrupt fixture accepted")
    print(json.dumps({"synthetic_light_records":1600,"light_definition_values":267200,"raw_light_state_slots":409600,"full_memory_blocks":80,"corruption_rejected":True,"real_save_fixture_verified":False}))
def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--decrypted-main",type=Path);p.add_argument("--header",type=Path);p.add_argument("--out",type=Path);p.add_argument("--selftest",action="store_true");a=p.parse_args()
    base=a.root/BASE;rows=r96.load(base/"integrated/eventflag_definitions_371.json");old=r96.load(base/"r96/evidence.json");e=r96.load(base/"r97/evidence.json")
    if a.selftest: selftest(rows,old,e);return
    if not(a.decrypted_main and a.header and a.out): p.error("require --decrypted-main --header --out")
    if a.out.resolve() in (a.decrypted_main.resolve(),a.header.resolve()): raise ValueError("Cannot overwrite input")
    result=run(a.decrypted_main.read_bytes(),a.header.read_bytes(),rows,old,e)
    with a.out.open("x",encoding="utf-8") as f: json.dump(result,f,ensure_ascii=False,indent=2)
if __name__=="__main__": main()
