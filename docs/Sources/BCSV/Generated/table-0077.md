# ItemKind.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv`
SHA256：`5c0f6c574422ddd71e26d7fcc5b8ec80305c606d8f7d4216ea3d2a74f28ce9df`
状态：parsed

行数 189，行长 152，数据起点 276。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_1B936128 | FtrIconCaptureType | 家具 图标 捕捉 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_268E2E2B | ItemGardeningEditType | 道具 园艺 编辑 类型 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_D606A6C4 | ItemKindUIType | 道具 类别 UI 类型 | 12 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_6B749E8A | ItemRemakeType | 道具 改造 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_29C41A0D | MessageKind | 消息 类别 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4D655154 | SLinkType | S 链接 类型 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_4C9BA961 | MultiHoldMaxNum | 最大堆叠数量 | 28 | 2 | s16 | multi_hold_max_raw | 表级解析字典（TYPED） |
| hash_0CE69142 | SaveCountMaxNum | 保存 计数 最大 数量 | 30 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_54706054 | UniqueID | 唯一ID | 32 | 2 | u16 | id | 表级解析字典（TYPED） |
| hash_472724ED | CanBury | 可 埋藏 | 34 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9B433DD5 | CanEat | 可 Eat | 35 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_90BC0855 | CanFtr | 可 家具 | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_06012035 | CanGift | 可 赠礼 | 37 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2C1B3B5B | CanNpcBirthdayPresent | 可 NPC 生日 礼物 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0732BB98 | CanNpcPresent | 可 NPC 礼物 | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D4697FF8 | CanPlant | 可 植物 | 40 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5D389FBF | CanPut | 可 放置 | 41 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_D223F25C | CanPutWallAndFloor | 可 放置 墙壁 及 地板 | 42 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_3D4F3F42 | CanSell | 可 出售 | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_B52FE52E | CanSellSimple | 可 出售 Simple | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_DAE27694 | CanSetChest | 可 集合 箱子 | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1BCD4858 | CanSetCloset | 可 集合 衣柜 | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C8A5A762 | CanSetInTrashBox | 可 集合 内 Trash Box | 47 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_49129B27 | CanSetItem | 可 集合 道具 | 48 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5218C48C | CanUsePhotoStudio | 可 使用 照片 工作室 | 49 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_923F8E59 | CanUseWherearen | 可 使用 度假岛 | 50 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C37A683C | CantTakeOver | 不可继承 | 51 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FD3B7C9A | IsCollectAchievement | 是否 收集 成就 | 52 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87BF00E8 | Label | 标签 | 53 | 32 | string32 | label | 表级解析字典（TYPED） |
| hash_036E8EBE | Name | 名称 | 85 | 64 | string64 | description_ja | 表级解析字典（TYPED） |
| hash_29FE5BBD | ToolCategory | 工具 分类 | 149 | 3 | u8 | 未知，保留原值 | 未登记表级业务证据 |
