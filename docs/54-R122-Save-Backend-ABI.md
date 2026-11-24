---
title: ACNH 3.0.3 R122 - Save backend ABI
tags: [ACNH, ARM64, save, R122]
---

# R122 Main 后端与内嵌 Personal 映射

关联 [[53-R121-Native-Validator-Coverage]]，R121 三项 CI 通过。固定 R121 artifact 14894760051 的 SHA256。所有地址为 Ghidra VA = Main RVA + 0x100000。

## 两类 Main 后端
普通 026F9460: T+0x00, VTable 04A89728，两块 0x9B0E90。替代 026FD710: T+0x130, VTable 04A8A730，两块 0x5B3C40。不能将替代缓冲区作为完整 main.dat。历史证据见 [[Native-Pointer-Research-3.0.3/09-保存后端析构与玩家Payload]]。

## Main 内嵌 Personal 与独立 Personal
026F9460 C blob 06fb4adcc279e695ed955a60b8f562a57f78ac32，lines 1663–1732：8 个独立后端 T+0x60..0x98，调用 0272CBE0，独立分配。lines 2520,2860–2922：8 个内嵌后端 T+0xF0..0x128，调用 026E7190，两个 Main Getter +0x10/+0x20 的返回指针各加 0x5B3D50 + i*0x74A40。026E7190 直接将参数 [1],[2] 写入对象 +0x10/+0x18；不是新分配数据区。静态 alias 证据并不证明独立 Personal 和 Main 内嵌数据何时同步，也不证明玩家 ID 等于后端槽位。

|slot|independent T|embedded T|offset in Main|
|---:|---|---|---|
|0|0x60|0xf0|0x5b3d50|
|1|0x68|0xf8|0x628790|
|2|0x70|0x100|0x69d1d0|
|3|0x78|0x108|0x711c10|
|4|0x80|0x110|0x786650|
|5|0x88|0x118|0x7fb090|
|6|0x90|0x120|0x86fad0|
|7|0x98|0x128|0x8e4510|

## 原版 Getter 及云岛 selector
从 R100 原版 RELR 恢复五种 VTable 的 +0x10..+0x48 槽位，仅执行精确 LDR X0,[X0,#imm]; RET 序列。以独立合成对象验证返回字段。云岛 selector 使用真实 X0/X8 ABI 与原版 getter，手工应用已验证的 vtable relocation，仅模拟已知对象布局；测试 5^3 种标志组合、8 种后端存在掩码，另测空表及选中 Getter 返回 NULL。valid 表示选中有效后端，不一定表示 data 非空。磁盘映射、实际 GDB、真实存档均未验证。

## 运行
`python Scripts/acnh303_r122_backend_abi.py --r121 r121.zip --out artifacts/r122`

输出 backend_getters.json、cloud_selector_tests.json、embedded_personal_aliases.json、direct_refs.json、report.json。完整调用者归属和独立 Personal 同步尚未证明。

## 最终验收（两次专项 CI 均通过）

- Run 45337525753、Artifact 14895060132（首次）；Run 45337616550、Artifact 14894134144（新增 RELR 和 constructor window）。最终 ZIP SHA256 34d439aee470b4b729309fb5ef5a3f89d493bd7cb30309ce523b918d0d3db0cc，已实际下载重新计算一致。
- 5 个 VTable × 8 slots = 40/40 原版 Getter 执行通过。普通 Main 0270BD28/30 返回 +0x10，0270BD38/40 返回 +0x18，0270BD48/50 返回 +0x20，0270BD58/60 返回 +0x38；替代 Main 02725C18/20、02725C28/30、02725C38/40、02725C48/50 对应同样字段。两种 Main 的完整 vtable 方法集合仍未穷尽。
- Cloud selector 1002/1002：125 种 flags × 8 种存在掩码 + 2 个边界用例。空 table 返回三字段均为零；选中 S 的 getter 返回 NULL 时，pointer=0、size=0xA2458、valid=1。Valid 不是指针非空保证。
- 三个包装函数全 text B/BL 直接引用均为 0；原版 RELR 各 1 条：04A59708 -> 01D5042C；04A59718 -> 01D50468；04A59720 -> 01D504A8。下一步识别相邻函数表、对象类型及间接 BLR 消费者；不宣称已恢复磁盘链。
- 026E7190 唯一直接 BL 位于 026FD284（c3a7ff97）。原版窗口确认 026FD238 LDR X8,[X8,#0x10] / 026FD23C BLR X8 / 026FD240 ADD X8,X0,X26；026FD254 LDR X8,[X8,#0x20] / 026FD258 BLR X8 / 026FD25C ADD X8,X0,X26；将两指针存入构造参数；026FD284 BL 026E7190，026FD28C STR X21,[X8,X22] 写入 table slot。循环起始偏移及步长由 C blob 支持，尚未对全循环执行仿真。8 个 alias 是源码与局部机器码证据，不是实机内存快照。
- 02705554 有 31 处 B/BL 引用；下一轮应按调用者归属区分同步和普通调度。
- 真实存档与 GDB 均为 0；Main 内嵌数据与独立 Personal 的复制方向/触发条件仍未闭合。
