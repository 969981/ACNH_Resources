#!/usr/bin/env python3
"""Read-only verification of the authenticated 01B97520 branch records.

This deliberately evaluates only the small, straight-line constant-store subset
actually used by this mapping. No execution of Switch code or live memory.
Run with a downloaded, SHA-256-verified artifact directory and the C evidence JSON.
"""
import argparse
import json
import re
import struct
from pathlib import Path

BASE = 0x100000

def verify(function, expected):
    assert not function["gaps"]
    sw = function["authenticated_switches"]
    assert len(sw) == 1 and sw[0]["site_va"] == "0x1b97548"
    assert sw[0]["index_min"] == 0 and sw[0]["index_max"] == 46
    table = bytes.fromhex(sw[0]["table_bytes"])
    targets = [0x1a9754c + x * 4 for x in table]
    assert len(targets) == 47
    assert targets == [int(t, 16) - BASE for t in sw[0]["targets_va"]]
    rows = {int(x["rva"], 16): x["instruction"].strip() for x in function["rows"]}
    assert len(expected) == 47 and [x["id"] for x in expected] == list(range(47))
    output = []
    for i, pc in enumerate(targets):
        regs, mem, steps = {}, [None] * 22, []
        def get(r):
            return 0 if r.endswith("zr") else regs[r[1:]] & ((1 << (32 if r[0] == "w" else 64)) - 1)
        def put(r, v):
            regs[r[1:]] = v & ((1 << (32 if r[0] == "w" else 64)) - 1)
        def store(r, o, n=None):
            n = n or (4 if r[0] == "w" else 8)
            assert 0 <= o and o + n <= len(mem)
            mem[o:o+n] = list((get(r) & ((1 << (8*n))-1)).to_bytes(n, "little"))
        for _ in range(40):
            ins = rows[pc]
            steps.append(hex(pc + BASE))
            op = ins.split()[0]
            nextpc = pc + 4
            if op == "ret":
                break
            if op == "b":
                nextpc = int(ins.split("#")[1], 16)
            elif op in ("mov", "movk"):
                r, v, *shift = ins[5 if op == "movk" else 4:].split(", ")
                v = int(v[1:], 0)
                if op == "movk":
                    sh = int(shift[0].split("#")[1], 0) if shift else 0
                    v = (get(r) & ~(0xffff << sh)) | (v << sh)
                put(r, v)
            elif op in ("str", "stur", "strh", "stp"):
                m = re.fullmatch(r"(?:str|stur|strh|stp) (\w+)(?:, (\w+))?, \[x0(?:, #(0x[0-9a-f]+|\d+))?\]", ins)
                assert m, ins
                r, q, o = m.groups()
                o = int(o or "0", 0)
                store(r, o, 2 if op == "strh" else None)
                if q:
                    store(q, o + (4 if r[0] == "w" else 8))
            elif ins != "add sp, sp, #0x10":
                raise ValueError("unsupported instruction: " + ins)
            pc = nextpc
        else:
            raise ValueError("no bounded return")
        assert None not in mem, (i, mem)
        values = list(struct.unpack("<5IH", bytes(mem)))
        assert values == expected[i]["values"], (i, values, expected[i]["values"])
        output.append({"id": i, "target_va": hex(targets[i]+BASE), "values": values,
                       "bytes": bytes(mem).hex(), "steps_va": steps})
    return {"count": len(output), "all_match": True, "runtime_verified": False, "rows": output}

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--artifact", type=Path, required=True)
    p.add_argument("--evidence", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    a = p.parse_args()
    m = json.loads((a.artifact/"Functions/FUN_01B97520.json").read_text())
    e = json.loads(a.evidence.read_text())
    result = verify(m, e["style_mapping"]["rows"])
    a.out.write_text(json.dumps(result, indent=2)+"\n")
    print("verified", result["count"], "constant-store paths")
