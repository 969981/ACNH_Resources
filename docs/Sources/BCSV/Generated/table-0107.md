# LifeTips.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/LifeTips.bcsv`
SHA256：`90d556646c0c4b97e2b336dd8003f5bc37077ca6a08ceff734e4d430746e9eb6`
记录数 240，行长 36，字段数 8。回填 7 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/LifeTips.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/LifeTips.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/LifeTips.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_5F4976AC | 4 | 4 | CloseItemUniqueId | s32 | CloseItemUniqueId s32 | candidate_name |
| hash_912CA5F0 | 8 | 4 | CloseLandFlagId | s32 | CloseLandFlagId s32 | candidate_name |
| hash_BE9EE5F8 | 12 | 4 | ClosePlayerFlagId | s32 | ClosePlayerFlagId s32 | candidate_name |
| hash_CF30F72D | 16 | 4 | OpenLandFlagId | s32 | OpenLandFlagId s32 | candidate_name |
| hash_0F6D306E | 20 | 4 | OpenPlayerFlagId | s32 | OpenPlayerFlagId s32 | candidate_name |
| hash_54706054 | 24 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_D3978A49 | 26 | 1 | hash_D3978A49 | — | — | unresolved |
| hash_AAC49213 | 27 | 9 | TalkingNpcLabel | string8 | TalkingNpcLabel string8 | candidate_name |

## 历史残余语义证据

- hash_D3978A49: LifeTipConditionFlag (row_hypothesis) — 152/240 true; exact purpose unknown.
