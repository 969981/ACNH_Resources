# PlayerStateParam.bcsv

返回 [全量索引](README.md) · [统一字段字典](Field-Hashes.md) · [名称恢复证据](../Field-Names.md) · [残余字段证据](../../../../research/hash008h/residual_fields.json)。

原始路径：`e10617820db06889e1638499478da0de_NCA/1/Bcsv/PlayerStateParam.bcsv`
SHA256：`19ee1bc6fbe18359d8f6dda7fee68b5d4a86c3d98562458806b18000aad824ca`
状态：parsed

行数 329，行长 116，数据起点 364。

英文名称及类型为 CRC32 签名候选，不等同于原版明文；中文取自统一字典。跨度为物理字段间距，可能包含填充。业务证据仅采用当前表、当前偏移的已登记解释或残余字段记录；无证据不推断。

| Hash | 英文名称（CRC 候选） | 简体中文释义 | 偏移 | 跨度 | 数据类型（CRC 候选） | 当前解释 | 业务证据 |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| hash_4045796C | BgCheckType | 背景 检查 类型 | 4 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_CCF68EBE | ChangeDemo | 变更 演出 | 8 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_38762EAA | ObjCheckRate | 对象 检查 比率 | 12 | 4 | f32 | 未知，保留原值 | 未登记表级业务证据 |
| hash_C5567172 | ObjCheckType | 对象 检查 类型 | 16 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_F9DCDEC7 | PacketType | 数据包 类型 | 20 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_838B098C | RemoteChase | Remote 追逐 | 24 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_F299F7FC | ToolState | 工具 状态 | 28 | 4 | hshCstringRef | 未知，保留原值 | 未登记表级业务证据 |
| hash_E50D3218 | DemoNetLockState | 演出 网络 锁定 状态 | 32 | 2 | u16 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A6324D34 | AcceptAccess | 接受 访问 | 34 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_F413ACD2 | AcceptSubWarpEx | 接受 子 Warp Ex | 35 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_833E2942 | AllowMultiStopJoy | Allow 多个 停止 Joy | 36 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_730CEFC8 | BeesRunAway | 蜜蜂逃离 | 37 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A9F6FAC2 | BgmEnd | Bgm 结束 | 38 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_497AC4D6 | CanChaseForInsect | 可 追逐 用于 昆虫 | 39 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_63F77486 | 未知 | 玩家状态更新条件（语义别名：PlayerStateUpdateCondition） | 40 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_field_read：Zero byte enters player state copy/update path.；Ghidra VA：02377F60；原生读取 1 B |
| hash_5DCF7B24 | 未知 | 玩家状态保留标志（语义别名：PlayerStateRetentionFlag） | 41 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_field_read：False/missing clears player+0x1820,+0x1844 and bit19 of +0x17CC.；Ghidra VA：02375730；原生读取 1 B |
| hash_16E483F0 | 未知 | 玩家状态复制例外（语义别名：PlayerStateCopyException） | 42 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_field_read：Two native callers copy player state records; sole nonzero ScoopDigGetDemo.；Ghidra VA：02558820, 02559600；原生读取 1 B |
| hash_AA0070B7 | CanHostAcceptNewVisitorDB | 可 Host 接受 新 访客 DB | 43 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_1AAADDC1 | DummyMenuDemo | 占位 菜单 演出 | 44 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_68DAF155 | EnableRodCloth | 启用 钓竿 衣物 | 45 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ECFE9DDB | EnableStageChange | 启用 阶段 变更 | 46 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_0E0325BA | FishingSeries | 钓鱼 系列 | 47 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_35FD6466 | ForbidOverwrite | 禁止 覆盖 | 48 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E550ABDF | HideFoodCounter | 隐藏 食物 Counter | 49 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5681A1C3 | HideHUD | 隐藏 HUD | 50 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_066FBE8E | InWaterBody | 内 水 主体 | 51 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_E1E934D5 | JudgeVisibleOn | Judge 可见 开启 | 52 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_EDE0A8CA | KeepStateInDemoEnd | 保留 状态 内 演出 结束 | 53 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_87438100 | KeepStateToDemo | 保留 状态 至 演出 | 54 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A1B074DD | NpcLookAction | NPC 注视 动作 | 55 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_5B6D5751 | 未知 | 玩家待机移动标志（语义别名：PlayerIdleMoveFlag） | 56 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：16 states; bounded address scan returned 0 reads and 9 writes. |
| hash_FBB451BF | PoseTrans | 姿势 位移 | 57 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_013CBDBD | PoseTransDive | 姿势 位移 潜水 | 58 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_65FD6B0D | 未知 | 玩家特殊状态标志（语义别名：PlayerSpecialStateFlag） | 59 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：Five nonzero states, bounded scan found no reads. |
| hash_2B6186A0 | 未知 | 玩家工具动作标志（语义别名：PlayerToolActionFlag） | 60 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；native_field_read：Nonzero returns false early; 59 states include tool actions.；Ghidra VA：0251D1E0；原生读取 1 B |
| hash_95798F28 | SkipTopsSwap | 跳过 上装 交换 | 61 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_2AE273E3 | StateName | 状态 名称 | 62 | 48 | string48 | 未知，保留原值 | 未登记表级业务证据 |
| hash_FCE7D916 | StopAutoSave | 停止 自动 保存 | 110 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_A84507AA | 未知 | 玩家状态更新标志（语义别名：PlayerStateUpdateFlag） | 111 | 1 | 未知 | 未知，保留原值 | 未登记表级业务证据；row_hypothesis：225 of 329 states true; bounded scan found zero reads. |
| hash_C033D95A | UseSWalkNeck | 使用 S 行走 Neck | 112 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_ED32AADE | ValidDiveRate | 有效 潜水 比率 | 113 | 1 | u8 | 未知，保留原值 | 未登记表级业务证据 |
| hash_9067BB0E | WaitType | 等待 类型 | 114 | 2 | u8 | 未知，保留原值 | 未登记表级业务证据 |

<!-- table-business-catalog -->

## 中文表名与业务用途

**中文表名：** 玩家状态参数

**用途：** 按文件名与字段名称候选推测：用于配置或描述玩家状态参数相关数据；具体消费逻辑待验证。

**证据等级：** 名称推测

## 数据文件

[原始 Hash CSV](../../../../research/bcsv-data/raw/PlayerStateParam.csv) · [英文列名 CSV](../../../../research/bcsv-data/named/PlayerStateParam.csv) · [候选类型解码 CSV](../../../../research/bcsv-data/decoded/tables/PlayerStateParam.csv) · [结构 JSON](../../../../research/bcsv-data/schema/PlayerStateParam.json)

## 实际原版数据样例

选择首行、中间行、末行（去重）；每格展示原始完整字段字节及候选类型解码，不把候选类型视为已确认。

| 字段 | 偏移 | 行 0（0 基） | 行 164（0 基） | 行 328（0 基） |
| --- | ---: | --- | --- | --- |
| `hash_4045796C` 背景 检查 类型 | 4 | 0x2F823667 / hex:6736822f | 0x26296DD2 / hex:d26d2926 | 0x26296DD2 / hex:d26d2926 |
| `hash_CCF68EBE` 变更 演出 | 8 | 0x80F874CD / hex:cd74f880 | 0x80F874CD / hex:cd74f880 | 0x70D3CF9A / hex:9acfd370 |
| `hash_38762EAA` 对象 检查 比率 | 12 | 1.0 / hex:0000803f | 1.0 / hex:0000803f | 1.0 / hex:0000803f |
| `hash_C5567172` 对象 检查 类型 | 16 | 0xDFA2AFF1 / hex:f1afa2df | 0xBBF0555B / hex:5b55f0bb | 0xBBF0555B / hex:5b55f0bb |
| `hash_F9DCDEC7` 数据包 类型 | 20 | 0xA93002A5 / hex:a50230a9 | 0xA93002A5 / hex:a50230a9 | 0xA93002A5 / hex:a50230a9 |
| `hash_838B098C` Remote 追逐 | 24 | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df | 0xDFA2AFF1 / hex:f1afa2df |
| `hash_F299F7FC` 工具 状态 | 28 | 0xD14B7584 / hex:84754bd1 | 0xD14B7584 / hex:84754bd1 | 0xEA954889 / hex:894895ea |
| `hash_E50D3218` 演出 网络 锁定 状态 | 32 | 0 / hex:0000 | 0 / hex:0000 | 0 / hex:0000 |
| `hash_A6324D34` 接受 访问 | 34 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_F413ACD2` 接受 子 Warp Ex | 35 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_833E2942` Allow 多个 停止 Joy | 36 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_730CEFC8` 蜜蜂逃离 | 37 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A9F6FAC2` Bgm 结束 | 38 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_497AC4D6` 可 追逐 用于 昆虫 | 39 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_63F77486` 玩家状态更新条件（语义别名：PlayerStateUpdateCondition） | 40 | raw:01 / hex:01 | raw:00 / hex:00 | raw:01 / hex:01 |
| `hash_5DCF7B24` 玩家状态保留标志（语义别名：PlayerStateRetentionFlag） | 41 | raw:01 / hex:01 | raw:01 / hex:01 | raw:01 / hex:01 |
| `hash_16E483F0` 玩家状态复制例外（语义别名：PlayerStateCopyException） | 42 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_AA0070B7` 可 Host 接受 新 访客 DB | 43 | 1 / hex:01 | 1 / hex:01 | 1 / hex:01 |
| `hash_1AAADDC1` 占位 菜单 演出 | 44 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_68DAF155` 启用 钓竿 衣物 | 45 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_ECFE9DDB` 启用 阶段 变更 | 46 | 1 / hex:01 | 0 / hex:00 | 1 / hex:01 |
| `hash_0E0325BA` 钓鱼 系列 | 47 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_35FD6466` 禁止 覆盖 | 48 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E550ABDF` 隐藏 食物 Counter | 49 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_5681A1C3` 隐藏 HUD | 50 | 0 / hex:00 | 1 / hex:01 | 1 / hex:01 |
| `hash_066FBE8E` 内 水 主体 | 51 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_E1E934D5` Judge 可见 开启 | 52 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_EDE0A8CA` 保留 状态 内 演出 结束 | 53 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_87438100` 保留 状态 至 演出 | 54 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_A1B074DD` NPC 注视 动作 | 55 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_5B6D5751` 玩家待机移动标志（语义别名：PlayerIdleMoveFlag） | 56 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_FBB451BF` 姿势 位移 | 57 | 1 / hex:01 | 0 / hex:00 | 0 / hex:00 |
| `hash_013CBDBD` 姿势 位移 潜水 | 58 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_65FD6B0D` 玩家特殊状态标志（语义别名：PlayerSpecialStateFlag） | 59 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_2B6186A0` 玩家工具动作标志（语义别名：PlayerToolActionFlag） | 60 | raw:00 / hex:00 | raw:00 / hex:00 | raw:00 / hex:00 |
| `hash_95798F28` 跳过 上装 交换 | 61 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_2AE273E3` 状态 名称 | 62 | "Hide" / hex:486964650000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 | "FenceMakerReady" / hex:46656e63654d616b65725265616479000000000000000000000000000000000000000000000000000000000000000000 | "TransceiverUse" / hex:5472616e7363656976657255736500000000000000000000000000000000000000000000000000000000000000000000 |
| `hash_FCE7D916` 停止 自动 保存 | 110 | 0 / hex:00 | 1 / hex:01 | 0 / hex:00 |
| `hash_A84507AA` 玩家状态更新标志（语义别名：PlayerStateUpdateFlag） | 111 | raw:01 / hex:01 | raw:00 / hex:00 | raw:01 / hex:01 |
| `hash_C033D95A` 使用 S 行走 Neck | 112 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_ED32AADE` 有效 潜水 比率 | 113 | 0 / hex:00 | 0 / hex:00 | 0 / hex:00 |
| `hash_9067BB0E` 等待 类型 | 114 | 0 / hex:0000 | 1 / hex:0100 | 1 / hex:0100 |

## 枚举码值及实际分布

仅对 hshCstringRef 候选字段统计原版前 4 字节。已登记标签来自 decoded 枚举证据，逐值校验 CRC32 与原版出现次数；中文为研究译名，候选冲突不强行合并。每字段最多展示 12 个高频值，完整映射见下方 JSON。

### 背景 检查 类型（hash_4045796C）

去重码值 6 个，已有标签候选 6 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x26296DD2 | 170 | Normal | 法线 | crc_candidate |
| 0x2F823667 | 57 | NoBgCheckNoGravity | 无 背景 检查 无 Gravity | crc_candidate |
| 0xAF6B85D9 | 49 | OnlyWallNoGravity_SitSpecial | 仅 墙壁 无 Gravity 坐 特殊 | crc_candidate |
| 0xFBDE1E5E | 41 | OnlyFloor | 仅 地板 | crc_candidate |
| 0x4956243A | 10 | OnlyWallNoGravity | 仅 墙壁 无 Gravity | crc_candidate |
| 0x0238467C | 2 | NoBgCheckUseGravity | 无 背景 检查 使用 Gravity | crc_candidate |

### 变更 演出（hash_CCF68EBE）

去重码值 9 个，已有标签候选 9 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0x80F874CD | 183 | Disable | 禁用 | crc_candidate |
| 0x70D3CF9A | 98 | IsDemo | 是否 演出 | crc_candidate |
| 0x3290A903 | 15 | EnableToDemoNetLock | 启用 至 演出 网络 锁定 | crc_candidate |
| 0x231EF157 | 14 | EnableToDemoAll | 启用 至 演出 All | crc_candidate |
| 0xD33BCB2B | 12 | EnableToDemoStandSpeak | 启用 至 演出 Stand Speak | crc_candidate |
| 0xA5EF0B62 | 2 | EnableToDemoSitSpeak | 启用 至 演出 坐 Speak | crc_candidate |
| 0xD1885238 | 2 | EnableToDemoBedSpeak | 启用 至 演出 Bed Speak | crc_candidate |
| 0xE673B2C7 | 2 | EnableToDemoSwimSpeak | 启用 至 演出 Swim Speak | crc_candidate |
| 0x0E8ED6B1 | 1 | EnableToDemoSWalkSpeak | 启用 至 演出 S 行走 Speak | crc_candidate |

### 对象 检查 类型（hash_C5567172）

去重码值 3 个，已有标签候选 3 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xBBF0555B | 303 | Heavy | Heavy | crc_candidate |
| 0x26296DD2 | 19 | Normal | 法线 | crc_candidate |
| 0xDFA2AFF1 | 7 | None | None | crc_candidate |

### 数据包 类型（hash_F9DCDEC7）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xA93002A5 | 260 | Overwrite | 覆盖 | crc_candidate |
| 0x9C751860 | 69 | Sequential | Sequential | crc_candidate |

### Remote 追逐（hash_838B098C）

去重码值 2 个，已有标签候选 2 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xDFA2AFF1 | 315 | None | None | crc_candidate |
| 0xC6888AC4 | 14 | Auto | 自动 | crc_candidate |

### 工具 状态（hash_F299F7FC）

去重码值 4 个，已有标签候选 4 个。

| 原始码值 | 出现次数 | 英文候选 | 中文释义 | 证据 |
| --- | ---: | --- | --- | --- |
| 0xD14B7584 | 178 | IfNotDemoDraw | If 非 演出 Draw | crc_candidate |
| 0xEA954889 | 105 | Continue | Continue | crc_candidate |
| 0x6E1F9179 | 37 | Putaway | 收起 | crc_candidate |
| 0x9D0928EA | 9 | GiveOverKeepPutawayFlag | 给予 Over 保留 收起 标志 | crc_candidate |

[完整码值与样例 JSON](../../../../research/bcsv-catalog/table-profiles.json) · [已有枚举证据 CSV](../../../../research/bcsv-data/decoded/enum-values.csv)

## 跨表关联

以下为原版 CRC32 标签值域统计候选，不是已确认的外键。

| 方向 | 来源字段 | 目标字段 | 对端表 | 匹配记录 | 去重匹配 |
| --- | --- | --- | --- | ---: | ---: |
| — | — | — | 尚无已登记候选 | — | — |

[完整关联候选](References.md) · [逐值匹配明细](../../../../research/bcsv-data/decoded/reference-values.csv)
