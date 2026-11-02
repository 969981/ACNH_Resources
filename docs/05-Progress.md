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