# ACNH 3.0.3 R33 — 历史失败 BFRES 的真实重放、240 新原始源、64 个 BNSH 与完整剩余清单

日期：2026-10-15。独立分支 `feat/acnh303-round33-backlog-failed-source-native64`，不合并 `3.0.3` 主分支，不修改原始游戏文件。所有完成数量来自原始 SHA、GitHub Actions 现场执行、对完整源清单的差分及真正输出文件的二次校验。

## 一、历史唯一 `failed` 已精确定位且原始字节复现

| 证据项目 | 结果 |
| --- | --- |
| 原始 RomFS 路径 | `Model/CharactorAnimation20000.Nin_NX_NVN.zs` |
| 原始压缩体大小 | **2,418,203 字节** |
| 原始 SHA-256 | `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a` |
| 历史状态 | `failed`（BFRES→GLB 的外部 converter error） |
| 原始嵌套成员 | `.../_members/output.bfres` |
| 真实解压的 BFRES 字节 | **6,528,992 字节** |
| BFRES 原始头 | `FRES`，NintendoWare Switch v9 候选头 `465245532020202000000900fffe0300` |
| 原始成员中 `FSKA` 4 字节标识出现 | **406 次**（不是已解析的动画数量） |
| `FMDL` / `FVTX` / `FSKL` 标识出现 | 各 **0** |
| 现有转换器重新运行 | `failed`，与历史一致 |
| 原始字节与历史哈希比较 | **完全一致** |

历史定位记录：`derived/3.0.3/r33_failed_source/source.json`。
原始 git-tree 完整 Model **60,166** 路径中明确找到**精确**该文件，见 `git_tree_locator.json`。之前因 Git Sparse Checkout 与深层 `git ls-tree` 选源细节产生的中间 CI 失败不是对原始资源不存在的证据，最终已使用 `git checkout --ignore-skip-worktree-bits` 从精确 blob 恢复，真实字节与 R19 源审计 SHA 核对一致。

重放脚本 `scripts/acnh303_round33_failed_replay.py`；原始字节结构报告 `derived/3.0.3/r33_failed_source/byte_replay_analysis.json`；[单文件真实重放成功执行的 Actions #38672897735](https://github.com/969981/ACNH_Resources/actions/runs/38672897735)。本句的“执行成功”意指**已成功重现历史转换器错误并提交诊断**，**绝不意指该 BFRES 已导出合法 GLB**。

### 对故障性质的严谨归因

此次 BFRES 内含大量 `FSKA` 标识，而没有 `FMDL`（模型）或 `FVTX`（顶点）标识。结合原始文件名 `CharactorAnimation20000`，属于**动画为主且未观察到可直接转为网格 GLB 的模型几何**的高置信候选，而不是“找不到压缩资源”。目前的 L3 模型几何工具只负责输出带有真实 POSITION accessors 的 GLB；该输入应当保留无损 BFRES 并进入 FSKA 骨骼动画专用 Native 解析器。不可把 `FSKA` 字节出现的 **406** 次当作 406 条经结构校验的动画，更不能用假网格填充 GLB 或直接把历史的 `failed` 改成 `converted_media`。

**当前状态：原始 BFRES 已解压且失败原因被限缩；骨骼动画完整解码尚未完成。**

## 二、R33 新增 240 个完全未测试原始资源的实际解包

[R33 12 分片完整 L3 成功 Actions #38672661553](https://github.com/969981/ACNH_Resources/actions/runs/38672661553)；[永久资源 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r33-240-real-media-bnsh-20261015) 包含十二个经过二次 SHA 校验的资源数据分卷、`coverage.json`、`source_delta.jsonl.gz`、逐文件输出验收和 `SHA256SUMS.txt`。

**选源规则：** `scripts/acnh303_round33_select.py` 以完整真实 Git HEAD 源树为底，严格排除 R19 全部原始媒体、此前独立 BARS 的全部来源，以及 R27 40、R28 224、R29 80、R30 48、R31 40、R32 88 个 SHA 审计的独立新源，按原始完整路径 SHA 排序。本轮 12 个分片为 Model **4×20**、Layout **4×20**、BARS **4×20**；不把旧源重跑算作新进度。

| R33 新增指标 | 实测结果 |
| --- | ---: |
| Model 原始来源 | **80** |
| Layout 原始来源 | **80** |
| BARS 原始来源 | **80** |
| **合计新的原始来源** | **240** |
| GLB（真实几何） | **14** |
| PNG（真实像素解码） | **728** |
| 核心有效媒体 | **742**（15,591,336 字节） |
| Layout BFLYT / BFLAN 结构 JSON | **428** |
| Layout FCPX 字体引用 JSON | **85** |
| 原始无损嵌套 BNSH | **42**（1,742,744 字节） |
| BARS 真实 PCM WAV | **921** |
| BARS 原生 AMTA v5 字节 | **922** |
| Model/Layout `converted_media` 原始来源 | **155** |
| Model/Layout `no_target_leaf` 原始来源 | **5** |

注意：**42 个新 BNSH 尚不包括在本轮 64 个 Native 分析样本里**；属于未来 R34 的新样本。**AMTA 的字节提取成功也不等于 AMTA 播放行为语义恢复。**

### 本轮新增 BARS 特别异常：精确定位 1 条不是 PCM 的成员

在真实 R33 的 80 个 BARS 源内，发现 1 条 `BWAV` 音频转换器返回失败（经独立真实 Sound 数据分卷报告重放审计）：

| 项目 | 真实证据 |
| --- | --- |
| 原始文件 | `Sound/Resource/Env_TourCounterDemo.bars` |
| 原始 BARS 大小 | **296 字节** |
| 原始 SHA-256 | `50195465110f6de17ebdf6942b9ca940e49efe0482082fc06bbefc58b285ac04` |
| 子成员 | `BWAV`，`asset_index=0` |
| 成员源偏移 | **0x80**（128） |
| 原始成员字节 | **168 字节** |
| 成员 SHA-256 | `7e1712e42cbbe183f5cf3c89cc4455f1dd327c52f354d8ff1f290f817076c0fa` |
| Metadata | `AMTA`，偏移 28 |
| vgmstream 返回值 | **1** |
| 实际错误 | `failed opening .../asset_0000.bwav` |

真正的 PCM WAV **921**，无损 AMTA **922**，故 **不可声称全部 922 个 BWAV 均已完成 PCM 解码**。此例可能需要查证文件是否含占位声音、零帧/异常短轨道或编解码器变体，不能仅凭 168 字节长度判定其为损坏文件。

证据脚本 `scripts/acnh303_round33_bars_failure.py`；机器报告 `derived/3.0.3/r33_failed_source/one_bars_decode_failed.json`；[单条 Sound 失败经真实 4 分片来源审计的 Actions #38673338088](https://github.com/969981/ACNH_Resources/actions/runs/38673338088)。

## 三、R33 后真正未进行 L3 测试的每一个原始源文件

从 103,400 行权威原始清单、R19 及此前各轮源 SHA 清单逐路径去重：

| 范围 | 源总数 | 已进行 L3 测试 | **还没进行 L3 测试** | 覆盖率 |
| --- | ---: | ---: | ---: | ---: |
| Model | 60,166 | **2,148** | **58,018** | 3.570% |
| Layout | 960 | **812** | **148** | 84.583% |
| BARS | 1,696 | **608** | **1,088** | 35.849% |
| 独立 BWAV | 1,146 | **1,146** | **0** | 100% |
| **Model+Layout+BARS** | **62,822** | **3,568** | **59,254** | — |

[全部 59,254 个未测原始路径 SHA 验证 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r33-exact-remaining-source-backlog-20261015)：
- `untested_after_r33.jsonl.gz` 精确 **59,254 条**，每条含原始路径、分类、原始字节大小。
- `tested_without_valid_core_media.jsonl.gz` 精确列出 **152 个已测试但无 GLB/PNG 的 Model/Layout 原始源**，其中 **151 个 `no_target_leaf`、1 个上述历史 `failed`**。这 152 条不能重复算到未测试清单。
- `status_before_new_round.json` / `status_after_r33.json`：原始 24 个顶层目录与不同格式的统计、各类别覆盖。
- `SHA256SUMS.txt`：整套 JSON/GZ 数据 SHA。对应成功 Actions [#38673251654](https://github.com/969981/ACNH_Resources/actions/runs/38673251654)。

R33 后累计核心媒体 **10,198**，由 **578 GLB + 8,474 PNG + 1,146 独立 BWAV WAV** 构成。另单列 BARS 累计 **6,682 有效 PCM WAV + 6,666 原生 AMTA v5**，不得与独立 BWAV 源重复汇总。

## 四、R33 Native：11 个新增 BNSH 已加入，原始 64 个样本全部核验

输入来自 R27～R32 六轮真实 Layout Release、逐件分卷 `SHA256SUMS` 核验，仍然只解析原始字节，不改写游戏。新 11 个来自 R32 的无损嵌套 BNSH，和此前 53 个合计 **64 个原始成员、36 个不同 SHA**。**[R33 64 BNSH Native 成功 Actions #38672453106](https://github.com/969981/ACNH_Resources/actions/runs/38672453106)**。

| 静态二进制验证 | R32 | R33 |
| --- | ---: | ---: |
| 原始 BNSH 成员 | 53 | **64** |
| 不同内容 SHA | 31 | **36** |
| Variation/Program 关联 | 267 | **324** |
| Vertex+Fragment 原始代码指针 | 534 | **648** |
| Binary Pool NV magic 候选 | 373 | **455** |
| 不同 Vertex Code SHA | 20 | **20** |
| 不同 Fragment Code SHA | 32 | **34** |
| 声明代码长度精确到下一段 magic | 469 | **570** |
| 实际全零间隙引用 | 65 | **78** |
| 所有零间隔合计 | 219,392 字节 | **259,328 字节** |

数据位于 `derived/3.0.3/r33_native_shader_pool/`：
`pool_crossrefs.json`、`code_members.json`、`stage_reflection_links.json`、`code_gap_audit.json`。源码在 `scripts/acnh303_round33_*.py`；实际 Program→Vertex/Fragment→Binary Pool Code SHA→Reflection 原始信息完整，但 **NVIDIA GPU ISA、Material→Variation 实例归属、Descriptor/GPU Binding Slot 与具体 Draw 调用仍未实机闭环**。不能仅凭 `uTexture%d` 等静态资源字典名宣称运行时贴图绑定索引已恢复。

## 五、R34 下一阶段准确优先级

1. **动画专门解析**：以 `CharactorAnimation20000.Nin_NX_NVN.zs` 中真实无损 `output.bfres` 为样本，从 FRES→FSKA 结构恢复真实骨骼动画记录、曲线/关键帧、绑定 Skeleton、必要时导出 glTF animation。只有真实结构解析和可播放动画校验后才能将历史失败转为动画原生解析成功；不要要求无网格动画生成 GLB 几何。
2. **异常 BWAV**：独立检查 `Env_TourCounterDemo.bars` 的 168 字节 BWAV、AMTA 和 vgmstream 支持边界；保留一个未解 PCM 的成员，不虚报成功。
3. **资源继续扩大覆盖**：R33 后 Layout 还 **148** 个、BARS 还 **1,088** 个；优先继续全部 Layout 的批量测试、BARS 音轨转换，Model 有 **58,018** 个待测，应采用更大的有审计分片矩阵、持久 SHA 原始来源清单。
4. **Shader**：R33 新增的 **42 个无损 BNSH** 再纳入 64 样本验证，运行时仍须从真实 Material、Variation 与 GPU Binding Slot 的同一实例建立只读证据。
5. **R34 新源选取必须再排除 R33 实际 240 个路径**（`derived/3.0.3/r33_cumulative/source_delta.jsonl.gz`），并保留 R19/R27～R32 的所有 SHA 去重规则，不能直接重用 R33 选源器把重复文件当成新成果。
