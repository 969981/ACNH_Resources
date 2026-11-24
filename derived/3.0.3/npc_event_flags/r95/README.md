# R95 — Native NPC state mechanisms and scope-qualified EventFlow references

R95 supplements R93/R94 without modifying any original source. [Machine-readable static evidence](./native_evidence.json) records native functions, relative structures, six Friendship bands and the five important hashes.

## P0: unknown hashes and date context

- 5140E4B4 remains an unknown original name. FUN_02748ce0 and FUN_02746850 select reset conditions; FUN_026901a0 -> FUN_027d3418 -> FUN_0276dba0 -> FUN_0276aab0 links the first context long to FUN_00a82474 (signed elapsed-day calculation from two CalendarTime values). Code 0 does not reset, 1 nonzero day delta, 2 nonzero day delta or byte +0x2a, 3 unconditional on invocation, 4 positive delta. Exact calendar normalization/additional context byte still pending. The R93 two tables contain 0..3 only.
- FA93F14B = FlagsFlowAccess u8 (CRC32 verified); per-value original EventFlow observed queries/actions are audited without assuming Native permissions or absence of unobserved paths.
- 5F77B61A: nonzero filters selective default reset in FUN_027a8ad0 and FUN_027b6490; NPC Temp mode 1 uses same hash.
- 8D401DF7: signed constant -0x72bfe209 in FUN_02198d70; NPC Temp mode 2 filters this field. Mode 0 resets all in that path. Original names and higher-level triggers still unresolved.
- BED25A86: raw retained, both positive and signed hex spelling scanned. No guessed field name.

## Native storage evidence

NPC Save: u16, UniqueID < 256, flag array relative +0x1267c of resident structure; reset wrapper enumerates 10 records with stride 0x13230. NPC Memory: u8, UniqueID < 256; eight reset blocks at +0x3c with stride 0x5f0 and 160 blocks at +0x2fbc with stride 0x158. Separate live descriptor access via FUN_0265e000 uses ten outer residents, mode 0 160 descriptor slots (stride 0xa8), mode 1 eight slots (stride 0x700); descriptor +8 and +0x10 are summed to get data pointer. These are not absolute disk offsets. NPC Temp reset writes byte slots at +0x818, max 128 slots. Actual serialized save layout and all instance values remain unknown.

## Friendship

Native bands 0–29, 30–59, 60–99, 100–149, 150–199, 200–255; source default 25. FUN_021d7650 uses signed delta and a floor/level correction lookup UNK_04179ca0, actual lookup table not yet extracted. FUN_021d7310 recognizes crossing into level 3+, increments BeFriendwithVillager related counter. FUN_026b7690 writes BromideRewardSkipCount=10 in a particular path; photo reward probability/eligibility not proven. Original forced-dialogue graph contains -1/-3 deltas, and DownFriendShipCount cap from R93 is 5. R95 preserves the exact original cases and actions instead of claiming a full reward formula.

## Reference coverage and recruitment

Full 59,971 decompiled C files and original EventFlow mirror are scanned. The native Key hash function FUN_006bd550 is MurmurHash3 x86_32 seed zero, not the CRC32 field-name mechanism. Match numeric constants as candidates only, normalize signed hexadecimal representations, collect real scoped AccessKey references (query/action separately), and search quoted identifier corpus for CRC32 candidates of unknown names. No-match does not imply unused. Exact scope-matched event links are stronger than numeric constant coincidence.

Preserve full original MoveOut/camp/amiibo/forced/general talk event graphs, plus relevant operation occurrences across EventFlow. Collabo cAny, NpcInviteCheck Type 0/1/2, moving-state branches, available plot and failure flags are not definitive online eligibility. No runtime callback VA proof or actual save data supplied.

## Reproduce

```powershell
python Scripts/acnh303_r95_native_eventflags.py --root . --out artifacts/acnh303-r95
```

Artifact includes per-definition original fields and xrefs, raw-field distributions and signed native references, access-usage observations, native evidence SHA/anchors, complete relevant graphs, unresolved AccessKey list and report. All actual values remain null.
