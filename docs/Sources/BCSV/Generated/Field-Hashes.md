# 全量字段 Hash 字典

返回 [索引](README.md) · [字段名称恢复证据](../Field-Names.md) · [最新残余字段证据](../../../../research/hash008h/residual_fields.json)。

原生字段名以 CRC32 匹配签名候选展示，不等同于原版明文或业务语义确认。中文为研究用简体中文释义（术语组合翻译，未识别缩写保留原文），不是游戏官方译名。同 Hash 不保证跨表类型或语义一致。

共 2075 个 Hash；CRC 候选 2047 个（98.65%），原名未恢复 28 个。

| Hash | CRC 匹配签名（候选） | 简体中文释义 | 表数 | 字段跨度集合 | 已登记解释（按表） | 证据状态 |
| --- | --- | --- | ---: | --- | --- | --- |
| hash_000D3B51 | NormalScaleNB f32 | 法线缩放 NB | 1 | 4 | 未知 | CRC 候选 |
| hash_00244CE4 | BeforeDays u8 | 提前天数 | 2 | 1 | 未知 | CRC 候选 |
| hash_003C0210 | UmbrellaID u16 | 雨伞 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_00550508 | HideTmmCap u8 | 隐藏 Tmm 帽子 | 1 | 1 | 未知 | CRC 候选 |
| hash_0058E1EC | Month2042 u8 | 月份 2042 | 1 | 1 | 未知 | CRC 候选 |
| hash_007A831B | Month2026 u8 | 月份 2026 | 1 | 1 | 未知 | CRC 候选 |
| hash_00BD57E6 | PatternFirstDay u8 | 款式 第一 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_00C1577D | StructureInfoUniqueID u16 | 结构 信息 唯一 ID | 6 | 2 | 未知 | CRC 候选 |
| hash_010C5BB2 | StartDayN2 u8 | 开始 日 N 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_010D74A6 | ItemUnitIcon.hshCstringRef | 道具单位图标 | 1 | 4 | 未知 | CRC 候选 |
| hash_0110B14C | MaxValue u16 | 最大值 | 8 | 2 | 未知 | CRC 候选 |
| hash_011E185C | Action0_Insurance.hshCstringRef | 动作 0 保险 | 1 | 4 | 未知 | CRC 候选 |
| hash_013CBDBD | PoseTransDive u8 | 姿势 位移 潜水 | 1 | 1 | 未知 | CRC 候选 |
| hash_01481890 | AddPaternNum u8 | 增加 款式 数量 | 1 | 1 | 未知 | CRC 候选 |
| hash_0153341A | CanSelectEDay u8 | 可 选择 E 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_01997010 | RegionEventItem u8 | 地区 事件 道具 | 1 | 3 | 未知 | CRC 候选 |
| hash_0207A2AF | SpNpcID u16 | Sp NPC ID | 1 | 2 | 未知 | CRC 候选 |
| hash_02169DC7 | ColorGroupSortId u16 | 颜色 分组 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_021DF361 | UnlockTheme39 u16 | 解锁 主题 39 | 1 | 2 | 未知 | CRC 候选 |
| hash_0239D7BC | RefabricPattern7LightColor u32 | 布料改造 款式 7 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_0254BD05 | NoBuryBounce u8 | 禁止埋藏弹跳 | 1 | 1 | 未知 | CRC 候选 |
| hash_026793B2 | Day2 u8 | 日 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_02694909 | ProbMayMidnight u16 | 5月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_026C5579 | MonthNorth u8 | 北半球月份 | 2 | 1 | 未知 | CRC 候选 |
| hash_026F0892 | MSLabel string32 | 消息文本标签（MS） | 1 | 32 | ItemUIContextMenu.bcsv: message_code_candidate | CRC 候选 |
| hash_02C2AC67 | AIFlowEntryName string32 | AI 流程 入口 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_02E7476B | ASCommand string65 | AS 指令 | 1 | 65 | 未知 | CRC 候选 |
| hash_03200971 | RainHat u16 | 雨 帽子 | 1 | 2 | 未知 | CRC 候选 |
| hash_03218B32 | ReFabricPattern1Color1 u8 | 重新 布料 款式 1 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_0326335B | Weed_S u8 | 杂草 S | 1 | 1 | 未知 | CRC 候选 |
| hash_0329D696 | BonusFive u8 | 奖励 五 | 1 | 1 | 未知 | CRC 候选 |
| hash_0339BE8A | TshirtsNNormalScaleMaskR f32 | T恤 N 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_036DD90C | CalendarEventKeyHash stringMurmurHash | 日历 事件 键 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_036E8EBE | Name string64 | 名称 | 16 | 64, 65, 66, 67 | ItemAct.bcsv: description_ja; ItemClothGroup.bcsv: description_ja; ItemKind.bcsv: description_ja; ItemUIContextMenu.bcsv: description_ja; ItemUIFurnitureCategory.bcsv: description_ja | CRC 候选 |
| hash_0376EC8B | ProbAugustMorning u16 | 8月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_03B7F760 | HandToolAsName string32 | 手 工具 As 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_04034AA7 | Name string60 | 名称 | 1 | 60 | 未知 | CRC 候选 |
| hash_041C3234 | OutfitSE.hshCstringRef | 穿搭 音效 | 1 | 4 | 未知 | CRC 候选 |
| hash_0424930F | UseExteriorLight u8 | 使用 外部 光照 | 1 | 3 | 未知 | CRC 候选 |
| hash_0489D102 | CaptureCookingIcon u8 | 捕捉 烹饪 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_04A47035 | NumberingId u16 | 编号 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_04AB3038 | StartDayS5 u8 | 开始 日 S 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_04AC1BEA | SpecialELink u8 | 特殊 E 链接 | 3 | 1 | 未知 | CRC 候选 |
| hash_04E041C5 | Day2017 u8 | 日 2017 | 1 | 1 | 未知 | CRC 候选 |
| hash_04F52F6A | NpcLooks.hshCstringRef | NPC 外观 | 1 | 4 | 未知 | CRC 候选 |
| hash_04FBF4BC | SortIdKRko u16 | 排序 ID K Rko | 1 | 2 | 未知 | CRC 候选 |
| hash_05038516 | LandingName string64 | 着陆 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_0507133E | ActionPattern3 u32 | 动作 款式 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_0512B63C | StampRackNameExplainLabel string32 | 印章 架子 名称 说明 标签 | 1 | 32 | 未知 | CRC 候选 |
| hash_05639AB0 | ItemHHASeason.hshCstringRef | 道具 快乐家协会 季节 | 1 | 4 | 未知 | CRC 候选 |
| hash_05654ACB | UnlockTheme13 u16 | 解锁 主题 13 | 1 | 2 | 未知 | CRC 候选 |
| hash_059D1682 | ItemHHASet.hshCstringRef | 道具 快乐家协会 集合 | 1 | 4 | 未知 | CRC 候选 |
| hash_06012035 | CanGift u8 | 可 赠礼 | 1 | 1 | 未知 | CRC 候选 |
| hash_061443F4 | Rate0_1 s8 | 比率 0 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_066FBE8E | InWaterBody u8 | 内 水 主体 | 1 | 1 | 未知 | CRC 候选 |
| hash_069F18AE | OuterLNormalScaleMaskG f32 | 外侧 L 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_06A63FB6 | ReplaceTiming u8 | 替换 时机 | 1 | 3 | 未知 | CRC 候选 |
| hash_06BCF848 | ProbMarchDaytime u16 | 3月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_06D0F4A8 | NpcLabel2 string32 | NPC 标签 2 | 1 | 32 | 未知 | CRC 候选 |
| hash_06DA20A1 | WdayNorth u8 | 北半球星期 | 1 | 1 | 未知 | CRC 候选 |
| hash_06E9BC8C | MaxValue4 u32 | 最大 数值 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_06ED5FED | ObjectActorType u8 | 对象 角色 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_0732BB98 | CanNpcPresent u8 | 可 NPC 礼物 | 1 | 1 | 未知 | CRC 候选 |
| hash_07407C61 | InnerType030 u8 | 内侧 类型 030 | 1 | 1 | 未知 | CRC 候选 |
| hash_07D45B0F | ReFabricPattern3Color1 u8 | 重新 布料 款式 3 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_07D60B3D | NameWithTitle u8 | 名称 带有 标题 | 1 | 1 | 未知 | CRC 候选 |
| hash_08238405 | AccentWall u16 | 强调 墙壁 | 1 | 2 | 未知 | CRC 候选 |
| hash_08462F85 | JpName string32 | Jp 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_085E476D | BaseColorR f32 | 基础 颜色 R | 2 | 4 | 未知 | CRC 候选 |
| hash_086F5F3A | LocalizeTexture u8 | 本地化 纹理 | 1 | 1 | 未知 | CRC 候选 |
| hash_08D23365 | DefaultHeredity u8 | 默认 继承 | 1 | 1 | 未知 | CRC 候选 |
| hash_08EE40D5 | StartMoN5 u8 | 开始 月份 N 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_08F225C6 | CollaborateItem u8 | 协作 道具 | 1 | 1 | 未知 | CRC 候选 |
| hash_0909F3D4 | Property u8 | 属性 | 1 | 1 | 未知 | CRC 候选 |
| hash_091B46F5 | NPCLabel string128 | NPC 标签 | 1 | 130 | 未知 | CRC 候选 |
| hash_093DFE4F | ModelScale f32 | 模型 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_094D8212 | RebodyPattern6LightColor u32 | 主体改造 款式 6 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_094E5AF8 | ItemFtrUpperWallDirection.hshCstringRef | 道具 家具 上部 墙壁 方向 | 1 | 4 | 未知 | CRC 候选 |
| hash_0966FBE3 | DefaultRoofUniqueID u16 | 默认 屋顶 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_09AD7622 | TypePriority f32 | 类型 优先级 | 3 | 4 | 未知 | CRC 候选 |
| hash_09B64264 | MemoryUnitNum u16 | 回忆 单位 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_09B714F9 | AnimeTypeWateringCan string64 | 动画 类型 浇水 可 | 1 | 64 | 未知 | CRC 候选 |
| hash_09C60FD9 | Rate6 u8 | 比率 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_09D75F40 | IsUseXlink u8 | 是否 使用 Xlink | 1 | 1 | 未知 | CRC 候选 |
| hash_09DF4299 | Reward2 u32 | 奖励 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_09F34486 | MainIslandItemLayer u8 | 主要 岛屿 道具 层 | 1 | 1 | 未知 | CRC 候选 |
| hash_09F88366 | Ice u8 | 冰 | 1 | 1 | 未知 | CRC 候选 |
| hash_0A0174E3 | Action2_1.hshCstringRef | 动作 2 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_0A2D6F3E | RightTransOffsetX f32 | 右 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_0A65E08A | NormalScaleLA f32 | 法线 缩放 LA | 1 | 4 | 未知 | CRC 候选 |
| hash_0AA76EDD | HouseDoorShape.hshCstringRef | 房屋 门 形状 | 1 | 4 | 未知 | CRC 候选 |
| hash_0ABC5303 | CheekOrangeColorG f32 | 脸颊 橙色 颜色 G | 1 | 4 | 未知 | CRC 候选 |
| hash_0AC45A99 | Month2033 u8 | 月份 2033 | 1 | 1 | 未知 | CRC 候选 |
| hash_0AC9E9A2 | HHDFtrType string64 | HHD 家具 类型 | 1 | 64 | 未知 | CRC 候选 |
| hash_0ACA2B48 | ReFabricPattern5Color1 u8 | 重新 布料 款式 5 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_0AE6386E | Month2057 u8 | 月份 2057 | 1 | 1 | 未知 | CRC 候选 |
| hash_0B3BE609 | ErrorThroughCount s8 | 错误 穿过 计数 | 1 | 1 | 未知 | CRC 候选 |
| hash_0B3D1D54 | PlayerFlagKeyON2 string32 | 玩家 标志 键 开启 2 | 1 | 32 | 未知 | CRC 候选 |
| hash_0B52F5BB | FloorType u16 | 地板 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_0B69EC1A | LowerSetting.hshCstringRef | 下部 设置 | 1 | 4 | 未知 | CRC 候选 |
| hash_0B6D59D2 | Size s8 | 尺寸 | 1 | 1 | 未知 | CRC 候选 |
| hash_0BB66872 | Wherearen u8 | 度假岛 | 1 | 3 | 未知 | CRC 候选 |
| hash_0BCF172F | MeshEdgeDirType.hshCstringRef | 网格 边缘 方向 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_0C315945 | CollisionHeight f32 | 碰撞 高度 | 1 | 4 | 未知 | CRC 候选 |
| hash_0C78BF8F | RemakeBodyID s16 | 改造 主体 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_0C98243C | AnimeTypeDrink string64 | 动画 类型 饮料 | 1 | 64 | 未知 | CRC 候选 |
| hash_0CB1CDC5 | UnlockTheme25 u16 | 解锁 主题 25 | 1 | 2 | 未知 | CRC 候选 |
| hash_0CB402A3 | ReFabricPatternNum s8 | 重新 布料 款式 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_0CC4E7B5 | USes u8 | U Ses | 1 | 1 | 未知 | CRC 候选 |
| hash_0CD7F9C5 | FashionThemeRelax u8 | 时尚 主题 放松 | 1 | 1 | 未知 | CRC 候选 |
| hash_0CE69142 | SaveCountMaxNum u16 | 保存 计数 最大 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_0D492B5F | StartMoS2 u8 | 开始 月份 S 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_0D54D810 | EdgePatternType.hshCstringRef | 边缘 款式 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_0D664B5C | Door0 u16 | 门 0 | 3 | 2 | 未知 | CRC 候选 |
| hash_0DBBEBB5 | ProbAprMorningAndEvening u16 | 4月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_0DCA149D | SortIdCNzh u16 | 排序 ID C Nzh | 1 | 2 | 未知 | CRC 候选 |
| hash_0DE2A3BE | AppearType.hshCstringRef | 出现 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_0E0325BA | FishingSeries u8 | 钓鱼 系列 | 1 | 1 | 未知 | CRC 候选 |
| hash_0E0ACF95 | DebugFtrSeries.hshCstringRef | 调试 家具 系列 | 1 | 4 | 未知 | CRC 候选 |
| hash_0E362CE0 | ApproachIncreaseRate u16 | 接近 增加 比率 | 1 | 2 | 未知 | CRC 候选 |
| hash_0E387A24 | SwitchableOnWall u8 | 可切换 开启 墙壁 | 1 | 4 | 未知 | CRC 候选 |
| hash_0E3F98AA | SpHobby.hshCstringRef | Sp 爱好 | 1 | 4 | 未知 | CRC 候选 |
| hash_0E3FFB75 | ReFabricPattern7Color1 u8 | 重新 布料 款式 7 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_0E5E9847 | Day2002 u8 | 日 2002 | 1 | 1 | 未知 | CRC 候选 |
| hash_0E609BC1 | InnerType111 u8 | 内侧 类型 111 | 1 | 1 | 未知 | CRC 候选 |
| hash_0E6CA0D4 | Seasonality.hshCstringRef | 季节性 | 1 | 4 | 未知 | CRC 候选 |
| hash_0E7AB6A6 | VmPauseType.hshCstringRef | Vm 暂停 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_0E91FC27 | IsSidewaysShow u8 | 是否 侧向 显示 | 1 | 1 | 未知 | CRC 候选 |
| hash_0EA633A0 | Inland u8 | 内陆 | 1 | 1 | 未知 | CRC 候选 |
| hash_0EB7FA40 | ToiletType u8 | 厕所 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_0EC3A031 | AnimeTypeCooking string64 | 动画 类型 烹饪 | 1 | 64 | 未知 | CRC 候选 |
| hash_0ED6CAF4 | TopRotateOffsetX f32 | 顶部 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_0F095B88 | ProbFebMorningAndEvening u16 | 2月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_0F0D9110 | UnlockTheme30 u16 | 解锁 主题 30 | 1 | 2 | 未知 | CRC 候选 |
| hash_0F230D34 | SilhouettePosX f32 | 轮廓 位置 X | 1 | 4 | 未知 | CRC 候选 |
| hash_0F30A50E | MusicNo u16 | 音乐 无 | 2 | 2 | 未知 | CRC 候选 |
| hash_0F640691 | PosterItemID s16 | 海报 道具 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_0F6D306E | OpenPlayerFlagId s32 | 打开 玩家 标志 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_0F7DD98F | UnlockTheme2 u16 | 解锁 主题 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_0F9F6747 | WallTableId u16 | 墙壁 表 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_0FAC8973 | NpcLabel string32 | NPC 标签 | 1 | 32 | 未知 | CRC 候选 |
| hash_0FD26913 | Sound.hshCstringRef | 声音 | 1 | 4 | 未知 | CRC 候选 |
| hash_10757F8C | ProbAprilEvening2 u16 | 4月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_10D23C5C | Day1 u8 | 日 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_10DBD8BB | AppearanceLevel.hshCstringRef | 外观 等级 | 1 | 4 | 未知 | CRC 候选 |
| hash_10FC6F17 | TradeDifficultyLevel.hshCstringRef | 交易 难度 等级 | 1 | 4 | 未知 | CRC 候选 |
| hash_110A7053 | MessageLabel u16 | 消息 标签 | 1 | 2 | 未知 | CRC 候选 |
| hash_110CA7B2 | MuseumNpcRace u32 | 博物馆 NPC 竞赛 | 1 | 4 | 未知 | CRC 候选 |
| hash_1144C9A1 | NameLong string128 | 名称 长 | 1 | 128 | 未知 | CRC 候选 |
| hash_116F007F | CaptureGardeningIcon u8 | 捕捉 园艺 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_11AE74F8 | NpcSynchroEndTiming.hshCstringRef | NPC 同步 结束 时机 | 2 | 4 | 未知 | CRC 候选 |
| hash_11B0B143 | ResNameField string32 | 资源 名称 场景 | 1 | 32 | 未知 | CRC 候选 |
| hash_11BF9036 | Day2059 u8 | 日 2059 | 1 | 1 | 未知 | CRC 候选 |
| hash_1222490A | Snow u8 | 雪 | 1 | 1 | 未知 | CRC 候选 |
| hash_123EFCF1 | PicIconHeight f32 | 图片 图标 高度 | 1 | 4 | 未知 | CRC 候选 |
| hash_12735D82 | ReBodyPattern4Color0 u8 | 重新 主体 款式 4 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_127CCFD9 | Reward u16 | 奖励 | 2 | 2 | 未知 | CRC 候选 |
| hash_128A3D9B | ItemCategoryGroup u32 | 道具 分类 分组 | 2 | 4 | 未知 | CRC 候选 |
| hash_12A20792 | Stage10 string32 | 阶段 10 | 1 | 32 | 未知 | CRC 候选 |
| hash_12CF2CF5 | Month2025 u8 | 月份 2025 | 1 | 1 | 未知 | CRC 候选 |
| hash_12D4D7A6 | AITagBitRankS u8 | AI 标签 位 级别 S | 1 | 7 | 未知 | CRC 候选 |
| hash_12ED4E02 | Month2041 u8 | 月份 2041 | 1 | 1 | 未知 | CRC 候选 |
| hash_132DD5B9 | FishMuseumAction.hshCstringRef | 鱼 博物馆 动作 | 1 | 4 | 未知 | CRC 候选 |
| hash_1344BDC5 | RefabricPattern4LightColor u32 | 布料改造 款式 4 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_1365B16D | IsWant u8 | 是否 想要 | 1 | 1 | 未知 | CRC 候选 |
| hash_137DD804 | AppearArea u8 | 出现 区域 | 3 | 4 | 未知 | CRC 候选 |
| hash_13A65775 | Amount1 u16 | 数量 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_13AB5198 | Label string64 | 标签 | 6 | 64, 66 | ItemClothGroup.bcsv: label; ItemUIFurnitureCategory.bcsv: label | CRC 候选 |
| hash_13B9F45C | StartDayN1 u8 | 开始 日 N 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_14767DF7 | MaskTemporarilyCreate u8 | 遮罩 临时 创建 | 1 | 1 | 未知 | CRC 候选 |
| hash_147E658D | FrontSwitch u8 | 正面 切换 | 1 | 1 | 未知 | CRC 候选 |
| hash_14A1EC1A | Rate0_2 s8 | 比率 0 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_14A76147 | RightRotateOffsetY f32 | 右 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_14E0F9C1 | Priority u8 | 优先级 | 1 | 1 | 未知 | CRC 候选 |
| hash_1538C8AC | ProbNovemberDaytime u16 | 11月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_153E947E | Book2 u32 | 书 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_154EEE75 | TimeZoneIndoorEarlyMorningLevel u8 | 时间 区域 室内 提前 早晨 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_155D8B5D | TvProgram2 u32 | 电视 程序 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_158A4C61 | DemoDistance f32 | 演出 距离 | 1 | 4 | 未知 | CRC 候选 |
| hash_15D08D9A | TorsoResName string32 | 躯干 资源 名称 | 1 | 34 | 未知 | CRC 候选 |
| hash_15DE6A3F | ProbAugDaytime u16 | 8月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_15E831B4 | DefaultRoof u16 | 默认 屋顶 | 1 | 2 | 未知 | CRC 候选 |
| hash_15F5D38F | InnerType033 u8 | 内侧 类型 033 | 1 | 1 | 未知 | CRC 候选 |
| hash_160CB241 | PlacementOfficeType.hshCstringRef | 摆放 办公室 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_161E9FD6 | StartDayS6 u8 | 开始 日 S 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_164A5F24 | ItemNpcAiEquipTaste1.hshCstringRef | 道具 NPC AI 装备 风格 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_1655EE2B | Day2014 u8 | 日 2014 | 1 | 1 | 未知 | CRC 候选 |
| hash_1657D7AF | Stage12 string32 | 阶段 12 | 1 | 32 | 未知 | CRC 候选 |
| hash_16868DBF | ReBodyPattern6Color0 u8 | 重新 主体 款式 6 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_16A66E06 | ItemHHAPart.hshCstringRef | 道具 快乐家协会 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_16B8F524 | HalfUnitSizeX u8 | X 方向半格尺寸 | 1 | 1 | ItemSize.bcsv: width_half_tiles | CRC 候选 |
| hash_16C95ACC | HighlightColorB f32 | 高亮 颜色 B | 1 | 4 | 未知 | CRC 候选 |
| hash_16E483F0 | 未知 | 玩家状态复制例外（语义别名：PlayerStateCopyException） | 1 | 1 | 未知 | 原名未恢复 / native_field_read |
| hash_170AF5B8 | QuotaNum u16 | 配额 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_175969E1 | EventNumLimit u16 | 事件 数量 限制 | 2 | 2 | 未知 | CRC 候选 |
| hash_175DFEB2 | ProbFebruayMidnight u16 | 2月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_17DB736C | Sakura_S u8 | 樱花 S | 1 | 1 | 未知 | CRC 候选 |
| hash_1830E86B | RebodyPattern5LightColor u32 | 主体改造 款式 5 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_18539780 | Month2054 u8 | 月份 2054 | 1 | 1 | 未知 | CRC 候选 |
| hash_185D9096 | Season_N u8 | 季节 N | 1 | 1 | 未知 | CRC 候选 |
| hash_1871F577 | Month2030 u8 | 月份 2030 | 1 | 1 | 未知 | CRC 候选 |
| hash_1938749D | WeatherPattern0 u16 | 天气 款式 0 | 1 | 2 | 未知 | CRC 候选 |
| hash_195815CF | AiEquipTaste2 u32 | AI 装备 风格 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_19A9348C | SEParts.hshCstringRef | 音效 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_19BB54C6 | ItemKind6 u16 | 道具 类别 6 | 1 | 2 | 未知 | CRC 候选 |
| hash_19EEC64F | TopTransOffsetX f32 | 顶部 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_1A361BD7 | PeakRotateOffsetY f32 | 峰值 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_1A5BEF3B | StartMoN6 u8 | 开始 月份 N 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_1A9174C6 | SortID s8 | 排序 ID | 1 | 1 | 未知 | CRC 候选 |
| hash_1AAADDC1 | DummyMenuDemo u8 | 占位 菜单 演出 | 1 | 1 | 未知 | CRC 候选 |
| hash_1ABE6E96 | SelectSecond u16 | 选择 第二 | 1 | 2 | 未知 | CRC 候选 |
| hash_1B232B43 | Day2028 u8 | 日 2028 | 1 | 1 | 未知 | CRC 候选 |
| hash_1B49A7E8 | Stage14 string32 | 阶段 14 | 1 | 32 | 未知 | CRC 候选 |
| hash_1B525407 | StarMark u8 | 星星 标记 | 1 | 4 | 未知 | CRC 候选 |
| hash_1B53DB71 | WatchPosY f32 | 观察 位置 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_1B6EAA53 | TimeZoneOutdoorNightLevel u8 | 时间 区域 室外 夜间 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_1B73A037 | Rate5 u8 | 比率 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_1B7C1E9A | Action2_2.hshCstringRef | 动作 2 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_1B936128 | FtrIconCaptureType.hshCstringRef | 家具 图标 捕捉 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_1B93DAA9 | ToolSetupPutawayAsName string32 | 工具 设置 收起 As 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_1B98FDF8 | ReBodyPattern0Color0 u8 | 重新 主体 款式 0 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_1BBFA75E | Material1 u16 | 材质 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_1BBFE498 | Pattern1 u8 | 款式 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_1BCD4858 | CanSetCloset u8 | 可 集合 衣柜 | 1 | 1 | 未知 | CRC 候选 |
| hash_1BE772F0 | MaxLevel u8 | 最大 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_1BF6ABEA | DesignWinter1 u16 | 设计 冬季 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_1C2C02F5 | SelectOne u8 | 选择 一 | 1 | 4 | 未知 | CRC 候选 |
| hash_1C57897D | NpcReleaseType u32 | NPC 释放 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_1C73934D | MannequinPose.hshCstringRef | 人体模特 姿势 | 1 | 4 | 未知 | CRC 候选 |
| hash_1C8856DB | ResNameMuseum string32 | 资源 名称 博物馆 | 2 | 34 | 未知 | CRC 候选 |
| hash_1C8D9DBC | TourType.hshCstringRef | 旅行 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_1CB2E5A6 | TimeZoneIndoorMorningLevel u8 | 时间 区域 室内 早晨 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_1CD5342F | InnerType112 u8 | 内侧 类型 112 | 1 | 1 | 未知 | CRC 候选 |
| hash_1CEB37A9 | Day2001 u8 | 日 2001 | 1 | 1 | 未知 | CRC 候选 |
| hash_1D026757 | Hobby1 u32 | 爱好 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_1D06DEDD | RegionEventCountry5 u16 | 地区 事件 国家 5 | 1 | 2 | 未知 | CRC 候选 |
| hash_1D69405F | RainWare u16 | 雨 器具 | 1 | 2 | 未知 | CRC 候选 |
| hash_1D790DF7 | ProbAprNight u16 | 4月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_1D99C513 | Studio u8 | 工作室 | 1 | 1 | 未知 | CRC 候选 |
| hash_1DB4A596 | EndMonthSouth u16 | 结束 月份 南 | 1 | 2 | 未知 | CRC 候选 |
| hash_1DD11BC9 | UnlockEvent1 u16 | 解锁 事件 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_1E3ACF92 | OnepieceNNormalScaleMaskB f32 | 连衣裙 N 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_1E4FF55F | NormalScaleMaskR f32 | 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_1E7EF977 | SelectRate u8 | 选择 比率 | 2 | 1 | 未知 | CRC 候选 |
| hash_1E8D322C | ProbJuneMorning u16 | 6月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_1E996A76 | FashionThemeSport u8 | 时尚 主题 运动 | 1 | 1 | 未知 | CRC 候选 |
| hash_1E9DA321 | MoveSpot4 u32 | 移动 地点 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_1EA2C2C4 | ItemKind15 u16 | 道具 类别 15 | 1 | 2 | 未知 | CRC 候选 |
| hash_1EB4573C | NormalScaleHG f32 | 法线 缩放 HG | 1 | 4 | 未知 | CRC 候选 |
| hash_1EB65D06 | HobbyMusicLevel u8 | 爱好 音乐 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_1ED42314 | N0Parts.hshCstringRef | N 0 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_1EF061DD | DonateItemFifth u16 | 捐赠 道具 第五 | 1 | 2 | 未知 | CRC 候选 |
| hash_1F301724 | EUen u8 | E Uen | 1 | 1 | 未知 | CRC 候选 |
| hash_1F3893E5 | WalkWatchOffsetX f32 | 行走 观察 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_1F3BCF5E | LiveMotif u8 | 现场 图案 | 1 | 1 | 未知 | CRC 候选 |
| hash_1F401B52 | PurposeScore s32 | 用途 分数 | 3 | 4 | 未知 | CRC 候选 |
| hash_1F65DDAC | ProbNovemberMidnight u16 | 11月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_1F6D2DC5 | ReBodyPattern2Color0 u8 | 重新 主体 款式 2 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_1F875D3D | PHBCResName string32 | PHBC 资源 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_1FB9E99D | Month2019 u8 | 月份 2019 | 1 | 1 | 未知 | CRC 候选 |
| hash_1FBC11AA | 未知 | 主岛摆放条件（语义别名：MainIslandPlacementCondition） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_1FBC77D5 | Stage16 string32 | 阶段 16 | 1 | 32 | 未知 | CRC 候选 |
| hash_1FDF73CE | OutputCSV u8 | 输出 CSV | 1 | 1 | 未知 | CRC 候选 |
| hash_1FE65C0C | ProbSepMorningAndEvening u16 | 9月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_1FF4093D | HousePartsType.hshCstringRef | 房屋 部件 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_1FFC84B1 | StartMoS1 u8 | 开始 月份 S 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_200DD382 | Priority u16 | 优先级 | 1 | 2 | 未知 | CRC 候选 |
| hash_202207B0 | NpcRole2 u8 | NPC 角色 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_202E64DD | ProbJunNight u16 | 6月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_20624EE7 | Hobby0 u32 | 爱好 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_2066F76D | RegionEventCountry4 u16 | 地区 事件 国家 4 | 1 | 2 | 未知 | CRC 候选 |
| hash_20812562 | ChestPlantSortId s16 | 箱子 植物 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_20A27847 | RemakeFabricID s16 | 改造 布料 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_20C3034E | RefabricPattern1LightColor u32 | 布料改造 款式 1 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_20CB67BC | ItemID u16 | 道具ID | 12 | 2 | 未知 | CRC 候选 |
| hash_20DD4377 | IsGive u8 | 是否 给予 | 1 | 1 | 未知 | CRC 候选 |
| hash_20DD4435 | EventFtrUniqueID u16 | 事件 家具 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_20E74524 | OnepieceHNormalScaleMaskG f32 | 连衣裙 H 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_21511673 | Coef f32 | 系数 | 1 | 4 | 未知 | CRC 候选 |
| hash_218B1E19 | Day2011 u8 | 日 2011 | 1 | 1 | 未知 | CRC 候选 |
| hash_21B51D9F | InnerType102 u8 | 内侧 类型 102 | 1 | 1 | 未知 | CRC 候选 |
| hash_21C06FE4 | StartDayS3 u8 | 开始 日 S 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_21C5BBD6 | 未知 | NPC 活动等待参数（语义别名：NpcActivityWaitParameter） | 2 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_21C5D786 | ActionSetRate0 s8 | 动作 集合 比率 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_21EEFAAC | FurniturePosAngle u32 | 家具 位置 角度 | 1 | 4 | 未知 | CRC 候选 |
| hash_224C7F34 | DaySouth u8 | 日 南 | 2 | 1 | 未知 | CRC 候选 |
| hash_2258BA55 | WalkWatchOffsetY f32 | 行走 观察 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_227444FB | ProbMayEvening1 u16 | 5月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_2292517A | Snow_S u8 | 雪 S | 1 | 1 | 未知 | CRC 候选 |
| hash_22D9C02D | Month2009 u8 | 月份 2009 | 1 | 1 | 未知 | CRC 候选 |
| hash_237F1C28 | Rate0_7 s8 | 比率 0 7 | 1 | 1 | 未知 | CRC 候选 |
| hash_23A01E5B | Theme.hshCstringRef | 主题 | 1 | 4 | 未知 | CRC 候选 |
| hash_23C2EB74 | ItemKind14 u16 | 道具 类别 14 | 1 | 2 | 未知 | CRC 候选 |
| hash_23E16936 | HasDoorEigyoLight u8 | 具有 门 Eigyo 光照 | 1 | 1 | 未知 | CRC 候选 |
| hash_23E7C2A0 | Social u32 | 社交 | 1 | 4 | 未知 | CRC 候选 |
| hash_2409DCB4 | UserSelect u8 | 用户 选择 | 1 | 3 | 未知 | CRC 候选 |
| hash_24585D2D | WeatherPattern1 u16 | 天气 款式 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_2467046E | StartDayN4 u8 | 开始 日 N 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_24726310 | EventFtrSwitch.hshCstringRef | 事件 家具 切换 | 1 | 4 | 未知 | CRC 候选 |
| hash_247953D8 | TshirtsNNormalScaleMaskA f32 | T恤 N 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_248EEFFF | TopTransOffsetY f32 | 顶部 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_24DA7ADA | Kind u8 | 类别 | 1 | 1 | 未知 | CRC 候选 |
| hash_24DB7D76 | ItemKind7 u16 | 道具 类别 7 | 1 | 2 | 未知 | CRC 候选 |
| hash_24DBB4E0 | ProbJulNight u16 | 7月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_24E5B19D | NpcGroupActivityKeyHash stringMurmurHash | NPC 分组 活动 键 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_2511DCC7 | Month2020 u8 | 月份 2020 | 1 | 1 | 未知 | CRC 候选 |
| hash_25210E31 | Action3_3.hshCstringRef | 动作 3 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_2533BE30 | Month2044 u8 | 月份 2044 | 1 | 1 | 未知 | CRC 候选 |
| hash_255F93C7 | E1Parts.hshCstringRef | E 1 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_25D6CD9C | W2Parts.hshCstringRef | W 2 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_25DE7B8F | SkinColor u16 | 皮肤 颜色 | 1 | 2 | 未知 | CRC 候选 |
| hash_260EC620 | ProbSepNight u16 | 9月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_26214340 | ASCommand2 string66 | AS 指令 2 | 1 | 66 | 未知 | CRC 候选 |
| hash_2633F2C1 | WatchPosX f32 | 观察 位置 X | 1 | 4 | 未知 | CRC 候选 |
| hash_263C3CED | ItemNpcWherearenFtrActionType.hshCstringRef | 道具 NPC 度假岛 家具 动作 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_264302F3 | Day2038 u8 | 日 2038 | 1 | 1 | 未知 | CRC 候选 |
| hash_2654BE7C | AudioPreset.hshCstringRef | 音频 预设 | 1 | 4 | 未知 | CRC 候选 |
| hash_265EF22D | Color2 u8 | 颜色 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_2678154B | FtrType3 u8 | 家具 类型 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_267C99F7 | ProbDecDaytime u16 | 12月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_268E2E2B | ItemGardeningEditType.hshCstringRef | 道具 园艺 编辑 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_26911C10 | ToolAsCommand string30 | 工具 As 指令 | 1 | 33 | 未知 | CRC 候选 |
| hash_26DB5137 | EventObjUniqueID u16 | 事件 对象 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_26E57A14 | NearbyInteract u8 | 附近 交互 | 1 | 1 | 未知 | CRC 候选 |
| hash_27450132 | GetScale f32 | 获取 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_27563267 | PeakRotateOffsetX f32 | 峰值 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_2760BC87 | SeasonSummerLevel u8 | 季节 夏季 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_27AD3D4E | ProbJanuaryEvening2 u16 | 1月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_281F90A8 | FallActionType.hshCstringRef | 秋季 动作 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_28227483 | StartMoS4 u8 | 开始 月份 S 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_28297660 | ItemUICategory.hshCstringRef | 道具 UI 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_2849DEC1 | ProbJulyEvening2 u16 | 7月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_286BE1F4 | BO2Index s16 | BO 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_286D8E9E | RequestNum0 s8 | 请求 数量 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_287DB05D | Month u8 | 月份 | 1 | 1 | 未知 | CRC 候选 |
| hash_2895FA3F | InnerType023 u8 | 内侧 类型 023 | 1 | 1 | 未知 | CRC 候选 |
| hash_28F7EA03 | Month1 u8 | 月份 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_291A1B04 | Cap u16 | 帽子 | 6 | 2 | 未知 | CRC 候选 |
| hash_2924E11F | ItemHumanGmoToolType u16 | 道具 人类 Gmo 工具 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_292F5520 | SpKabe u8 | Sp 墙 | 1 | 1 | 未知 | CRC 候选 |
| hash_29346C33 | TemplateKind.hshCstringRef | 模板 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_293EE089 | SelectRate f32 | 选择 比率 | 2 | 4 | 未知 | CRC 候选 |
| hash_295227E5 | SpNpcAmiiboCallType.hshCstringRef | Sp NPC amiibo 调用 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_29522D29 | Cloud_S u8 | 云 S | 1 | 1 | 未知 | CRC 候选 |
| hash_29C41A0D | MessageKind.hshCstringRef | 消息 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_29C748F7 | RightRotateOffsetX f32 | 右 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_29ECB129 | RemakeKitNum u16 | 改造 套件 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_29FE5BBD | ToolCategory u8 | 工具 分类 | 1 | 3 | 未知 | CRC 候选 |
| hash_2A70EF74 | NpcActionUniqueID u16 | NPC 动作 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_2A7A644C | StrSortIdEUit u16 | 字符串 排序 ID E Uit | 1 | 2 | 未知 | CRC 候选 |
| hash_2A89F9D1 | Rate3_3 s8 | 比率 3 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_2A93682F | ProbJuneNight u16 | 6月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_2AE273E3 | StateName string48 | 状态 名称 | 1 | 48 | 未知 | CRC 候选 |
| hash_2AE7C830 | TimeZoneOutdoorMorningLevel u8 | 时间 区域 室外 早晨 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_2B09D942 | EndMinute u8 | 结束 分钟 | 1 | 1 | 未知 | CRC 候选 |
| hash_2B17A56C | Day2060 u8 | 日 2060 | 1 | 1 | 未知 | CRC 候选 |
| hash_2B35C79B | Day2004 u8 | 日 2004 | 1 | 1 | 未知 | CRC 候选 |
| hash_2B3F3307 | ASCommand4 string66 | AS 指令 4 | 1 | 66 | 未知 | CRC 候选 |
| hash_2B54BEDD | NpcRole0.hshCstringRef | NPC 角色 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_2B57B24A | AcceEye u16 | 饰品 眼睛 | 5 | 2 | 未知 | CRC 候选 |
| hash_2B6186A0 | 未知 | 玩家工具动作标志（语义别名：PlayerToolActionFlag） | 1 | 1 | 未知 | 原名未恢复 / native_field_read |
| hash_2B68EF71 | UISortID u16 | UI 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_2B74F5DC | ProbJulDaytime u16 | 7月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_2BA288CF | SortIdJPja u16 | 排序 ID J Pja | 1 | 2 | 未知 | CRC 候选 |
| hash_2C1B3B5B | CanNpcBirthdayPresent u8 | 可 NPC 生日 礼物 | 1 | 1 | 未知 | CRC 候选 |
| hash_2C2A379E | CapPurposeLimit u8 | 帽子 用途 限制 | 3 | 1 | 未知 | CRC 候选 |
| hash_2C40799E | NameboardAngleY f32 | 名牌 角度 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_2C447591 | AsCommand string65 | As 指令 | 1 | 65 | 未知 | CRC 候选 |
| hash_2C660F2C | DesignAlways4 u16 | 设计 始终 4 | 2 | 2 | 未知 | CRC 候选 |
| hash_2C6A189E | GrowupFg u16 | 成长 Fg | 1 | 2 | 未知 | CRC 候选 |
| hash_2C91307C | RebodyNum2 s8 | 主体改造 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_2CA34410 | NpcFtrActionTool u16 | NPC 家具 动作 工具 | 3 | 2 | 未知 | CRC 候选 |
| hash_2CB125CC | ProbMarMorningAndEvening u16 | 3月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_2CDFB986 | Day2049 u8 | 日 2049 | 1 | 1 | 未知 | CRC 候选 |
| hash_2D250DD8 | NormalScaleLR f32 | 法线 缩放 LR | 1 | 4 | 未知 | CRC 候选 |
| hash_2D851F09 | StartMoN3 u8 | 开始 月份 N 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_2DA64E66 | StrSortIdTWzh u16 | 字符串 排序 ID T Wzh | 1 | 2 | 未知 | CRC 候选 |
| hash_2DAE0AA4 | SkinBaseColorB f32 | 皮肤 基础 颜色 B | 1 | 4 | 未知 | CRC 候选 |
| hash_2DF085CC | GroundAttributeUniqueID u16 | 地面 属性 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_2E17A0A7 | SoundAttribute u16 | 声音 属性 | 4 | 2 | 未知 | CRC 候选 |
| hash_2E1E45C3 | GroundHoleColorString string16 | 地面 洞 颜色 字符串 | 1 | 16 | 未知 | CRC 候选 |
| hash_2F1B930D | Label string8 | 标签 | 5 | 8 | 未知 | CRC 候选 |
| hash_2F571A00 | RankIncrease u16 | 级别 增加 | 1 | 2 | 未知 | CRC 候选 |
| hash_2F8D67B2 | Month2051 u8 | 月份 2051 | 1 | 1 | 未知 | CRC 候选 |
| hash_2FAF0545 | Month2035 u8 | 月份 2035 | 1 | 1 | 未知 | CRC 候选 |
| hash_2FCAE33A | ASCommand6 string66 | AS 指令 6 | 1 | 66 | 未知 | CRC 候选 |
| hash_2FE593C3 | UISortID s16 | UI 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_2FE93808 | Action1_8.hshCstringRef | 动作 1 8 | 1 | 4 | 未知 | CRC 候选 |
| hash_30127DFD | DisableInDream u8 | 禁用 内 梦境 | 1 | 1 | 未知 | CRC 候选 |
| hash_303FD59E | KappeiTourCategory.hshCstringRef | 航平 旅行 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_30B36B14 | ElectionRate8 u8 | 选举 比率 8 | 1 | 1 | 未知 | CRC 候选 |
| hash_30D3F8F7 | FlowEntryName string32 | 流程 入口 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_3103D389 | ASCommand8 string66 | AS 指令 8 | 1 | 66 | 未知 | CRC 候选 |
| hash_31450AA2 | MainType u8 | 主要 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_318EBBF2 | TextureWindow u8 | 纹理 窗户 | 1 | 1 | 未知 | CRC 候选 |
| hash_3198C2AC | PointIndex s16 | 点 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_319A1388 | EndDaySouth u16 | 结束 日 南 | 1 | 2 | 未知 | CRC 候选 |
| hash_31BE6937 | RefabricPattern2LightColor u32 | 布料改造 款式 2 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_31CAB3C6 | Rate0_4 s8 | 比率 0 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_31CB6B0A | Collision u8 | 碰撞 | 1 | 1 | 未知 | CRC 候选 |
| hash_31D1E475 | UnlockTheme24 u16 | 解锁 主题 24 | 1 | 2 | 未知 | CRC 候选 |
| hash_321DF03F | UnlockTheme3 u16 | 解锁 主题 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_321E419F | OnepieceLNormalScaleMaskG f32 | 连衣裙 L 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_32432484 | SilhouettePosY f32 | 轮廓 位置 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_32697F08 | Movie2 u32 | 影片 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_326DB8A0 | UnlockTheme31 u16 | 解锁 主题 31 | 1 | 2 | 未知 | CRC 候选 |
| hash_3297A85E | NpcRole1 u8 | NPC 角色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_32BC8D59 | KimeProbability s8 | Kime 概率 | 1 | 1 | 未知 | CRC 候选 |
| hash_32C0C064 | HeadColor u16 | 头 颜色 | 2 | 2 | 未知 | CRC 候选 |
| hash_32C643E6 | Announce u8 | 公告 | 1 | 1 | 未知 | CRC 候选 |
| hash_3300B271 | InnerType101 u8 | 内侧 类型 101 | 1 | 1 | 未知 | CRC 候选 |
| hash_333EB1F7 | Day2012 u8 | 日 2012 | 1 | 1 | 未知 | CRC 候选 |
| hash_339772B5 | ProbSeptemberNight u16 | 9月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_33A1E925 | SWParts.hshCstringRef | SW 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_33AF13E1 | NpcTalkType u8 | NPC 对话 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_33B6E344 | TopRotateOffsetY f32 | 顶部 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_33DDEFC8 | SelectCalendarEventSeason string64 | 选择 日历 事件 季节 | 1 | 64 | 未知 | CRC 候选 |
| hash_3440CDD7 | IsBeforeUnlock u8 | 是否 之前 解锁 | 3 | 1 | 未知 | CRC 候选 |
| hash_344B17D7 | MaxValue u32 | 最大值 | 5 | 4 | 未知 | CRC 候选 |
| hash_345C6448 | Action3_0.hshCstringRef | 动作 3 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_348D7B06 | ItemMenu.hshCstringRef | 道具 菜单 | 1 | 4 | ItemParam.bcsv: menu_icon_ref_raw | CRC 候选 |
| hash_34A742AD | CraftUnlock.hshCstringRef | 制作 解锁 | 1 | 4 | 未知 | CRC 候选 |
| hash_34BF6B29 | Reward3 u32 | 奖励 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_34C8EED5 | NpcLabel string8 | NPC 标签 | 2 | 8 | 未知 | CRC 候选 |
| hash_34CDBAA5 | FtrType0 u8 | 家具 类型 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_34E5BFBD | FgUniqueID u16 | Fg 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_34EB5DC3 | Color1 u8 | 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_34F3AE0F | Action3_Insurance.hshCstringRef | 动作 3 保险 | 1 | 4 | 未知 | CRC 候选 |
| hash_350E1EF9 | WallItemId u16 | 墙壁 道具 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_352C163E | EnvMapUniqueID u16 | 环境 地图 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_3543C34A | Horizon u8 | 地平线 | 1 | 1 | 未知 | CRC 候选 |
| hash_3574933B | DonateItemFirst u16 | 捐赠 道具 第一 | 1 | 2 | 未知 | CRC 候选 |
| hash_35917E05 | ItemReFabricType.hshCstringRef | 道具 重新 布料 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_3594F417 | CanPutWorkStuff u8 | 可 放置 工作 物品 | 1 | 1 | 未知 | CRC 候选 |
| hash_35AC1BB4 | GrowLevel u8 | 成长 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_35AC2C17 | TimeShcedule.hshCstringRef | 时间 日程 | 1 | 4 | 未知 | CRC 候选 |
| hash_35C78D62 | LookAtType u8 | 注视 在 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_35FD6466 | ForbidOverwrite u8 | 禁止 覆盖 | 1 | 1 | 未知 | CRC 候选 |
| hash_36083C78 | Level u16 | 等级 | 1 | 2 | 未知 | CRC 候选 |
| hash_360B721A | InsectParam.hshCstringRef | 昆虫 参数 | 1 | 4 | 未知 | CRC 候选 |
| hash_3637EBB9 | RefItemUniqueID u16 | 引用 道具 唯一 ID | 5 | 2 | 未知 | CRC 候选 |
| hash_364C173E | FlowFileName string32 | 流程 文件 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_368210C4 | ItemCategory u32 | 道具 分类 | 2 | 4 | 未知 | CRC 候选 |
| hash_36C903A7 | AreaUniqueID u16 | 区域 唯一 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_3711677B | VillagerOpenNum u32 | 岛民 打开 数量 | 1 | 4 | 未知 | CRC 候选 |
| hash_372FC927 | S2Parts.hshCstringRef | S 2 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_3740F340 | ProbFebruayEvening1 u16 | 2月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_374D00DA | PosX s16 | 位置 X | 1 | 2 | 未知 | CRC 候选 |
| hash_374D468E | RightTransOffsetY f32 | 右 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_37571146 | TextKey stringMurmurHash | 文本 键 | 4 | 4 | 未知 | CRC 候选 |
| hash_378611DE | Month2047 u8 | 月份 2047 | 1 | 1 | 未知 | CRC 候选 |
| hash_378B2F14 | AppearStage u8 | 出现 阶段 | 1 | 1 | 未知 | CRC 候选 |
| hash_37A47329 | Month2023 u8 | 月份 2023 | 1 | 1 | 未知 | CRC 候选 |
| hash_37D4E515 | CustomizeSortID u16 | 自定义 排序 ID | 8 | 2 | 未知 | CRC 候选 |
| hash_3805637B | UnlockTheme12 u16 | 解锁 主题 12 | 1 | 2 | 未知 | CRC 候选 |
| hash_3835A9DD | StartMinute u8 | 开始 分钟 | 8 | 1, 3 | 未知 | CRC 候选 |
| hash_383C563F | Rate3_0 s8 | 比率 3 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_384E882C | CheekPinkColorB f32 | 脸颊 粉色 颜色 B | 1 | 4 | 未知 | CRC 候选 |
| hash_38501139 | RailIndex s8 | 轨道 索引 | 1 | 1 | 未知 | CRC 候选 |
| hash_38673A8E | ActionPattern2 u32 | 动作 款式 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_38762EAA | ObjCheckRate f32 | 对象 检查 比率 | 1 | 4 | 未知 | CRC 候选 |
| hash_38954EB6 | LifeMotif u8 | 生活 图案 | 1 | 1 | 未知 | CRC 候选 |
| hash_390F180D | NormalScaleMaskA f32 | 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_3912A854 | LeftTransOffsetZ f32 | 左 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_395B7795 | AccEye u16 | 饰品 眼睛 | 1 | 2 | 未知 | CRC 候选 |
| hash_397B2B54 | UseChimneySmoke u8 | 使用 烟囱 烟雾 | 1 | 1 | 未知 | CRC 候选 |
| hash_39806875 | Day2007 u8 | 日 2007 | 1 | 1 | 未知 | CRC 候选 |
| hash_39873D8F | FurniturePosAngleSub2 u32 | 家具 位置 角度 子 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_39B5A93D | ModelName string32 | 模型 名称 | 16 | 32, 33, 34 | 未知 | CRC 候选 |
| hash_39CB9646 | Material u16 | 材质 | 2 | 2 | 未知 | CRC 候选 |
| hash_39DEDE36 | SerialID s16 | 序列 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_39ED7F5A | Socks u16 | 袜子 | 5 | 2 | 未知 | CRC 候选 |
| hash_3A14DEEA | NodeName string32 | 节点 名称 | 1 | 34 | 未知 | CRC 候选 |
| hash_3A1F9E56 | PeakTransOffsetZ f32 | 峰值 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_3A1FCA06 | Direction s8 | 方向 | 1 | 1 | 未知 | CRC 候选 |
| hash_3A2055D1 | InnerType020 u8 | 内侧 类型 020 | 1 | 1 | 未知 | CRC 候选 |
| hash_3A4245ED | Month2 u8 | 月份 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_3A5C385A | DefaultDoor u16 | 默认 门 | 1 | 2 | 未知 | CRC 候选 |
| hash_3A737394 | ProbJanuaryNight u16 | 1月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_3AB25276 | SkinEdgeColorR f32 | 皮肤 边缘 颜色 R | 1 | 4 | 未知 | CRC 候选 |
| hash_3ACA3C99 | RebodyPattern3LightColor u32 | 主体改造 款式 3 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_3AD82170 | RequestNum3 s8 | 请求 数量 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_3AF6DFE2 | BagID u16 | 包 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_3B13A395 | OT2Index s16 | OT 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_3B27F030 | ArriveDist f32 | 到达 距离 | 1 | 4 | 未知 | CRC 候选 |
| hash_3B7BA91D | PatternKekeEventDay u8 | 款式 Keke 事件 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_3B8583F3 | TargetItems u8 | 目标 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_3B89953C | MaxValue5 u32 | 最大 数值 5 | 1 | 4 | 未知 | CRC 候选 |
| hash_3B94564C | OffsetZ s16 | 偏移 Z | 2 | 2 | 未知 | CRC 候选 |
| hash_3C7FB88F | AttrClearSceneChange u8 | 属性 清除 场景 变更 | 2 | 1 | 未知 | CRC 候选 |
| hash_3C835E2C | NameShort string128 | 名称 短 | 1 | 128 | 未知 | CRC 候选 |
| hash_3CA0FC03 | IsAppearNorth u8 | 是否 出现 北 | 2 | 1 | 未知 | CRC 候选 |
| hash_3CCCA419 | InvalidCard u8 | 无效 卡片 | 1 | 1 | 未知 | CRC 候选 |
| hash_3CCCB782 | MustFtr1 u16 | 必须 家具 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_3CDA3274 | ItemHHADirection u8 | 道具 快乐家协会 方向 | 1 | 1 | 未知 | CRC 候选 |
| hash_3CE2E8D8 | PacketId s32 | 数据包 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_3CF05708 | PolygonLimit u16 | 多边形 限制 | 1 | 2 | 未知 | CRC 候选 |
| hash_3D1AAAAB | Month2036 u8 | 月份 2036 | 1 | 1 | 未知 | CRC 候选 |
| hash_3D38C85C | Month2052 u8 | 月份 2052 | 1 | 1 | 未知 | CRC 候选 |
| hash_3D4F3F42 | CanSell u8 | 可 出售 | 1 | 1 | 未知 | CRC 候选 |
| hash_3D69B890 | RepresentativeItem u16 | 代表 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_3DAD9135 | AttrClearRollback u8 | 属性 清除 回滚 | 2 | 1 | 未知 | CRC 候选 |
| hash_3DC49BC2 | IsCreateBait u8 | 是否 创建 鱼饵 | 1 | 1 | 未知 | CRC 候选 |
| hash_3E01D394 | ProbJanNight u16 | 1月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_3E18FFEB | Rate3 u8 | 比率 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_3E249F92 | RebodyNum1 s8 | 主体改造 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_3E4510FA | EquipRule u16 | 装备 规则 | 2 | 2 | 未知 | CRC 候选 |
| hash_3E78DC38 | FtrPlace u8 | 家具 放置 | 1 | 1 | 未知 | CRC 候选 |
| hash_3E884A6D | SilhouetteID u32 | 轮廓 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_3F45F2BF | DebugName string64 | 调试 名称 | 2 | 64 | 未知 | CRC 候选 |
| hash_3F78D05E | ProbNovemberEvening1 u16 | 11月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_3F7DDAD1 | UnlockTheme38 u16 | 解锁 主题 38 | 1 | 2 | 未知 | CRC 候选 |
| hash_3F858678 | Smartphone u16 | 手机 | 1 | 2 | 未知 | CRC 候选 |
| hash_3FC005F0 | SelectColor u8 | 选择 颜色 | 1 | 1 | 未知 | CRC 候选 |
| hash_3FDEEAB4 | ActionAngle u8 | 动作 角度 | 1 | 2 | 未知 | CRC 候选 |
| hash_3FE43170 | FlagLand s32 | 标志 土地 | 2 | 4 | 未知 | CRC 候选 |
| hash_3FEBC642 | Label string50 | 标签 | 2 | 50 | 未知 | CRC 候选 |
| hash_40104A6C | ProbJanuaryMidnight u16 | 1月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_4026FBE1 | ProbFebruayDaytime u16 | 2月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_4038A881 | E0Parts.hshCstringRef | E 0 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_4045796C | BgCheckType.hshCstringRef | 背景 检查 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_40876B17 | BehaviorType u8 | 行为 类型 | 2 | 1 | 未知 | CRC 候选 |
| hash_40B1F6DA | W3Parts.hshCstringRef | W 3 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_40DFCD36 | PeakTransOffsetX f32 | 峰值 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_4108715D | MuseumBankLimitDeg f32 | 博物馆 银行 限制 角度 | 1 | 4 | 未知 | CRC 候选 |
| hash_4122941D | Stage9 string32 | 阶段 9 | 1 | 34 | 未知 | CRC 候选 |
| hash_413012F7 | HideTmbmCap u8 | 隐藏 Tmbm 帽子 | 1 | 1 | 未知 | CRC 候选 |
| hash_4154052C | OffsetX s16 | 偏移 X | 2 | 2 | 未知 | CRC 候选 |
| hash_415C1158 | LimitNum3 s8 | 限制 数量 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_416EAF25 | FacilityActionType0.hshCstringRef | 设施 动作 类型 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_4171A41D | FlagPlayer s32 | 标志 玩家 | 2 | 4 | 未知 | CRC 候选 |
| hash_41935AE1 | AnimeTypeBook string64 | 动画 类型 书 | 1 | 64 | 未知 | CRC 候选 |
| hash_41977699 | NpcColor u8 | NPC 颜色 | 2 | 1 | 未知 | CRC 候选 |
| hash_41AFE839 | BodyColor u16 | 主体 颜色 | 2 | 2 | 未知 | CRC 候选 |
| hash_41F6F207 | ApproachReward f32 | 接近 奖励 | 1 | 4 | 未知 | CRC 候选 |
| hash_41F881E4 | ReBodyPattern7Color1 u8 | 重新 主体 款式 7 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_422A0706 | Rate1_5 s8 | 比率 1 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_423D1C4D | ClothesFrequencyWear.hshCstringRef | 服装 频率 穿着 | 1 | 4 | 未知 | CRC 候选 |
| hash_425F85D3 | EUfr u8 | E Ufr | 1 | 1 | 未知 | CRC 候选 |
| hash_42739AB0 | UseToolLeft u8 | 使用 工具 左 | 1 | 4 | 未知 | CRC 候选 |
| hash_42AD246A | Misc u8 | 杂项 | 2 | 2, 4 | 未知 | CRC 候选 |
| hash_42BDD56F | DoorMaterial u16 | 门 材质 | 2 | 2 | 未知 | CRC 候选 |
| hash_42C5301B | UnlockTheme10 u16 | 解锁 主题 10 | 1 | 2 | 未知 | CRC 候选 |
| hash_42CD8039 | AITagBitRankC u8 | AI 标签 位 级别 C | 1 | 7 | 未知 | CRC 候选 |
| hash_42E82DED | HasNightLight u8 | 具有 夜间 光照 | 1 | 1 | 未知 | CRC 候选 |
| hash_42F255D5 | 未知 | NPC 行为参数（语义别名：NpcBehaviorParameter） | 2 | 2, 4 | 未知 | 原名未恢复 / row_hypothesis |
| hash_430DBF65 | FlagType u8 | 标志 类型 | 2 | 1 | 未知 | CRC 候选 |
| hash_43403B15 | Day2027 u8 | 日 2027 | 1 | 1 | 未知 | CRC 候选 |
| hash_43507F0D | DragSE.hshCstringRef | 拖动 音效 | 1 | 4 | 未知 | CRC 候选 |
| hash_43513D44 | EndDayN1 u8 | 结束 日 N 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_436259E2 | Day2043 u8 | 日 2043 | 1 | 1 | 未知 | CRC 候选 |
| hash_43D2FB34 | LeftTransOffsetX f32 | 左 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_43D8A434 | HasEigyoLight u8 | 具有 Eigyo 光照 | 1 | 1 | 未知 | CRC 候选 |
| hash_443C0FB7 | LabelLong string64 | 标签 长 | 1 | 64 | 未知 | CRC 候选 |
| hash_44718A37 | FashionThemeFomal u8 | 时尚 主题 正式 | 1 | 1 | 未知 | CRC 候选 |
| hash_44795C13 | NpcRoleNum3 s8 | NPC 角色 数量 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_4509BA24 | CapOff u8 | 帽子 关闭 | 1 | 1 | 未知 | CRC 候选 |
| hash_450D51D9 | ReBodyPattern5Color1 u8 | 重新 主体 款式 5 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_453CEB3E | Action0_6.hshCstringRef | 动作 0 6 | 1 | 4 | 未知 | CRC 候选 |
| hash_454B2ADC | InitLive u8 | 初始化 现场 | 1 | 1 | 未知 | CRC 候选 |
| hash_4556B457 | ItemPlacementKind u8 | 道具 摆放 类别 | 1 | 1 | 未知 | CRC 候选 |
| hash_45CDC12E | UnlockTheme8 u16 | 解锁 主题 8 | 1 | 2 | 未知 | CRC 候选 |
| hash_45F320F2 | Key string64 | 键 | 17 | 64 | 未知 | CRC 候选 |
| hash_45FFEA9A | Frames u16 | 帧 | 2 | 2 | 未知 | CRC 候选 |
| hash_460CE4E2 | MustFtr3 u16 | 必须 家具 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_46489CE7 | HangerInfo u8 | 衣架 信息 | 1 | 1 | 未知 | CRC 候选 |
| hash_46C45907 | Value u16 | 数值 | 1 | 2 | 未知 | CRC 候选 |
| hash_46DF4305 | RemoveEventObj u8 | 移除 事件 对象 | 1 | 1 | 未知 | CRC 候选 |
| hash_46E66708 | ItemFrom string32 | 道具 来自 | 2 | 32, 35 | 未知 | CRC 候选 |
| hash_46E8C73E | StaticField u8 | 静态 场景 | 1 | 3 | 未知 | CRC 候选 |
| hash_46F656CE | EndDayS6 u8 | 结束 日 S 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_472724ED | CanBury u8 | 可 埋藏 | 2 | 1 | 未知 | CRC 候选 |
| hash_4765B463 | WatchPointID u16 | 观察 点 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_478B74E4 | CraftRecipeSelectSeasonType.hshCstringRef | 制作 配方 选择 季节 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_478DD182 | AccessoryID u16 | 饰品 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_47AD4181 | NormalScaleNA f32 | 法线 缩放 NA | 1 | 4 | 未知 | CRC 候选 |
| hash_47DAF9CB | Month2016 u8 | 月份 2016 | 1 | 1 | 未知 | CRC 候选 |
| hash_47F8F099 | FashionThemeFairyland u8 | 时尚 主题 仙境 | 1 | 1 | 未知 | CRC 候选 |
| hash_4813219E | ReBodyPattern3Color1 u8 | 重新 主体 款式 3 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_481FD496 | ActionSet1.hshCstringRef | 动作 集合 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_4875E383 | Bush_N u8 | 灌木 N | 1 | 1 | 未知 | CRC 候选 |
| hash_48A92C68 | Movie0 u32 | 影片 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_48ADEBC0 | UnlockTheme33 u16 | 解锁 主题 33 | 1 | 2 | 未知 | CRC 候选 |
| hash_48DDA35F | UnlockTheme1 u16 | 解锁 主题 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_48E540D2 | NormalScaleBottomsG f32 | 法线 缩放 下装 G | 1 | 4 | 未知 | CRC 候选 |
| hash_48E6451E | Action1_2.hshCstringRef | 动作 1 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_48EF0398 | ResName string64 | 资源 名称 | 9 | 64, 65, 66, 67 | 未知 | CRC 候选 |
| hash_4906E466 | IncludeReadyEvent u8 | 包含 就绪 事件 | 1 | 1 | 未知 | CRC 候选 |
| hash_49129B27 | CanSetItem u8 | 可 集合 道具 | 1 | 1 | 未知 | CRC 候选 |
| hash_49295020 | Scale.hshCstringRef | 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_4932F93E | SuccessResult.hshCstringRef | 成功 结果 | 1 | 4 | 未知 | CRC 候选 |
| hash_493EED57 | PartsKind.hshCstringRef | 部件 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_497AC4D6 | CanChaseForInsect u8 | 可 追逐 用于 昆虫 | 1 | 1 | 未知 | CRC 候选 |
| hash_49803457 | MoveAs u8 | 移动 As | 1 | 1 | 未知 | CRC 候选 |
| hash_498A840D | Stage9Hash stringMurmurHash | 阶段 9 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_499E42F9 | ArchUniqueID u16 | 拱门 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_49C0E111 | InnerType121 u8 | 内侧 类型 121 | 1 | 1 | 未知 | CRC 候选 |
| hash_49C2181B | Param2 u8 | 参数 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_49CC96D0 | ValidEffect u8 | 有效 效果 | 1 | 4 | 未知 | CRC 候选 |
| hash_49DC8060 | Day2056 u8 | 日 2056 | 1 | 1 | 未知 | CRC 候选 |
| hash_49FEE297 | Day2032 u8 | 日 2032 | 1 | 1 | 未知 | CRC 候选 |
| hash_4AB9B98A | StampRackNameTextLabel string32 | 印章 架子 名称 文本 标签 | 1 | 32 | 未知 | CRC 候选 |
| hash_4AE88C28 | EUru u8 | E Uru | 1 | 1 | 未知 | CRC 候选 |
| hash_4B072728 | StrSortIdUSfr u16 | 字符串 排序 ID U Sfr | 1 | 2 | 未知 | CRC 候选 |
| hash_4B11B715 | UnlockTheme26 u16 | 解锁 主题 26 | 1 | 2 | 未知 | CRC 候选 |
| hash_4B22396C | OutdoorRebodyNum2 s8 | 室外 主体改造 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_4B97CDAB | HeightAutoInvalid u8 | 高度 自动 无效 | 1 | 1 | 未知 | CRC 候选 |
| hash_4B9C4229 | ResourceName string64 | 资源 名称 | 11 | 64, 66 | 未知 | CRC 候选 |
| hash_4BCCC3F3 | SortIdEUes u16 | 排序 ID E Ues | 1 | 2 | 未知 | CRC 候选 |
| hash_4BCCCE37 | UmbrellaWherearen u16 | 伞 度假岛 | 1 | 2 | 未知 | CRC 候选 |
| hash_4BDCE2FF | Rate2_1 s8 | 比率 2 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_4BE509DE | Amiibo u16 | amiibo | 1 | 2 | 未知 | CRC 候选 |
| hash_4C24F1CF | DefaultValue u32 | 默认 数值 | 5 | 4 | 未知 | CRC 候选 |
| hash_4C777E9E | ResNameReplaceField string32 | 资源 名称 替换 场景 | 1 | 32 | 未知 | CRC 候选 |
| hash_4C8935EC | WeekNorth u8 | 周 北 | 1 | 1 | 未知 | CRC 候选 |
| hash_4C8D39F8 | ApproachRate u16 | 接近 比率 | 1 | 2 | 未知 | CRC 候选 |
| hash_4C9BA961 | MultiHoldMaxNum s16 | 最大堆叠数量 | 1 | 2 | ItemKind.bcsv: multi_hold_max_raw | CRC 候选 |
| hash_4CE6F1A3 | ReBodyPattern1Color1 u8 | 重新 主体 款式 1 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_4CE98793 | HavokResName string64 | Havok 资源 名称 | 2 | 64 | 未知 | CRC 候选 |
| hash_4D4E9D26 | SkinBaseColorR f32 | 皮肤 基础 颜色 R | 1 | 4 | 未知 | CRC 候选 |
| hash_4D642049 | Month2003 u8 | 月份 2003 | 1 | 1 | 未知 | CRC 候选 |
| hash_4D655154 | SLinkType.hshCstringRef | S 链接 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_4D8D53BA | PosZ s16 | 位置 Z | 1 | 2 | 未知 | CRC 候选 |
| hash_4D9888D3 | Strength u8 | 强度 | 1 | 4 | 未知 | CRC 候选 |
| hash_4DBB249E | ElectionRate1 u8 | 选举 比率 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_4DC59A5A | NormalScaleLB f32 | 法线 缩放 LB | 1 | 4 | 未知 | CRC 候选 |
| hash_4E3EE3DE | NpcResName string64 | NPC 资源 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_4E46C669 | PropertyID u16 | 属性 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_4E5CD9F3 | PlayerFlagKeyOFF string32 | 玩家 标志 键 关闭 | 1 | 32 | 未知 | CRC 候选 |
| hash_4E718582 | FloorItemId u16 | 地板 道具 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_4E7F3849 | Reward1 u32 | 奖励 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_4EC849EC | ToolRightModelName string20 | 工具 右 模型 名称 | 1 | 20 | 未知 | CRC 候选 |
| hash_4F0B2BE7 | ForShareHouse u8 | 用于 共享 房屋 | 1 | 1 | 未知 | CRC 候选 |
| hash_4F6DB088 | ProbJulyNight u16 | 7月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_4F7333FD | FlagsNetAccess u8 | 标志 网络 访问 | 1 | 1 | 未知 | CRC 候选 |
| hash_4FD5526A | UnlockTheme19 u16 | 解锁 主题 19 | 1 | 2 | 未知 | CRC 候选 |
| hash_4FF4A9E3 | ProbJulyMidnight u16 | 7月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_4FFDA705 | TshirtsLNormalScaleMaskG f32 | T恤 L 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_5013C55C | FacilityActionType3.hshCstringRef | 设施 动作 类型 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_5032EF59 | ItemMessageCategory.hshCstringRef | 道具 消息 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_5039C84D | N4Parts.hshCstringRef | N 4 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_504428B5 | ArchiveIndex u16 | 归档 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_50650A2B | DonateItemSecond u16 | 捐赠 道具 第二 | 1 | 2 | 未知 | CRC 候选 |
| hash_5092CA25 | ProbJunMorningAndEvening u16 | 6月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_509FA8E8 | Rate1_6 s8 | 比率 1 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_50AA5754 | ReFabricPattern2Color0 u8 | 重新 布料 款式 2 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_50EDD045 | BaseName string32 | 基础 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_510F21DC | ItemPriorityPlace.hshCstringRef | 道具 优先级 放置 | 1 | 4 | 未知 | CRC 候选 |
| hash_5140E4B4 | AttrClearGlowUpTiming u8 | 属性 清除 发光 上 时机 | 7 | 1 | 未知 | CRC 候选 |
| hash_5195E4BD | FloorScale f32 | 地板 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_51BCEDFA | ProbJanMorningAndEvening u16 | 1月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_51D7F60C | Day2040 u8 | 日 2040 | 1 | 1 | 未知 | CRC 候选 |
| hash_51E489D9 | PenColor4 u16 | 笔 颜色 4 | 2 | 2 | 未知 | CRC 候选 |
| hash_51E492AA | EndDayN2 u8 | 结束 日 N 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_51F594FB | Day2024 u8 | 日 2024 | 1 | 1 | 未知 | CRC 候选 |
| hash_5218C48C | CanUsePhotoStudio u8 | 可 使用 照片 工作室 | 1 | 1 | 未知 | CRC 候选 |
| hash_524596A2 | BottomsID u16 | 下装 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_5248F261 | S3Parts.hshCstringRef | S 3 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_5255A95F | InnerType003 u8 | 内侧 类型 003 | 1 | 1 | 未知 | CRC 候选 |
| hash_5267CE60 | GE2Index s16 | GE 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_5270EB75 | ItemKind.hshCstringRef | 道具类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_52852838 | Month2058 u8 | 月份 2058 | 1 | 1 | 未知 | CRC 候选 |
| hash_529EEEAE | Book1 u32 | 书 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_52ADD71D | FashionThemeDaily u8 | 时尚 主题 每日 | 1 | 1 | 未知 | CRC 候选 |
| hash_52C75C1E | TkkSkipBirthday.hshCstringRef | Tkk 跳过 生日 | 1 | 4 | 未知 | CRC 候选 |
| hash_52F0BADD | CalendarEventKey string32 | 日历 事件 键 | 1 | 32 | 未知 | CRC 候选 |
| hash_52F5D4E9 | Stage1 string32 | 阶段 1 | 1 | 32 | 未知 | CRC 候选 |
| hash_52FDF18D | TvProgram1 u32 | 电视 程序 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_53071B97 | RightRotateOffsetZ f32 | 右 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_53520A06 | RecommendPattern u8 | 推荐 款式 | 1 | 1 | 未知 | CRC 候选 |
| hash_539CC0CA | DistantViewUniqueID u16 | 远处 视图 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_53A4C228 | IsHide4 u8 | 是否 隐藏 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_53BB0673 | SeatSpIndex s8 | 座位 Sp 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_53D9C19F | Reverberation u8 | 混响 | 1 | 1 | 未知 | CRC 候选 |
| hash_53E9BEB6 | LimitNum0 s8 | 限制 数量 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_54062DA5 | Amount2 u16 | 数量 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_54418147 | Action0_5.hshCstringRef | 动作 0 5 | 1 | 4 | 未知 | CRC 候选 |
| hash_5443F920 | EndDayS5 u8 | 结束 日 S 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_545F8769 | ReFabricPattern0Color0 u8 | 重新 布料 款式 0 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_546C2339 | StrSortIdEUfr u16 | 字符串 排序 ID E Ufr | 1 | 2 | 未知 | CRC 候选 |
| hash_54706054 | UniqueID u16 | 唯一ID | 199 | 2, 4 | ItemAct.bcsv: id; ItemClothGroup.bcsv: id; ItemColor.bcsv: id; ItemFilter.bcsv: id; ItemKind.bcsv: id; ItemParam.bcsv: item_id; ItemSize.bcsv: id; ItemUIContextMenu.bcsv: id; ItemUIFurnitureCategory.bcsv: id | CRC 候选 |
| hash_548A7EDA | TWzh u8 | T Wzh | 1 | 1 | 未知 | CRC 候选 |
| hash_54A1DF24 | PrioMethod.hshCstringRef | 优先级 方法 | 1 | 4 | 未知 | CRC 候选 |
| hash_54A7C7E2 | SortIdUSes u16 | 排序 ID U Ses | 1 | 2 | 未知 | CRC 候选 |
| hash_54AB2C62 | HobbyFitnessLevel u8 | 爱好 健身 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_5504464E | ItemRandomColorGroup.hshCstringRef | 道具 随机 颜色 分组 | 1 | 4 | 未知 | CRC 候选 |
| hash_555442AA | EquipOnlyOutdoor u8 | 装备 仅 室外 | 1 | 1 | 未知 | CRC 候选 |
| hash_556F5625 | Month2015 u8 | 月份 2015 | 1 | 1 | 未知 | CRC 候选 |
| hash_558685C5 | KRko u8 | K Rko | 1 | 1 | 未知 | CRC 候选 |
| hash_55C343C4 | AnimeTypeFirewood string64 | 动画 类型 柴火 | 1 | 64 | 未知 | CRC 候选 |
| hash_560004D4 | Stage3 string32 | 阶段 3 | 1 | 32 | 未知 | CRC 候选 |
| hash_56612ACF | ProbOctoberMorning u16 | 10月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_566F1D31 | InitRemakeId u8 | 初始化 改造 ID | 1 | 1 | 未知 | CRC 候选 |
| hash_5681A1C3 | HideHUD u8 | 隐藏 HUD | 1 | 1 | 未知 | CRC 候选 |
| hash_56CCF3FD | NpcRoleNum0 s8 | NPC 角色 数量 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_56EE0925 | LandTempFlagKeyOFF string32 | 土地 临时 标志 键 关闭 | 1 | 32 | 未知 | CRC 候选 |
| hash_572A8FE9 | PrioLevel u8 | 优先级 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_57C98E5B | FootColor u16 | 脚 颜色 | 2 | 2 | 未知 | CRC 候选 |
| hash_57D5055C | ProbAprilEvening1 u16 | 4月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_57E889B2 | SmartphoneRemakeCommonPattern s16 | 手机 改造 通用 款式 | 2 | 2 | 未知 | CRC 候选 |
| hash_58102055 | EmoticonTool.hshCstringRef | 表情 工具 | 1 | 4 | 未知 | CRC 候选 |
| hash_5819934D | Month2029 u8 | 月份 2029 | 1 | 1 | 未知 | CRC 候选 |
| hash_5842957A | ProbMayMorning u16 | 5月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_584D684A | EndMoS3 u8 | 结束 月份 S 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_58AE1FAE | CheekPinkColorR f32 | 脸颊 粉色 颜色 R | 1 | 4 | 未知 | CRC 候选 |
| hash_58AFF4FB | ItemTableId u16 | 道具 表 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_58DA05ED | WaterCheck u8 | 水 检查 | 1 | 2 | 未知 | CRC 候选 |
| hash_5941F72E | ReFabricPattern6Color0 u8 | 重新 布料 款式 6 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_59485FAD | ActionRange.hshCstringRef | 动作 范围 | 1 | 4 | 未知 | CRC 候选 |
| hash_5962BEEF | ActionSet2.hshCstringRef | 动作 集合 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_59694D11 | Rate2_2 s8 | 比率 2 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_5971A42E | WaitFrame u32 | 等待 帧 | 2 | 4 | 未知 | CRC 候选 |
| hash_598463C8 | RequiredNum u32 | 必需 数量 | 1 | 4 | 未知 | CRC 候选 |
| hash_59979682 | OutdoorRebodyNum1 s8 | 室外 主体改造 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_599AB542 | OnepieceNNormalScaleMaskA f32 | 连衣裙 N 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_599B2F67 | Action1_1.hshCstringRef | 动作 1 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_59D78633 | TriangleType.hshCstringRef | 三角形 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_5A52C5F4 | SkinEdgeColorB f32 | 皮肤 边缘 颜色 B | 1 | 4 | 未知 | CRC 候选 |
| hash_5AA21D87 | Hobby2 u32 | 爱好 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_5AAFBFA6 | ProbNovDaytime u16 | 11月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_5AEBBFB5 | TextureResName string64 | 纹理 资源 名称 | 1 | 66 | 未知 | CRC 候选 |
| hash_5B0802F1 | ProbNovNight u16 | 11月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_5B1E7493 | Stage5 string32 | 阶段 5 | 1 | 32 | 未知 | CRC 候选 |
| hash_5B4B4D79 | Day2031 u8 | 日 2031 | 1 | 1 | 未知 | CRC 候选 |
| hash_5B589691 | MovePatternSet s32 | 移动 款式 集合 | 1 | 4 | 未知 | CRC 候选 |
| hash_5B692F8E | Day2055 u8 | 日 2055 | 1 | 1 | 未知 | CRC 候选 |
| hash_5B6D5751 | 未知 | 玩家待机移动标志（语义别名：PlayerIdleMoveFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_5B754EFF | InnerType122 u8 | 内侧 类型 122 | 1 | 1 | 未知 | CRC 候选 |
| hash_5B77B7F5 | Param1 u8 | 参数 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_5B7CA0B2 | SeriesId u8 | 系列 ID | 1 | 1 | 未知 | CRC 候选 |
| hash_5B8BE707 | Shop_N u8 | 商店 N | 1 | 1 | 未知 | CRC 候选 |
| hash_5BA37406 | NpcSpLabel string32 | NPC Sp 标签 | 1 | 32 | 未知 | CRC 候选 |
| hash_5BAF48A0 | NpcNoEntry u8 | NPC 无 入口 | 1 | 1 | 未知 | CRC 候选 |
| hash_5C1C3044 | BridgeTypeId u16 | 桥梁 类型 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_5C1FDD8E | Material2 u16 | 材质 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_5C28C4DB | BridgeTypeNameJp string32 | 桥梁 类型 名称 Jp | 1 | 32 | 未知 | CRC 候选 |
| hash_5C56D13A | DesignWinter2 u16 | 设计 冬季 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_5C835193 | Day2018 u8 | 日 2018 | 1 | 1 | 未知 | CRC 候选 |
| hash_5CB71135 | ProbFebDaytime u16 | 2月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_5CF3A1A1 | WatchPosZ f32 | 观察 位置 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_5D04A3BE | TshirtsHNormalScaleMaskG f32 | T恤 H 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_5D389FBF | CanPut u8 | 可 放置 | 1 | 1 | 未知 | CRC 候选 |
| hash_5D4EF312 | OpenAchievementCount u16 | 打开 成就 计数 | 1 | 2 | 未知 | CRC 候选 |
| hash_5D8D4B8C | Desert u8 | 沙漠 | 1 | 1 | 未知 | CRC 候选 |
| hash_5D966107 | PeakRotateOffsetZ f32 | 峰值 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_5DB42713 | ReFabricPattern4Color0 u8 | 重新 布料 款式 4 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_5DCF7B24 | 未知 | 玩家状态保留标志（语义别名：PlayerStateRetentionFlag） | 1 | 1 | 未知 | 原名未恢复 / native_field_read |
| hash_5DEA03C0 | EndMoN4 u8 | 结束 月份 N 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_5E1B2E16 | ItemKind5 u16 | 道具 类别 5 | 1 | 2 | 未知 | CRC 候选 |
| hash_5E2AA87D | AnimeTypeUmbrella string64 | 动画 类型 伞 | 1 | 64 | 未知 | CRC 候选 |
| hash_5E7A33B5 | RefSoundAttributeID u16 | 引用 声音 属性 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_5E853057 | ProbSepDaytime u16 | 9月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_5E980E4D | WeatherPattern3 u16 | 天气 款式 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_5EA2E0CD | Stage8Hash stringMurmurHash | 阶段 8 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_5EF56066 | KO1Index s16 | KO 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_5EF86F1F | AiEquipTaste1 u32 | AI 装备 风格 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_5F0E8B70 | ElectionRate2 u8 | 选举 比率 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_5F384120 | TextLotId s16 | 文本 抽选 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_5F405BFB | BoardColorID u32 | 公告板 颜色 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_5F4976AC | CloseItemUniqueId s32 | 关闭 道具 唯一 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_5F77B61A | AttrClearCulling u8 | 属性 清除 剔除 | 4 | 1 | 未知 | CRC 候选 |
| hash_5FAD728F | StartDayNorth u16 | 开始 日 北 | 1 | 2 | 未知 | CRC 候选 |
| hash_5FC0D92D | HaniwaPartsType.hshCstringRef | 陶俑 部件 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_5FD18FA7 | Month2000 u8 | 月份 2000 | 1 | 1 | 未知 | CRC 候选 |
| hash_5FEBA4AE | Stage7 string32 | 阶段 7 | 1 | 32 | 未知 | CRC 候选 |
| hash_600D479E | ProbJanuaryEvening1 u16 | 1月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_604DF507 | MoveASType string32 | 移动 AS 类型 | 2 | 32 | 未知 | CRC 候选 |
| hash_60680C93 | HouseDoorStep.hshCstringRef | 房屋 门 步骤 | 1 | 4 | 未知 | CRC 候选 |
| hash_607CCFCE | ArtObjNum u16 | 艺术品 对象 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_60836EAA | PriorityReward u16 | 优先级 奖励 | 1 | 2 | 未知 | CRC 候选 |
| hash_60C99A5E | NpcOutfit.hshCstringRef | NPC 穿搭 | 1 | 4 | 未知 | CRC 候选 |
| hash_60DA5FEF | NetPlaySelect u8 | 网络 播放 选择 | 1 | 1 | 未知 | CRC 候选 |
| hash_60E4E478 | ReactionTalkKey string25 | 反应 对话 键 | 1 | 25 | 未知 | CRC 候选 |
| hash_60EDACD3 | NormalScaleNR f32 | 法线 缩放 NR | 1 | 4 | 未知 | CRC 候选 |
| hash_612BC6CF | UniqueID u32 | 唯一ID | 4 | 4 | 未知 | CRC 候选 |
| hash_613C3C15 | LookAtType.hshCstringRef | 注视 在 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_61501334 | Fog_N u8 | 雾 N | 1 | 1 | 未知 | CRC 候选 |
| hash_61758F82 | BcatLevelReady u8 | Bcat 等级 就绪 | 1 | 1 | 未知 | CRC 候选 |
| hash_617794FF | InvisibleEarL u8 | 不可见 耳朵 L | 1 | 1 | 未知 | CRC 候选 |
| hash_617FF43E | Material3 u16 | 材质 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_61E37823 | Day2008 u8 | 日 2008 | 1 | 1 | 未知 | CRC 候选 |
| hash_622C3346 | CanHide u8 | 可 隐藏 | 1 | 1 | 未知 | CRC 候选 |
| hash_623DC307 | Nature u8 | 自然 | 1 | 2 | 未知 | CRC 候选 |
| hash_627277E6 | Timezone u8 | 时区 | 1 | 1 | 未知 | CRC 候选 |
| hash_6278197B | IsNecessary2_2 u8 | 是否 必要 2 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_62A2ABE9 | UnlockActionFlag string33 | 解锁 动作 标志 | 2 | 34, 36 | 未知 | CRC 候选 |
| hash_62B1A617 | Month2010 u8 | 月份 2010 | 1 | 1 | 未知 | CRC 候选 |
| hash_62C23ED0 | ReFabricPattern0VisibleOff u8 | 重新 布料 款式 0 可见 关闭 | 1 | 1 | 未知 | CRC 候选 |
| hash_62FF0C3D | MannequinUsage.hshCstringRef | 人体模特 用途 | 1 | 4 | 未知 | CRC 候选 |
| hash_630A25B4 | HobbyPlayLevel u8 | 爱好 播放 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_630F2B53 | 未知 | NPC 交互目标动作名称（语义别名：NpcInteractionTargetActionName） | 1 | 67 | 未知 | 原名未恢复 / native_behavior |
| hash_632E952F | TopTransOffsetZ f32 | 顶部 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_637B07A6 | ItemKind4 u16 | 道具 类别 4 | 1 | 2 | 未知 | CRC 候选 |
| hash_638671F9 | JPja u8 | J Pja | 1 | 1 | 未知 | CRC 候选 |
| hash_638D595D | PrioMethod u8 | 优先级 方法 | 1 | 1 | 未知 | CRC 候选 |
| hash_63947BD7 | FacilityActionType6.hshCstringRef | 设施 动作 类型 6 | 1 | 4 | 未知 | CRC 候选 |
| hash_63A46970 | 未知 | 留言卡可选颜色或样式（语义别名：MessageCardOptionalColorOrStyle） | 1 | 2 | 未知 | 原名未恢复 / row_hypothesis |
| hash_63C4B827 | Param1.hshCstringRef | 参数 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_63C52AF5 | NpcSynchroActionAsName string64 | NPC 同步 动作 As 名称 | 2 | 67 | 未知 | CRC 候选 |
| hash_63D92908 | TshirtsNNormalScaleMaskB f32 | T恤 N 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_63F77486 | 未知 | 玩家状态更新条件（语义别名：PlayerStateUpdateCondition） | 1 | 1 | 未知 | 原名未恢复 / native_field_read |
| hash_63F827FD | WeatherPattern2 u16 | 天气 款式 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_64330CB0 | AppearArea.hshCstringRef | 出现 区域 | 3 | 4 | 未知 | CRC 候选 |
| hash_647A321A | IsHide1 u8 | 是否 隐藏 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_649ED9AE | NpcRoleSelectMethod.hshCstringRef | NPC 角色 选择 方法 | 1 | 4 | 未知 | CRC 候选 |
| hash_64B8FFF8 | ColorIndex s8 | 颜色 索引 | 2 | 1 | 未知 | CRC 候选 |
| hash_64BC65E7 | InstrumentsType.hshCstringRef | 乐器 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_6510A4FE | IsEquipCeremony u8 | 是否 装备 仪式 | 1 | 1 | 未知 | CRC 候选 |
| hash_65270095 | ProbJanuaryDaytime u16 | 1月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_65503F9F | ParentItemName u16 | 父级 道具 名称 | 1 | 2 | 未知 | CRC 候选 |
| hash_655E327E | ProbAprilDaytime u16 | 4月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_657550B3 | SubordinateReward u16 | 下级 奖励 | 1 | 2 | 未知 | CRC 候选 |
| hash_6579BAFD | Month2039 u8 | 月份 2039 | 1 | 1 | 未知 | CRC 候选 |
| hash_65A40722 | FieldPresetFile string64 | 场景 预设 文件 | 1 | 64 | 未知 | CRC 候选 |
| hash_65A97FAB | PlacementKind.hshCstringRef | 摆放 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_65D009E1 | PhotoStudioRoomNo.hshCstringRef | 照片 工作室 房间 无 | 1 | 4 | 未知 | CRC 候选 |
| hash_65D43E2B | ProbMayEvening2 u16 | 5月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_65F8C085 | WalkWatchOffsetZ f32 | 行走 观察 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_65FD6B0D | 未知 | 玩家特殊状态标志（语义别名：PlayerSpecialStateFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_6609063E | Day2045 u8 | 日 2045 | 1 | 1 | 未知 | CRC 候选 |
| hash_6615674F | InnerType132 u8 | 内侧 类型 132 | 1 | 1 | 未知 | CRC 候选 |
| hash_662B64C9 | Day2021 u8 | 日 2021 | 1 | 1 | 未知 | CRC 候选 |
| hash_6654378D | FactoryType.hshCstringRef | 工厂 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_66B4A4C1 | SPWeather_N u8 | SP 天气 N | 1 | 1 | 未知 | CRC 候选 |
| hash_66F0052F | NotWithTitle u8 | 非 带有 标题 | 1 | 1 | 未知 | CRC 候选 |
| hash_673446C4 | FU2Index s16 | FU 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_674158DA | Rate1_3 s8 | 比率 1 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_675CA211 | EndHour u8 | 结束 小时 | 3 | 1 | 未知 | CRC 候选 |
| hash_67850558 | RainEquipment u8 | 雨 Equipment | 1 | 1 | 未知 | CRC 候选 |
| hash_679E3850 | CancelEDay u8 | 取消 E 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_67C63FCC | Action0_0.hshCstringRef | 动作 0 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_67EF88B7 | StrSortIdEUnl u16 | 字符串 排序 ID E Unl | 1 | 2 | 未知 | CRC 候选 |
| hash_680F7F95 | Month2005 u8 | 月份 2005 | 1 | 1 | 未知 | CRC 候选 |
| hash_683B0A91 | CapResName string32 | 帽子 资源 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_6841B0C2 | ProbSeptemberMorning u16 | 9月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_68460C05 | ScaleOffset f32 | 缩放 偏移 | 1 | 4 | 未知 | CRC 候选 |
| hash_6849DAB1 | RefabricNum3 s8 | 布料改造 数量 3 | 1 | 3 | 未知 | CRC 候选 |
| hash_68832F05 | StrSortIdUSen u16 | 字符串 排序 ID U Sen | 1 | 2 | 未知 | CRC 候选 |
| hash_68BED0EF | BaseColorB f32 | 基础 颜色 B | 2 | 4 | 未知 | CRC 候选 |
| hash_68CF5938 | BridgeTypeName string32 | 桥梁 类型 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_68D07B42 | ElectionRate7 u8 | 选举 比率 7 | 1 | 1 | 未知 | CRC 候选 |
| hash_68D62CA8 | ClothesTemporarilyCreate.hshCstringRef | 服装 临时 创建 | 1 | 4 | 未知 | CRC 候选 |
| hash_68DAF155 | EnableRodCloth u8 | 启用 钓竿 衣物 | 1 | 1 | 未知 | CRC 候选 |
| hash_68DB76C2 | BreakDamage u16 | Break Damage | 1 | 2 | 未知 | CRC 候选 |
| hash_690E3379 | ClothGroup.hshCstringRef | 衣物 分组 | 1 | 4 | ItemParam.bcsv: cloth_group_ref_raw | CRC 候选 |
| hash_6943E8AD | StartMonthSouth u16 | 开始 月份 南 | 1 | 2 | 未知 | CRC 候选 |
| hash_69660415 | Amount3 u16 | 数量 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_6971370A | WindDirection.hshCstringRef | 风 方向 | 1 | 4 | 未知 | CRC 候选 |
| hash_69834AB9 | NpcEnd u8 | NPC 结束 | 1 | 1 | 未知 | CRC 候选 |
| hash_699B4124 | Room1.hshCstringRef | 房间 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_69A9BB3C | CastLabel u8 | 出场 标签 | 1 | 1 | 未知 | CRC 候选 |
| hash_69B161C4 | Label string30 | 标签 | 1 | 30 | 未知 | CRC 候选 |
| hash_6A1C91EC | Action1_4.hshCstringRef | 动作 1 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_6A1EBB49 | ProbHarvestDaytime u16 | 收获 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_6A34F3F2 | EndMoN1 u8 | 结束 月份 N 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_6AA33BF0 | Name u16 | 名称 | 1 | 2 | 未知 | CRC 候选 |
| hash_6AB4B6FB | EffectAttribute u16 | 效果 属性 | 2 | 2 | 未知 | CRC 候选 |
| hash_6AC5A6DF | BuryItem u16 | 埋藏 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_6AED60AA | ProbOctMorningAndEvening u16 | 10月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_6B0589C4 | IsSlowDownInSwingAnim u8 | 是否 慢 下 内 摆动 动画 | 1 | 1 | 未知 | CRC 候选 |
| hash_6B3738E0 | WeatherPattern u16 | 天气 款式 | 1 | 2 | 未知 | CRC 候选 |
| hash_6B749E8A | ItemRemakeType.hshCstringRef | 道具 改造 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_6B7B63B2 | GardenEdit u16 | Garden 编辑 | 1 | 2 | 未知 | CRC 候选 |
| hash_6BCF870D | InterestEndModeType u8 | 兴趣 结束 模式 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_6C244255 | SharedNPCLabel string8 | Shared NPC 标签 | 1 | 8 | 未知 | CRC 候选 |
| hash_6C66EA56 | ProbNovemberNight u16 | 11月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_6C6FDB31 | NpcFtrActionAsName string64 | NPC 家具 动作 As 名称 | 3 | 64 | 未知 | CRC 候选 |
| hash_6C95BD4B | Day2034 u8 | 日 2034 | 1 | 1 | 未知 | CRC 候选 |
| hash_6CB7DFBC | Day2050 u8 | 日 2050 | 1 | 1 | 未知 | CRC 候选 |
| hash_6CE1D85C | ToolLeftModelName string20 | 工具 左 模型 名称 | 1 | 20 | 未知 | CRC 候选 |
| hash_6D294255 | HeredityC u8 | 继承 C | 1 | 1 | 未知 | CRC 候选 |
| hash_6D4BD7DA | Effect.hshCstringRef | 效果 | 1 | 4 | 未知 | CRC 候选 |
| hash_6D932B1B | MainCatalogOpenItem u16 | 主要 目录 打开 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_6E1AC981 | FieldData string32 | 场景 数据 | 1 | 32 | 未知 | CRC 候选 |
| hash_6EFC082C | FloorHeight f32 | 地板 高度 | 2 | 4 | 未知 | CRC 候选 |
| hash_6F307274 | SortIdEUde u16 | 排序 ID E Ude | 1 | 2 | 未知 | CRC 候选 |
| hash_6F3580EF | InnerType013 u8 | 内侧 类型 013 | 1 | 1 | 未知 | CRC 候选 |
| hash_6F939878 | EndMoS6 u8 | 结束 月份 S 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_6F9DD83D | TvProgram0 u32 | 电视 程序 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_6FA9FF60 | ProbDecemberMorning u16 | 12月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_6FE50188 | Month2048 u8 | 月份 2048 | 1 | 1 | 未知 | CRC 候选 |
| hash_6FE9A411 | ProbJulyEvening1 u16 | 7月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_6FFEC71E | Book0 u32 | 书 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_700409F9 | Month2013 u8 | 月份 2013 | 1 | 1 | 未知 | CRC 候选 |
| hash_70216BFA | AnimeTypeFood string64 | 动画 类型 食物 | 1 | 64 | 未知 | CRC 候选 |
| hash_705A5D0B | RolePriority u8 | 角色 优先级 | 1 | 3 | 未知 | CRC 候选 |
| hash_70703269 | EventType.hshCstringRef | 事件 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_707E79FF | FossilObjNum u16 | 化石 对象 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_70CDB695 | IsNecessary2_1 u8 | 是否 必要 2 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_70E08990 | ProbFebruayEvening2 u16 | 2月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_70E19913 | ItemMailAttachCategory.hshCstringRef | 道具 Mail Attach 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_70ED3C5E | RightTransOffsetZ f32 | 右 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_7128A6FC | EndDayS3 u8 | 结束 日 S 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_712C43A7 | HouseDoorAnim.hshCstringRef | 房屋 门 动画 | 1 | 4 | 未知 | CRC 候选 |
| hash_714D3F2E | SeaType.hshCstringRef | Sea 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_718B024D | Price s32 | 价格 | 3 | 4 | 未知 | CRC 候选 |
| hash_71BF253B | BromideItemID s16 | Bromide 道具 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_71DF75A1 | ResourceNameSp5 string33 | 资源 名称 Sp 5 | 1 | 33 | 未知 | CRC 候选 |
| hash_7215B154 | LandFlagKeyON string32 | 土地 标志 键 开启 | 2 | 32 | 未知 | CRC 候选 |
| hash_721730B8 | EntryName string32 | 入口 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_721FE9FC | SafeRangeType.hshCstringRef | Safe 范围 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_72573F73 | MysteryTourFieldUniqueID u16 | 神秘 旅行 场景 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_72B57BDA | UnlockTheme18 u16 | 解锁 主题 18 | 1 | 2 | 未知 | CRC 候选 |
| hash_72B9D25E | Param2.hshCstringRef | 参数 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_72E911AE | FacilityActionType5.hshCstringRef | 设施 动作 类型 5 | 1 | 4 | 未知 | CRC 候选 |
| hash_730CEFC8 | BeesRunAway u8 | Bees Run Away | 1 | 1 | 未知 | CRC 候选 |
| hash_7328DE13 | FacilityInsuranceAction.hshCstringRef | 设施 保险 动作 | 1 | 4 | 未知 | CRC 候选 |
| hash_736ADCA8 | FlagAnim u16 | 标志 动画 | 1 | 2 | 未知 | CRC 候选 |
| hash_73A932AE | EventEnd u8 | 事件 结束 | 1 | 1 | 未知 | CRC 候选 |
| hash_73E2B4E4 | DefaultAccessory u16 | 默认 饰品 | 1 | 2 | 未知 | CRC 候选 |
| hash_7404EBB3 | TouchRumble u8 | Touch 震动 | 1 | 1 | 未知 | CRC 候选 |
| hash_74169994 | TopRotateOffsetZ f32 | 顶部 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_74275E7A | MaskFrequencyWear u8 | 遮罩 频率 穿着 | 3 | 1 | 未知 | CRC 候选 |
| hash_744B3452 | GlassesFrequencyWear u8 | 眼镜 频率 穿着 | 3 | 1 | 未知 | CRC 候选 |
| hash_748DB6D8 | IsSelectQuestM u8 | 是否 选择 任务 M | 1 | 1 | 未知 | CRC 候选 |
| hash_748FCD76 | EndDayN4 u8 | 结束 日 N 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_749ECB27 | Day2022 u8 | 日 2022 | 1 | 1 | 未知 | CRC 候选 |
| hash_74A0C8A1 | InnerType131 u8 | 内侧 类型 131 | 1 | 1 | 未知 | CRC 候选 |
| hash_74B2EB78 | AttrCollectBit u8 | 属性 收集 位 | 1 | 1 | 未知 | CRC 候选 |
| hash_74BCA9D0 | Day2046 u8 | 日 2046 | 1 | 1 | 未知 | CRC 候选 |
| hash_74BE6041 | BridgePattern.hshCstringRef | 桥梁 款式 | 1 | 4 | 未知 | CRC 候选 |
| hash_74EA1D73 | ProbAugMorningAndEvening u16 | 8月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_74F1F060 | MsID u16 | Ms ID | 1 | 2 | 未知 | CRC 候选 |
| hash_7500325B | NewBuild u16 | 新 Build | 1 | 2 | 未知 | CRC 候选 |
| hash_753336DD | NameSeedLings u16 | 名称 Seed Lings | 1 | 2 | 未知 | CRC 候选 |
| hash_754C57C7 | AN1Index s16 | AN 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_75BD8AEF | UnlockTheme0 u16 | 解锁 主题 0 | 1 | 2 | 未知 | CRC 候选 |
| hash_75C905D8 | Movie1 u32 | 影片 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_75CDC270 | UnlockTheme32 u16 | 解锁 主题 32 | 1 | 2 | 未知 | CRC 候选 |
| hash_75E35E54 | SilhouettePosZ f32 | 轮廓 位置 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_75F4F734 | Rate1_0 s8 | 比率 1 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_75FEE4B0 | ChangeHistoryType.hshCstringRef | 变更 History 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_7629CD4E | HighlightColorR f32 | 高亮 颜色 R | 1 | 4 | 未知 | CRC 候选 |
| hash_76719EA5 | UnlockTheme27 u16 | 解锁 主题 27 | 1 | 2 | 未知 | CRC 候选 |
| hash_7674C4D6 | RoadRemoveType.hshCstringRef | Road 移除 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_767F28CB | ActionFlags u8 | 动作 标志 | 1 | 1 | 未知 | CRC 候选 |
| hash_76BB55B5 | Action0_3.hshCstringRef | 动作 0 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_76C190B2 | ReleaseKey u16 | 释放 键 | 1 | 2 | 未知 | CRC 候选 |
| hash_76E5E67A | SatisfyMinute u16 | Satisfy 分钟 | 1 | 2 | 未知 | CRC 候选 |
| hash_76E7FE08 | ChangeFg u16 | 变更 Fg | 1 | 2 | 未知 | CRC 候选 |
| hash_770288FD | BuoyLv.hshCstringRef | Buoy Lv | 1 | 4 | 未知 | CRC 候选 |
| hash_7703D2DD | AsCommand string50 | As 指令 | 1 | 50 | 未知 | CRC 候选 |
| hash_770B5B7D | ProbMarNight u16 | 3月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_7724BF93 | ItemOutfitInfo.hshCstringRef | 道具 穿搭 信息 | 1 | 4 | 未知 | CRC 候选 |
| hash_77C3271A | ProbJulyMorning u16 | 7月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_77C808AE | ProbAprilMidnight u16 | 4月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_77E82B14 | StrSortIdEUen u16 | 字符串 排序 ID E Uen | 1 | 2 | 未知 | CRC 候选 |
| hash_7813D35B | Rank u16 | 级别 | 1 | 2 | 未知 | CRC 候选 |
| hash_7834D5DB | ResourceNameSp1 string33 | 资源 名称 Sp 1 | 1 | 33 | 未知 | CRC 候选 |
| hash_78815C1C | EndMoN2 u8 | 结束 月份 N 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_78A12603 | ProbFebruayNight u16 | 2月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_78ADE89E | UnlockTheme9 u16 | 解锁 主题 9 | 1 | 2 | 未知 | CRC 候选 |
| hash_78D8AA8E | ProbNovemberEvening2 u16 | 11月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_78E62B5D | Room2.hshCstringRef | 房间 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_797F5754 | DefaultValue u16 | 默认 数值 | 6 | 2 | 未知 | CRC 候选 |
| hash_7991B277 | ZK1Index s16 | ZK 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_79AD3F84 | AccMouth u16 | 饰品 嘴 | 1 | 2 | 未知 | CRC 候选 |
| hash_79BE959D | SeasonScore s32 | 季节 分数 | 3 | 4 | 未知 | CRC 候选 |
| hash_79CDE6E6 | RoomSizeY s8 | 房间 Y 方向尺寸 | 1 | 4 | 未知 | CRC 候选 |
| hash_7A09986C | MysteryTourItemUniqueID u16 | 神秘 旅行 道具 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_7A4CDBCA | GroupSortId s16 | 分组 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_7A65D4AC | ElectionRate4 u8 | 选举 比率 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_7A6965C5 | UnlockTrigger u8 | 解锁 触发 | 2 | 4 | 未知 | CRC 候选 |
| hash_7ABAD07B | Month2006 u8 | 月份 2006 | 1 | 1 | 未知 | CRC 候选 |
| hash_7B1C0C7E | Rate0_8 s8 | 比率 0 8 | 1 | 1 | 未知 | CRC 候选 |
| hash_7B1D9990 | HA1Index s16 | HA 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_7B28F877 | ProbHarvestNight u16 | 收获 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_7B2FDFC1 | ItemHobbyType.hshCstringRef | 道具 爱好 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_7B61FB95 | Action1_7.hshCstringRef | 动作 1 7 | 1 | 4 | 未知 | CRC 候选 |
| hash_7B6CCD52 | MustFtr2 u16 | 必须 家具 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_7BB31852 | N1Parts.hshCstringRef | N 1 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_7C00C111 | ProbMarchNight u16 | 3月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_7C1B4734 | SeasonAutumnLevel u8 | 季节 秋季 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_7C226372 | JuneBrideProgress u8 | 6月 Bride Progress | 2 | 1, 4 | 未知 | CRC 候选 |
| hash_7C60D6DB | ClothesPurposeLimit u8 | 服装 用途 限制 | 2 | 1 | 未知 | CRC 候选 |
| hash_7C6429EA | SilhouetteName string65 | 轮廓 名称 | 1 | 66 | 未知 | CRC 候选 |
| hash_7C6FDE34 | AnimeTypeFishingRod string64 | 动画 类型 钓鱼 钓竿 | 1 | 64 | 未知 | CRC 候选 |
| hash_7C8E7F81 | ActionLockRange u8 | 动作 锁定 范围 | 1 | 1 | 未知 | CRC 候选 |
| hash_7CB610C7 | 未知 | 旅馆代表道具组标志（语义别名：HotelRepresentativeItemGroupFlag） | 1 | 4 | 未知 | 原名未恢复 / row_hypothesis |
| hash_7CC105E6 | ResourceNameSp3 string33 | 资源 名称 Sp 3 | 1 | 33 | 未知 | CRC 候选 |
| hash_7D016B27 | RoomIndex s16 | 房间 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_7D263796 | EndMoS5 u8 | 结束 月份 S 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_7D740FA4 | EventName string32 | 事件 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_7D802F01 | InnerType010 u8 | 内侧 类型 010 | 1 | 1 | 未知 | CRC 候选 |
| hash_7DBFE486 | PeakTransOffsetY f32 | 峰值 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_7DCD5BE1 | ItemLivedInFeel.hshCstringRef | 道具 Lived 内 Feel | 1 | 4 | 未知 | CRC 候选 |
| hash_7E027052 | Day2053 u8 | 日 2053 | 1 | 1 | 未知 | CRC 候选 |
| hash_7E0BBFA4 | StrSortIdEUru u16 | 字符串 排序 ID E Uru | 1 | 2 | 未知 | CRC 候选 |
| hash_7E2012A5 | Day2037 u8 | 日 2037 | 1 | 1 | 未知 | CRC 候选 |
| hash_7E27475F | FurniturePosAngleSub1 u32 | 家具 位置 角度 子 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_7E322EF0 | VisitorNpcLabel string32 | 访客 NPC 标签 | 1 | 34 | 未知 | CRC 候选 |
| hash_7EABEFAE | GenreID u16 | 类别 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_7EAF62DD | NormalScaleMaskB f32 | 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_7EB2D284 | LeftTransOffsetY f32 | 左 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_7EB53EBB | CanHasSit u8 | 可 具有 坐 | 1 | 1 | 未知 | CRC 候选 |
| hash_7EC203A5 | ProbJulMorningAndEvening u16 | 7月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_7EC9ADA7 | SearchRadius.hshCstringRef | Search 半径 | 1 | 4 | 未知 | CRC 候选 |
| hash_7EDA5810 | OnepieceNNormalScaleMaskR f32 | 连衣裙 N 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_7EF334A6 | CountPlayerVisit u8 | 计数 玩家 Visit | 2 | 1 | 未知 | CRC 候选 |
| hash_7F5B6179 | CraftRecipeSeason.hshCstringRef | 制作 配方 季节 | 1 | 4 | 未知 | CRC 候选 |
| hash_7FA519AB | UnlockTheme11 u16 | 解锁 主题 11 | 1 | 2 | 未知 | CRC 候选 |
| hash_7FAF59CB | AnimeTypeMaracas string64 | 动画 类型 Maracas | 1 | 64 | 未知 | CRC 候选 |
| hash_7FC7405E | ActionPattern1 u32 | 动作 款式 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_8005CFA2 | NormalScaleBottomsB f32 | 法线 缩放 下装 B | 1 | 4 | 未知 | CRC 候选 |
| hash_801351E6 | ResSizeLimit f32 | 资源 尺寸 限制 | 1 | 4 | 未知 | CRC 候选 |
| hash_8027726F | ProbJuneMidnight u16 | 6月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_803D2C2F | UnlockTheme4 u16 | 解锁 主题 4 | 1 | 2 | 未知 | CRC 候选 |
| hash_8048A3A7 | FashionThemeWork u8 | 时尚 主题 工作 | 1 | 1 | 未知 | CRC 候选 |
| hash_804D64B0 | UnlockTheme36 u16 | 解锁 主题 36 | 1 | 2 | 未知 | CRC 候选 |
| hash_805CDABB | ItemReleaseVersion u8 | 道具 释放 Version | 1 | 1 | 未知 | CRC 候选 |
| hash_805CE6D3 | PlanYear.hshCstringRef | Plan Year | 1 | 4 | 未知 | CRC 候选 |
| hash_8062290B | UseCulling u8 | 使用 剔除 | 1 | 1 | 未知 | CRC 候选 |
| hash_806CFD72 | EventLabelShort string128 | 事件 标签 短 | 2 | 128, 129 | 未知 | CRC 候选 |
| hash_8080315A | Rate3_1 s8 | 比率 3 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_80E1DE38 | Snow_N u8 | 雪 N | 1 | 1 | 未知 | CRC 候选 |
| hash_811B386C | FashionThemeOutdoor u8 | 时尚 主题 室外 | 1 | 1 | 未知 | CRC 候选 |
| hash_813C0F10 | Day2006 u8 | 日 2006 | 1 | 1 | 未知 | CRC 候选 |
| hash_813DBBDC | ProbJulyDaytime u16 | 7月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_813F03CB | MustItem1 u16 | 必须 道具 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_81A43E76 | NpcType u8 | NPC 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_8221388C | ItemUIFurnitureCategory.hshCstringRef | 道具 UI 家具 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_822BBC08 | StartMoS6 u8 | 开始 月份 S 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_8238F88D | Stage7Hash stringMurmurHash | 阶段 7 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_82644615 | RequestNum2 s8 | 请求 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_829C32B4 | InnerType021 u8 | 内侧 类型 021 | 1 | 1 | 未知 | CRC 候选 |
| hash_82BFCF29 | RegionEventCountry1.hshCstringRef | 地区 事件 国家 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_82D6CF76 | MainIslandObjectKind u8 | 主要 岛屿 对象 类别 | 1 | 1 | 未知 | CRC 候选 |
| hash_82FE2288 | Month3 u8 | 月份 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_8331E771 | RebodyPattern2LightColor u32 | 主体改造 款式 2 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_833E2942 | AllowMultiStopJoy u8 | Allow 多个 停止 Joy | 1 | 1 | 未知 | CRC 候选 |
| hash_838B098C | RemoteChase.hshCstringRef | Remote 追逐 | 1 | 4 | 未知 | CRC 候选 |
| hash_8392798C | NpcGender.hshCstringRef | NPC 性别 | 1 | 4 | 未知 | CRC 候选 |
| hash_83B54E59 | RoofMaterial u16 | 屋顶 材质 | 3 | 2 | 未知 | CRC 候选 |
| hash_83CCBE0F | ItemNpcPriorityTopsModel string64 | 道具 NPC 优先级 上装 模型 | 1 | 64 | 未知 | CRC 候选 |
| hash_83DA3B2A | 未知 | 网络回忆事件标志（语义别名：NetworkMemoryEventFlag） | 2 | 1, 2 | 未知 | 原名未恢复 / row_hypothesis |
| hash_83F13865 | UnlockTheme23 u16 | 解锁 主题 23 | 1 | 2 | 未知 | CRC 候选 |
| hash_84432956 | CanPutKitchen u8 | 可 放置 Kitchen | 1 | 1 | 未知 | CRC 候选 |
| hash_84761FB6 | CancelFootSE u8 | 取消 脚 音效 | 1 | 1 | 未知 | CRC 候选 |
| hash_84818E10 | 未知 | 留言卡可选属性（语义别名：MessageCardOptionalProperty） | 2 | 2 | 未知 | 原名未恢复 / row_hypothesis |
| hash_8525152A | NormalScaleLG f32 | 法线 缩放 LG | 1 | 4 | 未知 | CRC 候选 |
| hash_856A4BF6 | RoomSizeY s16 | 房间 Y 方向尺寸 | 1 | 2 | 未知 | CRC 候选 |
| hash_8584AF39 | Month2053 u8 | 月份 2053 | 1 | 1 | 未知 | CRC 候选 |
| hash_859C3E3E | EndMonthNorth u16 | 结束 月份 北 | 1 | 2 | 未知 | CRC 候选 |
| hash_85A0FA49 | DoorAnimTypeHash stringMurmurHash | 门 动画 类型 哈希 | 2 | 4 | 未知 | CRC 候选 |
| hash_85A6CDCE | Month2037 u8 | 月份 2037 | 1 | 1 | 未知 | CRC 候选 |
| hash_85C63B71 | NpcFtrWatchPos f32 | NPC 家具 观察 位置 | 1 | 4 | 未知 | CRC 候选 |
| hash_85CF1615 | Name string128 | 名称 | 24 | 128, 129, 130, 131 | 未知 | CRC 候选 |
| hash_85E386BB | AnimeTypeBag string64 | 动画 类型 包 | 1 | 64 | 未知 | CRC 候选 |
| hash_85ED8743 | Light.hshCstringRef | 光照 | 1 | 4 | 未知 | CRC 候选 |
| hash_85FB9DD5 | PointName string65 | 点 名称 | 1 | 65 | 未知 | CRC 候选 |
| hash_8659E834 | FrontTransOffsetX f32 | 正面 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_866B76FE | BackTransOffsetX f32 | 背面 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_869B271F | SNpcID1 u16 | S NPC ID 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_869FB739 | Reward4 u32 | 奖励 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_86A4988E | Rate2 u8 | 比率 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_86AD0CE1 | GenderUsEu.hshCstringRef | 性别 Us Eu | 1 | 4 | 未知 | CRC 候选 |
| hash_86EFA036 | RumbleForEdit u8 | 震动 用于 编辑 | 1 | 1 | 未知 | CRC 候选 |
| hash_870F1E29 | Tops u16 | 上装 | 7 | 2 | 未知 | CRC 候选 |
| hash_871D2875 | TshirtsLNormalScaleMaskB f32 | T恤 L 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_87438100 | KeepStateToDemo u8 | 保留 状态 至 演出 | 1 | 1 | 未知 | CRC 候选 |
| hash_87589DCE | NpcSetType.hshCstringRef | NPC 集合 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_8771AA09 | ItemNum s8 | 道具 数量 | 1 | 1 | 未知 | CRC 候选 |
| hash_877C84DE | TradeBasePrice u16 | 交易 基础 价格 | 1 | 2 | 未知 | CRC 候选 |
| hash_878CD782 | StartMoN1 u8 | 开始 月份 N 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_878E793E | SymbolFtr u16 | Symbol 家具 | 1 | 2 | 未知 | CRC 候选 |
| hash_8792265F | AppearValue u16 | 出现 数值 | 1 | 2 | 未知 | CRC 候选 |
| hash_87BF00E8 | Label string32 | 标签 | 51 | 32, 33, 34 | ItemAct.bcsv: label; ItemColor.bcsv: label; ItemFilter.bcsv: label; ItemKind.bcsv: label; ItemSize.bcsv: label; ItemUIContextMenu.bcsv: label | CRC 候选 |
| hash_8845B2DF | RefabricPattern3LightColor u32 | 布料改造 款式 3 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_88BD09C2 | PlayerFlagKeyAfterSelect string32 | 玩家 标志 键 After 选择 | 2 | 32 | 未知 | CRC 候选 |
| hash_88E75DD6 | OnepieceHNormalScaleMaskR f32 | 连衣裙 H 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_88FF5893 | Door0Angle f32 | 门 0 角度 | 1 | 4 | 未知 | CRC 候选 |
| hash_8900B8A0 | ItemDailyCategory.hshCstringRef | 道具 每日 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_895442DC | IsSpecial u8 | 是否 特殊 | 1 | 1 | 未知 | CRC 候选 |
| hash_897261E3 | RoomType.hshCstringRef | 房间 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_8976D4A3 | Rate0_5 s8 | 比率 0 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_89A3482C | Item u16 | 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_89A9492C | MaxValue2 u32 | 最大 数值 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_89BE1D8F | UseMyDesign u8 | 使用 My 设计 | 2 | 1 | 未知 | CRC 候选 |
| hash_89DFED0E | OuterLNormalScaleMaskA f32 | 外侧 L 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_89F2F5B2 | SortIdTWzh u16 | 排序 ID T Wzh | 1 | 2 | 未知 | CRC 候选 |
| hash_8A25BF6B | UnlockTheme15 u16 | 解锁 主题 15 | 1 | 2 | 未知 | CRC 候选 |
| hash_8A28E471 | EditBaseUnitZ s16 | 编辑 基础 单位 Z | 1 | 2 | 未知 | CRC 候选 |
| hash_8A377042 | AO.hshCstringRef | AO | 1 | 4 | 未知 | CRC 候选 |
| hash_8A479556 | ApproachIncreasePerMissedNum u16 | 接近 增加 Per Missed 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_8A647661 | CanPutDisplay u8 | 可 放置 Display | 1 | 1 | 未知 | CRC 候选 |
| hash_8A7F8056 | W1Parts.hshCstringRef | W 1 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_8AE370C5 | ForFes u8 | 用于 Fes | 1 | 1 | 未知 | CRC 候选 |
| hash_8AE48661 | StartHour u8 | 开始 小时 | 10 | 1, 2 | 未知 | CRC 候选 |
| hash_8AF6DE0D | E2Parts.hshCstringRef | E 2 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_8AF93EA2 | MoveTool2 u16 | 移动 工具 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_8B1904B9 | 未知 | 邮箱动作类型（语义别名：MailboxActionType） | 1 | 4 | 未知 | 原名未恢复 / data_relation |
| hash_8B21A26B | Cloud_N u8 | 云 N | 1 | 1 | 未知 | CRC 候选 |
| hash_8B3C9137 | SortID s32 | 排序 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_8B47A7B4 | SaveIndex u16 | 保存 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_8B64D51B | DesignSummer2 u16 | 设计 夏季 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_8B82D692 | Day2013 u8 | 日 2013 | 1 | 1 | 未知 | CRC 候选 |
| hash_8B8C8093 | SyncNoCheck u8 | Sync 无 检查 | 1 | 1 | 未知 | CRC 候选 |
| hash_8BBCD514 | InnerType100 u8 | 内侧 类型 100 | 1 | 1 | 未知 | CRC 候选 |
| hash_8BC9A76F | StartDayS1 u8 | 开始 日 S 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_8BCC1F0D | ActionSetRate2 s8 | 动作 集合 比率 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_8C03FDC7 | FU1Index s16 | FU 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_8C2AEC6A | TkkSkipNormal.hshCstringRef | Tkk 跳过 法线 | 1 | 4 | 未知 | CRC 候选 |
| hash_8C71DDC0 | FtrType1 u8 | 家具 类型 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_8CC22007 | DesignSpring1 u16 | 设计 春季 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_8D3BAD84 | TimeZoneOutdoorNoonLevel u8 | 时间 区域 室外 正午 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_8D401DF7 | AttrClearStageChange u8 | 属性 清除 阶段 变更 | 4 | 1 | 未知 | CRC 候选 |
| hash_8D40260E | ProbAugustNight u16 | 8月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_8D58A3BF | EventBegin u8 | 事件 开始 | 1 | 1 | 未知 | CRC 候选 |
| hash_8D7F40E5 | UseColorGroupSort u8 | 使用 颜色 分组 排序 | 1 | 1 | 未知 | CRC 候选 |
| hash_8DA7BFA0 | Action3_1.hshCstringRef | 动作 3 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_8E07B21E | HideDodmCap u8 | 隐藏 Dodm 帽子 | 1 | 1 | 未知 | CRC 候选 |
| hash_8E2EDF98 | SortIdEUit u16 | 排序 ID E Uit | 1 | 2 | 未知 | CRC 候选 |
| hash_8E65F74D | Drink1 u32 | 饮料 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_8E6ECCE5 | StartDayN6 u8 | 开始 日 N 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_8E768BD8 | SpotTalkKey string25 | 地点 对话 键 | 1 | 25 | 未知 | CRC 候选 |
| hash_8EABC257 | WaitASType string32 | 等待 AS 类型 | 2 | 32, 34 | 未知 | CRC 候选 |
| hash_8ED948DD | Rotatable u8 | Rotatable | 1 | 1 | 未知 | CRC 候选 |
| hash_8EE763A2 | FacilityActionType8.hshCstringRef | 设施 动作 类型 8 | 1 | 4 | 未知 | CRC 候选 |
| hash_8F18144C | Month2022 u8 | 月份 2022 | 1 | 1 | 未知 | CRC 候选 |
| hash_8F24F1A4 | RotateOffsetY f32 | 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_8F2F4BF9 | PlayerFlagKeyON string32 | 玩家 标志 键 开启 | 1 | 32 | 未知 | CRC 候选 |
| hash_8F30AA9F | 未知 | 角色成长或选择标志（语义别名：RoleGrowthOrSelectionFlag） | 1 | 1 | 未知 | 原名未恢复 / native_slot_candidate |
| hash_8F3A76BB | Month2046 u8 | 月份 2046 | 1 | 1 | 未知 | CRC 候选 |
| hash_8F4FE5EE | BackRotateOffsetY f32 | 背面 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_8F5C3DA3 | ZUnitIndex s8 | Z 单位 索引 | 1 | 4 | 未知 | CRC 候选 |
| hash_8F8E3A3B | Stage13Hash stringMurmurHash | 阶段 13 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_8FB1ED85 | SortID u32 | 排序 ID | 2 | 4 | 未知 | CRC 候选 |
| hash_8FCED711 | LandingUniqueID u16 | 着陆 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_8FEBA08A | ProbMayNight u16 | 5月 夜间概率 | 4 | 2 | 未知 | CRC 候选 |
| hash_8FF469E1 | CapID u16 | 帽子 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_8FF6331B | StrSortIdJPja u16 | 字符串 排序 ID J Pja | 1 | 2 | 未知 | CRC 候选 |
| hash_90299D5A | InnerType022 u8 | 内侧 类型 022 | 1 | 1 | 未知 | CRC 候选 |
| hash_902A2293 | HA2Index s16 | HA 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_904611F3 | BridgeTypeHash stringMurmurHash | 桥梁 类型 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_90466AFD | Category.hshCstringRef | 分类 | 2 | 4 | 未知 | CRC 候选 |
| hash_904B8D66 | Month0 u8 | 月份 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_9067BB0E | WaitType u8 | 等待 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_9079071D | FashionThemeStage u8 | 时尚 主题 阶段 | 1 | 1 | 未知 | CRC 候选 |
| hash_909E13E6 | StartMoS5 u8 | 开始 月份 S 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_90BC0855 | CanFtr u8 | 可 家具 | 1 | 1 | 未知 | CRC 候选 |
| hash_90CAFFC6 | 未知 | 每日指定目标条件（语义别名：DailySpecificTargetCondition） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_90D1E9FB | RequestNum1 s8 | 请求 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_912CA5F0 | CloseLandFlagId s32 | 关闭 土地 标志 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_91783E01 | Action2_Insurance.hshCstringRef | 动作 2 保险 | 1 | 4 | 未知 | CRC 候选 |
| hash_919EA52A | BirthMDay u8 | 出生 M 日 | 2 | 1 | 未知 | CRC 候选 |
| hash_91B7E30B | DecorationObjNum u16 | 装饰 对象 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_91DD5681 | MoveSpot2 u32 | 移动 地点 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_91E23764 | ItemKind13 u16 | 道具 类别 13 | 1 | 2 | 未知 | CRC 候选 |
| hash_91EAEEDD | BattlePoint u8 | Battle 点 | 1 | 1 | 未知 | CRC 候选 |
| hash_91EE0D19 | ProbFebNight u16 | 2月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_91F4A29C | NormalScaleHA f32 | 法线 缩放 HA | 1 | 4 | 未知 | CRC 候选 |
| hash_91F9064D | Sports2 u32 | 运动 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_9217F8B8 | ProbDecNight u16 | 12月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_92359EB4 | Rate3_2 s8 | 比率 3 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_923AE1F2 | PlaceType u8 | 放置 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_923F8E59 | CanUseWherearen u8 | 可 使用 度假岛 | 1 | 1 | 未知 | CRC 候选 |
| hash_92462B7D | RegionEventCountry3 u16 | 地区 事件 国家 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_924C8D08 | RebodyPattern1LightColor u32 | 主体改造 款式 1 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_926D7DD8 | UpdateParts u8 | 更新 部件 | 1 | 1 | 未知 | CRC 候选 |
| hash_92827AE7 | TimeZoneIndoorNoonLevel u8 | 时间 区域 室内 正午 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_92A60974 | ZK2Index s16 | ZK 2 索引 | 1 | 4 | 未知 | CRC 候选 |
| hash_92B24A84 | SkinEdgeColorG f32 | 皮肤 边缘 颜色 G | 1 | 4 | 未知 | CRC 候选 |
| hash_93036ED8 | ResourceNameSp2 string33 | 资源 名称 Sp 2 | 1 | 33 | 未知 | CRC 候选 |
| hash_93471944 | RailIndex s16 | 轨道 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_9389A0FE | Day2005 u8 | 日 2005 | 1 | 1 | 未知 | CRC 候选 |
| hash_93A0AEB8 | ProbAprilMorning u16 | 4月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_93D99C53 | ProbJanuaryMorning u16 | 1月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_93DDC6D7 | FashionThemeParty u8 | 时尚 主题 Party | 1 | 1 | 未知 | CRC 候选 |
| hash_93F49EC4 | FlagsNetAccess.hshCstringRef | 标志 网络 访问 | 1 | 4 | 未知 | CRC 候选 |
| hash_9403C267 | AcceMouth u16 | 饰品 嘴 | 4 | 2 | 未知 | CRC 候选 |
| hash_94113760 | Rate1 u8 | 比率 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_942D5719 | RebodyNum3 s8 | 主体改造 数量 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_9456B6A3 | BirthMonth u8 | 出生 月份 | 2 | 1 | 未知 | CRC 候选 |
| hash_9463DEE3 | Day2048 u8 | 日 2048 | 1 | 1 | 未知 | CRC 候选 |
| hash_947670D3 | UnlockLevel u8 | 解锁 等级 | 1 | 3 | 未知 | CRC 候选 |
| hash_947875DD | CeilingUniqueID u16 | Ceiling 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_948EB946 | OutsideTemplateKind u8 | 外部 模板 类别 | 1 | 1 | 未知 | CRC 候选 |
| hash_94A611BE | LotGrowUp u8 | 抽选 成长 上 | 1 | 1 | 未知 | CRC 候选 |
| hash_94D6CB5D | RuleColor u16 | 规则 颜色 | 2 | 2 | 未知 | CRC 候选 |
| hash_94F6A567 | LotOnFinishOrder u8 | 抽选 开启 Finish 顺序 | 1 | 1 | 未知 | CRC 候选 |
| hash_95109C4D | Stage6Hash stringMurmurHash | 阶段 6 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_952CF32E | BbsDays u8 | Bbs 天数 | 1 | 1 | 未知 | CRC 候选 |
| hash_952F0A94 | ObjectUniqueID u16 | 对象 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_9538FA22 | DesignAutumn2 u16 | 设计 秋季 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_9539786C | StartMoN2 u8 | 开始 月份 N 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_953983B4 | SelectableBeginDate1 u16 | 可选择 开始 日期 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_953E5A9E | Music2 u32 | 音乐 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_953EDEE6 | UnlockRoom u8 | 解锁 房间 | 1 | 1 | 未知 | CRC 候选 |
| hash_95798F28 | SkipTopsSwap u8 | 跳过 上装 交换 | 1 | 1 | 未知 | CRC 候选 |
| hash_95C19ABC | Seat3 u16 | 座位 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_95CC0F22 | LifeSupportStamp.hshCstringRef | 生活 Support 印章 | 1 | 4 | 未知 | CRC 候选 |
| hash_95E42CCE | TshirtsHNormalScaleMaskB f32 | T恤 H 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_960A51FE | LatchBolt u8 | Latch Bolt | 1 | 1 | 未知 | CRC 候选 |
| hash_9611C929 | NpcSpClothSet u16 | NPC Sp 衣物 集合 | 1 | 2 | 未知 | CRC 候选 |
| hash_96BA28FE | Comment string64 | Comment | 1 | 64 | 未知 | CRC 候选 |
| hash_96D80132 | StampRackNameTextLabelForUI string32 | 印章 架子 名称 文本 标签 用于 UI | 1 | 32 | 未知 | CRC 候选 |
| hash_97136220 | Month2034 u8 | 月份 2034 | 1 | 1 | 未知 | CRC 候选 |
| hash_973100D7 | Month2050 u8 | 月份 2050 | 1 | 1 | 未知 | CRC 候选 |
| hash_973FAE34 | Tool u16 | 工具 | 1 | 2 | 未知 | CRC 候选 |
| hash_977ADFCE | Name string32 | 名称 | 23 | 32, 33, 34 | ItemColor.bcsv: description_ja; ItemSize.bcsv: description_ja | CRC 候选 |
| hash_97BE8767 | ReactionTalkLabelKey string4 | 反应 对话 标签 键 | 1 | 4 | 未知 | CRC 候选 |
| hash_97BF6F9E | TransOffsetZ f32 | 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_97EBA4FC | FashionThemeHorror u8 | 时尚 主题 Horror | 1 | 1 | 未知 | CRC 候选 |
| hash_980C720F | ProbMarchEvening1 u16 | 3月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_981286FD | UIIconFrame s16 | UI 图标 帧 | 1 | 2 | 未知 | CRC 候选 |
| hash_98812C3B | ProbDecemberEvening2 u16 | 12月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_988684ED | S1Parts.hshCstringRef | S 1 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_989E60D5 | NpcRole3 u8 | NPC 角色 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_98A65EFB | Stage12Hash stringMurmurHash | 阶段 12 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_98FF7F38 | StampRackPutUnitX s32 | 印章 架子 放置 单位 X | 1 | 4 | 未知 | CRC 候选 |
| hash_990406A9 | PenColor1 u16 | 笔 颜色 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_99097AFA | InnerType103 u8 | 内侧 类型 103 | 1 | 1 | 未知 | CRC 候选 |
| hash_9916CF87 | AnimeTypeBloom string64 | 动画 类型 Bloom | 1 | 64 | 未知 | CRC 候选 |
| hash_9937797C | Day2010 u8 | 日 2010 | 1 | 1 | 未知 | CRC 候选 |
| hash_9938D8A6 | RefabricPattern0LightColor u32 | 布料改造 款式 0 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_9951A44B | AnimeTypeHandGlass string64 | 动画 类型 手 Glass | 1 | 64 | 未知 | CRC 候选 |
| hash_995763A6 | ProbDecemberDaytime u16 | 12月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_99667BF1 | NpcFtrActionWeather.hshCstringRef | NPC 家具 动作 天气 | 2 | 4 | 未知 | CRC 候选 |
| hash_99712047 | ProbOctoberEvening1 u16 | 10月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_9979B0E3 | ActionSetRate1 s8 | 动作 集合 比率 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_997C0881 | StartDayS2 u8 | 开始 日 S 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_9A1E596D | OnepieceLNormalScaleMaskR f32 | 连衣裙 L 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_9A3FB47C | LocalWindType.hshCstringRef | Local 风 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_9A65A748 | Month2008 u8 | 月份 2008 | 1 | 1 | 未知 | CRC 候选 |
| hash_9AE8CEA2 | ResourceNameSp6 string33 | 资源 名称 Sp 6 | 1 | 33 | 未知 | CRC 候选 |
| hash_9AF292FA | GroupNumber s32 | 分组 Number | 1 | 4 | 未知 | CRC 候选 |
| hash_9B0B7CE4 | WindowName string64 | 窗户 名称 | 1 | 66 | 未知 | CRC 候选 |
| hash_9B433DD5 | CanEat u8 | 可 Eat | 1 | 1 | 未知 | CRC 候选 |
| hash_9B7AA0A0 | Kind.hshCstringRef | 类别 | 3 | 4 | 未知 | CRC 候选 |
| hash_9B88EBFE | SingTriggerRatio u8 | Sing 触发 Ratio | 3 | 2, 4 | 未知 | CRC 候选 |
| hash_9BA040C2 | ItemNpcAiEquipTaste2 u32 | 道具 NPC AI 装备 风格 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_9BC37B4D | Rate0_6 s8 | 比率 0 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_9BC85BD0 | SpotType u8 | 地点 类型 | 1 | 3 | 未知 | CRC 候选 |
| hash_9BD046A2 | ItemShareTextureUniqueID u16 | 道具 共享 纹理 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_9BEBC317 | ItemKind9 u16 | 道具 类别 9 | 1 | 2 | 未知 | CRC 候选 |
| hash_9BEE16D1 | ASCommand string66 | AS 指令 | 2 | 66 | 未知 | CRC 候选 |
| hash_9C2D6DC6 | FloorColAttribute u16 | 地板 Col 属性 | 3 | 2 | 未知 | CRC 候选 |
| hash_9C32CF82 | CarpetMaterial s32 | Carpet 材质 | 1 | 4 | 未知 | CRC 候选 |
| hash_9C4A43C0 | ProbAprDaytime u16 | 4月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_9C4EFA45 | TradeTicketBasePrice u32 | 交易 票券 基础 价格 | 1 | 4 | 未知 | CRC 候选 |
| hash_9C88FB0B | Comic1 u32 | 漫画 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_9C8A400B | Construction u8 | Construction | 1 | 1 | 未知 | CRC 候选 |
| hash_9CB82A1E | Sand u8 | Sand | 1 | 1 | 未知 | CRC 候选 |
| hash_9CD5ABA6 | MainIslandItemDirection u8 | 主要 岛屿 道具 方向 | 1 | 1 | 未知 | CRC 候选 |
| hash_9CDAD5D9 | Action3_2.hshCstringRef | 动作 3 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_9CDB630B | StartDayN5 u8 | 开始 日 N 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_9D0B6948 | IsFurnitureAction u8 | 是否 家具 动作 | 1 | 1 | 未知 | CRC 候选 |
| hash_9D158D98 | OrderID1 u16 | 顺序 ID 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_9D71641A | OutdoorFtr1 u16 | 室外 家具 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_9D8FD955 | Month2045 u8 | 月份 2045 | 1 | 1 | 未知 | CRC 候选 |
| hash_9D9906D2 | MaxAmount s32 | 最大 数量 | 1 | 4 | 未知 | CRC 候选 |
| hash_9D9B3598 | SpotTalkLabelKey string4 | 地点 对话 标签 键 | 1 | 4 | 未知 | CRC 候选 |
| hash_9DADBBA2 | Month2021 u8 | 月份 2021 | 1 | 1 | 未知 | CRC 候选 |
| hash_9DCEA17E | ItemLayout.hshCstringRef | 道具 布局 | 2 | 4 | 未知 | CRC 候选 |
| hash_9DFA9B39 | CornerType.hshCstringRef | Corner 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_9E179557 | AudioMusicCategory.hshCstringRef | 音频 音乐 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_9E19C94C | UseCurtain u8 | 使用 窗帘 | 1 | 1 | 未知 | CRC 候选 |
| hash_9E1D1E9F | ResourceNameSp4 string33 | 资源 名称 Sp 4 | 1 | 33 | 未知 | CRC 候选 |
| hash_9E46D33C | DesignAlways3 u16 | 设计 始终 3 | 2 | 2 | 未知 | CRC 候选 |
| hash_9E7BECC4 | AN2Index s16 | AN 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_9EBF2C04 | ProbSeptemberDaytime u16 | 9月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_9EC34ED4 | ItemAdditionalSoundMaterialType u16 | 道具 Additional 声音 材质 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_9EC4722E | FtrType2 u8 | 家具 类型 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_9EEA1288 | Hobby.hshCstringRef | 爱好 | 1 | 4 | 未知 | CRC 候选 |
| hash_9EFF6596 | Day2039 u8 | 日 2039 | 1 | 1 | 未知 | CRC 候选 |
| hash_9F253177 | WallScale f32 | 墙壁 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_9F5123D4 | AcceptPartialBone u8 | 接受 Partial 骨骼 | 1 | 1 | 未知 | CRC 候选 |
| hash_9F9B91E9 | CanPutFish u8 | 可 放置 鱼 | 1 | 1 | 未知 | CRC 候选 |
| hash_9FBBC76B | HobbyFashionLevel u8 | 爱好 时尚 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_9FEB9DA6 | ItemPlayerTopsBottomsForm.hshCstringRef | 道具 玩家 上装 下装 Form | 1 | 4 | 未知 | CRC 候选 |
| hash_9FF07C89 | LocalizeModel u8 | 本地化 模型 | 1 | 1 | 未知 | CRC 候选 |
| hash_A03A592F | KappeiTourIslandKind.hshCstringRef | 航平 旅行 岛屿 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_A03A7F9D | ProbJuneEvening1 u16 | 6月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_A05E06B0 | ProbSeptemberEvening2 u16 | 9月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_A05E5F9F | BaseColorG f32 | 基础 颜色 G | 2 | 4 | 未知 | CRC 候选 |
| hash_A073AA81 | GlassesPurposeLimit u8 | 眼镜 用途 限制 | 3 | 1 | 未知 | CRC 候选 |
| hash_A0839D12 | CategoryName.hshCstringRef | 分类 名称 | 1 | 4 | 未知 | CRC 候选 |
| hash_A0943E31 | UnlockFlag string33 | 解锁 标志 | 1 | 35 | 未知 | CRC 候选 |
| hash_A09FB609 | ProbOctoberDaytime u16 | 10月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_A09FFF5E | WeatherChange u8 | 天气 变更 | 1 | 1 | 未知 | CRC 候选 |
| hash_A0AF4F68 | StrSortIdKRko u16 | 字符串 排序 ID K Rko | 1 | 2 | 未知 | CRC 候选 |
| hash_A0B3903D | TimeZoneIndoorMidnightLevel u8 | 时间 区域 室内 午夜 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_A0BB7510 | DispInteriorMode u8 | Disp Interior 模式 | 1 | 1 | 未知 | CRC 候选 |
| hash_A0CD9212 | Month2031 u8 | 月份 2031 | 1 | 1 | 未知 | CRC 候选 |
| hash_A0D9D29E | IntervalTime u8 | 间隔 时间 | 1 | 1 | 未知 | CRC 候选 |
| hash_A0E569DC | CurtainUniqueID u16 | 窗帘 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_A0EFADAC | MoveConditionType u8 | 移动 条件 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_A0EFF0E5 | Month2055 u8 | 月份 2055 | 1 | 1 | 未知 | CRC 候选 |
| hash_A103C985 | AppearWeather.hshCstringRef | 出现 天气 | 1 | 4 | 未知 | CRC 候选 |
| hash_A1249129 | RugItemId u16 | Rug 道具 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_A155BC19 | Weed_N u8 | 杂草 N | 1 | 1 | 未知 | CRC 候选 |
| hash_A1868B65 | Amount6 u16 | 数量 6 | 1 | 2 | 未知 | CRC 候选 |
| hash_A1B074DD | NpcLookAction u8 | NPC 注视 动作 | 1 | 1 | 未知 | CRC 候选 |
| hash_A1B38BFD | PointList u8 | 点 列表 | 1 | 8 | 未知 | CRC 候选 |
| hash_A1CB3383 | RebodyPattern4LightColor u32 | 主体改造 款式 4 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_A1DEF3BB | Stage11Hash stringMurmurHash | 阶段 11 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_A1E8D2BB | Comic0 u32 | 漫画 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_A241524A | HasRoofLight u8 | 具有 屋顶 光照 | 1 | 1 | 未知 | CRC 候选 |
| hash_A287C572 | Action2_3.hshCstringRef | 动作 2 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_A2BC4BF1 | CheekOrangeColorR f32 | 脸颊 橙色 颜色 R | 1 | 4 | 未知 | CRC 候选 |
| hash_A2FE7F71 | BackColor u16 | 背面 颜色 | 2 | 2 | 未知 | CRC 候选 |
| hash_A3249A9D | ReBodyPattern0Color1 u8 | 重新 主体 款式 0 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_A326FA8C | DesignAlways2 u16 | 设计 始终 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_A39F4C26 | Day2029 u8 | 日 2029 | 1 | 1 | 未知 | CRC 候选 |
| hash_A3A7A19F | IsVariable u8 | 是否 Variable | 1 | 4 | 未知 | CRC 候选 |
| hash_A3CFC752 | Rate4 u8 | 比率 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_A3DC7C4C | TasteScore s32 | 风格 分数 | 3 | 4 | 未知 | CRC 候选 |
| hash_A425D8A5 | MsgFile string64 | 消息 文件 | 1 | 64 | 未知 | CRC 候选 |
| hash_A42B13CE | HobbyMotif u8 | 爱好 图案 | 1 | 1 | 未知 | CRC 候选 |
| hash_A4396B29 | CapTemporarilyCreate u8 | 帽子 临时 创建 | 1 | 1 | 未知 | CRC 候选 |
| hash_A45750CC | Day2000 u8 | 日 2000 | 1 | 1 | 未知 | CRC 候选 |
| hash_A4686E5D | SmallGenre.hshCstringRef | Small 类别 | 1 | 4 | ItemUIFurnitureCategory.bcsv: group_hash | CRC 候选 |
| hash_A469534A | InnerType113 u8 | 内侧 类型 113 | 1 | 1 | 未知 | CRC 候选 |
| hash_A4958852 | Action1_Insurance.hshCstringRef | 动作 1 保险 | 1 | 4 | 未知 | CRC 候选 |
| hash_A4A8A21B | AnimeTypeTrowel string64 | 动画 类型 Trowel | 1 | 64 | 未知 | CRC 候选 |
| hash_A4B2D66D | OffsetAccWeed s8 | 偏移 饰品 杂草 | 1 | 1 | 未知 | CRC 候选 |
| hash_A4DB9685 | HasJmp u8 | 具有 Jmp | 2 | 1 | 未知 | CRC 候选 |
| hash_A4F6DA11 | FishPoint s8 | 鱼 点 | 1 | 1 | 未知 | CRC 候选 |
| hash_A5010BE8 | UseCollision u8 | 使用 碰撞 | 1 | 2 | 未知 | CRC 候选 |
| hash_A54F92FD | AiEquipBackSeries1 u32 | AI 装备 背面 系列 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_A5F3BD28 | NameboardPosZ f32 | 名牌 位置 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_A604B7CF | CanPutFood u8 | 可 放置 食物 | 1 | 1 | 未知 | CRC 候选 |
| hash_A6168903 | Grade u16 | 等级 | 1 | 2 | 未知 | CRC 候选 |
| hash_A6240B90 | EventFlag s32 | 事件 标志 | 2 | 4 | 未知 | CRC 候选 |
| hash_A6324D34 | AcceptAccess u8 | 接受 访问 | 1 | 1 | 未知 | CRC 候选 |
| hash_A68BEAA7 | ItemKind8 u16 | 道具 类别 8 | 1 | 2 | 未知 | CRC 候选 |
| hash_A69385C1 | ItemLightColor.hshCstringRef | 道具 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_A6945588 | IsNecessary4_1 u8 | 是否 必要 4 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_A6B1A7FD | Color1.hshCstringRef | 颜色 1 | 2 | 4 | 未知 | CRC 候选 |
| hash_A6FB6D5F | RecommendedFtrFile string64 | Recommended 家具 文件 | 1 | 64 | 未知 | CRC 候选 |
| hash_A7058EF8 | Month2018 u8 | 月份 2018 | 1 | 1 | 未知 | CRC 候选 |
| hash_A745C103 | FlagPlayerAnnounce s32 | 标志 玩家 公告 | 1 | 4 | 未知 | CRC 候选 |
| hash_A75689FF | FlagLand1 s32 | 标志 土地 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_A78D0CC5 | NeglectSleep u8 | Neglect Sleep | 1 | 1 | 未知 | CRC 候选 |
| hash_A7C79784 | ItemHHASituation1.hshCstringRef | 道具 快乐家协会 情境 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_A7D14AA0 | ReBodyPattern2Color1 u8 | 重新 主体 款式 2 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_A802423D | 未知 | 演唱会家具摆放标志（语义别名：ConcertFurniturePlacementFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_A812E496 | ItemNpcReactionGenreType.hshCstringRef | 道具 NPC 反应 类别 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_A84507AA | 未知 | 玩家状态更新标志（语义别名：PlayerStateUpdateFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_A84FF34B | Action0_8.hshCstringRef | 动作 0 8 | 1 | 4 | 未知 | CRC 候选 |
| hash_A8644472 | ConditionType u8 | 条件 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_A86C26BB | RemakeLotType.hshCstringRef | 改造 抽选 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_A86E5B39 | Day0 u8 | 日 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_A88F23CF | ResourceName string33 | 资源 名称 | 1 | 33 | 未知 | CRC 候选 |
| hash_A8A1B30C | Seat2 u16 | 座位 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_A8EACF70 | AITagCategory.hshCstringRef | AI 标签 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_A903F753 | Day2058 u8 | 日 2058 | 1 | 1 | 未知 | CRC 候选 |
| hash_A90B807E | StampRackIdx u8 | 印章 架子 Idx | 1 | 1 | 未知 | CRC 候选 |
| hash_A91A1C88 | UsePlayer u8 | 使用 玩家 | 1 | 1 | 未知 | CRC 候选 |
| hash_A924CADE | IsNecessary3_2 u8 | 是否 必要 3 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_A9424A50 | HouseColor.hshCstringRef | 房屋 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_A988063C | TVProgramName.hshCstringRef | TV 程序 名称 | 8 | 4 | 未知 | CRC 候选 |
| hash_A99EAF49 | StrSortIdCNzh u16 | 字符串 排序 ID C Nzh | 1 | 2 | 未知 | CRC 候选 |
| hash_A99F7B4E | Material6 u16 | 材质 6 | 1 | 2 | 未知 | CRC 候选 |
| hash_A9B28820 | EndDayNorth u16 | 结束 日 北 | 1 | 2 | 未知 | CRC 候选 |
| hash_A9BED6BF | ItemCookingFtrEffectType.hshCstringRef | 道具 烹饪 家具 效果 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_A9C1118B | EventObjModuleType.hshCstringRef | 事件 对象 Module 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_A9DE0384 | RainActive u8 | 雨 Active | 2 | 1 | 未知 | CRC 候选 |
| hash_A9F6FAC2 | BgmEnd u8 | Bgm 结束 | 1 | 1 | 未知 | CRC 候选 |
| hash_A9F8EE25 | ToolEnterAsName string32 | 工具 Enter As 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_AA0070B7 | CanHostAcceptNewVisitorDB u8 | 可 Host 接受 新 访客 DB | 1 | 1 | 未知 | CRC 候选 |
| hash_AA4403EA | Social.hshCstringRef | 社交 | 1 | 4 | 未知 | CRC 候选 |
| hash_AA4F6B89 | CanPutUtility u8 | 可 放置 Utility | 1 | 1 | 未知 | CRC 候选 |
| hash_AA512967 | Month2040 u8 | 月份 2040 | 1 | 1 | 未知 | CRC 候选 |
| hash_AA6A39C6 | ItemNpcFtrActionType.hshCstringRef | 道具 NPC 家具 动作 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_AA734B90 | Month2024 u8 | 月份 2024 | 1 | 1 | 未知 | CRC 候选 |
| hash_AA738FED | SelectableSeason u8 | 可选择 季节 | 1 | 1 | 未知 | CRC 候选 |
| hash_AA897F0F | IsHide2_2 u8 | 是否 隐藏 2 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_AA9BFC6E | CurtainTexUniqueID u16 | 窗帘 纹理 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_AAAE3A0F | ApplyNeedActivity u8 | Apply 需要 活动 | 1 | 1 | 未知 | CRC 候选 |
| hash_AABF662D | RefabricPattern5LightColor u32 | 布料改造 款式 5 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_AAC49213 | TalkingNpcLabel string8 | Talking NPC 标签 | 1 | 9 | 未知 | CRC 候选 |
| hash_AACF3AE7 | ReBodyPattern4Color1 u8 | 重新 主体 款式 4 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_AB39A678 | TshirtsNNormalScaleMaskG f32 | T恤 N 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_AB51A3CF | DebugName string32 | 调试 名称 | 5 | 32 | 未知 | CRC 候选 |
| hash_AB771EAE | Floorboards u16 | Floorboards | 2 | 2 | 未知 | CRC 候选 |
| hash_AB9B88D6 | ItemKind1 u16 | 道具 类别 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_ABBD9449 | MessageLabel string8 | 消息 标签 | 1 | 8 | 未知 | CRC 候选 |
| hash_AC0593CC | CanDoze u8 | 可 Doze | 1 | 1 | 未知 | CRC 候选 |
| hash_AC0EBE24 | ShadowType.hshCstringRef | 阴影 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_AC1D8B7F | Rate0_3 s8 | 比率 0 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_AC4A3345 | NfpType u8 | Nfp 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_AC68310D | Stage5Hash stringMurmurHash | 阶段 5 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_AC69956E | EventHalf s8 | 事件 半 | 1 | 1 | 未知 | CRC 候选 |
| hash_AC821ED4 | ItemKind12 u16 | 道具 类别 12 | 1 | 2 | 未知 | CRC 候选 |
| hash_AC8AAE8C | ProbMayMorningAndEvening u16 | 5月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_ACBD7F31 | MoveSpot3 u32 | 移动 地点 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_ACE47BB9 | FlowName string32 | 流程 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_AD0C787A | 未知 | 环境相关默认主体改造款式（语义别名：EnvironmentDependentDefaultReBody） | 1 | 4 | 未知 | 原名未恢复 / native_behavior |
| hash_AD1E04AD | ExchangeItem u16 | 交换 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_AD49B4EA | InnerType032 u8 | 内侧 类型 032 | 1 | 1 | 未知 | CRC 候选 |
| hash_ADA3644A | SelectableEndDate1 u16 | 可选择 结束 日期 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_ADA9EB19 | ProbAugNight u16 | 8月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_AE3AEADA | ReBodyPattern6Color1 u8 | 重新 主体 款式 6 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_AE63CEF0 | NpcFtrActionHoldTime s32 | NPC 家具 动作 持有 时间 | 2 | 4 | 未知 | CRC 候选 |
| hash_AE9F005C | OuterLNormalScaleMaskR f32 | 外侧 L 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_AEB768F7 | USen u8 | U Sen | 1 | 1 | 未知 | CRC 候选 |
| hash_AEBC09BC | ProbMayDaytime u16 | 5月 白天概率 | 4 | 2 | 未知 | CRC 候选 |
| hash_AEE0FF23 | Stage8 string32 | 阶段 8 | 1 | 32 | 未知 | CRC 候选 |
| hash_AEE9894E | Day2015 u8 | 日 2015 | 1 | 1 | 未知 | CRC 候选 |
| hash_AF2602CD | RegionEventCountry2 u16 | 地区 事件 国家 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_AF35C8D8 | ProbAugustEvening2 u16 | 8月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_AF3BECA5 | ItemLayer u8 | 道具 层 | 1 | 1 | 未知 | CRC 候选 |
| hash_AF58956D | Speciality2 u32 | 特产 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_AF88956B | InnerType u8 | 内侧 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_AFA7B084 | OnepieceHNormalScaleMaskA f32 | 连衣裙 H 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_AFAD124B | NoteMin u8 | 备注 最小 | 2 | 1 | 未知 | CRC 候选 |
| hash_AFB1F366 | CountOtherVillage u8 | 计数 Other 村庄 | 1 | 1 | 未知 | CRC 候选 |
| hash_AFEB1BF1 | CaptureLevel.hshCstringRef | 捕捉 等级 | 1 | 4 | 未知 | CRC 候选 |
| hash_B029CF90 | Stage6 string32 | 阶段 6 | 1 | 32 | 未知 | CRC 候选 |
| hash_B02F0C17 | StampRackItemNameA u16 | 印章 架子 道具 名称 A | 1 | 2 | 未知 | CRC 候选 |
| hash_B0304B0D | ReBodyPatternNum s8 | 重新 主体 款式 数量 | 1 | 1 | 未知 | CRC 候选 |
| hash_B040DFDB | Rate1_8 s8 | 比率 1 8 | 1 | 1 | 未知 | CRC 候选 |
| hash_B048092B | HasDoorLight u8 | 具有 门 光照 | 1 | 4 | 未知 | CRC 候选 |
| hash_B04AC9EC | UnlockRoom1SecondEdit u8 | 解锁 房间 1 第二 编辑 | 1 | 1 | 未知 | CRC 候选 |
| hash_B05227B0 | StartMoN4 u8 | 开始 月份 N 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_B0B659FA | RebodyPattern7LightColor u32 | 主体改造 款式 7 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_B109A778 | AnimeTypeSitDown string64 | 动画 类型 坐 下 | 1 | 64 | 未知 | CRC 候选 |
| hash_B10B6BC8 | SpotTalkName string65 | 地点 对话 名称 | 1 | 65 | 未知 | CRC 候选 |
| hash_B117EB21 | Scale10x6.hshCstringRef | 缩放 10 x 6 | 1 | 4 | 未知 | CRC 候选 |
| hash_B11DFF44 | BoatOffsetX s16 | 船 偏移 X | 1 | 2 | 未知 | CRC 候选 |
| hash_B12179B4 | ProbOctDaytime u16 | 10月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_B12E26DA | GroupIndex s8 | 分组 索引 | 1 | 1 | 未知 | CRC 候选 |
| hash_B1589411 | StatusPattern u8 | Status 款式 | 1 | 1 | 未知 | CRC 候选 |
| hash_B16C3035 | CameraParamName string33 | Camera 参数 名称 | 2 | 34 | 未知 | CRC 候选 |
| hash_B17A68BC | Rate7 u8 | 比率 7 | 1 | 1 | 未知 | CRC 候选 |
| hash_B17D6EDE | N3Parts.hshCstringRef | N 3 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_B1F384DC | FishPattern s16 | 鱼 款式 | 1 | 2 | 未知 | CRC 候选 |
| hash_B219374F | ClothesPurposeLimit.hshCstringRef | 服装 用途 限制 | 1 | 4 | 未知 | CRC 候选 |
| hash_B22FCC5E | BackRotateOffsetX f32 | 背面 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_B244D814 | RotateOffsetX f32 | 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_B2540403 | SeasonWinterLevel u8 | 季节 冬季 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_B25A5F0B | Month2056 u8 | 月份 2056 | 1 | 1 | 未知 | CRC 候选 |
| hash_B2764C2D | ReFabricPattern5Color0 u8 | 重新 布料 款式 5 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_B2783DFC | Month2032 u8 | 月份 2032 | 1 | 1 | 未知 | CRC 候选 |
| hash_B2AC5428 | CanPutForBase u8 | 可 放置 用于 基础 | 1 | 1 | 未知 | CRC 候选 |
| hash_B305DEFD | Drink0 u32 | 饮料 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_B30C54F2 | S4Parts.hshCstringRef | S 4 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_B35E860E | FrontRotateOffsetZ f32 | 正面 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_B39B0D1D | LeftRotateOffsetZ f32 | 左 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_B3DA5C52 | HideDdmCap u8 | 隐藏 Ddm 帽子 | 1 | 1 | 未知 | CRC 候选 |
| hash_B3E69752 | Ftr1OffsetX s16 | 家具 1 偏移 X | 1 | 2 | 未知 | CRC 候选 |
| hash_B3F1A70F | ProbJanDaytime u16 | 1月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_B3FAAF0B | Action2_0.hshCstringRef | 动作 2 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_B418FB3B | NearCulling u8 | Near 剔除 | 1 | 1 | 未知 | CRC 候选 |
| hash_B421FA66 | IsNecessary4_2 u8 | 是否 必要 4 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_B422539E | NpcFtrActionInterest.hshCstringRef | NPC 家具 动作 兴趣 | 3 | 4 | 未知 | CRC 候选 |
| hash_B434805D | BalloonTalkLabelKey string4 | 气球 对话 标签 键 | 1 | 4 | 未知 | CRC 候选 |
| hash_B44DBF73 | Seasonality u32 | 季节性 | 1 | 4 | 未知 | CRC 候选 |
| hash_B4AB694D | MainIslandItemSwitch u8 | 主要 岛屿 道具 切换 | 1 | 1 | 未知 | CRC 候选 |
| hash_B4AB80A4 | NpcRoleSet.hshCstringRef | NPC 角色 集合 | 1 | 4 | 未知 | CRC 候选 |
| hash_B4C9609C | MaxValue3 u32 | 最大 数值 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_B4DC1FAD | Stage4 string32 | 阶段 4 | 1 | 32 | 未知 | CRC 候选 |
| hash_B4F1AB32 | SelectGrowUp u8 | 选择 成长 上 | 1 | 1 | 未知 | CRC 候选 |
| hash_B52FE52E | CanSellSimple u8 | 可 出售 Simple | 1 | 1 | 未知 | CRC 候选 |
| hash_B5677509 | SwapModelForDive u8 | 交换 模型 用于 潜水 | 1 | 1 | 未知 | CRC 候选 |
| hash_B5761610 | FlagsUiType.hshCstringRef | 标志 Ui 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_B58D7541 | DonateItemThird u16 | 捐赠 道具 Third | 1 | 2 | 未知 | CRC 候选 |
| hash_B5980451 | ReFabric s16 | 布料改造 | 1 | 2 | 未知 | CRC 候选 |
| hash_B5A652FA | ReefType.hshCstringRef | Reef 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_B5A8FC2E | Sakura_N u8 | 樱花 N | 1 | 1 | 未知 | CRC 候选 |
| hash_B5B58FF4 | NpcInteractionAsName string64 | NPC 交互 As 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_B5B5D5E4 | FlagLandReady s32 | 标志 土地 就绪 | 1 | 4 | 未知 | CRC 候选 |
| hash_B5C2DB65 | KO2Index s16 | KO 2 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_B5F54C3A | StartMoS3 u8 | 开始 月份 S 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_B619BA5C | DoorDecoZOffset f32 | 门 装饰 Z 偏移 | 1 | 4 | 未知 | CRC 候选 |
| hash_B61D49C8 | MainRoleID s8 | 主要 角色 ID | 1 | 1 | 未知 | CRC 候选 |
| hash_B62DAC63 | Evening u8 | 傍晚 | 1 | 1 | 未知 | CRC 候选 |
| hash_B63221AE | WeekSouth u8 | 周 南 | 1 | 1 | 未知 | CRC 候选 |
| hash_B64FEDAD | NormalScaleMaskG f32 | 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_B662662C | RideHeight f32 | Ride 高度 | 1 | 4 | 未知 | CRC 候选 |
| hash_B6839C10 | ReFabricPattern7Color0 u8 | 重新 布料 款式 7 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_B694C63B | ContinuousTime u16 | Continuous 时间 | 1 | 2 | 未知 | CRC 候选 |
| hash_B6B44FCE | NormalScaleHR f32 | 法线 缩放 HR | 1 | 4 | 未知 | CRC 候选 |
| hash_B6BAFDFD | ItemHHASituation2.hshCstringRef | 道具 快乐家协会 情境 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_B6D86727 | ProbFebruayMorning u16 | 2月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_B6DCFCA4 | InnerType110 u8 | 内侧 类型 110 | 1 | 1 | 未知 | CRC 候选 |
| hash_B6E2FF22 | Day2003 u8 | 日 2003 | 1 | 1 | 未知 | CRC 候选 |
| hash_B6F501D2 | HouseShapeUniqueID u16 | 房屋 形状 唯一 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_B6F6977B | Stage10Hash stringMurmurHash | 阶段 10 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_B74596DB | UnlockTheme14 u16 | 解锁 主题 14 | 1 | 2 | 未知 | CRC 候选 |
| hash_B76B7D37 | WatchItem u16 | 观察 道具 | 3 | 2 | 未知 | CRC 候选 |
| hash_B7991712 | MoveTool3 u16 | 移动 工具 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_B7A46956 | PicItem u16 | 图片 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_B7A6C4A8 | CastType u8 | 出场 类型 | 1 | 3 | 未知 | CRC 候选 |
| hash_B7C9DD05 | EscapeScale f32 | Escape 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_B7CCCD84 | Color2.hshCstringRef | 颜色 2 | 2 | 4 | 未知 | CRC 候选 |
| hash_B80A6246 | RoomSizeX s16 | 房间 X 方向尺寸 | 1 | 2 | 未知 | CRC 候选 |
| hash_B8117FFD | ProbMarchMidnight u16 | 3月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_B82DB36E | NotWithTitleSan u8 | 非 带有 标题 San | 1 | 1 | 未知 | CRC 候选 |
| hash_B83CD0E1 | IsHide2_1 u8 | 是否 隐藏 2 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_B8C6E47E | Month2027 u8 | 月份 2027 | 1 | 1 | 未知 | CRC 候选 |
| hash_B8CC232C | ItemName string64 | 道具 名称 | 3 | 64 | 未知 | CRC 候选 |
| hash_B8E42602 | DisableAtRemoveObjEvent u8 | 禁用 在 移除 对象 事件 | 1 | 1 | 未知 | CRC 候选 |
| hash_B8E48689 | Month2043 u8 | 月份 2043 | 1 | 1 | 未知 | CRC 候选 |
| hash_B91EA6C2 | CaptureDoorOrnamentIcon u8 | 捕捉 门 Ornament 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_B92288A3 | PreMsgLabelValue u8 | Pre 消息 标签 数值 | 1 | 1 | 未知 | CRC 候选 |
| hash_B92C3183 | EventFlowEntryName string40 | 事件 流程 入口 名称 | 1 | 40 | 未知 | CRC 候选 |
| hash_B9507563 | GE1Index s16 | GE 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_B96C2DB5 | ProbOctoberMidnight u16 | 10月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_B98477A7 | Food2 u32 | 食物 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_B99C565A | ViewSortID u16 | 视图 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_B9B03CD7 | StartDayN3 u8 | 开始 日 N 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_B9C26FEA | Stage2 string32 | 阶段 2 | 1 | 32 | 未知 | CRC 候选 |
| hash_B9E9F361 | TimeZoneOutdoorMidnightLevel u8 | 时间 区域 室外 午夜 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_BA007E4F | ReadyDays u8 | 就绪 天数 | 1 | 1 | 未知 | CRC 候选 |
| hash_BA199DF0 | DisableEmoticon u8 | 禁用 表情 | 1 | 1 | 未知 | CRC 候选 |
| hash_BA2E1FD4 | Season_S u8 | 季节 S | 1 | 1 | 未知 | CRC 候选 |
| hash_BA4FD546 | ItemOrderSale.hshCstringRef | 道具 顺序 Sale | 1 | 4 | 未知 | CRC 候选 |
| hash_BA8E0544 | FlagPlayerAnnounceUnlock s32 | 标志 玩家 公告 解锁 | 1 | 4 | 未知 | CRC 候选 |
| hash_BAA1115F | FashionThemeVacation u8 | 时尚 主题 Vacation | 1 | 1 | 未知 | CRC 候选 |
| hash_BACE6554 | AppearFg u8 | 出现 Fg | 1 | 3 | 未知 | CRC 候选 |
| hash_BADBF4D7 | Day3 u8 | 日 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_BAEA4B1E | SortID u16 | 排序 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_BB0B5F4E | BackTransOffsetY f32 | 背面 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_BB39C184 | FrontTransOffsetY f32 | 正面 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_BB4055CD | Stage4Hash stringMurmurHash | 阶段 4 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_BB66EDCB | LabelShort string128 | 标签 短 | 1 | 128 | 未知 | CRC 候选 |
| hash_BB916530 | IsNecessary3_1 u8 | 是否 必要 3 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_BB9C816E | Umbrella u16 | 伞 | 2 | 2 | 未知 | CRC 候选 |
| hash_BB9DEC57 | ReFabricPattern1Color0 u8 | 重新 布料 款式 1 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_BBC20C54 | RefabricPattern6LightColor u32 | 布料改造 款式 6 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_BBFB0EAF | SNpcID0 u16 | S NPC ID 0 | 1 | 2 | 未知 | CRC 候选 |
| hash_BBFF9E89 | Reward5 u32 | 奖励 5 | 1 | 4 | 未知 | CRC 候选 |
| hash_BC17575D | StartDayS4 u8 | 开始 日 S 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_BC5C26A0 | Day2016 u8 | 日 2016 | 1 | 1 | 未知 | CRC 候选 |
| hash_BC5F2A7B | MustItem0 u16 | 必须 道具 0 | 1 | 2 | 未知 | CRC 候选 |
| hash_BCB13DAF | HalfUnitSizeZ u8 | Z 方向半格尺寸 | 1 | 1 | ItemSize.bcsv: height_half_tiles | CRC 候选 |
| hash_BCF5D17A | DiyRecipeID s16 | DIY 配方 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_BD2D4D00 | UnlockTheme37 u16 | 解锁 主题 37 | 1 | 2 | 未知 | CRC 候选 |
| hash_BD37BFD7 | Stage0 string32 | 阶段 0 | 1 | 32 | 未知 | CRC 候选 |
| hash_BD439866 | EUes u8 | E Ues | 1 | 1 | 未知 | CRC 候选 |
| hash_BD5D059F | UnlockTheme5 u16 | 解锁 主题 5 | 1 | 2 | 未知 | CRC 候选 |
| hash_BD5EB43F | OnepieceLNormalScaleMaskA f32 | 连衣裙 L 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_BD7682F5 | MaxValue u8 | 最大值 | 3 | 1 | 未知 | CRC 候选 |
| hash_BD859433 | GroundSnowHoleColorString string16 | 地面 雪 洞 颜色 字符串 | 1 | 16 | 未知 | CRC 候选 |
| hash_BDD4DC0F | GroupActivityPlacementType u8 | 分组 活动 摆放 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_BE17C845 | NutItem u16 | Nut 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_BE26D70E | EventLabel string64 | 事件 标签 | 1 | 64 | 未知 | CRC 候选 |
| hash_BE2FAE51 | NpcSynchroDirection.hshCstringRef | NPC 同步 方向 | 2 | 4 | 未知 | CRC 候选 |
| hash_BE6737AC | SortID s16 | 排序 ID | 4 | 2 | 未知 | CRC 候选 |
| hash_BE776E71 | StageName.hshCstringRef | 阶段 名称 | 6 | 4 | 未知 | CRC 候选 |
| hash_BE782346 | SpecialSLink u8 | 特殊 S 链接 | 3 | 1 | 未知 | CRC 候选 |
| hash_BE7B0B26 | Dream2 u32 | 梦境 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_BE9111D5 | UnlockTheme22 u16 | 解锁 主题 22 | 1 | 2 | 未知 | CRC 候选 |
| hash_BE9EE5F8 | ClosePlayerFlagId s32 | 关闭 玩家 标志 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_BEA3E8B8 | IsSwingFtr u8 | 是否 摆动 家具 | 1 | 1 | 未知 | CRC 候选 |
| hash_BEA82491 | Rate0_0 s8 | 比率 0 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_BEA84522 | AiEquipTrend.hshCstringRef | AI 装备 Trend | 1 | 4 | 未知 | CRC 候选 |
| hash_BEB816C2 | Ftr2OffsetZ s16 | 家具 2 偏移 Z | 1 | 2 | 未知 | CRC 候选 |
| hash_BED25A86 | AttrClearMoving u8 | 属性 清除 Moving | 3 | 1 | 未知 | CRC 候选 |
| hash_BEE071DA | FakeArtConvertId u16 | Fake 艺术品 Convert ID | 1 | 2 | 未知 | CRC 候选 |
| hash_BEFC0BAF | UnlockEventBit u8 | 解锁 事件 位 | 1 | 5 | 未知 | CRC 候选 |
| hash_BF683C6A | ReFabricPattern3Color0 u8 | 重新 布料 款式 3 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_BF80F575 | ItemNpcRoomLayoutLimit.hshCstringRef | 道具 NPC 房间 布局 限制 | 1 | 4 | 未知 | CRC 候选 |
| hash_BFBA247C | SlopeTableId u16 | Slope 表 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_BFFC1B04 | InnerType031 u8 | 内侧 类型 031 | 1 | 1 | 未知 | CRC 候选 |
| hash_C0088804 | ASCommand7 string66 | AS 指令 7 | 1 | 66 | 未知 | CRC 候选 |
| hash_C019A854 | ReBodyID u16 | 重新 主体 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_C01E47A7 | ModelType.hshCstringRef | 模型 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_C033D95A | UseSWalkNeck u8 | 使用 S 行走 Neck | 1 | 1 | 未知 | CRC 候选 |
| hash_C03D3B79 | EndMoN3 u8 | 结束 月份 N 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_C05200E1 | TexName string32 | 纹理 名称 | 1 | 34 | 未知 | CRC 候选 |
| hash_C0BD52A5 | TshirtsLNormalScaleMaskA f32 | T恤 L 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_C1132E82 | DefaultWall u16 | 默认 墙壁 | 1 | 2 | 未知 | CRC 候选 |
| hash_C11AF347 | ProbDecMorningAndEvening u16 | 12月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_C13B5DCF | SNpcID2 u16 | S NPC ID 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_C150FBA5 | EventFtrDirection.hshCstringRef | 事件 家具 方向 | 1 | 4 | 未知 | CRC 候选 |
| hash_C1718183 | RoomSizeX s8 | 房间 X 方向尺寸 | 1 | 1 | 未知 | CRC 候选 |
| hash_C17C7CA8 | MainDays u8 | 主要 天数 | 1 | 1 | 未知 | CRC 候选 |
| hash_C187C516 | Height f32 | 高度 | 1 | 4 | 未知 | CRC 候选 |
| hash_C1BB7D2D | VisibleOff u8 | 可见 关闭 | 1 | 3 | 未知 | CRC 候选 |
| hash_C1FB0035 | HelperBoneResName string64 | Helper 骨骼 资源 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_C206B71E | Month2007 u8 | 月份 2007 | 1 | 1 | 未知 | CRC 候选 |
| hash_C223CAE9 | FurnitureActionCandidate u8 | 家具 动作 Candidate | 1 | 11 | 未知 | CRC 候选 |
| hash_C233727B | ItemRemakeType u8 | 道具 改造 类型 | 2 | 2 | 未知 | CRC 候选 |
| hash_C240123A | RefabricNum1 s8 | 布料改造 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_C25CDC73 | CheekOrangeColorB f32 | 脸颊 橙色 颜色 B | 1 | 4 | 未知 | CRC 候选 |
| hash_C29A207D | Action1_6.hshCstringRef | 动作 1 6 | 1 | 4 | 未知 | CRC 候选 |
| hash_C2D9B3C9 | ElectionRate5 u8 | 选举 比率 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_C2E9EEBE | EUnl u8 | E Unl | 1 | 1 | 未知 | CRC 候选 |
| hash_C3239C76 | Fog_S u8 | 雾 S | 1 | 1 | 未知 | CRC 候选 |
| hash_C33A894E | ItemNameUniqueID u16 | 道具名称唯一ID | 5 | 2 | 未知 | CRC 候选 |
| hash_C34424C7 | Food0 u32 | 食物 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_C35C5AF7 | BO1Index s16 | BO 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_C35F78ED | TargetShadow u8 | 目标 阴影 | 1 | 2 | 未知 | CRC 候选 |
| hash_C37A683C | CantTakeOver u8 | Cant Take Over | 1 | 1 | 未知 | CRC 候选 |
| hash_C3BB3363 | SortIdEUnl u16 | 排序 ID E Unl | 1 | 2 | 未知 | CRC 候选 |
| hash_C407CDFB | Stage16Hash stringMurmurHash | 阶段 16 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_C436CE69 | AttrClearNAChange u8 | 属性 清除 NA 变更 | 1 | 1 | 未知 | CRC 候选 |
| hash_C44B9674 | IsSelectQuestS u8 | 是否 选择 任务 S | 1 | 1 | 未知 | CRC 候选 |
| hash_C45142B5 | UnlockTheme20 u16 | 解锁 主题 20 | 1 | 2 | 未知 | CRC 候选 |
| hash_C47845A2 | Ftr2OffsetX s16 | 家具 2 偏移 X | 1 | 2 | 未知 | CRC 候选 |
| hash_C47FE703 | IsEDay u8 | 是否 E 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_C4BB5846 | Dream0 u32 | 梦境 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_C4C72B83 | SPWeather_S u8 | SP 天气 S | 1 | 1 | 未知 | CRC 候选 |
| hash_C4FD5839 | ASCommand5 string66 | AS 指令 5 | 1 | 66 | 未知 | CRC 候选 |
| hash_C53C4864 | InnerType011 u8 | 内侧 类型 011 | 1 | 1 | 未知 | CRC 候选 |
| hash_C54EAAD9 | RebodyPattern0LightColor.hshCstringRef | 主体改造 款式 0 光照 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_C5567172 | ObjCheckType.hshCstringRef | 对象 检查 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_C57D2EB8 | ProbNovMorningAndEvening u16 | 11月 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_C59A50F3 | EndMoS4 u8 | 结束 月份 S 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_C61BE841 | IsAppearSouth u8 | 是否 出现 南 | 2 | 1 | 未知 | CRC 候选 |
| hash_C61C279A | ReBody s16 | 主体改造 | 1 | 2 | 未知 | CRC 候选 |
| hash_C6233FDF | TargetNPCLabel string8 | 目标 NPC 标签 | 1 | 10 | 未知 | CRC 候选 |
| hash_C69C75C0 | Day2036 u8 | 日 2036 | 1 | 1 | 未知 | CRC 候选 |
| hash_C6BE1737 | Day2052 u8 | 日 2052 | 1 | 1 | 未知 | CRC 候选 |
| hash_C70BE94F | LocalizeAnim u8 | 本地化 动画 | 1 | 1 | 未知 | CRC 候选 |
| hash_C7208ADE | HeredityA u8 | 继承 A | 1 | 1 | 未知 | CRC 候选 |
| hash_C733AA77 | Variation u16 | 变体 | 1 | 2 | 未知 | CRC 候选 |
| hash_C74F6B43 | ProbJunDaytime u16 | 6月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_C785E927 | StartDaySouth u16 | 开始 日 南 | 1 | 2 | 未知 | CRC 候选 |
| hash_C79325F5 | AchievableNum u16 | Achievable 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_C79D56FF | UnlockTheme7 u16 | 解锁 主题 7 | 1 | 2 | 未知 | CRC 候选 |
| hash_C7A5B572 | NormalScaleBottomsA f32 | 法线 缩放 下装 A | 1 | 4 | 未知 | CRC 候选 |
| hash_C7AD2FDF | CharacterId u32 | Character ID | 1 | 4 | 未知 | CRC 候选 |
| hash_C7E37192 | ProbSeptemberMidnight u16 | 9月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_C7ED1E60 | UnlockTheme35 u16 | 解锁 主题 35 | 1 | 2 | 未知 | CRC 候选 |
| hash_C7F82AFD | StepLevel.hshCstringRef | 步骤 等级 | 1 | 4 | 未知 | CRC 候选 |
| hash_C833B068 | FloorTableId u16 | 地板 表 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_C84432B7 | 未知 | 航平旅行引用 ID（语义别名：KappeiTourReferenceId） | 1 | 2 | 未知 | 原名未恢复 / row_hypothesis |
| hash_C86E60D5 | DefaultDoorUniqueID u16 | 默认 门 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_C8848B74 | RotateOffsetZ f32 | 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_C888BFFA | ProbAugustMidnight u16 | 8月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_C89FB7AF | Storage u8 | Storage | 1 | 5 | 未知 | CRC 候选 |
| hash_C8A5A762 | CanSetInTrashBox u8 | 可 集合 内 Trash Box | 1 | 1 | 未知 | CRC 候选 |
| hash_C8B86E9C | Month2012 u8 | 月份 2012 | 1 | 1 | 未知 | CRC 候选 |
| hash_C8EDB421 | NormalScaleNG f32 | 法线 缩放 NG | 1 | 4 | 未知 | CRC 候选 |
| hash_C8EF9F3E | BackRotateOffsetZ f32 | 背面 旋转 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_C8F02583 | EventWeatherArea.hshCstringRef | 事件 天气 区域 | 1 | 4 | 未知 | CRC 候选 |
| hash_C90AB4C4 | RoomWindowModelType.hshCstringRef | 房间 窗户 模型 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_C926C432 | Ftr1OffsetZ s16 | 家具 1 偏移 Z | 1 | 2 | 未知 | CRC 候选 |
| hash_C93DB65A | DecoForbidden u8 | 装饰 Forbidden | 1 | 1 | 未知 | CRC 候选 |
| hash_C94120C4 | UnlockTheme29 u16 | 解锁 主题 29 | 1 | 2 | 未知 | CRC 候选 |
| hash_C95B5E7D | LeftRotateOffsetX f32 | 左 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_C978D56E | NormalNpc u8 | 法线 NPC | 1 | 1 | 未知 | CRC 候选 |
| hash_C994C199 | EndDayS2 u8 | 结束 日 S 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_C99ED56E | FrontRotateOffsetX f32 | 正面 旋转 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_C9B10F4D | Stage2Hash stringMurmurHash | 阶段 2 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_C9C58D9D | Drink2 u32 | 饮料 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_C9E3287E | ASCommand3 string66 | AS 指令 3 | 1 | 66 | 未知 | CRC 候选 |
| hash_CAD74E4E | ItemData string32 | 道具 数据 | 1 | 32 | 未知 | CRC 候选 |
| hash_CAEF5F77 | StampRackItemNameC u16 | 印章 架子 道具 名称 C | 1 | 2 | 未知 | CRC 候选 |
| hash_CB12CA46 | FacilityActionType4.hshCstringRef | 设施 动作 类型 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_CB358E51 | AnimeTypeBasket string64 | 动画 类型 Basket | 1 | 64 | 未知 | CRC 候选 |
| hash_CB4209B6 | Param3.hshCstringRef | 参数 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_CB5EB33F | RemakeID s16 | 改造 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_CB625AD7 | DesignSpring2 u16 | 设计 春季 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_CB64C9A0 | StrSortIdEUde u16 | 字符串 排序 ID E Ude | 1 | 2 | 未知 | CRC 候选 |
| hash_CB7385A8 | EnableChangeSwitchPlayer u8 | 启用 变更 切换 玩家 | 1 | 4 | 未知 | CRC 候选 |
| hash_CBBE9D2D | ScoreMultiplier f32 | 分数 Multiplier | 3 | 4 | 未知 | CRC 候选 |
| hash_CBC01F0D | RoomWindowWallType.hshCstringRef | 房间 窗户 墙壁 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_CBDDAC24 | BoatOffsetZ s16 | 船 偏移 Z | 1 | 2 | 未知 | CRC 候选 |
| hash_CBFD332A | QuotaNum u8 | 配额 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_CC00CEB5 | Day2047 u8 | 日 2047 | 1 | 1 | 未知 | CRC 候选 |
| hash_CC136EB5 | Bottoms u16 | 下装 | 6 | 2 | 未知 | CRC 候选 |
| hash_CC198281 | MaskPurposeLimit u8 | 遮罩 用途 限制 | 3 | 1, 3 | 未知 | CRC 候选 |
| hash_CC1CAFC4 | InnerType130 u8 | 内侧 类型 130 | 1 | 1 | 未知 | CRC 候选 |
| hash_CC22AC42 | Day2023 u8 | 日 2023 | 1 | 1 | 未知 | CRC 候选 |
| hash_CC24374E | StructureInfoHouseType.hshCstringRef | 结构 信息 房屋 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_CC2BEC37 | UnlockRoom2SecondEdit u8 | 解锁 房间 2 第二 编辑 | 1 | 3 | 未知 | CRC 候选 |
| hash_CC33AA13 | EndDayN5 u8 | 结束 日 N 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_CCC4AFCB | DesignSummer1 u16 | 设计 夏季 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_CCD4C25F | TalkValueVillager u16 | 对话 数值 岛民 | 1 | 2 | 未知 | CRC 候选 |
| hash_CCD794D1 | SortIdUSen u16 | 排序 ID U Sen | 1 | 2 | 未知 | CRC 候选 |
| hash_CCF68EBE | ChangeDemo.hshCstringRef | 变更 演出 | 1 | 4 | 未知 | CRC 候选 |
| hash_CD16F843 | ASCommand1 string66 | AS 指令 1 | 1 | 66 | 未知 | CRC 候选 |
| hash_CD489051 | Rate1_1 s8 | 比率 1 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_CD594472 | MoveTool1 u16 | 移动 工具 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_CD61CE25 | HobbyEducationLevel u8 | 爱好 Education 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_CD85C5BB | UnlockTheme16 u16 | 解锁 主题 16 | 1 | 2 | 未知 | CRC 候选 |
| hash_CD89FFEB | CombinationNum u16 | Combination 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_CDE5164F | NPCUnlock.hshCstringRef | NPC 解锁 | 1 | 4 | 未知 | CRC 候选 |
| hash_CE0933FC | MaxValue1 u32 | 最大 数值 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_CE420C64 | ProbOctNight u16 | 10月 夜间概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_CE73FA91 | IsHide3 u8 | 是否 隐藏 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_CE7F97DE | OuterLNormalScaleMaskB f32 | 外侧 L 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_CE827D47 | Shoes u16 | 鞋 | 6 | 2 | 未知 | CRC 候选 |
| hash_CEB81AFF | BoardDesign u8 | 公告板 设计 | 1 | 1 | 未知 | CRC 候选 |
| hash_CEE3B224 | SpAllType u8 | Sp All 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_CF30F72D | OpenLandFlagId s32 | 打开 土地 标志 ID | 1 | 4 | 未知 | CRC 候选 |
| hash_CF408E5D | Action0_2.hshCstringRef | 动作 0 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_CFCA2366 | TimeZoneIndoorNightLevel u8 | 时间 区域 室内 夜间 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_D01F154E | TransOffsetY f32 | 位移 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_D0241896 | OT1Index s16 | OT 1 索引 | 1 | 2 | 未知 | CRC 候选 |
| hash_D0609ACC | Room0.hshCstringRef | 房间 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_D069F90C | StageName string32 | 阶段 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_D06C1C27 | ElectionRate6 u8 | 选举 比率 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_D06D98DC | AnimeTypeSmartPhone string64 | 动画 类型 Smart Phone | 1 | 64 | 未知 | CRC 候选 |
| hash_D086A528 | TargetInsect u8 | 目标 昆虫 | 1 | 14 | 未知 | CRC 候选 |
| hash_D0917A07 | Month2060 u8 | 月份 2060 | 1 | 1 | 未知 | CRC 候选 |
| hash_D094759A | NWParts.hshCstringRef | NW 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_D0B318F0 | Month2004 u8 | 月份 2004 | 1 | 1 | 未知 | CRC 候选 |
| hash_D0F5BDD4 | RefabricNum2 s8 | 布料改造 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_D15ACE6A | Identifier s8 | Identifier | 1 | 1 | 未知 | CRC 候选 |
| hash_D15BDBB6 | ItemKind3 u16 | 道具 类别 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_D1B1B453 | InvisibleEarR u8 | 不可见 耳朵 R | 1 | 1 | 未知 | CRC 候选 |
| hash_D1B5C570 | HarvestFishExchangeIngredients u8 | 收获 鱼 交换 Ingredients | 1 | 1 | 未知 | CRC 候选 |
| hash_D1DCCBCD | BaseItem u16 | 基础 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_D1F6DAE0 | Type u8 | 类型 | 1 | 3 | 未知 | CRC 候选 |
| hash_D200FFD3 | WatchAngleY f32 | 观察 角度 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_D223F25C | CanPutWallAndFloor u8 | 可 放置 墙壁 及 地板 | 1 | 1 | 未知 | CRC 候选 |
| hash_D22A8FC9 | CNzh u8 | C Nzh | 1 | 1 | 未知 | CRC 候选 |
| hash_D244561E | TshirtsHNormalScaleMaskA f32 | T恤 H 法线 缩放 遮罩 A | 1 | 4 | 未知 | CRC 候选 |
| hash_D261E06C | Seat0 u16 | 座位 0 | 1 | 2 | 未知 | CRC 候选 |
| hash_D29880F2 | DesignAutumn1 u16 | 设计 秋季 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_D299F964 | SelectableBeginDate2 u16 | 可选择 开始 日期 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_D29E204E | Music1 u32 | 音乐 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_D2A5C5CF | DemoType u8 | 演出 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_D2AB4A8F | TimeZoneIndoorEveningLevel u8 | 时间 区域 室内 傍晚 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_D2C59675 | LightParamName string32 | 光照 参数 名称 | 2 | 32 | 未知 | CRC 候选 |
| hash_D35F282E | Material4 u16 | 材质 4 | 1 | 2 | 未知 | CRC 候选 |
| hash_D3978A49 | 未知 | 生活提示条件标志（语义别名：LifeTipConditionFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_D3BC90C0 | SortIdEUen u16 | 排序 ID E Uen | 1 | 2 | 未知 | CRC 候选 |
| hash_D3D4284E | ShopType.hshCstringRef | 商店 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D3E7208F | Morning u8 | 早晨 | 1 | 1 | 未知 | CRC 候选 |
| hash_D3E74A04 | Action1_5.hshCstringRef | 动作 1 5 | 1 | 4 | 未知 | CRC 候选 |
| hash_D40BB8D9 | Day2051 u8 | 日 2051 | 1 | 1 | 未知 | CRC 候选 |
| hash_D41A5598 | N2Parts.hshCstringRef | N 2 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_D420D79D | ProbAprilNight u16 | 4月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_D429DA2E | Day2035 u8 | 日 2035 | 1 | 1 | 未知 | CRC 候选 |
| hash_D42DF0B4 | OpenRecordNum u16 | 打开 Record 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_D4697FF8 | CanPlant u8 | 可 植物 | 1 | 1 | 未知 | CRC 候选 |
| hash_D4892D19 | AudioMusicID s16 | 音频 音乐 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_D4F43B0B | 未知 | 改造规则标志（语义别名：RemakeRuleFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_D4F5B3E6 | StampRackSetDirection s16 | 印章 架子 集合 方向 | 1 | 2 | 未知 | CRC 候选 |
| hash_D507DF3E | 未知 | NPC 出场日程条件（语义别名：NpcCastScheduleCondition） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_D5217761 | 未知 | 动画可选参数（语义别名：AnimationOptionalParameter） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_D55938BD | DefaultValue u8 | 默认 数值 | 3 | 1 | 未知 | CRC 候选 |
| hash_D5692BFF | Day u8 | 日 | 1 | 1 | 未知 | CRC 候选 |
| hash_D5952530 | HeredityB u8 | 继承 B | 1 | 1 | 未知 | CRC 候选 |
| hash_D598C60D | Speciality0 u32 | 特产 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_D59FF85E | BuryItem2 u16 | 埋藏 道具 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_D5A8BF7E | Dir.hshCstringRef | 方向 | 1 | 4 | 未知 | CRC 候选 |
| hash_D605C40D | NpcBegin u8 | NPC 开始 | 1 | 1 | 未知 | CRC 候选 |
| hash_D606A6C4 | ItemKindUIType.hshCstringRef | 道具 类别 UI 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D61205D0 | ItemHHATheme.hshCstringRef | 道具 快乐家协会 主题 | 1 | 4 | 未知 | CRC 候选 |
| hash_D62525D0 | HHABaseScore s16 | 快乐家协会 基础 分数 | 1 | 2 | 未知 | CRC 候选 |
| hash_D6424DB4 | ItemKind10 u16 | 道具 类别 10 | 1 | 2 | 未知 | CRC 候选 |
| hash_D654D84C | NormalScaleHB f32 | 法线 缩放 HB | 1 | 4 | 未知 | CRC 候选 |
| hash_D6597C9D | Sports1 u32 | 运动 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_D65F862B | LampType.hshCstringRef | Lamp 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D6704D8B | StructureInfoType.hshCstringRef | 结构 信息 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D67D2C51 | MoveSpot1 u32 | 移动 地点 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_D6B82305 | NeedType u8 | 需要 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_D6DA40E2 | OnepieceNNormalScaleMaskG f32 | 连衣裙 N 法线 缩放 遮罩 G | 1 | 4 | 未知 | CRC 候选 |
| hash_D75966ED | Month2049 u8 | 月份 2049 | 1 | 1 | 未知 | CRC 候选 |
| hash_D789E78A | InnerType012 u8 | 内侧 类型 012 | 1 | 1 | 未知 | CRC 候选 |
| hash_D7DED52A | LabelType u8 | 标签 类型 | 1 | 1 | 未知 | CRC 候选 |
| hash_D7F212EA | FossilSet.hshCstringRef | 化石 集合 | 1 | 4 | 未知 | CRC 候选 |
| hash_D862189A | DefaultSwitch u8 | 默认 切换 | 1 | 1 | 未知 | CRC 候选 |
| hash_D8727D7D | DefaultWallUniqueID u16 | 默认 墙壁 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_D89A0DB0 | SelectWeight u8 | 选择 Weight | 2 | 1 | 未知 | CRC 候选 |
| hash_D8F76B76 | DayNorth u8 | 日 北 | 2 | 1 | 未知 | CRC 候选 |
| hash_D941DB12 | EquipRule string32 | 装备 规则 | 1 | 32 | 未知 | CRC 候选 |
| hash_D943E2BD | ChangeFallType.hshCstringRef | 变更 秋季 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D95F1F46 | Day2009 u8 | 日 2009 | 1 | 1 | 未知 | CRC 候选 |
| hash_D9855B4E | ItemNpcFtrWatchType.hshCstringRef | 道具 NPC 家具 观察 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_D9A1F501 | RoomType u32 | 房间 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_DA01C243 | EyeAcceID u16 | 眼睛 饰品 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_DA0B5C29 | WaitScale f32 | 等待 缩放 | 1 | 4 | 未知 | CRC 候选 |
| hash_DA0C5D33 | ForFesNpc u8 | 用于 Fes NPC | 1 | 1 | 未知 | CRC 候选 |
| hash_DA0DC172 | Month2011 u8 | 月份 2011 | 1 | 1 | 未知 | CRC 候选 |
| hash_DA3F63CF | Param0.hshCstringRef | 参数 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_DA5F0470 | SortIdEUru u16 | 排序 ID E Uru | 1 | 2 | 未知 | CRC 候选 |
| hash_DA63A0CC | WallType u16 | 墙壁 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_DA6FA03F | FacilityActionType7.hshCstringRef | 设施 动作 类型 7 | 1 | 4 | 未知 | CRC 候选 |
| hash_DAAF8BA0 | ToyItemID u16 | Toy 道具 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_DAC2C157 | ProbOctoberNight u16 | 10月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_DAD11ECA | OutdoorFtr2 u16 | 室外 家具 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_DADFA19A | EnglishName string32 | English 名称 | 1 | 34 | 未知 | CRC 候选 |
| hash_DAE27694 | CanSetChest u8 | 可 集合 箱子 | 1 | 1 | 未知 | CRC 候选 |
| hash_DAF0238C | ItemCatalogType.hshCstringRef | 道具 目录 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_DB015556 | Special u8 | 特殊 | 1 | 1 | 未知 | CRC 候选 |
| hash_DB1A2F07 | ItemFrom.hshCstringRef | 道具 来自 | 1 | 4 | 未知 | CRC 候选 |
| hash_DB216E77 | EndDayS1 u8 | 结束 日 S 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_DB2881DB | Comic2 u32 | 漫画 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_DB46D805 | Amount4 u16 | 数量 4 | 1 | 2 | 未知 | CRC 候选 |
| hash_DCA79149 | Reaction u8 | 反应 | 1 | 1 | 未知 | CRC 候选 |
| hash_DCFB52E8 | ResName string32 | 资源 名称 | 8 | 32, 34 | 未知 | CRC 候选 |
| hash_DD1CAEE7 | ProbDecemberNight u16 | 12月 夜间概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_DD2D2ADC | VmRhythmType.hshCstringRef | Vm Rhythm 类型 | 2 | 4 | 未知 | CRC 候选 |
| hash_DD59B554 | ItemPlacementKind.hshCstringRef | 道具 摆放 类别 | 1 | 4 | 未知 | CRC 候选 |
| hash_DD9617A2 | FacilityModelVariation.hshCstringRef | 设施 模型 变体 | 1 | 4 | 未知 | CRC 候选 |
| hash_DDA5D566 | GenderAsia.hshCstringRef | 性别 Asia | 1 | 4 | 未知 | CRC 候选 |
| hash_DDC5DD98 | Month2038 u8 | 月份 2038 | 1 | 1 | 未知 | CRC 候选 |
| hash_DDD67EA4 | MinAmount s32 | 最小 数量 | 1 | 4 | 未知 | CRC 候选 |
| hash_DDF1F8BF | NpcMsgBullfestCondition.hshCstringRef | NPC 消息 Bullfest 条件 | 1 | 4 | 未知 | CRC 候选 |
| hash_DE02419D | NpcFtrActionTool2 u16 | NPC 家具 动作 工具 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_DE29D5BC | HighlightColorG f32 | 高亮 颜色 G | 1 | 4 | 未知 | CRC 候选 |
| hash_DE3DE424 | Action0_1.hshCstringRef | 动作 0 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_DE78DF0F | CaptureCategory.hshCstringRef | 捕捉 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_DE8605FD | EndDayN6 u8 | 结束 日 N 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_DE9703AC | Day2020 u8 | 日 2020 | 1 | 1 | 未知 | CRC 候选 |
| hash_DE996B8D | Stage3Hash stringMurmurHash | 阶段 3 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_DEA47C79 | PenColor2 u16 | 笔 颜色 2 | 2 | 2 | 未知 | CRC 候选 |
| hash_DEA9002A | InnerType133 u8 | 内侧 类型 133 | 1 | 1 | 未知 | CRC 候选 |
| hash_DEB2AB2A | MaterialID u16 | 材质 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_DEB3F8DC | NpcDefaultSwitch u8 | NPC 默认 切换 | 1 | 1 | 未知 | CRC 候选 |
| hash_DEB48242 | GradeID u16 | 等级 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_DEB5615B | Day2044 u8 | 日 2044 | 1 | 1 | 未知 | CRC 候选 |
| hash_DED15A97 | ProbOctoberEvening2 u16 | 10月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_DF2156EB | ProbDecemberEvening1 u16 | 12月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_DF2EADB2 | ProbMarDaytime u16 | 3月 白天概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_DF33EE48 | NameboardPosX f32 | 名牌 位置 X | 1 | 4 | 未知 | CRC 候选 |
| hash_DF7AB4C3 | NpcSpResName string64 | NPC Sp 资源 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_DF881359 | ResourceName string32 | 资源 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_DFA56CB9 | StungResName string32 | Stung 资源 名称 | 1 | 34 | 未知 | CRC 候选 |
| hash_DFAC08DF | ProbMarchEvening2 u16 | 3月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_DFACC347 | DonateItemFourth u16 | 捐赠 道具 Fourth | 1 | 2 | 未知 | CRC 候选 |
| hash_DFB46994 | TopsID u16 | 上装 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_DFC1EDB2 | ForBuiltNpc u8 | 用于 建造 NPC | 1 | 1 | 未知 | CRC 候选 |
| hash_DFFD3FBF | Rate1_2 s8 | 比率 1 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_E0563503 | ReBodyPatternRejectNum s8 | 重新 主体 款式 Reject 数量 | 1 | 1 | 未知 | CRC 候选 |
| hash_E060D3CD | ProgramHandlingType u16 | 程序 Handling 类型 | 2 | 2 | 未知 | CRC 候选 |
| hash_E060F48F | Action1_0.hshCstringRef | 动作 1 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_E06FB090 | ItemSize.hshCstringRef | 道具尺寸 | 2 | 4 | ItemParam.bcsv: size_ref_raw | CRC 候选 |
| hash_E07863AB | SpecialSelect u8 | 特殊 选择 | 1 | 1 | 未知 | CRC 候选 |
| hash_E0A5F428 | Month2028 u8 | 月份 2028 | 1 | 1 | 未知 | CRC 候选 |
| hash_E0E55820 | NormalScaleBottomsR f32 | 法线 缩放 下装 R | 1 | 4 | 未知 | CRC 候选 |
| hash_E0F10F2F | EndMoS2 u8 | 结束 月份 S 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_E0F6F32F | FlagLand2 s32 | 标志 土地 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_E113AC8D | SocksID u16 | 袜子 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_E188994E | NpcCreateType.hshCstringRef | NPC 创建 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_E1BF0894 | WallPlaceType.hshCstringRef | 墙壁 放置 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_E1C21E03 | UnlockEvent u16 | 解锁 事件 | 1 | 2 | 未知 | CRC 候选 |
| hash_E1D52A74 | Rate2_3 s8 | 比率 2 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_E1E934D5 | JudgeVisibleOn u8 | Judge 可见 开启 | 1 | 1 | 未知 | CRC 候选 |
| hash_E1EC58D6 | WherearenFieldActionTool u16 | 度假岛 场景 动作 工具 | 1 | 2 | 未知 | CRC 候选 |
| hash_E1FBFEDB | WherearenCatalogOpenItem u16 | 度假岛 目录 打开 道具 | 1 | 4 | 未知 | CRC 候选 |
| hash_E1FD904B | ReFabricPattern6Color1 u8 | 重新 布料 款式 6 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_E23C6453 | InsectPattern s16 | 昆虫 款式 | 1 | 2 | 未知 | CRC 候选 |
| hash_E23F2C58 | StampRackPutUnitZ s32 | 印章 架子 放置 单位 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_E24D9B0E | CaptureDiyIcon u8 | 捕捉 DIY 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_E253C7F8 | NameboardPosY f32 | 名牌 位置 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_E2760D00 | 未知 | 节庆装饰标志（语义别名：FestivalDecorationFlag） | 1 | 1 | 未知 | 原名未恢复 / row_hypothesis |
| hash_E2BFF7F5 | SendPlayReport u8 | Send 播放 Report | 3 | 1, 2, 4 | 未知 | CRC 候选 |
| hash_E2D0AC54 | PlacementKey string32 | 摆放 键 | 1 | 32 | 未知 | CRC 候选 |
| hash_E2EFE82D | AiEquipBackSeries2 u32 | AI 装备 背面 系列 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_E362682D | NpcFtrActionTool3 u16 | NPC 家具 动作 工具 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_E3A28616 | WindowUniqueID u16 | 窗户 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_E3A73129 | DoorBellName string32 | 门 Bell 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_E3C455C9 | PenColor3 u16 | 笔 颜色 3 | 2 | 2 | 未知 | CRC 候选 |
| hash_E3C6546A | ProbNovemberMorning u16 | 11月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_E3C9299A | InnerType123 u8 | 内侧 类型 123 | 1 | 1 | 未知 | CRC 候选 |
| hash_E3CBD090 | Param0 u8 | 参数 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_E3D548EB | Day2054 u8 | 日 2054 | 1 | 1 | 未知 | CRC 候选 |
| hash_E3EB7092 | OutdoorRefabricNum2 s8 | 室外 布料改造 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_E3F72A1C | Day2030 u8 | 日 2030 | 1 | 1 | 未知 | CRC 候选 |
| hash_E421A842 | PlaneChangeType.hshCstringRef | Plane 变更 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_E4361C86 | 未知 | 邮件附件分类 MurmurHash 列表（语义别名：MailAttachmentCategoryMurmurHashList） | 1 | 711 | 未知 | 原名未恢复 / native_behavior |
| hash_E43F36F6 | Day2019 u8 | 日 2019 | 1 | 1 | 未知 | CRC 候选 |
| hash_E441B193 | UnlockTiming u8 | 解锁 时机 | 1 | 4 | 未知 | CRC 候选 |
| hash_E447FE58 | ShareHouseSelectRate u8 | 共享 房屋 选择 比率 | 1 | 1 | 未知 | CRC 候选 |
| hash_E4697080 | CaptureClosetIcon u8 | 捕捉 衣柜 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_E486805C | DesignAlways1 u16 | 设计 始终 1 | 2 | 2 | 未知 | CRC 候选 |
| hash_E4B73F7D | ResNameReplaceMuseum string32 | 资源 名称 替换 博物馆 | 1 | 32 | 未知 | CRC 候选 |
| hash_E4FE6719 | TimeZoneOutdoorEveningLevel u8 | 时间 区域 室外 傍晚 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_E5084076 | ReFabricPattern4Color1 u8 | 重新 布料 款式 4 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_E50D3218 | DemoNetLockState u16 | 演出 网络 锁定 状态 | 1 | 2 | 未知 | CRC 候选 |
| hash_E52F0037 | VillageIntervalWaitVar u8 | 村庄 间隔 等待 Var | 2 | 1 | 未知 | CRC 候选 |
| hash_E5337BD9 | BcatLevel u8 | Bcat 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_E54E85D4 | SkinBaseColorG f32 | 皮肤 基础 颜色 G | 1 | 4 | 未知 | CRC 候选 |
| hash_E550ABDF | HideFoodCounter u8 | 隐藏 食物 Counter | 1 | 1 | 未知 | CRC 候选 |
| hash_E55664A5 | EndMoN5 u8 | 结束 月份 N 5 | 1 | 1 | 未知 | CRC 候选 |
| hash_E5644DDE | EUit u8 | E Uit | 1 | 1 | 未知 | CRC 候选 |
| hash_E5C221D5 | RadiusBOutdoor s8 | 半径 B 室外 | 1 | 1 | 未知 | CRC 候选 |
| hash_E626F1B5 | Amount5 u16 | 数量 5 | 1 | 2 | 未知 | CRC 候选 |
| hash_E6317726 | TalkValueVisitor u16 | 对话 数值 访客 | 1 | 2 | 未知 | CRC 候选 |
| hash_E638A9C7 | BoatLocated u8 | 船 Located | 1 | 1 | 未知 | CRC 候选 |
| hash_E65DF243 | CaptureFtrIcon u8 | 捕捉 家具 图标 | 1 | 1 | 未知 | CRC 候选 |
| hash_E6C63C5C | LandFlagKeyOFF string32 | 土地 标志 键 关闭 | 1 | 32 | 未知 | CRC 候选 |
| hash_E6FC6624 | HousePartsType u16 | 房屋 部件 类型 | 1 | 2 | 未知 | CRC 候选 |
| hash_E765B554 | PurposeTag u32 | 用途 标签 | 3 | 4 | 未知 | CRC 候选 |
| hash_E76DB92F | UseRainGoods u8 | 使用 雨 Goods | 1 | 3 | 未知 | CRC 候选 |
| hash_E76DE8C2 | Month2001 u8 | 月份 2001 | 1 | 1 | 未知 | CRC 候选 |
| hash_E79A054D | ProbJuneEvening2 u16 | 6月 傍晚 2概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_E7B2EC15 | ElectionRate3 u8 | 选举 比率 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_E7E1C6CD | Stage0Hash stringMurmurHash | 阶段 0 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_E7E965DB | PlayerNoEntry u8 | 玩家 无 入口 | 1 | 1 | 未知 | CRC 候选 |
| hash_E7FDBFF7 | TshirtsLNormalScaleMaskR f32 | T恤 L 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_E7FE7C60 | ProbSeptemberEvening1 u16 | 9月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_E807CA54 | OnepieceHNormalScaleMaskB f32 | 连衣裙 H 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_E8163031 | ReFabricPattern2Color1 u8 | 重新 布料 款式 2 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_E823CF8D | Rate1_7 s8 | 比率 1 7 | 1 | 1 | 未知 | CRC 候选 |
| hash_E83C30BE | ItemShopSeasonality.hshCstringRef | 道具 商店 季节性 | 1 | 4 | 未知 | CRC 候选 |
| hash_E873AEEA | ProbJuneDaytime u16 | 6月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_E895B208 | ProbAugustEvening1 u16 | 8月 傍晚 1概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_E8C448B2 | AITagBitRankA u8 | AI 标签 位 级别 A | 1 | 7 | 未知 | CRC 候选 |
| hash_E8F8EFBD | Speciality1 u32 | 特产 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_E8FA8B93 | MysteryTourFieldOutside.hshCstringRef | 神秘 旅行 场景 外部 | 1 | 4 | 未知 | CRC 候选 |
| hash_E8FFD1EE | BuryItem3 u16 | 埋藏 道具 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_E91978EA | Rate8 u8 | 比率 8 | 1 | 3 | 未知 | CRC 候选 |
| hash_E949F39E | Day2025 u8 | 日 2025 | 1 | 1 | 未知 | CRC 候选 |
| hash_E958F5CF | EndDayN3 u8 | 结束 日 N 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_E96B9169 | Day2041 u8 | 日 2041 | 1 | 1 | 未知 | CRC 候选 |
| hash_E9812E07 | BalloonTalkKey string25 | 气球 对话 键 | 1 | 25 | 未知 | CRC 候选 |
| hash_E9E81EB4 | FacilityActionType2.hshCstringRef | 设施 动作 类型 2 | 1 | 4 | 未知 | CRC 候选 |
| hash_EA031E9A | SelectableEndDate2 u16 | 可选择 结束 日期 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_EA066CC1 | Bush_S u8 | 灌木 S | 1 | 1 | 未知 | CRC 候选 |
| hash_EA394F5D | Month2059 u8 | 月份 2059 | 1 | 1 | 未知 | CRC 候选 |
| hash_EA57047B | Stage14Hash stringMurmurHash | 阶段 14 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_EA6A09CC | AsName.hshCstringRef | As 名称 | 1 | 4 | 未知 | CRC 候选 |
| hash_EA6D4070 | FacePaint u16 | 脸 Paint | 1 | 2 | 未知 | CRC 候选 |
| hash_EA9FC92A | ItemRegionFilter.hshCstringRef | 道具 地区 Filter | 1 | 4 | 未知 | CRC 候选 |
| hash_EAADF252 | SeasonSpringLevel u8 | 季节 春季 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_EAAF51C9 | NoteMax u8 | 备注 最大 | 2 | 1 | 未知 | CRC 候选 |
| hash_EAC6A012 | OpenDonatedNum u16 | 打开 Donated 数量 | 1 | 2 | 未知 | CRC 候选 |
| hash_EAD62C46 | ItemNpcRoomReplaceCategory.hshCstringRef | 道具 NPC 房间 替换 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_EADDE7F7 | SeatSP u16 | 座位 SP | 1 | 2 | 未知 | CRC 候选 |
| hash_EAE9CE3A | InnerType002 u8 | 内侧 类型 002 | 1 | 1 | 未知 | CRC 候选 |
| hash_EB226404 | ItemKind11 u16 | 道具 类别 11 | 1 | 2 | 未知 | CRC 候选 |
| hash_EB22BD3B | PlaceConditionTime u8 | 放置 条件 时间 | 1 | 1 | 未知 | CRC 候选 |
| hash_EB39552D | Sports0 u32 | 运动 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_EB4430C7 | InnerType000.hshCstringRef | 内侧 类型 000 | 1 | 4 | 未知 | CRC 候选 |
| hash_EB55D9D3 | LimitNum1 s8 | 限制 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_EBB9A634 | ToolID u16 | 工具 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_EBD71BBD | HobbyNatureLevel u8 | 爱好 自然 等级 | 1 | 1 | 未知 | CRC 候选 |
| hash_EC3BF206 | ItemKind2 u16 | 道具 类别 2 | 1 | 2 | 未知 | CRC 候选 |
| hash_EC475A23 | ProbHarvestMorningAndEvening u16 | 收获 早晨 及 傍晚概率 | 3 | 2 | 未知 | CRC 候选 |
| hash_EC47B5B2 | BuiltNpcRoleID u16 | 建造 NPC 角色 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_EC836E19 | FlagPlayerAnnounceReady s32 | 标志 玩家 公告 就绪 | 1 | 4 | 未知 | CRC 候选 |
| hash_ECE3E00C | ReFabricPattern0Color1 u8 | 重新 布料 款式 0 颜色 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_ECF95B05 | Offset f32 | 偏移 | 1 | 4 | 未知 | CRC 候选 |
| hash_ECFE9DDB | EnableStageChange u8 | 启用 阶段 变更 | 1 | 1 | 未知 | CRC 候选 |
| hash_ECFF9E45 | EndDayS4 u8 | 结束 日 S 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_ECFFB7C6 | StructureData string32 | 结构 数据 | 1 | 33 | 未知 | CRC 候选 |
| hash_ED32AADE | ValidDiveRate u8 | 有效 潜水 比率 | 1 | 1 | 未知 | CRC 候选 |
| hash_ED4B6070 | ValidNightExplain u8 | 有效 夜间 说明 | 1 | 1 | 未知 | CRC 候选 |
| hash_ED7F3CFE | TransOffsetX f32 | 位移 偏移 X | 1 | 4 | 未知 | CRC 候选 |
| hash_EDBA5AAF | Action0_4.hshCstringRef | 动作 0 4 | 1 | 4 | 未知 | CRC 候选 |
| hash_EDD33140 | Month2014 u8 | 月份 2014 | 1 | 1 | 未知 | CRC 候选 |
| hash_EDE0A8CA | KeepStateInDemoEnd u8 | 保留 状态 内 演出 结束 | 1 | 1 | 未知 | CRC 候选 |
| hash_EE0961FA | VillageDevelopmentLevel u8 | 村庄 Development 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_EE34BAAE | MainIslandItemRemakeFabricKind u8 | 主要 岛屿 道具 改造 布料 类别 | 1 | 1 | 未知 | CRC 候选 |
| hash_EE3F019E | Material5 u16 | 材质 5 | 1 | 2 | 未知 | CRC 候选 |
| hash_EE709498 | NpcRoleNum1 s8 | NPC 角色 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_EE9CE68D | BridgeTypeUniqueID u16 | 桥梁 类型 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_EF0088E8 | XUnitIndex s8 | X 单位 索引 | 1 | 1 | 未知 | CRC 候选 |
| hash_EF01C9DC | Seat1 u16 | 座位 1 | 1 | 2 | 未知 | CRC 候选 |
| hash_EF18BB10 | W0Parts.hshCstringRef | W 0 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_EF1F311C | CanPutInsect u8 | 可 放置 昆虫 | 1 | 1 | 未知 | CRC 候选 |
| hash_EF539CFC | SortIdUSfr u16 | 排序 ID U Sfr | 1 | 2 | 未知 | CRC 候选 |
| hash_EF79DE0F | Layer.hshCstringRef | 层 | 1 | 4 | 未知 | CRC 候选 |
| hash_EF91E54B | E3Parts.hshCstringRef | E 3 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_EF987827 | StrSortIdEUes u16 | 字符串 排序 ID E Ues | 1 | 2 | 未知 | CRC 候选 |
| hash_EFA5DDA4 | 未知 | 交易券价格超过 1000 时的条件（语义别名：TradeTicketAbove1000Condition） | 1 | 1 | 未知 | 原名未恢复 / native_behavior |
| hash_EFFADAB6 | ItemNpcReactionThemeType.hshCstringRef | 道具 NPC 反应 主题 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_EFFE09FE | Music0 u32 | 音乐 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_F03898ED | SortIdEUfr u16 | 排序 ID E Ufr | 1 | 2 | 未知 | CRC 候选 |
| hash_F042648E | ProbMarchMorning u16 | 3月 早晨概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_F07156D2 | ShoesID u16 | 鞋 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_F0AE075C | CheekPinkColorG f32 | 脸颊 粉色 颜色 G | 1 | 4 | 未知 | CRC 候选 |
| hash_F0AF46FB | ReBodyPattern3Color0 u8 | 重新 主体 款式 3 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_F0B8307E | Label string33 | 标签 | 5 | 33, 34, 36 | 未知 | CRC 候选 |
| hash_F0C9A20D | Stage1Hash stringMurmurHash | 阶段 1 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_F0CF80FF | Color u32 | 颜色 | 1 | 4 | 未知 | CRC 候选 |
| hash_F0E5EC0B | UnlockTheme17 u16 | 解锁 主题 17 | 1 | 2 | 未知 | CRC 候选 |
| hash_F0E8B711 | EditBaseUnitX s16 | 编辑 基础 单位 X | 1 | 2 | 未知 | CRC 候选 |
| hash_F0F37C36 | StrSortIdUSes u16 | 字符串 排序 ID U Ses | 1 | 2 | 未知 | CRC 候选 |
| hash_F0FE7AEC | HeredityD u8 | 继承 D | 1 | 4 | 未知 | CRC 候选 |
| hash_F11D9EF6 | Action1_3.hshCstringRef | 动作 1 3 | 1 | 4 | 未知 | CRC 候选 |
| hash_F1246E5F | ItemAct.hshCstringRef | 道具 动作 | 1 | 4 | 未知 | CRC 候选 |
| hash_F14285F2 | Day2033 u8 | 日 2033 | 1 | 1 | 未知 | CRC 候选 |
| hash_F15EDF7C | OutdoorRefabricNum1 s8 | 室外 布料改造 数量 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_F160E705 | Day2057 u8 | 日 2057 | 1 | 1 | 未知 | CRC 候选 |
| hash_F163E8BE | Weighting u8 | Weighting | 1 | 1 | 未知 | CRC 候选 |
| hash_F16B7305 | StartMonthNorth u16 | 开始 月份 北 | 1 | 2 | 未知 | CRC 候选 |
| hash_F179F796 | CaptureForceStateON u8 | 捕捉 Force 状态 开启 | 1 | 1 | 未知 | CRC 候选 |
| hash_F17C8674 | InnerType120 u8 | 内侧 类型 120 | 1 | 1 | 未知 | CRC 候选 |
| hash_F17E7F7E | Param3 u8 | 参数 3 | 1 | 1 | 未知 | CRC 候选 |
| hash_F17F8753 | ItemHHACategory.hshCstringRef | 道具 快乐家协会 分类 | 1 | 4 | 未知 | CRC 候选 |
| hash_F196E054 | NetPlay u8 | 网络 播放 | 1 | 1 | 未知 | CRC 候选 |
| hash_F1E40F7E | ActionSet0.hshCstringRef | 动作 集合 0 | 1 | 4 | 未知 | CRC 候选 |
| hash_F244A0C1 | EndMoS1 u8 | 结束 月份 S 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_F2667FB4 | Noon u8 | 正午 | 1 | 1 | 未知 | CRC 候选 |
| hash_F299F7FC | ToolState.hshCstringRef | 工具 状态 | 1 | 4 | 未知 | CRC 候选 |
| hash_F2CE6E17 | AutoDisappear u8 | 自动 Disappear | 1 | 1 | 未知 | CRC 候选 |
| hash_F360859A | Rate2_0 s8 | 比率 2 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_F37316E6 | AIFlowName string64 | AI 流程 名称 | 1 | 64 | 未知 | CRC 候选 |
| hash_F3D8FA00 | USfr u8 | U Sfr | 1 | 2 | 未知 | CRC 候选 |
| hash_F413ACD2 | AcceptSubWarpEx u8 | 接受 子 Warp Ex | 1 | 1 | 未知 | CRC 候选 |
| hash_F4210974 | UnlockTheme28 u16 | 解锁 主题 28 | 1 | 2 | 未知 | CRC 候选 |
| hash_F429D772 | HelmetID u16 | Helmet ID | 1 | 2 | 未知 | CRC 候选 |
| hash_F43B77CD | LeftRotateOffsetY f32 | 左 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_F44FAB3B | ItemFtrToDishType.hshCstringRef | 道具 家具 至 Dish 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_F45A96C6 | ReBodyPattern1Color0 u8 | 重新 主体 款式 1 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_F4678F13 | DigItem u16 | Dig 道具 | 1 | 2 | 未知 | CRC 候选 |
| hash_F489F3C5 | HasDoorWindow u8 | 具有 门 窗户 | 1 | 1 | 未知 | CRC 候选 |
| hash_F48BCCD6 | Stage15 string32 | 阶段 15 | 1 | 32 | 未知 | CRC 候选 |
| hash_F4FEFCDE | FrontRotateOffsetY f32 | 正面 旋转 偏移 Y | 1 | 4 | 未知 | CRC 候选 |
| hash_F504BB4C | TshirtsHNormalScaleMaskR f32 | T恤 H 法线 缩放 遮罩 R | 1 | 4 | 未知 | CRC 候选 |
| hash_F50743FB | ElectionRate0 u8 | 选举 比率 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_F5206DC0 | VIPTheme u8 | VIP 主题 | 1 | 3 | 未知 | CRC 候选 |
| hash_F5367C4F | UseSitOffset u8 | 使用 坐 偏移 | 1 | 1 | 未知 | CRC 候选 |
| hash_F551B995 | EUde u8 | E Ude | 1 | 1 | 未知 | CRC 候选 |
| hash_F58109F5 | SilhouettePoint u8 | 轮廓 点 | 1 | 4 | 未知 | CRC 候选 |
| hash_F588704D | ProbAugustDaytime u16 | 8月 白天概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_F5A73337 | Grow u8 | 成长 | 1 | 1 | 未知 | CRC 候选 |
| hash_F5D8472C | Month2002 u8 | 月份 2002 | 1 | 1 | 未知 | CRC 候选 |
| hash_F659C43B | IsNecessary1_1 u8 | 是否 必要 1 1 | 1 | 1 | 未知 | CRC 候选 |
| hash_F676C9F8 | SlowDownSwingLimitRate f32 | 慢 下 摆动 限制 比率 | 1 | 4 | 未知 | CRC 候选 |
| hash_F68A2366 | MessageLabel string32 | 消息 标签 | 1 | 33 | 未知 | CRC 候选 |
| hash_F6B34C16 | SpNpcCloth s16 | Sp NPC 衣物 | 1 | 2 | 未知 | CRC 候选 |
| hash_F6D92EDE | PlaceNpcNum s8 | 放置 NPC 数量 | 1 | 1 | 未知 | CRC 候选 |
| hash_F6E867D0 | PlacementRadioGymnastics.hshCstringRef | 摆放 Radio Gymnastics | 1 | 4 | 未知 | CRC 候选 |
| hash_F71BFFE7 | ToolSetupAsName string32 | 工具 设置 As 名称 | 1 | 32 | 未知 | CRC 候选 |
| hash_F74F3D2C | Act.hshCstringRef | 动作 | 2 | 4 | 未知 | CRC 候选 |
| hash_F75DDF51 | Dummy u8 | 占位 | 2 | 1 | 未知 | CRC 候选 |
| hash_F78F76C7 | StampRackItemNameB u16 | 印章 架子 道具 名称 B | 1 | 2 | 未知 | CRC 候选 |
| hash_F7E3CB4B | EndMoN6 u8 | 结束 月份 N 6 | 1 | 1 | 未知 | CRC 候选 |
| hash_F80E9FEE | ItemGender.hshCstringRef | 道具 性别 | 1 | 4 | 未知 | CRC 候选 |
| hash_F8316716 | Depth f32 | Depth | 1 | 4 | 未知 | CRC 候选 |
| hash_F85C61D4 | InnerType001 u8 | 内侧 类型 001 | 1 | 1 | 未知 | CRC 候选 |
| hash_F89574CD | FacilityActionType1.hshCstringRef | 设施 动作 类型 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_F8A892FC | CliffCreate u8 | Cliff 创建 | 1 | 1 | 未知 | CRC 候选 |
| hash_F8BE7F94 | SmartphoneRemakePattern u16 | 手机 改造 款式 | 2 | 2 | 未知 | CRC 候选 |
| hash_F8D7413B | MonthSouth u8 | 南半球月份 | 2 | 1 | 未知 | CRC 候选 |
| hash_F9316B05 | UnlockTheme21 u16 | 解锁 主题 21 | 1 | 2 | 未知 | CRC 候选 |
| hash_F944E681 | ReBodyPattern7Color0 u8 | 重新 主体 款式 7 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_F995BC91 | Stage13 string32 | 阶段 13 | 1 | 32 | 未知 | CRC 候选 |
| hash_F9A37BDC | FallToRiver u8 | 秋季 至 River | 1 | 1 | 未知 | CRC 候选 |
| hash_F9CF603A | CapFrequencyWear u8 | 帽子 频率 穿着 | 3 | 1 | 未知 | CRC 候选 |
| hash_F9DB71F6 | Dream1 u32 | 梦境 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_F9DCDEC7 | PacketType.hshCstringRef | 数据包 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_F9E0763D | LimitNum2 s8 | 限制 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_F9F86845 | Shop_S u8 | 商店 S | 1 | 1 | 未知 | CRC 候选 |
| hash_FA3B3608 | TimeZoneOutdoorEarlyMorningLevel u8 | 时间 区域 室外 提前 早晨 等级 | 2 | 1 | 未知 | CRC 候选 |
| hash_FA62611D | Music u16 | 音乐 | 2 | 2 | 未知 | CRC 候选 |
| hash_FA71E75C | AITagBitRankB u8 | AI 标签 位 级别 B | 1 | 7 | 未知 | CRC 候选 |
| hash_FA8D37D0 | UnlockTheme34 u16 | 解锁 主题 34 | 1 | 2 | 未知 | CRC 候选 |
| hash_FA93F14B | FlagsFlowAccess u8 | 标志 流程 访问 | 15 | 1 | 未知 | CRC 候选 |
| hash_FA966063 | Rate1_4 s8 | 比率 1 4 | 1 | 1 | 未知 | CRC 候选 |
| hash_FA9CA833 | NEParts.hshCstringRef | NE 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_FAD4FF78 | ModelResName string65 | 模型 资源 名称 | 2 | 65, 66 | 未知 | CRC 候选 |
| hash_FAFD7F4F | UnlockTheme6 u16 | 解锁 主题 6 | 1 | 2 | 未知 | CRC 候选 |
| hash_FAFECEEF | OnepieceLNormalScaleMaskB f32 | 连衣裙 L 法线 缩放 遮罩 B | 1 | 4 | 未知 | CRC 候选 |
| hash_FB867BC1 | IsSelectQuestSS u8 | 是否 选择 任务 SS | 1 | 4 | 未知 | CRC 候选 |
| hash_FBACE208 | ActionType.hshCstringRef | 动作 类型 | 1 | 4 | 未知 | CRC 候选 |
| hash_FBB451BF | PoseTrans u8 | 姿势 位移 | 1 | 1 | 未知 | CRC 候选 |
| hash_FBDE3E87 | Day2042 u8 | 日 2042 | 1 | 1 | 未知 | CRC 候选 |
| hash_FBFC5C70 | Day2026 u8 | 日 2026 | 1 | 1 | 未知 | CRC 候选 |
| hash_FC275E86 | CapturePreset string32 | 捕捉预设（原名直译） | 1 | 32 | ItemParam.bcsv: native_kind_label | CRC 候选 |
| hash_FC3116B5 | CancelFootprint u8 | 取消 Footprint | 1 | 1 | 未知 | CRC 候选 |
| hash_FC5B747F | SNpcID3 u16 | S NPC ID 3 | 1 | 2 | 未知 | CRC 候选 |
| hash_FC5FE459 | Reward6 u32 | 奖励 6 | 1 | 4 | 未知 | CRC 候选 |
| hash_FC6134E3 | WdaySouth u8 | 南半球星期 | 1 | 1 | 未知 | CRC 候选 |
| hash_FC7A1955 | Timezone.hshCstringRef | 时区 | 1 | 4 | 未知 | CRC 候选 |
| hash_FC86133A | CatalogItemUniqueID u16 | 目录 道具 唯一 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_FC99BB54 | FrontTransOffsetZ f32 | 正面 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_FCA0ADB0 | FlagsFlowAccess.hshCstringRef | 标志 流程 访问 | 1 | 4 | 未知 | CRC 候选 |
| hash_FCA98253 | AnimeTypeNet string64 | 动画 类型 网络 | 1 | 64 | 未知 | CRC 候选 |
| hash_FCAB259E | BackTransOffsetZ f32 | 背面 位移 偏移 Z | 1 | 4 | 未知 | CRC 候选 |
| hash_FCC53B76 | NpcRoleNum2 s8 | NPC 角色 数量 2 | 1 | 1 | 未知 | CRC 候选 |
| hash_FCC730D6 | Action0_7.hshCstringRef | 动作 0 7 | 1 | 4 | 未知 | CRC 候选 |
| hash_FCE7D916 | StopAutoSave u8 | 停止 自动 保存 | 1 | 1 | 未知 | CRC 候选 |
| hash_FD3B7C9A | IsCollectAchievement u8 | 是否 收集 成就 | 1 | 1 | 未知 | CRC 候选 |
| hash_FD415A4C | CanNotLookFace u8 | 可 非 注视 脸 | 1 | 1 | 未知 | CRC 候选 |
| hash_FD606CAC | Stage11 string32 | 阶段 11 | 1 | 32 | 未知 | CRC 候选 |
| hash_FD7F60BB | Stage15Hash stringMurmurHash | 阶段 15 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_FD9AF1E1 | ItemUniqueID u16 | 道具唯一ID | 5 | 2 | 未知 | CRC 候选 |
| hash_FDB136BC | ReBodyPattern5Color0 u8 | 重新 主体 款式 5 颜色 0 | 1 | 1 | 未知 | CRC 候选 |
| hash_FDB1F290 | AttrClearGlowUpTiming.hshCstringRef | 属性 清除 发光 上 时机 | 1 | 4 | 未知 | CRC 候选 |
| hash_FDE1BFAB | S0Parts.hshCstringRef | S 0 部件 | 1 | 4 | 未知 | CRC 候选 |
| hash_FDEED09C | ModelID u16 | 模型 ID | 2 | 2 | 未知 | CRC 候选 |
| hash_FDF8907B | GlassesTemporarilyCreate u8 | 眼镜 临时 创建 | 1 | 1 | 未知 | CRC 候选 |
| hash_FE240D77 | Food1 u32 | 食物 1 | 1 | 4 | 未知 | CRC 候选 |
| hash_FEC0CC3D | NpcCanSit u8 | NPC 可 坐 | 2 | 1 | 未知 | CRC 候选 |
| hash_FEC3548B | StageNameHash stringMurmurHash | 阶段 名称 哈希 | 1 | 4 | 未知 | CRC 候选 |
| hash_FF299FC4 | ClothesFrequencyWear u8 | 服装 频率 穿着 | 2 | 1 | 未知 | CRC 候选 |
| hash_FF3C5B19 | ProbDecemberMidnight u16 | 12月 午夜概率 | 1 | 2 | 未知 | CRC 候选 |
| hash_FF669EAE | Month2017 u8 | 月份 2017 | 1 | 1 | 未知 | CRC 候选 |
| hash_FF8F9405 | NpcRoleSetID u16 | NPC 角色 集合 ID | 1 | 2 | 未知 | CRC 候选 |
| hash_FFE069A3 | CheckDonation u8 | 检查 Donation | 1 | 1 | 未知 | CRC 候选 |
| hash_FFE9B35B | RecipeDataType.hshCstringRef | 配方 数据 类型 | 1 | 4 | 未知 | CRC 候选 |
