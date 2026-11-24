---
title: "R105 · GrowUp 原版 Mode、任务队列与成就结构"
tags: [acnh, native, eventflags, r105]
game_version: "3.0.3"
status: static-partial
---

# R105 · GrowUp 原版事件名称

[R104 CI](https://github.com/969981/ACNH_Resources/actions/runs/45311257648/job/138167260699) 通过；实际下载 artifact 14882428881，验证 SHA256 并读取完整 199 条注册指令、576 条候选 Stage 指令、5 条下一跳引用。原版 R100 SQLite 同样实际查询。

## GrowUp

00DB28D0..00DB2BE8：比较字符串 cTitle/cStart/cInGame/cAfterNet（逐字符 CMP 与 NUL 检查），分别写入 mode0..3 回调；未知标签回退 mode0。R105 新 CI 将直接从原版 NSO 读取四个 rodata 字符串再次确认。注册函数完整指令已获得，不等于正式 C++ 原始源码或 Ghidra 全反编译。

全局槽 04BB49D8 -> 055A0FF0，读取队列；存在时以 +0x20 为同步对象，检查 count(+0x50)<capacity(+0x48)，用 head(+0x4C)+count 计算环索引，stride0x38，array(+0x40)。entry+0x08=task+0xF0，+0x30=字符串地址 040B53CB（内容待原版读取）。无队列则 task+0xB0=1。指针连续区域 04955BF8..04955C58 的12槽在 evidence.json 保留原值，04955C38->00DB28D0、04955C40->00DB2D7C。尚未确定原始类名、RTTI 或真正 VTable 边界。

## 生命周期下一跳

00822E10 BL 00AD7410；RELR 04BB4FC8->00822C10，下一注册地址00822F90。候选 owner 非确证，实际游戏事件仍未知。007BAF68 是 04BC38D8 的 ADRP/LDR 候选引用；还找到 00DB85A8 BL 0281CB30。需查看上下文，不把指针加载直接等同注册。

02912030 具有栈帧 prologue，且已有窗口内 Land SceneChange (02912170/029121A0)、Player SceneChange (02912244)、NPC StageChange (029128D0) 的直接 BL。窗口到02912930（不含），未见RET；分支越界至02912944和02913BC8，故当前不是完整函数。下一已注册入口0291463C仅作 CFG 搜索上界。NPC 路径还受029127CC、02912814、02912850等门禁控制。

## GSaveLifeSupport

[NHSE AchievementList.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Misc/AchievementList.cs) 和 [GSaveDate.cs](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Misc/GSaveDate.cs) 与原版 027A5750 四数组跨度一致：E98 CountAchievement u32[512]；1698 ReadAchievement byte[512][6]；2298 DateAchievement GSaveDate[512][6]（LE u16 Year/u8 Month/u8 Day）；5298 NewAchievement raw u8[512]；5498 NowPoint；54A0 TotalPoint。社区名称交叉验证而非官方符号。NewAchievement 枚举及开头 E98 bytes 未闭合。保存四项迁移成就的 R104 证据，不将原版表缓存计数异常忽略。

## 验收

本地以新标签扩展词表实际计算2933546次签名（有重复），无剩余两 Hash 命中。新增原版 NSO 字符串和可达 CFG 提取、重定位邻域与迁移间接引用窗口，待新 CI。新增 typed LifeSupport 只读比较器，日期保留无效原始值、未知状态保持 raw，不宣称实机验证。

```powershell
python Scripts/acnh303_r105_lifesupport_decode.py --selftest
python Scripts/acnh303_r105_growup_cfg.py --root . --out artifacts/r105
```

真实 GDB 快照仍缺，类名、具体批量 reset 事件、完整迁移注册链及两个原名仍未恢复。
