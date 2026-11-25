# WherearenNpcFieldPointListParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldPointListParam.bcsv`
SHA256：`d2c68c7e5d00b97238a3a7e1891f6e9e4b0cce0e0c58059858b8ed6e72497f81`
状态：parsed

行数 60，行长 48，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_3198C2AC | PointIndex | 点 索引 | 4 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_93471944 | RailIndex | 轨道 索引 | 6 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8AE370C5 | ForFes | 用于 Fes | 10 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4F0B2BE7 | ForShareHouse | 用于 共享 房屋 | 11 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0B8307E | Label | 标签 | 12 | 36 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景点列表

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景点列表相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldPointListParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldPointListParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldPointListParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldPointListParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 30（0 基） | 行 59（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_3198C2AC` 点 索引 | 4 | 0 / hex:0000 | 1 / hex:0100 | 3 / hex:0300 |
| `hash_93471944` 轨道 索引 | 6 | 1 / hex:0100 | 12 / hex:0c00 | 6 / hex:0600 |
| `hash_54706054` 唯一ID | 8 | 0 / hex:0000 | 39 / hex:2700 | 69 / hex:4500 |
| `hash_8AE370C5` 用于 Fes | 10 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_4F0B2BE7` 用于 共享 房屋 | 11 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_F0B8307E` 标签 | 12 | "Point1_0" / hex:506f696e74315f3000000000000000000000000000000000000000000000000000000000 | "Point12_1" / hex:506f696e7431325f31000000000000000000000000000000000000000000000000000000 | "Point6_3" / hex:506f696e74365f3300000000000000000000000000000000000000000000000000000000 |

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
