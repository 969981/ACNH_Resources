# Read-only ARM64 GDB register-observation helper for real ACNH 3.0.3.
# In attached live GDB: source Scripts/acnh303_bdli_gdb_observer.py
#
# Before source, the analyst MUST supply:
# ACNH303_MAIN_BASE=0x... actual loaded module base (4K aligned)
# ACNH303_BDLI_RVAS=0x...,0x... actual independently verified candidate RVAs
# ACNH303_BDLI_SESSION_ID=... one real game session
# ACNH303_BDLI_BUILD_ID=... exactly from this game build
# ACNH303_BDLI_ELF_SHA256=... actual same executable hash
# ACNH303_BDLI_CAPTURE_PATH=/path/real-session.jsonl
#
# This tool does NOT know which function consumes BDLI. Candidate breakpoints
# and register snapshots do not prove language lookup/fallback/controls.
# GDB software breakpoints may temporarily patch program instructions; this
# helper never writes game business data and never creates source-memory data.
import gdb
import json
import os
import re

def required(key):
    value = os.environ.get(key, "").strip()
    if not value:
        raise RuntimeError("Missing actual live-game GDB input: " + key)
    return value

BASE = int(required("ACNH303_MAIN_BASE"), 0)
RVAS = [int(x.strip(), 0) for x in required("ACNH303_BDLI_RVAS").split(",")]
SESSION = required("ACNH303_BDLI_SESSION_ID")
BUILD = required("ACNH303_BDLI_BUILD_ID")
ELF = required("ACNH303_BDLI_ELF_SHA256").lower()
PATH = required("ACNH303_BDLI_CAPTURE_PATH")

if not (BASE >= 65536 and BASE % 4096 == 0):
    raise RuntimeError("Actual game main base must be 4K aligned")
if not (1 <= len(RVAS) <= 16 and len(set(RVAS)) == len(RVAS)
        and all(rva > 0 and rva % 4 == 0 for rva in RVAS)):
    raise RuntimeError("Candidate BDLI RVAs absent/invalid/duplicated")
if not re.fullmatch(r"[0-9a-f]{64}", ELF):
    raise RuntimeError("Real original ELF SHA256 required")
COUNT = 0

class CandidateAnchor(gdb.Breakpoint):
    def __init__(self, rva):
        super().__init__("*" + hex(BASE + rva), internal=False)
        self.rva = rva

    def stop(self):
        global COUNT
        COUNT += 1
        regs = {}
        for name in ("x0","x1","x2","x3","x4","x5","x6","x7",
                     "x8","x19","x20","x21"):
            regs[name] = int(gdb.parse_and_eval("$" + name))
        pc = int(gdb.parse_and_eval("$pc"))
        event = {
            "schema": "acnh303-bdli-live-register-anchor-v1",
            "session_id": SESSION, "build_id": BUILD,
            "elf_sha256": ELF, "sequence": COUNT,
            "main_base": BASE, "pc": pc, "rva": self.rva,
            "registers": regs, "native_runtime_verified": False,
            "actual_BDLI_loader_or_LBLI_consumer_identified": False,
        }
        with open(PATH, "a", encoding="utf-8") as stream:
            stream.write(json.dumps(event, sort_keys=True) + "\n")
            stream.flush()
        return False

for rva in RVAS:
    CandidateAnchor(rva)
print("ACNH BDLI candidate GDB register observations armed, native consumer NOT VERIFIED")
