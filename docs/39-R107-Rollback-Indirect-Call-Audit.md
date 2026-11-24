---
title: "R107 · Rollback 参数分支与迁移回调销毁链"
tags: [acnh, native, eventflags, r107]
game_version: "3.0.3"
status: static-partial
---

# R107

[R106 CI](https://github.com/969981/ACNH_Resources/actions/runs/45312992682/job/138173018958) 成功。实际下载并验证 R105 artifact 14883517767 SHA256 2fe77acc1bbff6abda69c6b6ed53fdae12a7d8b03a603585a65789192d2b7f04；查询 R100 原始重定位 SQLite。以下为本轮实际局部结果，新增 NSO 扫描尚未验收。

## Rollback
W0 保存到栈。00822C20 比较6，非空对象调用01D986D8（复制0xb548 bytes及恢复手机状态、好友通知）；00822C4C !=2调用00822F90；00822D2C unsigned<=2 进入NPC状态清理；00822DB4==0另执行0219F990/021A17A0/021A5380/021A5C80；00822E2C 对 w19-1 比较1（无符号），对应1/2调用01DE1B80，后者在条件成立时处理IllegalReportCount。00822E10仍支配唯一正常RET。辅助00822F90另明确检查4、5、6、7、8、9；原版参数枚举名和合法范围仍未知，不等同于网络错误类别。

## Stage
38 BLR 局部加载槽位全部分类：0=16，8=1，18h=5，20h=8，30h=1，38h=6，60h=1。32处严格相邻 LDR X8,[X0] / LDR X8,[X8,#slot] / BLR X8。其余6处仅局部候选。真实目标0/38，不能按槽位相同合并对象类型。

## 迁移对象
04BC38E0 -> 04A92230, 04BC38F8 -> 04A92250；地址点分别04A92240/04A92260。前者两个指针028BC93C/028BCA04的实际C源码均在 DAT_055B2610==param_1 时清空055B2610及055B2618，解除链表挂接；028BCA04还释放对象。后者三个指针028BD090/028BD0A4/01D3FA88当前无独立C导出。清理路径已证实，真正分发消费者待定。GrowUp槽04BB8878指向04955BE8，原始构造写入仍未知。新增扫描聚焦这些槽/全局的 ADR/ADRP/ADD/LDR/STR/BL 候选，并对00DB8274..00DB8664做有界CFG，不能将新脚本当已执行。

## 名称与结构
实际本地计算1366944个去重签名，无5140E4B4匹配。保持原始名null。GSaveLifeSupport前0xE98及NewAchievement枚举暂无新证据；未连接GDB，无真实快照。不再增加猜测字段。

## 复现
```powershell
python -m pip install capstone==5.0.6 lz4==4.4.4
python Scripts/acnh303_r107_lifecycle_audit.py --root . --artifact github-actions-artifact-14883517767.zip --out artifacts/r107
```
脚本复核实际R105窗口、七个C blob、11个原版relocation槽、CRC语料，再生成下一跳候选与搬离CFG；CI待验收。真实GDB需要用户提供实际模块基址及同一调用前后采集。
