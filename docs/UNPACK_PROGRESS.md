# ACNH 3.0.3 — 实施进度与证据

> 记录时间：2026-10-13。此文件里的阶段状态是**已证实**而非预期。

| 阶段 | 状态 | 证据 |
| --- | --- | --- |
| P0 源目录、脚本、AGENTS | done | 3.0.3 根目录 `scripts/`、`AGENTS.md`、`README.md` |
| 234 BCSV + 275 BYML | tested/published | `Unpack/<NCA>/1/Bcsv,AnimationInfo,Stage`；manifest 记录 |
| 中文 Dialog/LayoutMsg SARC+MSBT | tested/published（2 个源归档） | `Unpack/<NCA>/1/Message` |
| 上述首次累计 | **511 源 / 1,153 个真实产物** | `Unpack/_meta/manifest.json`（注意 summary.json 仅最后一次单文件任务） |
| Model/Layout/Effect/Shader/Sound/EventFlow 各真实样本 | tested（6 个样本） | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385132200> |
| 第二轮 19-shard 全目录资源 | started/not yet validated | Actions <https://github.com/969981/ACNH_Resources/actions/runs/38385428097>，PR #2；不要把队列中任务算完成 |
| 新增完整 Git 树清单 | **done — 103,400 RomFS / 10.42 GB；7 ExeFS** | `scripts/inventory_acnh303.py` + `.github/workflows/acnh303-inventory.yml` |
| BDLI 全语言对话逻辑解析 | planned（U14） | 36,708 份 `.bdli.zs`，Zstd→BDLI/LBLI 已做真实样本魔数探测 |
| BFRES → glTF/GLB | planned | 需要真实 3D 模型测试 |
| BNTX → PNG/KTX2 | planned | 需要 ASTC/BCn/swizzle 审计 |
| EventFlow 完整可读脚本 | in progress | 现有二阶段脚本仅图节点/Actor/参数 JSON，未证明所有文件解析成功 |
| Audio → WAV、PTCL、Shader | planned | 已有格式识别/索引，不是多媒体全解 |
| 完整覆盖 + 持久 GitHub Releases | planned | U12/U13 尚未执行 |

下一步：已建立 [103,400 文件的全量基线](UNPACK_BASELINE.md)。要把 BDLI（上一版 19-shard 漏掉）也加入批量矩阵；然后对照真实源总数、文件类型分布、潜在同名碰撞，再根据 19-shard 执行日志维护每格式的缺口清单。任何阶段只有真实样本、全组输出统计与 SHA-256 均有证据才能更新为 done。

若 `Unpack/_meta/summary.json` 显示 `source_count=1`，那仅代表最近一次 `--file` 范围；不能覆盖累计 511 的事实。正式总表由 `manifest.json` 与全量 Git 树索引 join 汇总。

## 2026-10-13 全量 Actions 执行补录（已验收）

- **103,400 / 103,400** 源文件按 sha256/size 对齐；24 个原始一级目录全部覆盖；missing=0、extra=0、duplicate=0、size_mismatch=0。
- 原始 36 shard 批处理 [Run 38388960509](https://github.com/969981/ACNH_Resources/actions/runs/38388960509) 有 1,242 个失败，保留历史记录；详见 `derived/3.0.3/asset_batch_runs/`。
- 重新解析 **全部 36,708 个 BDLI**、**全部 877 个 EventFlow**、**五个尾字节填充的 BARS** 后，[Run 38390897730](https://github.com/969981/ACNH_Resources/actions/runs/38390897730) 的有效合并状态为 `converted=2,105; partial=101,295; failed=0`。
- 完整逐源有效 manifest 已发布：[`effective/source_run_manifest.jsonl.gz`](../derived/3.0.3/effective/source_run_manifest.jsonl.gz)；[覆盖明细](../derived/3.0.3/effective/coverage.json)。
- U05 的 EventFlow 图结构阶段已完成 **877/877**，但可读脚本反编译未全量验收；U14 已完成 BDLI 原生结构，无完整语义；U06/U07/U08/U09/U10/U11 仍有大量 L3 工作。
- **严禁把 101,295 个 partial 写成完整解包成功，也严禁将 Actions Artifact 当成永久发布**。具体限制见 [执行报告](UNPACK_EXECUTION_2026-10-13.md)。

## 2026-10-13 媒体 L3 扩容执行摘要

- 12 新分片 GitHub Actions [#38415265992](https://github.com/969981/ACNH_Resources/actions/runs/38415265992) 全成功，新增 216 个真实源文件。
- 与前一轮 36 个独立样本累积，当前实测 252 个互不重复源文件，**775 个有效媒体输出（82 GLB / 641 PNG / 52 WAV）**，校验后的数据量 770,411,492 B。
- [媒体覆盖率与失败原因](../derived/3.0.3/media_scaleout_audit/coverage.json) 使用真实 103,400 文件 inventory，并分别报告候选总数、已测、成功、不支持及未测数量；不改变前面的 L0–L2 源文件清单。
- BFRES 26 个 BottomsTex 原生 decoder 错误统一 Error #36；详情见 [原生错误日志](../derived/3.0.3/media_scaleout_diagnostics/bfres_errors.json)，独立调查 [#21](https://github.com/969981/ACNH_Resources/issues/21)。Layout 的 28 个 no_target_leaf 不代表错误 PNG。
- 12 个媒体分片和 SHA256SUMS 已做 [长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-scaleout-20261013)。详情见 [扩容执行报告](UNPACK_MEDIA_L3_SCALEOUT.md)。未测试的源不算 converted。


## 2026-10-13 BottomsTex 原生 FRES 结构及纹理分流突破

26 个 wmdlt ERROR #36 已通过 26 个真实底层 FRES 与 2 个成功模型对照复核：Switch v9 的 FRES+0x28 FMDL 指针为零，无 FMDL/FSHP/FVTX，但在 FRES+0x1000 包含独立 BNTX。3 个原始纹理测试及所有 26 个源的实际 PNG 批处理均已通过；总计 104 张可真实解码的 PNG，已经纳入 Unpack 和永久 Release。

正确有效 L3 统计为 **252 已测原始源、879 媒体文件（82 GLB + 745 PNG + 52 WAV），773,026,137 字节**。原 26 个错误只有 GLB 几何导出不适用，不是坏资源；保留历史审计但将 Model 的有效媒体类进一步拆为 geometry GLB 和 texture-only PNG。

[底层对照+修复说明](BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md) · [按源哈希修正后的有效报告](../derived/3.0.3/media_bottomstex_corrected/coverage.json) · [Issue #21](https://github.com/969981/ACNH_Resources/issues/21)。


## 2026-10-14 第四轮 L3 资源转换实际执行及发布

- [12 个新源分片与累计审计](https://github.com/969981/ACNH_Resources/actions/runs/38427348253) 均成功，新增 300 个此前未测的 Model/Layout/BWAV 原文件，源路径/文件大小/输入与输出 SHA 均核对。
- 新产物 **132 GLB + 609 PNG + 40 WAV = 781**；200/200 Model 源有 GLB 或 PNG 实际输出，47/60 Layout 源有 BNTX 贴图，40/40 BWAV 输出有效 PCM WAV。
- **累计 552 个互不重复原始媒体源，214 GLB + 1354 PNG + 92 WAV = 1660 个真实输出**，1,244,272,410 字节。已测仍无 BNTX 目标的 Layout 达 41 个。
- [当前覆盖率报告](../derived/3.0.3/media_iteration4_cumulative/coverage.json) · [媒体输出索引](../derived/3.0.3/media_iteration4_cumulative/media_index.csv) · [详细技术报告](UNPACK_MEDIA_L3_ITERATION4.md)。
- 已使用 [17 附件的永久 GitHub Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-iteration4-20261014) 分卷发布 781 个新媒体文件及全部源／输出 SHA-256。注意此为 L3 **样本扩容**，并非全部 103400 原文件已完全转换。

## 2026-10-14 UI2D/BWAV 第五轮完成

- 从 41 个以前无 BNTX 的真实 Layout 资源成功转换 41 份 BFLYT 和 21 份 BFLAN v9 JSON，共 254 个 pane，全部源文件 SHA 对齐；尚有 12 个 FCPX 叶子未解（Issue #25）。[导出报告](../derived/3.0.3/ui2d_41/summary.json)。
- 8 个新 BWAV 哈希分片均通过原始源和 PCM WAV SHA256 核验，新增 120 个 WAV，BWAV 累计 212/1146 已测，仍有 934 未测。
- 全 L3 媒体实测 672 个唯一原始源，214 GLB、1354 PNG、212 WAV，合计 1780 个媒体文件、1,983,963,504 字节。[有效媒体覆盖](../derived/3.0.3/media_bwav120_cumulative/coverage.json)。
- 新 120 WAV 发布为 [长期 GitHub Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-120-next-20261014)，8 个分卷及 SHA256SUMS。
- 完整文档：[第五轮原生 UI2D 和 BWAV 解包](UNPACK_UI2D_BWAV_ROUND5.md)。41 个 Layout 已在此前的 552 源计数内，不能重复统计为新测媒体源。


## 2026-10-14 第六轮：FCPX font refs、UI2D 语义关系、再 120 PCM WAV

- 12 个未知 FCPX 叶子经真二进制验证仅 2 种内容，文件中有效记录 9/11 个字体资源名称引用；已经有 source SHA 校验和独立 JSON。**字形与字体替换规则仍未解码**，Issue #25 保持开放。
- 修复 fnl1 名称表偏移基准；41 个布局共 254 pane、22 个材料条目、57 个部件条目、22 个 cnt1 控制区块，6/6 字体名、29/29 动画目标完成静态交叉引用。
- 21 个 BFLAN 拆出的 50 个轨道与 134 个实际关键帧，生成 956 个**非原生数学曲线采样值**，不意味着实际游戏 UI 的渲染等效验证。
- 第六轮新处理 120 个 BWAV，累积音频 332/1146 已测，还剩 814 未测；媒体累计 792 个唯一源，214 GLB、1354 PNG、332 WAV 共 **1900 个有效媒体文件**、2,559,147,310 字节。
- [技术报告](UNPACK_FCPX_UI2D_BWAV_ROUND6.md) · [累计 L3 媒体结果](../derived/3.0.3/media_bwav240_cumulative/coverage.json) · [8 个新增 WAV 长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-240-total-20261014)。原始 103400 源的结构扫描不等于 100% L3 语义转换。


## 2026-10-14 第七轮：FCPX 20 字体记录的指针链、mat1 原生材料字段、BWAV 第三批 120

- 对两个不同 FCPX 真实内容确认 `0x40` 起始 `0x28` 步长的 **20/20 字体记录**，名称指针字段 `record+0x04`，实际名称地址 `pointer+0x18`。记录另有 9 个保留原始值的 u32；**未证明语言 fallback 顺序**。[字节证据](../derived/3.0.3/ui2d_native_v7/raw_evidence.json) · [逐记录 CSV](../derived/3.0.3/ui2d_native_v7/font_reference_record_matrix.csv)。
- 41 个真实 Layout 再次成功运行并对齐全部 12 FCPX、41 BFLYT、21 BFLAN；22 个 mat1 材料的 44B 记录全部导出，原始 `+0x20=0x08040200` 的字段模式 **22/22** 一致，色调候选四种。仅原生字节被证明，材质像素渲染未证实。[材料矩阵](../derived/3.0.3/ui2d_native_v7/material_native_words.csv)。
- BFLAN 新增实际运行时读数 comparer 和回归测试；在没有 ACNH 3.0.3 原生 trace 时严守 `NOT_TESTED`，目前 [证据状态](../derived/3.0.3/ui2d_runtime_validation_v7/report.json) 明确未达成运行时等效。离线 956 帧值只是数学预览。
- 第七轮 8 分片全部实测成功，新增 120 BWAV 有效 PCM WAV，累计 452/1146 已测，剩余 **694**。全媒体源累计 **912**，输出 **214 GLB + 1354 PNG + 452 WAV = 2020** 个有效媒体文件，3,134,300,704 字节。
- [第七轮文档](UNPACK_NATIVE_UI2D_BWAV_ROUND7.md) · [累计媒体 SHA](../derived/3.0.3/media_bwav360_cumulative/coverage.json) · [八分卷 WAV 永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-360-total-20261014)。


## 2026-10-14 第八轮：完整解包手册、Layout 非 BNTX 语义扩容、BARS 新格式

- 正式新增 [分层原生技术规范](ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md) 与 [PowerShell/WSL2 全步骤解包指南](ACNH303_UNPACK_FIELD_GUIDE.md)。包含真实文件偏移、关键原生格式的证据分级、可复现转换、哈希验证与错误处理。
- [16 个真实转换分片](https://github.com/969981/ACNH_Resources/actions/runs/38492539388) 输出成功；[独立合并校验](https://github.com/969981/ACNH_Resources/actions/runs/38492923121) 修正 Artifact 下载目录层级并通过 SHA 审计（无重复源）。新增 **80 个 Layout + 120 BWAV** 共 200 源，得到 **520 PNG + 120 WAV**，另 **80 FLYT + 333 FLAN + 73 FCPX 共 486 个结构 JSON**，1,642 Pane、896 材料条目。
- 核心累计 **1,112 个媒体源、2,660 个真实媒体文件（214 GLB、1874 PNG、572 WAV）**；Layout 728 和独立 BWAV 574 尚未 L3 测试；[累计报告](../derived/3.0.3/media_round8_cumulative/coverage.json)。[长效 16 分卷数据 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-layout-ui2d-bwav-round8-20261014) 已实传，22 附件约 629MB。
- 继续突破独立 **BARS 容器**：8 个原始源实测，7 个含 **42 个有效 PCM WAV**；另 1 个内嵌音频无法解码、1 个源声明长度少 1 字节，均已登记。[BARS 原始偏移](../derived/3.0.3/bars_probe_round8/report.json) · [转换状态](../derived/3.0.3/bars_audio_round8/report.json) · [42 WAV 独立下载 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bars-first8-42wav-20261014)。
- [全库剩余类别队列](../derived/3.0.3/unmeasured_queue_round8/queue.json)：BDLI 原始源 36,708；BARS 1,696（未测 1688）；EventFlow BFEVFL 875；仍有大量 Model、Layout 未语义解码。媒体队列未包含此前 BCSV、BYML 等可能已经处理的非媒体类型，不得误作全库剩余完成度。
- [第八轮完整技术报告](ACNH303_UNPACK_ROUND8_VERIFIED_REPORT.md)。核心媒体统计与额外 42 BARS WAV 分别审计，未完成正式跨格式整合／去重；FCPX 字体 fallback、BFLYT 原生材质求值、BFLAN 运行时一致性仍缺证据。

## 第十轮：原生媒体与语义静态证据（2026-10-14）

- SHA 去重选择 **176 个新增源**：BARS 64、Layout 48、独立 BWAV 64，24 个转码分片通过。终端目录路径问题由专用 [replay Run 38497516006](https://github.com/969981/ACNH_Resources/actions/runs/38497516006) 修复并完成累计审计。
- 新媒体：**834 BARS 嵌套 PCM WAV + 195 Layout PNG + 64 独立 BWAV PCM WAV**。另有 **834 AMTA v5 原始文件 + 235 UI2D JSON**。核心媒体累计 **1,224 唯一源 / 2,919 媒体文件**；BARS 单独累计 **104 源 / 1,062 WAV**。
- 下一批媒体 L3 未测分母：**1,592 BARS / 680 Layout / 510 BWAV**；这些数字不代表全库 L0–L2 不支持。
- Native 字段研究：[208 AMTA v5 字段矩阵](../derived/3.0.3/r10_native_fields/matrix.json)、[4210 LBLI / 3799 不同原始标识符](../derived/3.0.3/r10_native_fields/matrix.json)、[12 BFEVFL 源/115 事件节点静态调用图](../derived/3.0.3/evfl_round10_cumulative/coverage.json)。Native runtime consumer / 字符串解码 / 播放参数均未证实。
- 已经生成包含实际数据的 [长期 R10 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r10-bars-layout-bwav-native-20261014)，24 分卷及 SHA256SUMS 等六附件，发布流程重新读回每份 SHA。
- [第十轮完整二进制指南](ACNH303_ROUND10_NATIVE_UNPACK_TECHNICAL_GUIDE.md) 包含操作命令、回归和语义边界；不能把结构探测当完整可执行反编译。

## 2026-10-14 R11：真实 ELF Native 逆向阶段

已在真实 ACNH 3.0.3 ExeFS ELF（SHA 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180）上完成第一轮 XREF 和 Capstone 真正反汇编，两条 GitHub Actions 均通过。

- 首次从 Native 直接确认 BARS 魔数构造（0x3ACA350）、读取初始缓冲区 Magic、读取 +0x0C count、计算 +0x10+4*count 表地址、读取 +0x08 BOM / +0x0A version。
- BDLI 字符串实为资源路径模板 BDLI/%s/%s/%s.bdli，0x1B0A014 与 0x1B0A028 形成字符串传参；尚不是 LBLI decoder。
- 发现 EventFlowActionDummy/SetCheckResult、EventFlowQueryDummy/CheckErrorType 真实字符串及成对 STP 写入代码，疑似初始化/注册数据；未证明 Native handler 或脚本真正执行。
- AMTA、LBLI 的 MOVZ/MOVK 形式未命中，但此结果不等于游戏缺少对应 Native 读取者；继续沿 BARS、BDLI 和 EventFlow 对象关系做只读动态验证。

完整指南：[R11 ELF Native Consumers](ACNH303_ROUND11_ELF_NATIVE_CONSUMERS_GUIDE.md)，Issue #33 保持开放。


## 2026-10-14 R14：128 个新原始资源的真实增量 Unpack

- 16 个转换分片全部成功，实际源为 Model 32、Layout 32、独立 BWAV 48、BARS 16。原工作流首次汇总有 Actions Artifact 目录误判，独立 [重放审计 #38513944239](https://github.com/969981/ACNH_Resources/actions/runs/38513944239) 读取了这 16 个原始报告并完整成功。
- 新增可验证核心媒体：32 GLB、161 PNG、48 独立 PCM WAV。累计核心媒体 **1,336 源、3,160 输出**（246 GLB、2,230 PNG、684 WAV）。
- BARS 单独新增 84 PCM WAV 与 84 份原生 AMTA v5；累计 BARS 120 源、1,146 WAV。另有 163 份真实 Layout 结构 JSON（32 BFLYT、110 BFLAN、21 FCPX）。
- [完整 103,400 个源逐文件状态](../derived/3.0.3/round14_unfinished_index/all_sources_status.csv.gz)，以及 [101,295 条未完整解析源列表](../derived/3.0.3/round14_unfinished_index/remaining_noncomplete.csv.gz)；L0–L2 partial 不等于文件未解压。
- 尚未 L3 实测：Model 59,826、Layout 648、独立 BWAV 462、BARS 1,576。进一步的 AMTA 播放语义、BDLI/LBLI、EventFlow handler、特效、Shader、UI 原生渲染与动画也未完成。
- [R14 长期 Release（26 个附件）](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r14-unpack128-20261014)，[发布全量重新计算 SHA 的 Actions #38514060838](https://github.com/969981/ACNH_Resources/actions/runs/38514060838) 成功。[完整技术指南](ACNH303_ROUND14_UNPACK_REMAINING_GUIDE.md)。
- 所有 R14 成果保存在 feat/acnh303-round14-unpack-backlog，尚未合并到 3.0.3；新一轮选择器须用 R14 manifest 防止重复。


## 2026-10-15 R27：40 个新原始资源提取、BNSH 独立无损导出（已验收）

- [真实 GitHub Actions #38658755903](https://github.com/969981/ACNH_Resources/actions/runs/38658755903)：回归、6 个原始转换分片、来源/输出审计及长期 Release 全部成功。
- 新源：Model 16、Layout 12、BARS 12，合计 **40** 个 R19 之后未测试的唯一源，R19 历史 3,558 个媒体源和 396 个 BARS 源未重复。
- 新核心媒体：**4 GLB、95 PNG**，共 99 份；有 26 个 Model/Layout 实际媒体成功，2 个 `no_target_leaf` 仍未产生有效媒体。独立 BARS 输出 **124 PCM WAV + 124 无损 AMTA v5**。
- UI2D 提取 60 份 BFLYT/BFLAN 结构 JSON 和 11 份 FCPX 字体引用 JSON；另无损提取 **4 个嵌套 BNSH（175,632 字节）**，未解编译 Shader GPU 程序。
- R27 后未测：**Model 58,338；Layout 348；BARS 1,288；独立 BWAV 0**。累计有效核心媒体 **8,081（526 GLB、6,409 PNG、1,146 独立 WAV）**，BARS 独立累计 **4,112 PCM WAV、4,095 AMTA v5**。
- [完整 R27 技术文档](ACNH303_ROUND27_REMAINING_RESOURCES_REAL_EXTRACTION.md) · [逐源新增清单](../derived/3.0.3/r27_cumulative/source_delta.jsonl.gz) · [结果覆盖统计](../derived/3.0.3/r27_cumulative/coverage.json) · [长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r27-real-unmeasured40-20261015)（6 个真实产物分卷与 SHA256SUMS）。
- **下一轮必须将 R27 的 40 个源纳入排除集合**；目前 R27 选源器以 R19 为基线，不可未经更新再次执行并把重复文件当新源。AMTA v5 播放字段、完整 BFRES 动画、BNSH GPU shader 语义和 EventFlow 执行器仍待研究。


## 2026-10-15 R28：Layout/BARS/Model 224 新源 + 28 份 BNSH 原始二进制对照（完成）

- [最终成功 Actions #38659968059](https://github.com/969981/ACNH_Resources/actions/runs/38659968059)：16 个新原始源转换分片、R19+R27 去重、真实文件 SHA 复核、BNSH Native 对照及 Release 全部通过。原始 NCA/ExeFS 不变。
- Model 128、Layout 48、BARS 48，**224 个新原始源**；新增 **22 GLB + 662 PNG = 684 个核心媒体**；BARS 单独 **591 PCM WAV + 591 无损 AMTA v5**。
- UI2D 新增 **271 个 BFLYT/BFLAN 结构 JSON、51 个 FCPX 字体引用 JSON**；24 份真实 BNSH 编译资源（1,118,888 字节）按成员无损导出。本轮 5 个 Model/Layout 原始源 **no_target_leaf**，不冒充成功媒体。
- BNSH Native：历史 R27 4 + 新 R28 24 共 **28 个真实成员 / 20 个不同 SHA**；R28 独有新 SHA 17。全部 28 个文件 `+0x16` u16=0x60、`+0x1C` u32 等于实际长度、`+0x18` u32 在文件边界内；需继续恢复真实 section 指针及 Shader Variation，而不是假设已经还原全部 GPU 程序。
- R28 后未 L3 测试：**Model 58,210、Layout 300、BARS 1,240、独立 BWAV 0**。核心有效媒体累计 **8,765**（548 GLB、7,071 PNG、1,146 独立 WAV）。BARS 单独累计 **4,703 PCM WAV、4,686 AMTA v5**。
- [R28 完整报告](ACNH303_ROUND28_BACKLOG_NATIVE_BNSH_GUIDE.md) · [真正增量统计](../derived/3.0.3/r28_cumulative/coverage.json) · [224 源去重清单](../derived/3.0.3/r28_cumulative/source_delta.jsonl.gz) · [Native 原始字节证据](../derived/3.0.3/r28_native_bnsh/structure.json) · [永久 21 附件 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r28-layout-bars-model-bnsh-20261015)。
- **R29 选源必须排除 R19+R27+R28** 的三个层级，不能原样重复运行 R28 Selector。5 个无媒体目标的已测源应与纯未测源分开；BNSH/AMTA/动画/事件业务语义保持待研究。


## 2026-10-15 R29：80 个真正新原始资源 + 38 BNSH Native 完整结构链（已验收）

- [实际转换 Actions #38661602702](https://github.com/969981/ACNH_Resources/actions/runs/38661602702)：6 个原始分片、按 R19+R27+R28 严格排除、SHA 来源审计、Release 工件二次字节验证都成功，发布 [R29 永久资源包](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r29-80-real-media-bnsh-20261015)。
- 新源 **Model 32 / Layout 24 / BARS 24，共 80**；媒体 **5 GLB + 224 PNG = 229**；BARS 独立 **514 有效 PCM WAV + 514 原生 AMTA v5**；Layout 另 **110 份 BFLYT/BFLAN JSON + 21 份 FCPX 结构 + 10 个原生 BNSH（360,664 字节）**。共 1 个 Model/Layout `no_target_leaf`，不虚报完整媒体解码。
- [R27+R28+R29 BNSH 原始字节对照 Actions #38661854995](https://github.com/969981/ACNH_Resources/actions/runs/38661854995)：真实 BNSH **38 个成员 / 25 种唯一 SHA**；38 个 `grsc`、38 个 `_STR` 块，有效的 `_RLT`，**207 Variation/Program/Parent/Reflection 链**，**1,014 个有真实名字的资源字典对象**，**2,941 个重定位 Entry**。Program/Reflection 名称还不是 GPU Slot 映射。
- 本轮后未测：**Model 58,178 / Layout 276 / BARS 1,216 / 独立 BWAV 0**。累积核心有效媒体 **8,994**（**553 GLB / 7,295 PNG / 1,146 独立 WAV**）；BARS 另外累计 **5,217 PCM WAV / 5,200 AMTA v5**。
- [完整 R29 技术指南](ACNH303_ROUND29_BNSH_RELOCATION_VARIATION_REFLECTION.md) · [媒体增量报告](../derived/3.0.3/r29_cumulative/coverage.json) · [80 新源清单](../derived/3.0.3/r29_cumulative/source_delta.jsonl.gz) · [38 个 Native 来源与资源绑定字典摘要](../derived/3.0.3/r29_native_bnsh/expanded_38_summary.json)。
- **下一轮 R30 去重选源必须增加排除 R29 80 源**；当前 R29 选源器不排除自己，不能再次运行而重复计新源。GPU shader 代码解码、Texture 实际绑定 slot、AMTA 播放、BFEVFL Native dispatcher 仍待验证。


## 2026-10-15 R30：Program→Vertex/Fragment 原始代码字节 + 48 新源（已验收）

- [R30 Native 全部通过 Actions #38662766756](https://github.com/969981/ACNH_Resources/actions/runs/38662766756)：沿 R27-R29 原始 38 个 BNSH／25 个唯一 SHA，**38 个文件内有效 Shader Binary Pool，287 个 NV Magic 成员候选**，按原始 Program Stage +0x10 指针、+0x18 字节长度和 NV Magic 解析了 **207/207 Vertex + 207/207 Fragment = 414 条实际二进制代码引用**；365 个长度恰好到下一 Magic 分界，49 个有差异但仍位于 Pool 内。去重为 16 种 Vertex Code 和 27 种 Fragment Code。真实 Reflection 名称均已用 Program 地址与代码 SHA 配对；GPU Binding Slot、真实 Material Variation 选择和 GPU ISA 反汇编仍未完成。
- [R30 真正新原始源 Actions #38662545630](https://github.com/969981/ACNH_Resources/actions/runs/38662545630) 成功，**Model 24／Layout 12／BARS 12，合计 48 个**，排除 R19、R27、R28、R29 已测原始路径。新媒体 **7 GLB + 123 PNG = 130**（36 个 Model/Layout 均有有效媒体）；BARS 独立 **221 有效 WAV + 221 原生 AMTA v5**；Layout 另 **55 份 BFLYT/BFLAN 结构 JSON，9 份 FCPX 字体引用，8 个无损 BNSH（268,568 字节）**。这新增 8 个 BNSH 尚未加入 38 个历史 Native 样本。
- [R30 48 个新原始源永久 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r30-48-real-media-bnsh-20261015)：6 个实际资源分卷、`coverage.json`、`source_delta.jsonl.gz`、`r30-release-verification.json` 与 `SHA256SUMS.txt`。
- 累计核心媒体 **9,124**（560 GLB、7,418 PNG、1,146 独立 WAV），BARS 另外 **5,438 PCM WAV、5,421 原生 AMTA v5**。R30 后仍未进行 L3：**Model 58,154；Layout 264；BARS 1,204；独立 BWAV 0**。
- [R30 详细 Native 与解包指南](ACNH303_ROUND30_SHADER_BINARY_POOL_STAGE_CODE_GUIDE.md)；机器报告位于 `derived/3.0.3/r30_native_shader_pool/`，新的 48 源审计位于 `derived/3.0.3/r30_cumulative/`。
- **R31 必须将 R30 新 48 个源路径加入历史排除集合**，不要重跑 R30 选源器并把相同输入重复统计。下阶段优先验证 49 个 Code Length/Magic 不一致者，补入新增 8 个 BNSH 的 Program-Reflection-Code 链，再追运行时 Material→Variation 和 GPU Slot 映射。


## 2026-10-15 R31：真实 46 BNSH／代码长度零区与原始 ELF 只读静态审计＋40 新源

- **Native**：R27–R30 的 46 个真实 BNSH / 28 unique SHA，**237 Program、474 Stage Code 引用**（237 Vertex + 237 Fragment）均在 Binary Pool 中有原始字节、边界、SHA 和 Program→Reflection 身份链；332 个 NV magic 切分候选。代码 SHA 20 Vertex / 31 Fragment。到下一个魔数长度 417 完全吻合、57 不同；57 个差异间隙读回全为 `0x00`，共 194,304 字节，未发现越过下一个 NV magic。**仅是可复核零填充证据，不是 GPU 编译器具体对齐语义证明。**
- **ELF**：[原始 ELF Workflow #38665252046](https://github.com/969981/ACNH_Resources/actions/runs/38665252046) 成功，SHA 坚持为 `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`，`0x286160` 直接来电 1、`0x24E3C0` 直接调用 74，原始 `uTexture%d`、`uConstantBufferForVertexShader` 锚点复核。实际 Material→Variation→GPU Binding Slot 必须实机逐对象读取验证，目前保留 UNPROVEN。
- **新增源**：[R31 40 原始源 Actions #38665115487](https://github.com/969981/ACNH_Resources/actions/runs/38665115487) 成功，排除 R19/R27/R28/R29/R30 全部已测来源。Model 16、Layout 12、BARS 12。实际 1 GLB + 122 PNG=123 核心媒体，独立 BARS 94 PCM WAV + 94 无损 AMTA v5，61 BFLYT/BFLAN JSON、11 FCPX 字体引用、7 BNSH 235,376 字节；1 个 Model/Layout `no_target_leaf` 严格单列。[R31 真实分卷 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r31-40-real-media-bnsh-20261015)。
- **累计**：9,247 core media=561 GLB+7540 PNG+1146 standalone WAV；BARS 分开累计 5,532 PCM WAV+5,515 raw AMTA。未测：Model **58,138**、Layout **252**、BARS **1,192**、独立 BWAV **0**。
- [R31 详细研究与实机验证清单](ACNH303_ROUND31_SHADER_CODE_GAPS_RUNTIME_MATERIAL_PROBE.md)；机器结果 `derived/3.0.3/r31_native_shader_pool/`、`derived/3.0.3/r31_runtime_material/`、`derived/3.0.3/r31_cumulative/`。
- **R32 去重必须新增排除 R31 40 个已测原始路径**；下一步补入本轮另外 7 个新 BNSH，对 57 条零区追真正二进制对齐机制、实机绑定资源和 Material→Variation 的实例链。
