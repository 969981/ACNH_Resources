# R101 — Factory records, writers and constructor/VTable audit

R100 Artifact 14881442847 confirmed five hash words at ELF RVA 04881690, 048825f0, 0487df30, 0487d760, 04883310. Each followed at +8 by a RELR executable pointer, and surrounding slots repeat at stride 0x10. Corresponding constructors Ghidra VA 0115de50, 0116aee8, 0112bcf8, 01124d30, 01176188 have no exact Ghidra C export. FUN_0070fcd0 passes record word0 and invokes +8 pointer. R101 checks original NSO/ELF digest and exact record bytes, extends contiguous records, disassembles bounded constructor windows, preserves all stores and possible VTable slots. A VTable candidate requires actual address store with executable relocated dispatch slots; no claim of runtime execution.

Eight R100 write sites lie in 007bb6c4–007bb7b4, nearest-prior export FUN_007b8a74 is FrontFrameCalc and cannot establish ownership. R101 records actual original instructions, straight-line address tracking and prologue candidates, never treats nearest export as function boundary. Full 20590 pointer runs classified by possible ABI header vs other runs; heuristic, not RTTI proof. Remaining 28 keys tested for matching factory record pattern (not necessarily their actual scope). No real GDB, Ghidra GUI or save fixture; probability and actual invitation behavior remain unverified.

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r101_factory_records.py --root . --out artifacts/acnh303-r101
```
