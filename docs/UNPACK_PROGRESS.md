# ACNH 3.0.3 — 实施进度与证据

> 记录时间：2026-10-13。此文件里的阶段状态是**已证实**而非预期。

| 阶段 | 状态 | 证据 |
| --- | --- | --- |
| P0 源目录、脚本、AGENTS | done | 3.0.3 根目录 `scripts/`、`AGENTS.md`、`README.md` |
| 234 BCSV + 275 BYML | tested/published | `Unpack/<NCA>/1/Bcsv,AnimationInfo,Stage`；manifest 记录 |
| 中文 Dialog/LayoutMsg SARC+MSBT | tested/published（2 个源归档） | `Unpack/<NCA>/1/Message` |
| 上述首次累计 | **511 源 / 1,153 个真实产物** | `Unpack/_meta/manifest.json`（注意 summary.json 仅最后一次单文件任务） |
| Model/Layout/Effect/Shader/Sound/EventFlow 各真实样本 | tested（6 个样本） | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385132200> |
| 第二轮 19-shard 全目录资源 | started/not yet validated | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385428097>，PR #2；不要把队列中任务算完成 |
| 新增完整 Git 树清单 | **done — 103,400 RomFS / 10.42 GB；7 ExeFS** | `scripts/inventory_acnh303.py` + `.github/workflows/acnh303-inventory.yml` |
| BDLI 全语言对话逻辑解析 | planned（U14） | 36,708 份 `.bdli.zs`，Zstd→BDLI/LBLI 已做真实样本魔数探测 |
| BFRES → glTF/GLB | planned | 需要真实 3D 模型测试 |
| BNTX → PNG/KTX2 | planned | 需要 ASTC/BCn/swizzle 审计 |
| EventFlow 完整可读脚本 | in progress | 现有二阶段脚本仅图节点/Actor/参数 JSON，未证明所有文件解析成功 |
| Audio → WAV、PTCL、Shader | planned | 已有格式识别/索引，不是多媒体全解 |
| 完整覆盖 + 持久 GitHub Releases | planned | U12/U13 尚未执行 |

下一步：已建立 [103,400 文件的全量基线](UNPACK_BASELINE.md)。要把 BDLI（上一版 19-shard 漏掉）也加入批量矩阵；然后对照真实源总数、文件类型分布、潜在同名碰撞，再根据 19-shard 执行日志维护每格式的缺口清单。任何阶段只有真实样本、全组输出统计与 SHA-256 均有证据才能更新为 done。

若 `Unpack/_meta/summary.json` 显示 `source_count=1`，那仅代表最近一次 `--file` 范围；不能覆盖累计 511 的事实。正式总表由 `manifest.json` 与全量 Git 树索引 join 汇总。

## 2026-10-13 全量 Actions 执行补录（已验收）

- **103,400 / 103,400** 源文件按 sha256/size 对齐；24 个原始一级目录全部覆盖；missing=0、extra=0、duplicate=0、size_mismatch=0。
- 原始 36 shard 批处理 [Run 38388960509](https://github.com/969981/ACNH_Resources/actions/runs/38388960509) 有 1,242 个失败，保留历史记录；详见 `derived/3.0.3/asset_batch_runs/`。
- 重新解析 **全部 36,708 个 BDLI**、**全部 877 个 EventFlow**、**五个尾字节填充的 BARS** 后，[Run 38390897730](https://github.com/969981/ACNH_Resources/actions/runs/38390897730) 的有效合并状态为 `converted=2,105; partial=101,295; failed=0`。
- 完整逐源有效 manifest 已发布：[`effective/source_run_manifest.jsonl.gz`](../derived/3.0.3/effective/source_run_manifest.jsonl.gz)；[覆盖明细](../derived/3.0.3/effective/coverage.json)。
- U05 的 EventFlow 图结构阶段已完成 **877/877**，但可读脚本反编译未全量验收；U14 已完成 BDLI 原生结构，无完整语义；U06/U07/U08/U09/U10/U11 仍有大量 L3 工作。
- **严禁把 101,295 个 partial 写成完整解包成功，也严禁将 Actions Artifact 当成永久发布**。具体限制见 [执行报告](UNPACK_EXECUTION_2026-10-13.md)。

## 2026-10-13 媒体 L3 扩容执行摘要

- 12 新分片 GitHub Actions [#38415265992](https://github.com/969981/ACNH_Resources/actions/runs/38415265992) 全成功，新增 216 个真实源文件。
- 与前一轮 36 个独立样本累积，当前实测 252 个互不重复源文件，**775 个有效媒体输出（82 GLB / 641 PNG / 52 WAV）**，校验后的数据量 770,411,492 B。
- [媒体覆盖率与失败原因](../derived/3.0.3/media_scaleout_audit/coverage.json) 使用真实 103,400 文件 inventory，并分别报告候选总数、已测、成功、不支持及未测数量；不改变前面的 L0–L2 源文件清单。
- BFRES 26 个 BottomsTex 原生 decoder 错误统一 Error #36；详情见 [原生错误日志](../derived/3.0.3/media_scaleout_diagnostics/bfres_errors.json)，独立调查 [#21](https://github.com/969981/ACNH_Resources/issues/21)。Layout 的 28 个 no_target_leaf 不代表错误 PNG。
- 12 个媒体分片和 SHA256SUMS 已做 [长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-scaleout-20261013)。详情见 [扩容执行报告](UNPACK_MEDIA_L3_SCALEOUT.md)。未测试的源不算 converted。
