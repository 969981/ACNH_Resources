# ACNH 3.0.3 R27 — R19 未测试原始资源增量提取和 BNSH 无损提取

日期：2026-10-15。工作分支：`feat/acnh303-round27-unmeasured-media-bnsh`，基于 R26 研究成果单独建立。不修改任何 RomFS 或 ExeFS 原始字节，也不向 `3.0.3` 主分支合并。

## 1. 真正的剩余未测原始资源（已验证 R19 累计 Manifest）

| 原始格式组 | 原始总数 | R19 已做 L3 测试 | 未测试 |
| --- | ---: | ---: | ---: |
| Model `.zs` | 60,166 | 1,812 | **58,354** |
| Layout `.zs` | 960 | 600 | **360** |
| Sound `.bars` | 1,696 | 396 | **1,300** |
| 独立 `.bwav` | 1,146 | 1,146 | **0** |

完整 L0 原始目录有 103,400 项；BDLI 36,708 项已解压成结构但未完成文字/本土化语义。EventFlow 877 源已解析部分图结构，但 Native 事件实际执行消费者待闭合。音效、粒子、Shader 等格式依然不能说“全部提取”或“全部解析”。

R19 主媒体累计 3,558 个源，7,982 个已验证的媒体输出（522 GLB + 6,314 PNG + 1,146 独立 WAV）；R19 BARS 396 个独立原始容器、3,988 个 PCM WAV、3,971 个原生 AMTA v5。两类声音统计必须分开，不得二次累加独立源数。

## 2. R27 真实处理批次

新的去重选择器 `scripts/acnh303_round27_select.py` 只使用 **R19 已验收累计数据** 和完整 Git tree，按全原始路径 `SHA256(path)` 排序并分片，从 L3 尚未测试的候选中选择：

- **16 个 Model**：2 × 8 个；有效 GLB geometry 或 BNTX 像素 PNG 均经现有实际 native 转换器验证。纯纹理 FRES 只能产 PNG，不冒充 GLB；
- **12 个 Layout**：2 × 6 个；独立导出 BNTX→PNG、BFLYT/BFLAN/FCPX 结构 JSON，并将嵌套 BNSH 字节直接**无损**导出，三类分别审计；
- **12 个 BARS**：2 × 6 个；逐 member 尝试 BWAV→PCM WAV，以及原始 AMTA v5 无损导出，不猜测播放/循环字段；
- 独立 BWAV 0 个（R19 已测 1,146/1,146）。

**合计 40 个新原始文件、六个独立分片。计划不等于已经验收成功。** 所有源保持已测未测去重，单个失败、缺媒体叶子的源保留其状态；不将 `no_target_leaf` 算为已转换媒体。

## 3. 为什么特别加入 Layout 内嵌 BNSH

R26 从真实游戏 ELF 证实两个资源初始化链存在：BNSH Embedded Header → `GetAlignment` → `memcpy` → `BinaryFileHeader::IsRelocated` / `RelocationTable::Relocate` → `GetFirstBlock` → 纹理、常量缓冲区资源处理。

R19 的 Layout UI2D 报告已记录内嵌 `bgsh/__ArchiveShader.bnsh` 多次标记为 `not_ui2d_target`。原生 Shader 编译后的 BNSH 成员此前并非全部按成员 SHA 独立导出。R27 针对此缺口：

- 从真实 `.zs`→SARC 叶子读取 `BNSH` 魔数；
- 使用成员真实索引 + 安全 basename 确保多个 shader 输出不相互覆盖；
- 保存未修改过的原始 `.bnsh` 成员字节，独立记录源 SHA、叶 SHA、成员路径、原始长度与输出 SHA；
- 不声称解编译出的 GLSL、SPIR-V、GPU program、纹理绑定或可编辑 Shader。

`scripts/acnh303_round27_bnsh_extract.py` 是 **无损字节提取器**，不是 GPU Shader Decompiler。

## 4. 审计、交付

- `scripts/acnh303_round27_select.py`：源库存/历史去重/固定切片；
- `scripts/acnh303_round27_bnsh_extract.py`：原始 BNSH 分离；
- `scripts/acnh303_round27_reconcile.py`：R19 历史源、库存、当前六分片、BARS 两份对偶报告和 Layout BNSH/UI2D SHA 联合对账；
- `scripts/acnh303_round27_release_verify.py`：重新从**本次 Actions 数据工件**读取各个真实文件的 hash/size；只有通过才创建长期 Release；
- `.github/workflows/acnh303-round27-unpack.yml`：regress → 6 unpack → reconcile → publish；
- 汇总文件：`derived/3.0.3/r27_cumulative/coverage.json` 和 `source_delta.jsonl.gz`，**仅记录 R27 新增，历史 R19 累计与新分片必须分开**。

所有新源及输出均保留原始 provenance、SHA256。若解码失败，将其记录为失败或 partial，保留待研究。**未完成时不预填转换媒体数量、BNSH 叶子数量或 Release 下载地址。**

## 5. 后续真正未完成的部分

单次小批次无法替代 58,354 个模型的全部后续处理。还有非媒体 BFRES/FSKA/FMAA 动画、特效 PTCL、Shader BNSH 反编译或进一步结构分析、AMTA v5 播放语义、BDLI 字符串完整语义，以及 EventFlow Native dispatch 等长期工作。除非每种资源都有原始字节/转换输出/可复现结果，不能写成完成。
