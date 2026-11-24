---
title: R124 CanEat / CanPlant 与包装查询原版证据
version: "3.0.3"
status: static_model_pending_ci
runtime_verified: false
tags: [ACNH, Gift, KindBitParam, R124]
---

# R124 原版物品属性与赠礼分发

## R122 / R123 验收
Actions 45347808134 success：11178 price rows；6项 Kind0x57；38 friendship nodes；39普通 entry routes。stack max -1/0/3/5/10/30/50/99 分别118/10808/4/2/183/26/36/1。
Actions 45347963591 success：162生日 reward matrix (120 known/42 unknown)；11178 dispatch items；193缓存组合；2/3/4个类别候选对应299/10878/1，唯一确定路径0。Kind0x57 原版名 Fruit，动态五分之一价格分支尚未确认比较对象真实业务名称。

## 1. 原版 Kind 字段
CanEat u8 CRC9B433DD5 ItemKind+0x23；CanPlant u8 CRCD4697FF8 ItemKind+0x28；CRC32 原始名称精确校验。
01B14E50 读取 CanPlant，字段 offset cache GOT04BBFEB8+0x3C。
01B04AB0 读取 CanEat，字段 offset cache GOT04BBFEB8+0x28；此外通过 GOT04BC0070 读取每 ItemParam row 的 u16 enum，等于1时提前返回 true。正常原版有效 kind 值0..188中，比较 (u16)(kind-0xBD)<0xFF44 恰好仅 kind0 进入特殊检查路径；异常类别/缓存也可能进入，故不把 CanEat 直接等同全物品真实 accessor。Kind0 Ftr 且 CanEat=0 时额外缓存未知则返回 unknown；非零合法 Kind 可使用原版字段的条件结果。R124 扫描 GOT04BC0070 生命周期与写入窗口、真实目标重定位。
01B12E40 switch case7 读取 CanPlant；case0xB 调用 01B04AB0。候选参数枚举表扫描日文「植える」index7/「食べる」index11，需确认 EventFlow 参数转换及 consumer，不能直接称 query 极性闭合。

## 2. 包装 Query 静态机器码
010C89A0 wrapper: 010C89A8 ADD X1,X0,#D0；010C89AC BL 010B9ADC；010C89B0 CMP W0,#0；010C89B4 CSET W0,EQ。
010C89C0 相邻 leaf: 原始 ItemID lookup 0277D6C4，构造 wrapper；010C8AC4 /010C8AD0 BL 01B032D0；010C8AD4 LDRB W8,[SP,#13] (raw+3)；010C8AD8 TST W8,#3；010C8ADC CSET W8,NE；010C8AE0 AND W0,W0,W8；失败路径010C8AE8 W0=0。稳定有效资源下 leaf true iff runtime CanGift && 包装低2位非零。
9a/010b9adc.c 根据 JudgeTarget 选择原始物品，cItemSelect 路径 root GOT04BB2230->+28，单选类型1使用+2C，多选 mask+D90，玩家+2A8 经过02677EA0 读取记录；调用 query 对象 vtable+38。cPresetItem 路径使用 GOT04BB3240 root+DE08。返回首个 >0 结果，否则0。
wrapper 反相意味着若 vtable+38 确实绑定上述 leaf，则包装 true -> case0，false -> case1；尚未取得同一 vtable 的具体 slot 重定位证据。R124 保存两函数及 bit accessor 的直接 BL 与 relocation 周边窗口，以证明接收者。生日 Result0 包装映射暂标 conditional，不能仅凭相邻函数地址断言。

## 3. 数据模型
基于 R123 graph 候选分发，输入 CanPlant 条件字段及已知 CanEat 条件值；Ftr 特殊缓存未知保留两个分支。断言新候选集合为上一轮子集。11178项、SQLite r124_kind_bit_dispatch、Web sidecar r124；actual_dispatch NULL。未证明 native query 枚举/极性前，不将候选作为实际分发。 
## 4. 产物与下一步
Scripts/acnh303_r124_kind_bits.py；r124_report/kind_bits/direct_calls/relocation_refs/cache_refs/c_evidence；gift_web_sidecar_r124。CI 待验收。重点恢复 GOT04BC0070 原始字段与转换器，KindBitParam 实际 query vtable 以及包装 wrapper/leaf 配对。继续恢复 Fruit 价格比较对象和颜色/风格/AITag 偏好消费者。无实机证据。
