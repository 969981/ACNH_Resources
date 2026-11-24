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
