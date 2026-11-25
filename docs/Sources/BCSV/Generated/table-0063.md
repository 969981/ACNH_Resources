# GmoFootprintParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/GmoFootprintParam.bcsv`
SHA256：`dcb5a61ee1d8303c9ab3020780377638c3c6304c59d42f1105b37168cc459f9e`
状态：parsed

行数 14，行长 144，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_6D4BD7DA | Effect | 效果 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0FD26913 | Sound | 声音 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_85CF1615 | Name | 名称 | 14 | 130 | string128 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 足迹参数（Gmo）

**用途：** 按文件名与字段名称候选推测：用于配置或描述足迹参数（Gmo）相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/GmoFootprintParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/GmoFootprintParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/GmoFootprintParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/GmoFootprintParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 7（0 基） | 行 13（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_6D4BD7DA` 效果 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0x8AADF400 / hex:00f4ad8a | 0x04EC697B / hex:7b69ec04 |
| `hash_0FD26913` 声音 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xDF4042C0 / hex:c04240df | 0x04EC697B / hex:7b69ec04 |
| `hash_54706054` 唯一ID | 12 | 20 / hex:1400 | 29 / hex:1d00 | 38 / hex:2600 |
| `hash_85CF1615` 名称 | 14 | "なし" / hex:e381aae3819700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "素体足：長まる" / hex:e7b4a0e4bd93e8b6b3efbc9ae995b7e381bee3828b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "靴：パンプス" / hex:e99db4efbc9ae38391e383b3e38397e382b900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 效果（hash_6D4BD7DA）

去重码值 9 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD31B604F | 6 | Circle | Circle | crc_candidate |
| 0x00890130 | 1 | Bird | Bird | crc_candidate |
| 0x04EC697B | 1 | Pumps | Pumps | crc_candidate |
| 0x3C0C07A0 | 1 | Bird2 | Bird 2 | crc_candidate |
| 0x7ADB90D6 | 1 | Hoof | Hoof | crc_candidate |
| 0x8AADF400 | 1 | Oval | Oval | crc_candidate |
| 0xA5C40805 | 1 | Pad | Pad | crc_candidate |
| 0xAE079C75 | 1 | ThinOval | Thin Oval | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

### 声音（hash_0FD26913）

去重码值 8 个，已有标签候选 8 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDF4042C0 | 7 | Socks | 袜子 | crc_candidate |
| 0x00890130 | 1 | Bird | Bird | crc_candidate |
| 0x04EC697B | 1 | Pumps | Pumps | crc_candidate |
| 0x187D5B6F | 1 | Geta | Geta | crc_candidate |
| 0x6127B0EC | 1 | Hard | Hard | crc_candidate |
| 0xB4AC9F31 | 1 | Naked | Naked | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |
| 0xDFB88A49 | 1 | Soft | Soft | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
