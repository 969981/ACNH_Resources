# R102 — Native Query 返回值、奖励分支与注册表对账

R101 已合并 b62e73e。R102 使用原始 NSO 校验后的机器码，按可达直接分支恢复三个 callback CFG，并解析两个原版跳转表。尚未解析的间接跳转保留明确缺口，不将汇编清单冒充完整 C 反编译。

## 招募
NpcInviteCheck 00F25370：检查 NPC actor/context，解析 NPC 标签（020FD3A0），检查种族 <= 34、编号范围和有效位、玩家槽 <= 7；Type 0 检查失败原因表 index1、必要时 index2，Type 1=index3，Type 2=index4。任一所检查谓词为真返回 0，未命中返回 1；无效上下文亦返回 1。不能把返回 1 普遍解释为可以招募。实际线上权限需其他事件及状态验证。IsCollaboNpc 00EFF7E8 通过 02209B90 读 NmlNpcParam 的 1C57897D (0..3)，字符串 cAny/cType1/cType2/cType3 转为选择类型，匹配时返回 0、不匹配返回 1，actor 校验失败返回 1。FUN_0070FB10 直接返回 virtual+30 的结果。原版 Moving 图 #111/#112/#113 的 cAny case0 为匹配路径，修正先前把 case1 当作联动匹配的推测。cAny 不等于全局禁止邀请。

## 奖励
00BAB2F0 将对象 +100 复制至 +110；+D8 进入五项跳转表。构造函数 0112BCF8 两个参数描述符引用原始字符串（R102 从 NSO 提取验证）。保存所有 RewardType/RewardTypeSub 原始事件节点，不将同名别名当作不同 Native 处理器。
00BAAB34 子分支 2：Friendship>=150 时随机整数 r in [0,99] 满足 100*r<4*F，调用 021F5C40 读取照片字段 71BF253B。01A44770 清零 0x754 候选位集合，01A45058 设置有效物品索引位，00BAB1F0 popcount 检查非空；这不是额外随机概率。失败后有 90% 候选分支，否则改 +110=3 递归回退。仅局部概率，不等于总体日常赠礼掉率。
02845D90 mode0 通过原始地址 04097A2E 和 040962F1 读 NPC Memory，首个值为零才读第二个并计算照片概率；检查原始字符串确认是否为 BromideRewardSkipCount/Friendship。不能把该函数的门禁无条件迁移到 00BAAB34 的子分支2。已知计数初始化/递减证据仍保留。

## 全量映射与 Ghidra
全量 EventFlow actor 声明和实际 action/query 节点，按 BindInfo 一次别名解析后计算 Murmur3，分别对 1255 Action 和 959 Query 注册表查找，显式保留未匹配/碰撞。对剩余 78 个构造入口追加非 x0 地址写入候选及同 base +10 hash 槽检查，不提升成已证实的对象数据流。对剩余28个状态检查可能被 suffix merging 合并的字符串（不再要求前一字节为 NUL）；地址形成匹配仍为候选。未知四个字段 CRC 候选来自实际 NSO identifier 字符串。
Ghidra 的 R102ImportEntries.java 可选择 Artifact CSV，对五个构造入口及五个专属执行槽逐一核对首16字节，避免覆盖已有函数边界，仅创建分析函数。未实际在 GUI 运行。无真实 GDB/存档数据。

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r102_reward_query.py --root . --out artifacts/acnh303-r102
```
