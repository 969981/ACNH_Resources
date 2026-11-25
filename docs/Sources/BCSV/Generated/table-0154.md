# RecipeCraftParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RecipeCraftParam.bcsv`
SHA256：`188d486ad322984b8d8b344aa34c0c307be8907ab560eaca27122855189a4c87`
记录数 924，行长 140，字段数 28。回填 26 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/RecipeCraftParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/RecipeCraftParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/RecipeCraftParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_5F405BFB | 4 | 4 | BoardColorID | u32 | BoardColorID u32 | candidate_name |
| hash_7F5B6179 | 8 | 4 | CraftRecipeSeason | hshCstringRef | CraftRecipeSeason.hshCstringRef | candidate_name |
| hash_478B74E4 | 12 | 4 | CraftRecipeSelectSeasonType | hshCstringRef | CraftRecipeSelectSeasonType.hshCstringRef | candidate_name |
| hash_34A742AD | 16 | 4 | CraftUnlock | hshCstringRef | CraftUnlock.hshCstringRef | candidate_name |
| hash_CDE5164F | 20 | 4 | NPCUnlock | hshCstringRef | NPCUnlock.hshCstringRef | candidate_name |
| hash_FFE9B35B | 24 | 4 | RecipeDataType | hshCstringRef | RecipeDataType.hshCstringRef | candidate_name |
| hash_10FC6F17 | 28 | 4 | TradeDifficultyLevel | hshCstringRef | TradeDifficultyLevel.hshCstringRef | candidate_name |
| hash_9C4EFA45 | 32 | 4 | TradeTicketBasePrice | u32 | TradeTicketBasePrice u32 | candidate_name |
| hash_3711677B | 36 | 4 | VillagerOpenNum | u32 | VillagerOpenNum u32 | candidate_name |
| hash_13A65775 | 40 | 2 | Amount1 | u16 | Amount1 u16 | candidate_name |
| hash_54062DA5 | 42 | 2 | Amount2 | u16 | Amount2 u16 | candidate_name |
| hash_69660415 | 44 | 2 | Amount3 | u16 | Amount3 u16 | candidate_name |
| hash_DB46D805 | 46 | 2 | Amount4 | u16 | Amount4 u16 | candidate_name |
| hash_E626F1B5 | 48 | 2 | Amount5 | u16 | Amount5 u16 | candidate_name |
| hash_A1868B65 | 50 | 2 | Amount6 | u16 | Amount6 u16 | candidate_name |
| hash_89A3482C | 52 | 2 | Item | u16 | Item u16 | candidate_name |
| hash_1BBFA75E | 54 | 2 | Material1 | u16 | Material1 u16 | candidate_name |
| hash_5C1FDD8E | 56 | 2 | Material2 | u16 | Material2 u16 | candidate_name |
| hash_617FF43E | 58 | 2 | Material3 | u16 | Material3 u16 | candidate_name |
| hash_D35F282E | 60 | 2 | Material4 | u16 | Material4 u16 | candidate_name |
| hash_EE3F019E | 62 | 2 | Material5 | u16 | Material5 u16 | candidate_name |
| hash_A99F7B4E | 64 | 2 | Material6 | u16 | Material6 u16 | candidate_name |
| hash_39DEDE36 | 66 | 2 | SerialID | s16 | SerialID s16 | candidate_name |
| hash_54706054 | 68 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_3CCCA419 | 70 | 1 | InvalidCard | u8 | InvalidCard u8 | candidate_name |
| hash_EFA5DDA4 | 71 | 1 | hash_EFA5DDA4 | — | — | unresolved |
| hash_33DDEFC8 | 72 | 64 | SelectCalendarEventSeason | string64 | SelectCalendarEventSeason string64 | candidate_name |
| hash_AD0C787A | 136 | 4 | hash_AD0C787A | — | — | unresolved |

## 历史残余语义证据

- hash_EFA5DDA4: RecipeThresholdCondition (native_field_read) — Nonzero required on computed float >1000 path.
- hash_AD0C787A: EnvironmentDependentDefaultReBody (native_behavior) — Five predicate callsites and two machine-code authenticated low-three-bit writes; actual hemisphere member producers unverified.
