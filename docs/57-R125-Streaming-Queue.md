---
title: ACNH 3.0.3 R125 - Streaming queue
tags: [ACNH, ARM64, save, R125]
---

# R125 广播请求接受及接收尺寸边界

关联 [[56-R124-Interface-Registry]]。R124 最终三项 CI 均成功；固定 Artifact 14894893781 SHA256 90500c630a80a4cdd75f18b77358a3b9196298049bf7289ad14d3344817b5afa。

## 请求接受
01C84918 -> 01C94E4C 真实 peer 查找，记录 stride 0x20，+0x20 状态、+0x28 ID，peer table+0x225 本地索引。仅构造合成表，覆盖 3 种 present mask、8 种 local index、256 个 request mask；原版检查 registry 字段，不调用任何实际传输。size 固定合成值。

## 接收长度
01D807CC 使用 kind 比较及对象 +0x10 的 exact 标志。使用原版 VTable+0x68、Cloud selector 及 getter，在合成对象执行 3 backend x 2 exact x 2 kind x 4 size；若拒绝则 request size 保持哨兵。未模拟真实接收。

## 广播回调
01C831F4 C 初始化登记 01C833F0、01C83C40；提取两个有界原版窗口和 B/BL/BLR/BR/RET 引用。窗口结束地址不是完整 CFG 边界证明。进一步分析需逐条核对路径，不宣称网络收发已验证。

## 运行
`python Scripts/acnh303_r125_streaming_queue.py --r124 r124-final.zip --out artifacts/r125`
