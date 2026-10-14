# ACNH 3.0.3 — R19 去重解包与动画型 BFRES / Native 消费者静态研究

版本：2026-10-14，专用分支 `feat/acnh303-round19-animation-native`。以 [R18 真实通过的 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r18-bfres-native-20261014) 为唯一 L3 数据基线。**计划数量不等于实际转换成功数量。**

## R18 固化基线

| 资源 | 已测原始源 | 未测原始源 |
| --- | ---: | ---: |
| Model BFRES | 1,300 / 60,166 | 58,866 |
| Layout UI2D | 528 / 960 | 432 |
| 独立 BWAV | 1,146 / 1,146 | 0 |
| BARS | 316 / 1,696 | 1,380 |

R18 核心媒体已测 **2,974 个不重复 source_path**，累计 448 GLB、4,931 PNG、1,146 PCM WAV（6,525）。BARS 另有 3,281 PCM WAV 与 3,263 个无损 AMTA v5，**不能与独立 BWAV 混加**。

## R19 L3 增量任务（独立分片、不同资源才计新源）

- Model：16 × 32 = **512** 个尚未接受对应 L3 转换的新 BFRES。必须区分几何 FRES、纯纹理 FRES、非模型动画叶子、无有效媒体和真正失败；不假设均可得到 GLB。
- Layout：6 × 12 = **72** 个新源。统计真实 PNG 以及 BFLYT/BFLAN/FCPX 独立原生结构 JSON，no_target_leaf 不计媒体成功。
- BARS：8 × 10 = **80** 个新容器。真实 BWAV→PCM WAV 和 lossless AMTA v5，任何 member codec 失败独立记录源/成员 SHA 与失败原因。
- 共 **30 分片 / 664 新测试源**（584 媒体源 + 80 BARS 容器），仅为本轮实际测试目标。独立 BWAV 保持 1,146/1,146 不重测。

严格以 R18 的 `media_round18_cumulative/source_manifest.jsonl.gz` 排除 2,974 个已测媒体源；BARS 排除 R8(8)、R9(32)、R10(64)、R14(16)、R16(36)、R17(60)、R18(100) 共 **316** 个不同历史原始容器。对剩余集合用 SHA256(原始相对路径) 稳定排序及分片；不能只使用 GitHub API 不完整目录列表。原始 `e10617820db06889e1638499478da0de_NCA/1` 不修改。

如果 664 个源均经过专用测试并通过来源审计，应达到已测 Model 1,812（未测 58,354）、Layout 600（未测 360）、BARS 396（未测 1,300）；核心媒体累计 3,558 个不同源。具体媒体文件成功、失败等以真实报告为准，不预填。

## R19 真正独立的两项研究

**1. 动画型 BFRES 结构** — `scripts/acnh303_round19_animation_probe.py`：

- 对 [R18 原始异常](https://github.com/969981/ACNH_Resources/blob/feat/acnh303-round18-bfres-native/derived/3.0.3/model_round18_classification/coverage.json) `Model/CharactorAnimation20000.Nin_NX_NVN.zs` 实际读取原始文件和 R18 SHA/status，要求此前 `failed` 不被跳过。
- 使用同一已测解压解析器展开资源叶子并分别计算 SHA-256，记录真实 FRES 头字节、长度和有界 `FSKA/FSHU/FVIS/FMAA/FMDL/FSHP/FVTX/BNTX` 候选 token 的精确偏移。
- token 匹配属于静态线索，不能凭字符串出现就宣布骨骼动画、动画轨道格式或 GLB 恢复；不伪造 mesh。后续需要确定字典/偏移及动画运行时求值，对应任务独立验收。

**2. Native AArch64 实际静态分支引用** — `scripts/acnh303_round19_native_xrefs.py`：

- 仅对原始 `ACNH3.0.3.elf` 中 ELF 程序头确认为 `PT_LOAD + Executable` 的字节扫描真实的直接 `B`、`BL` 指令，并通过 AArch64 immediate sign-extend 算出实际 VA，记录对应 ELF SHA 和指令 opcode。
- 将此前已正确映射的 `0x3ACA490/0x3ACA590/0xFF6470/0x10847E4` 四处候选 RVA 的前后 64 字节内的直接 incoming branch 与调用位址汇总。
- **这只能缩小静态 owner/function 边界**，无法直接解析通过 vtable 的 `BLR`，不能据此命名 AMTA v5 播放字段、LBLI 读者、BFEVFL Action/Query 分派；之后仍需构造器/XREF、寄存器对象实机只读断点等证据。
- 对 Native 语义的真正完成条件继续参照 [Issue #33](https://github.com/969981/ACNH_Resources/issues/33)；不得自动关闭。

## 必须通过的工程验收

1. `regress` 含 R19 选择去重测试以及既有媒体/UI2D/WAV 规则回归；不存在假想缺失脚本。
2. 实际启动并完成 30 个分片；真实 SHA-256 验证每个源文件和每份 GLB/PNG/WAV/AMTA、UI2D JSON。
3. 独立 research job 对动画原始源和同一 ELF 计算 SHA。研究数据既不计入媒体源总数，也不冒充运行时执行语义。
4. 汇总 `media_round19_cumulative`、`bars_round19_cumulative`、`layout_semantic_round19_cumulative`、`model_round19_classification`、`r19_animation_probe`、`r19_native_probe` 共六类可复核证据目录。
5. 新原始源不得重复 R18 基线，累计 source_manifest 和源库存 join 严格符合 103,400 原始文件数量；失败和不支持保留。
6. 仅当研究、30 分片、累计审计全部通过，同一成功 run 的原始数据包重新下载逐文件 SHA-256 二次校验后，才生成 Release / SHA256SUMS。
7. 工作只发生在 R19 专用分支，`3.0.3` 主分支和全部原始 RomFS、ExeFS 永不修改。

入口：[R19 Actions](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-round19-unpack.yml)，完整研究代码和报告见 R19 分支。静态证据与真正 native 消费者闭环必须分开陈述。
