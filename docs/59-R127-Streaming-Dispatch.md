---
title: ACNH 3.0.3 R127 - Streaming dispatcher
tags: [ACNH, ARM64, save, R127]
---

# R127 底层事务调度与状态转换数据库

关联 [[58-R126-Streaming-State]]。R126 最新三个工作流通过，固定 artifact 14896577058 SHA256 16c2949936c94df3980c6c19924930f6af26b4c2cbcb2da7600f824686316450。

## 调度
002B5994 前置条件：+0x70 非零、002AAA28 身份非零、002AED20 下层 32 个 qword 至少一个非零。通过后顺序调用 002B59E4、002B6A20、002B6D6C、002ACE50。前置失败直接返回，与单独调用 002B59E4 时的重置行为不同。
002ACE50 最后使用 vtable +0x88/+0x90/+0x98 更新，原始所有者未确认。

## 状态关系（解释性名称，非官方枚举）
|初始|目标|入口|证据|
|---|---|---|---|
|1|2|002B59E4|source：source processing reaches total|
|1|12|002B59E4|source：selected association absent|
|2|3|002B6D6C|source：association present and completion query true|
|2|12|002B6D6C|R126 native with modeled memset：association absent|
|4|5|002B6A20|source：case 1; initial receive processing|
|4|7|002B6A20|source：case 3|
|5|6|002B6D6C|R126 native with modeled memset：progress == 100|
|8|11|002B59E4|source：branch completes without reported error|
|9|10|002B59E4|source：branch completes without reported error|
|10|11|002B6A20|source：case 6|
|any|12|002B6A20|source：case 4|
|any|0|002B59E4|planned local native：invalid local prerequisite|

## 数据字段
+0xBC 源端累计长度，+0xC0 目标端累计长度，+0xD2 进度百分比。+0xD3..0xF2、+0xF3..0x112 为两个独立 32-byte 标记数组；仅在各自处理返回零后清除。+0x538..0x630 为下层 32 qword 非空判断，不推定具体实体名称。

## 验收
从原版 NSO 提取五个有界指令窗口、调用顺序和控制流候选（不等同于完整 CFG）；离线测试 002AED20 99 项、002B5994 与 002B59E4 各42项前置失败行为。仅对已知 32-byte memset 建模，拒绝进入传输调用；检查完整对象。状态 1->2、4->5 等为静态源码证据，不执行实际传输，不证明磁盘持久化或真实存档。

`python Scripts/acnh303_r127_streaming_dispatch.py --r126 r126-final.zip --out artifacts/r127`

## 最终原版验收
首轮 45343002018 在源码 blob SHA 断言失败（002B6A20 源码 SHA 漏写末尾 6b）；62c46ea 修复为 79c490c0b2cbfd2687d7dbf4b635276a7a5b6b6b，未移除校验。第二轮 45343075420 通过，Artifact 14897256721，ZIP SHA256 cd6f24fed4a3a3540c61ef197dc0cb6ef0e06188fcf346a15a917110725bb23b，实际下载重新计算一致。183/183：99 次 32-qword 非空判断、42 次入口前置失败保持原对象、42 次源端前置失败重置；完整缓冲区逐字节比较，42 次外部 memset 模型，非本地调用拒绝执行。任意状态->0 的前置失败条件由本轮仿真支持。
原版窗口1377条指令，314条控制流候选，非完整 CFG。002B5994 完整20条指令：002B5998 LDR X8,[X0,#0x70]；002B599C CBZ X8,002B59DC；002B59A4 BL 002AAA28；002B59A8 CBZ X0,002B59DC；002B59B0 BL 002AED20；002B59B4 TBZ W0,#0,002B59DC。
|调用点|目标|类别|原版字节|
|---|---|---|---|
|002B59BC|002B59E4|BL|0a000094|
|002B59C4|002B6A20|BL|17040094|
|002B59CC|002B6D6C|BL|e8040094|
|002B59D8|002ACE50|B|1eddff17|
最后一段在恢复 LR、X19 后尾调用 002ACE50。002B5994 全 text 直接 B/BL 引用为零，下一阶段需从 RELR、构造及间接回调注册追踪所属对象。
源端状态写入 002B60A0、002B65E0 STR WZR,[X19,#0x78]，002B69F8 STR W8,[X19,#0x78]；目标端写入 002B6B10/6B3C/6C18/6CA8/6CD8/6D0C/6D3C（完整 VA 以 002B 为前缀）。具体分支路径仍以源码和局部指令对应为依据，不将窗口扫描视为所有状态转换执行通过。独立存档链、内容校验、真实样本与实机仍未验证。
