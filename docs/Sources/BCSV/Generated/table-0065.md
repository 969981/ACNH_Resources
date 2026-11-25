# HumanAnimParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/HumanAnimParam.bcsv`
SHA256：`924409bb6900bd3d4704513d7a187a4db0d6516ec08e3c79febbe31756cef7e8`
记录数 904，行长 188，字段数 14。回填 13 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/HumanAnimParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/HumanAnimParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/HumanAnimParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_58102055 | 4 | 4 | EmoticonTool | hshCstringRef | EmoticonTool.hshCstringRef | candidate_name |
| hash_0B69EC1A | 8 | 4 | LowerSetting | hshCstringRef | LowerSetting.hshCstringRef | candidate_name |
| hash_2B68EF71 | 12 | 2 | UISortID | u16 | UISortID u16 | candidate_name |
| hash_54706054 | 14 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_9F5123D4 | 16 | 1 | AcceptPartialBone | u8 | AcceptPartialBone u8 | candidate_name |
| hash_D5217761 | 17 | 1 | hash_D5217761 | — | — | unresolved |
| hash_2C447591 | 18 | 65 | AsCommand | string65 | AsCommand string65 | candidate_name |
| hash_84761FB6 | 83 | 1 | CancelFootSE | u8 | CancelFootSE u8 | candidate_name |
| hash_FC3116B5 | 84 | 1 | CancelFootprint | u8 | CancelFootprint u8 | candidate_name |
| hash_96BA28FE | 85 | 64 | Comment | string64 | Comment string64 | candidate_name |
| hash_BA199DF0 | 149 | 1 | DisableEmoticon | u8 | DisableEmoticon u8 | candidate_name |
| hash_42AD246A | 150 | 4 | Misc | u8 | Misc u8 | candidate_name |
| hash_49803457 | 154 | 1 | MoveAs | u8 | MoveAs u8 | candidate_name |
| hash_26911C10 | 155 | 33 | ToolAsCommand | string30 | ToolAsCommand string30 | candidate_name |

## 历史残余语义证据

- hash_D5217761: AnimationOptionalParameter (row_hypothesis) — 887/904 0xFF; other small values.
