# EventFlagsLifeSupportDailyParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventFlagsLifeSupportDailyParam.bcsv`
SHA256：`89910d1436a05ad8c997b3e50421edfbb5f02206f04af1bc4480f9dc4427c2c0`
记录数 219，行长 228，字段数 21。回填 20 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/EventFlagsLifeSupportDailyParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/EventFlagsLifeSupportDailyParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/EventFlagsLifeSupportDailyParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_B5761610 | 4 | 4 | FlagsUiType | hshCstringRef | FlagsUiType.hshCstringRef | candidate_name |
| hash_5971A42E | 8 | 4 | WaitFrame | u32 | WaitFrame u32 | candidate_name |
| hash_8792265F | 12 | 2 | AppearValue | u16 | AppearValue u16 | candidate_name |
| hash_7EABEFAE | 14 | 2 | GenreID | u16 | GenreID u16 | candidate_name |
| hash_C33A894E | 16 | 2 | ItemNameUniqueID | u16 | ItemNameUniqueID u16 | candidate_name |
| hash_0110B14C | 18 | 2 | MaxValue | u16 | MaxValue u16 | candidate_name |
| hash_74F1F060 | 20 | 2 | MsID | u16 | MsID u16 | candidate_name |
| hash_127CCFD9 | 22 | 2 | Reward | u16 | Reward u16 | candidate_name |
| hash_54706054 | 24 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_0329D696 | 26 | 1 | BonusFive | u8 | BonusFive u8 | candidate_name |
| hash_0153341A | 27 | 1 | CanSelectEDay | u8 | CanSelectEDay u8 | candidate_name |
| hash_679E3850 | 28 | 1 | CancelEDay | u8 | CancelEDay u8 | candidate_name |
| hash_AFB1F366 | 29 | 1 | CountOtherVillage | u8 | CountOtherVillage u8 | candidate_name |
| hash_FA93F14B | 30 | 1 | FlagsFlowAccess | u8 | FlagsFlowAccess u8 | candidate_name |
| hash_C47FE703 | 31 | 1 | IsEDay | u8 | IsEDay u8 | candidate_name |
| hash_45F320F2 | 32 | 64 | Key | string64 | Key string64 | candidate_name |
| hash_85CF1615 | 96 | 128 | Name | string128 | Name string128 | candidate_name |
| hash_60DA5FEF | 224 | 1 | NetPlaySelect | u8 | NetPlaySelect u8 | candidate_name |
| hash_90CAFFC6 | 225 | 1 | hash_90CAFFC6 | — | — | unresolved |
| hash_E07863AB | 226 | 1 | SpecialSelect | u8 | SpecialSelect u8 | candidate_name |
| hash_F163E8BE | 227 | 1 | Weighting | u8 | Weighting u8 | candidate_name |

## 历史残余语义证据

- hash_90CAFFC6: DailySpecificTargetCondition (row_hypothesis) — Specific target capture task flag.
