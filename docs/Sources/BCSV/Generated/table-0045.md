# EventPlazaPlacementParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventPlazaPlacementParam.bcsv`
SHA256：`92dbd74f5ea457d7d242bc73980f0371dd78f94c99e2306ec562b64f77042499`
状态：parsed

行数 131，行长 272，数据起点 212。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_036DD90C | CalendarEventKeyHash | 日历 事件 键 哈希 | 4 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_70703269 | EventType | 事件 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_C8F02583 | EventWeatherArea | 事件 天气 区域 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_24E5B19D | NpcGroupActivityKeyHash | NPC 分组 活动 键 哈希 | 16 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_65A97FAB | PlacementKind | 摆放 类别 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_160CB241 | PlacementOfficeType | 摆放 办公室 类型 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_F6E867D0 | PlacementRadioGymnastics | 摆放 Radio Gymnastics | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_20DD4435 | EventFtrUniqueID | 事件 家具 唯一 ID | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_26DB5137 | EventObjUniqueID | 事件 对象 唯一 ID | 34 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4154052C | OffsetX | 偏移 X | 36 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3B94564C | OffsetZ | 偏移 Z | 38 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 40 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_52F0BADD | CalendarEventKey | 日历 事件 键 | 42 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B8E42602 | DisableAtRemoveObjEvent | 禁用 在 移除 对象 事件 | 74 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_30127DFD | DisableInDream | 禁用 内 梦境 | 75 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4906E466 | IncludeReadyEvent | 包含 就绪 事件 | 76 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A802423D | 未知 | 演唱会家具摆放标志（语义别名：ConcertFurniturePlacementFlag） | 77 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Only four K.K. concert furniture placements nonzero. |
| hash_E6C63C5C | LandFlagKeyOFF | 土地 标志 键 关闭 | 78 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7215B154 | LandFlagKeyON | 土地 标志 键 开启 | 110 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_56EE0925 | LandTempFlagKeyOFF | 土地 临时 标志 键 关闭 | 142 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5BA37406 | NpcSpLabel | NPC Sp 标签 | 174 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E2D0AC54 | PlacementKey | 摆放 键 | 206 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7E322EF0 | VisitorNpcLabel | 访客 NPC 标签 | 238 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 活动广场摆放参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述活动广场摆放参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/EventPlazaPlacementParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/EventPlazaPlacementParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/EventPlazaPlacementParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/EventPlazaPlacementParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 65（0 基） | 行 130（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_036DD90C` 日历 事件 键 哈希 | 4 | 0x91976F00 / hex:006f9791 | 0x2AFAC5BF / hex:bfc5fa2a | 0x91976F00 / hex:006f9791 |
| `hash_70703269` 事件 类型 | 8 | 0xE5792942 / hex:422979e5 | 0x46A29D19 / hex:199da246 | 0xE5792942 / hex:422979e5 |
| `hash_C8F02583` 事件 天气 区域 | 12 | 0x0355373D / hex:3d375503 | 0x0355373D / hex:3d375503 | 0x0355373D / hex:3d375503 |
| `hash_24E5B19D` NPC 分组 活动 键 哈希 | 16 | 0xB6EEDE09 / hex:09deeeb6 | 0xB6EEDE09 / hex:09deeeb6 | 0xB6EEDE09 / hex:09deeeb6 |
| `hash_65A97FAB` 摆放 类别 | 20 | 0x90EBDD61 / hex:61ddeb90 | 0xD02B34A6 / hex:a6342bd0 | 0x90EBDD61 / hex:61ddeb90 |
| `hash_160CB241` 摆放 办公室 类型 | 24 | 0x0355373D / hex:3d375503 | 0x0355373D / hex:3d375503 | 0x0355373D / hex:3d375503 |
| `hash_F6E867D0` 摆放 Radio Gymnastics | 28 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xF83F7AF2 / hex:f27a3ff8 |
| `hash_20DD4435` 事件 家具 唯一 ID | 32 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_26DB5137` 事件 对象 唯一 ID | 34 | 0 / hex:0000 | 0 / hex:0000 | 31 / hex:1f00 |
| `hash_4154052C` 偏移 X | 36 | 0 / hex:0000 | 16 / hex:1000 | 12 / hex:0c00 |
| `hash_3B94564C` 偏移 Z | 38 | 0 / hex:0000 | 14 / hex:0e00 | 15 / hex:0f00 |
| `hash_54706054` 唯一ID | 40 | 0 / hex:0000 | 82 / hex:5200 | 176 / hex:b000 |
| `hash_52F0BADD` 日历 事件 键 | 42 | "EventNone" / hex:4576656e744e6f6e650000000000000000000000000000000000000000000000 | "Easter" / hex:4561737465720000000000000000000000000000000000000000000000000000 | "EventNone" / hex:4576656e744e6f6e650000000000000000000000000000000000000000000000 |
| `hash_B8E42602` 禁用 在 移除 对象 事件 | 74 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_30127DFD` 禁用 内 梦境 | 75 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_4906E466` 包含 就绪 事件 | 76 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A802423D` 演唱会家具摆放标志（语义别名：ConcertFurniturePlacementFlag） | 77 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_E6C63C5C` 土地 标志 键 关闭 | 78 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_7215B154` 土地 标志 键 开启 | 110 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_56EE0925` 土地 临时 标志 键 关闭 | 142 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_5BA37406` NPC Sp 标签 | 174 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "pyn" / hex:70796e0000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_E2D0AC54` 摆放 键 | 206 | "Invalid" / hex:496e76616c696400000000000000000000000000000000000000000000000000 | "E_Easter_NPC_0" / hex:455f4561737465725f4e50435f30000000000000000000000000000000000000 | "P_EventNone_EventObj_7" / hex:505f4576656e744e6f6e655f4576656e744f626a5f3700000000000000000000 |
| `hash_7E322EF0` 访客 NPC 标签 | 238 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 事件 类型（hash_70703269）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x46A29D19 | 71 | CalendarEvent | 日历 事件 | crc_candidate |
| 0xE5792942 | 35 | PermanentObj | Permanent 对象 | crc_candidate |
| 0x0FE7E850 | 19 | NpcGroupActivity | NPC 分组 活动 | crc_candidate |
| 0x50D61841 | 6 | VisitorNpc | 访客 NPC | crc_candidate |

### 事件 天气 区域（hash_C8F02583）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x0355373D | 123 | All | All | crc_candidate |
| 0x1DEB1FC6 | 4 | North | 北 | crc_candidate |
| 0x80D45A70 | 4 | South | 南 | crc_candidate |

### 摆放 类别（hash_65A97FAB）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x7E0E8482 | 84 | Ftr | 家具 | crc_candidate |
| 0x90EBDD61 | 32 | EventObj | 事件 对象 | crc_candidate |
| 0xD02B34A6 | 15 | NPC | NPC | crc_candidate |

### 摆放 办公室 类型（hash_160CB241）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x0355373D | 113 | All | All | crc_candidate |
| 0x73FD6E34 | 14 | Office | 办公室 | crc_candidate |
| 0x8721BD2E | 3 | Tent | Tent | crc_candidate |
| 0xBA965487 | 1 | OfficeUnderConstruction | 办公室 Under Construction | crc_candidate |

### 摆放 Radio Gymnastics（hash_F6E867D0）

去重码值 4 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 117 | None | None | crc_candidate |
| 0x0355373D | 7 | All | All | crc_candidate |
| 0xA8952678 | 4 | OnlyRadioGymnastics | 仅 Radio Gymnastics | crc_candidate |
| 0xF83F7AF2 | 3 | 未知 | 未知 | unmapped |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
