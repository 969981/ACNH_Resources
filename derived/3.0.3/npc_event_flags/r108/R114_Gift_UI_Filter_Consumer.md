---
title: R114 赠礼 UI 实际过滤消费者与背包位图
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, PocketMenu, R114]
---

# R114 赠礼 UI 实际过滤消费者

## R113 验收

[Actions 45334464222](https://github.com/969981/ACNH_Resources/actions/runs/45334464222) success。924 项配方中 DIY 783、Cooking 141，第三属性 131 真/793 假；源预测位图 popcount 783/141/131。11178 项物品 CanGift=10059、CanNpcPresent=9330、CanNpcBirthdayPresent=9332、90BC0855=9648。上述仅类别静态值。原版查询 ID 表 04177938 为 7699..7714 及13793；04101D00 为 [0,14042,14043,14044]。

## 1. 注册到消费

Ghidra VA = Main RVA + 0x100000。UI GOT 04BB2230 -> 全局槽 05739190 -> Main+0x5639190。解引用槽后 +0x28 再解引用到参数对象，+0xD80 主函数、+0xD88 附加对象。R112 两个 PLT 跳板排除。03190D10 在 case 1/2/3/8/9/10 获取同一全局根，读取 +D80/D88、+D9C，调用 03195E80(param_1,&local_560)。C 级证据：derived/3.0.3/ghidra12.2/c/0d/03190d10.c、5e/03195e80.c。

03195E80 逐槽遍历 0..39，通过 02672E00 取得容量，02677EA0 取物品 8-byte record。若 bypass byte 非零则跳过选中物品检查；否则 0266A0C0 为真直接置位。其他路径：空槽 s16=-2 或主回调真或有效附加回调真 -> 不置位；否则置位。mask 在 PocketMenu+0x1C4F0，u64，仅 40 位。

既有主分支 docs/Native-Pointer-Research-3.0.3/17-UI全局根与PutUnitIcon重定位审计.md 记录 03195E80 的 87 条原版指令及关键写入：

| VA | bytes | ARM64 |
|---|---|---|
|03195EA0|08704091|add x8, x0, #0x1c, lsl #12|
|03195EB4|18c11391|add x24, x8, #0x4f0|
|03195EB8|1f0300f9|str xzr, [x24]|
|03195ED4|4823d69a|lsl x8, x26, x22|
|03195ED8|280108aa|orr x8, x9, x8|
|03195EDC|080300f9|str x8, [x24]|
|03195EE4|dfa200f1|cmp x22, #0x28|

03194070 为位图实际显示消费者：先对槽 UI 设置状态 6 并调用 +0x1B8，若 mask bit 真则改用状态 7，调用 +0x1C0，并 bVar5=false。证实位图影响槽显示状态；具体视觉与可操作性仍须运行时验证。C 路径 40/03194070.c。

## 2. 背包存档结构

02677EA0 从玩家访问对象 +0x194B0 或备用 context 取得 B=*(context+0x78)+*(context+0x80)。第一段容量 min(u32(B+0x158),20)，物品 B+0xB8+8*i；第二段容量 min(u32(B+0xA0),20)，物品 B+8*(i-firstCount)。访问观察者 +0x98。无效返回 05586008 或 PTR_DAT_04BB37E0。不能将结构相对偏移直接当作固定存档文件偏移。

## 3. 枚举和字段

82 项枚举 cache 05326D48 / +8 数组，GOT 04BC0048；0x49 的字段原始名称尚未闭合。R114 从原版 RELA/RELR 中提取连续 82 个可读字符串指针窗口，对 ItemParam 每个 4-byte 字段做精确 CRC 交叉覆盖；同时搜索已知初始化区 01A60000..01A90000 对该 cache 的 ADRP+ADD/LDR xrefs。高覆盖候选不能替代写入者与序号证据。90BC0855 及 3CCCA419 原名仍未知，不填猜测名称。

## 4. 新工具

Scripts/acnh303_r114_ui_filter.py：认证 NSO，C 源 SHA256，直接调用指令窗口，槽位过滤模型 7 个合成断言，82 项候选枚举和 cache xref，普通与生日权限差异物品、包装查询 ID 对账、Web sidecar。CI 待验收。保留 actual eligibility NULL。R114 未执行 GDB。

后续：先验收 R114，锁定 enum 转换 writer，逐条对照 90BC0855 的实例限制，确定 UI 状态 6/7 与操作门禁的关系，继续玩家配方状态 0x1400 描述符构造和实机对账。
