# SoundAudioMusic.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/SoundAudioMusic.bcsv`
SHA256：`75c82898920b247ea4929d93aa4f592dcfa60988223f0b7e25b09fa0948609da`
状态：parsed

行数 110，行长 48，数据起点 76。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_9E179557 | AudioMusicCategory | 音频 音乐 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_D4892D19 | AudioMusicID | 音频 音乐 ID | 8 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3637EBB9 | RefItemUniqueID | 引用 道具 唯一 ID | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_32BC8D59 | KimeProbability | Kime 概率 | 14 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 15 | 33 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 音乐音频

**用途：** 按文件名与字段名称候选推测：用于配置或描述音乐音频相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/SoundAudioMusic.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/SoundAudioMusic.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/SoundAudioMusic.csv) · [结构 JSON](../../../../research/bcsv-data/schema/SoundAudioMusic.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 55（0 基） | 行 109（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_9E179557` 音频 音乐 分类 | 4 | 0x3E04658A / hex:8a65043e | 0xF3650563 / hex:630565f3 | 0xB2B6D9CB / hex:cbd9b6b2 |
| `hash_D4892D19` 音频 音乐 ID | 8 | 1 / hex:0100 | 56 / hex:3800 | 903 / hex:8703 |
| `hash_3637EBB9` 引用 道具 唯一 ID | 10 | 2405 / hex:6509 | 2460 / hex:9c09 | 4317 / hex:dd10 |
| `hash_54706054` 唯一ID | 12 | 6 / hex:0600 | 63 / hex:3f00 | 118 / hex:7600 |
| `hash_32BC8D59` Kime 概率 | 14 | 80 / hex:50 | 60 / hex:3c | 60 / hex:3c |
| `hash_87BF00E8` 标签 | 15 | "Sanbika" / hex:53616e62696b610000000000000000000000000000000000000000000000000000 | "Bokunobasho" / hex:426f6b756e6f626173686f00000000000000000000000000000000000000000000 | "Hazure03" / hex:48617a757265303300000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 音频 音乐 分类（hash_9E179557）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xF3650563 | 32 | Mattari | Mattari | crc_candidate |
| 0xB2B6D9CB | 28 | Gokigen | Gokigen | crc_candidate |
| 0xB68CF382 | 18 | Fukigen | Fukigen | crc_candidate |
| 0x3E04658A | 17 | Blue | Blue | crc_candidate |
| 0xAC2B1A2D | 15 | Wakaranai | Wakaranai | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
