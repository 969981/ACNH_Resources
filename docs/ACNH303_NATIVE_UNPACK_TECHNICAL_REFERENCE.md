# ACNH 3.0.3 资源解包技术规范：原始格式、数据流、已验证算法与证据分级

> 适用仓库：`969981/ACNH_Resources`，`3.0.3` 分支。以 2026-10-14 前七轮真实运行数据为基准，第八轮扩容的实际统计以 `derived/3.0.3/media_round8_cumulative/coverage.json`（生成后）为准。

## 1. 原始数据、物理解包和语义恢复是三个不同概念

原始镜像 `e10617820db06889e1638499478da0de_NCA/1/` 是只读基准，103,400 个文件来自原始目录扫描（L0/L1/L2），不代表每一个文件已变成 `JSON/CSV/PNG/GLB/WAV`。任何“完成率”必须有明确分母：

| 层级 | 行为 | 可称为成功的证据 |
| --- | --- | --- |
| L0 | 路径／文件大小／分类／原始 SHA | 完整原始文件清单，原始内容不修改 |
| L1 | Zstandard、Yaz0 等容器解压 | 原始压缩流实际解码、大小限制、Magic |
| L2 | SARC／ARC 与嵌套成员提取 | 成员路径、边界、大小与成员 SHA |
| L3a | 原生媒体格式转换 | 真正的 GLB 三角形、解码加载的 PNG 像素、PCM WAV 帧和通道数 |
| L3b | 资源原生语义转 JSON/CSV | 有类型、偏移边界、命名节点／结构／属性；未知字段明确保留 |
| L4 | 运行时等效语义 | 同版本 ELF 原生调用链 + 相同对象／帧采样或实机渲染对照 |

不能把 L0/L2 的已提取二进制称作 L3 成功，也不能把 L3b 的 JSON 命名结构称作 L4 的最终游戏画面。

## 2. 逐格式真实数据流和验证范围

### 2.1 表、消息和事件

```text
原始 RomFS
 ├─ BCSV → CRC32 列 hash + 结构化 CSV / schema JSON
 ├─ BYML (.byml / .byml.zs) → 具有类型的 JSON
 ├─ MSBT → 文本、标签和区块的 JSON
 ├─ SARC/Yaz0/Zstd → 保留原成员路径的原生文件 + 索引
 └─ BFEVFL/MSBP 等 → 部分结构元数据，未完成的语义仍标 partial
```

BCSV 的 CRC32 hash 不是人类可读列名；没有原版属性名称映射就不重命名。MSBT 文本及 Message 资源与 Layout UI2D 和动作脚本是不同的格式。

### 2.2 Model：Switch BFRES

```text
Model/*.zs → 实际 Zstd 解码 / SARC → FRES Switch v9
   ├─ 有合法 FMDL/FSHP/FVTX 网格 → wmdlt → 含实际几何的 GLB
   ├─ FMDL 主指针为 0、无 FMDL/FSHP/FVTX，
   │  但包含有效的独立 BNTX → 安全切出 BNTX → wimgt → PNG
   └─ 不符合已验证布局 → 保留错误/未知，绝不伪造 GLB
```

**26 个 BottomsTex 的已验证特例**：FRES+0x28 模型指针为 0，内嵌 BNTX 从 FRES+0x1000 开始；其原生 `wmdlt ERROR #36` 并非证明损坏。已恢复 104 PNG，未添加不存在的网格。这个特例不能推广为“任意出现 BNTX 字节的 BFRES 均为可切割的独立纹理”。参考 [独立二进制对照](BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md)。

### 2.3 Layout：NintendoWare UI2D

```text
Layout/*.Nin_NX_NVN.zs
  → Zstd/SARC/内部归档 → 每个成员独立按 Magic/格式解码
    ├─ BNTX → wimgt → 校验实际像素的 PNG
    ├─ FLYT / BFLYT v9 → 结构 JSON
    │    ├─ lyt1 画布尺寸
    │    ├─ pan1 / txt1 / pic1 / prt1 → Pane 节点与嵌套关系
    │    ├─ mat1 → 材料索引、记录名与 *原始* word
    │    ├─ fnl1 / txl1 → 原生字体/贴图资源文件名
    │    ├─ cnt1 → 控制参数结构/偏移
    │    └─ usd1 / 其它未知部分 → 明确保留 SHA 或 raw，不臆测语义
    ├─ FLAN / BFLAN v9 → pat1、pai1、动画目标及已知曲线关键帧 JSON
    ├─ FCPX → v9.3 字体引用记录 JSON（不是 .ttf 字形转换）
    └─ 未知叶子 → unsupported / partial + 原始输入 SHA
```

第一轮深入研究的 41 个无独立 BNTX 的 Layout 实际上共有 41 FLYT、21 FLAN、12 FCPX；如果只跑 PNG 转换会被误标为 `no_target_leaf`，但不代表文件无内容。第八轮脚本 `acnh303_layout_semantic_shard.py` 让有 BNTX 的 Layout 也同时进入 UI2D 原生结构扫描，**每个源可以同时产 PNG 和 UI2D JSON，二者分别统计**。

#### FLYT 层次结构

Pane 自 `pan1`、`prt1`、`txt1` 等区块取得名称、transform（平移、旋转、缩放）、父子关系；`pas1` / `pae1` 控制嵌套入栈、出栈。必须校验区块长度及平衡的 pane/group 栈，不能靠名称推断真实层次。

对当前已核对过的 **6 个 mat1 区块、22 个材料**，物理记录为每条 44 字节：

| 相对材料记录偏移 | 已证据验证的内容 |
| --- | --- |
| 0x00..0x1B | 材料名，共 28 字节 |
| 0x1C | 原始小端 u32 |
| 0x20 | 原始小端 u32（22/22 为 `0x08040200`） |
| 0x24 | 原始小端 u32 |
| 0x28 | 原始小端 u32（RGBA 样式 **候选**，共四种样本） |

这不是 `mat1` 所有版本／复杂材质的完整 Schema，也没有证实具体 blend/shader 语义或实际屏幕像素。

#### FCPX v9.3 字体引用

经两份不同 SHA 的原始 `.bfcpx` 文件实证：

| 项 | 值 |
| --- | --- |
| Magic | `FCPX` |
| BOM | 小端 `FF FE` |
| 版本 | `0x09030000` |
| 头长度 | `0x14` |
| 字体记录表起点 | **文件 +0x40** |
| 单条记录步长 | **0x28** |
| 字体名指针字段 | **record +0x04** |
| 实际名称文件偏移 | **该字段原始值 +0x18** |
| 已验证记录 | 9 + 11 = **20** 条 |

记录的另外 9 个原始 word 已在 `font_reference_record_matrix.csv` 逐条保存，尚无证据证明这些数字分别代表语言切换、字符范围或回退顺序。不能凭 `zh-cn` 等文件名就断定具体选字时使用的回退算法，更不能声称已生成字体文件。

#### FLAN v9 动画

已支持 `pat1`、`pai1` 及部分 constant、step、Hermite 字段。21 个已测 FLAN 中有 50 条轨道、134 个原始关键帧、29 个动画目标。名字能匹配到 Pane，不等于 Native 运行时求值与画面结果已经验证。数学取样产生 956 个离线数值，当前原生对照文件明确为：

```json
{"runtime_parity": "NOT_TESTED", "capture_exists": false}
```

运行时等效需记录同版本游戏、相同实例、曲线 target/index 和时间帧的真实数值，再用 `scripts/acnh303_bflan_runtime_compare.py` 按帧逐一比较。没有 ELF 或实机 trace 时必须维持 `NOT_TESTED`。

### 2.4 Sound：BWAV / BARS / Wwise

`*.bwav` 通过固定版本 `vgmstream-cli` 转 PCM WAV，严格检查头、采样率、通道、帧数、数据大小、SHA-256。BWAV 成功不意味着同目录的 `.bars`、`.bnk`、`.pck`、其它编码已转 WAV；其余原生音频格式需要分别建立容器索引和可回放音频流验证，不允许改扩展名冒充解码。

## 3. 可追溯记录与批量审计

### 源清单与真正媒体文件

- 原始文件库存：`derived/3.0.3/inventory/source_manifest.csv.gz`（103400 条）。
- 媒体最终状态：`derived/3.0.3/media_bwav360_cumulative/coverage.json`（第七轮，912 个唯一已测源）。
- 输入和输出：`source_manifest.jsonl.gz` + `media_index.csv`，保存原始相对路径、源 SHA-256、输出相对路径、实际格式、产物 SHA-256。
- 未能转为目标媒体：`remaining.csv`，保留 `failed` / `no_target_leaf` / `partial_media` 的不同语义。
- UI2D 的每个 JSON 输出也保存源文件 SHA 和原成员 SHA；JSON 不应悄悄合并进 GLB/PNG/WAV 的媒体数量。

每次批处理都使用 `scripts/acnh303_media_incremental_audit.py`：对照全部源文件 inventory，确认来源和大小真实存在；禁止不同分片重复原始路径；拒绝没有真实产物却声称 converted、错误格式伪装成功、GLB 纹理混算。

### 当前第七轮基线

| 媒体格式 | 已验证输出文件 |
| --- | ---: |
| GLB | 214 |
| PNG | 1354 |
| WAV | 452 |
| **合计** | **2020** |

共 912 个唯一已测媒体源，BWAV 候选 1146 中已测 452，剩余 **694 个未测**。完整原始 L0–L2 扫描不应与这个小规模的 L3 真实转换统计混用。第八轮实际结果将新增独立的 Layout 和 Sound 分片，以及 UI2D 原生语义结果。

## 4. 已实现工具对照

| 脚本 | 作用 |
| --- | --- |
| `scripts/unpack_acnh.py` | 通用 L0–L2；BCSV、BYML、SARC、MSBT 等 |
| `scripts/acnh_formats.py` | 原生容器与格式解析器 |
| `scripts/acnh303_media_l3.py` | BFRES/BNTX/BWAV 真实转换、媒体完整性校验 |
| `scripts/acnh303_media_batch.py` | 对 Git 原源选择的分片进行真实转换，保存转换 manifest |
| `scripts/select_acnh303_shard.py` | Git tree 稳定 hash 分片，`--skip-count` 续页 |
| `scripts/acnh303_layout_semantic_shard.py` | 从任意新 Layout 归档提取 BFLYT/BFLAN/FCPX 结构 JSON（第八轮） |
| `scripts/acnh303_ui2d_parser.py` | BFLYT、BFLAN 结构与有限关键帧字段 |
| `scripts/acnh303_ui2d_semantics.py` | 材料、部件、控制区块的已验证字段 |
| `scripts/acnh303_fcpx_font.py` | FCPX 40B 字体记录、名指针和保留字段 |
| `scripts/acnh303_bflan_runtime_compare.py` | 需要真实原生 trace 才允许对照声称 |
| `scripts/acnh303_media_incremental_audit.py` | 原始路径／大小／重复样本／媒体格式审计 |

**更完整的操作命令、WSL2 安装、失败处理、输出目录和 GitHub Actions 分卷教程**：参见 [详细实操指南](ACNH303_UNPACK_FIELD_GUIDE.md)。

## 5. 未闭合的研究事项

当前最重要的“未解包”分成两类：

- **格式未覆盖**：大量原始 Model/Layout/Sound 候选尚未做 L3 转换，还有 Shader/Effect、BARS/BNK、专有 BNSh/BFBS/参数表等，先做识别、再做 Schema/解码器，不得凭名称批量 rename。
- **语义未证实**：FCPX 各语言回退条件、完整字形、BFLYT 真实材质/纹理绑定、复杂部件控制、BFLAN 原生求值和 UI 渲染等。即使有 JSON 也可能是部分恢复，待游戏 Native ELF 或实机证据。

每项必须保留：**原始输入 SHA → 解析器版本 → 已验证的结构字段 → 输出 SHA → 未解字段与待验证方法**。
