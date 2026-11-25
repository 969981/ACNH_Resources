# StructureBridgeParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureBridgeParam.bcsv`
SHA256：`90a4ed1d80f231bd72ad5bb74657de5c0fc0bbae4582c3397c75a3cd39c34d19`
状态：parsed

行数 54，行长 44，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_74BE6041 | BridgePattern | 桥梁 款式 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_EE9CE68D | BridgeTypeUniqueID | 桥梁 类型 唯一 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 12 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 桥梁参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述桥梁参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureBridgeParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureBridgeParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureBridgeParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureBridgeParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 27（0 基） | 行 53（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_74BE6041` 桥梁 款式 | 4 | 0x214F451A / hex:1a454f21 | 0xBF2BD0B9 / hex:b9d02bbf | 0xADC3C89D / hex:9dc8c3ad |
| `hash_EE9CE68D` 桥梁 类型 唯一 ID | 8 | 0 / hex:0000 | 7 / hex:0700 | 11 / hex:0b00 |
| `hash_54706054` 唯一ID | 10 | 0 / hex:0000 | 27 / hex:1b00 | 55 / hex:3700 |
| `hash_39B5A93D` 模型 名称 | 12 | "BridgeStone03" / hex:42726964676553746f6e65303300000000000000000000000000000000000000 | "BridgeReserved04" / hex:4272696467655265736572766564303400000000000000000000000000000000 | "BridgeBricksDiagonal035" / hex:427269646765427269636b73446961676f6e616c303335000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 桥梁 款式（hash_74BE6041）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x214F451A | 9 | 03 | 03 | crc_candidate |
| 0xADC3C89D | 9 | Diagonal035 | Diagonal 035 | crc_candidate |
| 0xB4D8F9DC | 9 | Diagonal025 | Diagonal 025 | crc_candidate |
| 0xBF2BD0B9 | 9 | 04 | 04 | crc_candidate |
| 0xC82CE02F | 9 | 05 | 05 | crc_candidate |
| 0xDDA93C12 | 9 | Diagonal030 | Diagonal 030 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
