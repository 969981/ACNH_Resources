# CharaMakeEyeColorParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/CharaMakeEyeColorParam.bcsv`
SHA256：`3a4b7b0c96c7d5cac093e79844583688de63a941f80e48653a9854086ec11e35`
状态：parsed

行数 12，行长 84，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_68BED0EF | BaseColorB | 基础 颜色 B | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A05E5F9F | BaseColorG | 基础 颜色 G | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_085E476D | BaseColorR | 基础 颜色 R | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 18 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 50 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 角色创建眼睛颜色

**用途：** 按文件名与字段名称候选推测：用于配置或描述角色创建眼睛颜色相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/CharaMakeEyeColorParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/CharaMakeEyeColorParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/CharaMakeEyeColorParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/CharaMakeEyeColorParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 6（0 基） | 行 11（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_68BED0EF` 基础 颜色 B | 4 | 0.029999999329447746 / hex:8fc2f53c | 0.10999999940395355 / hex:ae47e13d | 0.15000000596046448 / hex:9a99193e |
| `hash_A05E5F9F` 基础 颜色 G | 8 | 0.029999999329447746 / hex:8fc2f53c | 0.03999999910593033 / hex:0ad7233d | 0.20000000298023224 / hex:cdcc4c3e |
| `hash_085E476D` 基础 颜色 R | 12 | 0.029999999329447746 / hex:8fc2f53c | 0.5199999809265137 / hex:b81e053f | 0.05000000074505806 / hex:cdcc4c3d |
| `hash_54706054` 唯一ID | 16 | 0 / hex:0000 | 6 / hex:0600 | 11 / hex:0b00 |
| `hash_87BF00E8` 标签 | 18 | "EyeColor0" / hex:457965436f6c6f72300000000000000000000000000000000000000000000000 | "EyeColor6" / hex:457965436f6c6f72360000000000000000000000000000000000000000000000 | "EyeColor11" / hex:457965436f6c6f72313100000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 50 | "EyeColor0" / hex:457965436f6c6f723000000000000000000000000000000000000000000000000000 | "EyeColor6" / hex:457965436f6c6f723600000000000000000000000000000000000000000000000000 | "EyeColor11" / hex:457965436f6c6f723131000000000000000000000000000000000000000000000000 |

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
