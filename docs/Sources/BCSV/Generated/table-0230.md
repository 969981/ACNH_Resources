# WherearenRoll.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/WherearenRoll.bcsv`
SHA256：`ba7ecd229b8d21e5f39574c16dc3c233189ab13b6e2bc122db14a35a351daddd`
记录数 21，行长 136，字段数 32。回填 31 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/WherearenRoll.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/WherearenRoll.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/WherearenRoll.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_416EAF25 | 4 | 4 | FacilityActionType0 | hshCstringRef | FacilityActionType0.hshCstringRef | candidate_name |
| hash_F89574CD | 8 | 4 | FacilityActionType1 | hshCstringRef | FacilityActionType1.hshCstringRef | candidate_name |
| hash_E9E81EB4 | 12 | 4 | FacilityActionType2 | hshCstringRef | FacilityActionType2.hshCstringRef | candidate_name |
| hash_5013C55C | 16 | 4 | FacilityActionType3 | hshCstringRef | FacilityActionType3.hshCstringRef | candidate_name |
| hash_CB12CA46 | 20 | 4 | FacilityActionType4 | hshCstringRef | FacilityActionType4.hshCstringRef | candidate_name |
| hash_72E911AE | 24 | 4 | FacilityActionType5 | hshCstringRef | FacilityActionType5.hshCstringRef | candidate_name |
| hash_63947BD7 | 28 | 4 | FacilityActionType6 | hshCstringRef | FacilityActionType6.hshCstringRef | candidate_name |
| hash_DA6FA03F | 32 | 4 | FacilityActionType7 | hshCstringRef | FacilityActionType7.hshCstringRef | candidate_name |
| hash_8EE763A2 | 36 | 4 | FacilityActionType8 | hshCstringRef | FacilityActionType8.hshCstringRef | candidate_name |
| hash_7328DE13 | 40 | 4 | FacilityInsuranceAction | hshCstringRef | FacilityInsuranceAction.hshCstringRef | candidate_name |
| hash_649ED9AE | 44 | 4 | NpcRoleSelectMethod | hshCstringRef | NpcRoleSelectMethod.hshCstringRef | candidate_name |
| hash_EC47B5B2 | 48 | 2 | BuiltNpcRoleID | u16 | BuiltNpcRoleID u16 | candidate_name |
| hash_3E4510FA | 50 | 2 | EquipRule | u16 | EquipRule u16 | candidate_name |
| hash_54706054 | 52 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_8F30AA9F | 54 | 1 | hash_8F30AA9F | — | — | unresolved |
| hash_F50743FB | 55 | 1 | ElectionRate0 | u8 | ElectionRate0 u8 | candidate_name |
| hash_4DBB249E | 56 | 1 | ElectionRate1 | u8 | ElectionRate1 u8 | candidate_name |
| hash_5F0E8B70 | 57 | 1 | ElectionRate2 | u8 | ElectionRate2 u8 | candidate_name |
| hash_E7B2EC15 | 58 | 1 | ElectionRate3 | u8 | ElectionRate3 u8 | candidate_name |
| hash_7A65D4AC | 59 | 1 | ElectionRate4 | u8 | ElectionRate4 u8 | candidate_name |
| hash_C2D9B3C9 | 60 | 1 | ElectionRate5 | u8 | ElectionRate5 u8 | candidate_name |
| hash_D06C1C27 | 61 | 1 | ElectionRate6 | u8 | ElectionRate6 u8 | candidate_name |
| hash_68D07B42 | 62 | 1 | ElectionRate7 | u8 | ElectionRate7 u8 | candidate_name |
| hash_30B36B14 | 63 | 1 | ElectionRate8 | u8 | ElectionRate8 u8 | candidate_name |
| hash_ACE47BB9 | 64 | 32 | FlowName | string32 | FlowName string32 | candidate_name |
| hash_87BF00E8 | 96 | 32 | Label | string32 | Label string32 | candidate_name |
| hash_94A611BE | 128 | 1 | LotGrowUp | u8 | LotGrowUp u8 | candidate_name |
| hash_94F6A567 | 129 | 1 | LotOnFinishOrder | u8 | LotOnFinishOrder u8 | candidate_name |
| hash_B61D49C8 | 130 | 1 | MainRoleID | s8 | MainRoleID s8 | candidate_name |
| hash_E447FE58 | 131 | 1 | ShareHouseSelectRate | u8 | ShareHouseSelectRate u8 | candidate_name |
| hash_1A9174C6 | 132 | 1 | SortID | s8 | SortID s8 | candidate_name |
| hash_2409DCB4 | 133 | 3 | UserSelect | u8 | UserSelect u8 | candidate_name |

## 历史残余语义证据

- hash_8F30AA9F: RoleGrowthOrSelectionFlag (native_slot_candidate) — All 21 rows equal LotGrowUp; helper slot14 candidate.
