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
