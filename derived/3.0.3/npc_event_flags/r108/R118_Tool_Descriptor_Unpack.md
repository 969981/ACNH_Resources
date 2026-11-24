---
title: R118 Tool 改造描述符与解包归一化
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, Gift, Remake, R118]
---

# R118 Tool 描述符与解包归一化

## R117 验收
[Actions 45341197967](https://github.com/969981/ACNH_Resources/actions/runs/45341197967) success。六项类型英语/日语为 None/なし、Ftr/家具、Tool/道具、Smartphone/スマホ、Fence/柵、SettingLadder/設置ハシゴ；189/189 Kind 与11178/11178 ItemParam 全匹配。GOT 04BC0288 -> 05327160 (Main+5227160)。非零 fabric count 260 项，零10918；2/3/4/5/6/7/8 对应6/19/38/47/23/32/95。更正上一轮正文：RemakeID s16 CB5EB33F 在 ItemParam row +276=0x114（不是0x10E）。 

## 1. Tool 描述符
4d/01ae4d10.c：Kind0x78 直接返回 NULL；调用 01ADAB50 读取 bitmask，依次扫描 bit1..13，首个 set bit 为9才返回 wrapper+0xC（raw+4），否则 NULL。若 bit9 与更低位同时出现则拒绝该描述符；与更高位同时出现仍返回 raw+4。ab/01adab50.c：ItemParam outfit index cache GOT04BC0148，范围 0..161，查 DAT_0532A7A0 row，字段 CRC C89FB7AF，在 ItemOutfitInfo +143=0x8F，native 读取 u16 并清 bit0。原始 schema width_hint 5 不等于实际读取宽度。162 项原始 mask 与 ItemParam 四字节列 CRC 候选对账由 R118 CI 生成；未确认 cache writer 前不把 source row 当 native index。

## 2. 01B079EC 解包归一化
79/01b079ec.c 与28/01af2868.c：复制原始8字节；在稳定 CanGift=true 下，若原状态非零清 byte3 bit6，清 bits2..5，清 bits0..1；保留 bit7 与其余字节。重新查规范化物品的 query ID、行指针、Kind、CanGift。原状态3且 subtype12/13/14 时，规范化 Kind=0x86 Money 且规范化 CanGift=true、包装状态0 才走正常候选路径，否则回退到规范化默认 Money 2105（DAT_0532ACF8）。其他类别若规范化 lookup 无效、CanGift gate 不通过、仍为包装状态或 Kind 为 B2/B3/B4/B9 dummy 则走默认 CraftMaterial 2500（DAT_0532ACE8）；若原 source 包装 gate 不成立而正常分支成立，返回原始记录，否则返回归一化记录。默认值经过 0277D4AC，具体8字节记录需原版默认初始化证据或 snapshot，不猜测尾部。R118 模型仅针对稳定输入，不模拟重复 getter 的可变结果或 live writes。上层赠礼递归需独立评估归一化实例。

## 3. Getter relocation
030BFE5C 无直接 UI BL，原版 5 个 relocated pointer slots：
04AFD200、04AFE6F8、04AFEBC8、04AFFDC8、04B029D0。每组相邻指针依次为共享 030BFD88 setter、030BFE5C getter、030C0DFC 下一方法。原版 VTable address point 尚需确认，R118 从连续 code pointer run 推断候选起点并扫描相同 offset 的 LDR/BLR 窗口；此类候选不证明实际接收者类型，不能直接称确认门禁。原版 Getter true iff !(flags_2C3&1)||flag_315!=0。

## 4. 产物
Scripts/acnh303_r118_unpack_tool.py：C 锚点 SHA256、Tool bitmask 选择规则合成测试、稳定输入解包模型、原始 outfit mask 162行、CRC 候选、getter relocation address-point候选与间接调用候选、SQLite r118_outfit_mask。R118 CI 待验收，无 GDB 证据。下一步：验收原版 162项 outfit 枚举与 writer，追踪 VTable 接收者、确认操作；解析默认记录真实初始化与递归闭环；继续 F1246E5F 和 DIY 玩家描述符。
