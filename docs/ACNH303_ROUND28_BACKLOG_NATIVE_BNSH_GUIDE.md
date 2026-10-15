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
