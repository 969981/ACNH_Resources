# SoundHaniwaOfDrums.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SoundHaniwaOfDrums.bcsv`
SHA256：`9486133f15d15e25fb585aba5df55ec753bbe11cf5fbbfe380d725b88bc5f268`
状态：parsed

行数 5，行长 16，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_09AD7622 | TypePriority | 类型 优先级 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3637EBB9 | RefItemUniqueID | 引用 道具 唯一 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B88EBFE | SingTriggerRatio | Sing 触发 Ratio | 12 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 陶俑鼓组

**用途：** 按文件名与字段名称候选推测：用于配置或描述陶俑鼓组相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/SoundHaniwaOfDrums.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/SoundHaniwaOfDrums.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/SoundHaniwaOfDrums.csv) · [结构 JSON](../../../../research/bcsv-data/schema/SoundHaniwaOfDrums.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 2（0 基） | 行 4（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_09AD7622` 类型 优先级 | 4 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_3637EBB9` 引用 道具 唯一 ID | 8 | 14074 / hex:fa36 | 14076 / hex:fc36 | 14078 / hex:fe36 |
| `hash_54706054` 唯一ID | 10 | 4 / hex:0400 | 6 / hex:0600 | 8 / hex:0800 |
| `hash_9B88EBFE` Sing 触发 Ratio | 12 | 100 / hex:64000000 | 100 / hex:64000000 | 100 / hex:64000000 |

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
