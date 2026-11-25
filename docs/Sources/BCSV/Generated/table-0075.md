# ItemFilter.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemFilter.bcsv`
SHA256：`287d30d15a4849318324d9f5ba39019f3f6f2efa6a6b47c98f57fcc4bfd6f4d7`
状态：parsed

行数 22，行长 72，数据起点 180。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_AB9B88D6 | ItemKind1 | 道具 类别 1 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D6424DB4 | ItemKind10 | 道具 类别 10 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EB226404 | ItemKind11 | 道具 类别 11 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC821ED4 | ItemKind12 | 道具 类别 12 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_91E23764 | ItemKind13 | 道具 类别 13 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_23C2EB74 | ItemKind14 | 道具 类别 14 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1EA2C2C4 | ItemKind15 | 道具 类别 15 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EC3BF206 | ItemKind2 | 道具 类别 2 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D15BDBB6 | ItemKind3 | 道具 类别 3 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_637B07A6 | ItemKind4 | 道具 类别 4 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5E1B2E16 | ItemKind5 | 道具 类别 5 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_19BB54C6 | ItemKind6 | 道具 类别 6 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_24DB7D76 | ItemKind7 | 道具 类别 7 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A68BEAA7 | ItemKind8 | 道具 类别 8 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9BEBC317 | ItemKind9 | 道具 类别 9 | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 34 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_FFE069A3 | CheckDonation | 检查 Donation | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8771AA09 | ItemNum | 道具 数量 | 37 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 38 | 34 | string32 | label | 表级解析字典（TYPED） |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 道具过滤规则

**用途：** 物品业务过滤参数。

**证据等级：** 已有专题文档（[专题证据](../ItemFilter.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemFilter.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemFilter.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemFilter.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemFilter.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 11（0 基） | 行 21（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_AB9B88D6` 道具 类别 1 | 4 | 105 / hex:6900 | 107 / hex:6b00 | 92 / hex:5c00 |
| `hash_D6424DB4` 道具 类别 10 | 6 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_EB226404` 道具 类别 11 | 8 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_AC821ED4` 道具 类别 12 | 10 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_91E23764` 道具 类别 13 | 12 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_23C2EB74` 道具 类别 14 | 14 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_1EA2C2C4` 道具 类别 15 | 16 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_EC3BF206` 道具 类别 2 | 18 | 106 / hex:6a00 | 188 / hex:bc00 | 187 / hex:bb00 |
| `hash_D15BDBB6` 道具 类别 3 | 20 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_637B07A6` 道具 类别 4 | 22 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_5E1B2E16` 道具 类别 5 | 24 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_19BB54C6` 道具 类别 6 | 26 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_24DB7D76` 道具 类别 7 | 28 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_A68BEAA7` 道具 类别 8 | 30 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_9BEBC317` 道具 类别 9 | 32 | 188 / hex:bc00 | 188 / hex:bc00 | 188 / hex:bc00 |
| `hash_54706054` 唯一ID | 34 | 0 / hex:0000 | 11 / hex:0b00 | 22 / hex:1600 |
| `hash_FFE069A3` 检查 Donation | 36 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_8771AA09` 道具 数量 | 37 | 1 / hex:01 | 1 / hex:01 | -1 / hex:ff |
| `hash_87BF00E8` 标签 | 38 | "RcoDonationForMuseum" / hex:52636f446f6e6174696f6e466f724d757365756d0000000000000000000000000000 | "OwlDonation1_6" / hex:4f776c446f6e6174696f6e315f360000000000000000000000000000000000000000 | "CloudIslandGyroid_Pitfall" / hex:436c6f756449736c616e644779726f69645f50697466616c6c000000000000000000 |

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
