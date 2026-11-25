# EventPlazaFtrParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/EventPlazaFtrParam.bcsv`
SHA256：`3854d5a7501cedacc65a512cd649b7750e65d145b0ec2362d65096c32a5cac3f`
状态：parsed

行数 35，行长 20，数据起点 68。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_C150FBA5 | EventFtrDirection | 事件 家具 方向 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_24726310 | EventFtrSwitch | 事件 家具 切换 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_C33A894E | ItemNameUniqueID | 道具名称唯一ID | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_CB7385A8 | EnableChangeSwitchPlayer | 启用 变更 切换 玩家 | 16 | 4 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 活动广场家具参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述活动广场家具参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/EventPlazaFtrParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/EventPlazaFtrParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/EventPlazaFtrParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/EventPlazaFtrParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 17（0 基） | 行 34（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_C150FBA5` 事件 家具 方向 | 4 | 0x2060EFC3 / hex:c3ef6020 | 0x2060EFC3 / hex:c3ef6020 | 0x2060EFC3 / hex:c3ef6020 |
| `hash_24726310` 事件 家具 切换 | 8 | 0xBD1B1FC9 / hex:c91f1bbd | 0xA75C2DA2 / hex:a22d5ca7 | 0xA75C2DA2 / hex:a22d5ca7 |
| `hash_C33A894E` 道具名称唯一ID | 12 | 65534 / hex:feff | 1429 / hex:9505 | 14827 / hex:eb39 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 24 / hex:1800 | 47 / hex:2f00 |
| `hash_CB7385A8` 启用 变更 切换 玩家 | 16 | 0 / hex:00000000 | 0 / hex:00000000 | 0 / hex:00000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 事件 家具 方向（hash_C150FBA5）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2060EFC3 | 26 | S | S | crc_candidate |
| 0xD4B45A92 | 4 | E | E | crc_candidate |
| 0x270D2BDA | 3 | W | W | crc_candidate |
| 0x4366831A | 2 | N | N | crc_candidate |

### 事件 家具 切换（hash_24726310）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xBD1B1FC9 | 32 | OFF | 关闭 | crc_candidate |
| 0xA75C2DA2 | 3 | ON | 开启 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
