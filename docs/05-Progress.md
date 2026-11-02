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

合计新生成 **63 个实际产物：8 JSON + 8 GLB + 31 PNG + 16 WAV**；这是增量新增数，不包括迁入的旧成果。原 `Bcsv` 下 **234 个 BCSV 已有 468 个 CSV/JSON 文件**，本阶段不把旧 CSV 重复统计为新增。

> [!warning] Layout 结构层
> 两个源没有可转换的 BNTX 纹理，它们不是损坏的源文件；较早一版媒体封装将这类情况标成 failure，目前正在改成 `no_output`，以便与真正的解码错误区分。即便 31 PNG 验证通过，BFLYT/BFLAN 的完整 UI 动画及渲染语义仍未达到 L4。

本批次期间也修复了两个真实故障：媒体转换暂存目录不在仓库根导致 L3 校验报错；历史 nintoolbox `nightly-20261013` 发布地址失效，改为有 SHA256SUMS 的 `nightly-20261028`。旧失败运行保留为证据，不当作完成进度。
