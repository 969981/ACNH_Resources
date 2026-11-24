---
title: ACNH 3.0.3 R119 - Save dispatch and nested hash
tags: [ACNH, reverse-engineering, save, ARM64, R119]
status: static-evidence
---

# R119 保存调度、Main 内嵌校验与离线样本对账

关联 [[50-R118-Save-Hash-Getter-Callers]]。R118 首次 CI 失败为地址大小写 KeyError，修复 d12ebdb 后专项 CI 45335129014 成功。实际下载 Artifact 14893257893，SHA-256 3e2fcd7ea0fe40dde7d41d67c592a591d38881b523365c115cc2168fa7faf81e。以 ELF/Ghidra VA 为统一地址坐标；运行时 Main 相对地址须另行换算。

## 直接调用
- `02837970`: `02835F18`, `028361C8`
- `02838430`: `028360A4`, `028363E4`
- `02838E10`: `028360C0`, `02836400`
- `02839940`: `02835F78`, `0283620C`, `02836448`
- `0283A1B0`: `02835FA8`, `02836250`, `0283645C`
- `0283B370`: `02836470`
- `0283AA30`: `02836040`
- `028C29B0`: `00DC8ADC`
- `028CB2A0`: `028C6C7C`, `028C700C`, `028C7160`, `028C72BC`, `028C7674`, `028C77E0`, `028C7B0C`, `028C7C34`, `028C7D54`, `028C7EB4`, `028C7F70`, `028C8024`

14 个普通 writer BL、12 个公共保存 BL、1 个上层 callback BL，逐条从原始字节重算 signed imm26；不等同于完整调用图。00DC8ABC 检查 PTR_DAT_04BB89B8 指向对象，调用 028C29B0，再更新 DAT_0557E208+8 与自身 +0xD8；状态枚举仍未知。

## Main
028402A0 = 81 13 81 52 MOV W1,#0x89C；028402A4 = A1 07 A0 72 MOVK W1,#0x3D,LSL#16；028402AC BL 006F6900。第二段长度 0x3D089C，结束于 0x5B3D50。

027B3AD0 生成前两个 Hash，并调用 0278EF80(main+0x5B3D50)。后者展开八个固定步长 0x74A40 的 Personal 形状内嵌块，每块两段 Hash；尾部 Hash 0x958F50。第 5、6、7 等块部分偏移在 C 中以 LAB 标签呈现，当前为源码支持的结构推导，待机器码逐项验证。不把内嵌生成 Hash 冒充 02840270 独立验证项，也不认定其等于真实外部 personal.dat 内容。

|slot|hash 1|hash 2|
|---:|---|---|
|0|0x5B3E60|0x5EB930|
|1|0x6288A0|0x660370|
|2|0x69D2E0|0x6D4DB0|
|3|0x711D20|0x7497F0|
|4|0x786760|0x7BE230|
|5|0x7FB1A0|0x832C70|
|6|0x86FBE0|0x8A76B0|
|7|0x8E4620|0x91C0F0|

## Profile
028C29B0 的 mode 2 使用 param_1+0x1A9/AA/AB，mode 1 使用 param_1+0x188+slot*4 的 [1..3] 字节。零值生成区块 Hash，非零清空整个 0x23020（含 Hash）；随后生成外层 Hash。02842D10 是独立块 Hash 生成器。三个区块业务原名仍未确定。

## 公共保存链
028C29B0 -> 028CB2A0 -> 02701810 / 02701270 / 027014C0 路径拼接；028CB670 比较同尺寸已有缓冲区，观察到 CRC32 与逐字节比较并跳过指定区间（调用方给出 {0,0x100}）。返回 0 的路径执行 0x100 Header 相关操作；非零路径调用 026EB5C0 后进行数据文件和 0x300 Header 文件的后续操作。CRC32 用于比较路径，不是普通 MurmurHash3 数据区校验。路径参数 mode 0/1/2 和文件索引见 evidence.json，不将 mode 直接命名为 SaveProc 原版枚举。

CloudIsland 索引 7/8/9 的路径生成函数支持，但 028C29B0 的这 12 个调用仅覆盖索引 0–6，不足以证明云岛文件实际写入长度及校验函数。

## 验收和离线样本
`python Scripts/acnh303_r119_save_dispatch.py --prior r118.zip --out artifacts/r119`

可选本地已解密完整数据缓冲区：`--sample /local/main.dat --kind main`，仅输出 hash 对账 JSON，不修复、不写回、不上传样本。区分 validator、generator_only 与 conditional（合法清零候选）。无实机样本时 runtime_verified=false。下一步：完整普通调度函数 CFG、云岛真实路径及校验、实际样本对账。
