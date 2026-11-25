# ItemClothGroup.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemClothGroup.bcsv`
SHA256：`44eca659f21c2fad312db1a4682f4a0e352d6d23993e29ab3faf9993f9776cf3`
状态：parsed

行数 1462，行长 220，数据起点 180。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_263C3CED | ItemNpcWherearenFtrActionType | 道具 NPC 度假岛 家具 动作 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E83C30BE | ItemShopSeasonality | 道具 商店 季节性 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_65503F9F | ParentItemName | 父级 道具 名称 | 12 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 14 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_52ADD71D | FashionThemeDaily | 时尚 主题 每日 | 16 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_47F8F099 | FashionThemeFairyland | 时尚 主题 仙境 | 17 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_44718A37 | FashionThemeFomal | 时尚 主题 正式 | 18 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_97EBA4FC | FashionThemeHorror | 时尚 主题 Horror | 19 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_811B386C | FashionThemeOutdoor | 时尚 主题 室外 | 20 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_93DDC6D7 | FashionThemeParty | 时尚 主题 Party | 21 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0CD7F9C5 | FashionThemeRelax | 时尚 主题 放松 | 22 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1E996A76 | FashionThemeSport | 时尚 主题 运动 | 23 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9079071D | FashionThemeStage | 时尚 主题 阶段 | 24 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BAA1115F | FashionThemeVacation | 时尚 主题 Vacation | 25 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_8048A3A7 | FashionThemeWork | 时尚 主题 工作 | 26 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_83CCBE0F | ItemNpcPriorityTopsModel | 道具 NPC 优先级 上装 模型 | 27 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_13AB5198 | Label | 标签 | 91 | 64 | string64 | label | 表级解析字典（TYPED） |
| hash_036E8EBE | Name | 名称 | 155 | 64 | string64 | description_ja | 表级解析字典（TYPED） |
| hash_8D7F40E5 | UseColorGroupSort | 使用 颜色 分组 排序 | 219 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 服装分组

**用途：** 服装分组定义。

**证据等级：** 已有专题文档（[专题证据](../ItemClothGroup.md)）

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/ItemClothGroup.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/ItemClothGroup.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/ItemClothGroup.csv) · [结构 JSON](../../../../research/bcsv-data/schema/ItemClothGroup.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 731（0 基） | 行 1461（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_263C3CED` 道具 NPC 度假岛 家具 动作 类型 | 4 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_E83C30BE` 道具 商店 季节性 | 8 | 0x6610F7CB / hex:cbf71066 | 0x6610F7CB / hex:cbf71066 | 0x6610F7CB / hex:cbf71066 |
| `hash_65503F9F` 父级 道具 名称 | 12 | 65534 / hex:feff | 5472 / hex:6015 | 2403 / hex:6309 |
| `hash_54706054` 唯一ID | 14 | 0 / hex:0000 | 763 / hex:fb02 | 17 / hex:1100 |
| `hash_52ADD71D` 时尚 主题 每日 | 16 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_47F8F099` 时尚 主题 仙境 | 17 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_44718A37` 时尚 主题 正式 | 18 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_97EBA4FC` 时尚 主题 Horror | 19 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_811B386C` 时尚 主题 室外 | 20 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |
| `hash_93DDC6D7` 时尚 主题 Party | 21 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_0CD7F9C5` 时尚 主题 放松 | 22 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_1E996A76` 时尚 主题 运动 | 23 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_9079071D` 时尚 主题 阶段 | 24 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_BAA1115F` 时尚 主题 Vacation | 25 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_8048A3A7` 时尚 主题 工作 | 26 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_83CCBE0F` 道具 NPC 优先级 上装 模型 | 27 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "" / hex:00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_13AB5198` 标签 | 91 | "None" / hex:4e6f6e65000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "ShoesKneeKnightIron" / hex:53686f65734b6e65654b6e6967687449726f6e000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "BottomsTexPantsNormalDenimNonwa" / hex:426f74746f6d7354657850616e74734e6f726d616c44656e696d4e6f6e7761000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_036E8EBE` 名称 | 155 | "-" / hex:2d000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "アイアンアーマーシューズ" / hex:e382a2e382a4e382a2e383b3e382a2e383bce3839ee383bce382b7e383a5e383bce382ba00000000000000000000000000000000000000000000000000000000 | "デニムパンツ" / hex:e38387e3838be383a0e38391e383b3e3838400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_8D7F40E5` 使用 颜色 分组 排序 | 219 | 0 / hex:00 | 0 / hex:00 | 1 / hex:01 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 道具 NPC 度假岛 家具 动作 类型（hash_263C3CED）

去重码值 26 个，已有标签候选 26 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 1160 | None | None | crc_candidate |
| 0x7012B907 | 58 | HappyWait | Happy 等待 | crc_candidate |
| 0xBC71576D | 49 | mEatIconOffsetZ.bool | m Eat 图标 偏移 Z . bool | crc_candidate |
| 0x6DB7F86E | 42 | Drink_JuiceGrass | 饮料 Juice Grass | crc_candidate |
| 0x0AD61A95 | 28 | Gymnastics | Gymnastics | crc_candidate |
| 0x6BD70C0F | 15 | Book | 书 | crc_candidate |
| 0xA0753A03 | 13 | SmugFace | Smug 脸 | crc_candidate |
| 0xC1402D58 | 12 | FesDance | Fes Dance | crc_candidate |
| 0xB7CA72B3 | 11 | Broom | Broom | crc_candidate |
| 0x570C0F2F | 8 | Prank | Prank | crc_candidate |
| 0x5DBA3ED9 | 7 | Fan | Fan | crc_candidate |
| 0x2318FF22 | 6 | Sleepy | Sleepy | crc_candidate |

### 道具 商店 季节性（hash_E83C30BE）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x6610F7CB | 1231 | AllYear | All Year | crc_candidate |
| 0x25284C1A | 124 | Summer | 夏季 | crc_candidate |
| 0x1AEB439E | 107 | Winter | 冬季 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| 出向 | hash_263C3CED | hash_87BF00E8 | [ItemNpcWherearenFtrActionParam.bcsv](table-0085.md) | 1462/1462 | 26/26 |
| 入向 | hash_690E3379 | hash_13AB5198 | [ItemParam.bcsv](table-0089.md) | 11178/11178 | 1462/1462 |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
