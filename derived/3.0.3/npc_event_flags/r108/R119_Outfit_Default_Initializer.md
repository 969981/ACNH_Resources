---
title: R119 OutfitInfo 全量关联、默认记录初始化与虚调用排误
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, Gift, R119]
---

# R119 OutfitInfo 与默认记录

## 1. R118 验收
[Actions 45342232874](https://github.com/969981/ACNH_Resources/actions/runs/45342232874) success。162项 OutfitInfo，128项首个有效 bit9；其余 bit1/2/3/4/5/6/7/8/10/11/None 分别13/4/3/1/2/1/1/5/2/1/1。ItemParam 7724BF93 +180=0xB4 完整匹配11178项，157个不同 Key。源表行号、UniqueID、Native enum 必须区分。

## 2. OutfitInfo 全量证据
R119 以 7724BF93 原值匹配 162 个原版 English Key CRC；关联 R117 改造类型及 R110 Native Kind，输出每物品 mask、first set bit、source row、UniqueID。仅当 remake_type=2、Kind!=0x78 且 first bit9 时标记 raw+4 描述符候选。还扫描原版 162 项连续重定位字符串表、04BC0148 cache 描述符及 7724BF93 MOVZ/MOVK 常量，待 CI 证实写入器数据流。原始字段拼写未知，不捏造。

## 3. 默认记录初始化及归一化
01B079EC 的 guard 初始化 DAT_0532ACE8=2500, DAT_0532ACF8=2105，调用 0277D4AC。0277D4AC 对 Kind A4/A6 调用 01AFCA60 设置 byte2 特殊位；有效 lookup 后 byte3 &= 0x80；最后 0277F248。
0277F248：Kind A0/8D/71 分支分别构建附属默认实例；01AF0020 stack gate 为真时将 raw+4 u16 改为原 byte5 <<8；交互 enum12/13 十六进制时调用 01AEA570；查询 ID 1618/315A/3805 及342F 走特殊附属实例；Kind B1 走 01B058C8；另有资源未就绪时的 DAT_05150358 路径，不可假设与常规资源路径等价。
01AF0020 使用 MultiHoldMaxNum s16 CRC4C9BA961，>=2 且未包装或 CanGift=false 时为真。CraftMaterial 原版 stack=30，Money 原版值65535即 signed -1。若初始全记录除了 ID 外为零，且有效资源路径与两种 Kind/交互分支排除成立，以上归一化保持零尾部。R119 输出条件预测，非实机读取：2500 c409000000000000；2105 3908000000000000。CI 保存初始化 prologue 原版机器码，核实实际写入宽度；尚未证明所有资源初始化顺序，因此 actual_runtime_record=NULL。

## 4. Getter 虚调用候选
R118 五组连续 code pointer run 的候选 address point: 04AFD0B8、04AFE5B0、04AFEA80、04AFFC80、04B02888，相同相对 offset0x148。四处间接候选中：
- 03104028 ->03104034，LDR sp+148 后 X8 被 [X8+18] 覆盖，排除。
- 03104038 ->03104048，LDR sp+148 后 X8 被 [X8+20] 覆盖，排除。
- 0339B9FC ->0339BA10，LDR X0+148 后 X8 被 [X8+8] 覆盖，排除。
- 03320000 ->03320004，LDR X8,[X8,#148] 紧接 BLR X8；仍需 receiver vptr 归因（调用前设置 W3/X4），不能认定目标 getter。连续 code pointer run 起点也尚未证明是 ABI address point。
R119 保存 opcode 覆盖排误报告。没有确认操作门禁或 runtime 证据。

## 5. 产物
Scripts/acnh303_r119_outfit_defaults.py；r119_report/outfit_items/outfit_tables/cache_refs/field_constant_pairs/default_initializer/c_evidence；SQLite r119_outfit_item；gift_web_sidecar_r119.json。新 CI 待验收。PR #95 尚未合并。下一步先验收 R119，再确定 outfit native 表与 writer，验证默认全64位初始化与资源正常路径，追踪真正 vtable address point 与确认按钮消费者。
