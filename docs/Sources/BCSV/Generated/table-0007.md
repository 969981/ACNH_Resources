# CalendarEventJuneBrideExchange.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CalendarEventJuneBrideExchange.bcsv`
SHA256：`a0b6fc8ef7c1778b5aab7d325a36d790b407118d5546b56c12bc645dad43d573`
状态：parsed

行数 26，行长 16，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_598463C8 | RequiredNum | 必需 数量 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_612BC6CF | UniqueID | 唯一ID | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AD1E04AD | ExchangeItem | 交换 道具 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A0BB7510 | DispInteriorMode | Disp Interior 模式 | 14 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7C226372 | JuneBrideProgress | 6月 Bride Progress | 15 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 婚礼季兑换

**用途：** 按文件名与字段名称候选推测：用于配置或描述婚礼季兑换相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CalendarEventJuneBrideExchange.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CalendarEventJuneBrideExchange.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CalendarEventJuneBrideExchange.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CalendarEventJuneBrideExchange.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 13（0 基） | 行 25（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_598463C8` 必需 数量 | 4 | 5 / hex:05000000 | 12 / hex:0c000000 | 12 / hex:0c000000 |
| `hash_612BC6CF` 唯一ID | 8 | 0 / hex:00000000 | 17 / hex:11000000 | 30 / hex:1e000000 |
| `hash_AD1E04AD` 交换 道具 | 12 | 12401 / hex:7130 | 12468 / hex:b430 | 5692 / hex:3c16 |
| `hash_A0BB7510` Disp Interior 模式 | 14 | 1 / hex:01 | 1 / hex:01 | 0 / hex:00 |
| `hash_7C226372` 6月 Bride Progress | 15 | 1 / hex:01 | 7 / hex:07 | 7 / hex:07 |

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
