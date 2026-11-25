# ReleaseVersionParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ReleaseVersionParam.bcsv`
SHA256：`94a2ffef17c804718c3240853736193484709cbaf53846b7dd3576d1f17e488a`
状态：parsed

行数 20，行长 72，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_76C190B2 | ReleaseKey | 释放 键 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 8 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 40 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 发布版本参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述发布版本参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ReleaseVersionParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ReleaseVersionParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ReleaseVersionParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ReleaseVersionParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 10（0 基） | 行 19（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_76C190B2` 释放 键 | 4 | 10000 / hex:1027 | 10800 / hex:302a | 30000 / hex:3075 |
| `hash_54706054` 唯一ID | 6 | 1 / hex:0100 | 16 / hex:1000 | 26 / hex:1a00 |
| `hash_87BF00E8` 标签 | 8 | "Launch" / hex:4c61756e63680000000000000000000000000000000000000000000000000000 | "Spring1st2021" / hex:537072696e673173743230323100000000000000000000000000000000000000 | "ParkPlus" / hex:5061726b506c7573000000000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 40 | "1.0.0 ローンチ" / hex:312e302e3020e383ade383bce383b3e383810000000000000000000000000000 | "1.8.0 2021春パッチ1" / hex:312e382e302032303231e698a5e38391e38383e3838131000000000000000000 | "3.0.0 不定" / hex:332e302e3020e4b88de5ae9a0000000000000000000000000000000000000000 |

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
