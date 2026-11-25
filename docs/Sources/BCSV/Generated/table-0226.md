# WherearenPlannerGrade.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenPlannerGrade.bcsv`
SHA256：`43dee8823454c0ae0df24d3c815e156379be17c8135f404ec0c488f0cca74b45`
状态：parsed

行数 7，行长 24，数据起点 100。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_41F6F207 | ApproachReward | 接近 奖励 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8A479556 | ApproachIncreasePerMissedNum | 接近 增加 Per Missed 数量 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0E362CE0 | ApproachIncreaseRate | 接近 增加 比率 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4C8D39F8 | ApproachRate | 接近 比率 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A6168903 | Grade | 等级 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7500325B | NewBuild | 新 Build | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7813D35B | Rank | 级别 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_127CCFD9 | Reward | 奖励 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设计师等级

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设计师等级相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenPlannerGrade.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenPlannerGrade.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenPlannerGrade.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenPlannerGrade.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 3（0 基） | 行 6（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_41F6F207` 接近 奖励 | 4 | 1.0 / hex:0000803f | 1.100000023841858 / hex:cdcc8c3f | 1.100000023841858 / hex:cdcc8c3f |
| `hash_8A479556` 接近 增加 Per Missed 数量 | 8 | 0 / hex:0000 | 14 / hex:0e00 | 4 / hex:0400 |
| `hash_0E362CE0` 接近 增加 比率 | 10 | 0 / hex:0000 | 30 / hex:1e00 | 20 / hex:1400 |
| `hash_4C8D39F8` 接近 比率 | 12 | 0 / hex:0000 | 0 / hex:0000 | 10 / hex:0a00 |
| `hash_A6168903` 等级 | 14 | 0 / hex:0000 | 3 / hex:0300 | 6 / hex:0600 |
| `hash_7500325B` 新 Build | 16 | 0 / hex:0000 | 19 / hex:1300 | 0 / hex:0000 |
| `hash_7813D35B` 级别 | 18 | 0 / hex:0000 | 0 / hex:0000 | 146 / hex:9200 |
| `hash_127CCFD9` 奖励 | 20 | 6000 / hex:7017 | 15000 / hex:983a | 40000 / hex:409c |
| `hash_54706054` 唯一ID | 22 | 0 / hex:0000 | 3 / hex:0300 | 6 / hex:0600 |

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
