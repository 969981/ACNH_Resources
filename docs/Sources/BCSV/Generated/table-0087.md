# ItemOutfitHangerInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemOutfitHangerInfo.bcsv`
SHA256：`565fa3a9c11475c1ebbda8ea8ae23fd850295f7c0ee778034895f4e987b4ae41`
状态：parsed

行数 14，行长 112，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_9DCEA17E | ItemLayout | 道具 布局 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E06FB090 | ItemSize | 道具尺寸 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 14 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_48EF0398 | ResName | 资源 名称 | 46 | 66 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 衣架信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述衣架信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemOutfitHangerInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemOutfitHangerInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemOutfitHangerInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemOutfitHangerInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 7（0 基） | 行 13（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_9DCEA17E` 道具 布局 | 4 | 0x95EB2118 / hex:1821eb95 | 0x95EB2118 / hex:1821eb95 | 0x95EB2118 / hex:1821eb95 |
| `hash_E06FB090` 道具尺寸 | 8 | 0x8CD77CCD / hex:cd7cd78c | 0x8CD77CCD / hex:cd7cd78c | 0xF15BFBE6 / hex:e6fb5bf1 |
| `hash_54706054` 唯一ID | 12 | 0 / hex:0000 | 7 / hex:0700 | 13 / hex:0d00 |
| `hash_87BF00E8` 标签 | 14 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 | "HangerInfoCapsFullface" / hex:48616e676572496e666f4361707346756c6c6661636500000000000000000000 | "HangerInfoToolFan" / hex:48616e676572496e666f546f6f6c46616e000000000000000000000000000000 |
| `hash_48EF0398` 资源 名称 | 46 | "" / hex:000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FtrHangerCapFullface" / hex:46747248616e67657243617046756c6c6661636500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FtrHangerToolFan" / hex:46747248616e676572546f6f6c46616e0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 道具 布局（hash_9DCEA17E）

去重码值 1 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x95EB2118 | 14 | Wall_NoCol | 墙壁 无 Col | crc_candidate |

### 道具尺寸（hash_E06FB090）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x8CD77CCD | 9 | 1_0x1_0_Wall | 1 0 x 1 0 墙壁 | crc_candidate |
| 0x10B0EDE0 | 3 | 1_0x0_5_Wall | 1 0 x 0 5 墙壁 | crc_candidate |
| 0xF15BFBE6 | 2 | 0_5x1_0_Wall | 0 5 x 1 0 墙壁 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_E06FB090 | hash_87BF00E8 | [ItemSize.bcsv](table-0100.md) | 14/14 | 3/3 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
