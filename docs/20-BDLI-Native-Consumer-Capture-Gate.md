---
title: ACNH 3.0.3 · BDLI Native 消费者取证门禁与 GDB 只读观测
aliases: [BDLI Native Consumer Evidence Gate, LBLI Runtime Capture]
tags: [ACNH, 3.0.3, BDLI, LBLI, Native, GDB, SHA256, provenance]
status: static-source-verified-native-not-captured
---
# BDLI · 静态 LBLI 与原版消费者不能混同

关联 [[12-R51-Real-Wave-Gaps]]、[[14-Model-BDLI-Real-Original-Wave]]、[[13-Historical-SHA-Ledger-R41-R90]]。

## 本轮真实 CI 结果 · 2026-11-23

- [PR #62](https://github.com/969981/ACNH_Resources/pull/62) 已合并，[Actions #45181279917](https://github.com/969981/ACNH_Resources/actions/runs/45181279917) 成功并发布原始源与 Native 缺口报告。
- 实际读取 `BDLI/String/CNzh/STR_CategoryName.bdli.zs`：**3,118 原始字节**，压缩源 SHA-256 为 `77fd5c37b4d4a069b98343c2f08d31275da9e52dfc24cbe0941c967c24e1572e`；Git blob 验证通过。
- 原版解压后有 **224 个 LBLI 区段**，严格校验 BDLI v2 目录/边界/区段 SHA。本轮现场没有真实游戏 GDB 会话，实际 CI 强制生成 `native_status=NOT_CAPTURED`、`native_runtime_parity_verified=false`。
- 回归测试已阻止伪造 Native 结果、混合 Build/Session、错误 PC/RVA、缺失寄存器等。仍需真实游戏消费者链路才能升级。

## 真源现状

目前 BDLI 来源身份账本已纳入 **44 / 36,708**；可以静态读取原始 `BDLI/String/CNzh/STR_CategoryName.bdli.zs`、Zstd 解压、验证原始 Git blob/SHA-256、BDLI v2 头、LBLI 每段偏移与 SHA-256。

**这并不能证明原版游戏采用何种表 ID/哈希查找、语言回退、控制码消费，甚至不能确认假定的运行时消费者地址。** 当前没有真实 GDB 原版会话观察数据，Native 结果应为 `NOT_CAPTURED`。

## 实装内容

- `Scripts/acnh303_bdli_native_consumer_gate.py`：真实 original `.bdli.zs` → Git blob/SHA → Zstd → BDLI v2 → LBLI directory/sections/byte hashes，产生可审计的来源静态报告；
- `Scripts/acnh303_bdli_gdb_observer.py`：**仅用于附加到真实 3.0.3 游戏的 ARM64 GDB**。需要事先独立找到候选函数 RVA，并读取实际 Build ID / main 模块基址 / ELF SHA-256。没有已经验证的函数 RVA 时不能启动观测；
- 同一次会话中候选断点记录 PC、RVA、x0–x7、x8、x19–x21 的寄存器快照，不读取玩家敏感内存，不进行游戏业务内存写入。GDB 软断点可能暂时改写断点指令；
- 离线门禁会验证单会话、构建身份、PC=main base + RVA、寄存器完整性、事件顺序、观察日志 SHA；**即使所有格式检查通过，也只允许返回 `CANDIDATE_UNATTESTED`**，不会自动声称已证明 BDLI Native 消费者。

## 未来如何取得真正 Native 证据

1. 从同版可核实 main/Build ID 逐条找出原版 **BDLI loader、LBLI identifier 字段读取、查找、语言回退、字符串控制码消费**的实际函数，不可拿任意调用 RVA 伪装为消费者；
2. 在真实游戏同一会话中，记录被打开的资源名/语言及源哈希、触发前后的参数、返回值、LBLI ID、具体解码文本/控制码、语言回退实际分支；
3. 记录真实调试器原始日志、source SHA、游戏 build、module base、PC、session ID 与复现步骤；不要用测试 JSON、静态 ELF xrefs 或函数猜名冒充现场证据；
4. 只有经独立人工及字节级交叉验收，才能另建有真实测试数据的消费者映射；此脚本**不提供自动 Native=true 开关**。

## Windows / PowerShell + ARM64 GDB 示例

以下值必须来自用户当前的**真实游戏进程**及可信的 Native 反汇编，不可直接复制示例地址。

```powershell
$env:ACNH303_MAIN_BASE = "<actual-main-base-in-hex>"
$env:ACNH303_BDLI_RVAS = "<verified-rva-1>,<verified-rva-2>"
$env:ACNH303_BDLI_SESSION_ID = "<actual-session-id>"
$env:ACNH303_BDLI_BUILD_ID = "<actual-build-id>"
$env:ACNH303_BDLI_ELF_SHA256 = "<real-main-elf-sha256>"
$env:ACNH303_BDLI_CAPTURE_PATH = "D:\\captures\\acnh303-bdli.jsonl"
# 在已连接原版 ARM64 游戏的 GDB 中：
# source Scripts/acnh303_bdli_gdb_observer.py
```

采样后可离线验证：

```powershell
python Scripts/acnh303_bdli_native_consumer_gate.py `
  --root . `
  --source BDLI/String/CNzh/STR_CategoryName.bdli.zs `
  --capture "D:\\captures\\acnh303-bdli.jsonl" `
  --out "audit/bdli-native-observation.json"
```

注意 `--capture` 是 **可选** 的：CI 没有真实游戏输入时只验证源和静态结构，强制 `NOT_CAPTURED`。即使传入结构完整的 JSONL，仍不能靠自报字段证明它真实来自游戏，需要保存原始调试器可核查链路。

## 项目验收边界

- 本 PR 不增加 BDLI 的 44 条来源身份证据，也不声称 L3/Native 新成功；
- 只为后续真正 Native 动态取证建立可复现采样协议、假证据拦截及真实静态样本审计。
