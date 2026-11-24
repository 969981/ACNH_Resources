# ACNH 3.0.3 保存后端、析构与玩家 Payload 研究

## 证据范围

- Build ID: `FF1D1C05670DB6021C85B624A710B96300000000000000000000000000000000`（NSO 32-byte padded）。
- Original ELF SHA256: `145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664`。
- Ghidra VA = Main RVA + 0x100000；所有 P(a) 为 u64 读取，指针与整数偏移相加不等于连续解引用。
- R100 relocation database: run [45308001227](https://github.com/969981/ACNH_Resources/actions/runs/45308001227), artifact 14881442847.
- Original ELF: run [45320066579](https://github.com/969981/ACNH_Resources/actions/runs/45320066579), artifact 14886678739, SHA256 5ffbed13e2a2bbbcc3bf80d8601999ac1defb3162613b2943ea6c887c605df54. Eight disassembly windows fully decoded (windows can include adjacent functions).
- Static verified, actual save/snapshot/runtime verification remain false.

## 1. 两种后端

| 项目 | ordinary | replacement |
|---|---|---|
| constructor VA | 026F9460 | 026FD710 |
| backend table slot | 0 | 0x130 |
| backend object allocation | 0x40 | 0x40 |
| vtable VA | 04A89728 | 04A8A730 |
| buffer size (each of two) | 0x9B0E90 | 0x5B3C40 |
| descriptor allocation | 0x2913C0 | 0x276C40 |
| +0x38 getter VA | 0270BD50 | 02725C40 |
| getter raw | 001040f9c0035fd6 | same |
| common descriptor adjustment | +0x70 | 0 |

[ordinary constructor](../../derived/3.0.3/ghidra12.2/c/94/026f9460.c) allocates manager+0x10 table 0x1A8; VA 026F9E50 and 026F9EB0 store the table on separate paths. Ordinary object is assigned to table[0]. [replacement constructor](../../derived/3.0.3/ghidra12.2/c/d7/026fd710.c) writes table+0x130 at VA 026FDB20 and clears on failure at 026FE050. Both getter bodies are exactly `ldr x0,[x0,#0x20]; ret`. The ordinary descriptor has the inner common descriptor at +0x70; replacement result is already the common descriptor. Mode switch FUN_026F5030 copies buffers via +0x40 descriptor and +0x28 size, then ORs bit0 at manager+0x453 (026F50B8–026F50C0).

```
M = P(Main + 0x5474040)
T = P(M + 0x10)
mode = u8(M + 0x453) & 1
O = P(T + (mode ? 0x130 : 0))
R = P(O + 0x20)
B = R + (mode ? 0 : 0x70)
```

Verify O vtable and vtable+0x38 against Build-ID index. Do not invoke native functions in a snapshot.

## 2. FUN_026EEAEC complete entry body

| Ghidra VA | raw LE | instruction (branch/ADRP operands in RVA space) |
|---|---|---|
| 026EEAEC | fd7bbea9 | stp x29,x30,[sp,#-0x20]! |
| 026EEAF0 | f30b00f9 | str x19,[sp,#0x10] |
| 026EEAF4 | fd030091 | mov x29,sp |
| 026EEAF8 | c81c01f0 | adrp x8,#0x4989000 |
| 026EEAFC | 08a11691 | add x8,x8,#0x5a8 |
| 026EEB00 | 080000f9 | str x8,[x0] |
| 026EEB04 | f30300aa | mov x19,x0 |
| 026EEB08 | 00600c91 | add x0,x0,#0x318 |
| 026EEB0C | decb4794 | bl #0x37e1a84 |
| 026EEB10 | 60220c91 | add x0,x19,#0x308 |
| 026EEB14 | f30b40f9 | ldr x19,[sp,#0x10] |
| 026EEB18 | fd7bc2a8 | ldp x29,x30,[sp],#0x20 |
| 026EEB1C | 4eff0014 | b #0x262e854 |

```cpp
void dtor(M*) {
    M->vtable = Main + 0x49895A8;
    FUN_038E1A84(M+0x318);
    return FUN_0272E854(M+0x308); // tail call
}
```

FUN_038E1A84 finalizes mutex at object+0x20, unlinks registration list under optional owner mutex, marks owner field 1. FUN_0272E854 processes two pointers at subobject+0 and +8, frees each nested +0x10 allocation and clears its +8/+0x10, finalizes two substructures (+0xB0,+0x60) and +0x18, then frees or allocator-releases object. Neither routine proves all backend buffers freed in this destructor path. Separate deleting destructor FUN_026EEB20 performs the two calls then releases M via allocator lookup or free; subsequent dispatcher beginning 026EEB9C is not part of deleting destructor.

## 3. Player identity and descriptor

FUN_026EED64 (ordinary) and FUN_026EEC4C (replacement). Player index 0–7; first 16 bytes of identity must not be all zero.
- ordinary: identity = P(R+0x78)+P(R+0x80)+0x1E33B0+i*0x48. Find active slot k with u32(M+0x90+k*8)==i and u32(M+0x94+k*8)==1. W=P(T+0x60+k*8); G=P(W+0x20).
- replacement: identity=P(B+0xE7120)+P(B+0xE7128)+i*0x48. W=P(T+0x140+i*8); G=P(W+0x10). FUN_0272D49C constructs wrapper with raw 0x37AD0 at +8 and descriptor 0x46818 at +0x10; embedded fallback descriptor offset 0x194B0.
- D=G+0x194B0; if P(D+8)==0 then D=P(M+0x20). Snapshot must be coherent; no live guard callbacks.

| field | address (payload sum) | size/semantics | consumers VA |
|---|---|---|---|
| pockets | I=P(D+0x78)+P(D+0x80) | two 20-max segments at I+0xB8 and I+0; u32 counts at I+0x158 and I+0xA0; each 8 bytes | 026759E0 |
| wallet | I+0x170 | encoded 8 bytes; CurHaveMoney also sums bell item denominations, so not equivalent to wallet alone | 02602F20,027FD4C0 |
| bank | P(D+0x8620)+P(D+0x8628) | encoded 8 bytes; guard D+0x8640 | 02603050 |
| miles | L=P(G+0x18338)+P(G+0x18340); L+0x5498 | encoded 8 bytes; guard G+0x18358 | 026031E0,027A19D8 |
| adjacent miles counter | L+0x54A0 | encoded 8 bytes, adjacent counter, exact name unresolved | 027A19D8 |
| storage | S=P(D+0x158)+P(D+0x160) | cap u32(S+0x11940), up to 9000; 8 bytes/slot; s16=-2 empty; guard D+0x178 | 0267C390,0267C4D0,027F5FD0 |
| NPC friendship | N=P(B+0xA8+8)+P(B+0xA8+0x10); N+npc*0x13230+i*0x5F0+0x46 | u8; NPC 0–9 | prior doc 08 |

Wallet/bank/miles encoded format: little-endian u32 v, u16 salt, u8 shift, u8 checksum. All zero is zero. checksum=(sum four bytes of v - 0x2D)&0xFF. acc=(v<<((29-shift)&63)) mod 2^64; value=(lo32(acc)+hi32(acc)-salt-0x7F1CD4EF) mod 2^32, interpreted signed by consumer. Invalid checksum reported rather than silently returning zero. No encoding/write API implemented.

## 4. Static-to-offline comparison

Legacy heap candidates slot21 B27BB6A0, inventory B27BB758, wallet B27BB810: differences 0xB8/0x170 agree with Native layout. This is a relative cross-check, NOT a runtime heap-base assertion. No real memory snapshot or save supplied.

Use `python Scripts/acnh303_save_snapshot_compare.py --selftest --build-db build_id_pointer_index.sqlite3` to run synthetic validation and generate SQLite indexed by Build ID. For actual offline data, create manifest with capture_kind coherent_offline, build_id, elf_sha256, main_base, heap_base (optional), player, npc (optional), segments [{base,file,sha256}]. Each segment must be a coherent raw virtual-address range from the same capture; include root, backend tables/objects, vtable/code pages, descriptors and payload. Optional save_ranges [{field,file,sha256,offset,size,relative}] explicitly maps decrypted save ranges to resolved fields; no implicit disk offsets. Relative is offset within resolved field address, not from file start. Run `python Scripts/acnh303_save_snapshot_compare.py --manifest capture.json --out comparison.json`. Report includes actual addresses, decoded values, raw pockets, storage hash, comparison hashes and equality. Snapshot consistency does not establish independent provenance; runtime_verified remains false. No process attach, live memory access or writes.

## 5. Deliverables and acceptance

- [Build-ID registry](../../derived/3.0.3/external_pointers/build_id_pointer_index.json), JSON source of truth with static evidence and explicit false runtime flags.
- [ELF window extractor](../../Scripts/acnh303_save_backend_elf.py) and [offline comparator](../../Scripts/acnh303_save_snapshot_compare.py).
- P0: both constructor writers, +0x38 dispatch and complete 026EEAEC entry body verified; player fields statically recovered. Actual decrypted save offset map and real coherent snapshot verification remain pending. No fixed heap address retired until matched across multiple real captures.
