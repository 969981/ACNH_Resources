# ItemNpcFtrActionParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemNpcFtrActionParam.bcsv`
SHA256：`5499dd222a52d5e6ad04ffda56577cda0d317781344b4833f3cba871077c6309`
状态：parsed

行数 19，行长 224，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_AE63CEF0 | NpcFtrActionHoldTime | NPC 家具 动作 持有 时间 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B422539E | NpcFtrActionInterest | NPC 家具 动作 兴趣 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_99667BF1 | NpcFtrActionWeather | NPC 家具 动作 天气 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE2FAE51 | NpcSynchroDirection | NPC 同步 方向 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_11AE74F8 | NpcSynchroEndTiming | NPC 同步 结束 时机 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_2CA34410 | NpcFtrActionTool | NPC 家具 动作 工具 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 28 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_977ADFCE | Name | 名称 | 60 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FEC0CC3D | NpcCanSit | NPC 可 坐 | 92 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6C6FDB31 | NpcFtrActionAsName | NPC 家具 动作 As 名称 | 93 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_63C52AF5 | NpcSynchroActionAsName | NPC 同步 动作 As 名称 | 157 | 67 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 家具交互动作

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 家具交互动作相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemNpcFtrActionParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemNpcFtrActionParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemNpcFtrActionParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemNpcFtrActionParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 9（0 基） | 行 18（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_AE63CEF0` NPC 家具 动作 持有 时间 | 4 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_B422539E` NPC 家具 动作 兴趣 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0x17FE730C / hex:0c73fe17 | 0x30AFB93F / hex:3fb9af30 |
| `hash_99667BF1` NPC 家具 动作 天气 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xFC2E7F5B / hex:5b7f2efc | 0xFC2E7F5B / hex:5b7f2efc |
| `hash_BE2FAE51` NPC 同步 方向 | 16 | 0x7E0E8482 / hex:82840e7e | 0x2A2D1CB9 / hex:b91c2d2a | 0x3F3A4DF2 / hex:f24d3a3f |
| `hash_11AE74F8` NPC 同步 结束 时机 | 20 | 0xC8CEFFC7 / hex:c7ffcec8 | 0xC8CEFFC7 / hex:c7ffcec8 | 0x2A2D1CB9 / hex:b91c2d2a |
| `hash_2CA34410` NPC 家具 动作 工具 | 24 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 9 / hex:0900 | 29 / hex:1d00 |
| `hash_87BF00E8` 标签 | 28 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 | "SwitchSomen" / hex:537769746368536f6d656e000000000000000000000000000000000000000000 | "Haniwa" / hex:48616e6977610000000000000000000000000000000000000000000000000000 |
| `hash_977ADFCE` 名称 | 60 | "なし" / hex:e381aae381970000000000000000000000000000000000000000000000000000 | "駆動（そうめん）" / hex:e9a786e58b95efbc88e3819de38186e38281e38293efbc890000000000000000 | "はにわ" / hex:e381afe381abe3828f0000000000000000000000000000000000000000000000 |
| `hash_FEC0CC3D` NPC 可 坐 | 92 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_6C6FDB31` NPC 家具 动作 As 名称 | 93 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "NpcSomen" / hex:4e7063536f6d656e0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_63C52AF5` NPC 同步 动作 As 名称 | 157 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "MaReSmiling" / hex:4d615265536d696c696e670000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### NPC 家具 动作 兴趣（hash_B422539E）

去重码值 8 个，已有标签候选 8 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x17FE730C | 6 | FtrSwitchOn | 家具 切换 开启 | crc_candidate |
| 0xA86BBF8A | 6 | FtrAccess | 家具 访问 | crc_candidate |
| 0xD8420127 | 2 | PlayMusic | 播放 音乐 | crc_candidate |
| 0x0BD2798E | 1 | SingSong | Sing Song | crc_candidate |
| 0x0E217EF2 | 1 | RhythmSound | Rhythm 声音 | crc_candidate |
| 0x30AFB93F | 1 | Haniwa | 陶俑 | crc_candidate |
| 0x32DB41D9 | 1 | StayOn | Stay 开启 | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

### NPC 家具 动作 天气（hash_99667BF1）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xFC2E7F5B | 13 | RainActive | 雨 Active | crc_candidate |
| 0xDFA2AFF1 | 6 | None | None | crc_candidate |

### NPC 同步 方向（hash_BE2FAE51）

去重码值 3 个，已有标签候选 0 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2A2D1CB9 | 10 | 未知 | 未知 | unmapped |
| 0x7E0E8482 | 6 | 未知 | 未知 | unmapped |
| 0x3F3A4DF2 | 3 | 未知 | 未知 | unmapped |

### NPC 同步 结束 时机（hash_11AE74F8）

去重码值 2 个，已有标签候选 0 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xC8CEFFC7 | 14 | 未知 | 未知 | unmapped |
| 0x2A2D1CB9 | 5 | 未知 | 未知 | unmapped |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 入向 | hash_AA6A39C6 | hash_87BF00E8 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 19/19 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
