# WherearenNpcFieldSpotParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenNpcFieldSpotParam.bcsv`
SHA256：`ed910878ac94cbb246a2c8879cfa56e9ec1667b473b4289fb080c5ef1cfb0d41`
状态：parsed

行数 12，行长 52，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_7FC7405E | ActionPattern1 | 动作 款式 1 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_38673A8E | ActionPattern2 | 动作 款式 2 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0507133E | ActionPattern3 | 动作 款式 3 | 12 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F0B8307E | Label | 标签 | 18 | 34 | string33 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛 NPC 场景位置

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛 NPC 场景位置相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenNpcFieldSpotParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenNpcFieldSpotParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenNpcFieldSpotParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenNpcFieldSpotParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 6（0 基） | 行 11（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_7FC7405E` 动作 款式 1 | 4 | 0 / hex:00000000 | 7 / hex:07000000 | 69 / hex:45000000 |
| `hash_38673A8E` 动作 款式 2 | 8 | 0 / hex:00000000 | 62 / hex:3e000000 | 69 / hex:45000000 |
| `hash_0507133E` 动作 款式 3 | 12 | 0 / hex:00000000 | 61 / hex:3d000000 | 69 / hex:45000000 |
| `hash_54706054` 唯一ID | 16 | 0 / hex:0000 | 6 / hex:0600 | 11 / hex:0b00 |
| `hash_F0B8307E` 标签 | 18 | "None" / hex:4e6f6e65000000000000000000000000000000000000000000000000000000000000 | "Restaurant2" / hex:52657374617572616e74320000000000000000000000000000000000000000000000 | "Hospital3" / hex:486f73706974616c3300000000000000000000000000000000000000000000000000 |

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
