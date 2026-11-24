---
title: ACNH 3.0.3 R130 - Cloud backend lifecycle
tags: [ACNH, ARM64, save, R130]
---

# R130 CloudIsland 后端生命周期

关联 [[61-R129-Profile-Load]]。固定 R129 artifact 14897378068，SHA256 0ec1ebe56bc36241ded64d693d603a0f0792c65b366d8979a2a3d2b1354d1dd1。

## 构造与绑定
02703290 先调用 027052B0 清理，按 Manager+0x508 bit2/3/4 分配 S/M/L，分别写 T+0x190/198/1A0，成功置 Manager+0x50E/50F/510 bit1，尾部按 config 置 bit0。后端0x40，双缓冲区 +10/+18，+20结构描述树，+28上下文0x28，+30容器0x28，+38记录0x1050。
|类型|payload size|tree alloc|tree VTable|record VTable|
|---|---|---|---|---|
|S|0xa2458|0xb0500|04A8B8F8|04A8BCE0|
|M|0xc6788|0xb69a0|04A8BD90|04A8BF60|
|L|0x14c618|0xcdd80|04A8C010|04A8C1E0|
记录 +8/+10绑定双缓冲，+0x50起128项0x20步长节点（源码循环每次0x40写两项，末尾指针清零）。上下文 +0/+8/+10/+18 指向 M+3D0/3F0/410/430，+20 指向容器。02640070 递归写描述树 +8 数据及 +30 flag，调用 vtable+10，沿 +18 child、+20 next；子节点 flag=flag&1。02640130 同一树遍历写 +28 上下文，旧值非零使 DAT_0555A030 加一。
027052B0 通过后端 +48 getter 取得记录，从 M+130 数组中移除（+128 count），调用 +8 析构，清空 table slot 与 flag 低两位。026F7430 对 A 清零并初始化，再经 record +28 取得尺寸复制到 B，并清理记录链。当前都属于内存生命周期证据。
## 验收
固定11份源码；原版 selector RELR 12项、后端/树/记录 VTable 槽及原版指令窗口；60项描述树绑定测试（合成树，未知 virtual callback 仅模型化返回并记录访问顺序，真实指令负责遍历/写字段/计数）。不执行构造、磁盘或网络事务；Cloud 内容 Hash 尚未恢复。

`python Scripts/acnh303_r130_cloud_backend.py --r129 r129-final.zip --out artifacts/r130`

## 最终验收与命名纠正
首轮 45346525951、第二轮 45346709967 均成功。最终 Artifact 14899040236 SHA256 1905288d9df88b475a301be045bba4885db80572a505c2f99a5ea3e6f49cfb26，已实际下载逐项读取并核对 SHA256。11份 C blob，12项 selector RELR，63项后端/描述树/记录 VTable RELR，2614条有界原版指令。60/60 递归绑定、9/9 快照准备及释放、9/9 Getter，共78项测试。绑定测试使用合成树，252次未知节点回调只模型化返回；全对象逐字节验证、真实遍历及计数。实际三类根 VTable +0x10 都指向 026402C8 (RET)，其他节点回调仍需独立审计。

## 快照准备与释放
此前 pre/post save 仅是暂名。原版 0283E838/0283E8F8/0283E9BC 读取 X0->inner+8 的 state 指针、X1 指向的源缓冲；根据 05AE7600 选择 allocator 或 malloc 路径。随后初始化新缓冲、memcpy 完整 payload、state+0x290=新缓冲、+0x298=selector 1/2/3、+0x288=1。0283EA84/0283EAE8/0283EB4C 释放 X1 指向的缓冲，NULL 时不调用释放；自定义 allocator 路径经 038CB610 和虚表+0x38，fallback 经 00347910。仿真只覆盖 fallback，模型化 003478C0 allocation、对应 initializer、04004470 memcpy、00347910 release；实际原版负责尺寸与状态登记、调用 ABI、NULL 分支。三种类型各三种模式共9项，完整缓冲及0x300 state逐字节相等；未执行完整初始化器或分配器。
|kind|init BL|copy BL|pointer store|kind store|status store|
|---|---|---|---|---|---|
|S|0283E8C0|0283E8D4|0283E8DC|0283E8E0|0283E8E8|
|M|0283E980|0283E994|0283E99C|0283E9A0|0283E9AC|
|L|0283EA44|0283EA58|0283EA60|0283EA64|0283EA70|

## 双缓冲记录虚表 Getter
|kind|tree +18 size|record +28 size|record +30 list|
|---|---|---|---|
|S|02729964|0272ACF0|0272ACFC|
|M|0272AF54|0272B530|0272B53C|
|L|0272B794|0272BD80|0272BD8C|
9/9 原版调用通过；record +0x30 返回 object+0x20，并非直接清理函数。026F7430 的后续清理链应按实际返回列表解释。
全 text 扫描：02703290 3处，027052B0 2处，026F7430 4处，02640070 78处，02640130 52处，三个 initializer 各5处，12个 selector callback 直接引用均0。应继续追踪 04A91810/30/50/70 的间接调度者、state+288/290/298 读取者及 Cloud 专用文件索引7..9。当前内存快照证据不能替代真实磁盘调用，Cloud 内容 Hash、实机及样本仍未验证。
