# SoundHaniwaOfDrum.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SoundHaniwaOfDrum.bcsv`
SHA256：`02ac7b33f8bb9083db3a405663d1d87bc3ea2f706c3496072b32e8cc10ea2fdf`
状态：parsed

行数 17，行长 20，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_5FC0D92D | HaniwaPartsType | 陶俑 部件 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_09AD7622 | TypePriority | 类型 优先级 | 8 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3637EBB9 | RefItemUniqueID | 引用 道具 唯一 ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EAAF51C9 | NoteMax | 备注 最大 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AFAD124B | NoteMin | 备注 最小 | 17 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B88EBFE | SingTriggerRatio | Sing 触发 Ratio | 18 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 陶俑鼓音色

**用途：** 按文件名与字段名称候选推测：用于配置或描述陶俑鼓音色相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/SoundHaniwaOfDrum.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/SoundHaniwaOfDrum.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/SoundHaniwaOfDrum.csv) · [结构 JSON](../../../../research/bcsv-data/schema/SoundHaniwaOfDrum.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 8（0 基） | 行 16（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_5FC0D92D` 陶俑 部件 类型 | 4 | 0x32D75BDA / hex:da5bd732 | 0x70062B30 / hex:302b0670 | 0xC0FC27C8 / hex:c827fcc0 |
| `hash_09AD7622` 类型 优先级 | 8 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_3637EBB9` 引用 道具 唯一 ID | 12 | 14080 / hex:0037 | 14090 / hex:0a37 | 14101 / hex:1537 |
| `hash_54706054` 唯一ID | 14 | 8 / hex:0800 | 18 / hex:1200 | 29 / hex:1d00 |
| `hash_EAAF51C9` 备注 最大 | 16 | 77 / hex:4d | 77 / hex:4d | 77 / hex:4d |
| `hash_AFAD124B` 备注 最小 | 17 | 60 / hex:3c | 60 / hex:3c | 60 / hex:3c |
| `hash_9B88EBFE` Sing 触发 Ratio | 18 | 40 / hex:2800 | 40 / hex:2800 | 40 / hex:2800 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 陶俑 部件 类型（hash_5FC0D92D）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x70062B30 | 5 | SnareDrum | Snare Drum | crc_candidate |
| 0x32D75BDA | 4 | BassDrum | Bass Drum | crc_candidate |
| 0xBD886FA7 | 4 | HiHat | Hi 帽子 | crc_candidate |
| 0xC0FC27C8 | 4 | CrashCymbal | Crash Cymbal | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
