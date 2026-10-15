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


## 2026-10-15 R32 — 全量 103400 原始文件中哪些仍未解包（已真实审计）

[独立 R32 详细指南](ACNH303_ROUND32_FULL_UNTESTED_PATHS_AND_NATIVE_PROGRESS.md) · [全部 **59,494** 个未测原始路径的 SHA 校验 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-exact-remaining-source-backlog-20261015)。导出的 `untested_after_r32.jsonl.gz` 含全部未做 **对应 L3** 测试的路径及原始大小，另一份 `tested_without_valid_core_media.jsonl.gz` 独立列出已测无媒体的 147 个源（146 `no_target_leaf`、1 `failed`）；**不把 BDLI/EventFlow 另有解包与 Native 内部语义未恢复误算为源文件尚未提取**。GitHub Release 自带 SHA256SUMS。

- 权威 **103,400** 源文件 / **24** 一级目录。大类 Model **60,166**、BDLI **36,708**、Sound **2,848**、Layout **960**、EventFlow **877**、Param **637** 等；原始 `BDLI` 先前已有单独提取流水线，原生执行/绑定仍待验证。
- [R32 原始 88 个此前未测源的实际转换 Actions #38667751972](https://github.com/969981/ACNH_Resources/actions/runs/38667751972) 全部成功，独立 Model 40、Layout 24、BARS 24；**3 GLB + 206 PNG**，BARS **229 PCM WAV + 229 原生 AMTA**，UI2D **113 份 JSON + 26 FCPX 引用**，**11 原生 BNSH / 460,976 字节**；Model/Layout 62 个有有效媒体，2 个 `no_target_leaf`，SHA 来源排除了 R19/R27/R28/R29/R30/R31 已测原始路径。[R32 实际文件 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-88-real-media-bnsh-20261015)。
- R32 后剩余 L3 未测试 Model **58,098 / 60,166**、Layout **228 / 960**、BARS **1,168 / 1,696**、独立 BWAV **0 / 1,146**。累计有效核心媒体 **9,456**（564 GLB / 7,746 PNG / 1,146 独立 WAV），BARS 另外累计 5,761 WAV / 5,744 AMTA（不可混入独立 BWAV 源计数）。
- [R32 真正 Native 验收 #38667687544](https://github.com/969981/ACNH_Resources/actions/runs/38667687544)：R27–R31 的 53 个真实 BNSH/31 SHA，267 Program、534 个直接 Vertex/Fragment 字节 SHA 链接、373 NV Magic 分片、469 长度吻合、65 零字节间隔累计 219,392 字节。R32 此轮新增的 11 个 BNSH 还没纳入 53 源 Native，下一轮 R33 继续。
- 全量目录及独立错误来源均见 `derived/3.0.3/r32_backlog/status_after_r32.json`、`untested_after_r32.jsonl.gz`、`tested_without_valid_core_media.jsonl.gz`；R32 媒体证据见 `derived/3.0.3/r32_cumulative/`，BNSH Native 见 `derived/3.0.3/r32_native_shader_pool/`。
- **R33 新选源必须追加排除 R32 `source_delta.jsonl.gz` 的 88 个源**，其余 R19 及 R27–R31 历史全保留。优先调查一个真实 `failed`，继续未测 Model、Layout、BARS，单独研究零填充机制、AMTA、LBLI/EventFlow 原生消费者和实机 Material→Variation→GPU Slot。


## 2026-10-15 R33 — 原始失败文件复现 + 240 新源 + 64 BNSH + 59,254 未测路径

- 真实原始 BFRES 历史失败：`Model/CharactorAnimation20000.Nin_NX_NVN.zs`，2,418,203 字节，SHA `97c70c9355a66f7b4623956357d824f307ae0855411acc584bfc9af1ca73111a`。SHA 原件解包得 6,528,992 字节的 `output.bfres`，含 406 次 **FSKA 魔数出现**、FMDL/FVTX/FSKL 各 0 次；BFRES→GLB 转换器历史错误在本轮仍可稳定复现。**不能推断 406 个有效动画；应改为 Native FSKA 轨道分析，不伪造 GLB**。[真实单源回归 Actions #38672897735](https://github.com/969981/ACNH_Resources/actions/runs/38672897735) 验证了来源、重放与报告，`derived/3.0.3/r33_failed_source/byte_replay_analysis.json` 存档。
- [R33 240 个之前未测原始源的 12 分片 Actions #38672661553](https://github.com/969981/ACNH_Resources/actions/runs/38672661553) 全部通过：Model 80 / Layout 80 / BARS 80；14 GLB + 728 PNG = **742 核心媒体**；另 **921 有效 BARS PCM WAV + 922 无损 AMTA**、428 BFLYT/BFLAN JSON、85 FCPX 字体引用、42 原始 BNSH（1,742,744 字节）。5 个 Model/Layout `no_target_leaf` 并未计为媒体成功。[R33 完整源实际 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r33-240-real-media-bnsh-20261015) 含 12 个真实数据分卷和 SHA256SUMS。
- 1 个新增 BARS 成员的音频解码失败：`Sound/Resource/Env_TourCounterDemo.bars`，源仅 296 字节；asset 0 `BWAV` 168 字节、原始偏移 128；`vgmstream` exit 1，实际 WAV 不存在。已经通过 [R33 BARS 故障审计 #38673338088](https://github.com/969981/ACNH_Resources/actions/runs/38673338088) 精确记录，**不把 922 个 AMTA 提取错误称为 922 WAV 转换成功**。
- [R33 Native 64 原始 BNSH 成功 Actions #38672453106](https://github.com/969981/ACNH_Resources/actions/runs/38672453106)：原 R27–R32 的 64 BNSH/36 unique SHA，324 Program/Variation、648 真实 VS+FS 代码引用、455 NV Magic 划界候选，570 代码长度与下一 magic 严格吻合、78 原始零间隔合计 259328 字节。新 R33 的 42 BNSH 尚未加入 64 个 Native 样本，R34 继续；真实 GPU Slot / Material Instance 尚待动态数据证实。
- 累计核心媒体 **10,198**（578 GLB、8,474 PNG、1,146 独立 WAV），BARS 累计 **6,682 有效 PCM WAV＋6,666 原生 AMTA**，严格分开。R33 后 L3 未测试 Model **58,018**、Layout **148**、BARS **1,088**、独立 BWAV 0，合计 **59,254 原始路径**。[精确 59,254 文件清单 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r33-exact-remaining-source-backlog-20261015)，另有已测但无 GLB/PNG 的 152 个源（151 no_target_leaf＋1 failed）。
- [R33 完整技术报告](ACNH303_ROUND33_ANIMATION_FAILURE_240_NEW_SOURCES_64_BNSH.md)。R34 优先 FSKA 原生动画、168 字节 BWAV 兼容性、剩余 Layout/BARS 和大规模 Model；选源器务必新增排除 `derived/3.0.3/r33_cumulative/source_delta.jsonl.gz` 240 个真实已测路径。


## 2026-10-15 R34：406 FSKA 真动画曲线、168 字节无声音 BWAV、全 Layout L3、106 BNSH

- [R34 深入技术报告](ACNH303_ROUND34_TRUE_FSKA_168B_BWAV_106_SHADER_RESEARCH.md)／[真 FSKA 与 BWAV Actions #38674383663](https://github.com/969981/ACNH_Resources/actions/runs/38674383663)：从原始 SHA 不变的 `CharactorAnimation20000.Nin_NX_NVN.zs` 成功解出 6,528,992B FRES，BfresLibrary 1.6.0 **真实解析 406 个 FSKA SkeletalAnim／23,142 个 BoneAnim 引用／57 种骨骼名／24,281 个 Cubic AnimCurve／393,029 个关键帧值**。**不是**仅扫描魔数 406 次。无原始网格无法硬凑 GLB；实机模型骨架绑定仍待单独研究。[完整 FSKA 独立求和/摘要 Actions #38674796604](https://github.com/969981/ACNH_Resources/actions/runs/38674796604)；`derived/3.0.3/r34_fska/` 含全部曲线与紧凑摘要。
- 真实 168B BWAV（`Env_TourCounterDemo.bars`）证实是双声道 DSP-ADPCM/48kHz **只含声道 Header，没有实际 sample payload**；sample offset=192 超出 168 字节文件，file sample count 为零，因此独立 PCM WAV 不能生成；不虚构采样。`derived/3.0.3/r34_bwav/failed_bwav_native.json`。
- [R34 新 388 个源 12 分片真实解包 Actions #38674842841](https://github.com/969981/ACNH_Resources/actions/runs/38674842841) 成功：Model 80、Layout **148（剩余全部测完）**、BARS 160。真实 **16 GLB + 1250 PNG = 1266 核心媒体**，BARS **1391 有效 WAV + 1615 原生 AMTA**，752 份 BFLYT/BFLAN JSON、155 份 FCPX 字体引用、**80 个精确 BNSH**（3,239,080 字节）。22 Model/Layout 无媒体目标。 [R34 真正媒体 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r34-388-real-media-bnsh-20261015) 有 12 个源数据分卷和 SHA256SUMS。
- BARS 有 **224 个解码失败 BWAV 成员**，经 [4 份 Sound 原始报告的独立审计 #38675176099](https://github.com/969981/ACNH_Resources/actions/runs/38675176099) 证实仅分布在 **3 个 BARS 原始文件**（TV_Normal 222，Dal_Wipe 1，Event_Demo_Wherearen_Op 1），成员 **221×128B、3×92B**；不能把 1615 个 AMTA 当作 1615 个 WAV。精确 224 成员 SHA/原始位置/错误在 `derived/3.0.3/r34_bwav/failed_members_224.json`。
- [R34 全源库存 Actions #38675220689](https://github.com/969981/ACNH_Resources/actions/runs/38675220689) 完成：L3 已测试 **Layout 960/960**、Model 2,228/60,166、BARS 768/1696、BWAV 1,146/1,146。**仍未测试 Model 57,938、Layout 0、BARS 928、BWAV 0，共 58,866**。 [全 58,866 源路径 SHA 包](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r34-exact-remaining-source-backlog-20261015)。另外已测试无有效核心媒体 174 条（173 no_target_leaf + 1 历史 failed），不能混入未测清单。
- 核心媒体累计 **11,464** = 594 GLB + 9,724 PNG + 1,146 独立 BWAV WAV；BARS 另外累计 8,073 实际 PCM WAV + 8,281 原生 AMTA。原始 ELF 运行时 Material/GPU Slot 未证明。
- [R34 106 BNSH 原始真结构成功 Actions #38674553820](https://github.com/969981/ACNH_Resources/actions/runs/38674553820)：106 源/47 unique SHA；531 Program、1062 实际 VS+FS Code、760 NV magic 候选、934 长度吻合、128 零间隙 407808 字节。R34 新 80 个 BNSH 还没有纳入这 106 个 Native，下一轮 R35 继续。
- **R35 新选源必须增加排除 R34 的 `source_delta.jsonl.gz` 共 388 个源**，历史 R19 和 R27–R33 均仍排除；Layout 的下一步应研究已提取资源真正的 native 语义/渲染，不应重复 L3 选源刷量。FSKA 下一步匹配真实外部 FSKL/FMDL 并验证动画播放器中的 Hermite/Cubic 插值。


## 2026-10-15 R35 — PlayerBody 可动画 GLB 验证、320 新源、186 BNSH、全部 BWAV 短头

- **首次生成真实模型加动画的 GLB**：原始 `PlayerBody.Nin_NX_NVN.zs` SHA 复核、FRES 实物 828,688 字节，经 BfresLibrary 确认 **11 FMDL Shapes / 46 FSKL joints**，与 R34 原始 406 FSKA 的 57 个骨骼中 **38 个同名**；模型转换器真实产生含 11 Mesh、1 Skin、46 joints 的 GLB。用实际 Cubic Hermite Value/In/Out 对三个玩家动作逐整数帧采样，生成 **13 个 glTF animation channels**。文件 `PlayerBody_3_FSKA_frame_sampled.glb` 963,976B、SHA `4742148c5f4066b68f76b50028dca4ccca440672529e662ea7b7158f626ab597`。 [真实成功 CI #38677121992](https://github.com/969981/ACNH_Resources/actions/runs/38677121992)／[含 GLB 与 SHA 的 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-playerbody-skin-fska-animated-glb-20261015)。**19 个骨骼未匹配，3 个样本动画的 13 通道不代表完整 57 轨道**；30fps 为假设、帧间采用 LINEAR 模拟 native Hermite，不承诺原游戏逐帧同值。
- **短 BWAV**：R34 的 224 个短成员经原始 source/member SHA 逐条读取，**224/224 个头部结构有效且都没有文件内可访问采样**，[CI #38676083980](https://github.com/969981/ACNH_Resources/actions/runs/38676083980)。R35 新的 `NpcSP_kpp.bars` 又有 **4 个 BWAV 成员（3×128B、1×92B）无法 PCM 解码**，原始 SHA 和每条偏移独立复核，[CI #38677425597](https://github.com/969981/ACNH_Resources/actions/runs/38677425597)、[native Header 逐成员校验 #38677540013](https://github.com/969981/ACNH_Resources/actions/runs/38677540013)。不凭空声明 external PCM/stream 已定位。
- [R35 320 个未测原始新源 8 分片 CI #38677104491](https://github.com/969981/ACNH_Resources/actions/runs/38677104491) 全部完成：Model160+BARS160，**GLB14＋PNG205＝219 新核心媒体**、BARS 1,711 真正 PCM WAV＋1,715 原生 AMTA、4 decode_failed、2 Model no_target_leaf。Layout 960/960 早已测试，不重新计数。[永久 R35 媒体 SHA Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-320-real-media-bars-20261015)；可播放 PlayerBody GLB 是专项 re-conversion，不计 320 新源。
- [R35 全 103400 路径源审计 CI #38677476554](https://github.com/969981/ACNH_Resources/actions/runs/38677476554)：**剩余 58,546 个从未做对应 L3 的真实源**（Model **57,778**、Layout **0**、BARS **768**、独立 BWAV **0**）；[精确原始名称＋大小 SHA Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r35-exact-remaining-source-backlog-20261015)。累计核心媒体 **11,683＝608 GLB＋9,929 PNG＋1,146 standalone WAV**；BARS 另计 **9,784 有效 PCM WAV、9,996 原生 AMTA**。
- [R35 186 真 BNSH Native CI #38676409229](https://github.com/969981/ACNH_Resources/actions/runs/38676409229)：原始 186 members／70 unique BNSH SHA、915 Program/Variation、1,830 Stage code SHA、1,322 NV Magic 候选、1,610 下一 magic 长度吻合、220 原始全零间隔合计 716,288B。未证明实时 Material→Variation→GPU Slot 语义。
- [完整 R35 原始结构、glTF 动画与实验说明](ACNH303_ROUND35_PLAYERBODY_FSKA_SKIN_GLTF_BWAV_186_BNSH.md)。**R36 Source Selector 必须排除 R35 本轮 `source_delta.jsonl.gz` 320 个新文件**，保留既有全部历史；验证 Player 部件剩余19骨骼、多部件 Skin、Hermite 与真 30fps，继续 57,778 Model 和 768 BARS，以及短 BWAV 外部引用消费者，不准将已测音频头伪造成真正 PCM。
