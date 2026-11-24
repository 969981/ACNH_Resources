---
title: ACNH 3.0.3 R123 - Cloud interface and identity iterator
tags: [ACNH, ARM64, save, R123]
---

# R123 云岛接口表与玩家身份迭代器

关联 [[54-R122-Save-Backend-ABI]]。R122 最新三项 CI 通过，固定 Artifact 14894134144 SHA256 34d439aee470b4b729309fb5ef5a3f89d493bd7cb30309ce523b918d0d3db0cc。

## 02705554 的真实静态语义
源 blob 892efd1ce301f51ed977205b276bd42d80cb8e1b。输出结构两个 u32：+0 kind、+4 第一个非零身份记录槽位（0..7，8 sentinel）。param_3 bit0 未置位或全局 manager 为空则直接返回 8。普通 Main Getter +0x18 返回数据指针后加 0x110；kind=0 且 manager+0x453 bit0=1 时，替代后端 T+0x130 Getter +0x18，不加 0x110。身份记录起点 payload+0x1E33B0、stride 0x48；前两个 u64 任意非零即存在。不是直接保存写入函数，不将 31 个调用点等同于同步事务。026F4CA0 以 ValidateVillageSave 字符串和此迭代器遍历候选玩家，后续调用 026EED64 与间接回调。不是 MurmurHash 内容校验入口。

## 两套 Personal 对象
026E7190 的 +0x38 与 +0x50 记录分别设置 source/destination 为内嵌 A/B+0x110、A/B+0x37BE0，与两个 Personal Hash 区域的起点一致。026F66E0 遍历 M+0x128 count、M+0x130 records，使用 record +8/+0x10 与 VTable+0x28 size 执行 memcpy，再单独复制 T+0x60..0x98 的完整 0x74A40。此为通用 A->B 快照及独立 Personal A->B，不证明独立与内嵌之间互相复制。

## 原版验收
恢复 04A59600..04A59800 的 65 个 8-byte 槽位、原始数据、RELR 目标及目标指令窗口；扫 RELR 入边与 ADRP + ADD/LDR 候选。候选不等同于已证明寄存器数据流或对象归属。使用原版 ARM64 执行 02705554：2 mode × 2 kind × 256 identity mask + disabled/null global，合成内存，不调用实机。待 CI 后记录实际结果。

`python Scripts/acnh303_r123_cloud_interface.py --r122 r122-final.zip --out artifacts/r123`
