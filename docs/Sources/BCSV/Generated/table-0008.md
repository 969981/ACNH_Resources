# CalendarEventJuneBrideReward.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CalendarEventJuneBrideReward.bcsv`
SHA256：`cfc70626570cdd6f99537f8bbddf250d7301739c23366f2db6015365621a201d`
状态：parsed

行数 6，行长 16，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_612BC6CF | UniqueID | 唯一ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_60836EAA | PriorityReward | 优先级 奖励 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_657550B3 | SubordinateReward | 下级 奖励 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7C226372 | JuneBrideProgress | 6月 Bride Progress | 12 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 婚礼季奖励

**用途：** 按文件名与字段名称候选推测：用于配置或描述婚礼季奖励相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CalendarEventJuneBrideReward.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CalendarEventJuneBrideReward.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CalendarEventJuneBrideReward.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CalendarEventJuneBrideReward.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 3（0 基） | 行 5（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_612BC6CF` 唯一ID | 4 | 0 / hex:00000000 | 3 / hex:03000000 | 5 / hex:05000000 |
| `hash_60836EAA` 优先级 奖励 | 8 | 12401 / hex:7130 | 12404 / hex:7430 | 12402 / hex:7230 |
| `hash_657550B3` 下级 奖励 | 10 | 12407 / hex:7730 | 12403 / hex:7330 | 12410 / hex:7a30 |
| `hash_7C226372` 6月 Bride Progress | 12 | 1 / hex:01000000 | 4 / hex:04000000 | 6 / hex:06000000 |

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
