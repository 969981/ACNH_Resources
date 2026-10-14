# ACNH 3.0.3 R13 — BARS 对象身份、成员目录消费者与 EventFlow Native 调用

> 2026-10-14，R13/R13b/R13c 实际 ELF 静态证据。研究范围为原始 ACNH 3.0.3，ELF 79,000,340 bytes、SHA256 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`。所有地址均为 ELF PT_LOAD VA；禁止在未核对加载基址时直接套用实机地址。本报告没有动态 trace，不将游戏语义推断标记完成。

## 1. 本次真实执行与产物

- [R13c 最终通过的 GitHub Actions 运行](https://github.com/969981/ACNH_Resources/actions/runs/38507031768)（R12 与 R13/R13b/R13c 在同一任务依次执行，单元测试、原始 ELF SHA、真实静态反汇编和产物提交成功）。
- [R13 对象/全局槽/直接调用证据](../derived/3.0.3/round13_native_provenance/report.json)（脚本 `scripts/acnh303_round13_object_provenance.py`）。
- [R13b 方法表与 EventFlow 初始化证据](../derived/3.0.3/round13b_native_methods/report.json)（脚本 `scripts/acnh303_round13b_vtable_methods.py`）。
- [R13c BARS 下游调用与 EventFlow 虚方法静态候选](../derived/3.0.3/round13c_native_member_consumer/report.json)（脚本 `scripts/acnh303_round13c_member_consumer.py`）。
- 原始可执行文件未在任何提交中修改或上传第二份，报告 JSON 只记录地址、指令、必要的内存初始字节和未完成边界。

## 2. P0 — BARS 读取器与参数来源

### 2.1 `0x3ACA260` 的直接调用身份

通过全可执行段的 BL immediate 反查，发现两个直接调用：

| 调用方 | X0/X3 来源 | 返回值去向 |
| --- | --- | --- |
| `0x291FB8C` | `0x291FB80 MOV X0,X1`；`0x291FB74 ADRP X3,#0x4B4B000` + `0x291FB78 ADD X3,#0x980` → `0x4B4B980` | `0x291FB90 STR X0,[X19,#0x28]` |
| `0x3B4C61C` | `0x3B4C60C LDR X0,[X23,#8]`；`0x3B4C5DC ADRP X3,#0x4AB2000` + `0x3B4C618 LDR X3,[X3,#0x238]` | `0x3B4C620 STR X0,[X22,#0x18]` |

进入 `0x3ACA260` 后，`0x3ACA27C MOV X20,X3`，`0x3ACA290 MOV X22,X0`。原始文件中全局槽位 `0x4AB2238` 的初始八字节为 `80b9b40400000000`，对应 `0x4B4B980`。因此两个调用方均使用了**静态上相同的 X3 候选对象地址**。但全局槽位运行时是否被重定向没有测试，不能据此宣称两个运行时指针必然相等。

`0x3ACA490–0x3ACA494` 再次将 X22 赋为 `[0x4AB2238]`，原本的 BARS buffer X22 已被覆盖，后续 `[X22+8]` 不可解释为 BARS header 字段。

### 2.2 `BARS base → 成员目录指针 → 对象+0x10` 已由指令闭合

| VA | AArch64 原生指令 | 事实 |
| --- | --- | --- |
| `0x3ACA300` | `MOV X8,X19` | X8 初始取对象指针 |
| `0x3ACA318` | `STR XZR,[X8,#0x10]!` | 后索引式写回，X8 变成 X19+0x10 |
| `0x3ACA36C` | `LDR W9,[X22,#0xC]` | 读取 BARS member count |
| `0x3ACA370` | `ADD X9,X22,X9,LSL #2` | 以 4×count 跨过 CRC 区 |
| `0x3ACA374` | `ADD X9,X9,#0x10` | 加 BARS 头长度 |
| `0x3ACA378` | `STR X9,[X8]` | 将 `BARS+0x10+4*count` 保存到 X19+0x10 |

R13 原生反汇编还检查了 `0x3ACA318` 与 `0x3ACA378` 之间 X8 无被覆写的候选。结合 BARS 真实资源结构验证，此处确实建立了 BARS 成员目录偏移表的保存关系。**这只是目录的指针，并未自动证明 AMTA v5 每个字段的语义。**

### 2.3 解析对象方法表

`0x3ACA320 ADRP X10,#0x4A7A000` + `0x3ACA324 ADD X10,X10,#0xD40`，随后 `0x3ACA35C STP X10,X22,[X19]`，对象首个机器字设置为 `0x4A7AD40`。实查原始 ELF，该方法表有多个条目直接指向可执行地址。

| 表项 | 方法起始 VA | 增量意义 |
| --- | --- | --- |
| 0 | `0x3ACA750` | 真实 Native 入口，语义尚待证实 |
| 1 | `0x3ACA624` | 真实 Native 入口，出现对对象首字段的写入 |
| 2 | `0x3ACA6E4` | 真实 Native 入口 |
| 13 | `0x3ACB3F0` | `0x3ACB484` 有 `LDR X20,[X19,#0x10]` |
| 14 | `0x3ACB5D8` | `0x3ACB66C` 有 `LDR X21,[X19,#0x10]` |

必须区分仅线性反汇编落在方法窗口中的邻近函数，与从该表项真实控制流可达的语句。第 13、14 项有明确的寄存器上下文：
- `0x3ACB40C MOV X19,X0` → `0x3ACB484 LDR X20,[X19,#0x10]`。
- `0x3ACB5F0 MOV X19,X0` → `0x3ACB66C LDR X21,[X19,#0x10]`。

这确认了至少两个真实 Native 方法具有读取解析对象成员目录指针的代码。

### 2.4 目录指针进入下游调用

从方法表第 14 项继续跟踪，静态可确认如下路径：

```text
0x3ACB5F0 MOV X19,X0
0x3ACB66C LDR X21,[X19,#0x10]  ; 从解析对象取成员目录指针
0x3ACB674 LDR W1,[X19,#0x1C]
0x3ACB67C LDP W2,W3,[X19,#0x24]
0x3ACB684 MOV X4,X21
0x3ACB688 BL  0x3ACCCE0
0x3ACCCF8 MOV X19,X4
0x3ACCD88 MOV X5,X19
0x3ACCD9C B   0x3ACCDF0
0x3ACCE14 MOV X24,X5
```

该执行路径受此前条件分支控制，不能理解为每次都会进入。已证实目录指针传入具体下游函数 `0x3ACCCE0`，函数前段将 X4 保存为 X19、再经某路径转交 X5/X24。**还没有证明 X24 参与具体 AMTA 成员元数据或 BWAV 文件头读取**。下一轮 P0 应在 `0x3ACCDF0` 下游核对 X24 的真实消费者和目录成对偏移加载行为。

## 3. P1 — EventFlow Action/Query 成对记录与虚调用

### 3.1 静态初始化的第一个机器字更接近方法表

Action 初始化中：

```asm
0xFF5BFC  ADRP X8,#0x4AB2000
0xFF5C08  LDR  X8,[X8,#0x20]
0xFF5C30  ADD  X8,X8,#0x10
0xFF5D58  STP  X8,X11,[X10]
0xFF5D70  STP  X8,X11,[X10]
```

Query 注册中还观察到：

```asm
0x108423C ADRP X8,#0x4AB2000
0x1084248 LDR  X8,[X8,#0x20]
0x108426C ADD  X19,X8,#0x10
0x1084450 STP  X19,X11,[X10]
```

原始 ELF 中 `0x4AB2020` 的初始值是 `0x47F9760`，加 `0x10` 后成为 `0x47F9770`。因此两种记录的**静态首字段方法表候选地址一致**。EventFlow 的 Action/Query 名称则通过另一机器字分别关联到具体常量字符串。这里的首字段并没有证明是游戏 Action handler。

### 3.2 `BLR` 的首个静态虚方法目标

Action 读取链：

```asm
0xFF6464  ADRP X23,#0x4FB4000
0xFF6468  ADD  X23,X23,#0xC08
0xFF6470  LDR  X8,[X23]
0xFF6478  LDR  X8,[X8,#0x18]
0xFF647C  BLR  X8
```

按照上述 **ELF 文件初始方法表** 恢复，表首值 `0x47F9770` 加 `0x18`，从 `0x47F9788` 读得方法地址 `0x5BD3A4`。原始代码在 `0x5BD3A4` 为单条 `RET`。因此这一静态候选**不是已经证明的 NPC 或脚本 Action handler**；它更像描述符对象的一种基础虚方法槽。Query 的 `0x10847E4 → 0x10847F0` 使用相同的首字段形式，但仍缺乏运行时对象采样与调用目标日志，不应宣称绝对一致。

后面 `[descriptor+8]` 与另一个指针的比较，以及逐字节比较，依然属于静态符号/字符串比对证据；真正动作注册查找、参数封送、调用与游戏状态改变未闭环。

## 4.复现

```bash
python3 -m pip install 'capstone>=5,<6'
python3 -m unittest discover -s scripts -p 'test_acnh303_round12_native_downstream.py' -v
python3 -m unittest discover -s scripts -p 'test_acnh303_round13_object_provenance.py' -v

python3 scripts/acnh303_round13_object_provenance.py \
  --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf \
  --out derived/3.0.3/round13_native_provenance/report.json

python3 scripts/acnh303_round13b_vtable_methods.py \
  --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf \
  --previous derived/3.0.3/round13_native_provenance/report.json \
  --out derived/3.0.3/round13b_native_methods/report.json

python3 scripts/acnh303_round13c_member_consumer.py \
  --elf e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf \
  --previous derived/3.0.3/round13b_native_methods/report.json \
  --out derived/3.0.3/round13c_native_member_consumer/report.json
```

原生表地址交叉引用有记录上限；`0x4AB2238` 等全局槽存在超过上限的引用，`first 100` 不是完整引用总数。仅 `ADRP+ADD` 形成地址与真实 `LDR` 不能互换。静态虚表初始数据不等于运行时最终调用目的地址。

## 5. 待验证／Issue #33 不关闭

- [x] BARS 解析入口 X0/X3 参数传递静态来源
- [x] BARS 成员目录指针保存至解析对象 `+0x10` 的真实指令证据
- [x] BARS 方法表与两处 Native 读取对象 `+0x10` 的指令证据
- [x] `+0x10` 目录指针作为 X4 传入 `0x3ACCCE0` 的调用链
- [ ] `0x3ACCDF0` 下游实际遍历 `(AMTA_offset,audio_offset)` 目录的指令与数据记录
- [ ] AMTA v5 `+0x10...+0x30` 字段与播放/循环/名字等 Native 消费闭环
- [ ] EventFlow 非基础虚方法槽到真实 Action/Query Handler 的查找与派发
- [ ] 动态只读日志、对象基址、参数、返回值和游戏状态变化交叉验证
- [ ] BDLI/LBLI 的真实读取与语言 UI 对照（保持原 #33 的独立待办）

状态必须继续 **open**，不得把结构级证据等同于完整资源解包/事件反编译。
