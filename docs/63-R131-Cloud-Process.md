---
title: ACNH 3.0.3 R131 - CloudIslandProcess
tags: [ACNH, ARM64, save, R131]
---

# R131 CloudIslandProcess 专用状态机

关联 [[62-R130-Cloud-Backend]]、[R130](62-R130-Cloud-Backend.md)。固定 R130 artifact 14899040236，SHA256 1905288d9df88b475a301be045bba4885db80572a505c2f99a5ea3e6f49cfb26。

## 全局归属
0283C5D0 分配0x310对象，P(055A1B78) 为 singleton，055A1B68 保存 object+0x2F0 子对象。0283C6A8 注册五个状态，每个记录0x40，三组回调各含函数指针/调整值。表中顺序按源码 +0x10/+0x20/+0x30，不预设全部语义。
|id|原版名称|+10|+20|+30|
|---|---|---|---|---|
|0|CloudIslandProcess::cIdle|0283CEA0|0283CEC0|0283CF14|
|1|CloudIslandProcess::cPreSave|0283CF18|0283D010|0283D09C|
|2|CloudIslandProcess::cSave|0283D0A0|0283D1CC|0283D200|
|3|CloudIslandProcess::cPostSave|0283D204|0283D2B0|0283D31C|
|4|CloudIslandProcess::cLoad|0283D320|0283D3D0|0283D400|
0283CBA8 登记于对象+0x278，调用026F5738、02700EE8，按 selector 选择04A91810，然后检查对象+0x288==1并调用026F5820。Manager 为空写状态2并返回false。C 反编译的 selector ABI 尚需原版确认。
## 验收
10份 C blob，5项原版名称字面量、六个原版窗口、局部地址及字段候选、全text直接引用。8个原版 guard（5个空manager状态与3个既有singleton）；不执行真实分配、网络、文件事务及完整状态机。后续审计状态回调和实际数据消费。 
