# MemoriesEventInfoLand.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MemoriesEventInfoLand.bcsv`
SHA256：`dab896506048ce3df7cb1b2276b8badcec5016c44e4dffa37b440d816d7f1433`
状态：parsed

行数 76，行长 52，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A6240B90 | EventFlag | 事件 标志 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_175969E1 | EventNumLimit | 事件 数量 限制 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 12 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3CBD090 | Param0 | 参数 0 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5B77B7F5 | Param1 | 参数 1 | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_49C2181B | Param2 | 参数 2 | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F17E7F7E | Param3 | 参数 3 | 47 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_572A8FE9 | PrioLevel | 优先级 等级 | 48 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_638D595D | PrioMethod | 优先级 方法 | 49 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A91A1C88 | UsePlayer | 使用 玩家 | 50 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_83DA3B2A | 未知 | 网络回忆事件标志（语义别名：NetworkMemoryEventFlag） | 51 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Seven player memories about dream/network/posting, zero land rows. |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 岛屿回忆事件信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述岛屿回忆事件信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MemoriesEventInfoLand.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MemoriesEventInfoLand.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MemoriesEventInfoLand.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MemoriesEventInfoLand.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 38（0 基） | 行 75（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A6240B90` 事件 标志 | 4 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_175969E1` 事件 数量 限制 | 8 | 1 / hex:0100 | 8 / hex:0800 | 1 / hex:0100 |
| `hash_54706054` 唯一ID | 10 | 0 / hex:0000 | 38 / hex:2600 | 80 / hex:5000 |
| `hash_87BF00E8` 标签 | 12 | "LE_FacilityBuilt_Market" / hex:4c455f466163696c6974794275696c745f4d61726b6574000000000000000000 | "LE_MakeMydesign" / hex:4c455f4d616b654d7964657369676e0000000000000000000000000000000000 | "LE_HotelRoomRenew" / hex:4c455f486f74656c526f6f6d52656e6577000000000000000000000000000000 |
| `hash_E3CBD090` 参数 0 | 44 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_5B77B7F5` 参数 1 | 45 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_49C2181B` 参数 2 | 46 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_F17E7F7E` 参数 3 | 47 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_572A8FE9` 优先级 等级 | 48 | 5 / hex:05 | 5 / hex:05 | 5 / hex:05 |
| `hash_638D595D` 优先级 方法 | 49 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A91A1C88` 使用 玩家 | 50 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_83DA3B2A` 网络回忆事件标志（语义别名：NetworkMemoryEventFlag） | 51 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |

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
