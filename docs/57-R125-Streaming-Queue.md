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

## 实际验收

首轮 45341450437：6144 队列测试已完成，接收仿真在 01D504A8 的全局状态指针处未映射读取；修正合成环境 P(0x537D558)+0x10 的初始化（7964570），不修改原版指令。第二轮 45341536901 全部通过。最终 Artifact 14895919623，SHA256 eaa3d8762294db3b697e88a4b4aa1b001b4e520336ca227da0f8342fcc9b03bc，已实际下载重新计算一致。

|present mask|接受|拒绝|
|---|---:|---:|
|FF|2032|16|
|55|1856|192|
|00|0|2048|
|合计|3888|2256|

6144/6144 队列测试、48/48 接收尺寸测试通过；接收接受12、拒绝36。exact=0 接受9，exact=1 接受3。均为合成对象，保留原版 peer lookup 和容量虚调用。未执行实际联网或传输。

## 回调指令窗口证据

01C833F0..01C83C40：532 条；01C83C40..01C845C4：609 条；合计 1141 条。筛出 BL/BLR/BR/RET 分别32、41条（不等同于独立调用者数量）。两个回调在全 text 直接 B/BL 搜索均为零，由构造注册，完整 CFG 未闭合。

01C837A8 LDR W8,[X20,#0xC0]；01C837AC CMP W8,#1，分支检查请求状态。01C83A1C BL 01C84C50；01C83A54 LDR X1,[X20,#0xC8]、01C83A58 LDR W3,[X20,#0xC4]，01C83A5C BL 002B7440；01C83A74 LDR X8,[X8,#0x40]、01C83A78 BLR X8。证明读取登记的指针和 kind 并调用下游，但下游 I/O 语义未验证。
01C8439C LDRB W8,[X25,#0xA]；01C843A4 CMP W8,#0x17，01C843AC CSEL X8,X8,XZR,LO；01C843B0 LDR X0,[X9,X8,LSL#3]；01C843C0 BLR X8 (+0x10)，01C843E4 BLR X8 (+0x20)，01C84418 BLR X8 (+0x28)，01C84434 BL 002B6E98。说明按 kind 分派到注册接口并获取缓冲区后进入下游。实际数据读写、完整状态图、Ready 消费者、Cloud 磁盘与 Hash 未闭合。

## 下一阶段
追踪 002B7440、002B6E98 及 01C84C50 状态转换；优先补证完整 CFG、回调登记归属、描述符 Ready 的间接读取；保留真实存档和实机验证为独立门禁。
