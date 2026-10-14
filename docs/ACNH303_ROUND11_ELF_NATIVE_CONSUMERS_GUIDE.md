# ACNH 3.0.3 第十一轮：真实 ELF Native 消费者验证

> 2026-10-14。所有地址以现有 ELF 的 PT_LOAD 虚拟地址为准，未换算实机加载基址。仅验证真实代码指令和静态数据流，不将猜测的函数语义写成已证实事实。

## 1. 真实可执行文件与验证来源

- 文件：e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf
- ELF64 little-endian，AArch64，大小 79,000,340 bytes。
- SHA-256：83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180。
- 代码段 PT_LOAD：VA 0，66,088,432 字节；只读段：VA 0x3F07000，8,507,900 字节。
- [完整 ELF 字符串与 ARM64 XREF 原始报告](../derived/3.0.3/round11_elf_native_xref/report.json)
- [原生 Capstone 指令上下文与 Magic 构造矩阵](../derived/3.0.3/round11_native_code_windows/analysis.json)
- [第一阶段真实 ELF 工作流](https://github.com/969981/ACNH_Resources/actions/runs/38501096477)
- [第二阶段真实反汇编工作流](https://github.com/969981/ACNH_Resources/actions/runs/38501353038)

注意：此次仅提交 JSON 证据和分析工具；没有重新上传、修改或重打包原始 ELF。

## 2. 已直接确认：Native BARS Header Reader

~~~asm
0x3ACA350 MOV  W11,#0x4142
0x3ACA354 MOVK W11,#0x5352,LSL #16  ; 0x53524142 = BARS
0x3ACA360 LDR  W10,[X22]
0x3ACA364 CMP  W10,W11
0x3ACA368 B.NE 0x3ACA3B0
0x3ACA36C LDR  W9,[X22,#0xC]
0x3ACA370 ADD  X9,X22,X9,LSL #2
0x3ACA374 ADD  X9,X9,#0x10
0x3ACA378 STR  X9,[X8]
0x3ACA37C LDRH W8,[X22,#8]
0x3ACA398 LDRH W8,[X22,#0xA]
0x3ACA39C CMP  W8,#0x101
~~~

这段代码实际从 X22 指向的缓冲区比较 BARS Magic，按 +0x0C 的 u32 计算 +0x10+4*count 的数组后边界，并读取 +0x08 BOM、+0x0A 版本。与原始 BARS 结构审计一致，**BARS 头部解析已有静态 Native 指令直接证据**。

尚未确认 BARS 读取者的运行时对象身份，也未将后续成员目录链接到 AMTA v5 +0x10～+0x30 字段的具体读取/播放行为。BARS 的 header 偏移不得移植套用于 AMTA。

## 3. BDLI Native 路径构造

只读段 VA 0x3FB0E31 是字面量 BDLI/%s/%s/%s.bdli：

~~~asm
0x1B0A014 ADRP X1,#0x3FB0000
0x1B0A018 ADD  X1,X1,#0xE31
0x1B0A01C ADD  X0,SP,#8
0x1B0A020 MOV  X2,X21
0x1B0A024 MOV  X3,X22
0x1B0A028 BL   0x37D1270
0x1B0A05C BL   0x3E33F70
~~~

已验证 BDLI 路径字符串被真实 Native 代码传入下游函数，**没有**验证上述 BL 的正式 API 契约或直接读取 LBLI identifier。应先反追调用者、构造好的路径如何传入后续 buffer，再验证 Zstd 解压、LBLI section count/identifier 读法。不能把 0x37D1270 硬标为 sprintf、把 0x3E33F70 硬标为 BDLI loader。

## 4. BFEVFL Action/Query 的成对初始化候选

真实 ELF 字面量 / ADRP 地址形成点：

| 实际 ELF 字符串 | 代码 VA |
| --- | --- |
| EventFlowActionDummy | 0xFF5C28 |
| EventFlowActionExitFlowchart | 0xFF5D18 |
| EventFlowActionSetCheckResult | 0xFF5D64 |
| EventFlowQueryDummy | 0x1084430 |
| EventFlowQueryCheckErrorType | 0x1084444 |

~~~asm
0xFF5D64  ADRP X11,#0x3FD4000
0xFF5D68  ADD  X11,X11,#0x764
0xFF5D70  STP  X8,X11,[X10]        ; 存储两个机器字（含名称地址）

0x1084430 ADRP X9,#0x3FF9000
0x1084434 ADD  X9,X9,#0x560
0x108444C STP  X19,X9,[X8]
~~~

这是**Native 的名称地址和另外一个机器值成对写入存储的事实**，注册表/初始化记录是合理的后续研究假设。但当前没有证明存入记录的第一个机器值就是 handler 函数指针，也没有得到名称匹配与事件分派的真实读取者。

第十轮 12 个真实 BFEVFL 中的很多特定 Npc Action/Query 完整名字没有在本次 ELF 上得到精确 ASCII 命中，不能把名义相近当作处理器定位成功。

## 5. 计数和缺失语义边界

第一层搜索 51 个候选字符串，8 个存在精确字面量，7 个存在代码形成其地址的候选关联，总计记录 58 条受 cap 限制的代码引用，可能共享同一更长字符串子串。第二层 Capstone 实测 40 个关键 ELF 代码窗口。

MOVZ+MOVK 32-bit FourCC 两条指令组合：

| 格式 | 实际构造结果 |
| --- | --- |
| BARS | **1**；且立即接上 LDR/CMP、数量和版本读取，构成已证实的 BARS header 使用 |
| AMTA | 0 |
| BDLI | 0 |
| LBLI | 0 |

最后三项为**目前只搜索这一种整数构造方式的未命中**，绝非游戏不存在对应 Native 解码逻辑。仍需查 ADRP+LDR 常量池、字节拆分、半字比较、hash switch、内部库和间接注册。

## 6. Windows 11 / WSL2 复现

~~~bash
git clone --filter=blob:none --sparse -b 3.0.3 https://github.com/969981/ACNH_Resources.git acnh303-r11
cd acnh303-r11
git sparse-checkout set --no-cone '/scripts/' '/derived/3.0.3/evfl_round10_cumulative/' '/e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf'
python3 -m pip install 'capstone>=5,<6'
python3 -m unittest discover -s scripts -p 'test_acnh303_round11_elf_xref.py' -v
python3 -m unittest discover -s scripts -p 'test_acnh303_round11_magic_disasm.py' -v
python3 scripts/acnh303_round11_elf_xref.py --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf --events derived/3.0.3/evfl_round10_cumulative/coverage.json --out derived/3.0.3/round11_elf_native_xref/report.json
python3 scripts/acnh303_round11_magic_disasm.py --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf --xref derived/3.0.3/round11_elf_native_xref/report.json --out derived/3.0.3/round11_native_code_windows/analysis.json
~~~

## 7. 下一次研究必须真正闭合的点

- BARS → AMTA：沿 0x3ACA350 成功分支到真实 metadata offset，确认 AMTA v5 的 +0x10...+0x30 被哪个 Native reader 用什么宽度读取，且由实机播放场景复核。
- BDLI → LBLI：从 0x1B0A014→0x37D1270→0x3E33F70 寻找原始路径、Zstd 解压、LBLI section identifier、语言处理的具体代码交接。
- BFEVFL → Native 行为：从 0xFF5C28 / 0xFF5D64 及 0x1084430 / 0x1084444 两条成对存储链反查对象 owner、记录读者、分派函数，最后用真实 Action/Query 的运行时只读日志确认参数和结果。

所有结果标记实际代码静态验证还是实验性语义，不得靠字符串名推测业务行为。Issue #33 继续保持开放。
