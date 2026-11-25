# RecipeCraftParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RecipeCraftParam.bcsv`
SHA256：`188d486ad322984b8d8b344aa34c0c307be8907ab560eaca27122855189a4c87`
状态：parsed

行数 924，行长 140，数据起点 252。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_5F405BFB | BoardColorID | 公告板 颜色 ID | 4 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7F5B6179 | CraftRecipeSeason | 制作 配方 季节 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_478B74E4 | CraftRecipeSelectSeasonType | 制作 配方 选择 季节 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_34A742AD | CraftUnlock | 制作 解锁 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CDE5164F | NPCUnlock | NPC 解锁 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_FFE9B35B | RecipeDataType | 配方 数据 类型 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_10FC6F17 | TradeDifficultyLevel | 交易 难度 等级 | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_9C4EFA45 | TradeTicketBasePrice | 交易 票券 基础 价格 | 32 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3711677B | VillagerOpenNum | 岛民 打开 数量 | 36 | 4 | u32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_13A65775 | Amount1 | 数量 1 | 40 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54062DA5 | Amount2 | 数量 2 | 42 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_69660415 | Amount3 | 数量 3 | 44 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DB46D805 | Amount4 | 数量 4 | 46 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E626F1B5 | Amount5 | 数量 5 | 48 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A1868B65 | Amount6 | 数量 6 | 50 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_89A3482C | Item | 道具 | 52 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BBFA75E | Material1 | 材质 1 | 54 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5C1FDD8E | Material2 | 材质 2 | 56 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_617FF43E | Material3 | 材质 3 | 58 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D35F282E | Material4 | 材质 4 | 60 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EE3F019E | Material5 | 材质 5 | 62 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A99F7B4E | Material6 | 材质 6 | 64 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39DEDE36 | SerialID | 序列 ID | 66 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 68 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CCCA419 | InvalidCard | 无效 卡片 | 70 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EFA5DDA4 | 未知 | 交易券价格超过 1000 时的条件（语义别名：TradeTicketAbove1000Condition） | 71 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_behavior：FUN_026253E0 computes six-slot material prices or preset TradeTicketBasePrice; FUN_02626600 accepts valid price <=1000, requires this field for >1000. Caller business context pending.；Ghidra VA：02626600, 026253E0；原生读取 1 B |
| hash_33DDEFC8 | SelectCalendarEventSeason | 选择 日历 事件 季节 | 72 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AD0C787A | 未知 | 环境相关默认主体改造款式（语义别名：EnvironmentDependentDefaultReBody） | 136 | 4 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_behavior：Five predicate callsites and two machine-code authenticated low-three-bit writes; actual hemisphere member producers unverified.；Ghidra VA：026222E0, 026138CC, 0261FB40, 028AA290, 03412D40, 01AF6A60；原生读取 1 B |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 制作配方参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述制作配方参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/RecipeCraftParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/RecipeCraftParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/RecipeCraftParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/RecipeCraftParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 462（0 基） | 行 923（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_5F405BFB` 公告板 颜色 ID | 4 | 12 / hex:0c000000 | 46 / hex:2e000000 | 42 / hex:2a000000 |
| `hash_7F5B6179` 制作 配方 季节 | 8 | 0xEA776F08 / hex:086f77ea | 0xEA776F08 / hex:086f77ea | 0xEA776F08 / hex:086f77ea |
| `hash_478B74E4` 制作 配方 选择 季节 类型 | 12 | 0xD9577DEF / hex:ef7d57d9 | 0xD9577DEF / hex:ef7d57d9 | 0xD9577DEF / hex:ef7d57d9 |
| `hash_34A742AD` 制作 解锁 | 16 | 0xDFA2AFF1 / hex:f1afa2df | 0xCC9BC571 / hex:71c59bcc | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_CDE5164F` NPC 解锁 | 20 | 0x39DF002C / hex:2c00df39 | 0xED196D2A / hex:2a6d19ed | 0x78A2A6F4 / hex:f4a6a278 |
| `hash_FFE9B35B` 配方 数据 类型 | 24 | 0xBBDEE112 / hex:12e1debb | 0xBBDEE112 / hex:12e1debb | 0xBBDEE112 / hex:12e1debb |
| `hash_10FC6F17` 交易 难度 等级 | 28 | 0xAAC53E41 / hex:413ec5aa | 0xAAC53E41 / hex:413ec5aa | 0xAAC53E41 / hex:413ec5aa |
| `hash_9C4EFA45` 交易 票券 基础 价格 | 32 | 9800 / hex:48260000 | 1800 / hex:08070000 | 3600 / hex:100e0000 |
| `hash_3711677B` 岛民 打开 数量 | 36 | 100 / hex:64000000 | 0 / hex:00000000 | 0 / hex:00000000 |
| `hash_13A65775` 数量 1 | 40 | 10 / hex:0a00 | 1 / hex:0100 | 6 / hex:0600 |
| `hash_54062DA5` 数量 2 | 42 | 2 / hex:0200 | 3 / hex:0300 | 2 / hex:0200 |
| `hash_69660415` 数量 3 | 44 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_DB46D805` 数量 4 | 46 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_E626F1B5` 数量 5 | 48 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_A1868B65` 数量 6 | 50 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_89A3482C` 道具 | 52 | 2596 / hex:240a | 2777 / hex:d90a | 13161 / hex:6933 |
| `hash_1BBFA75E` 材质 1 | 54 | 2213 / hex:a508 | 3263 / hex:bf0c | 2767 / hex:cf0a |
| `hash_5C1FDD8E` 材质 2 | 56 | 2511 / hex:cf09 | 2624 / hex:400a | 2769 / hex:d10a |
| `hash_617FF43E` 材质 3 | 58 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_D35F282E` 材质 4 | 60 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_EE3F019E` 材质 5 | 62 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_A99F7B4E` 材质 6 | 64 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_39DEDE36` 序列 ID | 66 | 1821 / hex:1d07 | 130 / hex:8200 | 444 / hex:bc01 |
| `hash_54706054` 唯一ID | 68 | 6 / hex:0600 | 567 / hex:3702 | 1072 / hex:3004 |
| `hash_3CCCA419` 无效 卡片 | 70 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_EFA5DDA4` 交易券价格超过 1000 时的条件（语义别名：TradeTicketAbove1000Condition） | 71 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_33DDEFC8` 选择 日历 事件 季节 | 72 | "EventNone" / hex:4576656e744e6f6e6500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "EventNone" / hex:4576656e744e6f6e6500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "EventNone" / hex:4576656e744e6f6e6500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_AD0C787A` 环境相关默认主体改造款式（语义别名：EnvironmentDependentDefaultReBody） | 136 | raw:00000000 / hex:00000000 | raw:00000000 / hex:00000000 | raw:00000000 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 制作 配方 季节（hash_7F5B6179）

去重码值 9 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xEA776F08 | 805 | Bamboo | Bamboo | crc_candidate |
| 0xB5E1110D | 26 | SnowCrystal | 雪 Crystal | crc_candidate |
| 0xBDEDDED3 | 19 | XmasDeco | Xmas 装饰 | crc_candidate |
| 0xB57C01AB | 18 | Pumpkin | Pumpkin | crc_candidate |
| 0x69D68714 | 15 | SakuraPetal | 樱花 Petal | crc_candidate |
| 0x1EC53ABD | 12 | Mushroom | Mushroom | crc_candidate |
| 0x45BA22AF | 10 | Maple | Maple | crc_candidate |
| 0x8065414E | 10 | Nut | Nut | crc_candidate |
| 0x84539DF9 | 9 | Shell | Shell | crc_candidate |

### 制作 配方 选择 季节 类型（hash_478B74E4）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD9577DEF | 740 | NoSelect | 无 选择 | crc_candidate |
| 0xF354E799 | 131 | SelectRecipeSeason | 选择 配方 季节 | crc_candidate |
| 0x689696C2 | 53 | SelectCalendarEvent | 选择 日历 事件 | crc_candidate |

### 制作 解锁（hash_34A742AD）

去重码值 67 个，已有标签候选 67 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 489 | None | None | crc_candidate |
| 0x6CC0F59F | 38 | MileExchange | Mile 交换 | crc_candidate |
| 0x32464060 | 37 | Ows01 | Ows 01 | crc_candidate |
| 0xBE71F1C0 | 21 | ImmigrationQuest | Immigration 任务 | crc_candidate |
| 0xF18ECD6E | 18 | SeasonChristmasOrnament | 季节 Christmas Ornament | crc_candidate |
| 0xC6C6740D | 16 | Snowman | Snowman | crc_candidate |
| 0x787AFFE3 | 15 | Seo01 | Seo 01 | crc_candidate |
| 0x8313D5BF | 15 | SeasonSakura | 季节 樱花 | crc_candidate |
| 0xA862FB2E | 14 | EasterRand | Easter Rand | crc_candidate |
| 0xE94A536F | 14 | SeasonPumpkin | 季节 Pumpkin | crc_candidate |
| 0x57D2723B | 12 | SeasonSpringBamboo | 季节 春季 Bamboo | crc_candidate |
| 0x82900A46 | 12 | SeasonMushroom | 季节 Mushroom | crc_candidate |

### NPC 解锁（hash_CDE5164F）

去重码值 11 个，已有标签候选 11 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xED196D2A | 408 | NO_TAKE | NO TAKE | crc_candidate |
| 0x268D2CAC | 155 | ALL_NPC | ALL NPC | crc_candidate |
| 0xB437D830 | 43 | KO | KO | crc_candidate |
| 0xF8577E22 | 42 | GE | GE | crc_candidate |
| 0x39DF002C | 40 | AN | AN | crc_candidate |
| 0x5A3ED4D8 | 40 | OT | OT | crc_candidate |
| 0x65F56379 | 40 | BO | BO | crc_candidate |
| 0x9DDED703 | 40 | WHEREAREN | WHEREAREN | crc_candidate |
| 0xE0833F39 | 39 | ZK | ZK | crc_candidate |
| 0xFCFB5F07 | 39 | FU | FU | crc_candidate |
| 0x78A2A6F4 | 38 | HA | HA | crc_candidate |

### 配方 数据 类型（hash_FFE9B35B）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xBBDEE112 | 783 | DIY | DIY | crc_candidate |
| 0x89C6DFF6 | 141 | Cooking | 烹饪 | crc_candidate |

### 交易 难度 等级（hash_10FC6F17）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xAAC53E41 | 433 | Low | Low | crc_candidate |
| 0xD9577DEF | 190 | NoSelect | 无 选择 | crc_candidate |
| 0x51374B6B | 175 | High | High | crc_candidate |
| 0x992C1FF9 | 112 | Middle | Middle | crc_candidate |
| 0x0D955898 | 14 | Highest | Highest | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
