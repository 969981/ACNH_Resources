# MessageCardSelectDesignSp.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardSelectDesignSp.bcsv`
SHA256：`be6b3e39189c2b70f596c5d5a49997e48914c94395f7d847d8b666e4b1f03996`
状态：parsed

行数 80，行长 32，数据起点 132。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_37571146 | TextKey | 文本 键 | 4 | 4 | stringMurmurHash | 未知，保留原值 | 未登记表级业务证据 |
| hash_E486805C | DesignAlways1 | 设计 始终 1 | 8 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A326FA8C | DesignAlways2 | 设计 始终 2 | 10 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9E46D33C | DesignAlways3 | 设计 始终 3 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C660F2C | DesignAlways4 | 设计 始终 4 | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D29880F2 | DesignAutumn1 | 设计 秋季 1 | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9538FA22 | DesignAutumn2 | 设计 秋季 2 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8CC22007 | DesignSpring1 | 设计 春季 1 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CB625AD7 | DesignSpring2 | 设计 春季 2 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CCC4AFCB | DesignSummer1 | 设计 夏季 1 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8B64D51B | DesignSummer2 | 设计 夏季 2 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BF6ABEA | DesignWinter1 | 设计 冬季 1 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5C56D13A | DesignWinter2 | 设计 冬季 2 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 特殊明信片选择设计

**用途：** 按文件名与字段名称候选推测：用于配置或描述特殊明信片选择设计相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MessageCardSelectDesignSp.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MessageCardSelectDesignSp.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MessageCardSelectDesignSp.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MessageCardSelectDesignSp.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 40（0 基） | 行 79（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_37571146` 文本 键 | 4 | 0xAC85E3DB / hex:dbe385ac | 0x249859D1 / hex:d1599824 | 0x6B255DEC / hex:ec5d256b |
| `hash_E486805C` 设计 始终 1 | 8 | 0 / hex:0000 | 367 / hex:6f01 | 449 / hex:c101 |
| `hash_A326FA8C` 设计 始终 2 | 10 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_9E46D33C` 设计 始终 3 | 12 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_2C660F2C` 设计 始终 4 | 14 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_D29880F2` 设计 秋季 1 | 16 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_9538FA22` 设计 秋季 2 | 18 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_8CC22007` 设计 春季 1 | 20 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_CB625AD7` 设计 春季 2 | 22 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_CCC4AFCB` 设计 夏季 1 | 24 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_8B64D51B` 设计 夏季 2 | 26 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_1BF6ABEA` 设计 冬季 1 | 28 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |
| `hash_5C56D13A` 设计 冬季 2 | 30 | 65535 / hex:ffff | 65535 / hex:ffff | 65535 / hex:ffff |

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
