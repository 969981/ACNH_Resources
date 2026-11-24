---
title: R122 Native Price 与普通生日赠礼好感度路径
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, Price, Friendship, R122]
---

# R122 Price / Friendship
## R121 修复
CI 45344705058 在最后报告导出失败，路径 f 被 friendship loop 覆盖。05158ad 改为 source_path。此前断言和 SQLite 统计执行至导出阶段；完整验收须重跑。
## 原版价格链
R104 已确认 010BF3B4 BL 01AF0020，010BF3C0 MOV W1,#1，010BF3C4 BL 01AF2BC0，010BF3CC BL 01AED730，010BF3D4 CMP W0,W8，010BF3D8 CSET W0,GE；外层 query case0 表示满足 Border。D5C solo flag 及 selected item wrapper 来源仍需完整数据流。
01AF0020: MultiHoldMaxNum s16 (CRC4C9BA961) >=2 且 stable CanGift=false 或包装 state=0 时返回真。01AF02D0: gate false 返回1；否则 q=(u16(wrapper+C)+1)&FF，若 q>signed max 则1，否则 q（FF+1 可回绕为0，不是合法数量声明）。01AF2BC0: 输入非零且<=max、gate true 时 raw+4=amount-1；solo 调用 amount=1。01AED730: signed Price s32 (718B024D) ×有效数量；Kind0x57 比较通过时除5，比较对象取 player/context descriptor (+1C24D0 +1C24C8 +900) u16，经过0277D4AC并用0277D7B4比较。没有该动态对象不可猜测等价；溢出保持 unknown。普通价格 primitive 不是最终选中礼物价格、买价或卖价。模型只读。
## 好感度节点
普通 Furniture entry +3 (#11)，Dish_Food_Drink +3 (#74)，Fossil/Art 可能 +1 或 exit；Equipment #19 case0 ->20->17 +2，case1->21 +1，其他装备分支+1；Etc Garbage #11 -2，Money / DIY 返回无增量，Music #15 case0 +2 case1 +1，Etc +1，Love +2；Creature Plant/Food/Flower +1/+2，已捐赠鱼虫海产+2，其他受博物馆状态限制；Tool DIY/Nouse +1，Useful +2，Umbrella race query 两分支+1/+2。Present #92/#93 +1 是额外事件节点，不能无条件累加。
生日 NNPC_GEvent_BirthdayN_H #162 group Honeycomb/Fruit/Mushroom/ShellDrift/Insect/Fish/Fossil：#95 8000、#94 2001，其他 #93 2000、#96 501。达到相应入口才可计算价格 tier。#163/#164/#165 写 SetIndex1 0/1/2，#166 分发 #160/#159/#158；SetIndex0=0 时 +8/+6/+4，=1 时 +5/+4/+3。#64 wrapping query case0->157 写 index0=0，case1->197 solo->161 写 index0=1。当前模型保持 exact index0，不自动猜测包装极性或完整礼物分类分支。垃圾类 #98/#155 ->71->92 AddValue -5 ->返还、退出；Money 与 DIY 路径无此处罚，亦不能从 callback 通过推断交付。生日 Reward_Normal/Rere/SuperRere 分别原版 RewardType0 Sub2/1/0；实际奖励条件需分析 #108/#109/#110/#116/#111/#117，暂不计算最终概率。
## 输出
Scripts/acnh303_r122_price_friendship.py，原版机器码验证、价格 primitive 合成边界、7份 EventFlow 全量 AddFriendship 节点提取及5个普通类别图的 entry path 枚举，保留 query guards/no-delta/未知分支；11178项 price/stack 原版数据、SQLite r122_price_item、Web sidecar r122。actual_selected_price 仍 null；CI 待验收。下一步：Kind57 动态比较对象真实语义、selected item price wrapper 生命周期、生日 reward 子流程、颜色/风格/Tag 分支、实际赠礼 UI gate。 
