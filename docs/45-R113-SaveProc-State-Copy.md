---
title: "R113 · SaveProc 请求、状态切换与复制描述符"
tags: [acnh, native, eventflags, r113]
game_version: "3.0.3"
status: static-partial
---

# R113

R112 第一次CI失败于地址转换：01DE6B08的分支操作数RVA 0273E2D0，Ghidra VA 0283E2D0。修复提交0f40da3；[修复CI](https://github.com/969981/ACNH_Resources/actions/runs/45329001905/job/138225333594)通过。实际下载 [artifact 14891550048](https://github.com/969981/ACNH_Resources/actions/runs/45329001905/artifacts/14891550048) 并校验 SHA256 026a49bf18313e847365c388a442c732fdf1f5a6e6150810518f33fd661b2a07。5指令迁移thunk、6个Stage getter、13个重定位槽全部通过。

## 三个切换调用者
| BL site | entry | reachable | return/tail | BL/BLR |
|---|---|---:|---|---|
| 01D59094 | 01D58FF4 | 500 | 01D597C0 RET | 19/13 |
| 01D5D73C | 01D5D6A0 | 82 | 01D5D7E4 B 040038C0 | 3/0 |
| 01D94D3C | 01D94C54 | 170 | 01D94EF8 RET | 14/3 |
三者均有匹配栈帧和可达focus；第二个尾调用释放锁的已知地址040038C0，不能把外部尾调用当遗漏。第三个入口是20个prologue候选中唯一可达者，无重定位登记，仍保留完整函数身份的限制。实际调用条件前两处+AA0!=3，随后+AB7=1。第二个在共同join后注册00822F90 reason3，即使跳过026F5030也能注册；第三处+12C=1及后续026EEC4C。

## Copy Descriptor 四函数
02723410 MOV W0,#E90h; MOVK W0,#9Bh,LSL#16; RET => 9B0E90h。
02725FD0 MOV W0,#3C40h; MOVK W0,#5Bh,LSL#16; RET => 5B3C40h。
0272341C / 02725FDC ADD X0,X0,#20h; RET。返回内嵌队列地址，不是执行队列更新。
026F5030 复制 replacement descriptor+8 到 +10h，长度固定5B3C40h，再取内嵌队列并解除链表节点，最后manager+453h |=1。普通长度9B0E90h独立证明，不将其误用为replacement长度。

## SaveProc 公共处理
0283C5D0 分配0x310 manager，0283C6A8初始化并发布055A1B78。0283E2D0等待LightEvent(P(manager+8)+20h)，检查全局+3C/+3D同时非零的拒绝条件；否则若(request.flags&1180h)==80h则OR80000h。0283C2A8校验成功，manager+10h保存请求，任务队列055A0FF0步长38h、任务指针manager+18h、标签SaveProc；队列未满才写入。失败路径request+8若0置7、request+54h OR1、可用同步对象则signal。原版C证明仅特定拒绝路径赋7，不将所有失败都归为同一原因。
构造器将+18h任务vptr04A91C20、+20h self、+28h callback0283CB14；后者调用0283D4C4，返回1。另+40h任务绑定0283CB2C（+50h callback），使用+60h请求对象的vtable +28/+30/+38/+40；提交入口0283E518。同步路径0283D404调用0283D4C4直接执行。
0283C2A8: null / flags&818Fh!=0 / flags&70h==0直接返回1（跳过这一阶段，不代表最终保存成功）。否则如bit10未置位进行026F5430/026F5518同步；selector=((flags>>4)&7)-1，范围0..4，五原版RELR目标：
- 04A922A0 → 028BDFF0
- 04A922A8 → 028BE5E4
- 04A922B0 → 028BE5E8
- 04A922B8 → 028BE5EC
- 04A922C0 → 028BE5F0
成功+54h OR2，失败+54h OR1并在结果0时置7。0283D4C4是真实worker，按请求flags选择初期分发及多阶段回调；完整请求枚举名未确认。
CloudIslandProcess原版五个状态，记录stride40h，表vptr04A91C70；+10/+20/+30 callback:
- 0 CloudIslandProcess::cIdle: 0283CEA0 / 0283CEC0 / 0283CF14
- 1 CloudIslandProcess::cPreSave: 0283CF18 / 0283D010 / 0283D09C
- 2 CloudIslandProcess::cSave: 0283D0A0 / 0283D1CC / 0283D200
- 3 CloudIslandProcess::cPostSave: 0283D204 / 0283D2B0 / 0283D31C
- 4 CloudIslandProcess::cLoad: 0283D320 / 0283D3D0 / 0283D400
不将CloudIsland状态枚举与Rollback原因枚举混同。

## 通用状态切换
03EBB160: stateMachine+8 当前ID；+C计数；+10上一ID；+14上一计数；+18 pending；+21变更标记；+28状态数量；+30表；stride40h。当前ID为FFFFFFFF时先尝试pending；旧状态vtable+10处理切换请求，再写入新ID、清计数、保存旧ID与计数、置变更标志；新状态非FFFFFFFF时调用vtable+0。越界索引回退0。cRollback第二回调传child+10h及新ID0；结合R110联机状态表，ID0是State::cIdle。

## 参数3
01D5D6A0中01D5D75C mov w11,#3，01D5D770写task+28，01D5D774写task+20=00822F90（04BB4FD0）。走SequenceSubProcessor环形队列。00822F90: 3不匹配5/6/7/8/9，也不命中4/7早退；进入通用环境/场景判定及01384940（循环57个对象），之后根据原版全局条件调用015531D0或014B4DD0/014B3E18。它不是00822C10批量清理入口，不能据此给3命名或推断AttrClearRollback已执行。

## 验收
新增CI复验R112 ZIP原版字节、三个CFG、四个getter、五个dispatch RELR及15个源码blob，并从认证NSO提取12个有界CFG（边界非完整性证明）。新CI待验收。剩余29个Stage调用、5140E4B4、GSaveLifeSupport前缀、新成就枚举、真实GDB均未闭合。
