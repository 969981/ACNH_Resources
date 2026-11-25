# ItemUIFurnitureCategory.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemUIFurnitureCategory.bcsv`
SHA256：`fe2575357b26e59d35ab98e0220c97492a792b5f61d6998236d68b5ab6225519`
状态：parsed

行数 256，行长 140，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A4686E5D | SmallGenre | Small 类别 | 4 | 4 | hshCstringRef | group_hash | 表级解析字典（TYPED） |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_13AB5198 | Label | 标签 | 10 | 64 | string64 | label | 表级解析字典（TYPED） |
| hash_036E8EBE | Name | 名称 | 74 | 66 | string64 | description_ja | 表级解析字典（TYPED） |
