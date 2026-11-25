# HASH-008D — 28 residual BCSV hashes: bounded CRC search and native cache evidence

Source evidence: archived commit `acabc03099dff264184465c7fd9c3b298dd1fcda`, Ghidra 12.2 decompiler exports under `derived/3.0.3/ghidra12.2/c/`. The active research branch is now `research`; no deleted branch is recreated.

## Executed searches

- 2,065 historical and external candidate signatures: 3,520,783 spelling/type CRC evaluations, no match.
- Two-sided IEEE CRC32 state matching across all 28 targets: 4,980,861 reverse probes; 117,698,001,918 paired combinations before final filters (not an equivalent number of CRC evaluations). 19 exact collisions involving 10 hashes; all 19 are unsubstantiated and excluded from the name dictionary.
- Native-behavior-directed candidate search: 3,099,454 CRC evaluations, no match.
- New credible original header names: 0. Remaining header hashes: 28.

## Explicit decompiler evidence

| Hash | Table | Slot | Cache-relative offset | Ghidra function(s) | Observed use |
|---|---|---:|---|---|---|
| 63F77486 | PlayerStateParam | 14 | 0x38 | [02377f60](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/7f/02377f60.c) | Zero byte enters state-copy/update path |
| 5DCF7B24 | PlayerStateParam | 15 | 0x3C | [02375730](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/57/02375730.c) | False/missing clears +0x1820, +0x1844 and bit 19 of +0x17CC |
| 16E483F0 | PlayerStateParam | 16 | 0x40 | [02558820](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/88/02558820.c), [02559600](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/96/02559600.c) | Conditional player-record copying; sole nonzero BCSV row ScoopDigGetDemo |
| 2B6186A0 | PlayerStateParam | 34 | 0x88 | [0251d1e0](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/d1/0251d1e0.c) | Nonzero returns false early |
| EFA5DDA4 | RecipeCraftParam | 25 | 0x64 | [02626600](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/66/02626600.c) | Nonzero required when valid computed float exceeds 1000 |
| AD0C787A | RecipeCraftParam | 27 | 0x6C | [026222e0](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/22/026222e0.c) | Boolean result after recipe lookup and bitset check |

PlayerStateParam uses a shared pointer at Ghidra `PTR_DAT_04bc2fe8`; initialization covers 0xA8 bytes (42 signed 32-bit offsets). RecipeCraftParam uses direct global cache base Ghidra 0x055576F4 (module-relative 0x054576F4 with image-base slide 0x100000). Slot25 = 0x05557758, slot27 = 0x05557760. These mappings come from explicit descriptor hash comparisons and cache load/store patterns in the decompiler output; the current round does not independently recheck raw instructions or relocation contents. Six slots equal original descriptor ordinals, which is evidence for these slots only, not a global rule. Earlier WherearenRoll 8F30AA9F slot14 remains a prior candidate.

## Acceptance policy

Do not promote arbitrary CRC matches or inferred English aliases to original field names. Distinguish CRC exactness, storage semantics, cache-slot association, gameplay meaning, and source-name confirmation. The full SSA CI 45562239974 still has no final result at the time of writing. Next: remaining PlayerStateParam hashes, recipe-family item-ID join, and exact native consumer context.