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
