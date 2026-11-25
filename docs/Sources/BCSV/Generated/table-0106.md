# KappeiTourInfoParam.bcsv

返回 [全量索引](README.md) · [字段名称字典](../Field-Names.md)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/KappeiTourInfoParam.bcsv`
SHA256：`0e87858acd80f2a4ffd4cedb8970a2bb78c7d6ad10e5fc4d52f589f2f836fbd5`
记录数 11，行长 56，字段数 12。回填 11 个字段。

[原始 Hash CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/raw/KappeiTourInfoParam.csv) · [名称回填 CSV](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/KappeiTourInfoParam.csv) · [字段映射 JSON](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/schema/KappeiTourInfoParam.json)

候选名称及类型仅为签名匹配；CSV 单元格仍为未经业务加工的原始解析值。

| Hash | 偏移 | 跨度 | 回填列名 | 类型候选 | 签名候选 | 证据状态 |
| --- | ---: | ---: | --- | --- | --- | --- |
| hash_303FD59E | 4 | 4 | KappeiTourCategory | hshCstringRef | KappeiTourCategory.hshCstringRef | candidate_name |
| hash_A03A592F | 8 | 4 | KappeiTourIslandKind | hshCstringRef | KappeiTourIslandKind.hshCstringRef | candidate_name |
| hash_C84432B7 | 12 | 2 | hash_C84432B7 | — | — | unresolved |
| hash_54706054 | 14 | 2 | UniqueID | u16 | UniqueID u16 | candidate_name |
| hash_6B3738E0 | 16 | 2 | WeatherPattern | u16 | WeatherPattern u16 | candidate_name |
| hash_D8F76B76 | 18 | 1 | DayNorth | u8 | DayNorth u8 | candidate_name |
| hash_224C7F34 | 19 | 1 | DaySouth | u8 | DaySouth u8 | candidate_name |
| hash_4556B457 | 20 | 1 | ItemPlacementKind | u8 | ItemPlacementKind u8 | candidate_name |
| hash_026C5579 | 21 | 1 | MonthNorth | u8 | MonthNorth u8 | candidate_name |
| hash_F8D7413B | 22 | 1 | MonthSouth | u8 | MonthSouth u8 | candidate_name |
| hash_88BD09C2 | 23 | 32 | PlayerFlagKeyAfterSelect | string32 | PlayerFlagKeyAfterSelect string32 | candidate_name |
| hash_D89A0DB0 | 55 | 1 | SelectWeight | u8 | SelectWeight u8 | candidate_name |

## 历史残余语义证据

- hash_C84432B7: KappeiTourReferenceId (row_hypothesis) — Values 296/297/298; referenced table unverified.
