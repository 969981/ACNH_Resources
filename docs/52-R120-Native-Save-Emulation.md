---
title: ACNH 3.0.3 R120 - Native save emulation
tags: [ACNH, ARM64, save, R120]
---

# R120 原版校验执行、云岛尺寸验证及普通调度窗口

关联 [[51-R119-Save-Dispatch-Nested-Hash]]。R119 三项 CI 均通过。固定 R117/R119 Artifact SHA-256，R100 负责解码并验证原版 NSO/ELF；使用 Ghidra VA=NSO offset+0x100000。

## 云岛尺寸检查
原版 R117 selector_cfg.json 中 0283EBC0/0283EBF8/0283EC30 均为输入非空和 descriptor size 精确相等，分别为 0xA2458/0xC6788/0x14C618。例 S: LDR X9,[X0]; LDR X10,[X1]; LDR X8,[X9,#8]; CBZ X10; LDR X9,[X9,#0x10]; LDR X9,[X9]; LDR X9,[X9,#8]; SUB X9,X9,#0xA2,LSL#12; CMP X9,#0x458; CSET W9,EQ; STRB W9,[X8]。空指针分支清零结果。三个 LoadCopy 入口尾调用共同拷贝函数；不由此推导磁盘长度。PostSave 为释放/清理候选，未认定实际落盘。保留历史命名，语义更新为 ValidateBufferSize。

026EF2CC 按 0x50E/0x50F/0x510 标志及后端是否存在选取 +0x190/+0x198/+0x1A0 对象，Getter +0x18 返回缓冲区，长度分别为三种固定值。该函数返回的是内存缓冲区描述，不是文件名。云岛路径索引 7–9 的实际磁盘调用尚未闭合。

## 原版函数执行验收
新增 Unicorn ARM64 专项。映射原版 NSO 段，使用独立栈与确定性伪随机缓冲区，从 027B3AD0 执行并要求返回。独立 Python MurmurHash3 计算 R119 的 3+16 个 Main Hash，比较完整缓冲区及实际写入地址/宽度。云岛尺寸检查分别测试正确、短一字节、长一字节、空指针，共 12 项。模拟通过不是实机验证，也不证明真实文件内容与 Personal 同步。

## 调度
全 text 扫描 B/BL 到七个普通 writer、云岛 worker、选择器与通用路径/写入函数。以实际 writer BL 最小/最大地址构建有边界的指令窗口和 CFG 边；间接边及越界边独立登记，不将窗口视为完整函数归属。后续应结合完整函数入口/尾调用及调度状态验证。

## 运行
`python Scripts/acnh303_r120_native_save.py --r117 r117.zip --r119 r119.zip --out artifacts/r120`

输出 main_native_hash_emulation.json、cloud_size_emulation.json、direct_refs.json、writer_dispatch_window.json、report.json。仅用合成样本，不写回游戏存档。CI 前不宣称仿真通过，真实 GDB 与实际存档继续标为未验证。

## 云岛 worker 的同步与独立 Personal 快照证据

R117 原版 BL 显示 0283CBA8 -> 026F5738 (锁/同步进入) -> 02700EE8 (三个已启用后端的 VTable+0x28 Getter) -> selector 间接调用 -> 026F5820 (锁/同步退出)。0283CCBC 调用 02700CCC (VTable+0x18 Getter)、026F55B4/026F569C、026F5A40/026F5B28 及 026F66E0。026F66E0 的反编译源明确从 T+0x60..0x98 的八个 Personal 对象分别 memcpy(P(O+0x18), P(O+0x10), 0x74A40)，并做通用记录复制与锁保护。这是八个独立 Personal 的双缓冲同步证据，不是 Main+0x5B3D50 与外部 Personal 一致的证明。两个 Getter 调用的返回值未被对应 C 源使用；不能据此声称完成磁盘写入。

源码 Blob 锚点：02700EE8 a10734b44812b19be3e00050c3d0327ee542b045；02700CCC 53c3050431c22c75dd01849406c9633c432a15ad；026F5738 7535c698d10d9298ac819f8cf4526821cad8fc17；026F5820 52308a34c2f7f804d8a2e78a40a68d7663012fe0；026F66E0 385d8e246fb61826880218a3fd5935ad59cde769。以上为源码证据，非新增机器码验收结果。
