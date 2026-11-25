# NpcSpClothSetParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NpcSpClothSetParam.bcsv`
SHA256：`bf207effbb6257737da932b411396cd3ba95355fc9f81ea31bc3a3dbd46a200f`
状态：parsed

行数 65，行长 116，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_2B57B24A | AcceEye | 饰品 眼睛 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC136EB5 | Bottoms | 下装 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_291A1B04 | Cap | 帽子 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CE827D47 | Shoes | 鞋 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0207A2AF | SpNpcID | 特殊 NPC ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_973FAE34 | Tool | 工具 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_870F1E29 | Tops | 上装 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 20 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_036E8EBE | Name | 名称 | 52 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 特殊 NPC 服装套装

**用途：** 按文件名与字段名称候选推测：用于配置或描述特殊 NPC 服装套装相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/NpcSpClothSetParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/NpcSpClothSetParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/NpcSpClothSetParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/NpcSpClothSetParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 32（0 基） | 行 64（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_2B57B24A` 饰品 眼睛 | 4 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_CC136EB5` 下装 | 6 | 4218 / hex:7a10 | 65534 / hex:feff | 65534 / hex:feff |
| `hash_291A1B04` 帽子 | 8 | 65534 / hex:feff | 5129 / hex:0914 | 13446 / hex:8634 |
| `hash_CE827D47` 鞋 | 10 | 7907 / hex:e31e | 65534 / hex:feff | 65534 / hex:feff |
| `hash_0207A2AF` 特殊 NPC ID | 12 | 38 / hex:2600 | 58 / hex:3a00 | 21 / hex:1500 |
| `hash_973FAE34` 工具 | 14 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_870F1E29` 上装 | 16 | 7925 / hex:f51e | 65534 / hex:feff | 65534 / hex:feff |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 38 / hex:2600 | 71 / hex:4700 |
| `hash_87BF00E8` 标签 | 20 | "SzaOfficeSummer" / hex:537a614f666669636553756d6d65720000000000000000000000000000000000 | "SpnWedding" / hex:53706e57656464696e6700000000000000000000000000000000000000000000 | "MolClean" / hex:4d6f6c436c65616e000000000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 52 | "しずえ・夏服役場セット" / hex:e38197e3819ae38188e383bbe5a48fe69c8de5bdb9e5a0b4e382bbe38383e3838800000000000000000000000000000000000000000000000000000000000000 | "パニエル・ウェディング" / hex:e38391e3838be382a8e383abe383bbe382a6e382a7e38387e382a3e383b3e382b000000000000000000000000000000000000000000000000000000000000000 | "リセット・かたづけ" / hex:e383aae382bbe38383e38388e383bbe3818be3819fe381a5e3819100000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
