# R49: optional GDB observer. Source ONLY in a live ACNH 3.0.3 debugger.
# Requires: ACNH303_MAIN_BASE, ACNH303_ORIGINAL_MAIN_ELF,
#           ACNH303_R49_SESSION_ID, ACNH303_R49_LOG
# FMAA optional: ACNH303_R49_TEXSRT_VA (true *runtime* TexSrt object address,
#   NEVER static source 0x194), ACNH303_R49_MATERIAL=mPltTreeDecoA/B,
#   ACNH303_R49_FRAME_VA (optional confirmed runtime float frame address).
# AAL optional: ACNH303_R49_TARGET_RVAS=0xobserved_r46_x8_rva,...
# Direct candidate function entry and return only; NO API identification.
# Do NOT publish raw memory snapshots without reviewing sensitive data.
import gdb
import hashlib
import json
import math
import os
import struct

ELF_SHA = "83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180"
SCHEMA = "acnh303-r49-native-observer-v1"
BASE = int(os.environ["ACNH303_MAIN_BASE"], 0)
SESSION = os.environ["ACNH303_R49_SESSION_ID"]
LOG = os.environ["ACNH303_R49_LOG"]
BINARY = os.environ["ACNH303_ORIGINAL_MAIN_ELF"]
RVAS = [int(s.strip(), 0) for s in os.getenv("ACNH303_R49_TARGET_RVAS", "").split(",") if s.strip()]
TEXSRT = int(os.getenv("ACNH303_R49_TEXSRT_VA", "0"), 0)
FRAME_PTR = int(os.getenv("ACNH303_R49_FRAME_VA", "0"), 0)
MATERIAL = os.getenv("ACNH303_R49_MATERIAL", "")
MAX_EVENTS = 4096
MAX_CALLS = 1000
if not SESSION or not LOG or BASE < 0x10000:
    raise RuntimeError("Missing real game session/base/log")
with open(BINARY, "rb") as f:
    if hashlib.file_digest(f, "sha256").hexdigest() != ELF_SHA:
        raise RuntimeError("Original reference ELF SHA mismatch")
if len(RVAS) > 16 or len(RVAS) != len(set(RVAS)) or any(v % 4 or v < 0 or v >= 0x6000000 for v in RVAS):
    raise RuntimeError("Require 1..16 distinct observed, aligned candidate RVAs")
if TEXSRT and (TEXSRT < 0x10000 or MATERIAL not in ("mPltTreeDecoA", "mPltTreeDecoB")):
    raise RuntimeError("Require actual runtime TexSrt pointer and explicit material candidate label")
if FRAME_PTR and (FRAME_PTR < 0x10000 or not TEXSRT):
    raise RuntimeError("Frame pointer requires a watched TexSrt object")
if not RVAS and not TEXSRT:
    raise RuntimeError("Specify actual runtime TexSrt pointer and/or observed AAL candidate RVAs")

SEQ = 0
CALLS = 0

def reg(name):
    try:
        return int(gdb.parse_and_eval("$" + name))
    except Exception:
        return None

def snap(ptr, length):
    if not isinstance(ptr, int) or ptr < 0x10000 or ptr >= (1 << 63) or length > 64:
        return {"status": "INVALID_POINTER"}
    try:
        b = gdb.selected_inferior().read_memory(ptr, length).tobytes()
        return {"status": "READ", "address": ptr, "byte_length": len(b),
                "bytes_hex": b.hex(), "sha256": hashlib.sha256(b).hexdigest()}
    except Exception:
        return {"status": "UNREADABLE"}

def emit(row):
    global SEQ
    if SEQ >= MAX_EVENTS:
        return
    SEQ += 1
    row.update({"schema": SCHEMA, "sequence": SEQ, "session_id": SESSION,
                "module_base": BASE, "reference_elf_sha256": ELF_SHA,
                "live_module_independently_verified": False,
                "native_file_io_verified": False,
                "native_shader_binding_verified": False})
    with open(LOG, "a", encoding="utf-8") as f:
        f.write(json.dumps(row, sort_keys=True) + "\n")
        f.flush()

class MaterialWrite(gdb.Breakpoint):
    def __init__(self):
        # Prefer actual hardware data watchpoint; debugger may refuse to arm it.
        super().__init__("*(float *)" + hex(TEXSRT + 0x10),
                         type=gdb.BP_WATCHPOINT, wp_class=gdb.WP_WRITE)
    def stop(self):
        frame = None
        if FRAME_PTR:
            s = snap(FRAME_PTR, 4)
            if s["status"] == "READ":
                v = struct.unpack("<f", bytes.fromhex(s["bytes_hex"]))[0]
                if math.isfinite(v) and 0 <= v <= 100:
                    frame = v
        emit({"type": "FMAA_TexSrt_WriteCandidate", "pc": reg("pc"),
              "lr": reg("x30"), "texsrt_va": TEXSRT,
              "candidate_material": MATERIAL,
              "frame_from_runtime_pointer": frame,
              "texsrt_24_bytes": snap(TEXSRT, 24),
              "thread_ptid": str(gdb.selected_thread().ptid)})
        return False

class CandidateReturn(gdb.FinishBreakpoint):
    def __init__(self, frame, call_id, rva, candidate_buffer_ptr):
        super().__init__(frame, internal=True)
        self.call_id = call_id
        self.rva = rva
        self.buffer_ptr = candidate_buffer_ptr
    def stop(self):
        emit({"type": "AAL_CandidateReturn", "pc": reg("pc"),
              "call_id": self.call_id, "candidate_target_rva": self.rva,
              "return_x0": reg("x0"), "return_x1": reg("x1"),
              "returned_buffer_candidate": snap(self.buffer_ptr, 64),
              "thread_ptid": str(gdb.selected_thread().ptid)})
        return False
    def out_of_scope(self):
        # Non-local unwinding does not establish a normal return.
        pass

class CandidateEntry(gdb.Breakpoint):
    def __init__(self, rva):
        super().__init__("*" + hex(BASE + rva))
        self.rva = rva
    def stop(self):
        global CALLS
        if CALLS >= MAX_CALLS:
            return False
        CALLS += 1
        call_id = CALLS
        regs = {r: reg(r) for r in ("x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x30")}
        emit({"type": "AAL_CandidateEnter", "pc": reg("pc"),
              "call_id": call_id, "candidate_target_rva": self.rva,
              "registers": regs,
              "argument_snapshots": {r: snap(regs[r], 64) for r in ("x0", "x1", "x2", "x3")},
              "thread_ptid": str(gdb.selected_thread().ptid)})
        try:
            CandidateReturn(gdb.newest_frame(), call_id, self.rva, regs["x1"])
        except Exception as e:
            print("R49: no return breakpoint for call", call_id, str(e)[:100])
        return False

if TEXSRT:
    MaterialWrite()
for rva in RVAS:
    CandidateEntry(rva)
print("R49 observers armed. No native shader-binding or FileOpen/Read/Close identity asserted.")
