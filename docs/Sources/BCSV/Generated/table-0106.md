# KappeiTourInfoParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/KappeiTourInfoParam.bcsv`
SHA256：`0e87858acd80f2a4ffd4cedb8970a2bb78c7d6ad10e5fc4d52f589f2f836fbd5`
状态：parsed

行数 11，行长 56，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_303FD59E | KappeiTourCategory | 航平 旅行 分类 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_A03A592F | KappeiTourIslandKind | 航平 旅行 岛屿 类别 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_C84432B7 | 未知 | 航平旅行引用 ID（语义别名：KappeiTourReferenceId） | 12 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Values 296/297/298; referenced table unverified. |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6B3738E0 | WeatherPattern | 天气 款式 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D8F76B76 | DayNorth | 日 北 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_224C7F34 | DaySouth | 日 南 | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4556B457 | ItemPlacementKind | 道具 摆放 类别 | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_026C5579 | MonthNorth | 北半球月份 | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F8D7413B | MonthSouth | 南半球月份 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_88BD09C2 | PlayerFlagKeyAfterSelect | 玩家 标志 键 After 选择 | 23 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D89A0DB0 | SelectWeight | 选择 Weight | 55 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
