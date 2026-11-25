---
name: acnh-assets-localization
description: "研究游戏原生图标、BFRES 模型、BNTX 纹理、BFSHA/BNSH 着色器、改造款式及 MSBT 多语言；用于资源映射与商品展示。"
---
# acnh-assets-localization

## 步骤
1. 固定资源版本、容器路径、格式和原始 SHA256；读取已有原生映射，区分生成图标与原版纹理。
2. 建立 ItemID → ResName → RemakeID → 模型/材质/图标的证据链；多款式分别记录 body/fabric 等参数，不从文件名猜关联。
3. 着色器研究分开 ShaderModel、StaticOption、DynamicOption、KeyTable、ShaderProgram；保留原生选项与程序证据。
4. MSBT 按 locale、表名、label 保存原始字符串及来源；14 语言为目标集合，缺失、重复、回退显式标注。
5. 输出清单、关联差异、校验值、必要缩略样本；不复制或发布未经授权的新增游戏素材。
## 验收
资源实际存在、映射覆盖率、缺失/歧义统计、原生文本与回退区分；抽样渲染不等于全量验收。
