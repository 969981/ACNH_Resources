# R104 — 赠礼价格/服装回调与条件计算模型

基于 R103 原始证据，完整追踪 010BF15C wrapper 和 010BF17C selected-item price consumer 的可达 ARM64 指令；EF16C0 DeliveryItemIsFavor 的有界 CFG 和所有直接调用证据。未知间接分支及出界保留，不将机器码窗口称为 C 反编译。010BF15C 通过 010B9ADC 对选中物品分发，最终 cmp w0,#0 / cset eq；010BF17C 检查有效 Item，调用 01B032D0 和 01B079EC 规范化可能带包装/附加信息的 Item。最终比较及价格口径以原版指令结果为准。01AF0770 原版源码包含 Price/4 与 RegulationType4 分支；不能先假定该函数就是赠礼 Query 调用者。

服装赠礼 NNPC_Select_Equipment #19 Case0 -> #20 -> #17 +2，Case1 -> #21 +1；完整颜色/风格评分待证。好感度 Query 返回 6-level；PercentChoice Case0 由 r<Percent。模型仅接受已确定入口 Trade/Root_OverFlow_case0/Low_Trade/no_reward、非负基础增量与包装增量。先累加 base/wrap，奖励抽取使用当时 F，随后奖励增量；Trade 高好感度 85% 通用 Mode0，15% Type4，故局部直接照片随机门槛为 0.85*ceil(F/25)/100 且 SkipCount=0。候选有效性与最终交付仍未知；不能作为全部送礼概率。Root_OverFlow case0 高好感度通用 Mode0。配送 Type2/Sub2 未发现直接冷却读取，分析四个目标的原版 BL 调用位置，仍不能证明全局绕过。

417 名百科可通过独立的 integrate 函数按 ResName/UniqueID/collab/init_live 对账后追加邀请规则，保留原始14语言及全部现有字段，动态状态 null。使用 R92 和 R103 的成品 JSON，不依赖猜测。R103 六个候选恢复函数内控制流及返回 x0 move 候选；仅在完全证明对象返回后升级。剩余204名称扫描实际 C 字符串；ReleaseVersionFile 检查原版 Hash、字符串、注册条目。无真实存档、Ghidra GUI、GDB 快照。

```powershell
python Scripts/acnh303_r104_gift_model.py --selftest
python Scripts/acnh303_r104_gift_model.py --friendship 200 --base-delta 2 --wrap-delta 1 --skip-count 0 --entry Trade
python Scripts/acnh303_r104_gift_model.py --catalog villager_encyclopedia_417.json --profiles villager_invite_profiles_417.json --out villager_encyclopedia_r104.json
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r104_native_gift.py --root . --out artifacts/acnh303-r104
```


## 第一轮原版实测及后续验收

价格 wrapper 8 条、consumer 161 条、服装喜好 796 条可达指令，无未解析 BR 或超出边界。价格 010BF3A8 读上下文 D5C；有单件标记且 01AF0020 支持数量时，010BF3C4 调用 01AF2BC0 将临时 Item 数量设为1。010BF3CC 调用 01AED730，010BF3D4/3D8 为 signed >= Border，外层 010BF170 CSET EQ 得 case0=价格足够。已验证普通价格函数直接使用 Price，而非调用四分之一价格函数。1000/3000/8000 都是同一计算口径；特殊物品 /5 及数量取值仍需真实 Item 数据。模型新增 ordinary_price、price_query_case、present_entry 和直接 color_style_match。

EF16C0 读取 NPC A54F92FD/E2EFE82D（0..50 tag 候选）、34EB5DC3/265EF22D（Color1/Color2 已知 u8）、5EF86F1F/195815CF（0..6 style 候选）。01AE3210/01AE3BC0 是物品两色读取；01AE0CF0 和 enum 表用于另外两项比较。EF2164/2174/2184/2194 与 EF21A4/21B4/21C4/21D4 八条 B.EQ 全部指向 EF22D4 return0。即两组2x2任一匹配即可成功，并非必须颜色和风格同时匹配。若直接比较均失败，007B0EA4 检查两个 NPC tag 候选，另有 0..2 enum 与组别比较，之后按原始 Tops (870F1E29) 检查 51 个标签的特定组共同匹配。完整标签名称、枚举和 item 字段仍未全部证明；不能把直接不匹配判为不喜欢。实际服装筛选还受上游可装备条件约束。

配送相关 BL 2、照片生成 BL 2、照片历史 BL 4、奖励模式 BL 3；Type2/Sub2 没有直接 SkipCount 门禁。204 条待恢复名称本轮没有新 C 字符串命中；ReleaseVersionFile Murmur3=3CB80E57，无注册记录或原始 NUL 字符串，仍未知。六项 Action allocation 候选均找到同一对象 register 的 VTable store 以及完整返回 epilogue，第二轮逐项验证 mov x0,reg -> ret 无后续 x0 覆盖；不把运行时分发当成已验证。R92 与 R103 两份 CI artifact 本地实际 join 417/417，保留 5838 名称。模型测试覆盖 1024 组边界；真实存档/Ghidra GUI/GDB 未验收。
