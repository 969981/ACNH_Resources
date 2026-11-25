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
