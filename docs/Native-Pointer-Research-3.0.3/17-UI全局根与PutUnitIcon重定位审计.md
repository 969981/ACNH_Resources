---
title: UI 全局根与 PutUnitIcon 重定位审计
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, ELF, RELR, PocketMenu, SelectCursor, PutUnitIcon]
status: byte-matched-partial
runtime_verified: false
---

# UI 全局根与 PutUnitIcon 重定位审计

[[16-PutUnitIcon原始指令与SelectCursor验收]] · [[16-Online状态机与UI组件根交叉验证]] · [[15-PocketMenu与PutUnitIcon原生状态机]] · [[10-跨岛派送指针与Native交付链]]

## 1. 实际读取证据

本轮下载两个 ZIP，并在本地计算 SHA256，与 GitHub artifact digest 对照。读取 manifest、逐指令 JSON 与 SQLite，不是只看 CI 绿色。

|产物|SHA256|
|---|---|
|[ELF 14888123858 / run 45323938295](https://github.com/969981/ACNH_Resources/actions/runs/45323938295/artifacts/14888123858)|7551016bc4f2acdd8d172846a31da09f747a554c2e52a1c8c870769340ccfd33|
|[R100 14881442847 / run 45308001227](https://github.com/969981/ACNH_Resources/actions/runs/45308001227/artifacts/14881442847)|6113436624d54b104071b4aecbeaaae1d64c4f33fa8843c5448e359d1d1f03a4|

两份产物 metadata 一致：ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1；Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。R100 实查 380793 条 relocation；新 ELF 53 个导出入口、9486 条指令记录（可能跨入口重复）、17 个 gap。

## 2. UI Main 根的重定位及原始指令

上一章 Online/UI 已提出 PTR_DAT_04BB2230 别名。本轮实际 R100 查询：slot_ghidra=04BB2230，slot_va=04AB2230，RELR relative，raw_word=0x5639190，target_ghidra=05739190，target_va=05639190，region=bss。

[03201990](../../derived/3.0.3/ghidra12.2/c/19/03201990.c) 原始指令（来自 artifact Functions/FUN_03201990.json）：

|Ghidra VA|4B bytes|原始指令|解释|
|---|---|---|---|
|032019A8|96cd00b0|adrp x22, #0x4ab2000|RVA页|
|032019B0|d61a41f9|ldr x22, [x22, #0x230]|GOT relocation slot|
|032019BC|c80240f9|ldr x8, [x22]|BSS 根取 owner|
|032019C0|096940f9|ldr x9, [x8, #0xd0]|子组件|
|032019CC|2ab10939|strb w10, [x9, #0x26c]|状态 byte 置1|
|03201A4C|086940f9|ldr x8, [x8, #0xd0]|再次取子组件|
|03201A54|1f6502b9|str wzr, [x8, #0x264]|清零状态字段|
|03201A7C|e11b2d14|b #0x3c48a00|尾转移03D48A00，仍是边界 gap|

[03387478](../../derived/3.0.3/ghidra12.2/c/74/03387478.c) 构造 +0xD0 SelectCursor、+0x88 PocketMenu；[02E1DDAC](../../derived/3.0.3/ghidra12.2/c/dd/02e1ddac.c) 独立从同一根 +0x88 获取对象，并以 PTR_DAT_04BC8620 作类型检查；[03197688](../../derived/3.0.3/ghidra12.2/c/76/03197688.c)（实际虚表+0）认可这一 token。直接 BSS 消费者 [0340BD3C](../../derived/3.0.3/ghidra12.2/c/bd/0340bd3c.c) 和 [0338B130](../../derived/3.0.3/ghidra12.2/c/b1/0338b130.c) 使用 DAT_05739190 +0xD0。

静态根：Main RVA 0x5639190；GOT 0x4AB2230 是其别名而非第二个独立 owner。+0x88 / +0xD0 关联有构造、消费和类型检查证据；全局发布者、注销者、对象 identity、生命周期与运行时快照尚未验收。不能宣称旧 Heap 光标字段已映射。

另 [0339BE20](../../derived/3.0.3/ghidra12.2/c/be/0339be20.c) 通过 owner+0x10 关联管理器的互斥锁和列表按类型、身份检索子对象；它说明存在动态查找路径，但不得把所有实例都等同于全局固定组件。

## 3. 40 槽物品过滤及 SelectCursor 排除项

[03195E80](../../derived/3.0.3/ghidra12.2/c/5e/03195e80.c) blob 9ee0437430a89c2b2ae3c328dd05d6ec5b2167f0，87 条指令，无遍历 gap（仍有间接调用）。

|Ghidra VA|原始字节|指令|
|---|---|---|
|03195EA0|08704091|add x8, x0, #0x1c, lsl #12|
|03195EB0|14e00791|add x20, x0, #0x1f8|
|03195EB4|18c11391|add x24, x8, #0x4f0|
|03195EB8|1f0300f9|str xzr, [x24]|
|03195ED4|4823d69a|lsl x8, x26, x22|
|03195ED8|280108aa|orr x8, x9, x8|
|03195EDC|080300f9|str x8, [x24]|
|03195EE4|dfa200f1|cmp x22, #0x28|
|03195EF0|c473d397|bl #0x2572e00|
|03195F10|e487d397|bl #0x2577ea0|
|03195FA8|4650d397|bl #0x256a0c0|

+0x1C4F0 是40槽 u64 过滤位图，不是光标。读取身份+0x1F8，遍历 i=0..39，检查容量，读取8字节物品；若关联检查启用且0266A0C0成功则置位；否则空槽或任一有效排除回调成立时跳过，否则置位。不得直接将bit=1命名为可丢弃、可选或空槽。实际过滤策略随回调上下文变化。

SelectCursor [03200CAC](../../derived/3.0.3/ghidra12.2/c/0c/03200cac.c) 从虚表+0xC8 创建原始名 SelectCursorPage，分配0x578，注册页面，发布对象+0x210；[03200434](../../derived/3.0.3/ghidra12.2/c/04/03200434.c) 虚表+0x140 设页面状态；0338B130 调03201990处理页面列表，参数3索引针对 page+0x48 下的集合，非已证的背包逻辑槽位。+0x264/+0x26C 暂命名页面状态字段。真实背包当前选择索引仍未闭合。

## 4. 三套虚表 RELR

R100 SQLite 直接查 slot_ghidra、target_ghidra、target_region、resolution。04B2AFA8 开始的三个连续 code pointers：+0=03458394、+8=034583C0、+0x10=034583EC。均 RELR relative text；下一个 +0x18 不存在同类 relocation，不能拼接相邻其他表。正文仍待字节导出。03EBB160 读取旧状态 record[0] 的 +0x10，并读取新状态 record[0] 的 +0；具体包装器语义未验收。

PocketMenu (04B06E28) 与 SelectCursor (04B0EA80) 各有65个连续 RELR relative text 槽；表中地址为 Ghidra VA。连续段并非完整 C++ 虚表边界证明。

|相对偏移|PocketMenu|SelectCursor|比较|
|---|---|---|---|
|+0x000|03197688|03201568|distinct|
|+0x008|031977EC|032016C0|distinct|
|+0x010|03186BA8|0320034C|distinct|
|+0x018|03186C88|0320039C|distinct|
|+0x020|03869A90|03869A90|shared|
|+0x028|03868AB0|03868AB0|shared|
|+0x030|02C0C4BC|02C0C4BC|shared|
|+0x038|03868ABC|03868ABC|shared|
|+0x040|03868AC8|03868AC8|shared|
|+0x048|03188890|02C0D0E8|distinct|
|+0x050|02C0C4C8|02C0C4C8|shared|
|+0x058|02C0C51C|02C0C51C|shared|
|+0x060|02C0C528|02C0C528|shared|
|+0x068|02C0C534|02C0C534|shared|
|+0x070|02C0C6F0|02C0C6F0|shared|
|+0x078|02C0C6FC|02C0C6FC|shared|
|+0x080|02C0C708|02C0C708|shared|
|+0x088|02C0C714|02C0C714|shared|
|+0x090|02C0C720|02C0C720|shared|
|+0x098|02C0C940|02C0C940|shared|
|+0x0A0|02C0C94C|02C0C94C|shared|
|+0x0A8|02C0C960|02C0C960|shared|
|+0x0B0|02C0CB68|02C0CB68|shared|
|+0x0B8|02C0CCE0|02C0CCE0|shared|
|+0x0C0|02C0C3F4|02C0C3F4|shared|
|+0x0C8|031872A0|03200CAC|distinct|
|+0x0D0|03187560|02C0D0F0|distinct|
|+0x0D8|02BB94A4|02BB94A4|shared|
|+0x0E0|03186CEC|02C0D0F4|distinct|
|+0x0E8|03186CFC|02C0D0FC|distinct|
|+0x0F0|03186D1C|02C0D104|distinct|
|+0x0F8|03186D74|02C0D10C|distinct|
|+0x100|02BB94AC|02BB94AC|shared|
|+0x108|02BB94B4|02BB94B4|shared|
|+0x110|02BB94BC|02BB94BC|shared|
|+0x118|02BB94C0|02BB94C0|shared|
|+0x120|02BB94C4|02BB94C4|shared|
|+0x128|02BB94C8|02BB94C8|shared|
|+0x130|02BB94CC|02BB94CC|shared|
|+0x138|02BB94D0|02BB94D0|shared|
|+0x140|03186DA0|03200434|distinct|
|+0x148|0319784C|02BC9F6C|distinct|
|+0x150|02BB94E0|02BB94E0|shared|
|+0x158|02BB94E4|02BB94E4|shared|
|+0x160|02BB94E8|02BB94E8|shared|
|+0x168|0318948C|03200F44|distinct|
|+0x170|02BB94EC|02BB94EC|shared|
|+0x178|03189490|03200F50|distinct|
|+0x180|02BB94F0|02BB94F0|shared|
|+0x188|02BB94F4|02BB94F4|shared|
|+0x190|02BB94F8|02BB94F8|shared|
|+0x198|02BB94FC|02BB94FC|shared|
|+0x1A0|03190450|03201004|distinct|
|+0x1A8|02BB9500|03201008|distinct|
|+0x1B0|02BB9504|02BB9504|shared|
|+0x1B8|03189494|02C0D124|distinct|
|+0x1C0|031894B8|02C0D128|distinct|
|+0x1C8|031894DC|03201000|distinct|
|+0x1D0|02C0CEF8|02C0CEF8|shared|
|+0x1D8|02BB9508|02BB9508|shared|
|+0x1E0|03189918|02C0D130|distinct|
|+0x1E8|03190CEC|02C0D134|distinct|
|+0x1F0|02BB9510|02BB9510|shared|
|+0x1F8|02BB9518|02BB9518|shared|
|+0x200|02BB9520|02BB9520|shared|

四个析构 C 已核对：03186BA8释放后端数组、放置状态机及其他基类资源，03186C88追加对象释放；0320034C清理基类资源，0320039C追加释放。无证据说明析构同步清空全局组件槽。

## 5. PutUnitIcon 下游语义与 Field 区分

[03455E58](../../derived/3.0.3/ghidra12.2/c/5e/03455e58.c) 读取地区状态位与 0251B3B0 返回位置，按5.0单位的网格条件分流，得到数值1/5/6/7，写 FSM+0x84，FSM+0x48=3，调用03EBB160进入状态8 cSystemDialog。它是条件/提示状态处理，不是已证地面物品写入；结果码的原始名字未恢复。0251B3B0的双缓冲身份记录校验及返回字段见原C，未验证与实际 SelfActor 同一地址。

[01392D64](../../derived/3.0.3/ghidra12.2/c/2d/01392d64.c)：目录对象虚函数+0x20返回值为1时返回1，为3时返回3，其他返回2；虚函数结果2额外调用013964CC，后者执行链表移除及状态清理。仍未证明业务枚举名。

[014BCDE4](../../derived/3.0.3/ghidra12.2/c/cd/014bcde4.c#L114-L135) 记录节点：+0x00 u32输入类别、+0x04..0x0B 8字节物品、+0x0C..0x17 12字节关联数据、+0x18 u32参数5、+0x1C/+0x20 派生分类。014E2EB0 的节点池步长0x28，容量0xB4，拷贝临时列表；不能把临时列表等同 Field map。

[014BB000](../../derived/3.0.3/ghidra12.2/c/b0/014bb000.c) 两条独立分支：
1. 条件下将节点+0xC/+0x10/+0x14复制到 DAT_05ABBC58 所指对象+0x121C/+0x1220/+0x1224；通过另一个管理器+0xB88/+0xB90遍历列表并经049A6908间接分发。
2. 当DAT_05292434与场景关联值比较相等且列表非空，调用016B43B4，参数为节点+0xC；未见直接调用 Inventory 修改或 Field持久写入。

R100 049A6908 的首槽实际重定位到 014BDA70；[014BDA70](../../derived/3.0.3/ghidra12.2/c/da/014bda70.c) 解析对象句柄，进行类型、状态校验，再转发01FA5530；该函数执行物品检查、设置对象内部标志和状态字段。反编译实参不一致需原始寄存器复验。

[016B43B4](../../derived/3.0.3/ghidra12.2/c/43/016b43b4.c) 对列表对象+0/+0x1C/+0x38 三个句柄重复处理，检查对象句柄一致性、类型及状态，取子对象+0x3B8，再按01F0A858、虚表+0x350判定，最后调用+0x560。末尾将自身+0x54的bit2置1。具体子对象类型及+0x560 目标未闭合。这是已有对象的通知/处理候选，不是已证明的创建新 Field 物品。

特别区分 relocation：04BB27C0 -> Ghidra 04C93E08 / Main RVA 04B93E08；04BB27C8 -> Ghidra 04CFAE30 / Main RVA 04BFAE30。前者是上述句柄查找路径，后者是历史 Actor registry 候选，不能因相邻 alias 混为同一全局根。04BB3968 -> Main RVA 052E0208；04BB9A68 -> Main RVA 0513A180；目前仅作为该分发路径的静态数据引用。

## 6. 本轮工程变更及验收边界

已扩展 bounded CFG 导出器覆盖包装器3个目标、状态切换、下游消费者、两个析构和页面链。已将原有 direct XREF scanner 的 selftest 和实际 NSO/ELF text 匹配扫描加入 delivery CI；新 run 是否成功须查结果，不能因提交即声称验收。扫描仅覆盖直接 B/BL 候选，间接分支不在覆盖范围。

下一阶段：真实包装器指令；根的发布与注销；PocketMenu 选择状态写入者及菜单值10映射；场景消费者实际目标；按正常本地操作观察 Inventory/Field/会话快照。未经运行时验证的条目不进入正式 Build ID 指针数据库。生产派送代码保持不变。
