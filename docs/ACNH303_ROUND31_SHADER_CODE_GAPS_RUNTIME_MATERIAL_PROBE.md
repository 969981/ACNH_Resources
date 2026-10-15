# ACNH 3.0.3 — R31 BNSH 46 样本、Code Length / Magic Gap 与 Material→Variation→GPU Slot 证据边界

日期：2026-10-15。独立分支：`feat/acnh303-round31-shader-length-material-gpu`。全部真实二进制为只读；不得将静态引用等同于 GPU 实机运行、绑定索引或 Shader 指令反汇编。

## 一、真实原始数据及复现

原始 BNSH 从四个**真实 GitHub Release** 获取：R27 4 个、R28 24 个、R29 10 个、R30 8 个，合计 46 个原始成员。各轮下载 Layout 压缩分卷并校验原始 `SHA256SUMS.txt`；R27+R28 的前 28 个进一步与 R28 `derived/3.0.3/r28_native_bnsh/structure.json` 原始 SHA 一致。R30 新增 8 个在本轮真实文件重新读取而非仅引用历史元数据。

实际执行代码：

- `scripts/acnh303_round31_shader_pool.py`：BNSH Binary Header/GRSC/Variation/Program/Reflection 与 native code pool 文件边界及 SHA；
- `scripts/acnh303_round31_code_members.py`：NV 原始 binary magic、Stage +0x10 pointer、+0x18 declared native binary byte length、完整代码字节 SHA；
- `scripts/acnh303_round31_stage_reflection_link.py`：只允许精确来源 SHA + 文件成员路径 + Program 偏移 join 对应 Reflection；
- `scripts/acnh303_round31_code_gap_audit.py`：从同一原始文件读取 stage code length 到下一段 NV magic 之间的**真正字节**并作逐项分类；
- `.github/workflows/acnh303-round31-native.yml`：源码语法、历史 SHA 来源、文件 byte-bound 校验、实测真实运行；
- 机器输出目录：`derived/3.0.3/r31_native_shader_pool/`（`pool_crossrefs.json`、`code_members.json`、`stage_reflection_links.json`、`code_gap_audit.json`）。

### R31 46 成员静态验证结果

| 校验指标 | R30 历史 38 成员 | R31 46 成员 |
| --- | ---: | ---: |
| 原始成员 | 38 | **46** |
| 内容完全不同的 BNSH SHA | 25 | **28** |
| GRSC Variation / Program | 207 | **237** |
| Vertex Stage Code link | 207 | **237/237** |
| Fragment Stage Code link | 207 | **237/237** |
| 两阶段代码链接 | 414 | **474** |
| Binary Pool 的 NV magic 分段候选 | 287 | **332** |
| 不同 Vertex Code SHA | 16 | **20** |
| 不同 Fragment Code SHA | 27 | **31** |

真实 Stage `+0x10` 指向 Binary Pool 内实际原始二进制，目标匹配 `78 56 34 12` magic。Stage `+0x18` 的 declared size（大于零）与真实代码字节在文件内；SHA 来自实际切片。Program → Parent Variation / Reflection 与 Stage Code 通过相同 Program 文件偏移链接。**GPU NVIDIA 指令语义和真实运行时 Shader 选择尚未恢复。**

## 二、历史 49 条 Code Length 差异的实测结论

以程序的 declared shader code length 与下一个 NV magic 位置比较。分别对 R27-R29 旧 38 成员和新增 R30 8 成员运行同一只读分析器。R31 合计：

| 原始 byte 验收 | 结果 |
| --- | ---: |
| 总 Stage link | **474** |
| 长度恰好等于到下一 NV magic 的距离 | **417** |
| 声明长度小于到下一 NV magic 距离 | **57** |
| 声明长度穿越下一 NV magic | **0** |
| 57 段差异间隙的原始内容 | **全部为 0x00** |
| 已验证的差异原始零字节总和 | **194,304** |
| 差异引用涉及不同 Code SHA | **10** |

历史 R30 的 414 条代码链接为 **365 相等 + 49 存在差异**；R31 扩展的 60 条中新出现 **52 相等 + 8 存在差异**。新增数据没有推翻已有边界，全部差异都是零填充区域，而不是检测到有效指令或越界。每条差异保存原始源 SHA、Program 文件偏移、Vertex/Fragment Stage、直接代码位置、声明长度、下一 magic 距离、带符号差值、Gap SHA、Gap 首末原始字节及 `gap_all_zero` 状态。

实测差异大小均为 256 字节倍数：**1280、1536、1792、2816、3328、3584、3840、4096、4352、4608、4864**，可支持编译后二进制在 Pool 中采用页面/子块填充的候选方向，但还**没有**看到编译器或 GPU 内存布局对齐调用实证，不能声称这些零区的设计用途已被完全证实。

## 三、原始 ELF 的 Material / Shader / GPU 绑定静态调查

只读输入为 `e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf`。重新 SHA-256 校验为 **83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180**，然后逐条 AArch64 4 字节指令检查直接 `B/BL` 跳转目标，输出真实 opcode、PC 和被调用位置前后指令。不是仅凭字符串检索、也不将间接 `BLR` 当作无调用。

| Verified original ELF 目标 | 地址 | 直接 B/BL 分支总计 |
| --- | --- | ---: |
| BNSH 对象初始化入口 | `0x285D10` | **1** |
| BNSH 初始化函数主体 | `0x285D30` | **2** |
| 首块 / Shader 名称消费者 | `0x286160` | **1** |
| 资源字典 Key Resolver | `0x24E3C0` | **74** |
| Allocation Callback Thunk | `0x267B14` | **117** |

在真实 ELF 的 `0x3FCD458` 读取 `uTexture%d`，在 `0x3FED090` 读取 `uConstantBufferForVertexShader`，均在 mapped source 内为实际 NUL 终止 ASCII。使用 `scripts/acnh303_round31_material_runtime_elf.py`，测试 `scripts/test_acnh303_round31_material_runtime.py`，数据 `derived/3.0.3/r31_runtime_material/elf_static_shader_callgraph.json`；[GitHub Actions 原始 ELF 完整成功 #38665252046](https://github.com/969981/ACNH_Resources/actions/runs/38665252046)。

R26 的 `0x285D10`（BNSH header relocated / GetFirstBlock）及 `0x286160`（`uTexture%d` 等资源名称消费者）与本轮 Reflection 的 Sampler/CB 名称吻合；但直接 BL 入口数量不能反推出 Material 构造器、Variation 选择者、Descriptor Set 等 C++ class 的真实类型。原始 ELF 静态审计字段明确写有 `runtime_material_variation_gpu_slot_ownership=UNPROVEN`。

### Runtime 实机只读闭环：需要观察的同一次身份链

1. 确认程序运行时 main 的加载基址和 ELF 虚拟地址到 `main+offset` 的映射，必须在具体版本与 ASLR 状态下核对地址，**不能照抄静态绝对虚拟地址当运行时地址**。
2. 在 `0x285D10 / 0x285D30` 的 runtime mapping 记录原始 BNSH Header 指针、`GetFirstBlock` 返回地址、对象 `+0x00` Header Store 与对象 `+0x10..0x38` table 指针；采集整个程序实例的时间戳与调用者，而不是只读当前截图。
3. 在 `0x286160` 及该路径所调用的 `0x24E3C0`，只读保存寄存器 X0–X7、LR、对象地址、`uTexture%d` 资源 Key 和对应返回值/Index；调用并发时必须通过线程 ID、LR 和对象身份关联。**74 个 Key Resolver 直接调用点不全属于 Shader 绑定**。
4. 再追实际渲染 Material 实例拥有者的入口与字段，在一次 Draw/Bind 调用同一个业务对象上验证：Material ID/地址 → 当前 BNSH 内容 SHA → Variation index → VS/FS Code SHA → Reflection Sampler/CB 名称 → API 真实 descriptor/bind slot。
5. 结束后新会话、重建对象、改变一个被公开渲染的不同材质进行对照，检查 Variation 是否随真实 Material 改变。**仅静态映射不能完成这里的实机闭环**。

上述 probe 为只读，禁止调用变更/Hook 改值的写入功能；当前 CI 没有实际运行游戏和图形驱动，因此运行时字段身份与 GPU Bind Slot 保持待确认状态。

## 四、R31 40 个此前未测原始资源：真实 SHA 交付

选源器 `scripts/acnh303_round31_select.py` 严格排除 R19 累计测试 + R27 的 40 个原始源 + R28 的 224 个 + R29 的 80 个 + R30 的 48 个，差异清单均按源 SHA 与类别交叉检查，不会把已经测过的路径重复计数。

[GitHub Actions #38665115487](https://github.com/969981/ACNH_Resources/actions/runs/38665115487) 已真实完成回归、六个新源分片转换、审计重核、独立下载并验证原始转换工件 SHA、持久化 Release。永久发布 [R31 real 40 source Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r31-40-real-media-bnsh-20261015) 10 个附件。

| 输入原始文件 | 真实新源 | 原始内容转换 |
| --- | ---: | --- |
| Model | **16** | BFRES/FMDL/BNTX 实际目标 |
| Layout | **12** | BFLYT/BFLAN JSON **61**、FCPX 字体引用 JSON **11**、原始无损 BNSH **7**（235,376 字节） |
| BARS | **12** | 有效 PCM WAV **94**、原生 AMTA v5 **94** |
| Model + Layout 核心有效媒体 | **28** | **1 GLB + 122 PNG = 123**，2,509,340 字节 |

在 28 个新 Model/Layout 原始源中，27 个产生可验证媒体，1 个 `no_target_leaf` 严格保留非成功媒体状态。BARS 的 94 个 WAV 与独立 BWAV 分开统计。**R31 新增加的 7 个 BNSH 不在本轮 46 样本 Native 总量**（R27–R30），下一轮 R32 需要补入。

### R31 后累计统计

| 原始源类别 | 已做 L3 测试 | 仍未测 |
| --- | ---: | ---: |
| Model | **2,028 / 60,166** | **58,138** |
| Layout | **708 / 960** | **252** |
| BARS | **504 / 1,696** | **1,192** |
| 独立 BWAV | **1,146 / 1,146** | **0** |

核心有效媒体累计 **9,247**，即 **561 GLB + 7,540 PNG + 1,146 独立 WAV**；单独 BARS 累计 **5,532 有效 PCM WAV** 和 **5,515 原生 AMTA v5**。所述核心媒体源已测试路径累计 **3,882**，其中存在无媒体目标源，绝不能把已测原始源总数等同于媒体个数。

## 五、R32 后续方向和防重复规则

1. 将本轮新提取的 **7 个 R31 BNSH** 纳入当前 46 个成员的同源结构/Code-Reflection-Gap 校验，并以真实 SHA 去重；
2. 对 **57 条全零差异**追真实二进制各 Segment 的对齐规则，独立核对 code 结束与 Pool memory alignment 以及 Shader 编译 Code Header 的长度解释，禁止将猜测填充解释标为 Native 已证实；
3. 从原始 ELF 的 `0x286160 / 0x24E3C0` 逐实例只读观察 Shader Context，再追实际 Material→Variation→GPU Descriptor Slot。只有实机同对象同调用链才算闭合；
4. R32 选源必须新增排除 R31 `derived/3.0.3/r31_cumulative/source_delta.jsonl.gz` **40 个原始源**，并保留 R19/R27/R28/R29/R30 历史源全部排除。
