---
title: R111 Native 赠礼系统 — DIY 配方位图与 FilterType 跳转表
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, R111]
---

# R111 Native 赠礼系统

## 1. R110 验收

[Actions 45323785495](https://github.com/969981/ACNH_Resources/actions/runs/45323785495) 全部步骤成功，四组离线测试通过，产物已上传。原版英文 Kind 0495C4B0、日文 Kind 04A1DD80 与 BCSV 均 189/189 对应；11178/11178 ItemID 类别及第二风格静态映射通过。R110 CFG: slot70 290 条、1 个 BR 缺口；03459E80 89 条、0 gap；01A88150 363 条、0 gap。真实间接调用及运行时未验收。

## 2. 包装数组静态闭合

原版机器码（Ghidra VA）：

| VA | bytes | instruction |
|---|---|---|
| 01B17934 | 88c001f0 | ADRP X8, #0x522a000 (RVA) |
| 01B17938 | 08611d91 | ADD X8,X8,#0x758 |
| 01B1793C | 89018052 | MOV W9,#0xC |
| 01B17940 | 1f250029 | STP WZR,W9,[X8] |
| 01B17944 | a9018052 | MOV W9,#0xD |
| 01B17948 | ca018052 | MOV W10,#0xE |
| 01B17954 | 09290129 | STP W9,W10,[X8,#8] |

0532A758 (Main+0x522A758) 四个 u32 为 [0,12,13,14]。01B03610 将 12/13/14 映射为 1/2/3，其余返回 0。01B0DDE0 加载同一数组，01B0DDF0 indexed LDR，01B0DE20 UBFIZ W9,W9,#2,#4，01B0DE30 STRB W8,[X19,#0xB]：当包装状态及 CanGift 满足时向物品实例的 subtype 四位写回。该路径已定位，但不代表完整包装转换。默认替换 ItemID 0x839=2105 Money，0x9C4=2500 CraftMaterial，两个 ResName 均空；具体本地化名称仍待独立来源。

## 3. DIY 字段与位图

CRC32 精确反查 `DiyRecipeID s16` = BCF5D17A，原始 ItemParam offset 266、width 2；10254 项 -1，924 项不同的有效非负索引。RecipeCraftParam 元数据为 924 行。新增全量按 RecipeCraftParam 54706054 (UniqueID u16) 连接验证及反向产物字段候选对账。字段拼写与行数为已确认静态证据，逐条连接以 R111 CI 为准。

原版 GOT 04BB46F0 RELR 指向 055588D0 (Main+0x54588D0)。读取根槽一次得到对象指针，+0xE98E0/+0xE99E0 是相邻的两段 256-byte 位图访问范围。Ghidra VA 与 Main RVA 相差 0x100000，不得混用。

C 导出证据：
- 0262AF20：读取 param_4 位图、检查其他条件后设置 param_2 位；不能直接认定为全局位图写入。
- 0262BED0：依据两段位图交集和 +0xEA6C0/+0xEA6C8/+0xEA6E0 索引表，Kind 0x9D 时清除 param_2 位。
- 0262C270：依据另一分类缓存清除 param_2 位。
- 02618870：以两个全局位图作源，栈上两个 256-byte 缓冲区作目标，依次调用上述辅助函数；不是全局 writer。
- 02619954 也将 +0xE98E0 作为 param_4 传给 0262AF20；02619984 同理 +0xE99E0。
- 0263E5D8 分别调用 0262B678 统计两段位图相关状态。

因此可明确源/目标方向；真实全局位图写入者、对象构造与两套位图业务含义仍未知。

## 4. FilterType 实际跳转分发

原版 00E0FD10 = VTable +0x70。00E0FDDC/00E0FDE0 读取 39 项字符串表（0495BA18），与对象 +0xE8 字符串比较。00E0FE6C 写匹配索引；00E0FE74 限制 <=38；00E0FE7C/80 形成跳转表地址 04169E3C；00E0FE84 ADR X10 到 00E0FE94；00E0FE88 LDRB W11,[X9,X8]；00E0FE8C ADD X10,X10,X11,LSL #2；00E0FE90 BR X10。

case 地址 = 00E0FE94 + 4*table[index]。cGiftToNpc = index18；cBirthdayPresent = index19。R111 提取实际表字节和两条 CFG，而不是把字符串索引直接当函数指针。尚不能声称物品过滤 predicate 已闭合。分支之后的公共结构复制可见 00E101EC/00E101F0 等写入，需跟踪实际注册对象或数据结构消费者。

## 5. 新产物与门禁

Scripts/acnh303_r111_gift_closure.py 复用 R110 目标窗口，认证原版 NSO，验证包装初始化指令、配方连接、反向产物字段候选、39 项分支表及赠礼两个 case CFG，新增 SQLite r111_recipe 和 Web sidecar r111。所有实际 UI eligibility 仍未知。CI 尚待完成。

- [ ] 验收 R111 recipe 924/924 精确连接及产物字段。
- [ ] 验收 cGiftToNpc/cBirthdayPresent case 的具体地址与公共结构消费者。
- [ ] 找到全局位图真实写入、对象创建、注册与注销函数。
- [ ] 追踪配方索引表及两套位图的独立业务意义。
- [ ] 按 Build ID 对照 GDB 只读快照（包装数组、位图、FilterType、真实 UI 结果）。
- [ ] 仅在运行时证据完成后更新实际赠礼许可。
