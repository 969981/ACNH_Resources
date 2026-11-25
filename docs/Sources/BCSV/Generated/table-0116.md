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

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 明信片设计

**用途：** 按文件名与字段名称候选推测：用于配置或描述明信片设计相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MessageCardDesignParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MessageCardDesignParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MessageCardDesignParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MessageCardDesignParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 38（0 基） | 行 75（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A2FE7F71` 背面 颜色 | 4 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_41AFE839` 主体 颜色 | 6 | 113 / hex:7100 | 59 / hex:3b00 | 369 / hex:7101 |
| `hash_63A46970` 留言卡可选颜色或样式（语义别名：MessageCardOptionalColorOrStyle） | 8 | raw:feff / hex:feff | raw:feff / hex:feff | raw:feff / hex:feff |
| `hash_57C98E5B` 脚 颜色 | 10 | 113 / hex:7100 | 60 / hex:3c00 | 378 / hex:7a01 |
| `hash_32C0C064` 头 颜色 | 12 | 113 / hex:7100 | 60 / hex:3c00 | 377 / hex:7901 |
| `hash_990406A9` 笔 颜色 1 | 14 | 113 / hex:7100 | 59 / hex:3b00 | 1 / hex:0100 |
| `hash_DEA47C79` 笔 颜色 2 | 16 | 114 / hex:7200 | 60 / hex:3c00 | 2 / hex:0200 |
| `hash_E3C455C9` 笔 颜色 3 | 18 | 115 / hex:7300 | 61 / hex:3d00 | 3 / hex:0300 |
| `hash_51E489D9` 笔 颜色 4 | 20 | 116 / hex:7400 | 62 / hex:3e00 | 4 / hex:0400 |
| `hash_94D6CB5D` 规则 颜色 | 22 | 1 / hex:0100 | 1 / hex:0100 | 1 / hex:0100 |
| `hash_953983B4` 可选择 开始 日期 1 | 24 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_D299F964` 可选择 开始 日期 2 | 26 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_ADA3644A` 可选择 结束 日期 1 | 28 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_EA031E9A` 可选择 结束 日期 2 | 30 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_5F384120` 文本 抽选 ID | 32 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_84818E10` 留言卡可选属性（语义别名：MessageCardOptionalProperty） | 34 | raw:ffff / hex:ffff | raw:ffff / hex:ffff | raw:ffff / hex:ffff |
| `hash_54706054` 唯一ID | 36 | 387 / hex:8301 | 386 / hex:8201 | 438 / hex:b601 |
| `hash_24DA7ADA` 类别 | 38 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_4B9C4229` 资源 名称 | 39 | "MsgAcademy00" / hex:4d736741636164656d79303000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "MsgFall02" / hex:4d736746616c6c303200000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "MsgWherearen03" / hex:4d736757686572656172656e30330000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_AA738FED` 可选择 季节 | 103 | 0 / hex:00 | 3 / hex:03 | 0 / hex:00 |
| `hash_7A6965C5` 解锁 触发 | 104 | 1 / hex:01000000 | 0 / hex:00000000 | 3 / hex:03000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

本表无可按此规则识别的 CRC 枚举字段；不代表不存在数值枚举或位域。

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
