---
title: ACNH 3.0.3 R134 - Cloud metadata and hash input lineage
tags: [ACNH, ARM64, save, R134]
---

# R134 云岛元信息与 Hash 输入溯源

关联 [[65-R133-Cloud-Worker]]。固定 R133 artifact 14901988731 SHA256 8b8d80474b23e64728d91cbb2eba6e7950e5b8be54c760873e923d2cec95754d。

01C7487C 从三级指针读取 source+48D9C 20B，写 descriptor+C，+2C清零；tag非零或原比较不等时从+48DB0读取分类，>3回退2，写+30。比较相等时分支至01C74978，后续分支未包含在prefix测试。不能为字段猜测官方名称。

0283D0A0 在0283D190提交前：请求+0/+8为快照指针和长度，+10/+18为零，+20 flag=1，+40 type3。01C7D0F0..01C7D20C 转换后 task+8/+10和+18/+20分别对应两对pointer/length；01C79A24通过04A433B8[2]调用01C7A574，复制至worker+8，从而worker+10/+18及+20/+28对应两组Hash输入。测试使用真实原版分段指令，合成context及标量，跳过队列锁和完整调度，原版Hash独立slice。第二组数据为空，不能将R132的相同数据算法测试解释为实际数据来源。

01C7AA98后读取worker描述符，第二组指针为空分支到01C7AD6C；非空分支到01C7B1B0并构造0x3C0子任务。待进一步静态分析。没有网络、磁盘、完整worker或真实存档。
