# InsectStatusParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/InsectStatusParam.bcsv`
SHA256：`a28bdbedb1395c398f3b5cf54b780bdb63093933d953895468d09596deea6343`
状态：parsed

行数 90，行长 228，数据起点 156。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_64330CB0 | AppearArea | 出现 区域 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_A103C985 | AppearWeather | 出现 天气 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_27450132 | GetScale | 获取 缩放 | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B7AA0A0 | Kind | 类别 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_DA0B5C29 | WaitScale | 等待 缩放 | 20 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_20CB67BC | ItemID | 道具ID | 24 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5D4EF312 | OpenAchievementCount | 打开 成就 计数 | 26 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DAAF8BA0 | ToyItemID | Toy 道具 ID | 28 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_BACE6554 | AppearFg | 出现 Fg | 32 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3F45F2BF | DebugName | 调试 名称 | 35 | 64 | string64 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 99 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0909F3D4 | Property | 属性 | 131 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_11B0B143 | ResNameField | 资源 名称 场景 | 132 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_4C777E9E | ResNameReplaceField | 资源 名称 替换 场景 | 164 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E4B73F7D | ResNameReplaceMuseum | 资源 名称 替换 博物馆 | 196 | 32 | string32 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 昆虫状态参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述昆虫状态参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/InsectStatusParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/InsectStatusParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/InsectStatusParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/InsectStatusParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 45（0 基） | 行 89（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_64330CB0` 出现 区域 | 4 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 | 0x00000000 / hex:00000000 |
| `hash_A103C985` 出现 天气 | 8 | 0xBAC1AC1D / hex:1dacc1ba | 0xBAC1AC1D / hex:1dacc1ba | 0x61D7A8A3 / hex:a3a8d761 |
| `hash_27450132` 获取 缩放 | 12 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_9B7AA0A0` 类别 | 16 | 0x4666D1BF / hex:bfd16646 | 0x8FA0BBA0 / hex:a0bba08f | 0x42C47D88 / hex:887dc442 |
| `hash_DA0B5C29` 等待 缩放 | 20 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_20CB67BC` 道具ID | 24 | 626 / hex:7202 | 650 / hex:8a02 | 3548 / hex:dc0d |
| `hash_5D4EF312` 打开 成就 计数 | 26 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_DAAF8BA0` Toy 道具 ID | 28 | 7085 / hex:ad1b | 7105 / hex:c11b | 5922 / hex:2217 |
| `hash_54706054` 唯一ID | 30 | 1 / hex:0100 | 43 / hex:2b00 | 116 / hex:7400 |
| `hash_BACE6554` 出现 Fg | 32 | 8 / hex:080000 | raw:008003 / hex:008003 | 0 / hex:000000 |
| `hash_3F45F2BF` 调试 名称 | 35 | "モンシロチョウ" / hex:e383a2e383b3e382b7e383ade38381e383a7e382a600000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "バイオリンムシ" / hex:e38390e382a4e382aae383aae383b3e383a0e382b700000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "にじいろのはね" / hex:e381abe38198e38184e3828de381aee381afe381ad00000000000000000000000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_87BF00E8` 标签 | 99 | "Monshirocho" / hex:4d6f6e736869726f63686f000000000000000000000000000000000000000000 | "Baiorinmushi" / hex:4261696f72696e6d757368690000000000000000000000000000000000000000 | "FeatherRainbow" / hex:466561746865725261696e626f77000000000000000000000000000000000000 |
| `hash_0909F3D4` 属性 | 131 | 0 / hex:00 | 64 / hex:40 | 0 / hex:00 |
| `hash_11B0B143` 资源 名称 场景 | 132 | "InsectMonshirocho" / hex:496e736563744d6f6e736869726f63686f000000000000000000000000000000 | "InsectBaiorinmushi" / hex:496e736563744261696f72696e6d757368690000000000000000000000000000 | "InsectFeatherRainbow" / hex:496e73656374466561746865725261696e626f77000000000000000000000000 |
| `hash_4C777E9E` 资源 名称 替换 场景 | 164 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |
| `hash_E4B73F7D` 资源 名称 替换 博物馆 | 196 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 | "" / hex:0000000000000000000000000000000000000000000000000000000000000000 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 出现 区域（hash_64330CB0）

去重码值 1 个，已有标签候选 0 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x00000000 | 90 | 未知 | 未知 | unmapped |

### 出现 天气（hash_A103C985）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x61D7A8A3 | 51 | AlwaysAppear | 始终 出现 | crc_candidate |
| 0xBAC1AC1D | 34 | NotAppearInRain | 非 出现 内 雨 | crc_candidate |
| 0x6E225B93 | 2 | AppearInSnowGroundTerm | 出现 内 雪 地面 Term | crc_candidate |
| 0x914B2750 | 1 | AppearInRain | 出现 内 雨 | crc_candidate |
| 0xA72CAC63 | 1 | AppearInAutumnLeavesTerm | 出现 内 秋季 Leaves Term | crc_candidate |
| 0xC5B56A1E | 1 | AppearInCherryBlossomOpenUpTerm | 出现 内 Cherry Blossom 打开 上 Term | crc_candidate |

### 类别（hash_9B7AA0A0）

去重码值 32 个，已有标签候选 32 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x09108438 | 17 | Beetle | Beetle | crc_candidate |
| 0x4666D1BF | 13 | Butterfly | Butterfly | crc_candidate |
| 0xA07BC4EC | 6 | Flower | Flower | crc_candidate |
| 0xFAE9E66E | 6 | Locust | Locust | crc_candidate |
| 0x42C47D88 | 5 | Feather | Feather | crc_candidate |
| 0xF78ECACA | 5 | Cicada | Cicada | crc_candidate |
| 0x8FA0BBA0 | 4 | Stump | Stump | crc_candidate |
| 0xDF6292F6 | 4 | Dragonfly | Dragonfly | crc_candidate |
| 0x1A331810 | 2 | Scorpion | Scorpion | crc_candidate |
| 0x4EF09A4A | 2 | PillBug | Pill Bug | crc_candidate |
| 0x6D7B6FB2 | 2 | Spider | Spider | crc_candidate |
| 0xB5E1110D | 2 | SnowCrystal | 雪 Crystal | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
