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
