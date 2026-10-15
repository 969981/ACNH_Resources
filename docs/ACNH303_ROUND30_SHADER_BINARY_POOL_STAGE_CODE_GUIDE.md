# ACNH 3.0.3 R30 — BNSH Program → VS/FS Binary Code → Reflection 静态证据链

日期：2026-10-15。独立研究分支：`feat/acnh303-round30-bnsh-codepool-bindings`。本轮在 R29 已确认的 38 个原始 BNSH（R27 4、R28 24、R29 10）基础上恢复 Shader Binary Pool 和编译后二进制代码引用。同时执行 R30 新增 48 个 Model/Layout/BARS 原始资源提取。原始 NCA 与 main.elf 均保持只读，未合并至 `3.0.3`。

## 1. 来源、真实验收与复现

- 原始 BNSH 输入来自三轮 GitHub 永久 Release 的真实 Layout 数据分卷（R27、R28、R29），通过 SHA256SUMS 与此前 BNSH 逐源 SHA 双重核验：**38 个成员／25 种不同的 SHA**。
- [Native 完整成功工作流 #38662766756](https://github.com/969981/ACNH_Resources/actions/runs/38662766756)；`scripts/test_acnh303_round30.py` 包含合成数据边界测试（**合成数据只用于测试，不作为任何真实证据**）。
- [R30 48 新原始资源成功工作流 #38662545630](https://github.com/969981/ACNH_Resources/actions/runs/38662545630)；[R30 实际资源永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r30-48-real-media-bnsh-20261015)，包含六个真正的 Model、Layout、Sound 数据分卷、覆盖清单、source_delta、Release SHA 复核和 SHA256SUMS。
- 可重跑的脚本：`scripts/acnh303_round30_shader_pool.py`、`scripts/acnh303_round30_code_members.py`、`scripts/acnh303_round30_stage_reflection_link.py`。
- 完整输出：`derived/3.0.3/r30_native_shader_pool/pool_crossrefs.json`、`code_members.json`、`stage_reflection_links.json`。它们是原始内容派生的可检索结构化证据，不包含编辑或改写的游戏 Shader。

## 2. 原生 Shader Binary Pool 的证实和边界

从每个 `grsc` 内现有可验证的 binary_pool_ptr 找到大小为 0x20 的原生 memory-pool 元数据；检查 `memory_pool_property`、`memory_size`、`memory_pointer` 并要求整段位于原始 BNSH 文件边界内。本轮：

| 真实原生证据 | 结果 |
| --- | ---: |
| BNSH 原始样本 | **38/38** |
| 有边界有效 Binary Pool 的样本 | **38/38** |
| GRSC Variation / 对应 Program | **207** |
| Binary Pool 内以 `78 56 34 12` 起始的成员候选 | **287** |
| Program `+0x68` 的原始 Object 结构 | **207**，各自 256 字节，位于 Pool 外、且观察到的字节均为零 |
| `+0x68` 可证明就是可执行 GPU Shader Code | **0**，不能这样推断 |

例如真实 BNSH SHA `388ee5f5f201ad2c88757e0203ebad74240f019cbf79ce13bd4c453d754501bb` 的 Binary Pool memory 范围 **`0x8000..0xE000`**，从 `0x8000` 和 `0x8D00` 等实际地址找到编译后代码候选。相邻候选长度由真实字节边界得出，区分代码大小字段与到下一个魔数的分片大小。不得将 magic 本身当作完整 GPU ISA 解码。

## 3. Program → Vertex/Fragment 直接代码链（本轮核心成果）

实测 ShaderInfo 阶段候选结构，在这批原始 BNSH 的 **binary-code** 形态下：

- Program `+0x08`：Vertex Stage 记录的真实文件指针；
- Program `+0x28`：Fragment Stage 记录的真实文件指针；
- Stage `+0x10`：**直接代码指针**，要求目标位于 GRSC 声明的 Binary Pool 内、起始为 `78 56 34 12`；
- Stage `+0x18`：对应二进制代码字节长度，必须大于零且指针加长度不超过 Pool/file 尾部；
- Stage `+0x1C`：仍保留未知 metadata uint32，不根据其数值猜测具体 GPU Slot；
- 源数组计数字段 u16 在这批 binary code Stage 为零；**不能将其误解为 Stage 无 Shader Code**，真正代码通过上述直接指针/长度取得。

| 原始逐 Program 交叉验证 | 本轮实际结果 |
| --- | ---: |
| Program ↔ Parent Variation / Reflection | **207/207** |
| Vertex Code Pointer → Pool 真实二进制 | **207/207** |
| Fragment Code Pointer → Pool 真实二进制 | **207/207** |
| Program ↔ Vertex+Fragment 直接代码引用 | **414** |
| 代码长度恰好到下一个 `78 56 34 12` magic 边界 | **365/414** |
| 需要继续分析 padding/长度差异的引用 | **49** |
| 不同 Vertex 原始代码 SHA-256 | **16** |
| 不同 Fragment 原始代码 SHA-256 | **27** |

具体可复核例：同上 SHA 的 BNSH 内，Program 文件偏移 **`0x240`**（576）。Vertex Stage 记录 **`0x2E0`**（736），其原始代码指针 **`0x8000`**，长度 **`0xD00`**（3328），代码 SHA-256 为 `260c199817cb20bb0ad005add7d3e3f290f641caff1cbe906c8f669ef952bc43`。Fragment Stage 记录 **`0x320`**（800），指向 **`0x8D00`**（36096），长度 **`0x600`**（1536），代码 SHA-256 为 `b17539a21485985d8b76fe7085a685e429f40c3f30aba02f63d8e2a92ede34c6`。上述均为从实际文件切出的字节范围和哈希。

另外 49 条 Stage code 的声明长度不等于到下一个 magic 的全部间隔，但该声明的代码字节范围本身**依然在 Binary Pool 中有效**；只报告两种不同的长度证据，不擅自覆盖字段。

## 4. Code SHA ↔ Shader Reflection Resource Name 对照

`scripts/acnh303_round30_stage_reflection_link.py` 用精确的 `(source_member, source_sha256, program_file_offset)` 身份，独立把两种解析器得到的 Program 结合，检查两种 Stage 的代码和 R29 的 `_DIC` 名称同属同一个 Program。不可仅按名称相同猜测 Shader 对应关系。

已证实名称和对应的**不同代码 SHA 数量**：

| Stage | Reflection 字典内容 | 关联的不同原始代码 |
| --- | --- | ---: |
| Vertex | `uConstantBufferForVertexShader` | 16 |
| Vertex | `aVertexIndex` | 11 |
| Vertex | `aPosition` | 5 |
| Vertex | `aTexCoord` | 4 |
| Fragment | `uConstantBufferForPixelShader` | 27 |
| Fragment | `uProceduralShape` | 8 |
| Fragment | `o_Color` | 27 |
| Fragment Sampler | `uTexture0` | 25 |
| Fragment Sampler | `uTexture1` | 23 |
| Fragment Sampler | `uTexture2` | 19 |

这些不是 GPU 实际 Descriptor Bind Point、Sampler Slot 或材质 PNG 路径。**静态关联已到原始编译后 Shader Code 字节，但是 NVIDIA Shader ISA 反汇编、Material→Variation 运行时选择和 GPU Binding 映射仍待恢复。**

## 5. R30 实际新原始资源解包

选源：`scripts/acnh303_round30_select.py` 完整 Git tree + SHA(path) 排序，排除 R19 全量 L3 清单，以及 R27 40、R28 224、R29 80 个各自原始 Source Delta。缺失、类别错或重复均失败，不能再重复抽相同文件。

| 类别 | R30 新原始源数量 | 实际新输出 |
| --- | ---: | --- |
| Model | **24** | 同媒体归集 |
| Layout | **12** | BFLYT/BFLAN JSON 55、FCPX 字体引用 9、无损 BNSH **8**（268,568 字节） |
| BARS | **12** | PCM WAV **221**、原生 AMTA v5 **221** |
| Model + Layout 核心媒体 | **36** | **7 GLB + 123 PNG = 130**，7,312,241 字节 |

36/36 个 Model/Layout 新源全部有真实可验证的媒体输出（本轮无 `no_target_leaf`）。新增 BNSH 的 **8 个**为本轮新提取样本，**暂未加入本章以上 38 个历史 BNSH Native Program 总量**；后续 R31 可将它们纳入相同解析、检验增量效度。

### R30 后累计覆盖

| 资源 | 已测试 | 仍未测试 |
| --- | ---: | ---: |
| Model | **2,012** | **58,154** |
| Layout | **696** | **264** |
| BARS | **492** | **1,204** |
| 独立 BWAV | **1,146** | **0** |

累计核心媒体 **9,124**，其中 **560 GLB + 7,418 PNG + 1,146 独立 WAV**，来自 **3,854 个**已测试核心媒体原始源；另外 BARS 累计 **5,438 PCM WAV 和 5,421 份原生 AMTA v5**。BARS 输出与独立 BWAV 严格分开统计。

## 6. R31 实际待突破

1. 把 R30 新提取的 8 个 BNSH 纳入旧 38 个的 Native 静态链、重新计 unique hash，并比较 vertex/fragment 编译字节。
2. 对 49 条长度与下一个魔数位置不同的 Stage 引用，独立区分 padding、嵌套结构及真实 code-size，不能使用魔数切分代替正式 Shader Code 长度。
3. 继续研究 NVIDIA 编译后二进制和 Shader Reflection Resource Name 对应的具体 GPU binding slot。
4. 在游戏实机只读验证 R26 的 `0x285D10 / 0x286160` Native 加载消费者、Material → Shader Variation 的真正选择与这些 Program/代码 SHA 对应关系。
5. **R31 新选源器必须排除 R19、R27、R28、R29、R30 所有已测原始路径**，尤其是本轮 `derived/3.0.3/r30_cumulative/source_delta.jsonl.gz` 的 48 个源，绝不能直接重跑 R30 选源器虚增转换总数。
