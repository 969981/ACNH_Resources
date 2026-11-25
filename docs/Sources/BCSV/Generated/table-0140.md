# NpcEquipRule.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/NpcEquipRule.bcsv`
SHA256：`5f7f3c2daf64df8e275163092be0b19f30df64442946035bf5d11b47ca45019d`
状态：parsed

行数 26，行长 144，数据起点 196。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_423D1C4D | ClothesFrequencyWear | 服装 频率 穿着 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_B219374F | ClothesPurposeLimit | 服装 用途 限制 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_68D62CA8 | ClothesTemporarilyCreate | 服装 临时 创建 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_1F401B52 | PurposeScore | 用途 分数 | 16 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E765B554 | PurposeTag | 用途 标签 | 20 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CBBE9D2D | ScoreMultiplier | 分数 Multiplier | 24 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_79BE959D | SeasonScore | 季节 分数 | 28 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A3DC7C4C | TasteScore | 风格 分数 | 32 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 36 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9CF603A | CapFrequencyWear | 帽子 频率 穿着 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C2A379E | CapPurposeLimit | 帽子 用途 限制 | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A4396B29 | CapTemporarilyCreate | 帽子 临时 创建 | 40 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_744B3452 | GlassesFrequencyWear | 眼镜 频率 穿着 | 41 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A073AA81 | GlassesPurposeLimit | 眼镜 用途 限制 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FDF8907B | GlassesTemporarilyCreate | 眼镜 临时 创建 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6510A4FE | IsEquipCeremony | 是否 装备 仪式 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 45 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_74275E7A | MaskFrequencyWear | 遮罩 频率 穿着 | 77 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CC198281 | MaskPurposeLimit | 遮罩 用途 限制 | 78 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_14767DF7 | MaskTemporarilyCreate | 遮罩 临时 创建 | 79 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_036E8EBE | Name | 名称 | 80 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** NPC 装备规则

**用途：** 按文件名与字段名称候选推测：用于配置或描述NPC 装备规则相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/NpcEquipRule.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/NpcEquipRule.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/NpcEquipRule.csv) · [结构 JSON](../../../../research/bcsv-data/schema/NpcEquipRule.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 13（0 基） | 行 25（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_423D1C4D` 服装 频率 穿着 | 4 | 0xA108392D / hex:2d3908a1 | 0xA108392D / hex:2d3908a1 | 0xA108392D / hex:2d3908a1 |
| `hash_B219374F` 服装 用途 限制 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xBE57C764 / hex:64c757be | 0xBE57C764 / hex:64c757be |
| `hash_68D62CA8` 服装 临时 创建 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xF40CCD04 / hex:04cd0cf4 | 0xF40CCD04 / hex:04cd0cf4 |
| `hash_1F401B52` 用途 分数 | 16 | 3 / hex:03000000 | 2 / hex:02000000 | 2 / hex:02000000 |
| `hash_E765B554` 用途 标签 | 20 | 12 / hex:0c000000 | 16 / hex:10000000 | 44 / hex:2c000000 |
| `hash_CBBE9D2D` 分数 Multiplier | 24 | 2.0 / hex:00000040 | 4.0 / hex:00008040 | 4.0 / hex:00008040 |
| `hash_79BE959D` 季节 分数 | 28 | 2 / hex:02000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_A3DC7C4C` 风格 分数 | 32 | 5 / hex:05000000 | 8 / hex:08000000 | 8 / hex:08000000 |
| `hash_54706054` 唯一ID | 36 | 0 / hex:0000 | 21 / hex:1500 | 35 / hex:2300 |
| `hash_F9CF603A` 帽子 频率 穿着 | 38 | 1 / hex:01 | 0 / hex:00 | 3 / hex:03 |
| `hash_2C2A379E` 帽子 用途 限制 | 39 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_A4396B29` 帽子 临时 创建 | 40 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_744B3452` 眼镜 频率 穿着 | 41 | 1 / hex:01 | 2 / hex:02 | 0 / hex:00 |
| `hash_A073AA81` 眼镜 用途 限制 | 42 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_FDF8907B` 眼镜 临时 创建 | 43 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_6510A4FE` 是否 装备 仪式 | 44 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_87BF00E8` 标签 | 45 | "Usually" / hex:557375616c6c7900000000000000000000000000000000000000000000000000 | "Countdown" / hex:436f756e74646f776e0000000000000000000000000000000000000000000000 | "Carnival" / hex:4361726e6976616c000000000000000000000000000000000000000000000000 |
| `hash_74275E7A` 遮罩 频率 穿着 | 77 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_CC198281` 遮罩 用途 限制 | 78 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_14767DF7` 遮罩 临时 创建 | 79 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_036E8EBE` 名称 | 80 | "日常" / hex:e697a5e5b8b800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "大晦日" / hex:e5a4a7e699a6e697a500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "カーニバル" / hex:e382abe383bce3838be38390e383ab00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 服装 频率 穿着（hash_423D1C4D）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA108392D | 22 | Always | 始终 | crc_candidate |
| 0x0652491E | 2 | Relatively | Relatively | crc_candidate |
| 0xDFA2AFF1 | 2 | None | None | crc_candidate |

### 服装 用途 限制（hash_B219374F）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xBE57C764 | 23 | Limit | 限制 | crc_candidate |
| 0xDFA2AFF1 | 3 | None | None | crc_candidate |

### 服装 临时 创建（hash_68D62CA8）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xF40CCD04 | 13 | Enable | 启用 | crc_candidate |
| 0xDFA2AFF1 | 9 | None | None | crc_candidate |
| 0x3F270AE0 | 4 | Condition | 条件 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
