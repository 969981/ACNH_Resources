# StructureHouseDoorParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/StructureHouseDoorParam.bcsv`
SHA256：`e14855b69fb4c7c13fa7338abf0a8012a80887f1b28e6fcb0815516520fcedeb`
状态：parsed

行数 253，行长 60，数据起点 116。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_B619BA5C | DoorDecoZOffset | 门 装饰 Z 偏移 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_712C43A7 | HouseDoorAnim | 房屋 门 动画 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0AA76EDD | HouseDoorShape | 房屋 门 形状 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_37D4E515 | CustomizeSortID | 自定义 排序 ID | 16 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39CB9646 | Material | 材质 | 18 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C93DB65A | DecoForbidden | 装饰 Forbidden | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F75DDF51 | Dummy | 占位 | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F489F3C5 | HasDoorWindow | 具有 门 窗户 | 24 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_960A51FE | LatchBolt | 门闩 | 25 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 26 | 34 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 房屋门参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述房屋门参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/StructureHouseDoorParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/StructureHouseDoorParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/StructureHouseDoorParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/StructureHouseDoorParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 126（0 基） | 行 252（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_B619BA5C` 门 装饰 Z 偏移 | 4 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_712C43A7` 房屋 门 动画 | 8 | 0x8574D755 / hex:55d77485 | 0x6EC19116 / hex:1691c16e | 0x6EC19116 / hex:1691c16e |
| `hash_0AA76EDD` 房屋 门 形状 | 12 | 0x042FC530 / hex:30c52f04 | 0xCA4F6D9F / hex:9f6d4fca | 0x042FC530 / hex:30c52f04 |
| `hash_37D4E515` 自定义 排序 ID | 16 | 302 / hex:2e01 | 807 / hex:2703 | 907 / hex:8b03 |
| `hash_39CB9646` 材质 | 18 | 2 / hex:0200 | 2 / hex:0200 | 2 / hex:0200 |
| `hash_54706054` 唯一ID | 20 | 0 / hex:0000 | 159 / hex:9f00 | 292 / hex:2401 |
| `hash_C93DB65A` 装饰 Forbidden | 22 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_F75DDF51` 占位 | 23 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_F489F3C5` 具有 门 窗户 | 24 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_960A51FE` 门闩 | 25 | 1 / hex:01 | 0 / hex:00 | 1 / hex:01 |
| `hash_39B5A93D` 模型 名称 | 26 | "HouseDoorStandardAR" / hex:486f757365446f6f725374616e646172644152000000000000000000000000000000 | "HouseDoorLatticeES" / hex:486f757365446f6f724c617474696365455300000000000000000000000000000000 | "HouseDoorIronGrillJR" / hex:486f757365446f6f7249726f6e4772696c6c4a520000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 房屋 门 动画（hash_712C43A7）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x6EC19116 | 150 | Knob | Knob | crc_candidate |
| 0x8574D755 | 96 | KnobRotate | Knob 旋转 | crc_candidate |
| 0xFA8DB334 | 5 | NpcTent | NPC Tent | crc_candidate |
| 0xF836E627 | 2 | PlayerTent | 玩家 Tent | crc_candidate |

### 房屋 门 形状（hash_0AA76EDD）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xCA4F6D9F | 130 | Square | Square | crc_candidate |
| 0x042FC530 | 123 | Round | Round | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
