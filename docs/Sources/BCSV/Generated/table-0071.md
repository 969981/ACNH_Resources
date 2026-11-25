# ItemAct.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemAct.bcsv`
SHA256：`b9e25962942e74e458d038b90ae9e0005d5f900906750f26b771c7c3abcd39a6`
记录数 82，行长 120，字段数 9。回填 8 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/ItemAct.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/ItemAct.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/ItemAct.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_EA6A09CC | 4 | 4 | AsName | hshCstringRef | AsName.hshCstringRef | candidate_name |
| hash_A0839D12 | 8 | 4 | CategoryName | hshCstringRef | CategoryName.hshCstringRef | candidate_name |
| hash_8B1904B9 | 12 | 4 | hash_8B1904B9 | — | — | unresolved |
| hash_54706054 | 16 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_31CB6B0A | 18 | 1 | Collision | u8 | Collision u8 | candidate_name |
| hash_D2A5C5CF | 19 | 1 | DemoType | u8 | DemoType u8 | candidate_name |
| hash_87BF00E8 | 20 | 32 | Label | string32 | Label string32 | candidate_name |
| hash_036E8EBE | 52 | 64 | Name | string64 | Name string64 | candidate_name |
| hash_0E387A24 | 116 | 4 | SwitchableOnWall | u8 | SwitchableOnWall u8 | candidate_name |

## 历史残余语义证据

- hash_8B1904B9: MailboxActionType (data_relation) — Five mailbox labels match CRC32 values, 77 default 629B9E5B.
