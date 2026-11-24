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

## 专项验收
Run 45338808656；Artifact 14895241375；SHA256 e80ffecaa5836842a7f1996b421202c390b979541c1a6641033463b1eef3f39c 已实际下载校验。65 槽、60 重定位、0 RELR 入边、11 PC-relative 候选、1026/1026 原版迭代器测试。原版测试仅覆盖合成内存。

## 云岛接口所属子对象（CI 后源码补充）
04A596A8、04A596B0 两个 0 qword；04A596B8 起为函数地址点。01D41AF8 ADRP X8,0x4A59000；01D41AFC ADD X8,X8,0x6B8，与 01D41828 C blob 042eaad9d045be6ce7073873dc8d61fb0fde9f44 对应。构造函数写 parent+0x478 vptr=04A596B8；+0x480=0x14；+0x488=1；若 P(PTR_DAT_04BC1060)+0xA8 槽为空则注册 parent+0x478，随后 parent+0x489=1。C 支持 store/注册；原版 ADD 已验证，store/注册逐项机器码与对象原名未验收。
相对 vtable address point：+0x50 01D5042C pointer；+0x58 01D50CDC (ldr x8,[x0]; ldr x1,[x8,#0x68]; br x1)；+0x60 01D50468 pointer；+0x68 01D504A8 size。+0x58 thunk 原始指令表明尾调用 size slot。11 个 ADRP 候选中 01D41954→01D41968 为跨寄存器重定义假阳性（中间 ADRP X8 改写基址），不得视为真实表引用。其他候选仍需逐项数据流验证。

## Personal 的实际消费者
01D50650 (blob 28b225f030154e018ceb7c188294b11ac54becfe)、01D507DC (9f17b66ac06f21ff03c7187dccab45f2a276bac1)、01D50968 (58a1e547b47d4c39a55b2a69d5e15b8131505e92) 同样从会话表 0537D558 的 +0x44C 映射、玩家记录 stride 0x13F0 的 +0x13D0 kind、+0x13D4 present、+0x13D5 slot 选择数据。kind 0: 026EEF60()+0x110；kind 1: Main getter+0x18 返回 A +0x5B3E60+slot*0x74A40；kind 2: DAT_055021A0+0x3A20。三函数登记全局记录 stride 0x68：0536D3C0+slot*0x68 data、0536D3C8+slot*0x68 size=0x37AD0、0536D3F0+slot*0x68 ready=1；命令分别 FF00、FF06、低字节 04（高字节参数）。仅登记指针，不证明实际网络发送或磁盘写入。长度 0x37AD0=0x37ACC+4，包含第一段 Hash 字段。

028BCB18 (41341794857b38724577cdf2357142e8a02f98fe) bit0=0 分支依次调用 026F52AC,026F66E0,026F5394 后按 manager state==2 选独立 Personal、PostBox、Photo/Profile/其他描述符，条件满足时调用 02818BC0。bit0=1 分支涉及 LE_PlayerVillager_MoveOut；不能据此将 bit0=0 业务命名为同一事件。独立到内嵌复制未闭合。
