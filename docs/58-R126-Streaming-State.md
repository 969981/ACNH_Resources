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
