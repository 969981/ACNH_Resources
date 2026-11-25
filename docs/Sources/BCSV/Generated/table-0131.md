# MysteryTourFieldParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MysteryTourFieldParam.bcsv`
SHA256：`87117d48180f5c6cdb0a62db233e4e5a2ac56f1d31fdb12e8cb13d1283dc7ed3`
状态：parsed

行数 46，行长 12，数据起点 44。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_E8FA8B93 | MysteryTourFieldOutside | 神秘 旅行 场景 外部 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 4 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 离岛旅行场景

**用途：** 按文件名与字段名称候选推测：用于配置或描述离岛旅行场景相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MysteryTourFieldParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MysteryTourFieldParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MysteryTourFieldParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MysteryTourFieldParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 23（0 基） | 行 45（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_E8FA8B93` 神秘 旅行 场景 外部 | 4 | 0x82FAD3E7 / hex:e7d3fa82 | 0x82FAD3E7 / hex:e7d3fa82 | 0xD17EC890 / hex:90c87ed1 |
| `hash_54706054` 唯一ID | 8 | 0 / hex:00000000 | 25 / hex:19000000 | 48 / hex:30000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 神秘 旅行 场景 外部（hash_E8FA8B93）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x82FAD3E7 | 20 | NoRiver | 无 River | crc_candidate |
| 0xD17EC890 | 13 | EastRiver | East River | crc_candidate |
| 0xD702AC9D | 13 | WestRiver | West River | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
