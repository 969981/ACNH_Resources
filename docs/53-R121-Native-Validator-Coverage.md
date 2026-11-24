---
title: ACNH 3.0.3 R121 - Native validator coverage
tags: [ACNH, ARM64, save, R121]
---

# R121 保存校验器边界与覆盖范围

关联 [[52-R120-Native-Save-Emulation]]。R120 Artifact 14893694030 SHA256 612f84e4100e93501944ee7effcc190ab177b7066984c13a5a6b573e228ace1f 已重新下载并验证。R120 Main 19 个生成字段、云岛 12 个尺寸测试已通过，真实存档样本仍为 0。

## 本轮测试

七个原版 validator 入口 02840270 / 028403E0 / 02840524 / 02840630 / 0284073C / 02840848 / 02840954 在合成数据上测试正确 hash、空指针、每个外层区 payload 与已存 hash 单比特修改。错误分支只执行到原版错误处理入口 0258B910，停止仿真，不伪造 SDK 日志返回。空指针返回 1 是函数局部语义，不代表整个加载流程接受缺失文件。

Main 16 个内部数据区各自单比特变更，验证外层 validator 是否检查它们。生成器和独立验证器的覆盖不能混同。Profile 02842D10 在三个区块各自执行，并依次验证 028420C0；mvoption 027B7FF0、wherearen 028F2210 执行并与独立 MurmurHash3 对账，比较全部缓冲区和写入位置。Profile 条件分支仍未运行。

## 调度与云岛

固定 R120 原始 direct_refs：0278EF80 调用点 027B3B2C、02835614、02835A38；026EF2CC 调用点 01D50448、01D50484、01D504E0、01D50508。每处输出前后各 24 条指令和原始字节；额外输出 01D50300..01D50600 整体窗口。窗口并非完整函数 CFG，不宣称云岛落盘或 Main/Personal 同步链闭合。

## 运行

`python Scripts/acnh303_r121_save_validator.py --r119 r119.zip --r120 r120.zip --out artifacts/r121`

输出 native_validator_tests.json、native_generator_tests.json、caller_windows.json、cloud_consumer_window.json、report.json。仅合成数据，不修改或上传真实存档。CI 已通过（下节记录实际结果）。

## 专项 CI 实际结果

Run 45337094992；Artifact 14894760051 已下载，SHA256 50debc5d7eb5f208372bcb93b5ff489f675cb4ee3ed71fdef6eafa33ae3554ec 与登记一致。七个 validator 正常 7/7、空指针 7/7、外层损坏 20/20 到达原版错误处理入口、Main 内嵌单比特修改 16/16 仍返回 1。合计 50 项 validator 测试。Profile 三个内块生成器、Profile/MvOption/Wherearen 三个外层生成器均输出完整缓冲区一致；只覆盖生成器，不宣称条件清零调度已执行。

## 云岛四个 BL 的三个完整包装函数

原版 192 条连续指令窗口揭示 026EF2CC 的真实 AArch64 ABI：X0=Manager，X8=间接结构返回地址（不是反编译所示 X0=out/X1=Manager）。结果结构 +0x00 pointer、+0x08 size、+0x10 valid byte；调用方栈上从 SP+8 开始。

|entry|BL|ret|语义|
|---|---|---|---|
|01D5042C|01D50448|01D50464|有效时返回 pointer，否则 0|
|01D50468|01D50484|01D504A4|有效时返回 pointer，否则 0|
|01D504A8|01D504E0/01D50508|01D50528|有效时返回 size，否则 0|

第三个包装函数以 P(P(0x537D558)+0x10)+0x3E4 的 u32 值是否等于 1 分支，但两个分支均调用同一选择器并返回 size。尚未证明该状态的业务名；四个 BL 均是访问接口而不是磁盘 I/O。绝对 VA 0x5574040 对应 Ghidra 坐标；NSO module-relative 需要减 0x100000。

## 两个 Main 内嵌生成调用点

028355C0 和 028359E4 都读取 Main backend VTable+0x20，BLR 返回指针，保存到 X19。随后独立生成前两段 Hash，ADD X8,X19,#0x5B3,LSL#12; ADD X0,X8,#0xD50; BL 0278EF80。第二路径 02835A50 RET；第一路径继续进行 02705554 调度。确认两条路径使用相同 Main 内嵌布局，不能据此推断独立 Personal 已同步。Main backend Getter +0x20 的具体字段及两个完整函数入口仍需原版重定位和 CFG 证据。
