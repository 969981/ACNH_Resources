# EventPlazaObjModelParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventPlazaObjModelParam.bcsv`
SHA256：`ebbeb6177cd9f8d63f774be508c074a78daca53f1885926005603045f7a9482a`
状态：parsed

行数 27，行长 116，数据起点 108。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_158A4C61 | DemoDistance | 演出 距离 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A9C1118B | EventObjModuleType | 事件 对象 Module 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_83B54E59 | RoofMaterial | 屋顶 材质 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_30D3F8F7 | FlowEntryName | 流程 入口 名称 | 16 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_364C173E | FlowFileName | 流程 文件 名称 | 48 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B418FB3B | NearCulling | Near 剔除 | 80 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DF881359 | ResourceName | 资源 名称 | 81 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E2760D00 | 未知 | 节庆装饰标志（语义别名：FestivalDecorationFlag） | 113 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Nine of 27 rows nonzero. |
| hash_A5010BE8 | UseCollision | 使用 碰撞 | 114 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 活动广场对象模型

**用途：** 按文件名与字段名称候选推测：用于配置或描述活动广场对象模型相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/EventPlazaObjModelParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/EventPlazaObjModelParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/EventPlazaObjModelParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/EventPlazaObjModelParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 13（0 基） | 行 26（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_158A4C61` 演出 距离 | 4 | 0.0 / hex:00000000 | 15.0 / hex:00007041 | 15.0 / hex:00007041 |
| `hash_A9C1118B` 事件 对象 Module 类型 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0x4DB547FC / hex:fc47b54d | 0xB1DFCE57 / hex:57cedfb1 |
| `hash_83B54E59` 屋顶 材质 | 12 | 0 / hex:0000 | 5 / hex:0500 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 18 / hex:1200 | 31 / hex:1f00 |
| `hash_30D3F8F7` 流程 入口 名称 | 16 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_364C173E` 流程 文件 名称 | 48 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_B418FB3B` Near 剔除 | 80 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_DF881359` 资源 名称 | 81 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "EvtobjTsunekichiStall" / hex:4576746f626a5473756e656b696368695374616c6c0000000000000000000000 | "EvtobjRadioPositionOver8" / hex:4576746f626a526164696f506f736974696f6e4f766572380000000000000000 |
| `hash_E2760D00` 节庆装饰标志（语义别名：FestivalDecorationFlag） | 113 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_A5010BE8` 使用 碰撞 | 114 | 0 / hex:0000 | 1 / hex:0100 | 0 / hex:0000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 事件 对象 Module 类型（hash_A9C1118B）

去重码值 14 个，已有标签候选 0 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x8139FBC0 | 7 | 未知 | 未知 | unmapped |
| 0xDFA2AFF1 | 5 | 未知 | 未知 | unmapped |
| 0x7155E707 | 2 | 未知 | 未知 | unmapped |
| 0xB1DFCE57 | 2 | 未知 | 未知 | unmapped |
| 0xB2D2BB44 | 2 | 未知 | 未知 | unmapped |
| 0x166F3CE4 | 1 | 未知 | 未知 | unmapped |
| 0x4DB547FC | 1 | 未知 | 未知 | unmapped |
| 0x67F7C8E9 | 1 | 未知 | 未知 | unmapped |
| 0xB685245C | 1 | 未知 | 未知 | unmapped |
| 0xC8C9DBD0 | 1 | 未知 | 未知 | unmapped |
| 0xC8CB0291 | 1 | 未知 | 未知 | unmapped |
| 0xCA82B2D2 | 1 | 未知 | 未知 | unmapped |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
