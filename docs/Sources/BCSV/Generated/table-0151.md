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
