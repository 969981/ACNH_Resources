# WherearenFacilityRoom.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenFacilityRoom.bcsv`
SHA256：`04afc214634c2fadf3bc81d7569abeaec4102921fc774779b553055a0aaeaa03`
状态：parsed

行数 11，行长 24，数据起点 156。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_54706054 | UniqueID | 唯一ID | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_34CDBAA5 | FtrType0 | 家具 类型 0 | 6 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8C71DDC0 | FtrType1 | 家具 类型 1 | 7 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9EC4722E | FtrType2 | 家具 类型 2 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2678154B | FtrType3 | 家具 类型 3 | 9 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_53E9BEB6 | LimitNum0 | 限制 数量 0 | 10 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EB55D9D3 | LimitNum1 | 限制 数量 1 | 11 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9E0763D | LimitNum2 | 限制 数量 2 | 12 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_415C1158 | LimitNum3 | 限制 数量 3 | 13 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F6D92EDE | PlaceNpcNum | 放置 NPC 数量 | 14 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_286D8E9E | RequestNum0 | 请求 数量 0 | 15 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_90D1E9FB | RequestNum1 | 请求 数量 1 | 16 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_82644615 | RequestNum2 | 请求 数量 2 | 17 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3AD82170 | RequestNum3 | 请求 数量 3 | 18 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C1718183 | RoomSizeX | 房间 X 方向尺寸 | 19 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_79CDE6E6 | RoomSizeY | 房间 Y 方向尺寸 | 20 | 4 | s8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛设施房间

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛设施房间相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenFacilityRoom.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenFacilityRoom.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenFacilityRoom.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenFacilityRoom.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 5（0 基） | 行 10（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_54706054` 唯一ID | 4 | 0 / hex:0000 | 5 / hex:0500 | 10 / hex:0a00 |
| `hash_34CDBAA5` 家具 类型 0 | 6 | 0 / hex:00 | 10 / hex:0a | 9 / hex:09 |
| `hash_8C71DDC0` 家具 类型 1 | 7 | 1 / hex:01 | 0 / hex:00 | 2 / hex:02 |
| `hash_9EC4722E` 家具 类型 2 | 8 | 2 / hex:02 | 0 / hex:00 | 0 / hex:00 |
| `hash_2678154B` 家具 类型 3 | 9 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_53E9BEB6` 限制 数量 0 | 10 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_EB55D9D3` 限制 数量 1 | 11 | 0 / hex:00 | -1 / hex:ff | 0 / hex:00 |
| `hash_F9E0763D` 限制 数量 2 | 12 | 0 / hex:00 | -1 / hex:ff | -1 / hex:ff |
| `hash_415C1158` 限制 数量 3 | 13 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_F6D92EDE` 放置 NPC 数量 | 14 | 3 / hex:03 | 3 / hex:03 | 3 / hex:03 |
| `hash_286D8E9E` 请求 数量 0 | 15 | 1 / hex:01 | 2 / hex:02 | 1 / hex:01 |
| `hash_90D1E9FB` 请求 数量 1 | 16 | 2 / hex:02 | -1 / hex:ff | 2 / hex:02 |
| `hash_82644615` 请求 数量 2 | 17 | 4 / hex:04 | -1 / hex:ff | -1 / hex:ff |
| `hash_3AD82170` 请求 数量 3 | 18 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_C1718183` 房间 X 方向尺寸 | 19 | 10 / hex:0a | 6 / hex:06 | 6 / hex:06 |
| `hash_79CDE6E6` 房间 Y 方向尺寸 | 20 | 8 / hex:08000000 | 6 / hex:06000000 | 6 / hex:06000000 |

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
