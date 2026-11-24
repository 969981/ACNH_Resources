---
title: "R104 · GrowUp 注册对象与 GSaveLifeSupport 迁移清理"
tags: [acnh, native, eventflags, r104]
game_version: "3.0.3"
status: static-partial
---

# R104 · 真实注册引用与迁移结构

## 证据来源
[R103 成功 CI](https://github.com/969981/ACNH_Resources/actions/runs/45310321848/job/138164136863)，[R103 artifact](https://github.com/969981/ACNH_Resources/actions/runs/45310321848/artifacts/14882673010)，[R100 SQLite artifact](https://github.com/969981/ACNH_Resources/actions/runs/45308001227/artifacts/14881442847)。本轮实际下载两产物并核对 zip SHA256，查询原版重定位 SQLite。所有地址为 Ghidra VA，运行时应减 0x100000 后加实际模块基址。

## GrowUp 注册
ADR 00DB2B1C/28/34/40 对应 mode0..3 的 00DB2BEC/2C50/2CB4/2D18；00DB2B44: STP X8,XZR,[X19,#0x100]；00DB2B4C: STR X19,[X19,#0xF8]。对象 +0x100 回调、+0x108 清0、+0xF8 自指、+0x110 完成标志。00DB2D7C 的原始 RELR 槽 04955C40，所属连续代码指针区间 [04955BF8,04955C58) 共12槽。四个包装地址本身无直接 relocation。完整类名和 VTable 边界未证实。

## Temp 生命周期
3DAD9135 两消费者共同上层 FUN_00AD7410：遍历8玩家，通过 FUN_026EEC4C 获取玩家，调用 02754A90 和 02752790；随后 02741B30 处理 LandTemp。此为批量临时状态清理，实际游戏触发未定。
SceneChange Player 02752AE0 接收玩家索引，通过 02583354 查找有效玩家后 02752C00。Land 02742940 两处 BL 02912170/029121A0，Stage Memory 027EA3E0 的 BL 029128D0。原始 RELR 04A92AB8 指向 02912030，位于连续24个代码槽 [04A92A30,04A92AF0)；02912030 缺独立 C 导出，作为两个调用所在函数的候选入口，非确证 owner/VTable。仍需原版完整指令和函数边界验证。

## 玩家迁移
028BCB18 是 02818BC0 的直接 caller（028BCFB4）；原始 RELR 04BC38D8 指向 028BCB18，周边混合 data/bss/code，不能宣称 VTable。参数 bit0=1 分支明确包含 LE_PlayerVillager_MoveOut 及 0281CB30；bit0=0 分支先检查多数据对象与状态，再调用 02818BC0。两分支不是一条无条件顺序链。完整最上层用户操作及回调注册待定。

## GSaveLifeSupport (+0xD170)
[固定 NHSE 3.0 偏移](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Save/Offsets/PersonalOffsets30.cs) 命名 +0xD170 为 GSaveLifeSupport、+0xE98 为 CountAchievement、+0x5498 为 NowPoint（其余字段名保留 raw）。原版 027A5750 以 BED25A86 与 UniqueID 选择，索引 <512；四个数组各清一个完整元素：
| 相对 GSaveLifeSupport | 步长 | 清除宽度 |
| --- | ---: | ---: |
| E98 | 4 | 4 |
| 1698 | 6 | 6 |
| 2298 | 24 | 24 |
| 5298 | 1 | 1 |

四个数组连续至 +0x5498，但开头 0..E97 和后续布局尚未恢复。注意循环初始行数来自 manager+0x1c0，而迭代实际缓存 +0x1d40/+0x1c30；需确认实际注册和行数，不将反编译不一致填成猜测。原版 EventFlagsLifeSupportAchievementParam 99定义、4标记、95未标记；四项为 ImmigratetoIsland(53)、ChangeSymbol(86)、InviteFriend(19)、DayPlayed(21)。与玩家主状态1196条是不同表。结合存档偏移和字段匹配可高可信识别成就清理路径，仍需表注册及实机验证。
本轮针对剩余两 Hash 执行8708930个唯一u8签名测试，无命中；保持原名null。

## 复现与验收
```powershell
python -m pip install capstone==5.0.6 lz4==4.4.4
python Scripts/acnh303_r104_registration.py --root . --out artifacts/r104
python Scripts/acnh303_r104_lifesupport_compare.py --selftest
```
新增 CI 验证原版 NSO hash、RELR 槽及 ADR/BL，导出注册和候选 owner 完整有界窗口及下一跳引用。尚未运行新 CI。成就区比较器只接受从同一 GSaveLifeSupport base 读取的两份 0x5498 字节快照（可使用 R102 moving_parallel 观察入口）；仅比较99定义，真实采集需独立确认，未连接实机。
