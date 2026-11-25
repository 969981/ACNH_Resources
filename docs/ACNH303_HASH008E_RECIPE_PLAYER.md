# HASH-008E — PlayerStateParam residual slots and Turkey Day DIY family

返回 [知识库首页](README.md) · [专题索引](Research/Native-Research.md) · [研究路线](Research/Research-Roadmap.md)。

Original RecipeCraftParam CSV from archived commit `acabc03099dff264184465c7fd9c3b298dd1fcda` was read in full (924 rows): AD0C787A=1 iff SelectCalendarEventSeason=HarvestFestival (8/924). All eight InvalidCard=1, EFA5DDA4=0, BoardColorID=50, serial IDs 6200–6207. Crosschecked public item/recipe IDs and names (not yet native ItemParam binary JOIN):

| Recipe ID | Item ID | Serial | Simplified Chinese | Model name (external) |
|---:|---:|---:|---|---|
| 740 | 13447 | 6202 | 感恩节盆栽架 | FtrHarvestStand |
| 741 | 13448 | 6203 | 感恩节壁炉 | FtrHarvestFireplace |
| 742 | 13449 | 6207 | 感恩节装饰 | FtrHarvestDecoration |
| 743 | 13450 | 6200 | 感恩节椅 | FtrHarvestChairS |
| 745 | 13453 | 6201 | 感恩节桌 | FtrHarvestTableL |
| 747 | 13818 | 6204 | 感恩节砂锅炖菜 | FtrHarvestEnamelpod |
| 748 | 13819 | 6206 | 感恩节麦子装饰 | FtrHarvestWheat |
| 749 | 13820 | 6205 | 感恩节桌上布置 | FtrHarvestTablesetting |

External sources: https://mpql.net/tools/acnh/codes/item-list/ and https://nookipedia.com/wiki/DIY_recipes/Turkey_Day , https://nookipedia.com/wiki/Item:Cozy_Turkey_Day_DIY_(New_Horizons). Exactly the eight Cozy Turkey Day DIY furniture recipes, not the four Turkey Day cooking recipes added in 2.0. Hemisphere-specific default variants and recipe bundle/direct learning are competing semantic hypotheses; native prior consumer FUN_026222e0 tests a recipe bitset before returning AD0C787A. No original name or exact semantics proved.

## PlayerStateParam (329 original records)

- 5B6D5751: 16 nonzero, ordinal30, row+56, proposed cache+0x78; includes Wait, Move, RemoteMove, DemoWait, MenuWait, ToolBreakDemo, HalfAsleepTurnFront.
- 65FD6B0D: 5 nonzero, ordinal33, row+59, proposed cache+0x84; DemoSitSpeak, SubHostSceneChangeWait, SubHostWaitMainHostDoorOutEnd, Watering, Delivery.
- A84507AA: 225 nonzero, ordinal38, row+111, proposed cache+0x98; diverse movement/interaction states, conversation/menu/pickup and many tool transitions unset. No exact business semantics.
- Known shared GOT pointer ELF 0x04AC2FE8 from original decompiler evidence. New standalone script authenticates original NSO/ELF, resolves pointer via original relocation, scans all executable words for direct/relocated references; reports aligned 32-bit reads separately from writes and overlapping stores. Slots still hypotheses, no automatic ordinal promotion. Bounded scan misses cross-block/register-indexed references.

## Executed local CRC32 search

| Hash | Evaluations | Hits |
|---|---:|---:|
| AD0C787A | 3145890 | 0 |
| 5B6D5751 | 2036382 | 0 |
| 65FD6B0D | 1546384 | 0 |
| A84507AA | 1596036 | 0 |
| EFA5DDA4 | 891090 | 0 |
| Total | 9215782 | 0 |

Search combined up to 3 domain words (special 4-part hemisphere patterns), typed suffixes, lexical constraints. Counts are evaluations, not globally deduplicated signatures. No field-name promotion. Original binary ItemParam exceeds connector limit; new narrow workflow performs actual binary join with original ItemParam Git blob 431bbd26a575197a1bd963c1721b093ae3e4df84 and cache scan. CI pending. Prior full SSA CI remains pending.
