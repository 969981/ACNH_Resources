# HASH-008F 感恩节家具默认款式研究

返回 [知识库首页](README.md) · [专题索引](Research/Native-Research.md) · [研究路线](Research/Research-Roadmap.md)。

HASH-008E CI [45567828764](https://github.com/969981/ACNH_Resources/actions/runs/45567828764) PASS, artifact 15000956028. Actual original ItemParam / RecipeCraftParam 11178/924 rows, 8 exact joined model names. PlayerState cache ELF 0x5390074; three hypothesized slots each 0 read/9 write records under bounded scan (not proof of no readers). Previous raw_kind was incorrectly exported as integer of 32-byte field span; use string interpretation in this round.

Original ItemRemake git blob 59a38b7951ee59b33e1d6c70752c93d382887445 directly parsed from 1306 rows:
| ItemID | ItemRemake ID | ReBody max | ReFabric max | kit |
|---|---|---|---|---|
|13447|1295|1|-1|2|
|13448|1296|1|-1|5|
|13449|1293|1|-1|1|
|13450|1292|1|-1|1|
|13453|1297|1|-1|2|
|13818|1509|1|-1|3|
|13819|1510|1|-1|1|
|13820|1508|1|-1|2|

These are ItemRemake ItemUniqueID backrefs, forward ItemParam CB5EB33F pending exact join CI. All eight body count 2, fabric count 0, lot hash 26296DD2, D4F43B0B=0. No hemisphere encoding established by these columns alone.

## Native evidence

Pinned C exports at acabc03099dff264184465c7fd9c3b298dd1fcda. FUN_026222e0 checks item lookup, FUN_0261eff4-derived index and bit at +0xe98e0, then body count FUN_01ad7260 and fabric count FUN_01afcfa0 (CB5EB33F -> B0304B0D / 0CB402A3), returns 0 when both zero, then resolves AD0C787A in cache slot 27 and returns byte != 0. This is a predicate, not a variant generator: no hemisphere check or variant write in observed function. FUN_0261eff4 calls helpers that read recipe-related bitsets, sentinel 0x4c7b. It must not be described as a simple direct recipe ID getter.

HASH-008F script verifies full original join and control counts for non-flagged recipes with 2 body/0 fabric, scans executable ELF all B/BL to four targets, crosschecks NSO bytes, prints predicate callsite contexts and archives raw ARM64 anchor disassembly. No exact function ownership, indirect call coverage or SSA proof until subsequent verification. A further local JS CRC pass evaluated 15,337,826 signatures using remake, hemisphere, seasonal, recipe, bitset, learned/registration and type variants; zero matches. 28 unknown names unchanged.

Next: classify actual predicate callers, track boolean consumption, find actual item variant writer and hemisphere source. Do not claim hemisphere link before both dataflows converge.
