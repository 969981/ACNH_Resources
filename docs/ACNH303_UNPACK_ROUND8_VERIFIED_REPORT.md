# ACNH 3.0.3 第八轮：详细解包指南、200 个新增源、BARS 新音频类型与残余格式盘点

> 2026-10-14。此报告包括 GitHub Actions 实测生成的数据、原始源 SHA-256、转换后输出 SHA-256 及明确的残余范围。详细原理参见 [原生技术参考](ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md)，本地可执行命令见 [完整解包实操指南](ACNH303_UNPACK_FIELD_GUIDE.md)。

## 1. 对已有七轮文档进行技术集中化

已在仓库内提交两份可独立使用的完整文档：

1. **`docs/ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md`**：从 103400 原始文件清单到 Zstd/SARC、BCSV、BYML、MSBT、Model/BFRES、Layout/BNTX/FLYT/FLAN/FCPX、Sound/BWAV 的真实二进制数据流、关键字段表、证据分级和不支持事项。详细记录了两个 FCPX v9.3 的 20 条原生字体记录（`record+0x04` 指针 + `0x18` 偏移）和 22 个 `mat1` 材料记录中的 44 字节布局。
2. **`docs/ACNH303_UNPACK_FIELD_GUIDE.md`**：面向 Windows 11 PowerShell 和 WSL2 Ubuntu，包含 clone/pip/回归测试、通用 L0–L2、实际 BLFYT/BFLAN/FCPX+PNG 双通道、BWAV→WAV、sparse hash shards、native decoder 版本与 SHA256SUMS、增量审计、Release 分卷、失败排查和原生动画验证的具体命令。

这两份是执行所需的文档，不以短期 Actions 日志作为唯一说明。

## 2. 本轮真正转换的 80 个 Layout + 120 个 BWAV 源

源自 [实际 16 分片转换 Run 38492539388](https://github.com/969981/ACNH_Resources/actions/runs/38492539388)，16 个解码 Job 成功，原始源和每个输出都通过 SHA；原工作流唯一失败的是最后整合脚本错误地预设 Artifact 下载目录，**与媒体解码无关**。已通过不重新处理源文件的 [Run 38492923121](https://github.com/969981/ACNH_Resources/actions/runs/38492923121) 修复并完成源路径不重复、原始大小、格式、输出和累计 hash 审计。

| 来源与结果 | 本轮新增原始源 | 实际有效媒体输出 | UI2D 原生结构输出 |
| --- | ---: | ---: | --- |
| Layout | 80 | **520 张 PNG**；77 源有 PNG，3 源无独立 BNTX | **80 BFLYT JSON + 333 BFLAN JSON + 73 FCPX 字体引用 JSON** |
| BWAV | 120 | **120 个有效 PCM WAV** | — |
| **总计** | **200** | **640 个媒体文件** | **486 个结构 JSON** |

细节：80 个 Layout 真实新恢复 **1,642 个 Pane 节点、896 个材质记录、624 个字体名称引用**，共发现 649 个内部成员，其中 163 个不属于本次定义的 FLYT/FLAN/FCPX 结构目标（可能含已另外处理的 BNTX），不可因此称作坏文件。UI2D 结构解析错误为零。

本轮的 3 个 `no_target_leaf` Layout 源在媒体层没有 PNG，但它们各自具有真实的结构化 UI2D 结果。**因此媒体目标完成率与原生语义解包完成率需要分别统计**。

### 新的标准累计媒体统计

| 格式 | 七轮基准 | 第八轮累计 |
| --- | ---: | ---: |
| 唯一已测原始源 | 912 | **1,112** |
| GLB | 214 | **214** |
| PNG | 1,354 | **1,874** |
| WAV（独立源 BWAV） | 452 | **572** |
| **实际验证媒体文件数** | **2,020** | **2,660** |
| 尚未测试 Layout 候选 | 808 | **728** |
| 尚未测试独立 BWAV 候选 | 694 | **574** |

累计媒体数据的真实输出字节 **3,941,189,418 B（约 3.94 GB）**，并非压缩 Release 的大小。

正式的逐源审计：[累计覆盖率 JSON](../derived/3.0.3/media_round8_cumulative/coverage.json)、[媒体输出路径 SHA256 索引](../derived/3.0.3/media_round8_cumulative/media_index.csv)、[剩余无目标／失败项](../derived/3.0.3/media_round8_cumulative/remaining.csv)、[80 个新 Layout 的完整 UI2D 源/叶子状态](../derived/3.0.3/layout_semantic_round8_cumulative/coverage.json)。

### 已发布的解包下载产物

[第八轮 Layout/UI2D 与 BWAV 永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-layout-ui2d-bwav-round8-20261014) 运行验证：**16 个 tar.gz 数据分卷、6 个累计哈希与格式报告文件，共 22 附件约 629 MB 压缩数据**。16 分卷实际装入 520 PNG、120 WAV、486 JSON、每个成员的原始来源与转换 hash；下载后使用附带 `SHA256SUMS.txt` 验证。

## 3. 从全库恢复的真正下一步资源优先级

[完整源文件格式及目录队列](../derived/3.0.3/unmeasured_queue_round8/queue.json) 来自 103,400 条真实原始文件目录与 1,112 个已测媒体源的相对路径集合相减，含 [逐类 CSV](../derived/3.0.3/unmeasured_queue_round8/original_format_priority.csv)。

| 来源类别 | 实际原始文件数 | 研究方向 |
| --- | ---: | --- |
| `Model/*.zs` | 60,166 | 未测 Model 59,858，原生 BFRES、材质、骨骼和纹理完整性 |
| `BDLI/*.zs` | **36,708** | 本地化资源、名称/格式/字符串数据结构，需按真实头部/解压成员分类 |
| `Sound/*.bars` | **1,696** | BARS 容器中的 AMTA、音频成员 BWAV/流及循环信息 |
| `EventFlow/*.bfevfl` | **875** | 真正事件图／参数／节点语义（之前的结构标注不等于脚本反编译） |
| `Layout/*.zs` | 960 | 728 个还没 L3 测试；当前既有 PNG，也能拆 FLYT/FLAN/FCPX |
| `Param/*.byml` | 637 | 字段级 JSON 与游戏配置参数恢复 |
| `Sound/*.bwav` | 1,146 | 已测 572、尚未测试 574 |

**解释分母：** 上面是原始文件数量／在“媒体 L3”审计中的未测数量。例如 Bcsv（234）以前已经完成 CSV 转换，但它们不会加入 GLB/PNG/WAV 媒体统计。把“不在媒体 L3 清单”误解成“此文件所有层级未解包”是错误的。对于 `.zs`，光看扩展名不能判断内部必然是某一种原生格式。

## 4. 新突破：开始处理 1,696 个 BARS

参考 Nintendo AAL 的 BARS 规范：[资源容器](https://nintendo-formats.com/libs/aal/bars.html) 和 [AMTA 音频元数据](https://nintendo-formats.com/libs/aal/bameta.html)。它不是普通 BWAV 文件，不能简单改扩展名。

本轮新增两条真实可复现的程序：

```text
Sound/Resource/*.bars
  → BARS 小端 Magic / BOM / 声明文件大小 / 0x0101 版本
  → asset CRC32 名称哈希表 + 每个 AMTA / 音频绝对偏移
  → 界内、以音频起始偏移排序的原始 BWAV 成员
  → 固定版 vgmstream → 验证真实 PCM WAV 帧 / SHA256
  → per-source + per-member + per-output JSON manifest
```

- `scripts/acnh303_bars_probe.py`：按字节检查真实 BARS 与 AMTA / BWAV 指针，不臆测 CRC32 为人类文件名。
- `scripts/acnh303_bars_audio_l3.py`：逐成员真实解压成 BWAV 区段，使用实际解码器转 PCM WAV，校验后再记录成功；缺少帧／无效音频保留 `decode_failed`。
- [原始 8 个 BARS 结构报告](../derived/3.0.3/bars_probe_round8/report.json)；[真正 WAV 转换与错误详情](../derived/3.0.3/bars_audio_round8/report.json)。
- [实际转换 Actions #38493637683](https://github.com/969981/ACNH_Resources/actions/runs/38493637683) 全部执行通过。

**真实样本结果：**

| 指标 | 实测 |
| --- | ---: |
| 本轮 BARS 原始容器 | **8** |
| 成功含可播放 WAV 的 BARS | **7** |
| 新增真正 PCM WAV | **42** |
| 失败音频成员 | **1** |
| 包装头声明长度少 1 字节的源文件 | **1**，异常保留原始 SHA，不篡改源 |
| 尚未测试的 BARS 原始容器 | **1,688** |

不成功的 `AirportDemoAirplaneShadow.bars` 虽存在一个 BWAV 标记，但没有可验证的 PCM 帧；其真实解码失败记录已保留。另一个 BARS 源（`BGM_DJ_026_Minyo.bars`）实际大小 57,345，BARS 头部声明 57,344，解析器保留额外 1 字节的异常后，仍可安全按声明边界定位并验证其中的 6 个 WAV。

**BARS 的 42 个 WAV 是新类型里单独证明的真实产物**，尚未纳入上方以独立源 `*.bwav` 为分母的 2,660 个核心累计媒体产物数。不要简单把 BARS 的资源数当作独立 BWAV 文件数，或重计其音频成员；之后应扩展统一审计模型，对 `.bars` 设置单独类别并做内容哈希去重。

## 5. 尚需解决且不该夸大完成度的事项

- **BDLI 36,708 原文件**：优先选中文、英文、日文等样本研究原始 header、语言和字符串映射，尚无本轮语义解析成果，不能宣称 BDLI 已完整还原。
- **BARS 1,688 未测容器**：需要继续确认其它音频类型，检查 AMTA 命名、无音频内容、循环点和标记表；已有 7/8 个源成功，不代表全体 1,696 成功。
- **FCPX**：20 个已恢复字体引用记录不证明 fallback 算法。
- **BFLYT**：有真实 mat1 材质原始字节但没有像素级 Native 渲染证明。
- **BFLAN**：数学预览不是原生动画；在没有 ACNH 3.0.3 ELF 或原生 trace 的情况下，`runtime_parity` 必须维持 `NOT_TESTED`。
- **EventFlow**：结构解析不是事件脚本和行为的完整反编译。
- 当前的 **1,112 个媒体源 + 8 个 BARS 样本**是两个独立审计集，不代表全部 103,400 个原始文件已经 L3/语义化完成。
