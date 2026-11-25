# EventPlazaPlacementParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventPlazaPlacementParam.bcsv`
SHA256：`92dbd74f5ea457d7d242bc73980f0371dd78f94c99e2306ec562b64f77042499`
记录数 131，行长 272，字段数 23。回填 22 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/EventPlazaPlacementParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/EventPlazaPlacementParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/EventPlazaPlacementParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_036DD90C | 4 | 4 | CalendarEventKeyHash | stringMurmurHash | CalendarEventKeyHash stringMurmurHash | candidate_name |
| hash_70703269 | 8 | 4 | EventType | hshCstringRef | EventType.hshCstringRef | candidate_name |
| hash_C8F02583 | 12 | 4 | EventWeatherArea | hshCstringRef | EventWeatherArea.hshCstringRef | candidate_name |
| hash_24E5B19D | 16 | 4 | NpcGroupActivityKeyHash | stringMurmurHash | NpcGroupActivityKeyHash stringMurmurHash | candidate_name |
| hash_65A97FAB | 20 | 4 | PlacementKind | hshCstringRef | PlacementKind.hshCstringRef | candidate_name |
| hash_160CB241 | 24 | 4 | PlacementOfficeType | hshCstringRef | PlacementOfficeType.hshCstringRef | candidate_name |
| hash_F6E867D0 | 28 | 4 | PlacementRadioGymnastics | hshCstringRef | PlacementRadioGymnastics.hshCstringRef | candidate_name |
| hash_20DD4435 | 32 | 2 | EventFtrUniqueID | u16 | EventFtrUniqueID u16 | candidate_name |
| hash_26DB5137 | 34 | 2 | EventObjUniqueID | u16 | EventObjUniqueID u16 | candidate_name |
| hash_4154052C | 36 | 2 | OffsetX | s16 | OffsetX s16 | candidate_name |
| hash_3B94564C | 38 | 2 | OffsetZ | s16 | OffsetZ s16 | candidate_name |
| hash_54706054 | 40 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_52F0BADD | 42 | 32 | CalendarEventKey | string32 | CalendarEventKey string32 | candidate_name |
| hash_B8E42602 | 74 | 1 | DisableAtRemoveObjEvent | u8 | DisableAtRemoveObjEvent u8 | candidate_name |
| hash_30127DFD | 75 | 1 | DisableInDream | u8 | DisableInDream u8 | candidate_name |
| hash_4906E466 | 76 | 1 | IncludeReadyEvent | u8 | IncludeReadyEvent u8 | candidate_name |
| hash_A802423D | 77 | 1 | hash_A802423D | — | — | unresolved |
| hash_E6C63C5C | 78 | 32 | LandFlagKeyOFF | string32 | LandFlagKeyOFF string32 | candidate_name |
| hash_7215B154 | 110 | 32 | LandFlagKeyON | string32 | LandFlagKeyON string32 | candidate_name |
| hash_56EE0925 | 142 | 32 | LandTempFlagKeyOFF | string32 | LandTempFlagKeyOFF string32 | candidate_name |
| hash_5BA37406 | 174 | 32 | NpcSpLabel | string32 | NpcSpLabel string32 | candidate_name |
| hash_E2D0AC54 | 206 | 32 | PlacementKey | string32 | PlacementKey string32 | candidate_name |
| hash_7E322EF0 | 238 | 34 | VisitorNpcLabel | string32 | VisitorNpcLabel string32 | candidate_name |

## 历史残余语义证据

- hash_A802423D: ConcertFurniturePlacementFlag (row_hypothesis) — Only four K.K. concert furniture placements nonzero.
