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
