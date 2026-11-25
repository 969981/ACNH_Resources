# MuseumNPCSilhouette.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MuseumNPCSilhouette.bcsv`
SHA256：`dfa2c34ab9cb981eebecadf715a52e11ff4dbc5c2603e2e1cd880f2210e10167`
状态：parsed

行数 17，行长 88，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_110CA7B2 | MuseumNpcRace | 博物馆 NPC 竞赛 | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0F230D34 | SilhouettePosX | 轮廓 位置 X | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_32432484 | SilhouettePosY | 轮廓 位置 Y | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_75E35E54 | SilhouettePosZ | 轮廓 位置 Z | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7C6429EA | SilhouetteName | 轮廓 名称 | 22 | 66 | string65 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 博物馆 NPC 剪影

**用途：** 按文件名与字段名称候选推测：用于配置或描述博物馆 NPC 剪影相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MuseumNPCSilhouette.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MuseumNPCSilhouette.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MuseumNPCSilhouette.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MuseumNPCSilhouette.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 8（0 基） | 行 16（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_110CA7B2` 博物馆 NPC 竞赛 | 4 | 2 / hex:02000000 | 18 / hex:12000000 | 28 / hex:1c000000 |
| `hash_0F230D34` 轮廓 位置 X | 8 | 160.0 / hex:00002043 | 160.0 / hex:00002043 | 160.0 / hex:00002043 |
| `hash_32432484` 轮廓 位置 Y | 12 | 20.0 / hex:0000a041 | 20.0 / hex:0000a041 | 20.0 / hex:0000a041 |
| `hash_75E35E54` 轮廓 位置 Z | 16 | 210.0 / hex:00005243 | 210.0 / hex:00005243 | 210.0 / hex:00005243 |
| `hash_54706054` 唯一ID | 20 | 0 / hex:0000 | 8 / hex:0800 | 16 / hex:1000 |
| `hash_7C6429EA` 轮廓 名称 | 22 | "トリシルエット" / hex:e38388e383aae382b7e383abe382a8e38383e38388000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "ウマシルエット" / hex:e382a6e3839ee382b7e383abe382a8e38383e38388000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "ブタシルエット" / hex:e38396e382bfe382b7e383abe382a8e38383e38388000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

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
