# FieldLandMakingActionParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FieldLandMakingActionParam.bcsv`
SHA256：`7129b8851594798613e37ec0848da93f49ba3477c025b4276097aa590ef863aa`
状态：parsed

行数 17，行长 40，数据起点 124。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_59485FAD | ActionRange | 动作 范围 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_75FEE4B0 | ChangeHistoryType | 变更 History 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_0BCF172F | MeshEdgeDirType | 网格 边缘 方向 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_281F90A8 | FallActionType | 秋季 动作 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_EF79DE0F | Layer | 层 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E421A842 | PlaneChangeType | Plane 变更 类型 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_7674C4D6 | RoadRemoveType | Road 移除 类型 | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4932F93E | SuccessResult | 成功 结果 | 32 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_7C8E7F81 | ActionLockRange | 动作 锁定 范围 | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9A37BDC | FallToRiver | 秋季 至 River | 37 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_31450AA2 | MainType | 主要 类型 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_926D7DD8 | UpdateParts | 更新 部件 | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 岛屿创作动作参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述岛屿创作动作参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FieldLandMakingActionParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FieldLandMakingActionParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FieldLandMakingActionParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FieldLandMakingActionParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 8（0 基） | 行 16（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_59485FAD` 动作 范围 | 4 | 0x6CD0A571 / hex:71a5d06c | 0x815A1033 / hex:33105a81 | 0x815A1033 / hex:33105a81 |
| `hash_75FEE4B0` 变更 History 类型 | 8 | 0xD2F2690F / hex:0f69f2d2 | 0x0326D94B / hex:4bd92603 | 0xD2F2690F / hex:0f69f2d2 |
| `hash_0BCF172F` 网格 边缘 方向 类型 | 12 | 0xB9EED60E / hex:0ed6eeb9 | 0xB9EED60E / hex:0ed6eeb9 | 0x75713D58 / hex:583d7175 |
| `hash_281F90A8` 秋季 动作 类型 | 16 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_EF79DE0F` 层 | 20 | 0x41F93E1C / hex:1c3ef941 | 0x41F93E1C / hex:1c3ef941 | 0x36FE0E8A / hex:8a0efe36 |
| `hash_E421A842` Plane 变更 类型 | 24 | 0xD2F2690F / hex:0f69f2d2 | 0x55F6A679 / hex:79a6f655 | 0xD2F2690F / hex:0f69f2d2 |
| `hash_7674C4D6` Road 移除 类型 | 28 | 0xDFA2AFF1 / hex:f1afa2df | 0x6CD0A571 / hex:71a5d06c | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_4932F93E` 成功 结果 | 32 | 0xBAFED950 / hex:50d9feba | 0xCDBD7FDE / hex:de7fbdcd | 0xCDBD7FDE / hex:de7fbdcd |
| `hash_7C8E7F81` 动作 锁定 范围 | 36 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_F9A37BDC` 秋季 至 River | 37 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_31450AA2` 主要 类型 | 38 | 5 / hex:05 | 0 / hex:00 | 0 / hex:00 |
| `hash_926D7DD8` 更新 部件 | 39 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 动作 范围（hash_59485FAD）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x815A1033 | 16 | 3x3 | 3 x 3 | crc_candidate |
| 0x6CD0A571 | 1 | 1x1 | 1 x 1 | crc_candidate |

### 变更 History 类型（hash_75FEE4B0）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD2F2690F | 14 | NoChange | 无 变更 | crc_candidate |
| 0x0326D94B | 2 | RemoveHistory | 移除 History | crc_candidate |
| 0x0F8A4870 | 1 | AddCliffLevel | 增加 Cliff 等级 | crc_candidate |

### 网格 边缘 方向 类型（hash_0BCF172F）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xB9EED60E | 14 | RightToSlant | 右 至 Slant | crc_candidate |
| 0x75713D58 | 3 | SlantToRight | Slant 至 右 | crc_candidate |

### 秋季 动作 类型（hash_281F90A8）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 15 | None | None | crc_candidate |
| 0x76FAFF0D | 1 | BreakFall | Break 秋季 | crc_candidate |
| 0xB3BCE78E | 1 | MakeFall | Make 秋季 | crc_candidate |

### 层（hash_EF79DE0F）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x41F93E1C | 12 | No0 | 无 0 | crc_candidate |
| 0x36FE0E8A | 5 | No1 | 无 1 | crc_candidate |

### Plane 变更 类型（hash_E421A842）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD2F2690F | 14 | NoChange | 无 变更 | crc_candidate |
| 0x55F6A679 | 3 | CliffAll | Cliff All | crc_candidate |

### Road 移除 类型（hash_7674C4D6）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x6CD0A571 | 10 | 1x1 | 1 x 1 | crc_candidate |
| 0xDFA2AFF1 | 7 | None | None | crc_candidate |

### 成功 结果（hash_4932F93E）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xCDBD7FDE | 9 | Break | Break | crc_candidate |
| 0xBAFED950 | 8 | Make | Make | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
