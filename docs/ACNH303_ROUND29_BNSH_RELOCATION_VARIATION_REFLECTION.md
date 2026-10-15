# ACNH 3.0.3 — R29 原生 BNSH 重定位、Variation、Program 与资源字典研究

日期：2026-10-15。研究分支：feat/acnh303-round29-bnsh-relocation-reflection。

## 真实输入与交叉验证

R27 的两个 Layout 数据 Release 压缩分片含 4 个原始 BNSH 成员；R28 的四个分片含 24 个，共 28 个原始 BNSH / 20 种不同 SHA256。GitHub Actions 从各自永久 Release 下载原始成员、验证 SHA256SUMS，并将全部成员哈希与 R28 已审计的原始成员证据交叉核对。原始 103,400 项 NCA 不修改。

技术参考：
- https://epd.zeldamods.org/wiki/Common_nn::util
- https://nintendo-formats.com/libs/switch/binary.html
- https://github.com/maierfelix/bnsh-decoder/blob/master/BNSH.ksy

这些参考只决定候选结构。报告中的 verified 数量取自实际资源，而非格式文档预设。

## Native BNSH Header 与块链

全部 28 个真实文件 BNSH +0x16 = 0x60，指向具有完整 BinaryBlockHeader 的 grsc，nextRelativeOffset 链正确指向下一个 _STR 字符串池。28 个文件合计 28 个 grsc、28 个 _STR。BNSH +0x18 全部定位到真实 _RLT magic + 自引用相等的重定位表位置；+0x1C 全部是实际文件长度。该证据与 R26 的 IsRelocated → GetRelocationTable → Relocate 及 GetFirstBlock native 调用一致，不构成游戏实时渲染证明。

## 从 grsc 到 Shader Reflection 的静态链

- grsc 的 Variation 数量与有界 Variation 数组地址被解析；总计 165 条 Variation；
- 165 个可通过 Variation 指针定位的 Program，Program +0x70 Parent Pointer 均与对应 Variation 原始偏移一致；
- Program +0x78 的 165 个 Reflection Pointer 均有效；映射到 Vertex/Fragment stage；
- Reflection stage 的真实 _DIC 字典指针、entry count 和字符串节点得到检查；共 810 个资源字典对象。

结构化解出的名称，而非全文字符搜索：

| 字典类型 | 原始名称 |
| --- | --- |
| Vertex input | aVertexIndex、aPosition、aTexCoord |
| Pixel output | o_Color |
| Sampler | uTexture0、uTexture1、uTexture2 |
| Constant buffer | uConstantBufferForVertexShader、uConstantBufferForPixelShader、uProceduralShape |

其中 uTexture* 是 Sampler 字典项，尚不能直接解释为绑定到某张材质 PNG 的 GPU descriptor slot。也未完成 Program 的 GPU 机器指令反编译或 Shader Variant 游戏运行时选择。

## RelocationTable 真正恢复

28 个原始文件合计 168 个 Section 和 2,335 条 Entry。依据真实 Section region、entry index/count、连续 pointer count、non-pointer stride 和 8 字节指针宽度，找到 3,289 个文件边界内的待重定位指针字段位置，其中 2,874 个记录的原始偏移值非零且指向文件内部。其它并不意味着损坏，应继续分析文件外地址、非 file-based section 和空字段。脚本无内存写入行为。

报告和复现：
- scripts/acnh303_round29_bnsh_links.py
- scripts/acnh303_round29_summary.py
- scripts/test_acnh303_round29.py
- derived/3.0.3/r29_native_bnsh/full_graph.json （完整机器输出）
- derived/3.0.3/r29_native_bnsh/summary.json （可查 28 源与已证实绑定名字）
- .github/workflows/acnh303-round29-native.yml

## 不重复源的真正 R29 选源

R28 后尚未做对应 L3 测试的 Model 58,210，Layout 300，BARS 1,240，独立 BWAV 0。scripts/acnh303_round29_select.py 明确排除 R19 已测核心媒体 3,558、R27 的 40 个源增量与 R28 的 224 个源增量，另在 BARS 侧纳入 R8/R9/R10/R14/R16/R17/R18/R19 的完整历史 396 个 BARS 原始容器。检查跨轮 SHA/path 重叠、类别实际数量和完整 Git tree 目录，再执行 SHA256(path) 稳定排序。

R29 计划执行 Model 32、Layout 24、BARS 24 的 80 新原始源：实际新源统计应以 scripts/acnh303_round29_reconcile.py 与本轮实际 GitHub Actions 的结果为准。所有无法转换的 source 保持失败或 no_target_leaf 状态，不冒充媒体成功。

## 尚未解决

P0：由已复原 Program/Reflection 指针继续追 shader binary pool 到实际 VS/FS code 范围；恢复真正的 GPU binding slot 和 descriptor 索引。P1：与 R26 的 0x285D10 / 0x286160 Native 资源消费者运行时实例对照，并恢复游戏 Material → Variation 选择规则。P2：下一轮 R30 选源器还必须排除 R29 新增原始源清单，防止重测。


## 最终 R29 真实执行补录：80 个新源与扩展到 38 BNSH 成员（已通过）

### 两条分离执行链

- [R29 原始资源转换成功 Actions #38661602702](https://github.com/969981/ACNH_Resources/actions/runs/38661602702) 完成 6 个新源分片、R19+R27+R28 严格去重、SHA 累计审计、从实际工件重新验算、永久 Release；
- [R29 实际媒体 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r29-80-real-media-bnsh-20261015)，10 个附件：六个真正的 `r29-data-*.tar.gz`、`coverage.json`、`source_delta.jsonl.gz`、`r29-release-verification.json`、`SHA256SUMS.txt`；
- [R29 原生 38 成员扩展验收 Actions #38661854995](https://github.com/969981/ACNH_Resources/actions/runs/38661854995) 成功，再次下载 R27/R28/R29 三轮原始 Layout Release 分卷、逐个对照 SHA、解析并保存压缩后的可检索结果。

### 80 个新源的真实结果

| 原始源 / 转换结果 | R29 新增 | 说明 |
| --- | ---: | --- |
| Model | **32** | R19/R27/R28 之后未测原始路径 |
| Layout | **24** | 新原始布局 |
| BARS | **24** | 新音频容器 |
| GLB | **5** | 原始几何可验证 |
| PNG | **224** | 原始贴图可验证 |
| 嵌套 BARS PCM WAV | **514** | 与独立 BWAV 分开统计 |
| 原生 AMTA v5 | **514** | 精确字节提取，播放器语义未完成 |
| BFLYT/BFLAN JSON | **110** | 结构提取，非游戏端求值 |
| FCPX 字体引用 JSON | **21** | 静态引用 |
| 新 Layout BNSH 成员 | **10** | 360,664 字节，已纳入扩展 Native 分析 |

上述 Model/Layout 共 56 个原始源中，有 55 个得到有效 GLB/PNG，**1 个 `no_target_leaf`**，不冒充完整媒体转换成功。新增核心媒体 **229 = 5 GLB + 224 PNG**，有效媒体总字节 5,425,613。

### 扩展 R27/R28/R29 三轮真实 BNSH 的 Native 最终结果

新 10 份 BNSH 与旧 28 份合并、原始 SHA 检验后得到 **38 个原始成员、25 个不同 SHA**，意味着本轮 10 份新增成员只带来了 **5 种新的二进制内容**。扩展后的真正解析结果见 [`expanded_38_summary.json`](../derived/3.0.3/r29_native_bnsh/expanded_38_summary.json)：

| 结构 / 交叉引用 | 38 成员累计确认 |
| --- | ---: |
| `grsc` Blocks | **38** |
| `_STR` Blocks | **38** |
| GRSC Shader Variations | **207** |
| 文件内 Program 结构 | **207** |
| Program Parent 对应 Variation | **207/207** |
| Program Reflection 指针有效 | **207/207** |
| Reflection 资源字典对象 | **1,014** |
| `_RLT` Relocation Sections | **228** |
| `_RLT` Relocation Entries | **2,941** |
| 边界内可枚举指针字段位置 | **4,148** |
| 具有有效文件内部目标的字段 | **3,612** |

38 个文件的实际节点中 Vertex 和 Fragment Stage 都有源类型关联；资源字典中的 `aPosition`、`aTexCoord`、`aVertexIndex`、`o_Color`、`uTexture0/1/2`、`uConstantBufferForVertexShader`、`uConstantBufferForPixelShader` 和 `uProceduralShape` 都来自真正 `_DIC` 节点/原生长度前缀字符串验证。这证明 Native 结构中的**资源命名与静态引用关系**，并非已拿到实际游戏材质映射或 GPU shader 编码级反编译。

### R29 后累计的 L3 测试覆盖和剩余缺口

| 类别 | 已做对应 L3 测试 | 尚未测试 |
| --- | ---: | ---: |
| Model | **1,988 / 60,166** | **58,178** |
| Layout | **684 / 960** | **276** |
| BARS | **480 / 1,696** | **1,216** |
| 独立 BWAV | **1,146 / 1,146** | **0** |

累计核心媒体 **8,994**：**553 GLB、7,295 PNG、1,146 独立 WAV**，来自已测试 **3,818 个原始媒体源**。BARS 单独累计 **5,217 个有效 PCM WAV、5,200 个 AMTA v5**；不得和独立 BWAV 混为同一源。Model/Layout 已测试无有效核心媒体的源由此前 143 增至 **144**。

新一轮 R30 选源必须排除 R19 已测集合、R27 delta（40）、R28 delta（224）和 **R29 本次 `source_delta.jsonl.gz` 的 80 个原始源**。R29 选源器本身不会排除本轮自己，请勿原样重复执行并宣称新处理了 80 个源。

## 后续 Native 优先研究路径

P0：进一步追踪 Shader Program → Shader Binary Pool → 具体 Vertex/Fragment Code 的指针、长度和边界，再与 Reflection Shader Stage 关联；暂不生成无法确认语义的 GPU 指令假象。

P1：追 `nn::util` 重定位后的 Shader Variation 与真正 Runtime C++ 资源对象引用，将 R26 的 `0x285D10 / 0x286160` 初始化消费者与实际材质/纹理 index 绑定起来。

P2：实际启动游戏只读记录 Material → Shader Variation 选择，并对照 Resource Dictionary 关联的 GPU slot。静态读到 `uTexture%d` 与程序名不足以宣称渲染行为已经一致。
