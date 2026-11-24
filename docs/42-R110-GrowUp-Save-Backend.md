---
title: "R110 · GrowUp 完整构造与保存后端切换"
tags: [acnh, native, eventflags, r110]
game_version: "3.0.3"
status: static-partial
---

# R110

[R109 CI](https://github.com/969981/ACNH_Resources/actions/runs/45318766296/job/138191903665) 成功。实际下载 [R109 ZIP](https://github.com/969981/ACNH_Resources/actions/runs/45318766296/artifacts/14886157356) SHA256 1a6138cb5966f6468470c23c462f5613074a845909d41bcbd44da93ea059dfe5，并复查 R100 SQLite。原版 CFG 73/251 条，局部 Stage leaf 通过。

## GrowUp
01106A2C 分配0x118（01106A88/01106A98），01106AE4写04955BF8，01106AF0清B0，01106B28写自指B8，01106B34清F8/100，B38清108，B3C清110，B4C RET。四包装注册在00DB28D0后续赋值。原始类名仍未知。完整73条已在R109 artifact，新增CI逐字节对账。
00DB8278 251可达指令、唯一RET00DB8544、0越界，00DB85A8 BL 0281CB30真实可达；不保证每次执行。

## Rollback
四个窗口实际写入同一个全局任务对象（04BB4FF0->04CD0E38），callback +20h = 00822C10，reason +28h。0/8或9/1或2/6；后续均使用 0x38 stride 环形任务队列，04BB49D8->055A0FF0。共同标签地址040D978D 待新CI读取原始字符串；参数枚举原名未证实。

## 迁移对象的真实父对象与子状态机
007BDE94..007BDEB4：04BB21D0->05358908，全局管理器+F98h -> 0x88 子对象，再将055B2618绑定+58h。01C9C834分配0x2168、调用01C9C910并发布根；01C9C910写vptr04A44F98。01C9CC70分配0x88，初始清+58h，写父+F98h，再调用01DE57A8。后者注册11个0x40 stride状态记录，回调+10h/+20h，表04A5BC70（首项01DE6FA8）。原版名称及地址见evidence.json：
- 0 State::cIdle: 01DE5C50 / 01DE5C58
- 1 State::cHostPreProc: 01DE5DCC / 01DE5DE4
- 2 State::cHostStartSave: 01DE5E2C / 01DE5FB0
- 3 State::cHostSyncCommit: 01DE60A0 / 01DE61C4
- 4 State::cHostSyncRollback: 01DE61C8 / 01DE61CC
- 5 State::cHostCommitAndWait: 01DE61D0 / 01DE6250
- 6 State::cVisitStartSave: 01DE6420 / 01DE6530
- 7 State::cVisitWaitCommit: 01DE65D4 / 01DE6670
- 8 State::cVisitCommit: 01DE6820 / 01DE6880
- 9 State::cVisitFinalizeWait: 01DE6960 / 01DE696C
- 10 State::cRollback: 01DE6A90 / 01DE6B0C
不能把状态回调字段直接命名为enter/update，实际+58h读者仍未证实。R109连续+F98/+58扫描为0，不代表无消费者。

## 保存后端
026F5030：P(P(M+10h)+130h)虚+40h取得descriptor，+8 source / +10h dest，虚+28h取得长度，memcpy，虚+30h处理后续队列，最终 M+453h |=1。证明实际切换标记与复制替换数据缓冲路径相关（不保证所有场景都已复制）。
026EEB9C/026EEBF4 确认 bit0=0: primary vcall+38h后非空返回+70h；bit0=1: primary+130h子对象 vcall+38h。
026EED64 正常玩家查找：vcall+38h结果的+78/+80指针求和，+1E33B0+index*48h 的身份记录；管理器+90..CC配对找 slot，backend+60+slot*8取对象再+20。026EEC4C替换路径：vcall+38h结果+E7120/+E7128身份表，+E7140同步；backend+140+index*8返回对象+10。它们不是同一指针链。真实两后端VTable/构造仍未证实。新增原版NSO定向全扫描追踪根、+10/+453读写、迁移+F98/+58以及状态回调窗口，结果待新CI。
## 复现
```powershell
python -m pip install capstone==5.0.6 lz4==4.4.4
python Scripts/acnh303_r110_save_backend.py --root . --prior github-actions-artifact-14886157356.zip --out artifacts/r110
```
新CI未验收，候选不能代替真实类型。5140E4B4、LifeSupport前E98h、NewAchievement原版枚举与实机快照仍未解决。
