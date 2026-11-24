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
