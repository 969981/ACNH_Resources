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


## 2026-10-13 BottomsTex 原生 FRES 结构及纹理分流突破

26 个 wmdlt ERROR #36 已通过 26 个真实底层 FRES 与 2 个成功模型对照复核：Switch v9 的 FRES+0x28 FMDL 指针为零，无 FMDL/FSHP/FVTX，但在 FRES+0x1000 包含独立 BNTX。3 个原始纹理测试及所有 26 个源的实际 PNG 批处理均已通过；总计 104 张可真实解码的 PNG，已经纳入 Unpack 和永久 Release。

正确有效 L3 统计为 **252 已测原始源、879 媒体文件（82 GLB + 745 PNG + 52 WAV），773,026,137 字节**。原 26 个错误只有 GLB 几何导出不适用，不是坏资源；保留历史审计但将 Model 的有效媒体类进一步拆为 geometry GLB 和 texture-only PNG。

[底层对照+修复说明](BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md) · [按源哈希修正后的有效报告](../derived/3.0.3/media_bottomstex_corrected/coverage.json) · [Issue #21](https://github.com/969981/ACNH_Resources/issues/21)。


## 2026-10-14 第四轮 L3 资源转换实际执行及发布

- [12 个新源分片与累计审计](https://github.com/969981/ACNH_Resources/actions/runs/38427348253) 均成功，新增 300 个此前未测的 Model/Layout/BWAV 原文件，源路径/文件大小/输入与输出 SHA 均核对。
- 新产物 **132 GLB + 609 PNG + 40 WAV = 781**；200/200 Model 源有 GLB 或 PNG 实际输出，47/60 Layout 源有 BNTX 贴图，40/40 BWAV 输出有效 PCM WAV。
- **累计 552 个互不重复原始媒体源，214 GLB + 1354 PNG + 92 WAV = 1660 个真实输出**，1,244,272,410 字节。已测仍无 BNTX 目标的 Layout 达 41 个。
- [当前覆盖率报告](../derived/3.0.3/media_iteration4_cumulative/coverage.json) · [媒体输出索引](../derived/3.0.3/media_iteration4_cumulative/media_index.csv) · [详细技术报告](UNPACK_MEDIA_L3_ITERATION4.md)。
- 已使用 [17 附件的永久 GitHub Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-iteration4-20261014) 分卷发布 781 个新媒体文件及全部源／输出 SHA-256。注意此为 L3 **样本扩容**，并非全部 103400 原文件已完全转换。

## 2026-10-14 UI2D/BWAV 第五轮完成

- 从 41 个以前无 BNTX 的真实 Layout 资源成功转换 41 份 BFLYT 和 21 份 BFLAN v9 JSON，共 254 个 pane，全部源文件 SHA 对齐；尚有 12 个 FCPX 叶子未解（Issue #25）。[导出报告](../derived/3.0.3/ui2d_41/summary.json)。
- 8 个新 BWAV 哈希分片均通过原始源和 PCM WAV SHA256 核验，新增 120 个 WAV，BWAV 累计 212/1146 已测，仍有 934 未测。
- 全 L3 媒体实测 672 个唯一原始源，214 GLB、1354 PNG、212 WAV，合计 1780 个媒体文件、1,983,963,504 字节。[有效媒体覆盖](../derived/3.0.3/media_bwav120_cumulative/coverage.json)。
- 新 120 WAV 发布为 [长期 GitHub Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-120-next-20261014)，8 个分卷及 SHA256SUMS。
- 完整文档：[第五轮原生 UI2D 和 BWAV 解包](UNPACK_UI2D_BWAV_ROUND5.md)。41 个 Layout 已在此前的 552 源计数内，不能重复统计为新测媒体源。


## 2026-10-14 第六轮：FCPX font refs、UI2D 语义关系、再 120 PCM WAV

- 12 个未知 FCPX 叶子经真二进制验证仅 2 种内容，文件中有效记录 9/11 个字体资源名称引用；已经有 source SHA 校验和独立 JSON。**字形与字体替换规则仍未解码**，Issue #25 保持开放。
- 修复 fnl1 名称表偏移基准；41 个布局共 254 pane、22 个材料条目、57 个部件条目、22 个 cnt1 控制区块，6/6 字体名、29/29 动画目标完成静态交叉引用。
- 21 个 BFLAN 拆出的 50 个轨道与 134 个实际关键帧，生成 956 个**非原生数学曲线采样值**，不意味着实际游戏 UI 的渲染等效验证。
- 第六轮新处理 120 个 BWAV，累积音频 332/1146 已测，还剩 814 未测；媒体累计 792 个唯一源，214 GLB、1354 PNG、332 WAV 共 **1900 个有效媒体文件**、2,559,147,310 字节。
- [技术报告](UNPACK_FCPX_UI2D_BWAV_ROUND6.md) · [累计 L3 媒体结果](../derived/3.0.3/media_bwav240_cumulative/coverage.json) · [8 个新增 WAV 长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-240-total-20261014)。原始 103400 源的结构扫描不等于 100% L3 语义转换。
