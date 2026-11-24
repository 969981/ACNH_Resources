---
title: R112 赠礼回调注册、DIY 配方产物与管理器生命周期
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, DIY, R112]
---

# R112 赠礼回调与 DIY 生命周期

## 验收来源

[Actions 45329074523](https://github.com/969981/ACNH_Resources/actions/runs/45329074523) 全部成功。原版 NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1。924/924 ItemParam DiyRecipeID s16 -> RecipeCraftParam UniqueID u16；唯一反向产物字段 89A3482C / offset 0x34，924/924，其他 14 个 u16 字段均 0 匹配。CRC32("Item u16") = 89A3482C。39 项 FilterType 跳转表均提取，普通与生日 case 各 182 条可达指令，公共代码重复计数，未证明动态过滤结果。

## 1. 注册路径

Ghidra VA（Main RVA = VA - 0x100000）：

```asm
00E0FFE0 NOP
00E0FFE4 ADR X8,00E0C5B0
00E0FFE8 B   00E10170
00E0FFEC NOP
00E0FFF0 ADR X8,00E0C780
00E0FFF4 B   00E10170
00E10170 STR X8,[SP,#0x40]
00E10174 MOV W8,#1
00E10178 STR W8,[SP,#0x58]
00E10180 LDR X8,[X8,#0x230] ; GOT VA 04BB2230
00E10184 LDR X8,[X8]
00E10188 CBZ X8,00E10190
00E1018C LDR X8,[X8,#0x28]
00E101CC STR W9,[X8,#0x2140] ; W9=0xD
00E101D4 STRH W10,[X8,#0xD78]
00E101DC STR X10,[X8,#0xD90]
00E101E8 LDP X10,X11,[SP,#0x40]
00E101EC STR X10,[X8,#0xD80]
00E101F0 STR X11,[X8,#0xD88]
```

普通 cGiftToNpc index 18 -> case 00E0FFE0 -> callback 00E0C5B0；生日 index 19 -> case 00E0FFEC -> callback 00E0C780。两处 C 文件不在当前已导出路径，R112 直接使用原版 NSO 进行 CFG 复原。注册地址已确认；callback 内部调用及 +D80 实际消费者仍待 CI。00E1018C 说明结构基址为 UI root 对象 +0x28 的指针，不是 UI root 本身。

## 2. DIY 管理器对象生命周期

源文件：
- derived/3.0.3/ghidra12.2/c/aa/0261aa48.c
- derived/3.0.3/ghidra12.2/c/ab/0261ab30.c
- derived/3.0.3/ghidra12.2/c/a8/0261a890.c

0261AA48：全局非空直接返回，否则 malloc(0xEA908) 或 allocator VTable+0x30 分配；对象+0xEA8E8 注册子对象由 038C69F0 初始化，vptr 04A86F80；DAT_055576C8 保存子对象；0261AB30 构造；DAT_055588D0 = pvVar4 发布。

0261AB30：主 vptr 04A86FA0，+0x10 / +0x18 次级 vptr；memset(param_1 + 0x1d2fc,0,0xd01)，param_1 为 u64*，对应对象 [0xE97E0,0xEA4E1) 清零，同时覆盖 [0xE98E0,0xE99E0) 和 [0xE99E0,0xE9AE0)。两套位图初始零值已从 C 导出确认；尚未获得实际初始化机器码窗口。非零生产者仍未知。

0261A890：若 DAT_055576C8 == param_1，清除注册槽；0261B7F0(obj+0xEA6E8)，0261B994(obj+0xEA4E8)，清理子对象/链表，DAT_055588D0=0；之后解除注册节点。不能认定此函数已释放整块对象内存。

## 3. 位图与存档

0262AF20 从 param_4 源位图读取，按角色存档结构 +0x8690/+0x8698 对应位图判断并设置 param_2；0261C330 从全局第二位图及玩家存档第二段（+0x100）聚合到对象 +0xE9BE0。该派生位图的生产者已识别，但不能等同于全局两套原始位图的非零生产者。02618870 等用局部栈缓冲作为目标，排除误归因。0261DA70 使用第一套位图和配方行索引读取 Item u16，进一步核对产物。02618ECC 读取 HighPriceTradeOrderBonusItemRecipeID 并按两套位图选择不同物品构造路径。业务语义待恢复。

## 4. 包装转换

01B079EC 原版 C 导出：先建立两个默认 8 字节记录（0x9C4 CraftMaterial 与 0x839 Money），通过 0277D4AC 规范化。复制原始实例参数，按 CanGift 清除包装字段；对 state=3 且 subtype 12/13/14 的特殊路径，若不能保留有效 Money 记录则取 0x839；其他 fallback 取 0x9C4。若有效普通记录且通过相关门禁，非 DummyCardboard/Presentbox/Wrapping/WrappingOtoshidama 时在原始或规范化实例之间选择（01AF2868）。保留实际代码分支，不能简化为所有包装物统一清空或统一替换。具体多语言物品名仍未证实。

## 5. 新产物

Scripts/acnh303_r112_gift_callbacks.py：原版 NSO 认证、ADR 注册证据、两个 callback 有界 CFG、D80 同寄存器间接调用候选、目标 C 源索引及生命周期证据、配方产物 924 条双向严格验收。新增 SQLite r112_recipe_product 和 Web sidecar r112。CI 待执行，实际 UI 判定仍 nullable，未连接 GDB。

- [ ] R112 回调 CFG、D80 consumer 对象别名闭合。
- [ ] 两套原始位图非零生产者（不要把 +E9BE0 或栈缓冲混同）。
- [ ] 构造/注销原始 ARM64 指令和分配释放链。
- [ ] 与 GSavePlayer 配方存档字段、两套位图语义交叉对账。
- [ ] 真实运行时结果验证及包装实例测试。
