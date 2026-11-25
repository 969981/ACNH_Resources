# MuseumNPCLayoutInfo.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumNPCLayoutInfo.bcsv`
SHA256：`8467f8aa46aea9006f92c783a3ff70e80c5272826e8f9cf2025782d0944af474`
状态：parsed

行数 109，行长 68，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B76B7D37 | WatchItem | 观察 道具 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4765B463 | WatchPointID | 观察 点 ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E9812E07 | BalloonTalkKey | 气球 对话 键 | 10 | 25 | string25 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B434805D | BalloonTalkLabelKey | 气球 对话 标签 键 | 35 | 4 | string4 | 未知，保留原值 | 未登记表级业务证据 |
| hash_60E4E478 | ReactionTalkKey | 反应 对话 键 | 39 | 25 | string25 | 未知，保留原值 | 未登记表级业务证据 |
| hash_97BE8767 | ReactionTalkLabelKey | 反应 对话 标签 键 | 64 | 4 | string4 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆 NPC 布局

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆 NPC 布局相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumNPCLayoutInfo.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumNPCLayoutInfo.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumNPCLayoutInfo.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumNPCLayoutInfo.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 54（0 基） | 行 108（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 4 / hex:0400 | 69 / hex:4500 | 126 / hex:7e00 |
| `hash_B76B7D37` 观察 道具 | 6 | 4191 / hex:5f10 | 65534 / hex:feff | 12541 / hex:fd30 |
| `hash_4765B463` 观察 点 ID | 8 | 4 / hex:0400 | 67 / hex:4300 | 121 / hex:7900 |
| `hash_E9812E07` 气球 对话 键 | 10 | "BLN_Spot_Museum" / hex:424c4e5f53706f745f4d757365756d00000000000000000000 | "BLN_Spot_Museum" / hex:424c4e5f53706f745f4d757365756d00000000000000000000 | "BLN_Spot_Museum" / hex:424c4e5f53706f745f4d757365756d00000000000000000000 |
| `hash_B434805D` 气球 对话 标签 键 | 35 | "02" / hex:30320000 | "16" / hex:31360000 | "21" / hex:32310000 |
| `hash_60E4E478` 反应 对话 键 | 39 | "BO_React_Watching_Fish" / hex:424f5f52656163745f5761746368696e675f46697368000000 | "BO_React_Watching_Fossil" / hex:424f5f52656163745f5761746368696e675f466f7373696c00 | "BO_React_Watching_Art" / hex:424f5f52656163745f5761746368696e675f41727400000000 |
| `hash_97BE8767` 反应 对话 标签 键 | 64 | "006" / hex:30303600 | "201" / hex:32303100 | "016" / hex:30313600 |

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
