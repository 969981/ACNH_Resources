# FgMainParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/FgMainParam.bcsv`
SHA256：`a3484de1d6432fb167988fd2f9a769b39c71d06553eca65e364ae12ec132702c`
状态：parsed

行数 540，行长 244，数据起点 228。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_0C315945 | CollisionHeight | 碰撞 高度 | 4 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_360B721A | InsectParam | 昆虫 参数 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B7AA0A0 | Kind | 类别 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_123EFCF1 | PicIconHeight | 图片 图标 高度 | 16 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6AC5A6DF | BuryItem | 埋藏 道具 | 20 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D59FF85E | BuryItem2 | 埋藏 道具 2 | 22 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E8FFD1EE | BuryItem3 | 埋藏 道具 3 | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_76E7FE08 | ChangeFg | 变更 Fg | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F4678F13 | DigItem | Dig 道具 | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6AB4B6FB | EffectAttribute | 效果 属性 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_6B7B63B2 | GardenEdit | Garden 编辑 | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C6A189E | GrowupFg | 成长 Fg | 34 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE17C845 | NutItem | Nut 道具 | 36 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B7A46956 | PicItem | 图片 道具 | 38 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BE6737AC | SortID | 排序 ID | 40 | 2 | s16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2E17A0A7 | SoundAttribute | 声音 属性 | 42 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 44 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_64B8FFF8 | ColorIndex | 颜色 索引 | 46 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3F45F2BF | DebugName | 调试 名称 | 47 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F5A73337 | Grow | 成长 | 111 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 112 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_39B5A93D | ModelName | 模型 名称 | 144 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_623DC307 | Nature | 自然 | 176 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A4B2D66D | OffsetAccWeed | 偏移 饰品 杂草 | 178 | 1 | s8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_48EF0398 | ResName | 资源 名称 | 179 | 65 | string64 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 地面物件主参数（Fg）

**用途：** 按文件名与字段名称候选推测：用于配置或描述地面物件主参数（Fg）相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/FgMainParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/FgMainParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/FgMainParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/FgMainParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 270（0 基） | 行 539（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_0C315945` 碰撞 高度 | 4 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 6.0 / hex:0000c040 |
| `hash_360B721A` 昆虫 参数 | 8 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xD8E12A2E / hex:2e2ae1d8 |
| `hash_9B7AA0A0` 类别 | 12 | 0x8C7669D7 / hex:d769768c | 0xE464A5D8 / hex:d8a564e4 | 0xD8E12A2E / hex:2e2ae1d8 |
| `hash_123EFCF1` 图片 图标 高度 | 16 | 0.0 / hex:00000000 | 0.0 / hex:00000000 | 0.0 / hex:00000000 |
| `hash_6AC5A6DF` 埋藏 道具 | 20 | 5152 / hex:2014 | 2880 / hex:400b | 65534 / hex:feff |
| `hash_D59FF85E` 埋藏 道具 2 | 22 | 2794 / hex:ea0a | 3835 / hex:fb0e | 65534 / hex:feff |
| `hash_E8FFD1EE` 埋藏 道具 3 | 24 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_76E7FE08` 变更 Fg | 26 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_F4678F13` Dig 道具 | 28 | 5152 / hex:2014 | 3835 / hex:fb0e | 65534 / hex:feff |
| `hash_6AB4B6FB` 效果 属性 | 30 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_6B7B63B2` Garden 编辑 | 32 | 60006 / hex:66ea | 65534 / hex:feff | 60178 / hex:12eb |
| `hash_2C6A189E` 成长 Fg | 34 | 60006 / hex:66ea | 60221 / hex:3deb | 65534 / hex:feff |
| `hash_BE17C845` Nut 道具 | 36 | 65534 / hex:feff | 65534 / hex:feff | 65534 / hex:feff |
| `hash_B7A46956` 图片 道具 | 38 | 65534 / hex:feff | 3835 / hex:fb0e | 65534 / hex:feff |
| `hash_BE6737AC` 排序 ID | 40 | 10 / hex:0a00 | 1100 / hex:4c04 | 6004 / hex:7417 |
| `hash_2E17A0A7` 声音 属性 | 42 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_54706054` 唯一ID | 44 | 60005 / hex:65ea | 60521 / hex:69ec | 60180 / hex:14eb |
| `hash_64B8FFF8` 颜色 索引 | 46 | -1 / hex:ff | 0 / hex:00 | -1 / hex:ff |
| `hash_3F45F2BF` 调试 名称 | 47 | "広葉樹（苗）" / hex:e5ba83e89189e6a8b9efbc88e88b97efbc8900000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "チューリップ白（芽）" / hex:e38381e383a5e383bce383aae38383e38397e799bdefbc88e88abdefbc8900000000000000000000000000000000000000000000000000000000000000000000 | "岩E" / hex:e5b2a945000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_F5A73337` 成长 | 111 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_87BF00E8` 标签 | 112 | "PltTreeOak0" / hex:506c74547265654f616b30000000000000000000000000000000000000000000 | "PltFlwTulip0White" / hex:506c74466c7754756c6970305768697465000000000000000000000000000000 | "StoneE" / hex:53746f6e65450000000000000000000000000000000000000000000000000000 |
| `hash_39B5A93D` 模型 名称 | 144 | "PltTreeOak0" / hex:506c74547265654f616b30000000000000000000000000000000000000000000 | "PltFlwTulipSeedling" / hex:506c74466c7754756c6970536565646c696e6700000000000000000000000000 | "stoneE" / hex:73746f6e65450000000000000000000000000000000000000000000000000000 |
| `hash_623DC307` 自然 | 176 | 129 / hex:8100 | raw:8101 / hex:8101 | 2 / hex:0200 |
| `hash_A4B2D66D` 偏移 饰品 杂草 | 178 | 6 / hex:06 | 0 / hex:00 | 0 / hex:00 |
| `hash_48EF0398` 资源 名称 | 179 | "PltTreeOak" / hex:506c74547265654f616b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "PltFlwTulip" / hex:506c74466c7754756c6970000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "StoneE" / hex:53746f6e65450000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 昆虫 参数（hash_360B721A）

去重码值 14 个，已有标签候选 14 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 423 | None | None | crc_candidate |
| 0x0518264E | 39 | Bush | 灌木 | crc_candidate |
| 0x22E34474 | 16 | RedPinkFlower | Red 粉色 Flower | crc_candidate |
| 0xAFC8F8B6 | 14 | BluePurpleBlackFlower | Blue Purple Black Flower | crc_candidate |
| 0xBBB5333B | 14 | YellowFlower | Yellow Flower | crc_candidate |
| 0x4FFD0BB8 | 8 | MatureTreeOak | Mature Tree Oak | crc_candidate |
| 0xFA172643 | 8 | WhitishFlower | Whitish Flower | crc_candidate |
| 0x59691654 | 5 | Vegetable | Vegetable | crc_candidate |
| 0xD8E12A2E | 5 | Stone | Stone | crc_candidate |
| 0x7934D7A7 | 3 | MatureTreeCedar | Mature Tree Cedar | crc_candidate |
| 0x351163C5 | 2 | TreeOakStump | Tree Oak Stump | crc_candidate |
| 0x63CFE5D3 | 1 | MatureTreePalm | Mature Tree Palm | crc_candidate |

### 类别（hash_9B7AA0A0）

去重码值 46 个，已有标签候选 46 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x2C28165C | 101 | Fence | Fence | crc_candidate |
| 0x95369815 | 30 | FlwRose | Flw Rose | crc_candidate |
| 0x019D651C | 25 | TreeFruit | Tree Fruit | crc_candidate |
| 0x988CBE5B | 24 | FlwHyacinth | Flw Hyacinth | crc_candidate |
| 0xE464A5D8 | 24 | FlwTulip | Flw Tulip | crc_candidate |
| 0x04EA55C1 | 21 | FlwPansy | Flw Pansy | crc_candidate |
| 0x6548ADC3 | 21 | FlwCosmos | Flw Cosmos | crc_candidate |
| 0xDBE0C47E | 21 | FlwMum | Flw Mum | crc_candidate |
| 0xF82696DA | 21 | FlwLily | Flw Lily | crc_candidate |
| 0xFDCC4E67 | 21 | FlwAnemones | Flw Anemones | crc_candidate |
| 0x396FF008 | 19 | VgtSquash | Vgt Squash | crc_candidate |
| 0x3011B913 | 13 | Ladder | Ladder | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
