# WherearenRequest.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenRequest.bcsv`
SHA256：`ba35df3beaf6dea901182a40d946911e05607d9e57ab104f6469a390c76003b1`
状态：parsed

行数 480，行长 36，数据起点 188。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_FA62611D | Music | 音乐 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CCCB782 | MustFtr1 | 必须 家具 1 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7B6CCD52 | MustFtr2 | 必须 家具 2 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_460CE4E2 | MustFtr3 | 必须 家具 3 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9D71641A | OutdoorFtr1 | 室外 家具 1 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DAD11ECA | OutdoorFtr2 | 室外 家具 2 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B80A6246 | RoomSizeX | 房间 X 方向尺寸 | 16 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_856A4BF6 | RoomSizeY | 房间 Y 方向尺寸 | 18 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE6737AC | SortID | 排序 ID | 20 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_59979682 | OutdoorRebodyNum1 | 室外 主体改造 数量 1 | 24 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B22396C | OutdoorRebodyNum2 | 室外 主体改造 数量 2 | 25 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F15EDF7C | OutdoorRefabricNum1 | 室外 布料改造 数量 1 | 26 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3EB7092 | OutdoorRefabricNum2 | 室外 布料改造 数量 2 | 27 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3E249F92 | RebodyNum1 | 主体改造 数量 1 | 28 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C91307C | RebodyNum2 | 主体改造 数量 2 | 29 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_942D5719 | RebodyNum3 | 主体改造 数量 3 | 30 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C240123A | RefabricNum1 | 布料改造 数量 1 | 31 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D0F5BDD4 | RefabricNum2 | 布料改造 数量 2 | 32 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6849DAB1 | RefabricNum3 | 布料改造 数量 3 | 33 | 3 | s8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛委托

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛委托相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenRequest.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenRequest.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenRequest.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenRequest.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 240（0 基） | 行 479（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_FA62611D` 音乐 | 4 | 2472 / hex:a809 | 2431 / hex:7f09 | 65535 / hex:ffff |
| `hash_3CCCB782` 必须 家具 1 | 6 | 13746 / hex:b235 | 1412 / hex:8405 | 65535 / hex:ffff |
| `hash_7B6CCD52` 必须 家具 2 | 8 | 14621 / hex:1d39 | 7189 / hex:151c | 65535 / hex:ffff |
| `hash_460CE4E2` 必须 家具 3 | 10 | 65535 / hex:ffff | 13006 / hex:ce32 | 65535 / hex:ffff |
| `hash_9D71641A` 室外 家具 1 | 12 | 12602 / hex:3a31 | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_DAD11ECA` 室外 家具 2 | 14 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_B80A6246` 房间 X 方向尺寸 | 16 | 6 / hex:0600 | 6 / hex:0600 | -1 / hex:ffff |
| `hash_856A4BF6` 房间 Y 方向尺寸 | 18 | 6 / hex:0600 | 6 / hex:0600 | -1 / hex:ffff |
| `hash_BE6737AC` 排序 ID | 20 | 0 / hex:0000 | 240 / hex:f000 | 479 / hex:df01 |
| `hash_54706054` 唯一ID | 22 | 0 / hex:0000 | 238 / hex:ee00 | 538 / hex:1a02 |
| `hash_59979682` 室外 主体改造 数量 1 | 24 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_4B22396C` 室外 主体改造 数量 2 | 25 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_F15EDF7C` 室外 布料改造 数量 1 | 26 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_E3EB7092` 室外 布料改造 数量 2 | 27 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_3E249F92` 主体改造 数量 1 | 28 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_2C91307C` 主体改造 数量 2 | 29 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_942D5719` 主体改造 数量 3 | 30 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_C240123A` 布料改造 数量 1 | 31 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_D0F5BDD4` 布料改造 数量 2 | 32 | -1 / hex:ff | -1 / hex:ff | -1 / hex:ff |
| `hash_6849DAB1` 布料改造 数量 3 | 33 | -1 / hex:ff0000 | -1 / hex:ff0000 | -1 / hex:ff0000 |

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
