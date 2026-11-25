# TVProgramTuesday.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/TVProgramTuesday.bcsv`
SHA256：`5cff8c1c2b6196d69440a41ebb67ca20520a35921880b8420ac2281699b6a8e5`
状态：parsed

行数 75，行长 12，数据起点 52。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A988063C | TVProgramName | TV 程序 名称 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_8AE48661 | StartHour | 开始 小时 | 8 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3835A9DD | StartMinute | 开始 分钟 | 9 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 星期二电视节目

**用途：** 按文件名与字段名称候选推测：用于配置或描述星期二电视节目相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/TVProgramTuesday.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/TVProgramTuesday.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/TVProgramTuesday.csv) · [结构 JSON](../../../../research/bcsv-data/schema/TVProgramTuesday.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 37（0 基） | 行 74（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A988063C` TV 程序 名称 | 4 | 0x8D9AEA1C / hex:1cea9a8d | 0x8D9AEA1C / hex:1cea9a8d | 0xCF1F957C / hex:7c951fcf |
| `hash_8AE48661` 开始 小时 | 8 | 0 / hex:00 | 13 / hex:0d | 23 / hex:17 |
| `hash_3835A9DD` 开始 分钟 | 9 | 0 / hex:000000 | 30 / hex:1e0000 | 55 / hex:370000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### TV 程序 名称（hash_A988063C）

去重码值 19 个，已有标签候选 19 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xCF1F957C | 10 | ショッピングCM | ショッピング CM | crc_candidate |
| 0x8F3922CB | 9 | 企業CM | 企業 CM | crc_candidate |
| 0xA06227B6 | 6 | 季節のCM | 季節の CM | crc_candidate |
| 0xE288DC19 | 6 | フルーツCM | フルーツ CM | crc_candidate |
| 0xE8ADDDD7 | 6 | ドキュメンタリー | ドキュメンタリー | crc_candidate |
| 0x48B8C67F | 5 | 天気予報 | 天気予報 | crc_candidate |
| 0x5E3AB895 | 5 | ニュース | ニュース | crc_candidate |
| 0x80A6B8C4 | 4 | バラエティ | バラエティ | crc_candidate |
| 0x8D9AEA1C | 4 | 対談番組 | 対談番組 | crc_candidate |
| 0x8FC2AB35 | 4 | おやつCM | おやつ CM | crc_candidate |
| 0xD10AA935 | 3 | エクササイズ | エクササイズ | crc_candidate |
| 0x294DA335 | 2 | スポーツ | スポーツ | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
