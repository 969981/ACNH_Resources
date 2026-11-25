# MessageCardSelectPresentSp.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardSelectPresentSp.bcsv`
SHA256：`50479907242fd2ec69f5d93af2154d783721c0b4be9032cecb82f7eedaf3ad1c`
状态：parsed

行数 19，行长 20，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_368210C4 | ItemCategory | 道具 分类 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_128A3D9B | ItemCategoryGroup | 道具 分类 分组 | 8 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_37571146 | TextKey | 文本 键 | 12 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_E060D3CD | ProgramHandlingType | 程序 Handling 类型 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C233727B | ItemRemakeType | 道具 改造 类型 | 18 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 特殊明信片选择礼物

**用途：** 按文件名与字段名称候选推测：用于配置或描述特殊明信片选择礼物相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MessageCardSelectPresentSp.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MessageCardSelectPresentSp.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MessageCardSelectPresentSp.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MessageCardSelectPresentSp.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 9（0 基） | 行 18（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_368210C4` 道具 分类 | 4 | 34 / hex:22000000 | 51 / hex:33000000 | 0 / hex:00000000 |
| `hash_128A3D9B` 道具 分类 分组 | 8 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_37571146` 文本 键 | 12 | 0xA5924EFB / hex:fb4e92a5 | 0xB779E37E / hex:7ee379b7 | 0xB9CD6253 / hex:5362cdb9 |
| `hash_E060D3CD` 程序 Handling 类型 | 16 | 0 / hex:0000 | 0 / hex:0000 | 3 / hex:0300 |
| `hash_C233727B` 道具 改造 类型 | 18 | 0 / hex:0000 | 0 / hex:0000 | 1 / hex:0100 |

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
