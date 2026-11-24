---
title: ACNH 3.0.3 R126 - Streaming state
tags: [ACNH, ARM64, save, R126]
---

# R126 底层广播事务及本地重置状态

关联 [[57-R125-Streaming-Queue]]。R125 最新三项工作流通过，固定 Artifact 14895919623 SHA256 eaa3d8762294db3b697e88a4b4aa1b001b4e520336ca227da0f8342fcc9b03bc。

## 对象与状态
002B7440 登记 source +0x80、size +0x90、state +0x78=1、关联类型 +0xB8；002B6E98 初始化 destination +0x88、size、state=4、+0xB9、+0xC8。后者调用 002B72D8、002A4DC0，属于下游事务准备，不将其解释为实际磁盘写入。002B7558/002B7008 的状态屏蔽常量 0x736（states 1,2,4,5,8,9,10），结果值 0x10C08 为前置条件失败候选，0x10C07 为参数/关联检查失败候选；非官方错误名称。

## 关联记录和本地清理
002B5888 在 +0x94..+0xB3 查找指定 byte。FF 可匹配（上层另行拒绝 FF），不代表有效参与者。002B6D6C state=2 且 +0xB8 不在记录中时清理本地字段并设 12；state=5 且 +0xD2=100 时清理后设 6、计数恢复100；state=2 且存在时依赖 002A5C40 完成查询，成功设3（本轮不执行该分支）。002B5764 另有事件触发的 state12 源码路径。原版业务枚举名称未确认。

## 01C84C50
遍历上层八位掩码，检查有效参与者后经虚函数及 002B73BC 检查底层关联记录；一条分支置输出 byte=1，另一条分支仅在附加类型/状态条件满足时 XOR 清相应位并调用 +0x38。不是完整传输成功证明。

## 验收范围
8448 项 membership、84 项 local reset（14状态×6计数）、768项 identity getter；原版函数执行并检查完整缓冲区。只执行离线本地分支，禁止进入 SDK completion query。7 个有界窗口不是完整 CFG 证明。真实联网、磁盘及样本未验证。

`python Scripts/acnh303_r126_streaming_state.py --r125 r125-final.zip --out artifacts/r126`

## ABI 及原版指令证据
R125 指令窗口与本轮原版入口交叉确认：002B7440 X0 object、X1 source、W2 length、W3 kind、X8 sret（002B7450 MOV X19,X8；01C83A5C BL）。002B6E98 X0 object、X1 session argument、X2 destination、W3 length、W4 kind、X8 sret（01C84434 BL）。
002B7534 STR X23,[X20,#0x80]；002B7538 STR W22,[X20,#0x90]；002B753C STR W8,[X20,#0x78]；002B7540 STRB W21,[X20,#0xB8]。002B6F94 STR X24,[X22,#0x88]；002B6F9C STR W23,[X22,#0x90]；002B6FA0 STR W8,[X22,#0x78]；002B6FA4 STRB W20,[X22,#0xB9]；002B6FA8 STR X21,[X22,#0xC8]。这些写入为静态指令证据，不表示这两个入口完整执行。
直接 BL: 002B7440 1 处 01C83A5C；002B6E98 2 处 01C841C0/01C84434；002B6D6C 1 处 002B59CC；002B5888 3 处 002B5814/002B6D90/002B74A4；01C84C50 1 处 01C83A1C。002B5764 无直接 B/BL，不能断言无间接消费者。

## 验收
首轮 45342328180 已完成 8448 项 membership，reset 进入外部 memset import 04004450 后未映射读取。修复 805cd7b 只拦截已知 memset ABI (dst=object+0x94,value=FF,n=0x20)，7 次断言参数并模型化填充；其余原版指令执行。禁止调用 002A5C40 completion query。第二轮 45342467563 验收 9300/9300：membership 8448、reset 84、getter 768，完整测试对象逐字节一致；2->12 六次、5->6 一次，其余77次未改写。2->3 仅静态源码与指令证据，未执行。七个有界窗口797条指令。Artifact 14896577058，SHA256 16c2949936c94df3980c6c19924930f6af26b4c2cbcb2da7600f824686316450，已下载且容器重新计算一致。原版 NSO 执行不是实机执行，也未调用网络或完整下层 SDK；Cloud 磁盘、内容完整性和 Ready 读取链仍未闭合。
