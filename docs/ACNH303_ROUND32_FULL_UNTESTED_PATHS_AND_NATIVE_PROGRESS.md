# ACNH 3.0.3 R32 — 原始 103,400 文件未测试／已测试无媒体／Native 未闭合总表

日期：2026-10-15。独立研究分支：`feat/acnh303-round32-unmeasured-native-bnsh`。此文记录真实 GitHub Actions 执行、103,400 项权威 RomFS 源路径统计、R32 新 88 个原始文件实际解包，以及 R31 新 7 个 BNSH 与历史 Native 的交叉验证。不合并到主分支 `3.0.3`。

## 1. 先区分三种完全不同的“没解包”

1. **未做对应 L3 原始容器测试**（本轮可列出每一个源文件路径）：Model `.zs`、Layout `.zs`、Sound `.bars`。统计由 Git 原始完整文件树、源 Manifest、SHA、R19/之前 BARS 审计和 R27～R32 的逐源审计约束，不是估算。
2. **已经执行 L3 检测，但没有可验证 GLB/PNG**：必须保持原样 `no_target_leaf` / `failed`，不可记为“未测试”或“成功媒体转换”。该源也可能含非媒体文件，因此 `no_target_leaf` 不等于损坏。
3. **已经提取字节或结构 JSON，但原生语义不完整**：BDLI/LBLI 业务标识、EventFlow Action/Query 真实执行、AMTA v5 播放行为、FCPX 字体替换、BFLYT/BFLAN 渲染、BNSH GPU Shader 指令和 Material/Variation/GPU Slot。前两类靠 source manifest，第三类需要真实 ELF/实例级证据，不能从原始路径缺失率推断。

## 2. 权威 RomFS 103,400 原始文件目录

原始 source manifest 实际读取 **103,400 / 103,400** 行，跨 24 个一级目录：

| 一级目录 | 源数量 | 当前工程边界 |
| --- | ---: | --- |
| Model | **60,166** | BFRES/BNTX 等容器，仅一小部分经 L3 验收 |
| BDLI | **36,708** | 另有全量独立解包流水线，Native LBLI 语义未完全解释 |
| Sound | **2,848** | 包括 BARS 1,696 与独立 BWAV 1,146，另有其他音频相关文件 |
| Layout | **960** | BFLYT/BFLAN、FCPX 字体引用、嵌套 BNSH |
| EventFlow | **877** | 曾对全部 877 个源做提取及静态索引；Native 执行语义待证实 |
| Param | **637** | 参数资产，非本轮 L3 类别 |
| Swkbd | **235** | 独立资源域 |
| Bcsv | **234** | 另一格式解析流水线 |
| Stage | **168** | 场景／环境数据 |
| Message | **155** | 文本档案处理已存在 |
| AnimationSequence | **139** | 139 个 `.asb` 源，解释完整动画行为仍需另验 |
| AnimationInfo | **107** | 不是 Model 容器 |
| System | **93** | 系统资源 |
| 其它 11 个目录 | **73** | 分类库存存在 ≠ 已按 Native 语义完全解析 |

文件后缀分类中 `.zs` 为 61,289，`.bdli.zs` 为 36,708，`.bars` 为 1,696，`.bwav` 为 1,146，`.byml` 为 996，`.bfevfl` 为 875。某些子格式在其他流水线已单独处理，不得把不在本轮选择矩阵的文件全部宣称未解包。

## 3. R32 前后未做 L3 的原始源：真实文件名已逐一输出

| 类别 | 全量 L3 目标源 | R31 后已测试 | R31 后未测试 | R32 新测 | R32 后已测 | R32 后未测 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Model | **60,166** | 2,028 | 58,138 | **40** | 2,068 | **58,098** |
| Layout | **960** | 708 | 252 | **24** | 732 | **228** |
| BARS | **1,696** | 504 | 1,192 | **24** | 528 | **1,168** |
| 独立 BWAV | **1,146** | 1,146 | 0 | 0 | 1,146 | **0** |

最终精确剩余 **59,494 个 Model/Layout/BARS 原始文件**。由真实源 103,400 行减去对应类别已核验的各轮源清单，而不是“后缀看起来像已解包”。

独立正式下载：[R32 59,494 个未测源的 SHA 验证 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-exact-remaining-source-backlog-20261015)：
- `untested_after_r32.jsonl.gz`：**59,494 条可机器处理的完整原始相对路径＋category＋原始字节大小＋NOT_TESTED_IN_CORRESPONDING_L3_PIPELINE**；
- `tested_without_valid_core_media.jsonl.gz`：已测原始源但未产生有效 GLB/PNG，不再掺入未测清单；
- `status_before_new_round.json`、`status_after_r32.json`：目录级汇总、原始文件类型、SHA 列表摘要、实际 coverage；
- `SHA256SUMS.txt`：全部源清单文件的持久 SHA。

**另有 147 个曾接受 L3 测试但未产出核心媒体**，其中 146 个 `no_target_leaf`、1 个 `failed`。这类文件与上述 59,494 个未测试路径不同，不得合并报表。下一轮优先精确重测唯一失败源，并只对确认有可解析媒体目标的 `no_target_leaf` 追加 Native 解释；不可把它们整体定义为失败。

示例尚未测试文件：
- `Model/AccessoryGlassOval5UnderWater.Nin_NX_NVN.zs`
- `Model/AccessoryGlassOval6.Nin_NX_NVN.zs`
- `Layout/LCatalogBtn.Nin_NX_NVN.zs`
- `Layout/LCatalogCategoryA.Nin_NX_NVN.zs`
- `Sound/Resource/Bgm_Base.bars`
- `Sound/Resource/Bgm_Chime.bars`

这些只展示六条；**完整版见压缩清单，且经过独立验证全部 59,494 条路径不重复**。

## 4. R32 实际新增 88 个原始文件的转换

[真实源转换 Actions #38667751972](https://github.com/969981/ACNH_Resources/actions/runs/38667751972) 全部成功。R32 选源先排除 R19 媒体源集合与此前 BARS 全历史、R27 的 40 个、R28 的 224 个、R29 的 80 个、R30 的 48 个、R31 的 40 个 delta；每轮来源名称、SHA 和期望类别 cardinality 检查失败即停止。每个原始源只进一个分片，本轮 Model 40／Layout 24／BARS 24，全部为之前未测路径。

真实产出：

| 输出或状态 | R32 新增 |
| --- | ---: |
| 核心有效媒体 | **209** |
| GLB / PNG | **3 GLB / 206 PNG** |
| 核心媒体原始字节 | **4,816,743** |
| 有效独立 BARS PCM WAV | **229** |
| 原生无损 AMTA v5 | **229** |
| 原生嵌套 BNSH 字节成员 | **11**（**460,976** 字节） |
| BFLYT/BFLAN 结构 JSON | **113** |
| FCPX 字体引用 JSON | **26** |
| Model/Layout 原始源成功产媒体 | **62 / 64** |
| 已测试但没有媒体目标 | **2 / 64**（`no_target_leaf`） |

R32 新 11 个 BNSH **未再虚增到本轮 53 个 Native 历史样本**；应由 R33 的新增来源审计纳入。永久资产 [R32 新媒体实际字节 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-88-real-media-bnsh-20261015)，包含六个数据分卷、覆盖率、88 个新源的 `source_delta.jsonl.gz` 和逐件 SHA。

R32 后核心媒体累计 **9,456 = 564 GLB + 7,746 PNG + 1,146 独立 WAV**。BARS PCM WAV **另外累计 5,761**，原生 AMTA **另外累计 5,744**；不可加到独立 BWAV 的源测试数量里。

## 5. BNSH Native R32：新增 R31 七个成员的真正下游验证

R32 从 R27～R31 五轮原始真实 Layout Release，下载 SHA audited 样本，读取 **53 个成员、31 种不同 SHA**，并逐一验证：

- **267** 个 GRSC Variation 与 Program → Parent/Reflection 关联；
- 每个 Program 的 Vertex 与 Fragment Stage 指针分别对应真实 Binary Pool 字节，共 **534/534**；
- Binary Pool 内 magic delimiter 共 **373** 个成员候选；
- 不同 Vertex 代码 SHA **20**、Fragment 代码 SHA **32**；
- **469/534** 个声明长度和下一段 magic 边界吻合；
- **65/534** 个存在字节间隔，65 段全部为原始 `0x00`，累计 **219,392** 字节；
- 未发现声明代码长度跨越下一段 NV magic，仍未证实这些全零区的编译器对齐机制。

[实际 Native 验收 Actions #38667687544](https://github.com/969981/ACNH_Resources/actions/runs/38667687544) 已全部通过。
机器证据：
`derived/3.0.3/r32_native_shader_pool/pool_crossrefs.json`、
`code_members.json`、
`stage_reflection_links.json`、
`code_gap_audit.json`。

**运行时 Material → Variation → 真实 GPU Slot 仍然未证实**。在 R31 原始 ELF 的 `0x285D10 / 0x286160 / 0x24E3C0` 之后还需实际渲染会话的只读对象身份和寄存器证据；原生 shader 字节 SHA 与资源名称不自动构成 GPU Slot 所属关系。

## 6. R33 最优先的实际剩余任务

1. **库存／抽取**：继续从未测试的 58,098 个 Model、228 个 Layout、1,168 个 BARS 中分片转换，Model 可扩大分批以减少 58k 巨大积压；BWAV 已全部测试，无需再做重复转换。
2. **异常处理**：单独定位并复核 1 个原始失败源；另对 146 个 `no_target_leaf` 识别其是否只是没有 L3 对应媒体格式，不能盲目重跑成“修复完成”。
3. **Native BNSH**：把 R32 新 11 个嵌套 BNSH 加到已验证的 53 个成员里，恢复新的 Program、Shader Stage 与零区长度边界，追实际 Material/Variation/Binding。
4. **深层语义**：音频的 AMTA v5 native 参数、UI2D BFLYT/BFLAN 的真实渲染、BDLI/LBLI 语义、EventFlow 原生执行者仍待另做专项，不等同于路径清单 L3 未测试。
5. **严格防重复**：R33 新选源器还要排除 `derived/3.0.3/r32_cumulative/source_delta.jsonl.gz` **88 个新源**，和 R19、R27、R28、R29、R30、R31 既有原始记录一起用 SHA 校验，不得直接重跑 R32 的同一选择器计作新转换。
