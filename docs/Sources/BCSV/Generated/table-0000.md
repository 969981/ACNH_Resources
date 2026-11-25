# AITag.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/AITag.bcsv`
SHA256：`678f9319b2a9b061c023cdc119a5cc3f7627bb2c56abededd74d8e310bd65b9b`
状态：parsed

行数 51，行长 76，数据起点 60。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A8EACF70 | AITagCategory | AI 标签 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 10 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 42 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** AI 行为标签

**用途：** 按文件名与字段名称候选推测：用于配置或描述AI 行为标签相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/AITag.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/AITag.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/AITag.csv) · [结构 JSON](../../../../research/bcsv-data/schema/AITag.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 25（0 基） | 行 50（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A8EACF70` AI 标签 分类 | 4 | 0xF7485E9F / hex:9f5e48f7 | 0x773A8A77 / hex:778a3a77 | 0x773A8A77 / hex:778a3a77 |
| `hash_54706054` 唯一ID | 8 | 1 / hex:0100 | 132 / hex:8400 | 159 / hex:9f00 |
| `hash_87BF00E8` 标签 | 10 | "Spring" / hex:537072696e670000000000000000000000000000000000000000000000000000 | "TempCreate_ZK" / hex:54656d704372656174655f5a4b00000000000000000000000000000000000000 | "Teacher" / hex:5465616368657200000000000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 42 | "春" / hex:e698a500000000000000000000000000000000000000000000000000000000000000 | "一時生成_ZK" / hex:e4b880e69982e7949fe688905f5a4b00000000000000000000000000000000000000 | "先生" / hex:e58588e7949f00000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### AI 标签 分类（hash_A8EACF70）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x773A8A77 | 44 | Purpose | 用途 | crc_candidate |
| 0xF7485E9F | 4 | Season | 季节 | crc_candidate |
| 0x314A4625 | 2 | MinorSeries | Minor 系列 | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
