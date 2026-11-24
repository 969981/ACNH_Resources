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
