---
title: R110 Native 赠礼专项 — 英文 Kind 哈希路径与第二风格
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, R110]
---

# R110 Native 赠礼专项

## R109 实际验收

Actions run [45321906994](https://github.com/969981/ACNH_Resources/actions/runs/45321906994) 全部成功，artifact 已上传。原版 NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1。此成功不等同于语义闭合。

- 189 项日文 Kind 表，英文 BCSV 精确名称 0/189，Native 物品映射 0/11178。不是 CRC 冲突（0 重复），而是不同语言的字符串体系。
- 2 套七项风格表全部提取。
- 00DF7034: 25 条指令，1 个外部尾调用及 1 个间接调用。
- 01B03610: 59 条指令，0 CFG gap。
- 01AE6420: 88 条指令，0 CFG gap。
- 12 条包装全局引用日志其实为 4 个唯一地址，每个重复三次；不是三个 subtype 全局的初始化证据。

## 1. 英文 ItemKind 哈希转换

ItemParam.bcsv header +0xB = 1。原版 01A74118 ldrb w8,[x8,#0xb]；非零分支 01A74120 mov w0,w25，01A74124 mov x1,xzr，01A74128 BL 01A88150 (Ghidra VA; 原始 RVA 为 01988150)，01A7412C cmp w0,#0xbd，超范围回退 0。原版 C 导出 81/01a88150.c 读取 PTR_DAT_04bb8f90 + lVar19*8 + 0x830，计算 CRC32B，写入 hash 与 index，排序并查找。日文 fallback 列表在 04A1DD80。R110 解析 GOT 指向的原版英文表，逐项比较 87BF00E8 英文 Key、036E8EBE 日文候选字段、UniqueID，按唯一 CRC 对账物品。实际结果须由新 CI 确认。

## 2. 第二风格源字段

164A5F24，ItemParam offset 0x8C / 140，u32。01A76EE4 mov w24,#0x5f24；01A76EE8 movk w24,#0x164a,lsl #16；01A76F84 cmp w10,w24；01A76FB4 写字段缓存 +0x88；01A76FCC ldr w25,[x8]。随后英文/日文两表查找，最终 01A77904 STRH。原始 header +0xB = 1，实际值域为英文 CRC，计数为：

| index | English | Japanese | CRC32 | rows |
|---|---|---|---|---:|
| 0 | None | なし | DFA2AFF1 | 5704 |
| 1 | Simple | シンプル | C6D73834 | 1665 |
| 2 | Gorgeous | ゴージャス | 824B091F | 341 |
| 3 | Cool | クール | 4D0FFEC9 | 596 |
| 4 | Cute | キュート | 8C54AB51 | 975 |
| 5 | Active | アクティブ | 4CB2F934 | 1219 |
| 6 | Elegant | エレガント | E6492F1D | 678 |

总计 11178。英文指针表 04A26C10；日文指针表 04A26CA8。第一风格字段 9BA040C2 (0x90) 为直接数值读取；不能把两列按相同原始编码处理。第二风格静态 CRC 关系已闭合，实机初始化结果尚未验证。

## 3. 赠礼窗口 +60 后续

00DF7034 调用对象 vptr +0x70 (00DF704C)，若 +0xB0 != 1 且 +0xB8 != -1，取对象 +8 指针对应 +0x2A8 或 PTR_DAT_04BB32E0，尾调用 03459E80。C 源 9e/03459e80.c 表明该函数操作 *PTR_DAT_04BB2230 的 +0x80 子对象，写入 +0x1F8 / +0x165 状态，特定条件调用 0386B090；检查虚调用及 +0x21C == -1 后写入 +0x21C、+0x224、+0x220。不能将窗口状态转移当成物品过滤。R110 验证 +0x70 重定位和上述尾调用 CFG。

## 4. BCF5D17A 和包装根

R109 实际日志：10254 行索引为 65535（越界直接 false），924 行位于 0..0x7FF，924 个非 sentinel 值各出现一次。该模式提示某种物品索引，但不能仅凭唯一性命名。R110 提取这些物品的 Kind/ResName，解析 04BB46F0 GOT 的实际 Main 槽，并针对该槽、GOT、0xE98E0 立即数、包装数组基址 0532A758 及 +4/+8/+C 查找局部引用窗口。候选不是已证实写入者，仍需控制流和对象别名验证。

01B03610 原版 59 条指令通过 0532A758 四项数组的 indexed LDR 查找。有效命中 1/2/3，0 不是有效子类型结果。R109 漏掉数组基址是只搜索三个独立地址的原因。

01B079EC 默认记录初始化 0x9C4/0x839。R110 按原始 ItemID 和 ResName 对账两项，身份须以新 CI 输出为准。

## 5. 新工具

- Scripts/acnh303_r110_gift_native.py：原版 NSO 认证、英文 Kind 表、第二风格全量转换、slot70 / 03459E80 / 01A88150 CFG、目标全局候选、SQLite r110_static_item、Web sidecar r110。所有实际 UI 许可保留 NULL。
- Scripts/acnh303_r110_gift_predicate.py：仅实现已证实的 leaf 包装、bitmap、00EFA550 后置分支，输入缺失返回 None；不冒充完整赠礼业务判定器。单元测试采用合成数据，不等同于实机。
- CI 新增 R110 步骤。新 CI 未验收时不得声称 189/189 或 11178/11178 Native mapping 已完成。

## 6. 后续门禁

- [ ] 读取新 CI 全量报告，逐项验证 Native Key/CRC/日文名及异常。
- [ ] 解析 +0x70 函数调用链，定位 FilterType 消费者而非仅 UI 状态更新。
- [ ] 从 GOT 真实槽及 0xE98E0 候选证明对象构造及写入者；还原包装数组初始化。
- [ ] GDB 只读验证实际指针、bitmap、包装全局值、第二风格表和 UI 结果。
- [ ] 仅在有真实证据时更新实际 eligibility。研究 PR #95 当前存在合并冲突，不直接覆盖其他研究。
