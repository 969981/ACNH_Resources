# MuseumCafeSpInfoParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumCafeSpInfoParam.bcsv`
SHA256：`567a520ced1b5ac283da66e855a23a1d4fd0be41b40f3f3745ceea8fa465ed7b`
状态：parsed

行数 63，行长 20，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_4BE509DE | Amiibo | amiibo 标识 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D261E06C | Seat0 | 座位 0 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EF01C9DC | Seat1 | 座位 1 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A8A1B30C | Seat2 | 座位 2 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_95C19ABC | Seat3 | 座位 3 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EADDE7F7 | SeatSP | 座位 SP | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_53BB0673 | SeatSpIndex | 座位 Sp 索引 | 18 | 2 | s8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆咖啡厅特殊 NPC 信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆咖啡厅特殊 NPC 信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumCafeSpInfoParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumCafeSpInfoParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumCafeSpInfoParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumCafeSpInfoParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 31（0 基） | 行 62（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_4BE509DE` amiibo 标识 | 4 | 65 / hex:4100 | 56 / hex:3800 | 71 / hex:4700 |
| `hash_D261E06C` 座位 0 | 6 | 0 / hex:0000 | 34 / hex:2200 | 75 / hex:4b00 |
| `hash_EF01C9DC` 座位 1 | 8 | 57 / hex:3900 | 30 / hex:1e00 | 30 / hex:1e00 |
| `hash_A8A1B30C` 座位 2 | 10 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_95C19ABC` 座位 3 | 12 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_EADDE7F7` 座位 SP | 14 | 0 / hex:0000 | 28 / hex:1c00 | 28 / hex:1c00 |
| `hash_54706054` 唯一ID | 16 | 1 / hex:0100 | 32 / hex:2000 | 65 / hex:4100 |
| `hash_53BB0673` 座位 Sp 索引 | 18 | -1 / hex:ff00 | 8 / hex:0800 | 8 / hex:0800 |

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
