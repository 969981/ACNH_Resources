---
title: "R102 · 成长处理入口、LandTemp SceneChange 与迁移重置范围"
tags: [acnh, native, eventflags, bcsv, r102]
game_version: "3.0.3"
updated: 2026-11-24
status: static-research-partial
---

# R102 · 成长处理入口与 LandTemp

R101 [CI](https://github.com/969981/ACNH_Resources/actions/runs/45308771095/job/138158979031) 成功（513 Land 行、5 枚举、20 Native 源锚点）。仍没有原始字段表头。

## 新发现
- 3C7FB88F = AttrClearSceneChange u8，CRC32 精确匹配，LandTemp 23/101 记录非零，语义符合商店入退场、咖啡馆等场景状态。高可信恢复候选，实际 Native 消费者仍待验证，区别于 NPC AttrClearStageChange。
- 3DAD9135：14/101 非零，集中大会、丰收料理和咖啡馆。仍未知。
- 5140E4B4：真实历史枚举语料包含 cGrowUp, cGrowUpPlayerSwitch, cGrowUpTalk, cGrowUpTalkEventPlaza, cGrowUpTime, cGrowup, cLastGrowUpTime，但原名仍未匹配。
- 本地 302 词、90783 片段、11 前缀的逆向 CRC32 搜索覆盖 271971251937 逻辑组合（2995839 次逆向查表），三个目标共69个不同候选；仅 SceneChange 是语义强匹配。该词表为定向语义扩展，并非全为原版词汇。Python 复现会保留全部候选；不自动升级。
- Player 1688 条，Moving 1196 条（1187 默认0，4 默认1，1 默认5，4 默认65535），未标记492；选中定义逐行保存。不能由字段标记推导完整迁移算法。

## Native 入口
R98 artifact 14881016869 的真实指令确认八个 BL 调用前 W0/X0 为0/1/2/3，每组2次，0x00DB2C18 至 0x00DB2D60。具体 mode 上层回调仍待定位。R100 全量重定位 [artifact](https://github.com/969981/ACNH_Resources/actions/runs/45308001227/artifacts/14881442847) 实际 SQLite 查询：380793 行、272613 code pointers、8748 init；七个目标 exact relocation / init target 均为0。不能据此排除间接调用，下一步搜直接 B/BL 和函数地址形成。

## 可复现工具
```powershell
python -m pip install capstone==5.0.6
python Scripts/acnh303_r102_growth_reset.py --root . --out artifacts/r102
```
新增工具验证源 ELF SHA、CSV blob、全部 C 文件与八个实际调用参数，扫描直接 B/BL 和原版 hash 读点。最近的 C export 仅为候选所有者。输出完整反汇编窗口和原始字节指纹。R102 新 CI 待实际运行。

## GDB 只读验收
在真实 3.0.3 AArch64 会话暂停后，使用 CI 生成的 runtime_fingerprints.json；传入实际模块基址而非 Ghidra VA。
```
source Scripts/gdb/acnh303_r102_reset_observer.py
acnh-reset-observe 0x<actual_module_base> artifacts/r102/runtime_fingerprints.json calendar
continue
acnh-reset-clear
```
基址必须以真实值替换；单硬件断点、16 byte 校验、只记录入口寄存器、不自动继续、不改存档/代码。硬件断点不可用则停止，不回退软件断点。依次选择 culling_caller、stage_memory_caller、stage_temp_caller、moving_u16、moving_parallel、moving_memory、moving_resident。入口命中只证明函数执行；必须和用户记录的自然游戏事件及前后实际状态对应才可证明业务语义。当前未连接实机，不声明运行时验证。

## 尚未闭合
5140E4B4 与 3DAD9135 原名，Culling/StageChange 具体上层回调，完整玩家迁移入口，实机状态变化。
