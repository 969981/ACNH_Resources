# ItemMailAttachCategoryGroup.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemMailAttachCategoryGroup.bcsv`
SHA256：`785955cc712aa9196866268aa8fb0f2aaef899a2a11d4f0a51b99b491229141b`
状态：parsed

行数 3，行长 832，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E4361C86 | 未知 | 邮件附件分类 MurmurHash 列表（语义别名：MailAttachmentCategoryMurmurHashList） | 6 | 711 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_behavior：Native 79-name Murmur3 seed0 lookup and 10-byte bitmap; original NSO/ELF CI 45570889696 PASS, 6/6 group values map uniquely. ItemParam CRC32 maps 75 native categories, 8726/11178 rows; remaining 2452 rows share one unmapped raw value.；Ghidra VA：01ABA7E0, 01ABAEE0, 006BD550 |
| hash_3FEBC642 | Label | 标签 | 717 | 50 | string50 | 未知，保留原值 | 未登记表级业务证据 |
| hash_036E8EBE | Name | 名称 | 767 | 65 | string64 | 未知，保留原值 | 未登记表级业务证据 |
