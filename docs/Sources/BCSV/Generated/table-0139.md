# NpcCastScheduleData.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NpcCastScheduleData.bcsv`
SHA256：`f2a1419a9cdcd7db3b8a829e8c3d6eaa908b3595dddcb3fb70223da491faea88`
状态：parsed

行数 35，行长 48，数据起点 116。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_AAAE3A0F | ApplyNeedActivity | Apply 需要 活动 | 4 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC0593CC | CanDoze | 可 Doze | 5 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_69A9BB3C | CastLabel | 出场 标签 | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D507DF3E | 未知 | NPC 出场日程条件（语义别名：NpcCastScheduleCondition） | 7 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：14/35 true. |
| hash_675CA211 | EndHour | 结束 小时 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2B09D942 | EndMinute | 结束 分钟 | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7D740FA4 | EventName | 事件 名称 | 10 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A78D0CC5 | NeglectSleep | 忽略睡眠 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8AE48661 | StartHour | 开始 小时 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3835A9DD | StartMinute | 开始 分钟 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E76DB92F | UseRainGoods | 使用 雨 Goods | 45 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 演出日程

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 演出日程相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/NpcCastScheduleData.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/NpcCastScheduleData.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/NpcCastScheduleData.csv) · [结构 JSON](../../../../research/bcsv-data/schema/NpcCastScheduleData.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 17（0 基） | 行 34（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_AAAE3A0F` Apply 需要 活动 | 4 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_AC0593CC` 可 Doze | 5 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_69A9BB3C` 出场 标签 | 6 | 0 / hex:00 | 17 / hex:11 | 34 / hex:22 |
| `hash_D507DF3E` NPC 出场日程条件（语义别名：NpcCastScheduleCondition） | 7 | raw:00 / hex:00 | raw:01 / hex:01 | raw:00 / hex:00 |
| `hash_675CA211` 结束 小时 | 8 | 29 / hex:1d | 29 / hex:1d | 29 / hex:1d |
| `hash_2B09D942` 结束 分钟 | 9 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_7D740FA4` 事件 名称 | 10 | "NotEvent" / hex:4e6f744576656e74000000000000000000000000000000000000000000000000 | "NotEvent" / hex:4e6f744576656e74000000000000000000000000000000000000000000000000 | "NotEvent" / hex:4e6f744576656e74000000000000000000000000000000000000000000000000 |
| `hash_A78D0CC5` 忽略睡眠 | 42 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_8AE48661` 开始 小时 | 43 | 5 / hex:05 | 5 / hex:05 | 5 / hex:05 |
| `hash_3835A9DD` 开始 分钟 | 44 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E76DB92F` 使用 雨 Goods | 45 | 1 / hex:010000 | 0 / hex:000000 | 0 / hex:000000 |

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
