---
title: 解包命名及目录映射
tags: [conventions, unpack]
---
# 原文件 → UnPack 对应规范

```text
e10617820db06889e1638499478da0de_NCA/
├─ 0/main                        -> UnPack/0/main.elf
└─ 1/
   ├─ Bcsv/AITag.bcsv            -> UnPack/1/Bcsv/AITag.csv + AITag.json
   ├─ AnimationInfo/X.byml       -> UnPack/1/AnimationInfo/X.json
   ├─ Model/X.Nin_NX_NVN.zs      -> UnPack/1/Model/X.Nin_NX_NVN.glb
   └─ Model/Y.Nin_NX_NVN.zs      -> UnPack/1/Model/Y.Nin_NX_NVN.img000.png (+ img001/...)
```

## 约束
1. **路径和基础名相同**；仅更换扩展名或在多产物情况下插入 `.imgNNN` / `.leafNNN`。
2. 一个源文件可能产生多个输出（多张纹理、多个模型、CSV+元信息 JSON），不能要求仅有一份。
3. 二进制未解时，**不复制原始文件冒充解包结果**；保持原始 NCA 目录不变。
4. 处理时必须记录源哈希及输出哈希；同路径不同内容不得静默覆盖。
5. `UnPack/1/` 的全部一级目录在 Git 中初始化；`scaffold` 在本地对 24 个分类以下的实际子目录递归镜像。
6. Git 不保存空目录，未生成转换产物的目录以 `.gitkeep` 保留。不得把这些占位文件算作解包产物。

先前 `3.0.3` 分支的 `Unpack/<NCA>/1/` 旧路径是技术历史，本分支规范是 `UnPack/1/`（注意大写 P 和不再重复 NCA 路径）。

## 映射证据
`UnPack/_meta/model_migration.json` 记录从原分支真实 GLB/PNG blob 重用的源目录与 Git SHA，对未通过格式核验的其它类型仍保持待处理。