# ACNH 3.0.3 R26 — BNSH allocator callback, BinaryFileHeader relocation and shader object consumer

- Date: 2026-10-14
- Branch: `feat/acnh303-round26-bnsh-allocator-object-consumer`
- Source branch: `feat/acnh303-round25-bindpose-native-consumers`
- Evidence: original `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf`, SHA-256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`
- Native audit reports:
  - `derived/3.0.3/r26_native_three_callees/r26_function_and_callsite_audit.json`
  - `derived/3.0.3/r26_native_three_callees/r26_allocator_slots_and_object.json`
- Scripts: `scripts/acnh303_round26_three_callees.py`, `scripts/acnh303_round26_allocator_slots.py`.
- Workflow: `.github/workflows/acnh303-round26-research.yml`, successful original-ELF run [#38591950375](https://github.com/969981/ACNH_Resources/actions/runs/38591950375).

## Scope and evidence boundaries

R26 **does not extend the FMDL/FSKL sample list or count more speculative vtables**. It follows exactly three R25 proven direct targets, their genuinely reached callees, data references and object stores:

1. `0x267B14`: allocator candidate invoked from `0x2656F0` with `X0=0x251D8`, `X1=BNSH GetAlignment()`.
2. `0x25001C`: post-copy BinaryFileHeader initializer invoked from `0x25D1D0`, and inside `0x285D10`.
3. `0x285D10`: object consumer invoked from `0x265710` with the caller's `X19` object, `X27` argument and `X19+0x40` copied BNSH pointer.

The script checks the original bytes for all these branch targets, then performs bounded basic-block following (including conditional branch successors) within `0x1000` bytes per entry; saved code is real disassembly with opcodes and SHA. Such a graph is **not** automatic proof of the complete function body. It also performs a whole-executable exact AArch64 `B/BL` target scan to distinguish caller counts from filename/string coincidence.

## P0-A: `0x25001C` is BinaryFileHeader relocation, not a vague initialization guess

Source-verified disassembly:

```asm
0x25001C  STP  X29,X30,[SP,#-0x20]!
0x250020  STR  X19,[SP,#0x10]
0x250024  MOV  X29,SP
0x250028  MOV  X19,X0
0x25002C  BL   0x3F05260  ; nn::util::BinaryFileHeader::IsRelocated() const
0x250030  TBNZ W0,#0,0x250040
0x250034  MOV  X0,X19
0x250038  BL   0x3F05270  ; nn::util::BinaryFileHeader::GetRelocationTable()
0x25003C  BL   0x3F05310  ; nn::util::RelocationTable::Relocate()
0x250040  MOV  X0,X19
0x250044  LDR  X19,[SP,#0x10]
0x250048  LDP  X29,X30,[SP],#0x20
0x25004C  RET
```

**Bounded 13 real instructions, 3 direct imported API calls and a verified conditional fast path.** The wrapper always returns the original header address (as directly observed by `MOV X0,X19` before RET); the code relocates only if the `IsRelocated` bit is false. It does not allocate a shader object or process AMTA/EVFL.

Pseudocode reflecting exactly that observed branch:

```cpp
BinaryFileHeader* EnsureRelocated(BinaryFileHeader* header) {
    if (!header->IsRelocated())
        header->GetRelocationTable()->Relocate();
    return header;
}
```

The original caller at `0x25D1D0` invokes the wrapper with the address of the freshly copied embedded BNSH, stores return at `[X20+8]`, then calls `BinaryFileHeader::GetFirstBlock()`. The consumer at `0x285D84` invokes the same wrapper and stores returned header at `[X19+0]`.

## P0-B: `0x267B14` is a generic allocation callback adapter, not `malloc`

Seven real instructions:

```asm
0x267B14  ADRP X8,#0x4B62000
0x267B18  ADD  X8,X8,#0xF50
0x267B1C  LDR  X3,[X8]     ; function pointer at 0x4B62F50
0x267B20  ADRP X8,#0x4B62000
0x267B24  ADD  X8,X8,#0xF60
0x267B28  LDR  X2,[X8]     ; context at 0x4B62F60
0x267B2C  BR   X3          ; tail branch, target unknown statically
```

**117 exact executable direct branches** target `0x267B14`; at least the R25 established calls `0x2656F0` and `0x265794` are present. This is strong evidence of a generic callback adapter that preserves incoming X0/X1 and injects context X2.

Approximate ABI pseudocode (not a known true type):

```cpp
using AllocationCallback = void* (*)(size_t size,
                                      size_t alignment,
                                      void* context);
void* AllocViaRegisteredCallback(size_t sz,size_t align) {
    auto fn = *reinterpret_cast<AllocationCallback*>(0x4B62F50);
    auto ctx = *reinterpret_cast<void**>(0x4B62F60);
    return fn(sz,align,ctx);
}
```

The file-backed PT_LOAD cannot provide a stable initial 8-byte value for these two addresses, and the ELF audit finds no directly matching relocation in the near-slot window. **Do not claim that those pointers are null, uninitialized, or a particular allocator at runtime**: they may reside in non-file-backed data or be assigned through indirect registration paths. The exact ADRP+ADD read references found in the ELF are saved in the second audit. More indirect uses of the context exist, including `0x3A0F198` and `0x3A0FE80`, but these do not resolve the callback's current runtime destination.

Nearby `0x267B30` is a *different* callback wrapper:

```asm
0x267B30  ADRP X8,#0x4AD0000
0x267B34  MOV  W1,#4
0x267B38  LDR  X8,[X8,#0x800]
0x267B3C  LDR  X3,[X8]
0x267B40  ADRP X8,#0x4B62000
0x267B44  ADD  X8,X8,#0xF60
0x267B48  LDR  X2,[X8]
0x267B4C  BR   X3
```

Its different function-pointer source and constant X1=4 must not be silently equated with the alignment-aware `0x267B14` adapter. Its consumers include index-array allocations in the shader initialization path.

## P0-C: `0x285D10` does real BNSH shader-related object initialization

The entry is a small argument-defaulting stub:

```asm
0x285D10  MOV X3,XZR
0x285D14  MOV X4,XZR
0x285D18  MOV X5,XZR
0x285D1C  MOV X6,XZR
0x285D20  MOV W7,#3
0x285D24  B 0x285D30
```

The shared body at `0x285D30` uses `X19=X0` as the receiver. Real source-verified chain:

```asm
0x285D50  LDR W8,[X0,#8]        ; state/flags
0x285D54  MOV X19,X0            ; receiver
0x285D7C  STR W8,[X0,#8]        ; update state
0x285D80  MOV X0,X2            ; input binary header
0x285D84  BL 0x25001C         ; EnsureRelocated()
0x285D88  STR X0,[X19]         ; receiver+0 := header
0x285D8C  BL 0x3F054D0        ; BinaryFileHeader::GetFirstBlock()
0x285D90  MOV X23,X0           ; first block
0x285D94  BL 0x28CBA0         ; 2-level pointer / byte-mode guard
...
0x285DD0  BL 0x24FE10         ; not yet definitively named
0x285DDC  BL 0x28CCE0         ; mode / metadata interpretation
0x285DF8  BL 0x3F054D0        ; GetFirstBlock()
0x285DFC  LDR W8,[X0,#0x1C]  ; count in actual first block
...
0x285E70  LSL X0,X20,#5       ; per-entry 0x20 bytes
0x285E74  BL 0x267B30        ; generic different allocation callback
...
0x285EA4  STR X23,[X19,#0x10]
0x285EB4  STR X0,[X19,#0x18]
0x285EC0  STR X0,[X19,#0x20]
0x285ED0  STR X0,[X19,#0x28]
0x285EE0  STR X0,[X19,#0x30]
...
0x28606C  BL 0x286160        ; continuation (real source CFG captured)
0x286074  STR X8,[X19,#0x38]
0x286094  RET
```

The actual R26 audit captures **223 reachable instructions in 23 bounded blocks**, **25 direct calls**, first-block references and all receiver stores. No `BLR` occurs inside this bounded body; its allocation and other actions are instead delegated to reached direct callees, which may themselves dispatch indirectly.

### Initial receiver map (observed stores only)

| x19 offset | Source evidence | Interpretation |
|---|---|---|
| `+0x00` | `0x285D88 STR X0,[X19]` following relocation | BinaryFileHeader pointer |
| `+0x08` | `0x285D7C` / `0x285DF4` | combined state/mode flags |
| `+0x10` | `0x285EA4` | 0x20-stride allocated array |
| `+0x18` | `0x285EB4` | 32-bit per-entry table A |
| `+0x20` | `0x285EC0` | 32-bit per-entry table B |
| `+0x28` | `0x285ED0` | 32-bit per-entry table C |
| `+0x30` | `0x285EE0` | larger index/name result table |
| `+0x38` | `0x286074` | passed parameter preserved from stack |

Table letters and purposes beyond what is read/written above remain unverified names, not proven C++ field types.

### Shader semantics now supported by real original ELF literal bytes

The follow-up call `0x286160` reads the BNSH first block, calls callback allocation and repeatedly invokes `0x24E3C0`. The original mapped ELF provides two actual NUL-terminated literal anchors used along this consumer path:

- `0x3FCD458` → **`uTexture%d`**
- `0x3FED090` → **`uConstantBufferForVertexShader`**

These support **shader resource name / texture and vertex constant-buffer binding semantics**. However, exact origin of every string pointer and the `0x24E3C0` resolver's complete signature still require a dedicated XREF/dataflow analysis. The static evidence does **not** establish a fully reconstructed C++ class, a real GPU driver call, rendering success, or runtime proof of a particular active shader instance.

Other direct consumer callees have additionally been inspected with original opcode-backed bounded control flow:

| RVA | R26 recovered evidence | Status |
|---|---|---|
| `0x28CBA0` | reads `[X0+0x28]→[+0x20]→u8[+0x110]` and checks byte equals 1 | boolean condition, business label unknown |
| `0x28CCE0` | mode/metadata path and calls to `0x24D730` | concrete code, field semantics incomplete |
| `0x286160` | subsequent first-block scan, allocated buffers, repeated `0x24E3C0` calls | genuine next-stage consumer |
| `0x24E3C0` | reads resource metadata fields and delegates to `0x24CDC0` | resolver role candidate, not fully named |

## Reproducibility and acceptance

```bash
python -m pip install "pyelftools>=0.31,<1" "capstone>=5,<6"
python -m unittest discover -s scripts -p 'test_acnh303_round26_research.py' -v
python scripts/acnh303_round26_three_callees.py
python scripts/acnh303_round26_allocator_slots.py
```

The R26 workflow validates the source ELF SHA, the R24/R25 chain of generated audit SHA, exactly the three R25 callsite targets, nonempty reachable instructions for all three, five follow-up callee results and unproven-runtime status guard. On success it commits the **generated** JSON reports, rather than authored sample output. It never changes RomFS/ELF or publishes original game binaries.

## Remaining work after R26

**R27 P0-A, callback registration**: find actual initializing stores and owner of `0x4B62F50` and `0x4B62F60` (which are not fully file-backed); if static reachability is insufficient, record read-only memory and resolved branch target in version-matched session. A static BSS/nonfile-backed address is not its runtime value.

**R27 P0-B, shader object class and usage**: trace actual caller of `0x2656B4`, construction of the receiver `X19`, and subsequent X19 field reads; follow `0x286160` literal XREF to `0x24E3C0` to establish shader resource names and bindings. Preserve exact source hashes and conditional paths.

**R27 P1, keep type families separate**: this verifies a **BNSH shader path**, not AMTA v5 audio metadata, LBLI section semantics, or BFEVFL event dispatch; those need their own source→reader→consumer chains. Do not infer them from this API.

Animation runtime binding (Issue #39) remains separate and unproven. Native AMTA/LBLI/BFEVFL consumer task (Issue #33) remains open.
