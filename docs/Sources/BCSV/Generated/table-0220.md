# WherearenNpcFieldSetParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldSetParam.bcsv`
SHA256：`90774e3aa55110c9b34b6fb4c251323da1c4c812bda2ecf987846e1e7f9b4d75`
状态：parsed

行数 16，行长 104，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_9D9906D2 | MaxAmount | 最大 数量 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DDD67EA4 | MinAmount | 最小 数量 | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5B589691 | MovePatternSet | 移动 款式 集合 | 12 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_36C903A7 | AreaUniqueID | 区域 唯一 ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DFC1EDB2 | ForBuiltNpc | 用于 建造 NPC | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DA0C5D33 | ForFesNpc | 用于 Fes NPC | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C223CAE9 | FurnitureActionCandidate | 家具 动作 Candidate | 22 | 11 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9D0B6948 | IsFurnitureAction | 是否 家具 动作 | 33 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0B8307E | Label | 标签 | 34 | 33 | string33 | 未知，保留原值 | 未登记表级业务证据 |
| hash_38501139 | RailIndex | 轨道 索引 | 67 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_62A2ABE9 | UnlockActionFlag | 解锁 动作 标志 | 68 | 36 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景集合

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景集合相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldSetParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldSetParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldSetParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldSetParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 8（0 基） | 行 15（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_9D9906D2` 最大 数量 | 4 | 2 / hex:02000000 | 2 / hex:02000000 | 0 / hex:00000000 |
| `hash_DDD67EA4` 最小 数量 | 8 | 1 / hex:01000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_5B589691` 移动 款式 集合 | 12 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_36C903A7` 区域 唯一 ID | 16 | 1 / hex:0100 | 4 / hex:0400 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 18 | 0 / hex:0000 | 8 / hex:0800 | 15 / hex:0f00 |
| `hash_DFC1EDB2` 用于 建造 NPC | 20 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_DA0C5D33` 用于 Fes NPC | 21 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_C223CAE9` 家具 动作 Candidate | 22 | 0 / hex:0000000000000000000000 | 0 / hex:0000000000000000000000 | 0 / hex:0000000000000000000000 |
| `hash_9D0B6948` 是否 家具 动作 | 33 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_F0B8307E` 标签 | 34 | "AreaV1" / hex:417265615631000000000000000000000000000000000000000000000000000000 | "Area4" / hex:417265613400000000000000000000000000000000000000000000000000000000 | "Spare3" / hex:537061726533000000000000000000000000000000000000000000000000000000 |
| `hash_38501139` 轨道 索引 | 67 | 2 / hex:02 | 11 / hex:0b | -1 / hex:ff |
| `hash_62A2ABE9` 解锁 动作 标志 | 68 | "Unlock_NPC_00" / hex:556e6c6f636b5f4e50435f30300000000000000000000000000000000000000000000000 | "Unlock_NPC_04" / hex:556e6c6f636b5f4e50435f30340000000000000000000000000000000000000000000000 | "Unlock_NPC_09" / hex:556e6c6f636b5f4e50435f30390000000000000000000000000000000000000000000000 |

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
