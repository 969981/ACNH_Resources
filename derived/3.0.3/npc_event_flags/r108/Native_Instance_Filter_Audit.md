---
title: R108 赠礼实例判定与窗口对象补充审计
version: 3.0.3
evidence_level: static_decompilation_and_ci_log
runtime_verified: false
---

# R108 Native 赠礼实例与窗口对象补充审计

本补充记录依据 PR #95、原版 C 导出及 Actions run 45321045715。固定 C 证据版本为 `17294e4ac460a93c753723df90fd40ffe906b0ee`。不把反编译推测作为真实运行时结论。

## 1. 构造对象

`01120120` 工厂分配 0x1D8 字节，委派 `00E0FAC0`。C 源文件 `derived/3.0.3/ghidra12.2/c/fa/00e0fac0.c` 显示最终 vptr 0495B730。

| offset | 静态含义 |
|---|---|
| 0x0 | vptr |
| 0x20 | 注册计数 |
| 0x24 | 注册容量初始 0x10 |
| 0x28 | 注册描述符指针数组 |
| 0xB4 / 0xB5 | 初始 1 / 0 的状态字节 |
| 0xD8 | FilterType 名称指针 |
| 0x108 | ItemUniqueID 名称指针 |
| 0x130 | ItemKindType 名称指针 |
| 0x160 | ItemFilterType 名称指针 |
| 0x1C0 | IsSingleSelect 名称指针 |
| 0x1C8 | IsSingleSelect 候选存储，初始化 0 |

名称指针偏移不等于最终枚举值的偏移。+0x40 = 00DF44C4 有 17 条可达指令，00DF44FC / 00DF4500 / 00DF4504 是加载 vptr、加载 +0x60 和 BR X1。+0x58 = 00AD94AC 仅 RET。需从 +0x60、其后参数消费者和 FilterType 的实际值继续追踪；cGiftToNpc 在 0495BAA8 的相对槽索引 18 不等于已证实的 UI 分发枚举。

## 2. 物品实例与包装

证据：`85/01b085e0.c`、`32/01b032d0.c`、`79/01b079ec.c`、`76/01b07660.c`、`81/01b081a0.c`（均位于上述 C 导出目录）。

- 对象 +0xB 的低 2 bit 是包装状态候选，bit 2..5 是包装子类型候选；不可与原始 ItemParam 行字段混同。
- 01B085E0：CanGift 不满足时返回 1（此辅助函数不是完整赠礼许可）；若包装状态非零，分类后由掩码 0x13 验证内部分类 0、1、4。原始状态 1/2 直接映射 1/2，状态 3 且 subtype 0xF 映射 1；其余状态依赖 01B03610 及 subtype 10/11，不能自行命名。
- 01B032D0：读取 CanGift 字段 CRC 06012035，但前置改造限制及辅助枚举 0x49 分支也可能拒绝。
- 01B07660：前置改造条件、01B085E0、CanGift 与包装状态判断、01B079EC 解包并递归；最终读取 CanNpcPresent 0732BB98。01B079EC 不只是清除标志，还可生成默认记录 0x9C4 / 0x839，且处理多个 Native Kind，须进一步对账。
- 01B081A0：相似前置条件，但 Native Kind 0xB9 在包装分支不递归解包，最终读取 CanNpcBirthdayPresent 2C1B3B5B。
- 不应将以上函数的类别静态字段直接发布为 UI 实际过滤结果。

## 3. 00EFA550 的额外谓词

来源 `a5/00efa550.c`。先检查 05327180/88 枚举是否为 1（拒绝）；另一枚举 PTR_DAT_04BC0050 等于 2 或行指针为空时，额外检查 01B160F0、01B164E0。此后调用 01B07660；成功后通过 05326EC0/EC8 读取 Native Kind。
- Kind 0x60/0x69/0x6A/0x70：掩码 0x10601 的四个置位项，允许。
- Kind 9/10：检查 053271B0/B8 的枚举，要求 0 或匹配 *param_2；01AE58B0 结果要求 0 或匹配 *param_3。
- Kind 0：返回 01AE6420 的低位取反；该辅助函数读取字段 CRC BCF5D17A 并查询全局位图。Kind 0 的原名与默认回退须分开。
- 其他分支拒绝。函数与 cGiftToNpc 最终分发尚未闭合。

## 4. CI 实际证据

run [45321045715](https://github.com/969981/ACNH_Resources/actions/runs/45321045715) 前两个脚本成功；第三脚本在 alternate 风格表 ASCII 解码失败，字节 0xE3。后续提交 17294e4ac460a93c753723df90fd40ffe906b0ee 已改 UTF-8，复验状态以 CI 为准。建议后续保留原始 NUL 前字节与 CRC、可选解码名，不能用替换字符计算 hash。

51/51 原版 AITag 名称到 BCSV UniqueID 精确对应；例 bit 0 Spring UID 1，bit 9 None UID 99，bit 50 Teacher UID 159。注册索引与 UID 不可混用，真实位图消费者另行验证。11178/11178 ItemKind CRC 关联通过，9330/1848 是 CanNpcPresent 静态计数。最终 Native Kind 枚举和风格表应以第三脚本成功产物为准。

## 5. 下一步验收

- [ ] +0x60 可达 CFG、全部参数消费者、cGiftToNpc 条件到物品判定函数的直接或可证明间接链。
- [ ] 189 项 Native Kind 数值及 0xB9 / 0x60 / 0x69 / 0x6A / 0x70 / 9 / 10 / 0 名称；逐项区分默认回退。
- [ ] 两套七项风格表与 01A77904 写入数据流、源 BCSV 字段、未识别值处理、行索引、所有前驱；不能只用全量值域相似度。
- [ ] SQLite/Web 保留 nullable actual_eligible，分离实例包装和 UI 许可，记录数据来源、Build ID、测试状态。
- [ ] 真实运行时只读断点验证：未包装、包装不同状态、特殊类别、生日、改造状态与实际 UI 结果。
