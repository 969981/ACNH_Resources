# MemoriesEventInfoPlayer.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MemoriesEventInfoPlayer.bcsv`
SHA256：`75987128ed222792a9d96405143bab515b81e33bec1262643005e156601583e6`
状态：parsed

行数 117，行长 68，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A6240B90 | EventFlag | 事件 标志 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DA3F63CF | Param0 | 参数 0 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_63C4B827 | Param1 | 参数 1 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_72B9D25E | Param2 | 参数 2 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CB4209B6 | Param3 | 参数 3 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54A1DF24 | PrioMethod | 优先级 方法 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_175969E1 | EventNumLimit | 事件 数量 限制 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7EF334A6 | CountPlayerVisit | 计数 玩家 Visit | 32 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 33 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_572A8FE9 | PrioLevel | 优先级 等级 | 65 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_83DA3B2A | 未知 | 网络回忆事件标志（语义别名：NetworkMemoryEventFlag） | 66 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Seven player memories about dream/network/posting, zero land rows. |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 玩家回忆事件信息

**用途：** 按文件名与字段名称候选推测：用于配置或描述玩家回忆事件信息相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MemoriesEventInfoPlayer.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MemoriesEventInfoPlayer.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MemoriesEventInfoPlayer.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MemoriesEventInfoPlayer.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 58（0 基） | 行 116（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A6240B90` 事件 标志 | 4 | -1 / hex:ffffffff | -1 / hex:ffffffff | -1 / hex:ffffffff |
| `hash_DA3F63CF` 参数 0 | 8 | 0xB254B247 / hex:47b254b2 | 0xDFA2AFF1 / hex:f1afa2df | 0x297A4355 / hex:55437a29 |
| `hash_63C4B827` 参数 1 | 12 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_72B9D25E` 参数 2 | 16 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_CB4209B6` 参数 3 | 20 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_54A1DF24` 优先级 方法 | 24 | 0x6ACF5248 / hex:4852cf6a | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_175969E1` 事件 数量 限制 | 28 | 5 / hex:0500 | 1 / hex:0100 | 1 / hex:0100 |
| `hash_54706054` 唯一ID | 30 | 0 / hex:0000 | 59 / hex:3b00 | 129 / hex:8100 |
| `hash_7EF334A6` 计数 玩家 Visit | 32 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 33 | "PE_GetFish_New" / hex:50455f476574466973685f4e6577000000000000000000000000000000000000 | "PE_Seo_Talk" / hex:50455f53656f5f54616c6b000000000000000000000000000000000000000000 | "PE_HotelVIPRoomImpSNPC" / hex:50455f486f74656c564950526f6f6d496d70534e504300000000000000000000 |
| `hash_572A8FE9` 优先级 等级 | 65 | 5 / hex:05 | 7 / hex:07 | 5 / hex:05 |
| `hash_83DA3B2A` 网络回忆事件标志（语义别名：NetworkMemoryEventFlag） | 66 | raw:0000 / hex:0000 | raw:0000 / hex:0000 | raw:0000 / hex:0000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 参数 0（hash_DA3F63CF）

去重码值 13 个，已有标签候选 12 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xB254B247 | 46 | ItemId | 道具 ID | crc_candidate |
| 0xDFA2AFF1 | 31 | None | None | crc_candidate |
| 0x616B8F72 | 16 | NmlNpcId | Nml NPC ID | crc_candidate |
| 0x5B2BE317 | 6 | Level | 等级 | crc_candidate |
| 0x297A4355 | 5 | SpNpcId | Sp NPC ID | crc_candidate |
| 0xA2E1E6DE | 3 | PopId | Pop ID | crc_candidate |
| 0x36DF2C73 | 2 | MyDesignId | My 设计 ID | crc_candidate |
| 0x4E008716 | 2 | WherearenFacilityId | 度假岛 设施 ID | crc_candidate |
| 0xED0914C9 | 2 | 未知 | 未知 | unmapped |
| 0x8AF66C28 | 1 | MysteryTourFieldId | 神秘 旅行 场景 ID | crc_candidate |
| 0x92E143FB | 1 | DreamId | 梦境 ID | crc_candidate |
| 0xC4D12EF5 | 1 | ResortId | Resort ID | crc_candidate |

### 参数 1（hash_63C4B827）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 79 | None | None | crc_candidate |
| 0x0885BB7A | 22 | RemakeRebodyId | 改造 主体改造 ID | crc_candidate |
| 0xDCB67730 | 7 | Value | 数值 | crc_candidate |
| 0x0823643A | 4 | WherearenThemeId | 度假岛 主题 ID | crc_candidate |
| 0xB254B247 | 4 | ItemId | 道具 ID | crc_candidate |
| 0x5B2BE317 | 1 | Level | 等级 | crc_candidate |

### 参数 2（hash_72B9D25E）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 89 | None | None | crc_candidate |
| 0x735FAE1F | 20 | RemakeRefabricId | 改造 布料改造 ID | crc_candidate |
| 0x5B2BE317 | 4 | Level | 等级 | crc_candidate |
| 0x0885BB7A | 2 | RemakeRebodyId | 改造 主体改造 ID | crc_candidate |
| 0xBB3FBF82 | 2 | DIYRecipeItemId | DIY 配方 道具 ID | crc_candidate |

### 参数 3（hash_CB4209B6）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 112 | None | None | crc_candidate |
| 0xBB3FBF82 | 3 | DIYRecipeItemId | DIY 配方 道具 ID | crc_candidate |
| 0x735FAE1F | 2 | RemakeRefabricId | 改造 布料改造 ID | crc_candidate |

### 优先级 方法（hash_54A1DF24）

去重码值 5 个，已有标签候选 5 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x6ACF5248 | 59 | Recent | Recent | crc_candidate |
| 0xDFA2AFF1 | 42 | None | None | crc_candidate |
| 0x0B090DDD | 12 | Price | 价格 | crc_candidate |
| 0xB64911BF | 3 | BestFriend | Best Friend | crc_candidate |
| 0x1D32EF51 | 1 | MysteryTour | 神秘 旅行 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
