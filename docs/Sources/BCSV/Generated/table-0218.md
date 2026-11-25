# WherearenNpcFieldMovePatternParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldMovePatternParam.bcsv`
SHA256：`2dbda769663802519fbf43a7c7affe84bf2bbc6a1552753b3b249a2a72457210`
状态：parsed

行数 3，行长 96，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_D67D2C51 | MoveSpot1 | 移动 地点 1 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_91DD5681 | MoveSpot2 | 移动 地点 2 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ACBD7F31 | MoveSpot3 | 移动 地点 3 | 12 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1E9DA321 | MoveSpot4 | 移动 地点 4 | 16 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CD594472 | MoveTool1 | 移动 工具 1 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8AF93EA2 | MoveTool2 | 移动 工具 2 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B7991712 | MoveTool3 | 移动 工具 3 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0B8307E | Label | 标签 | 28 | 33 | string33 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A0943E31 | UnlockFlag | 解锁 标志 | 61 | 35 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景移动模式

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景移动模式相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldMovePatternParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldMovePatternParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldMovePatternParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldMovePatternParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 1（0 基） | 行 2（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_D67D2C51` 移动 地点 1 | 4 | 1 / hex:01000000 | 5 / hex:05000000 | 9 / hex:09000000 |
| `hash_91DD5681` 移动 地点 2 | 8 | 2 / hex:02000000 | 6 / hex:06000000 | 10 / hex:0a000000 |
| `hash_ACBD7F31` 移动 地点 3 | 12 | 3 / hex:03000000 | 7 / hex:07000000 | 11 / hex:0b000000 |
| `hash_1E9DA321` 移动 地点 4 | 16 | 4 / hex:04000000 | 8 / hex:08000000 | 0 / hex:00000000 |
| `hash_CD594472` 移动 工具 1 | 20 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_8AF93EA2` 移动 工具 2 | 22 | 14638 / hex:2e39 | 14638 / hex:2e39 | 14638 / hex:2e39 |
| `hash_B7991712` 移动 工具 3 | 24 | 65534 / hex:feff | 14790 / hex:c639 | 65534 / hex:feff |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 1 / hex:0100 | 2 / hex:0200 |
| `hash_F0B8307E` 标签 | 28 | "First" / hex:466972737400000000000000000000000000000000000000000000000000000000 | "Second" / hex:5365636f6e64000000000000000000000000000000000000000000000000000000 | "Third" / hex:546869726400000000000000000000000000000000000000000000000000000000 |
| `hash_A0943E31` 解锁 标志 | 61 | "Unlock_NPC_00" / hex:556e6c6f636b5f4e50435f303000000000000000000000000000000000000000000000 | "Unlock_NPC_04" / hex:556e6c6f636b5f4e50435f303400000000000000000000000000000000000000000000 | "Unlock_NPC_06" / hex:556e6c6f636b5f4e50435f303600000000000000000000000000000000000000000000 |

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
