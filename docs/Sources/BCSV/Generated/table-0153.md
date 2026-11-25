# RadioJingle.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/RadioJingle.bcsv`
SHA256：`8dcc123142a68a92b90d4958f1050499dd32d09d08a941114e531d0545b35f48`
状态：parsed

行数 24，行长 148，数据起点 84。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_293EE089 | SelectRate | 选择 比率 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FC7A1955 | Timezone | 时区 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_45FFEA9A | Frames | 帧 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0F30A50E | MusicNo | 音乐 无 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_00244CE4 | BeforeDays | 提前天数 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_806CFD72 | EventLabelShort | 事件 标签 短 | 19 | 129 | string128 | 未知，保留原值 | 未登记表级业务证据 |
