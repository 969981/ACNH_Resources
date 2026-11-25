# NpcCastLabelData.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NpcCastLabelData.bcsv`
SHA256：`db784561586c69770a0e24b999abc83a43f108e88d0241273d56b937b1e9c0cc`
状态：parsed

行数 35，行长 104，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_02C2AC67 | AIFlowEntryName | AI 流程 入口 名称 | 4 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F37316E6 | AIFlowName | AI 流程 名称 | 36 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_378B2F14 | AppearStage | 出现 阶段 | 100 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B7A6C4A8 | CastType | 出场 类型 | 101 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 演出标签

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 演出标签相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/NpcCastLabelData.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/NpcCastLabelData.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/NpcCastLabelData.csv) · [结构 JSON](../../../../research/bcsv-data/schema/NpcCastLabelData.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 17（0 基） | 行 34（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_02C2AC67` AI 流程 入口 名称 | 4 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_F37316E6` AI 流程 名称 | 36 | "AI_NPC_Outdoor/AI_NPC_Indoor" / hex:41495f4e50435f4f7574646f6f722f41495f4e50435f496e646f6f72000000000000000000000000000000000000000000000000000000000000000000000000 | "AI_NPC_Outdoor/AI_NPC_Indoor" / hex:41495f4e50435f4f7574646f6f722f41495f4e50435f496e646f6f72000000000000000000000000000000000000000000000000000000000000000000000000 | "AI_NPC_Outdoor/AI_NPC_Indoor" / hex:41495f4e50435f4f7574646f6f722f41495f4e50435f496e646f6f72000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_378B2F14` 出现 阶段 | 100 | 0 / hex:00 | 3 / hex:03 | 0 / hex:00 |
| `hash_B7A6C4A8` 出场 类型 | 101 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

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
