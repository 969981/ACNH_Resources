---
title: R115 家具交互枚举、CanFtr 与缓存生命周期
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, PocketMenu, R115]
---

# R115 家具交互枚举与赠礼差异

## R114 验收

[Actions 45337209077](https://github.com/969981/ACNH_Resources/actions/runs/45337209077) success。R114 report：471 个候选窗口；最佳 04965EF0，82 个不同 Key，ItemParam F1246E5F offset 48 的 11178/11178 行 CRC 全匹配，79 个实际使用值，0x49=MoneyBox。其余候选最大 11177/11178 且 distinct coverage 远低于最佳。仍需证实 native writer 的转换表指针数据流，不能直接把候选当 runtime enum。

## 1. CanFtr 原始字段

R74 主分支 assets/evidence/rom-database/r74-original-item-npc-stack-schema.json 已存在 CanFtr 对应 hash_90BC0855；独立 CRC32("CanFtr u8")=90BC0855，ItemKind offset 36 width 1；9648 真、1530 假。此前 quantity_kind_flag 是临时名称；R115 新字段 can_ftr 明确原始名称，旧字段保持兼容。CanFtr 不等于赠礼权限，也不单独等于数量。01AEB510 在 82 枚举 0x49 且 CanFtr 时读取 wrapper+0xE（raw item+6）并 clamp 99。MoneyBox 的实际实例字段语义仍需验证。

## 2. 缓存生命周期（Ghidra VA）

| VA | 原版 bytes | 指令 | 含义 |
|---|---|---|---|
|01A641F0|9c2740f9|ldr x28,[x28,#0x48]|GOT 04BC0048|
|01A64248|940300b9|str w20,[x28]|count|
|01A64250|800700f9|str x0,[x28,#8]|u16 数组指针|
|01A6C488|4a2540f9|ldr x10,[x10,#0x48]|同一 GOT|
|01A6C4A4|4a0540f9|ldr x10,[x10,#8]|数组指针|
|01A6C4A8|48d92978|strh w8,[x10,w9,sxtw #1]|写回行枚举|
|01A6800C|b52640f9|ldr x21,[x21,#0x48]|同一 GOT|
|01A68048|bf0600f9|str xzr,[x21,#8]|清空指针|
|01A6804C|bf0200b9|str wzr,[x21]|清空 count|

GOT 指向 05326D48，数组指针 +8=05326D50；Main RVA=Ghidra VA-0x100000。01A64234/38 将 size=count*2 和 alignment8 传给 allocator vtable+0x30；01A6425C 另一分配分支。01A68024 调 allocator 查询，01A68038 vtable+0x38，或 01A68044 通用释放，再清零。写入前 01A6C480 UDIV 计算 BCSV 行号，01A6C494/498 比较 count，01A6C4A0 从栈恢复转换结果。R115 采集 01A6BC00..01A6C4AC 机器码与 BL callee 的 table 关联候选；不把邻近窗口当作真实 CFG。

## 3. 赠礼权限差异

| ItemID | Kind | ordinary | birthday |
|---:|---|---:|---:|
|2389|JohnnyQuestDust|0|1|
|2546|TreasureQuestDust|0|1|
|4642|LostQuestDust|0|1|
|4643|LostQuestDust|0|1|
|5427|LostQuestDust|0|1|
|14042|DummyWrappingOtoshidama|1|0|
|14043|DummyWrappingOtoshidama|1|0|
|14044|DummyWrappingOtoshidama|1|0|

5 项仅生日类别允许，3 项仅普通类别允许，净差 +2；不是实际可送。原版 lookup ID：7699..7714/13793 为 DummyWrapping，14042..14044 为 DummyWrappingOtoshidama，4480 DummyPresentbox，774/4645/14873 DummyCardboard。2105 Money、2500 CraftMaterial；0 无原版 ItemParam 记录。名称未关联不猜测。

## 4. UI 槽位标记

03194070 根据 mask bit 选择 UI 状态 6/7，再将 bVar6 保存到 slot object+0x315（byte）。mode=1,2,3,8,9,10 时 uVar18=2；其他模式根据 bVar5 选择 0/2。原 C plVar25 为 long*：plVar25+0x56 是 byte+0x2B0；plVar25+0x58 是 byte+0x2C0。mode 0 时低三位写2，mode 2时写1。不能把 +0x315 直接命名为禁止确认，需要继续找实际操作门禁消费者。

## 5. 工具与状态

Scripts/acnh303_r115_interaction_enum.py：验证原版 NSO 的上述9条指令、82 项表、CanFtr CRC，11178 行候选映射，79 种使用枚举、MoneyBox 候选物品列表、cache 前置转换窗口；SQLite r115_interaction_candidate，Web sidecar r115。R115 CI 待验收。实际赠礼结果仍 NULL。未取得实机 GDB 快照。

后续优先：确认 01A6C4A8 上游转换器与 04965EF0 的真实引用；确认 F1246E5F 原始拼写；恢复 MoneyBox 实例字节 +6 的字段语义、slot+315 操作门禁、玩家存档 0x1400 描述符。PR #95 合并冲突尚未处理，未覆盖 base 研究。
