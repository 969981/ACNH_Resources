# SpNpcParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SpNpcParam.bcsv`
SHA256：`696c34affa93f625701aa3bff46b7d3fc0d62a5432f4b84089b284fb0478d5e9`
记录数 74，行长 204，字段数 31。回填 29 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/SpNpcParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/SpNpcParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/SpNpcParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_DDA5D566 | 4 | 4 | GenderAsia | hshCstringRef | GenderAsia.hshCstringRef | candidate_name |
| hash_86AD0CE1 | 8 | 4 | GenderUsEu | hshCstringRef | GenderUsEu.hshCstringRef | candidate_name |
| hash_3CE2E8D8 | 12 | 4 | PacketId | s32 | PacketId s32 | candidate_name |
| hash_23E7C2A0 | 16 | 4 | Social | u32 | Social u32 | candidate_name |
| hash_0E3F98AA | 20 | 4 | SpHobby | hshCstringRef | SpHobby.hshCstringRef | candidate_name |
| hash_295227E5 | 24 | 4 | SpNpcAmiiboCallType | hshCstringRef | SpNpcAmiiboCallType.hshCstringRef | candidate_name |
| hash_0E7AB6A6 | 28 | 4 | VmPauseType | hshCstringRef | VmPauseType.hshCstringRef | candidate_name |
| hash_DD2D2ADC | 32 | 4 | VmRhythmType | hshCstringRef | VmRhythmType.hshCstringRef | candidate_name |
| hash_71BF253B | 36 | 2 | BromideItemID | s16 | BromideItemID s16 | candidate_name |
| hash_9611C929 | 38 | 2 | NpcSpClothSet | u16 | NpcSpClothSet u16 | candidate_name |
| hash_0F640691 | 40 | 2 | PosterItemID | s16 | PosterItemID s16 | candidate_name |
| hash_3F858678 | 42 | 2 | Smartphone | u16 | Smartphone u16 | candidate_name |
| hash_57E889B2 | 44 | 2 | SmartphoneRemakeCommonPattern | s16 | SmartphoneRemakeCommonPattern s16 | candidate_name |
| hash_F8BE7F94 | 46 | 2 | SmartphoneRemakePattern | u16 | SmartphoneRemakePattern u16 | candidate_name |
| hash_BB9C816E | 48 | 2 | Umbrella | u16 | Umbrella u16 | candidate_name |
| hash_4BCCCE37 | 50 | 2 | UmbrellaWherearen | u16 | UmbrellaWherearen u16 | candidate_name |
| hash_54706054 | 52 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_919EA52A | 54 | 1 | BirthMDay | u8 | BirthMDay u8 | candidate_name |
| hash_9456B6A3 | 55 | 1 | BirthMonth | u8 | BirthMonth u8 | candidate_name |
| hash_4CE98793 | 56 | 64 | HavokResName | string64 | HavokResName string64 | candidate_name |
| hash_2F1B930D | 120 | 8 | Label | string8 | Label string8 | candidate_name |
| hash_07D60B3D | 128 | 1 | NameWithTitle | u8 | NameWithTitle u8 | candidate_name |
| hash_66F0052F | 129 | 1 | NotWithTitle | u8 | NotWithTitle u8 | candidate_name |
| hash_B82DB36E | 130 | 1 | NotWithTitleSan | u8 | NotWithTitleSan u8 | candidate_name |
| hash_41977699 | 131 | 1 | NpcColor | u8 | NpcColor u8 | candidate_name |
| hash_48EF0398 | 132 | 64 | ResName | string64 | ResName string64 | candidate_name |
| hash_04AC1BEA | 196 | 1 | SpecialELink | u8 | SpecialELink u8 | candidate_name |
| hash_BE782346 | 197 | 1 | SpecialSLink | u8 | SpecialSLink u8 | candidate_name |
| hash_21C5BBD6 | 198 | 1 | hash_21C5BBD6 | — | — | unresolved |
| hash_E52F0037 | 199 | 1 | VillageIntervalWaitVar | u8 | VillageIntervalWaitVar u8 | candidate_name |
| hash_42F255D5 | 200 | 4 | hash_42F255D5 | — | — | unresolved |

## 历史残余语义证据

- hash_21C5BBD6: NpcActivityWaitParameter (row_hypothesis) — NPC values 2–6; adjacent to VillageIntervalWaitVar.
- hash_42F255D5: NpcBehaviorParameter (row_hypothesis) — Small integer values shared by normal/special NPCs; padding varies.
