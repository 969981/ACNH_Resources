# WherearenRoll.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenRoll.bcsv`
SHA256：`ba7ecd229b8d21e5f39574c16dc3c233189ab13b6e2bc122db14a35a351daddd`
状态：parsed

行数 21，行长 136，数据起点 284。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_416EAF25 | FacilityActionType0 | 设施 动作 类型 0 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_F89574CD | FacilityActionType1 | 设施 动作 类型 1 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E9E81EB4 | FacilityActionType2 | 设施 动作 类型 2 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_5013C55C | FacilityActionType3 | 设施 动作 类型 3 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CB12CA46 | FacilityActionType4 | 设施 动作 类型 4 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_72E911AE | FacilityActionType5 | 设施 动作 类型 5 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_63947BD7 | FacilityActionType6 | 设施 动作 类型 6 | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_DA6FA03F | FacilityActionType7 | 设施 动作 类型 7 | 32 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_8EE763A2 | FacilityActionType8 | 设施 动作 类型 8 | 36 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_7328DE13 | FacilityInsuranceAction | 设施 保险 动作 | 40 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_649ED9AE | NpcRoleSelectMethod | NPC 角色 选择 方法 | 44 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_EC47B5B2 | BuiltNpcRoleID | 建造 NPC 角色 ID | 48 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3E4510FA | EquipRule | 装备 规则 | 50 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 52 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8F30AA9F | 未知 | 角色成长或选择标志（语义别名：RoleGrowthOrSelectionFlag） | 54 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_slot_candidate：All 21 rows equal LotGrowUp; helper slot14 candidate.；Ghidra VA：01D38FF0 |
| hash_F50743FB | ElectionRate0 | 选举 比率 0 | 55 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4DBB249E | ElectionRate1 | 选举 比率 1 | 56 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5F0E8B70 | ElectionRate2 | 选举 比率 2 | 57 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E7B2EC15 | ElectionRate3 | 选举 比率 3 | 58 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7A65D4AC | ElectionRate4 | 选举 比率 4 | 59 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C2D9B3C9 | ElectionRate5 | 选举 比率 5 | 60 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D06C1C27 | ElectionRate6 | 选举 比率 6 | 61 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_68D07B42 | ElectionRate7 | 选举 比率 7 | 62 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_30B36B14 | ElectionRate8 | 选举 比率 8 | 63 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ACE47BB9 | FlowName | 流程 名称 | 64 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 96 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_94A611BE | LotGrowUp | 抽选 成长 上 | 128 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_94F6A567 | LotOnFinishOrder | 抽选 开启 Finish 顺序 | 129 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B61D49C8 | MainRoleID | 主要 角色 ID | 130 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E447FE58 | ShareHouseSelectRate | 共享 房屋 选择 比率 | 131 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1A9174C6 | SortID | 排序 ID | 132 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2409DCB4 | UserSelect | 用户 选择 | 133 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 度假群岛角色分工（Roll）

**用途：** 按文件名与字段名称候选推测：用于配置或描述度假群岛角色分工（Roll）相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/WherearenRoll.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/WherearenRoll.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/WherearenRoll.csv) · [结构 JSON](../../../../research/bcsv-data/schema/WherearenRoll.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 10（0 基） | 行 20（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_416EAF25` 设施 动作 类型 0 | 4 | 0x00000000 / hex:00000000 | 0x2CDCEBB9 / hex:b9ebdc2c | 0x2DA3D56B / hex:6bd5a32d |
| `hash_F89574CD` 设施 动作 类型 1 | 8 | 0x00000000 / hex:00000000 | 0xCED1F675 / hex:75f6d1ce | 0xD0908E95 / hex:958e90d0 |
| `hash_E9E81EB4` 设施 动作 类型 2 | 12 | 0x00000000 / hex:00000000 | 0xC94685A7 / hex:a78546c9 | 0x3074EC58 / hex:58ec7430 |
| `hash_5013C55C` 设施 动作 类型 3 | 16 | 0x00000000 / hex:00000000 | 0xBF47B551 / hex:51b547bf | 0x00000000 / hex:00000000 |
| `hash_CB12CA46` 设施 动作 类型 4 | 20 | 0x00000000 / hex:00000000 | 0xBAC35E96 / hex:965ec3ba | 0x00000000 / hex:00000000 |
| `hash_72E911AE` 设施 动作 类型 5 | 24 | 0x00000000 / hex:00000000 | 0x415803CF / hex:cf035841 | 0x00000000 / hex:00000000 |
| `hash_63947BD7` 设施 动作 类型 6 | 28 | 0x00000000 / hex:00000000 | 0x5E3B4535 / hex:35453b5e | 0x00000000 / hex:00000000 |
| `hash_DA6FA03F` 设施 动作 类型 7 | 32 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 |
| `hash_8EE763A2` 设施 动作 类型 8 | 36 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 |
| `hash_7328DE13` 设施 保险 动作 | 40 | 0x00000000 / hex:00000000 | 0x2E821C64 / hex:641c822e | 0x737BC86F / hex:6fc87b73 |
| `hash_649ED9AE` NPC 角色 选择 方法 | 44 | 0xDFA2AFF1 / hex:f1afa2df | 0xB50C9E92 / hex:929e0cb5 | 0xB50C9E92 / hex:929e0cb5 |
| `hash_EC47B5B2` 建造 NPC 角色 ID | 48 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_3E4510FA` 装备 规则 | 50 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 52 | 0 / hex:0000 | 10 / hex:0a00 | 16 / hex:1000 |
| `hash_8F30AA9F` 角色成长或选择标志（语义别名：RoleGrowthOrSelectionFlag） | 54 | raw:00 / hex:00 | raw:01 / hex:01 | raw:01 / hex:01 |
| `hash_F50743FB` 选举 比率 0 | 55 | 0 / hex:00 | 20 / hex:14 | 15 / hex:0f |
| `hash_4DBB249E` 选举 比率 1 | 56 | 0 / hex:00 | 30 / hex:1e | 35 / hex:23 |
| `hash_5F0E8B70` 选举 比率 2 | 57 | 0 / hex:00 | 5 / hex:05 | 50 / hex:32 |
| `hash_E7B2EC15` 选举 比率 3 | 58 | 0 / hex:00 | 5 / hex:05 | 0 / hex:00 |
| `hash_7A65D4AC` 选举 比率 4 | 59 | 0 / hex:00 | 20 / hex:14 | 0 / hex:00 |
| `hash_C2D9B3C9` 选举 比率 5 | 60 | 0 / hex:00 | 10 / hex:0a | 0 / hex:00 |
| `hash_D06C1C27` 选举 比率 6 | 61 | 0 / hex:00 | 10 / hex:0a | 0 / hex:00 |
| `hash_68D07B42` 选举 比率 7 | 62 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_30B36B14` 选举 比率 8 | 63 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_ACE47BB9` 流程 名称 | 64 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "AI_NPC_RestaurantCustomer" / hex:41495f4e50435f52657374617572616e74437573746f6d657200000000000000 | "AI_NPC_TailorCustomer" / hex:41495f4e50435f5461696c6f72437573746f6d65720000000000000000000000 |
| `hash_87BF00E8` 标签 | 96 | "None" / hex:4e6f6e6500000000000000000000000000000000000000000000000000000000 | "RestaurantCustomer" / hex:52657374617572616e74437573746f6d65720000000000000000000000000000 | "TailorCustomer" / hex:5461696c6f72437573746f6d6572000000000000000000000000000000000000 |
| `hash_94A611BE` 抽选 成长 上 | 128 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_94F6A567` 抽选 开启 Finish 顺序 | 129 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_B61D49C8` 主要 角色 ID | 130 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E447FE58` 共享 房屋 选择 比率 | 131 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_1A9174C6` 排序 ID | 132 | 0 / hex:00 | 10 / hex:0a | 20 / hex:14 |
| `hash_2409DCB4` 用户 选择 | 133 | 0 / hex:000000 | 0 / hex:000000 | 0 / hex:000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 设施 动作 类型 0（hash_416EAF25）

去重码值 17 个，已有标签候选 16 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2CDCEBB9 | 3 | Drink_GlassJuice | 饮料 Glass Juice | crc_candidate |
| 0x3DC7DF5F | 2 | SpaceOut | Space Out | crc_candidate |
| 0xF53D2375 | 2 | Waiter_Walk | Waiter 行走 | crc_candidate |
| 0x00000000 | 1 | 未知 | 未知 | unmapped |
| 0x1E2B7AD0 | 1 | RestaurantCook_Cooking | Restaurant Cook 烹饪 | crc_candidate |
| 0x2DA3D56B | 1 | Walk | 行走 | crc_candidate |
| 0x2F989229 | 1 | HospitalPatient_Bed | Hospital Patient Bed | crc_candidate |
| 0x5E6AF2B4 | 1 | HospitalDoctor | Hospital Doctor | crc_candidate |
| 0x63C87B50 | 1 | RestaurantApprentice_Dish | Restaurant Apprentice Dish | crc_candidate |
| 0x758CF5AD | 1 | HospitalExamination_Sit | Hospital Examination 坐 | crc_candidate |
| 0x837E0406 | 1 | HospitalPatient_Sit | Hospital Patient 坐 | crc_candidate |
| 0xB41EC889 | 1 | Teacher_Book_Explain | Teacher 书 说明 | crc_candidate |

### 设施 动作 类型 1（hash_F89574CD）

去重码值 16 个，已有标签候选 15 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 3 | 未知 | 未知 | unmapped |
| 0x415803CF | 2 | RestaurantCustome_Drink_Coffee | Restaurant Custome 饮料 Coffee | crc_candidate |
| 0x87E84C77 | 2 | Waiter_StandBy | Waiter Stand By | crc_candidate |
| 0xCED1F675 | 2 | RestaurantCustome_Forks | Restaurant Custome Forks | crc_candidate |
| 0x017C57FD | 1 | RestaurantApprentice_Cooking | Restaurant Apprentice 烹饪 | crc_candidate |
| 0x0D287966 | 1 | HospitalDoctorStand | Hospital Doctor Stand | crc_candidate |
| 0x142E69A2 | 1 | Teacher_Walk | Teacher 行走 | crc_candidate |
| 0x2369F9CE | 1 | Reception_Looking | Reception Looking | crc_candidate |
| 0x33BFE43D | 1 | Cafe_Watching | Cafe Watching | crc_candidate |
| 0x4CC5AC2F | 1 | Student_Book | Student 书 | crc_candidate |
| 0x6BD70C0F | 1 | Book | 书 | crc_candidate |
| 0xBAC35E96 | 1 | SitConversationAnswer | 坐 Conversation Answer | crc_candidate |

### 设施 动作 类型 2（hash_E9E81EB4）

去重码值 10 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 10 | 未知 | 未知 | unmapped |
| 0x5E3B4535 | 2 | RestaurantCustome_Drink_Tea | Restaurant Custome 饮料 Tea | crc_candidate |
| 0xC94685A7 | 2 | SmartPhoneCheck | Smart Phone 检查 | crc_candidate |
| 0x2DA3D56B | 1 | Walk | 行走 | crc_candidate |
| 0x3074EC58 | 1 | WalkStare | 行走 Stare | crc_candidate |
| 0x3DC7DF5F | 1 | SpaceOut | Space Out | crc_candidate |
| 0x525AB0C6 | 1 | Teacher_Book | Teacher 书 | crc_candidate |
| 0x72EC2C30 | 1 | Sit | 坐 | crc_candidate |
| 0xA1FB2A52 | 1 | Cafe_ConversationAnswer | Cafe Conversation Answer | crc_candidate |
| 0xB1FBF4C7 | 1 | Student_StareSleeping | Student Stare Sleeping | crc_candidate |

### 设施 动作 类型 3（hash_5013C55C）

去重码值 7 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 11 | 未知 | 未知 | unmapped |
| 0xC94685A7 | 4 | SmartPhoneCheck | Smart Phone 检查 | crc_candidate |
| 0xBF47B551 | 2 | RestaurantCustome_FullStomach | Restaurant Custome Full Stomach | crc_candidate |
| 0x8207B610 | 1 | Teacher_WatchWindow | Teacher 观察 窗户 | crc_candidate |
| 0x8902B80D | 1 | RestaurantCustome_Walk | Restaurant Custome 行走 | crc_candidate |
| 0x9372B84A | 1 | WaitConversation | 等待 Conversation | crc_candidate |
| 0xB27FF38B | 1 | Student_Eat | Student Eat | crc_candidate |

### 设施 动作 类型 4（hash_CB12CA46）

去重码值 8 个，已有标签候选 7 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 12 | 未知 | 未知 | unmapped |
| 0x6BD70C0F | 2 | Book | 书 | crc_candidate |
| 0xBAC35E96 | 2 | SitConversationAnswer | 坐 Conversation Answer | crc_candidate |
| 0x2DA3D56B | 1 | Walk | 行走 | crc_candidate |
| 0x3DC7DF5F | 1 | SpaceOut | Space Out | crc_candidate |
| 0x6D664B72 | 1 | WaitConversationAnswer | 等待 Conversation Answer | crc_candidate |
| 0xCED1F675 | 1 | RestaurantCustome_Forks | Restaurant Custome Forks | crc_candidate |
| 0xE2A3B594 | 1 | Teacher_ConversationAnswer | Teacher Conversation Answer | crc_candidate |

### 设施 动作 类型 5（hash_72E911AE）

去重码值 4 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 17 | 未知 | 未知 | unmapped |
| 0x415803CF | 2 | RestaurantCustome_Drink_Coffee | Restaurant Custome 饮料 Coffee | crc_candidate |
| 0x6D664B72 | 1 | WaitConversationAnswer | 等待 Conversation Answer | crc_candidate |
| 0xBF47B551 | 1 | RestaurantCustome_FullStomach | Restaurant Custome Full Stomach | crc_candidate |

### 设施 动作 类型 6（hash_63947BD7）

去重码值 3 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 18 | 未知 | 未知 | unmapped |
| 0x5E3B4535 | 2 | RestaurantCustome_Drink_Tea | Restaurant Custome 饮料 Tea | crc_candidate |
| 0xC94685A7 | 1 | SmartPhoneCheck | Smart Phone 检查 | crc_candidate |

### 设施 动作 类型 7（hash_DA6FA03F）

去重码值 2 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 20 | 未知 | 未知 | unmapped |
| 0x6BD70C0F | 1 | Book | 书 | crc_candidate |

### 设施 动作 类型 8（hash_8EE763A2）

去重码值 2 个，已有标签候选 1 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 20 | 未知 | 未知 | unmapped |
| 0x9372B84A | 1 | WaitConversation | 等待 Conversation | crc_candidate |

### 设施 保险 动作（hash_7328DE13）

去重码值 15 个，已有标签候选 14 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2E821C64 | 4 | RestaurantCustome_Stock | Restaurant Custome Stock | crc_candidate |
| 0x00000000 | 2 | 未知 | 未知 | unmapped |
| 0x6875EB92 | 2 | Reception_Stock | Reception Stock | crc_candidate |
| 0xA318BF17 | 2 | Cafe_Stock | Cafe Stock | crc_candidate |
| 0x1E886BFE | 1 | RestaurantCashier_Stock | Restaurant Cashier Stock | crc_candidate |
| 0x365EB179 | 1 | HospitalPatient_Stock | Hospital Patient Stock | crc_candidate |
| 0x435FAFC2 | 1 | RestaurantCook_Stock | Restaurant Cook Stock | crc_candidate |
| 0x5D618E29 | 1 | RestaurantVip_Stock | Restaurant Vip Stock | crc_candidate |
| 0x68768ECC | 1 | Teacher_Stock | Teacher Stock | crc_candidate |
| 0x7020DAF1 | 1 | Waiter_Stock | Waiter Stock | crc_candidate |
| 0x737BC86F | 1 | WalkShopping_Stock | 行走 Shopping Stock | crc_candidate |
| 0x81D9D37B | 1 | HospitalDoctor_Stock | Hospital Doctor Stock | crc_candidate |

### NPC 角色 选择 方法（hash_649ED9AE）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xB50C9E92 | 17 | VillagerRandom | 岛民 随机 | crc_candidate |
| 0xA9DC3CA1 | 2 | NonVillagerRandom | Non 岛民 随机 | crc_candidate |
| 0x09AB68CB | 1 | ShareHouse | 共享 房屋 | crc_candidate |
| 0xDFA2AFF1 | 1 | None | None | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_416EAF25 | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 20/20 | 16/16 |
| 出向 | hash_F89574CD | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 18/18 | 15/15 |
| 出向 | hash_E9E81EB4 | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 11/11 | 9/9 |
| 出向 | hash_5013C55C | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 10/10 | 6/6 |
| 出向 | hash_CB12CA46 | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 9/9 | 7/7 |
| 出向 | hash_72E911AE | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 4/4 | 3/3 |
| 出向 | hash_7328DE13 | hash_13AB5198 | [WherearenFacilityActionTypeParam.bcsv](table-0209.md) | 19/19 | 14/14 |
| 入向 | hash_2B54BEDD | hash_87BF00E8 | [WherearenRollSet.bcsv](table-0231.md) | 10/11 | 10/11 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
