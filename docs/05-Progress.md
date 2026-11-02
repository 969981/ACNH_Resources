---
title: 解包覆盖率与待解决事项
tags: [status, audit]
---
# 当前状态与优先级

## 实际已导入本分支的内容
- 原始 NCA/0、NCA/1 **全部源 Git Tree**，原文件未修改。
- `Scripts/`：迁入旧分支的 52 个既有工具、测试、依赖文件，并新增 `mirror_unpack.py`。
- `UnPack/1/`：迁入原分支已发布的 AnimationInfo、BCSV、EventFlow、Layout、Message、Sound、Stage 中的真实输出（保留其子结构）；Model 中原来带 `.zs.converted/` 的 27 份已发布样本按新命名规范平铺为 GLB 或 PNG。
- `UnPack/0/main.elf`：指向原分支已有真实 ELF Blob。

这些不是全量资源。**新分支建立不等于在本次操作期间重新执行全部转换器**。已发布成果的验证详见旧版报告；本次仅做 Git 对象级内容复用和重命名。

## 仍需执行
- 扫描原始整个树，运行 `mirror_unpack.py scaffold`，在本地生成深层目录。
- 将约 10 万源分类型/分片进行可复现解码。现有解析器只覆盖部分格式和语义层。
- 继续推进 BFRES/BNTX 批量转换、FMAA 材质动画、BARS、AAL 外部采样、BDLI、EventFlow、Shader 的真实语义验证。
- 提供每批源数量、支持/不支持数、解码失败数、输出 SHA-256；不要把已识别头或部分解析统计为 L3/L4 完成。

历史依据：[[06-Evidence]]。
## 2026-11-02 — 新增真实增量分片（首次执行与修复）
统一脚本 [[07-Incremental-Batches]] 已上线，所有新增文件均保留相对源路径、输入 Git blob SHA、源/输出 SHA-256，发布前重新核验。

| 类别 | 源文件 | 新增真实产物 | 实测状态 |
| --- | ---: | ---: | --- |
| Param | 8 BYML | **8 JSON** | 8 converted / 0 error（[Run 41377475498](https://github.com/969981/ACNH_Resources/actions/runs/41377475498)） |
| Model | 8 Zstandard/FRES | **8 GLB** | 8 converted / 0 error（[Run 41377802429](https://github.com/969981/ACNH_Resources/actions/runs/41377802429)） |
| Layout | 8 Zstandard/布局 | **31 PNG** | 6 源含真实纹理；2 源只含 BFLYT/BFLAN，无 BNTX（[Run 41377837521](https://github.com/969981/ACNH_Resources/actions/runs/41377837521)） |
| Sound 第 1 组 | 8 BWAV | **8 WAV** | 8 converted / 0 error（[Run 41377232391](https://github.com/969981/ACNH_Resources/actions/runs/41377232391)） |
| Sound 第 2 组 | 8 BWAV | **8 WAV** | 8 converted / 0 error（[Run 41377567594](https://github.com/969981/ACNH_Resources/actions/runs/41377567594)） |
| Bcsv 既有结果复核 | 8 BCSV | **8 CSV + 8 JSON（重复验证，不计新增）** | 8 converted / 0 error（[Run 41378321451](https://github.com/969981/ACNH_Resources/actions/runs/41378321451)） |

合计新生成 **63 个实际产物：8 JSON + 8 GLB + 31 PNG + 16 WAV**；这是增量新增数，不包括迁入的旧成果。原 `Bcsv` 下 **234 个 BCSV 已有 468 个 CSV/JSON 文件**，本阶段不把旧 CSV 重复统计为新增。

> [!warning] Layout 结构层
> 两个源没有可转换的 BNTX 纹理，它们不是损坏的源文件。已在 [Layout 复核 Run 41378213870](https://github.com/969981/ACNH_Resources/actions/runs/41378213870) 中证实：**6 partial（31 个有效 PNG），2 no_output，0 failed**。BFLYT/BFLAN 的完整 UI 动画及渲染语义仍未达到 L4。

本批次期间也修复了两个真实故障：媒体转换暂存目录不在仓库根导致 L3 校验报错；历史 nintoolbox `nightly-20261013` 发布地址失效，改为有 SHA256SUMS 的 `nightly-20261028`。旧失败运行保留为证据，不当作完成进度。

**当前新分支实际有效 RomFS 输出文件数：2,208**（按 Git Tree 复核，剔除 `.gitkeep`；此前迁移 2,145 + 本轮新增 63）。另有 ExeFS 的 `UnPack/0/main.elf`，不参与 RomFS 计数。后续批次应继续记录全局唯一源路径/哈希，避免把复核产物累加到新增数。


## 2026-11-02 — 第二阶段第一轮实测（shard 0/8）
已运行 [[08-Next-Wave-FMAA-AAL-BARS]] 自动续跑，以下是 GitHub Actions 实际产物，而非目标值：

| 类别 | 本轮偏移 / 输入 | 实际有效产物 | 独立状态 |
| --- | --- | --- | --- |
| Param | 8–15 / 8 | 8 JSON | 8 converted、0 failed，[Run 41379351661](https://github.com/969981/ACNH_Resources/actions/runs/41379351661) |
| Model | 8–15 / 8 | 8 GLB | 8 converted、0 failed，[Run 41379402176](https://github.com/969981/ACNH_Resources/actions/runs/41379402176) |
| Layout | 8–15 / 8 | 33 PNG | 8 partial、0 failed，[Run 41379447647](https://github.com/969981/ACNH_Resources/actions/runs/41379447647) |
| Sound | 16–23 / 8 | 8 WAV | 8 converted、0 failed，[Run 41379494570](https://github.com/969981/ACNH_Resources/actions/runs/41379494570) |

**本轮共 32 个未重复来源、57 个经输出哈希复核的真实媒体/JSON 文件。** Layout 的 partial 是可用纹理已导出但还没有完整 BFLYT/BFLAN 及运行时语义；不能把 8 个 partial 当成完全 L4 完成。按本分支原先已复核的 2,208 个有效 RomFS 输出加本轮 57 个新增文件，累计暂为 **2,265**，需要后续再次做全树独立 Git Tree 复核。BARS/FMAA/AAL 专项工作流仅采集进一步证据，不等于相关格式已全语义解码。

## 2026-11-02 — 第二轮 24×4 与 R47 历史研究衔接

来自仓库实际提交和报告（不由计划数量推断）：Param +24 JSON（[Run 41379697858](https://github.com/969981/ACNH_Resources/actions/runs/41379697858)）、Model +24 GLB（[Run 41379737898](https://github.com/969981/ACNH_Resources/actions/runs/41379737898)）、Layout +125 PNG（14 partial、10 no_output，[Run 41379778052](https://github.com/969981/ACNH_Resources/actions/runs/41379778052)）、Sound +24 WAV（[Run 41379820695](https://github.com/969981/ACNH_Resources/actions/runs/41379820695)）。共 **96 个新来源、197 个有效输出、0 failed**；不能算 10 个 Layout no_output 已解码。本次会话两轮累计 **128 来源、254 产物**，上一次全树核验的 2,208 个 RomFS 输出加本轮 254 个按无碰撞增量推算为 2,462，**尚未执行完整全树复核**。

另保留旧 R47 分支 218 个缺失的研究脚本与 7 份 R41–R47 文档，详见 [[08-Next-Wave-FMAA-AAL-BARS]]。这是**程序/技术记录复用**，不是将旧 derived/3.0.3 数据、旧分支测试的所有模型或 BARS 真实媒体文件搬迁至这个 UnPack 路径。R47 已确证 Cedar TexSrt 24 B/Type 30/offset 0x184，而 AAL 实际 I/O 和 FMAA 运行时 binding 仍未验证。

## 2026-11-02 — R49 FMAA/AAL Native 动态证据接口

已提交 [[ACNH303_ROUND49_FMAA_RUNTIME_WRITE_AAL_CALL_RETURN]]，不是游戏运行时验证成功：

- `Scripts/acnh303_round49_live_observer_gdb.py`：需要真实游戏进程中的 TexSrt RAM 指针和/或从 R46 实测 X8 获得的目标 RVA，才能对材质 +0x10 的写入、候选函数入口/返回进行限量取证。不能把源文件 `0x194` 当作 RAM/GPU Uniform 地址。
- `Scripts/acnh303_round49_runtime_audit.py`：将原版 R46/R47 源报告与有 SHA 的有限日志自洽校验；可选 `--dispatch` 严格要求 R49 AAL 目标来自同会话 R46 两个虚表槽。**即使自洽仍为 STRUCTURALLY_COHERENT_UNATTESTED。**
- 恢复的原始 `derived/3.0.3/r39_aal_manager/original_manager_vtable_and_path_native_code.json` 与历史研究分支 Git Blob SHA **6b3890fdd9d7b4bb34c62a25f95371cb848799bd** 完全相同，作为 AAL X22/X21/X24 来源与静态指令复核依据。
- [R49 Actions #41382219051](https://github.com/969981/ACNH_Resources/actions/runs/41382219051)：**success**，R47/R48 源数据与 R49 synthetic/negative 回归通过，生成无真实会话的 `NOT_CAPTURED` 报告。
- [R47 compatibility #41382005954](https://github.com/969981/ACNH_Resources/actions/runs/41382005954)：**success**，修复缺少真实 R39 ELF 派生依据导致的 R46 回归失败；R44 大型旧累计 source_delta 数据未迁移，因此两项依赖旧数据的完整覆盖回归未执行。

Native FMAA SubBind、真实 Uniform 写回、GPU 纹理移动，以及 AAL FileOpen/Read/Close + handle/buffer/file SHA 对照，目前均为 **NOT_CAPTURED / UNVERIFIED**。此阶段**未新增 RomFS 语义 L4 完成数**，也未增加媒体转换产物计数。
