# ACNH 3.0.3 — R28 剩余 Layout / BARS / Model 原始资源提取与 BNSH Native 对照

日期：2026-10-15。基线：R19 全量累计 + R27 40 个增量源。专用分支：`feat/acnh303-round28-backlog-bnsh-structure`。**此章记录实际方案与验收条件；未取得通过的源/结果不得预写为成功。**

## 1. 为什么选这个队列

R27 实际运行后，尚未 L3 专项测试的原始资源：
- Model 58,338；
- Layout 348；
- BARS 1,288；
- 独立 BWAV 0。

本轮优先 Layout/BARS 并适度加大 Model 实际转换规模：

| 类别 | 实际新源目标 | 独立分片 | 每分片 |
|---|---:|---:|---:|
| Model | 128 | 8 | 16 |
| Layout | 48 | 4 | 12 |
| BARS | 48 | 4 | 12 |
| 总计 | 224 | 16 | — |

与之前选择器不同，`scripts/acnh303_round28_select.py` 的排除集合为：

```
Model/Layout = R19 core media 3,558 + R27 delta (16 Model + 12 Layout)
BARS         = R8/R9/R10/R14/R16/R17/R18 316 + R19 BARS 80 + R27 delta BARS 12
```

严格使用 Git tree 全路径 + `SHA256(path)` 稳定排序，而不是 GitHub API 部分列表；读回新旧所有 SHA/path，发现重复或文件库存计数偏离就拒绝执行。**不得再次使用 R27 的原样选择器重新选源**。

## 2. Native BNSH 研究：真正比较上一轮的四个原始 shader

研究对象：R27 [长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r27-real-unmeasured40-20261015) 里经逐文件 SHA 验收的 `Layout` 内嵌 BNSH，共 4 个（175,632 原始字节）。本轮以官方同分支仓库 Release 原始输出分卷而不是截断的文本 header 构造样本：

1. 下载历史 `r27-data-Layout-{0,1}.tar.gz` 与 `SHA256SUMS.txt`，先重新哈希检查历史源；
2. 从 **R28 这次** 48 个 Layout 新原始包中独立解出全部真实 `BNSH` 叶子，保持源和成员身份；
3. 使用 `scripts/acnh303_round28_bnsh_structure.py` 逐字节解析/审计两个集合：文件魔数 `BNSH`、版本原始字节、`0x0C` BOM、头部未知字段原值、边界内候选 u64 文件内偏移、可能的魔数 token 和 `uTexture` / `uConstantBuffer` 等原生字符串匹配；
4. 对所有 member 计算 SHA，标出跨 R27/R28 完全相同成员及候选分组；全部字段无证据处保持 `candidate` / `unproven`，不盲猜业务 C++ 类或 shader binary block；
5. 把原生审计文件 `derived/3.0.3/r28_native_bnsh/structure.json` 和新提取的 BNSH binary 分别持久化。

注意：R26 `0x25001C` 已经确认 `IsRelocated()→GetRelocationTable()→Relocate()`，`0x285D10` 可静态证明访问初始二进制块与 `uTexture%d`、`uConstantBufferForVertexShader` 名称；**上述 Runtime ELF 证据不能替代当前四个真实 BNSH 子块的原生格式解析**。内部偏移候选不代表已经复原 GPU/GLSL 等价 Shader。

## 3. 真正的执行/验证流程

入口：`.github/workflows/acnh303-round28-unpack.yml`，按回归 → 16 原始源转换分片 → 全量对账 → 下载本轮分卷二次 SHA 核验 → 与真实 R27 BNSH 内容比较 → Release/原生报告存档。

- Model：真正 BNTX 像素 PNG 或真实 FMDL 几何 GLB，缺少媒体目标保留 `no_target_leaf`；
- Layout：媒体 PNG 和 BFLYT/BFLAN/FCPX JSON 各自审计，再无损写入内嵌原始 BNSH，**结构解析不计入 PNG 输出数**；
- BARS：成员级 BWAV → 可播放 PCM WAV，AMTA v5 → 无损原始二进制；无法播放的成员保留失败、绝不充当 WAV；
- 每个原始源保留 `source_path`、文件大小、原始 SHA；每份衍生物保留可实际读回的 SHA256/字节长度和来源；
- 由 `scripts/acnh303_round28_reconcile.py` 检验 103,400 的不可变原始库存，R19+R27 全部已测源与本轮 224 个源没有交集；
- `scripts/acnh303_round28_release_verify.py` 下载并复核 16 个实际数据分片；通过才能上传长期 GitHub Release，分卷附 `SHA256SUMS.txt`。

## 4. 成功后的剩余数仅以实际报告回填

如果全部 224 个唯一源实际测试，剩余未测试量预期为 Model **58,210**、Layout **300**、BARS **1,240**、BWAV **0**。模型贴图是否成功、音频新 WAV 数、BNSH 新样本数及其内容重合比例均不得事先假定；只有验收后的 `coverage.json` 以及 BNSH native JSON 可用。

成功后 R29 选源器必须同时排除 R19、R27 和 R28 的 `source_delta.jsonl.gz`；不能直接再跑 R28。


## 5. R28 最终真实完成与 SHA 发布（2026-10-15，已验收）

**最终通过**：[GitHub Actions #38659968059](https://github.com/969981/ACNH_Resources/actions/runs/38659968059)，所有回归、16 源转换分片、224 新源累计审计、Native R27↔R28 BNSH 原始分卷对照、全部输出文件再次 SHA 验证、永久 Release 发布都成功。此前第一次完整转换 run `#38659762223` 的媒体结果本身通过，但由于此期间新写文档导致 git push 非 fast-forward；后续已使用 `git fetch + rebase` 修复报告提交，最终以成功 run 为准。

### 新转换的事实数字

| 输出或状态 | R28 本轮实际数量 | 确认性质 |
| --- | ---: | --- |
| 未曾测试的原始源 | **224** | Model 128 + Layout 48 + BARS 48，R19 和 R27 无重叠 |
| Core media GLB | **22** | 原生模型几何有效 GLB |
| Core media PNG | **662** | 原生纹理实际 PNG |
| 本轮总 Core media | **684** | 22 GLB + 662 PNG，26,423,183 字节 |
| BARS 内嵌有效 PCM WAV | **591** | 与独立 BWAV 分开统计 |
| BARS 原生 AMTA v5 | **591** | 原始字节，不假装播放参数已解码 |
| Layout BFLYT/BFLAN JSON | **271** | 结构输出，非渲染等效 |
| Layout FCPX 字体引用 JSON | **51** | 引用，不代表完整字体替换逻辑 |
| Layout 新 BNSH 原始文件 | **24** | 1,118,888 字节，字节无损 |
| 有真实 GLB/PNG 的 Model/Layout | **171/176** | 其余 **5** 个保留 `no_target_leaf` |

### 本轮过后累计情况

- Model 已测试 **1,956 / 60,166**；仍未测试 **58,210**。
- Layout 已测试 **660 / 960**；仍未测试 **300**。
- BARS 已测试 **456 / 1,696**；仍未测试 **1,240**。
- 独立 BWAV 已测试 **1,146 / 1,146**；未测试 0。
- 核心媒体总计 **8,765**，其中 **548 GLB + 7,071 PNG + 1,146 独立 WAV**，测过的核心媒体原始源累计 **3,762**。
- BARS 另有累计 **4,703 有效 PCM WAV** 和 **4,686 个原生 AMTA v5**；不得和核心独立 BWAV 合并原始源。
- 目前 Model/Layout 已测但没有已验证 GLB/PNG 的源有 **143**，需要按异常/无目标单列，不能和“尚未测试”混合。

### Native：28 个真实 BNSH 的实际结构交叉核验

报告：[`derived/3.0.3/r28_native_bnsh/structure.json`](../derived/3.0.3/r28_native_bnsh/structure.json)。基于历史 R27 真实 Release 两个 Layout 分卷（先重新做 SHA256SUMS 校验）以及本轮 4 个 Layout 数据分卷提取的全部原始文件，而非人工构造的假样本：

| 原始 BNSH 字节字段 | 28/28 文件字节观察 | 当前证据水平 |
| --- | --- | --- |
| `+0x00` | `BNSH` ASCII | confirmed magic |
| `+0x08..0x0B` | `0B 01 02 00` | raw version bytes confirmed |
| `+0x0C..0x0D` | `FF FE` | raw BOM confirmed |
| `+0x0E` | `0C` | alignment exponent candidate confirmed as raw byte |
| `+0x14` (u16 little-endian) | `0` | raw flags candidate |
| `+0x16` (u16 little-endian) | `0x0060` | **first block offset candidate**, matches R26 API semantics but offset target contents not fully validated |
| `+0x18` (u32 little-endian) | 全部 `0 < value < file_size` | relocation section offset candidate |
| `+0x1C` (u32 little-endian) | **28/28 equals exact BNSH member byte length** | very strong file-size evidence |

跨版本相同文件内容证据：
- R27 4 个原始成员：**3 个不同 SHA**。
- R28 新 24 个成员：**18 个不同 SHA**。
- 两轮合计 28 个成员：**20 个不同 SHA**。R28 的 18 种内容中有 1 种已存在于 R27；故相对于 R27，新增 **17 种真正新内容**。
- 全部 28 个成员有 **3 组 SHA 完全相同的重复资源组**，可用 JSON 中的 `duplicate_content_groups` 精确追到其 Layout 原始路径。文件共享不能直接推出游戏运行时 GPU Program 完全同对象。

本轮成员内的 `uTexture` 和 `uConstantBuffer` 等真实 ASCII 标记搜索均产生候选，但不视为运行时实际绑定和完整 Shader Variation 解码。下一轮应在字节层验证 `GetFirstBlock` 的 `+0x60` 指向内容与 BNSH relocation entries，再建立 Variation → Program → uniform/texture 的类型关系，而不是扩大无约束字符串扫描。

### 交付

[永久 Release：acnh303-r28-layout-bars-model-bnsh-20261015](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r28-layout-bars-model-bnsh-20261015) 共 **21 个附件**：16 个原始实际媒体/Native 数据压缩分卷、`coverage.json`、`source_delta.jsonl.gz`、`r28-native-bnsh-structure.json`、`r28-release-verification.json` 和 `SHA256SUMS.txt`。

未来 R29 选择器必须排除 R19+R27+R28 全部来源（`derived/3.0.3/r28_cumulative/source_delta.jsonl.gz`），严禁复用当前固定 R28 选择器把已测的 224 个源再次记成增量。原始 103,400 文件的 NCA 内容与主分支 `3.0.3` 均未修改。
