# MessageCardBoardDesignParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardBoardDesignParam.bcsv`
SHA256：`f1f72e766010ea6661c0e515d7e81160042de7b724fa8cb10bbfb7b922631613`
状态：parsed

行数 7，行长 92，数据起点 132。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_A2FE7F71 | BackColor | 背面 颜色 | 4 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_41AFE839 | BodyColor | 主体 颜色 | 6 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_57C98E5B | FootColor | 脚 颜色 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_32C0C064 | HeadColor | 头 颜色 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_990406A9 | PenColor1 | 笔 颜色 1 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DEA47C79 | PenColor2 | 笔 颜色 2 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E3C455C9 | PenColor3 | 笔 颜色 3 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_51E489D9 | PenColor4 | 笔 颜色 4 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_94D6CB5D | RuleColor | 规则 颜色 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5F384120 | TextLotId | 文本 抽选 ID | 22 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_84818E10 | 未知 | 留言卡可选属性（语义别名：MessageCardOptionalProperty） | 24 | 2 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：83 occurrences all 0xFFFF. |
| hash_54706054 | UniqueID | 唯一ID | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4B9C4229 | ResourceName | 资源 名称 | 28 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 明信片展示板设计

**用途：** 按文件名与字段名称候选推测：用于配置或描述明信片展示板设计相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MessageCardBoardDesignParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MessageCardBoardDesignParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MessageCardBoardDesignParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MessageCardBoardDesignParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 3（0 基） | 行 6（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_A2FE7F71` 背面 颜色 | 4 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_41AFE839` 主体 颜色 | 6 | 138 / hex:8a00 | 145 / hex:9100 | 363 / hex:6b01 |
| `hash_57C98E5B` 脚 颜色 | 8 | 139 / hex:8b00 | 146 / hex:9200 | 365 / hex:6d01 |
| `hash_32C0C064` 头 颜色 | 10 | 139 / hex:8b00 | 146 / hex:9200 | 364 / hex:6c01 |
| `hash_990406A9` 笔 颜色 1 | 12 | 138 / hex:8a00 | 145 / hex:9100 | 363 / hex:6b01 |
| `hash_DEA47C79` 笔 颜色 2 | 14 | 360 / hex:6801 | 145 / hex:9100 | 363 / hex:6b01 |
| `hash_E3C455C9` 笔 颜色 3 | 16 | 169 / hex:a900 | 145 / hex:9100 | 363 / hex:6b01 |
| `hash_51E489D9` 笔 颜色 4 | 18 | 170 / hex:aa00 | 145 / hex:9100 | 363 / hex:6b01 |
| `hash_94D6CB5D` 规则 颜色 | 20 | 1 / hex:0100 | 1 / hex:0100 | 1 / hex:0100 |
| `hash_5F384120` 文本 抽选 ID | 22 | -1 / hex:ffff | -1 / hex:ffff | -1 / hex:ffff |
| `hash_84818E10` 留言卡可选属性（语义别名：MessageCardOptionalProperty） | 24 | raw:ffff / hex:ffff | raw:ffff / hex:ffff | raw:ffff / hex:ffff |
| `hash_54706054` 唯一ID | 26 | 0 / hex:0000 | 3 / hex:0300 | 6 / hex:0600 |
| `hash_4B9C4229` 资源 名称 | 28 | "BoardCardNormal00" / hex:426f617264436172644e6f726d616c30300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "BoardCardInsect00" / hex:426f61726443617264496e7365637430300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "BoardCardHalloween00" / hex:426f6172644361726448616c6c6f7765656e30300000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

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
