---
title: ACNH 3.0.3 · R19 原始 BFRES 到真实 GLB 的独立复验
aliases: [R19 Real BFRES GLB Replay, Model L3 Pilot]
tags: [ACNH, 3.0.3, Model, BFRES, GLB, R19, L3, SHA256]
status: ci-verified-and-merged
---
# Model · 真正重新转换 BFRES→GLB 的小样本验收

## 真实复验完成 · 2026-11-23

[PR #61](https://github.com/969981/ACNH_Resources/pull/61) 已合并；[实际 BFRES→GLB Actions #45180483511](https://github.com/969981/ACNH_Resources/actions/runs/45180483511) 成功，Artifacts 内保存原始 SHA、转换 Manifest、真实输出 GLB 和复验报告。

| R19 真实原始 Model | 原始 .zs bytes | 新生成 GLB bytes | mesh | primitive | GLB SHA-256 |
|---|---:|---:|---:|---:|---|
| `RoomMdlMyDesignOutside10` | 9,056 | 5,496 | 1 | 1 | `9f083a212423f99a6a3323d0ea0f199f186a8f9033d4269fa29c8c7fd445d0f5` |
| `IdrDream01` | 9,706 | 7,296 | 2 | 2 | `23638e9f3502c3adb2575f1a82aa27887395258e9a75b69aa22ceb6b5c27d433` |
| `IdrObjNameBoardArt0Tag02` | 10,935 | 3,664 | 1 | 1 | `d93d740b76fede31537f86358ebaaa545b060e430c9a8987435b4199dc226f98` |
| `RoomMdlWindowWallArch4m` | 11,185 | 13,840 | 2 | 2 | `fa04eab74b6d57fda65acfef63f675f76533a0a4e76b6e96e3292803699b0342` |

**4/4 原始源当轮真实读取，4/4 实际生成有几何的 glTF2 GLB，4/4 新输出重新哈希并验证，0 转换失败。** 原始 Model 的 Git blob SHA 和 R19 发布 SHA 均吻合；该独立复验不会给原始来源身份账本增加新的路径。完整骨骼动画、shader/GPU、游戏运行时仍为未验证。

## 与历史 PNG 来源恢复区别

此前 [[18-R50-R62-Item-Native-PNG-Source-SHA]] 的 26,277 个原版图标是**历史 BNTX/BRTI PNG**，本轮没有重新解码，且不能证明完整 BFRES FMDL 模型已转换成 GLB。

本任务单独对历史成功记录中 **确实有 GLB 的 Model 原始来源**执行新一轮实测：

1. 下载真实 [R19 累计 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r19-animation-native-20261014) 的 `media_source_manifest.jsonl.gz` / `SHA256SUMS.txt` 并核验附件原始 SHA；
2. 在 3,558 条历史媒体原始文件中，只从具有确切 GLB 输出记录且源大小有界的 Model 文件中稳定选取 4 条；
3. sparse checkout **真实**原始 `.zs` 字节，逐源计算 SHA-256 和 Git blob SHA-1 与原始 Git Tree + R19 历史来源一致；
4. 下载经 SHA256SUMS 验证的 `nintoolbox` 二进制工具并使用 `wmdlt DECODE` 实际重新转换 BFRES → GLB；
5. 对本次真实生成的文件重新计算 SHA-256，解析完整 glTF 2.0 GLB 头/JSON、mesh/primitive/位置 accessor，拒绝空几何与假成功；
6. 保存成功及失败来源记录、转换器返回值、真实 GLB 和 SHA 验证信息。至少一个真实 GLB 成功，否则 CI 失败而不是预报新 L3 成功。

转换器实际版本与旧历史运行可能不同，因此本轮要求新输出自身结构及 SHA 一致，并不伪称它必然与 R19 历史 GLB 字节哈希完全相同。

## 边界

- 输出为真实 `L3_BFRES_GLB_CONVERTED_AND_REHASHED_IN_CURRENT_CI` 时，只证明样本的**几何媒体**可导出，不说明 FSKL/FSKA/FMAA、所有材质贴图、shader、物理、GPU 或 Nintendo 原生动画播放一致。
- 如果转换器不可用或没有成功 GLB，必须保留失败记录；不得拿静态解析 FRES 魔数冒充完成。
- 该工作流不修改已发布的 39,317 原始源身份账本，只产生独立、可验收的 Model L3 实测报告。
- 没有真实游戏运行时证据，Native 始终 `NOT_CAPTURED`。

## 脚本与工作流

- `Scripts/acnh303_r19_real_glb_replay.py`
- `Scripts/test_acnh303_r19_real_glb_replay.py`
- `.github/workflows/acnh303-r19-real-glb-replay.yml`

严格区分 [[14-Model-BDLI-Real-Original-Wave]] 中的静态来源验证、历史单张 PNG、真正的 GLB 输出和原版游戏 Native 消费者。
