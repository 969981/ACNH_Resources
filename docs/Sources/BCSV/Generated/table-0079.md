# ItemMailAttachCategoryGroup.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemMailAttachCategoryGroup.bcsv`
SHA256：`785955cc712aa9196866268aa8fb0f2aaef899a2a11d4f0a51b99b491229141b`
记录数 3，行长 832，字段数 4。回填 3 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/ItemMailAttachCategoryGroup.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/ItemMailAttachCategoryGroup.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/ItemMailAttachCategoryGroup.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_54706054 | 4 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_E4361C86 | 6 | 711 | hash_E4361C86 | — | — | unresolved |
| hash_3FEBC642 | 717 | 50 | Label | string50 | Label string50 | candidate_name |
| hash_036E8EBE | 767 | 65 | Name | string64 | Name string64 | candidate_name |

## 历史残余语义证据

- hash_E4361C86: MailAttachmentCategoryHashList (data_relation) — Three pipe-separated hex CRC lists; cross-table category join pending CI.
