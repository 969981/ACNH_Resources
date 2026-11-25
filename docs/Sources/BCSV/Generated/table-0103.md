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

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 家具 UI 分类

**用途：** 家具原生 UI 用途分类。

**证据等级：** 已有专题文档（[专题证据](../ItemUIFurnitureCategory.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemUIFurnitureCategory.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemUIFurnitureCategory.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemUIFurnitureCategory.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemUIFurnitureCategory.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 128（0 基） | 行 255（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A4686E5D` Small 类别 | 4 | 0x64C26B81 / hex:816bc264 | 0xFD590339 / hex:390359fd | 0x3C1965F3 / hex:f365193c |
| `hash_54706054` 唯一ID | 8 | 2 / hex:0200 | 249 / hex:f900 | 194 / hex:c200 |
| `hash_13AB5198` 标签 | 10 | "Chair" / hex:43686169720000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FloorLEGO" / hex:466c6f6f724c45474f00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FieldStone" / hex:4669656c6453746f6e65000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 74 | "イス・スツール" / hex:e382a4e382b9e383bbe382b9e38384e383bce383ab000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "◆◆LEGO" / hex:e29786e297864c45474f0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "外専用：岩" / hex:e5a496e5b082e794a8efbc9ae5b2a9000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### Small 类别（hash_A4686E5D）

去重码值 60 个，已有标签候选 60 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xAFE33FB4 | 46 | WallNormal | 墙壁 法线 | crc_candidate |
| 0xCAB3A267 | 39 | FloorIndoor | 地板 室内 | crc_candidate |
| 0xC911A949 | 13 | EventGoods | 事件 Goods | crc_candidate |
| 0xFD590339 | 13 | FloorOutdoor | 地板 室外 | crc_candidate |
| 0x2715B2C0 | 12 | Others | Others | crc_candidate |
| 0x278E0840 | 10 | WallSpecial | 墙壁 特殊 | crc_candidate |
| 0x20CBC83A | 9 | RugSpecial | Rug 特殊 | crc_candidate |
| 0x4D77A660 | 9 | HobbyGoods | 爱好 Goods | crc_candidate |
| 0x0656F735 | 8 | FacilityGoods | 设施 Goods | crc_candidate |
| 0x170CF1E2 | 7 | Tree | Tree | crc_candidate |
| 0xAF583246 | 6 | RugQuadrilateral | Rug Quadrilateral | crc_candidate |
| 0x27AB1990 | 5 | EntertainmentAppliances | Entertainment Appliances | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_A0839D12 | hash_13AB5198 | [ItemAct.bcsv](table-0071.md) | 79/82 | 4/5 |
| 入向 | hash_16A66E06 | hash_13AB5198 | [ItemParam.bcsv](table-0089.md) | 11149/11178 | 4/5 |
| 入向 | hash_8221388C | hash_13AB5198 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 251/251 |
| 入向 | hash_041C3234 | hash_13AB5198 | [ItemParam.bcsv](table-0089.md) | 11177/11178 | 5/6 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
