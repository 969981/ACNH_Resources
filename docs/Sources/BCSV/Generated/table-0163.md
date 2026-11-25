# RoomWindowParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RoomWindowParam.bcsv`
SHA256：`ef317b41a1fb03df4ab46b63711394b33a0109ae74520fdbaf9871259321be03`
状态：parsed

行数 24，行长 144，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_C90AB4C4 | RoomWindowModelType | 房间 窗户 模型 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CBC01F0D | RoomWindowWallType | 房间 窗户 墙壁 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 14 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B0B7CE4 | WindowName | 窗户 名称 | 78 | 66 | string64 | 未知，保留原值 | 未登记表级业务证据 |
