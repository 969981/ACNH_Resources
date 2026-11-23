---
title: ACNH 3.0.3 · 尚未入账 Model / BDLI 原始字节分片与真实 L3 复验
aliases: [Unrepresented Model BDLI Real Shards, ACNH303 R45 R90 Next Source Wave]
tags: [ACNH, 3.0.3, Model, BDLI, BFRES, BNTX, GLB, SHA256, L3, Native, CI]
status: ci-pending
---
# Model / BDLI · 原始缺口的真实分片处理

关联 [[13-Historical-SHA-Ledger-R41-R90]]、[[14-Model-BDLI-Real-Original-Wave]]、[[19-Real-BFRES-GLB-R19-Replay]]、[[20-BDLI-Native-Consumer-Capture-Gate]]、[[21-R45-R90-Recovery-Model-L3-BDLI-Native-Snapshot]]。

## 起点：原始身份证据不等于转换证据

现有权威主分支数据：**39,317 / 103,400** 原始文件有逐源 SHA 证据；**64,083** 暂未纳入。Model 为 **35,411 / 60,166**（尚未纳入 **24,755**），BDLI 为 **44 / 36,708**（尚未纳入 **36,664**）。

这些是来源身份，而不是完整解包成功、GLB 转换成功或 Native 语义成功。R50–R62 的原版图标已有真实历史逐源 PNG，而不是还需要重复批量补证的全部模型。

## 这轮真正执行什么

新增 `Scripts/acnh303_uncovered_model_bdli_wave.py`、`Scripts/acnh303_uncovered_wave_ledger.py`、对应回归测试和 `.github/workflows/acnh303-uncovered-model-bdli-shards.yml`。

- 从完整 103,400 Git Tree 及正式 `source_ledger.jsonl.gz` 的**差集**出发，按原始资源路径 SHA256 的 64 个确定性分片划分；每个分片选 **8 Model + 24 BDLI**。
- 第一轮执行 **shard 0、1**，共 16 个尚未纳入的 Model 与 48 个尚未纳入的 BDLI，互不重复。Model 优先真实 `RoomMdl*/Idr*` 几何候选（不因为文件名就宣称它可生成 GLB）。
- 稀疏检出 64 个**真实的** 3.0.3 NCA 原始文件，逐个读取文件字节，验证 SHA256、Git blob SHA1、字节数与 Git Tree，不允许用静态生成的文件清单代替真实读取。
- **Model**：对每个大小安全的原始 `.zs`，调用现有 `Scripts/acnh303_media_l3.py`，使用发布 SHA256 校验的 `wmdlt` 或 `wimgt` 真实解压、提取、转换 BFRES/BNTX，重新校验每个生成 GLB 的 glTF mesh/primitive/accessor、PNG 的 CRC 与完整像素解码，并记录新输出 SHA256。失败与不支持的叶子必须保留状态，不能填补假媒体。
- **BDLI**：真实 Zstd→BDLI、LBLI 目录偏移/边界/区段字节哈希、原始压缩 SHA/Git blob。只判定 L2 静态结构，不判断 Nintendo 语言查找、字典语义、控制码或 fallback。
- 所有结果保留真实 producer run ID、分片 ID、选中时的来源身份基线、每源 SHA256、每份产物 SHA、转换器状态、失败原因、Native=false。
- 仅在 PR 的真实 CI 通过**来源差集、64 个真实 Git blob 和至少一个媒体输出、一个真实 BDLI 静态样本**后，才允许主分支持久化单独分片报告，再显式触发原历史 SHA 全局合并器去重并更新 `coverage.json`。

## 统计门禁

| 证据轴 | 仅允许报告什么 | 禁止混淆 |
|---|---|---|
| 来源身份 L0 | 真正读取过的 SHA256 + Git blob + bytes，去重新增原始路径 | 不按每个 GLB/PNG/LBLI 区段加来源数 |
| L1/L2 | Model 叶子、BDLI LBLI 的原始字节与结构核验 | 不把容器头解析当成可运行的媒体 |
| Model L3 | 本次实际 converter 生成、重新校验真实 GLB/PNG 的文件数及源数 | 单张 PNG 或部分 GLB 不代表整份 BFRES/FSKA/FMAA 完整一致 |
| Native | `NOT_CAPTURED`（没有真实 3.0.3 同会话调试日志） | 不能将任何静态 LBLI/Xref/伪 GDB JSON 当真实游戏消费者 |

有失败或不支持的 Model / BDLI 原始文件即使已完成 byte SHA 验证，仍可作为 L0 来源已处理记录，但必须分别保留 `no_output` 或 `failed`，不伪称成功转换。

## 使用和复现

```bash
# GitHub 工作流的第一部分，仅选择不在历史 SHA 账本里的真实源
python Scripts/acnh303_uncovered_model_bdli_wave.py select \
  --root . --shard 0 --shards 64 \
  --plan plans/shard_0.json --sparse plans/shard_0.sparse

# 稀疏拉取实际原始 NCA blob 后，必须传入真实的解码器
python Scripts/acnh303_uncovered_model_bdli_wave.py run \
  --root . --plan plans/shard_0.json \
  --out audit/unrepresented/shard_000 \
  --report wave_reports/source_wave_shard_000_run_12345.json \
  --wmdlt /path/to/wmdlt --wimgt /path/to/wimgt

# 只读反伪造回归
python -m unittest discover -s Scripts -p 'test_acnh303_uncovered_model_bdli_wave.py' -v
```

实际 CI 中 `GITHUB_RUN_ID` 必须为真实 GitHub Actions ID；手工构造的 JSON/临时数字不会被认可为真实 CI 来源。命令仅用于说明参数，运行时是否完成应以 GitHub Actions 的可检查原始日志和产物为准。

## Native 消费者后续条件

继续使用 [[20-BDLI-Native-Consumer-Capture-Gate]] 的原始 GDB 只读观测协议。只有获取**真实 3.0.3 Build ID + ELF SHA + ModuleBase + 调用链 + 相同会话的资源加载、LBLI id、返回值、语言回退/控制码数据**，才有资格升级 `native_runtime_parity_verified`。本 CI 无真实游戏进程，始终保留 false。

## 下一步

第一轮两个分片经过真实 Actions 核验、去重并持久化后，继续按 64 shard 的剩余来源身份缺口决定扩容批量，保持各分片不交叠和只处理以前未入账源。为避免大量转换器失败被隐藏，必须按 `converted_sources`、`no_output`、`failed`、`real_glb_files`、`real_png_files`、`LBLI_sources` 等独立口径报告。
