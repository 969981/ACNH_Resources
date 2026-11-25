# MessageCardDesignParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardDesignParam.bcsv`
SHA256：`e7ece24b827fe14b8481130bc7f70bcca7cfa43f43a9eb70e4d1e8953272ad7c`
状态：parsed

行数 76，行长 108，数据起点 196。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A2FE7F71 | BackColor | 背面 颜色 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_41AFE839 | BodyColor | 主体 颜色 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_63A46970 | 未知 | 留言卡可选颜色或样式（语义别名：MessageCardOptionalColorOrStyle） | 8 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：All 76 values 0xFFFE; between color fields. |
| hash_57C98E5B | FootColor | 脚 颜色 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_32C0C064 | HeadColor | 头 颜色 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_990406A9 | PenColor1 | 笔 颜色 1 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DEA47C79 | PenColor2 | 笔 颜色 2 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3C455C9 | PenColor3 | 笔 颜色 3 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_51E489D9 | PenColor4 | 笔 颜色 4 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_94D6CB5D | RuleColor | 规则 颜色 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_953983B4 | SelectableBeginDate1 | 可选择 开始 日期 1 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D299F964 | SelectableBeginDate2 | 可选择 开始 日期 2 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ADA3644A | SelectableEndDate1 | 可选择 结束 日期 1 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EA031E9A | SelectableEndDate2 | 可选择 结束 日期 2 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5F384120 | TextLotId | 文本 抽选 ID | 32 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_84818E10 | 未知 | 留言卡可选属性（语义别名：MessageCardOptionalProperty） | 34 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：83 occurrences all 0xFFFF. |
| hash_54706054 | UniqueID | 唯一ID | 36 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_24DA7ADA | Kind | 类别 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 39 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_AA738FED | SelectableSeason | 可选择 季节 | 103 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_7A6965C5 | UnlockTrigger | 解锁 触发 | 104 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |
