# ItemSize.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemSize.bcsv`
SHA256：`d87b7738477fd71e83a74d52c4081f1fd4683be533e20108bbabb7367140baee`
状态：parsed

行数 28，行长 80，数据起点 92。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_801351E6 | ResSizeLimit | 资源 尺寸 限制 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_09B64264 | MemoryUnitNum | 回忆 单位 数量 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3CF05708 | PolygonLimit | 多边形 限制 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 12 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_16B8F524 | HalfUnitSizeX | X 方向半格尺寸 | 14 | 1 | u8 | width_half_tiles | 表级解析字典（TYPED） |
| hash_BCB13DAF | HalfUnitSizeZ | Z 方向半格尺寸 | 15 | 1 | u8 | height_half_tiles | 表级解析字典（TYPED） |
| hash_87BF00E8 | Label | 标签 | 16 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_977ADFCE | Name | 名称 | 48 | 32 | string32 | description_ja | 表级解析字典（TYPED） |
