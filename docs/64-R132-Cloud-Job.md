---
title: ACNH 3.0.3 R132 - Cloud async job
tags: [ACNH, ARM64, save, R132]
---

# R132 云岛下游任务

关联 [[63-R131-Cloud-Process]]，固定 R131 Artifact 14898099798 SHA256 fbedb62dccd7fcd9423cd4f14ab1ba6a91c9dd8b9a1e38481ad022955479b17c。

## Type 3 -> Type 2
01C7CF1C 拒绝 active && !done 或输入 type0。type3 从 P(05351250)+0x58 取得关联上下文，经01C7A574复制组合描述符，将 task+0x40设2、+0x48设1、清+0x54/+0x188，互斥锁保护插入队列。CloudIslandProcess内嵌task+0x70，故 Process+0xB0/B8/C0/C4/C8/1F8 对应type/active/result/done/response/response-valid。01C7C980调度器负责队列移除及结果登记；+0x50写0/1/3，+0x54置1。队列 factory01C7C808，P(05351408)，大小0x7F0，节点偏移0x1A0，+0x18 count，+0x40 mutex。01C87374直接调用01C7C980。
## 内容Hash候选
01C79ED0 源码含两个内联MurmurHash3循环，seed 0x36170E33，输入 pointer/length +0x10/+0x18 与 +0x20/+0x28，生成描述记录。当前只证明源码中的计算，不声称该函数已确认属于Cloud实际worker或磁盘校验器；待提取原版指令并局部验收。
## 验收
10份C源码锚点、六个原版有界窗口、七组RELR候选表；48项04A918E8描述符写入/NULL、32项01C7A574拷贝、拒绝分支矩阵。原版局部执行，不执行真实网络、磁盘或完整任务。
