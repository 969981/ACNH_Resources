---
title: "R101 · AttrClear 生命周期与原版成长清除枚举"
tags: [acnh, bcsv, eventflags, native, r101]
game_version: "3.0.3"
updated: 2026-11-24
status: static-evidence-partial
---

# R101 · AttrClear 生命周期与原版成长清除枚举

## R100 实际验收

[CI 45307860374](https://github.com/969981/ACNH_Resources/actions/runs/45307860374/job/138155985298) 成功：历史 MITM 独立复现，原始 ELF SHA 校验并扫描 47085 个 ASCII 标识符，直接匹配 0。三个高可信恢复名不是原始表头确证名。

## 5140E4B4 与 FDB1F290

逆转 " u8" 后 bare CRC32=221C60CB，再追加 ".hshCstringRef" 得 FDB1F290。历史 [specs_200.py](https://github.com/Treeki/CylindricalEarth/blob/bb09c0ee71a4aa6011de088b88ea55fdee0bf6e9/specs_200.py) 中 enum_6375519ed254_5b8e07b717c6 解释成长处理条件。3.0.3 Land 513 条逐行 CRC 匹配：

| 编号 | 枚举 | CRC32 | 数量 | 语义 |
| --- | --- | --- | ---: | --- |
| 0 | None | DFA2AFF1 | 407 | 不清除 |
| 1 | Pre | B32C7901 | 101 | 跨日成长处理前且经过日数非零 |
| 2 | Start | 5EB87A8B | 1 | 启动时、跨日成长处理前 |
| 3 | All | 0355373D | 0 | 所有成长处理，含共享游玩人数变化 |
| 4 | Plus | 30C04FCF | 4 | 正向日期差时跨日成长处理前 |

R98 原始成功 artifact 中两处 BL FUN_0276aab0 前紧邻指令 0x52800020 (MOV W0,#1)，Ghidra VA 0x00DB2C7C/0x00DB2C98。Start 标签与 local_10d6=(param_1==1) 语义吻合；尚未证明具体上层启动事件。字段列名仍为 null。

## Culling / StageChange

FUN_01ea4530 在有效居民编号、活动记录和对象+0x69c bit2 条件下调用 Temp mode=1 和 Memory mode=0，并清除玩家 bit mask；特殊 NPC FUN_021ca0d0 mode=1。FUN_02199cf0 调用 Temp mode=2；FUN_027ea3e0 遍历十居民及有效玩家，调用 Memory mode=1。FUN_020ec6c4 和接收侧 FUN_020eca68 按 mode 和 full/light 分发。Culling light/full=027a8ad0/027b6490；StageChange=027a8e60/027b6820。均按字段非零与定义默认值重置，而不是一律写0。实际剔除距离及具体场景入口仍需更上层调用者和运行时验证。

## Moving

FUN_02690d60 按双身份非零遍历8 full +160 light，调用 027478c0 与 02747c50；后者另外显式将10个 Memory Key 清0（包含重叠项，不能直接与11条相加）。同函数另显式清16个 NPC Save Key。FUN_026b1100 清理后再重排/拷贝；FUN_0281a7b0 写 SameLand 并转 Full->Light；MoveInCompletion 路径 FUN_027e9ff0、027e8410 调用上述函数。另有 0274f840 以 u16 存储、UniqueID <0x800 和默认值上限65535，以及 027a5750 并行存储清零路径。完整 Player 迁移入口和所有非字段式清理行为仍未闭合。

## 跨游戏真实词汇

[pyjmap](https://github.com/SunakazeKun/pyjmap/tree/6972da9ee63ae2eaa3fe9edf25f5ee4c7000ea83) 的四游戏公开字段查找表分开保存，词汇可用于候选，不移植旧 JMap Hash 算法。1566 个唯一名称，1003 个词元，599292 次 ACNH 签名检查，0 个 CRC 候选。原始名仍未知。

## 字典兼容与验收

R94 field_semantics.json 保留原始 hash、known/unknown 数量和 native_name=null；增加 reconstructed_name、name_confidence、候选索引与配对枚举，不破坏旧导出。运行：

```powershell
python Scripts/acnh303_r101_attrclear_lifecycle.py --root . --out artifacts/r101/report.json
```

本轮已实际读取 R100/R98 CI 日志、R98 artifact、3.0.3 CSV 和 Native C 原始导出。新增复现脚本与 CI 尚未运行；无实机写入或真实存档。最后一列名仍需恢复，生命周期上层触发与 Player 迁移完整链仍未验证。
