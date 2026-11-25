# ShopItemRouteFlags.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ShopItemRouteFlags.bcsv`
SHA256：`303d46955ec67f97b4391fa1447d58bac953f5fcf57001940336ae8d64b21f05`
状态：parsed

行数 41，行长 52，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_3FE43170 | FlagLand | 标志 土地 | 4 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4171A41D | FlagPlayer | 标志 玩家 | 8 | 4 | s32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D3D4284E | ShopType | 商店 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_74B2EB78 | AttrCollectBit | 属性 收集 位 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_46E66708 | ItemFrom | 道具 来自 | 17 | 35 | string32 | 未知，保留原值 | 未登记表级业务证据 |
