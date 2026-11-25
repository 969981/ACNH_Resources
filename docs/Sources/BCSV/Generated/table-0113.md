# MemoriesValueInfoPlayer.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MemoriesValueInfoPlayer.bcsv`
SHA256：`daedee89425c251dbb119dcec00688b98f5bfa12275ff69d2a649b96debe7864`
状态：parsed

行数 25，行长 40，数据起点 52。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7EF334A6 | CountPlayerVisit | 计数 玩家 Visit | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 7 | 33 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 玩家回忆数值信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述玩家回忆数值信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MemoriesValueInfoPlayer.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MemoriesValueInfoPlayer.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MemoriesValueInfoPlayer.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MemoriesValueInfoPlayer.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 12（0 基） | 行 24（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 0 / hex:0000 | 12 / hex:0c00 | 24 / hex:1800 |
| `hash_7EF334A6` 计数 玩家 Visit | 6 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 7 | "PV_ExcavatedFossil" / hex:50565f457863617661746564466f7373696c000000000000000000000000000000 | "PV_FillInHaniwaPiece" / hex:50565f46696c6c496e48616e697761506965636500000000000000000000000000 | "PV_Goto_KappeiTour" / hex:50565f476f746f5f4b6170706569546f7572000000000000000000000000000000 |

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
