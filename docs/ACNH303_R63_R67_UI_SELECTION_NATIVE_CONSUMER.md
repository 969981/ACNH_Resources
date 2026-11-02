---
title: R63–R67 选图语义、客户端真实名称与原版 ARM64 消费者
aliases: [ACNH 3.0.3 UI Runtime, ACNH 原版图标选图研究]
tags: [ACNH, 3.0.3, ItemParam, BNTX, FLAN, FLYT, ARM64, GDB, provenance]
status: client-static-selection-verified-native-argument-flow-verified-game-rendering-unverified
---

# R63–R67：真实图片来源之后的静态选图与消费者调查

> [!important] 必须区分三个命题
> 1. 原版 3.0.3 纹理及 PNG 源/像素真实（R60–R62 证据）。
> 2. 特定版本 ACNHPokerCore 按源码逻辑，在一个假定包含所有原版 PNG 文件名的共享图片文件夹里会选哪个名称（R63 静态路径模拟）。
> 3. Nintendo 3.0.3 游戏实际加载哪些图片到哪一张 UI、如何改变 body/fabric（尚未记录真实游戏运行时）。

## R63：344 项默认变体和 39 项服装的客户端路径模拟

原始客户端固定为 ACNHPokerCore commit 85e50a1ad182c926b2ebd51c00abc612e0a859d5。
本轮直接读取 items.csv、variations.csv、field.csv、override.csv 和 Map/map.cs 的 GetImagePathFromID 代码，
使用 R62 已验证的 26,277 个同名原生文件名建立虚拟共享图片文件夹，并按照 C# 的优先级和位运算进行静态回放。
虚拟文件夹是检查真实文件名集合的工具，不意味着已经将分散目录实际复制/部署到 ACNHPokerCore 的 imagePath。

| 条件 | 模拟结果 |
| --- | --- |
| 344 项，data=0 | 344 全部命中真实已存在的 _Remake_0_0.png，先经过 variation_payload 分支 |
| 344 项，data=1 | 337 个变体文件匹配，7 个回退到 _Remake_0_0 |
| 344 项，data=0x20 | 37 个变体文件匹配，307 个回退到 _Remake_0_0 |
| 344 项，data=0x21 | 30 个变体文件匹配，314 个回退到 _Remake_0_0 |
| 344 项与原始 ItemRemake 同 ID 记录 | 30 有、314 没有，同 R52 独立记录一致 |
| 39 个服装项目 | 39 个原始 ItemParam ID 在客户端 items.csv 中全部命中对应实例名，39 个模拟通过 items_base 找到实例名 PNG |
| 391 个其他 UI 资源 | 385 个原生 BRTI 名在至少一个客户端 CSV 中有同名记录；不能因此断言 UI 加载它们 |

对于 39 个服装名称，外部清单如 CapWigZelda0_0.png 需要拆分为原始 ItemParam 的 CapWigZelda0。真实 3.0.3 资源包含独立的 FtrIcon 和 ClosetIcon，两种 PNG 不应混用。之前以外部清单名查客户端而认为没有客户端记录是不正确的；R63 已以原始 ID 实际纠正。

静态代码路径模拟只在给定 CSV 和虚拟原生文件集合下成立；没有实际启动 C# GUI，更没有验证 Nintendo 游戏的默认 UI 选择。

证据：assets/evidence/rom-items/r63-pokercore-lookup-replay.json 及 r63-pokercore-selection.csv。
Actions：#41449897892 通过，并且保持了原始 R52 的 30/314 ItemRemake 记录。

## R64：原版 SHA 验证 ELF 中的 391 项纹理名和资源家族标签

ELF 原始 SHA-256 为 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180。
仅对 ELF 文件后备且不可执行的 PT_LOAD 段匹配完整 ASCII+NUL 字符串；对字符串绝对地址追相邻 ADRP+ADD / ADRP+LDR 的精确 AArch64 指令引用。

- 391 个具体原生纹理名称：384 项在这次只读 ELF 字符串表中未找到独立完整 NUL 名称；6 项找到名称但没有相邻 ADRP 指令引用；1 项 YutaroWisp 找到真实 ADRP+ADD 代码引用 main+0x17B1FC0。
- 资源家族标签 GardeningIcon 在 ELF VA 0x3F91F0D；直接代码引用 main+0x19F754C。
- DIYRecipeIcon 在 ELF VA 0x3FA66D7；直接代码引用 main+0x19F6D54 与 main+0x19F6D6C。
- 这些均是实际原版字节/机器指令证据，然而字符串引用本身不能证明完成图片加载；不在 ELF 中也不能证明名字不在其他资源表或运行时生成。

证据：assets/evidence/rom-ui-semantics/r64-elf-original-ui-string-xrefs.json。Actions：#41449157117 成功。

## R65：960 个原版 Layout 容器的真实 FLYT、FLAN 解析

已 SHA 记录并成功读取原版 RomFS/1/Layout 960 个源容器，无 archive-read 错误，解析器报告 959 个 FLYT、3,999 个 FLAN 和 7,448 个 FLYT/FLAN 纹理名称引用。
用真实解析得到的 FLYT txl1 / FLAN pai1 字符串按精确名称连接 391 个单独来源：精确命中 0 项。
**这是静态 UI2D 文件列表没有精确写出目标纹理名的正面审计结果，不能解释成 391 项从未被游戏引用。**
应优先继续追游戏中动态构造的图标名字 / UI 列表数据绑定，而非重复扫描布局名称。

证据：assets/evidence/rom-ui-semantics/r65-native-ui2d-texture-consumers.json。Actions：#41449352878 成功。

## R66–R67：由纯字符串引用推进到真实调用参数

R66 从同一个 79,000,340 字节原始 ELF 中反汇编真实指令和相邻 BL/BLR，R67 对其中两条参数传递链额外进行准确原始机器码和受控流程检查：

| 家族标签 | 原版 PC | 后续调用点 | 经机器码验证的参数传递 |
| --- | --- | --- | --- |
| GardeningIcon | main+0x19F754C | main+0x19F756C -> main+0x672610 | ADRP+ADD 得到 X9，STP X8,X9 存入栈，[SP+8] 是标签指针，X1=SP，随后 BL |
| DIYRecipeIcon | main+0x19F6D6C | main+0x19F6DFC -> main+0x3F04470 | X1 持有字符串指针，**仅在经过 main+0x19F6D80 到 main+0x19F6DEC 的直接分支时**保持到 BL |

注意：DIYRecipeIcon 的同一后续调用存在其他先行路径，其中 main+0x19F6DD8 改写 X1 指向另一字符串。R67 首轮校验正确拦截了笼统的寄存器不变假设，最后只认可经原始指令确认的单条路径。

直接调用的参数输入和后续代码窗口在 R67 记录了原始 code window SHA-256。**两个调用的目标都没有被认证为纹理加载函数**，也没有任何运行时 Game UI 截图、对象句柄、真实文件读入/贴图绑定。不要把 BL 目标的地址直接写成最终 loader。

证据：assets/evidence/rom-ui-semantics/r66-ui-native-ARM64-ref-windows.json、r67-ui-family-argument-dataflow.json。
Actions：#41449757361、#41450425646 均成功（各自保留历史失败记录和修复原因）。

## 只读 GDB 观测

入口：Scripts/gdb/acnh303_r67_ui_family_callsite_readonly.gdb。
本脚本要求在已验证的 3.0.3 游戏或模拟器进程中根据真实调试映射先设置 $main_base，再以 source 命令载入。
它在 main+0x19F756C 和 main+0x19F6DFC 调用前只读取字符串指针、寄存器和 backtrace 并继续，不写入任何内存。
GardeningIcon 在调用前查看 SP+8 处指针是否对应原始字符串；DIYRecipeIcon 需要同时检查进入该调用的前序分支，因为另一个前驱可能带着其他字符串。

在实际取得观测记录之前，项目中报告 live_GDB_sessions_recorded = 0，native_UI_texture_loads_recorded = 0。只有继续确认后续函数取得实际资源路径、读入缓冲、绑定 BNTX 和 UI 才能宣称运行时等价。

## 当前完整结论

- 26,277 项原版同名图和 1,254 项原生候选来源保留原有 SHA/来源；无假 PNG、无自动别名和覆盖。
- ACNHPokerCore 的 344 个零变体和 39 个服装的静态命名选择已达到可验证、可复现的程度，但不等于原版运行时行为。
- 391 个其他 UI 资源已排除 960 个已解析 FLYT/FLAN 的同名直接列表引用，原版 ELF 中已有具体可跟踪的家族标签和指令参数链，下一步需真实游戏 GDB 证据。
- 原先 1,254 项仍需原版 UI 文件名语义及具体显示场景的最终验收，目录名与图片输出尚未被偷偷替换。
