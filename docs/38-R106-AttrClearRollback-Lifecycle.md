---
title: "R106 · AttrClearRollback 恢复与生命周期 CFG 验收"
tags: [acnh, eventflags, native, r106]
game_version: "3.0.3"
status: static-partial
---

# R106 · Rollback 字段与任务对象

[R105 CI](https://github.com/969981/ACNH_Resources/actions/runs/45311806263/job/138169096243) 成功。实际下载 [artifact 14883517767](https://github.com/969981/ACNH_Resources/actions/runs/45311806263/artifacts/14883517767)，SHA256=2fe77acc1bbff6abda69c6b6ed53fdae12a7d8b03a603585a65789192d2b7f04。局部读取及 NetworkX dominator 分析实际执行。

## 3DAD9135

00822C10 的 00822E10 BL 00AD7410 支配唯一已发现正常 RET 00822F84；后续受对象条件控制的 00822F54 BL 02851CE8 不支配 RET。后者 C 原文出现 FinishTreasureQuestByRollback，结合 02741B30/02752790 选择字段后恢复默认值，扩展语料实际执行 3936220 次 CRC32 签名测试（含重复），唯一匹配 AttrClearRollback u8 = 3DAD9135。高可信恢复名，非原版表头确证。未确定上层原因枚举，不能把所有 rollback 等同网络断开或读档。

## CFG 与任务对象

00822C10：222条可达指令，19个 BL site，6个间接点，唯一 RET 00822F84。02912030：1790条，87个BL site/60目标，38个间接点，唯一 RET 02913B78，最后可达指令02913C28，0直接越界目标。四个场景重置调用均可达但各自不支配正常返回。此结论限于 R105 静态图（调用按返回建模），不等于动态所有路径。GrowUp 标签040B53CB已原版确认。04955BE8/04955BF0两个零字候选表头，04955BF8连续12个代码指针；R100 SQLite确认04BB8878指向04955BE8。仍需构造函数写入和 RTTI/类名证明，不把任务标签当类名。

## 迁移

007BAF68 LDR x8,[x8,#0x8d8] 从04BC38D8加载028BCB18；007BAF6C STP x9,x8,[x21]，回调写对象+8；007BAF60写对象+0x10；007BAF78发布x21至由04BC38F0引用的055B2618。原版指针邻域有数据/全局/代码混合，类名与分发消费者未证实。R100索引新增候选00DB8274（槽04955FF8），覆盖00DB85A8附近；下一登记入口00DB8664，需用真实可达CFG确认owner。

## 字典与验收

兼容整合 R101/R103 的恢复名和 R106 AttrClearRollback；native_name仍null，5140E4B4仍未知。GSaveLifeSupport前0xE98及NewAchievement枚举未获新证据；无真实GDB快照。

下载上面原始ZIP后执行：
```powershell
python Scripts/acnh303_r106_rollback.py --root . --artifact github-actions-artifact-14883517767.zip --out artifacts/r106/report.json --search
```
新 CI 使用 GitHub API 下载已通过的原始 artifact 再按 SHA 校验，重算控制流可达/支配、CRC 搜索和源码blob。新增脚本尚未在 CI 执行。
