# R101 — Factory records, writers and constructor/VTable audit

R100 Artifact 14881442847 confirmed five hash words at ELF RVA 04881690, 048825f0, 0487df30, 0487d760, 04883310. Each followed at +8 by a RELR executable pointer, and surrounding slots repeat at stride 0x10. Corresponding constructors Ghidra VA 0115de50, 0116aee8, 0112bcf8, 01124d30, 01176188 have no exact Ghidra C export. FUN_0070fcd0 passes record word0 and invokes +8 pointer. R101 checks original NSO/ELF digest and exact record bytes, extends contiguous records, disassembles bounded constructor windows, preserves all stores and possible VTable slots. A VTable candidate requires actual address store with executable relocated dispatch slots; no claim of runtime execution.

Eight R100 write sites lie in 007bb6c4–007bb7b4, nearest-prior export FUN_007b8a74 is FrontFrameCalc and cannot establish ownership. R101 records actual original instructions, straight-line address tracking and prologue candidates, never treats nearest export as function boundary. Full 20590 pointer runs classified by possible ABI header vs other runs; heuristic, not RTTI proof. Remaining 28 keys tested for matching factory record pattern (not necessarily their actual scope). No real GDB, Ghidra GUI or save fixture; probability and actual invitation behavior remain unverified.

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r101_factory_records.py --root . --out artifacts/acnh303-r101
```


## 第一轮已实测的五项绑定

| 名称 | 构造 Ghidra VA | VTable Ghidra VA | 执行槽 Ghidra VA |
|---|---|---|---|
| NpcInviteCheck | 0115de50 | 04968de8 | +30 -> 00f25370 |
| IsCollaboNpc | 0116aee8 | 04968078 | +30 -> 00eff7e8 |
| NpcDecideQuestReward | 0112bcf8 | 0493bb80 | +40 -> 00adc7ac (RET), +58 -> 00bab2f0 |
| NpcAddFriendship | 01124d30 | 04938d40 | +40 -> 00adc7ac (RET), +58 -> 00b5cffc |
| CheckNpcFavorLevel | 01176188 | 04967af8 | +30 -> 00eec6ec |

原始 constructor 将 factory 上下文 +8 的 u32 写入对象 +0x10，再写入最终 vptr。NpcInviteCheck +0xd0 的 Type=0 按 index1 再按条件 index2；Type=1 -> index3；Type=2 -> index4，直接使用 R99 的 04a765d8 表。IsCollaboNpc 调用 02209b90，读取 NmlNpcParam hash 1c57897d，接受 0..3 分类，callback 再按 cAny/cType1/cType2 等参数分支。NpcAddFriendship 00b5d070 尾调用 021d7310，传递 +d8 的增量；CheckNpcFavorLevel 调用 021d7030、02746f80。

R100 的八处写入全部证实；实际原始注册器设置 action count=0x4e7 (1255)，table RVA=0x487aa70；query count=0x3bf (959)，table RVA=0x487f920。连续记录区 1256/962 不等于真正注册条数。类别各7组；额外两处写入 007bb838/007bb83c 设置 query 类别数量与数组指针。第二轮脚本据实际写入提取所有 2214 条注册记录、每组真实 index array，并逐一检查构造函数中向 x0+0 写入 VTable 的候选；未定位的继续保持候选为空。第一轮 20590 runs 中 18932 具备可能 ABI header，1658 其他，不能视作全是已证明 VTable。

## 照片奖励实际分支

统一奖励 Action 00bab2f0 在 00bab3a4 BL 到 FUN_00baab34。该函数 switch(param_2+0x110) 的 case2 读 Friendship，等级>4（F>=150）时取 0..99 随机整数 r；条件为 100*r < 4*F。成功调用 FUN_021f5c40，后者读取原版 BromideItemID 0x71bf253b 并创建 Item。若 Item 有效，还经过候选集合 FUN_01a45058 / FUN_00bab1f0 检查。条件概率为离散计数 ceil(F/25)/100（假设 r 均匀），150=6%, 151=7%, 200=8%, 255=11%。这不是所有赠礼的最终概率，需证明 RewardType/RewardTypeSub 的具体映射、候选过滤、跳过计数消费者及其他路径。不能断言普遍送礼照片概率为此值。证据：derived/3.0.3/ghidra12.2/c/ab/00baab34.c，5c/021f5c40.c，b1/00bab1f0.c。
