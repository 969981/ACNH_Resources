---
title: ACNH 3.0.3 R133 - Cloud worker ownership
tags: [ACNH, ARM64, save, R133]
---

# R133 云岛任务执行器与数据归属
关联 [[64-R132-Cloud-Job]]。固定 R132 artifact 14900229318，SHA256 61eb0cae201b26e0c01d4e7e25236dfbd6108df9086043a25cc6bd9f5f4937d6。

## 数据登记归属
04A918A8 [1..3] 回调0283ED00/4C/9C直接读取05574040，即 SaveManager；非NULL调用0270B80C/828/844，写+0x518 pointer，+0x520 selector。NULL源指针同样被登记（与04A918E8区别）。待定位实际消费者。
## 内层类型分派
04A918C8 [1..3] 0283EDF0/EE58/EEC0，源指针非NULL时读取P(05351250)+0xB0，并从04A43108选择回调，X1=context+0x58。0xffffffff进入错误路径。本轮仅执行variant0/1且模型化内部回调，记录传入的源指针及上下文。并非磁盘、网络执行。
## Worker
01C7C808由04BC1018取得worker VTable，01C7AA90直接调用01C79ED0。提取有界窗口、邻域重定位与全text直接调用；候选字段偏移扫描仅是语法候选，不保证SaveManager归属。9份源码完整性锚点、72项登记与24项内层分派测试。
