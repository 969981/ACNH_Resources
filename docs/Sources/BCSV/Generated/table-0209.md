# WherearenFacilityActionTypeParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenFacilityActionTypeParam.bcsv`
SHA256：`54dfb55456cbccfbc338efee86e164053057f2c9867faef45701408490f39ee4`
记录数 61，行长 448，字段数 16。回填 15 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/WherearenFacilityActionTypeParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/WherearenFacilityActionTypeParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/WherearenFacilityActionTypeParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_613C3C15 | 4 | 4 | LookAtType | hshCstringRef | LookAtType.hshCstringRef | candidate_name |
| hash_E188994E | 8 | 4 | NpcCreateType | hshCstringRef | NpcCreateType.hshCstringRef | candidate_name |
| hash_B422539E | 12 | 4 | NpcFtrActionInterest | hshCstringRef | NpcFtrActionInterest.hshCstringRef | candidate_name |
| hash_87589DCE | 16 | 4 | NpcSetType | hshCstringRef | NpcSetType.hshCstringRef | candidate_name |
| hash_2CA34410 | 20 | 2 | NpcFtrActionTool | u16 | NpcFtrActionTool u16 | candidate_name |
| hash_DE02419D | 22 | 2 | NpcFtrActionTool2 | u16 | NpcFtrActionTool2 u16 | candidate_name |
| hash_E362682D | 24 | 2 | NpcFtrActionTool3 | u16 | NpcFtrActionTool3 u16 | candidate_name |
| hash_54706054 | 26 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_721730B8 | 28 | 32 | EntryName | string32 | EntryName string32 | candidate_name |
| hash_0AC9E9A2 | 60 | 64 | HHDFtrType | string64 | HHDFtrType string64 | candidate_name |
| hash_13AB5198 | 124 | 64 | Label | string64 | Label string64 | candidate_name |
| hash_036E8EBE | 188 | 64 | Name | string64 | Name string64 | candidate_name |
| hash_26E57A14 | 252 | 1 | NearbyInteract | u8 | NearbyInteract u8 | candidate_name |
| hash_6C6FDB31 | 253 | 64 | NpcFtrActionAsName | string64 | NpcFtrActionAsName string64 | candidate_name |
| hash_B5B58FF4 | 317 | 64 | NpcInteractionAsName | string64 | NpcInteractionAsName string64 | candidate_name |
| hash_630F2B53 | 381 | 67 | hash_630F2B53 | — | — | unresolved |

## 历史残余语义证据

- hash_630F2B53: NpcInteractionTargetActionName (data_relation) — All 10 nonempty values exactly equal another row's Name, runtime consumption unverified.
