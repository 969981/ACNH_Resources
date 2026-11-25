# MessageCardDesignParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardDesignParam.bcsv`
SHA256：`e7ece24b827fe14b8481130bc7f70bcca7cfa43f43a9eb70e4d1e8953272ad7c`
记录数 76，行长 108，字段数 21。回填 19 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/MessageCardDesignParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/MessageCardDesignParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/MessageCardDesignParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_A2FE7F71 | 4 | 2 | BackColor | u16 | BackColor u16 | candidate_name |
| hash_41AFE839 | 6 | 2 | BodyColor | u16 | BodyColor u16 | candidate_name |
| hash_63A46970 | 8 | 2 | hash_63A46970 | — | — | unresolved |
| hash_57C98E5B | 10 | 2 | FootColor | u16 | FootColor u16 | candidate_name |
| hash_32C0C064 | 12 | 2 | HeadColor | u16 | HeadColor u16 | candidate_name |
| hash_990406A9 | 14 | 2 | PenColor1 | u16 | PenColor1 u16 | candidate_name |
| hash_DEA47C79 | 16 | 2 | PenColor2 | u16 | PenColor2 u16 | candidate_name |
| hash_E3C455C9 | 18 | 2 | PenColor3 | u16 | PenColor3 u16 | candidate_name |
| hash_51E489D9 | 20 | 2 | PenColor4 | u16 | PenColor4 u16 | candidate_name |
| hash_94D6CB5D | 22 | 2 | RuleColor | u16 | RuleColor u16 | candidate_name |
| hash_953983B4 | 24 | 2 | SelectableBeginDate1 | u16 | SelectableBeginDate1 u16 | candidate_name |
| hash_D299F964 | 26 | 2 | SelectableBeginDate2 | u16 | SelectableBeginDate2 u16 | candidate_name |
| hash_ADA3644A | 28 | 2 | SelectableEndDate1 | u16 | SelectableEndDate1 u16 | candidate_name |
| hash_EA031E9A | 30 | 2 | SelectableEndDate2 | u16 | SelectableEndDate2 u16 | candidate_name |
| hash_5F384120 | 32 | 2 | TextLotId | s16 | TextLotId s16 | candidate_name |
| hash_84818E10 | 34 | 2 | hash_84818E10 | — | — | unresolved |
| hash_54706054 | 36 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_24DA7ADA | 38 | 1 | Kind | u8 | Kind u8 | candidate_name |
| hash_4B9C4229 | 39 | 64 | ResourceName | string64 | ResourceName string64 | candidate_name |
| hash_AA738FED | 103 | 1 | SelectableSeason | u8 | SelectableSeason u8 | candidate_name |
| hash_7A6965C5 | 104 | 4 | UnlockTrigger | u8 | UnlockTrigger u8 | candidate_name |

## 历史残余语义证据

- hash_63A46970: MessageCardOptionalColorOrStyle (row_hypothesis) — All 76 values 0xFFFE; between color fields.
- hash_84818E10: MessageCardOptionalProperty (row_hypothesis) — 83 occurrences all 0xFFFF.
