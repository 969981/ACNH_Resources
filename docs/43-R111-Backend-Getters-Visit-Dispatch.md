---
title: "R111 · 保存后端 VTable 与联机存档回调分发"
tags: [acnh, native, eventflags, r111]
game_version: "3.0.3"
status: static-partial
---

# R111

[R110 CI](https://github.com/969981/ACNH_Resources/actions/runs/45320628094/job/138198011138) 成功。实际下载并 SHA256 校验 R110 ZIP 14887267379、并行 Native Pointer 研究的 ELF ZIP 14886678739；查询原版 R100 SQLite。交叉整合已合并 [[Native-Pointer-Research-3.0.3/09-保存后端析构与玩家Payload]]，而非重复宣称独立发现。

## 保存后端

026F9460 分配0x1A8后端表，026F9E50/026F9EB0写manager+0x10，ordinary object 0x40，VTable 04A89728。026FD710 分配 replacement object 0x40，VTable 04A8A730，026FDB20写table+0x130，026FE050失败清零。两类各8个getter由真实RELR槽与ELF字节对账：
| VTable偏移 | ordinary | replacement | 返回对象字段 |
|---|---|---|---|
| +0x10 | 0270BD28 | 02725C18 | +0x10 |
| +0x18 | 0270BD30 | 02725C20 | +0x10 |
| +0x20 | 0270BD38 | 02725C28 | +0x18 |
| +0x28 | 0270BD40 | 02725C30 | +0x18 |
| +0x30 | 0270BD48 | 02725C38 | +0x20 |
| +0x38 | 0270BD50 | 02725C40 | +0x20 |
| +0x40 | 0270BD58 | 02725C48 | +0x38 |
| +0x48 | 0270BD60 | 02725C50 | +0x38 |
每个getter实际为 LDR X0,[X0,#field]; RET。+0x38 两个返回+0x20；+0x40 两个返回+0x38。槽位重复不是名称证据。静态等价只读链:
```
M=P(main+0x5474040)
T=P(M+0x10)
O=P(T+((u8(M+0x453)&1)?0x130:0))
R=P(O+0x20)
B=R+((u8(M+0x453)&1)?0:0x70)
```
需要非空、Build ID、VTable及一致快照检查；没有实际runtime数据。原版两构造器及字段详情见已合并文档09。

## 切换函数与全局引用
026F5030 实际BL: 01D59094、01D5D73C、01D94D3C。上层函数边界未定。R110 2835候选分组：后端+10读取1540，+453读取1280，+453写8，迁移父+F98读取6，子+58写1；未命中根直连+10写不代表构造写入不存在，实际写入通过manager参数完成。

## 迁移子对象消费者
cVisitStartSave callback 01DE6420：
01DE642C LDR W8,[X0,#0x70]，01DE6434 CBNZ跳过；01DE6438 LDR X0,[X19,#0x58]，01DE643C CBZ跳过；01DE6448/4C读取05358908，01DE6450 LDRB W1,[X8,X9]（X9=0x2078）；01DE6454 LDR X8,[X0]，01DE6458 LDR X8,[X8]，01DE645C BLR X8。实际consumer成立。R108绑定055B2618的对象secondary地址点04A92260，首RELR槽->028BD090。此为条件静态目标；未确认当前对象身份未改变，且尚未恢复028BD090内部如何调用028BCB18。新CI提取其机器码窗口。

## Rollback状态
cHostSyncRollback 的两个登记回调01DE61C8/01DE61CC均只有RET(c0035fd6)，不能将相邻cHostCommitAndWait误归入。cRollback +10入口01DE6A90重置所指工作对象+0/+8/+10/+30/+50，再OR 0x4000；读取管理器+2078后分支。+20入口01DE6B0C检查工作对象+54 bit0，未置位RET，置位则X0+=0x10/W1=0 tail B 03EBB160。状态更新01DE6B30源码证明参与者掩码及0x40 stride状态分发。原始 reason enum 尚未恢复。Queue标签SequenceSubProcessor原版确认。

## 验收
新CI重新校验三个产物SHA、原版NSO、16 getter、两个vtable、10余机器码窗口及源blob；结果待验收。下一步为028BD090 thunk完整函数、三个切换调用者CFG、剩余Stage间接对象归属。5140E4B4、LifeSupport前缀、NewAchievement、GDB实机仍未知。
