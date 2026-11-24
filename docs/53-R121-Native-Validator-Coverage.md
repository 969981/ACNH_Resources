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

输出 native_validator_tests.json、native_generator_tests.json、caller_windows.json、cloud_consumer_window.json、report.json。仅合成数据，不修改或上传真实存档。CI 前不宣称通过。
