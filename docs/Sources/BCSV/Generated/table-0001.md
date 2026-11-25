# AmiiboData.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/AmiiboData.bcsv`
SHA256：`2ef76c8a8ce7635be675240b0ea8ae348cbd332516ed518593668d3f6f04ff64`
状态：parsed

行数 581，行长 28，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_C7AD2FDF | CharacterId | 角色 ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_04A47035 | NumberingId | 编号 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F6B34C16 | SpNpcCloth | Sp NPC 衣物 | 10 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AC4A3345 | NfpType | Nfp 类型 | 12 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_34C8EED5 | NpcLabel | NPC 标签 | 13 | 8 | string8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_81A43E76 | NpcType | NPC 类型 | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DCA79149 | Reaction | 反应 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5B7CA0B2 | SeriesId | 系列 ID | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1D99C513 | Studio | 工作室 | 24 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0BB66872 | Wherearen | 度假岛 | 25 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** amiibo 数据

**用途：** 按文件名与字段名称候选推测：用于配置或描述amiibo 数据相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/AmiiboData.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/AmiiboData.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/AmiiboData.csv) · [结构 JSON](../../../../research/bcsv-data/schema/AmiiboData.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 290（0 基） | 行 580（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_C7AD2FDF` 角色 ID | 4 | 98560 / hex:00810100 | 228864 / hex:007e0300 | 68864 / hex:000d0100 |
| `hash_04A47035` 编号 ID | 8 | 587 / hex:4b02 | 342 / hex:5601 | 1191 / hex:a704 |
| `hash_F6B34C16` Sp NPC 衣物 | 10 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_AC4A3345` Nfp 类型 | 12 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_34C8EED5` NPC 标签 | 13 | "sza" / hex:737a610000000000 | "ham00" / hex:68616d3030000000 | "der12" / hex:6465723132000000 |
| `hash_81A43E76` NPC 类型 | 21 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_DCA79149` 反应 | 22 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_5B7CA0B2` 系列 ID | 23 | 5 / hex:05 | 5 / hex:05 | 9 / hex:09 |
| `hash_1D99C513` 工作室 | 24 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_0BB66872` 度假岛 | 25 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

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
