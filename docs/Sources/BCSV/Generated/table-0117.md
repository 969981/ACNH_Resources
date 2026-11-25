# MessageCardSelectDesign.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/MessageCardSelectDesign.bcsv`
SHA256：`ff19a0fadfd9835cdf9fca59096a48834c1c6bc59f8b87c38432d479a39bff1c`
状态：parsed

行数 202，行长 32，数据起点 132。

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

**中文表名：** 明信片选择设计

**用途：** 按文件名与字段名称候选推测：用于配置或描述明信片选择设计相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/MessageCardSelectDesign.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/MessageCardSelectDesign.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/MessageCardSelectDesign.csv) · [结构 JSON](../../../../research/bcsv-data/schema/MessageCardSelectDesign.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 101（0 基） | 行 201（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_37571146` 文本 键 | 4 | 0xA1FA915A / hex:5a91faa1 | 0x45136422 / hex:22641345 | 0x0A668725 / hex:2587660a |
| `hash_E486805C` 设计 始终 1 | 8 | 380 / hex:7c01 | 397 / hex:8d01 | 378 / hex:7a01 |
| `hash_A326FA8C` 设计 始终 2 | 10 | 65535 / hex:ffff | 410 / hex:9a01 | 394 / hex:8a01 |
| `hash_9E46D33C` 设计 始终 3 | 12 | 65535 / hex:ffff | 65535 / hex:ffff | 384 / hex:8001 |
| `hash_2C660F2C` 设计 始终 4 | 14 | 65535 / hex:ffff | 65535 / hex:ffff | 404 / hex:9401 |
| `hash_D29880F2` 设计 秋季 1 | 16 | 65535 / hex:ffff | 65535 / hex:ffff | 386 / hex:8201 |
| `hash_9538FA22` 设计 秋季 2 | 18 | 65535 / hex:ffff | 65535 / hex:ffff | 433 / hex:b101 |
| `hash_8CC22007` 设计 春季 1 | 20 | 65535 / hex:ffff | 65535 / hex:ffff | 379 / hex:7b01 |
| `hash_CB625AD7` 设计 春季 2 | 22 | 65535 / hex:ffff | 65535 / hex:ffff | 406 / hex:9601 |
| `hash_CCC4AFCB` 设计 夏季 1 | 24 | 65535 / hex:ffff | 65535 / hex:ffff | 409 / hex:9901 |
| `hash_8B64D51B` 设计 夏季 2 | 26 | 65535 / hex:ffff | 65535 / hex:ffff | 432 / hex:b001 |
| `hash_1BF6ABEA` 设计 冬季 1 | 28 | 65535 / hex:ffff | 65535 / hex:ffff | 367 / hex:6f01 |
| `hash_5C56D13A` 设计 冬季 2 | 30 | 65535 / hex:ffff | 65535 / hex:ffff | 414 / hex:9e01 |

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
