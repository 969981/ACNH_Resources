# FieldOutsideParts.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FieldOutsideParts.bcsv`
SHA256：`17c9dce73e232747a7bd35e452d0184d27481b648c6ba88e1f32a798d6ffb3f9`
状态：parsed

行数 194，行长 48，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_493EED57 | PartsKind | 部件 类别 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B5A652FA | ReefType | Reef 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 14 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 室外部件

**用途：** 按文件名与字段名称候选推测：用于配置或描述室外部件相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FieldOutsideParts.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FieldOutsideParts.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FieldOutsideParts.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FieldOutsideParts.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 97（0 基） | 行 193（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_493EED57` 部件 类别 | 4 | 0x8F51866C / hex:6c86518f | 0xECA1CE64 / hex:64cea1ec | 0x34D0B6B2 / hex:b2b6d034 |
| `hash_B5A652FA` Reef 类型 | 8 | 0x0B1F947A / hex:7a941f0b | 0x6E04B4AE / hex:aeb4046e | 0x72C6F495 / hex:95f4c672 |
| `hash_54706054` 唯一ID | 12 | 257 / hex:0101 | 20 / hex:1400 | 298 / hex:2a01 |
| `hash_39B5A93D` 模型 名称 | 14 | "FldOutWherearenNW00" / hex:466c644f757457686572656172656e4e573030000000000000000000000000000000 | "FldOutW00" / hex:466c644f757457303000000000000000000000000000000000000000000000000000 | "FldOutSBridgeSP00" / hex:466c644f757453427269646765535030300000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 部件 类别（hash_493EED57）

去重码值 31 个，已有标签候选 30 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x8F51866C | 53 | WherearenIslands | 度假岛 Islands | crc_candidate |
| 0xC0E131F6 | 52 | OutsideSea | 外部 Sea | crc_candidate |
| 0x6A43B64B | 7 | N_Stone | N Stone | crc_candidate |
| 0x18EEEA77 | 5 | S_Beach | S Beach | crc_candidate |
| 0x1CE04383 | 5 | E_Beach | E Beach | crc_candidate |
| 0xECA1CE64 | 5 | W_Beach | W Beach | crc_candidate |
| 0x3F07B7B1 | 4 | SE_Beach | 音效 Beach | crc_candidate |
| 0x6844E2B1 | 4 | E_Stone | E Stone | crc_candidate |
| 0x98056F56 | 4 | W_Stone | W Stone | crc_candidate |
| 0xCF463A56 | 4 | SW_Beach | SW Beach | crc_candidate |
| 0x103DB3BE | 3 | W_Promontory | W Promontory | crc_candidate |
| 0x34D0B6B2 | 3 | KappeiIsland | 航平 岛屿 | crc_candidate |

### Reef 类型（hash_B5A652FA）

去重码值 24 个，已有标签候选 24 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x4ADDE7FD | 48 | N_flat | N flat | crc_candidate |
| 0x72C6F495 | 18 | S_convexity | S convexity | crc_candidate |
| 0xC21F8717 | 18 | W_convexity | W convexity | crc_candidate |
| 0x201A173E | 14 | E_flat | E flat | crc_candidate |
| 0x3485FA1D | 13 | E_convexity | E convexity | crc_candidate |
| 0xF595F6B8 | 11 | S_flat | S flat | crc_candidate |
| 0x6E04B4AE | 9 | W_flat | W flat | crc_candidate |
| 0x50973959 | 7 | SW_flat | SW flat | crc_candidate |
| 0x1E899AC9 | 6 | SE_flat | 音效 flat | crc_candidate |
| 0x188067C7 | 5 | NE_flat | NE flat | crc_candidate |
| 0x569EC457 | 5 | NW_flat | NW flat | crc_candidate |
| 0x72C1B8C6 | 5 | E_concavity | E concavity | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
