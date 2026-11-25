# FgFlowerHeredity.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FgFlowerHeredity.bcsv`
SHA256：`b5ca86e91bff7cd9f5716504774d0f6ea67d1c182954db4a54285c2718d166d7`
状态：parsed

行数 270，行长 20，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_9B7AA0A0 | Kind | 类别 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_6AA33BF0 | Name | 名称 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_753336DD | NameSeedLings | 名称 Seed Lings | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_08D23365 | DefaultHeredity | 默认 继承 | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C7208ADE | HeredityA | 继承 A | 13 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D5952530 | HeredityB | 继承 B | 14 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6D294255 | HeredityC | 继承 C | 15 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0FE7AEC | HeredityD | 继承 D | 16 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 花卉遗传

**用途：** 按文件名与字段名称候选推测：用于配置或描述花卉遗传相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FgFlowerHeredity.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FgFlowerHeredity.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FgFlowerHeredity.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FgFlowerHeredity.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 135（0 基） | 行 269（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_9B7AA0A0` 类别 | 4 | 0x95369815 / hex:15983695 | 0x6548ADC3 / hex:c3ad4865 | 0xDBE0C47E / hex:7ec4e0db |
| `hash_6AA33BF0` 名称 | 8 | 60261 / hex:65eb | 60019 / hex:73ea | 60382 / hex:deeb |
| `hash_753336DD` 名称 Seed Lings | 10 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_08D23365` 默认 继承 | 12 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_C7208ADE` 继承 A | 13 | 0 / hex:00 | 0 / hex:00 | 2 / hex:02 |
| `hash_D5952530` 继承 B | 14 | 0 / hex:00 | 0 / hex:00 | 2 / hex:02 |
| `hash_6D294255` 继承 C | 15 | 0 / hex:00 | 0 / hex:00 | 2 / hex:02 |
| `hash_F0FE7AEC` 继承 D | 16 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 类别（hash_9B7AA0A0）

去重码值 8 个，已有标签候选 8 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x95369815 | 81 | FlwRose | Flw Rose | crc_candidate |
| 0x04EA55C1 | 27 | FlwPansy | Flw Pansy | crc_candidate |
| 0x6548ADC3 | 27 | FlwCosmos | Flw Cosmos | crc_candidate |
| 0x988CBE5B | 27 | FlwHyacinth | Flw Hyacinth | crc_candidate |
| 0xDBE0C47E | 27 | FlwMum | Flw Mum | crc_candidate |
| 0xE464A5D8 | 27 | FlwTulip | Flw Tulip | crc_candidate |
| 0xF82696DA | 27 | FlwLily | Flw Lily | crc_candidate |
| 0xFDCC4E67 | 27 | FlwAnemones | Flw Anemones | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_9B7AA0A0 | hash_87BF00E8 | [ItemUnitIcon.bcsv](table-0104.md) | 243/270 | 7/8 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
