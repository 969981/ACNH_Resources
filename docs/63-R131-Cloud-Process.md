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

## 实际验收
首轮45347925094提取窗口成功但 Unicorn mem_write 不接受 bytearray，296326f 修复 bytes 转换，第二轮45348039682通过。第三轮45348119037通过，Artifact 14898099798，SHA256 fbedb62dccd7fcd9423cd4f14ab1ba6a91c9dd8b9a1e38481ad022955479b17c，已下载并核对一致。10份源码锚点，5个原版字符串、15个回调入口、998条原版指令、28个地址候选、12个字段候选、15个额外RELR槽。8项原版 guard 加169项状态更新共177项通过。
|状态|rodata VA|
|---|---|
|CloudIslandProcess::cIdle|040FFD0E|
|CloudIslandProcess::cPreSave|040FFD28|
|CloudIslandProcess::cSave|040FFD45|
|CloudIslandProcess::cPostSave|0409D1F0|
|CloudIslandProcess::cLoad|040B6CAF|
状态记录+10/+20/+30对应的15个回调地址全部在构造器 ADR 中匹配。全局 singleton VA 055A1B78（Main+0x54A1B78）；对象+0x68任务指针、+0x220状态机、+0x288准备结果、+0x290临时数据、+0x298类型、+0x2C0释放结果、+0x2E8加载结果。
## 八组选择器间接分派
|table|BLR site|
|---|---|
|04A91810|0283CC14|
|04A91830|0283CC94|
|04A91850|0283CD98|
|04A91870|0283CE60|
|04A91890|0283CF00|
|04A918A8|0283D060|
|04A918C8|0283D10C|
|04A918E8|0283D154|
|额外table|RELR targets (index顺序)|
|---|---|
|04A91890|0283ECB4, 0283ECD4, 0283ECE8|
|04A918A8|0283ECFC, 0283ED00, 0283ED4C, 0283ED9C|
|04A918C8|0283EDEC, 0283EDF0, 0283EE58, 0283EEC0|
|04A918E8|0283EF28, 0283EF2C, 0283EF54, 0283EF7C|
0283CC58读取+298，经04A91830释放+290，随后+298清零、+2C0=1；未见清空+290的直接写入。0283CCBC 调用02700CCC，借04A91850验证长度，04A91870复制，调用026F66E0，写+2E8=1；早退写2。该路径是内存加载事务证据。04A91890 的3个函数分别返回错误7并切换0、切换1、切换4。04A918E8三个非零selector目标读取输入数据指针并填入数据及大小描述；完整数据传输与磁盘行为尚未验收。
## 状态更新原版测试
cPreSave 0283D010：+288=0等待、其他非零且非1切换3（4项；成功分支仅静态证据）。+288=1经04A918A8调用后切换2。
cPostSave 0283D2B0：+2C0=1时读取准备状态和任务状态，结果写 request+0x20；清空 process+0x68，切换0。160项矩阵：release status五值、active两值、done两值、result四值、prepare status两值。cLoad 0283D3D0：+2E8=0等待，1写结果1，其余非零写7；清任务，切换0（5项）。169项使用真实ARM64分支和全对象/任务对照；仅03EBB160的调度调用模型化记录参数与返回，不执行真实状态回调。03EBB160 C另行获取，未纳入本轮10份锚点。原版cSave入口在0283D10C/0283D154两次处理+290临时数据后，在0283D190 BL 01C7CF1C（已获取C，任务链表登记）。该任务下游及实际I/O尚未闭合。R132重点追踪04A918A8/C8/E8目标、01C7CF1C type3 路径及完成字段+0xB8/+0xC4/+0xC0。未证明独立CloudIsland文件7..9实际调用或内容Hash。
