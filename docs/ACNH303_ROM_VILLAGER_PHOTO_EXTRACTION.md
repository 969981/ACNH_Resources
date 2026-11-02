---
title: ACNH 3.0.3 原版村民照片、头像和道具图标提取
aliases:
  - ROM 村民照片
  - 原版村民图片
tags:
  - ACNH
  - 3.0.3
  - RomFS
  - BNTX
  - NpcBromide
  - reproducible
---

# 原版村民照片：ROM → BNTX → PNG

> [!important] 核验边界
> 这些 PNG 从本仓库 `3.0.3_Unpack` 分支中的原始 RomFS 二进制资源直接解压转换，**不是社区 CDN 抓取，也不是从 NPC 3D 模型重绘**。但是尚未完成游戏实际显示的 UI 合成一致性验证。
> `wimgt` 从 BNTX 进行 GPU 纹理解码，转换结果可能与另一解码器在颜色通道上相差 1/255，不能直接声称 RGBA 字节相等。

## 真实原始资源（已在 Model 的 60,166 个 Git 文件中核实）

仓库原始路径：`e10617820db06889e1638499478da0de_NCA/1/Model/`。

| 图片种类 | 原始 ROM 文件名前缀 | 原始文件数 | 输出路径 |
|---|---|---:|---|
| 村民照片／照片卡 | `Layout_NpcBromide_` | 481 | `assets/images/villager/photos/` |
| 村民头像 | `Layout_NpcIcon_` | 488 | `assets/images/villager/icons/` |
| 村民海报道具图标 | `Layout_FtrIcon_PosterNpc` | 486 | `assets/images/villager/posters/` |
| 村民照片道具图标（款式 0_0） | `Layout_FtrIcon_BromideNpc*_Remake_0_0` | 479 | `assets/images/villager/bromide-items/` |
| **合计** | | **1,934** | |

示例一：

```text
ROM: 1/Model/Layout_NpcBromide_NpcNmlAnt00.Nin_NX_NVN.zs
  └─ Zstandard 解压 → FRES 内嵌 BNTX
      └─ BRTI native texture name: NpcNmlAnt00
          └─ PNG: assets/images/villager/photos/NpcNmlAnt00.png
              ├─ Pillow 完整像素解码
              ├─ PNG CRC 和 SHA-256
              └─ 来源 ROM 压缩文件 SHA-256
```

示例二：

```text
ROM: 1/Model/Layout_NpcIcon_ant00.Nin_NX_NVN.zs
  └─ native BRTI name: ant00
      └─ assets/images/villager/icons/ant00.png
```

## 实测状态

[GitHub Actions Pilot 41391127574](https://github.com/969981/ACNH_Resources/actions/runs/41391127574) 已从原 ROM 成功解码 12 个样例，四类各 3 个，**源格式解码与逐张 PNG 完整校验通过，12/12**。该次工作流因 Git 暂存一个未创建的可选目录失败，随后修复并开展批量导入。

[成功的原版照片 250 张批次 41391247503](https://github.com/969981/ACNH_Resources/actions/runs/41391247503)：已验证 250 张原版村民照片入库；`assets/evidence/rom-villager/next-offset.json` 记录全流程游标。所有后续批次的报告和源 SHA 位于 `assets/evidence/rom-villager/`。

### 与 Library 中既有 villager.zip 的精度对比

对于 `NpcNmlAnt00`、`NpcNmlAnt01`、`NpcNmlAnt02`，原 ROM 解码图和 Library 参考图均为 256×256，α 完全相同；RGB 各通道最大误差为 **1/255**，因此非常接近，但**并非每个 RGBA 字节都完全一致**。原 ZIP 的 PNG 文件 SHA-256 和原 ROM 解码 PNG 也不同，不能混用它们的哈希。对于 `alp.png` 和 `alw.png` 头像亦观察到最多 1/255 的通道差异。所有这些比较只检验可用样本，并非 1,934 张的全量一致性证明。

## 可复现的命令

CI 下载使用之前 Babybed 已通过 SHA256SUMS 验证的固定 nintoolbox 构建版本，调用其中 `wimgt DECODE`；本地首先安装：

```bash
python -m pip install -r Scripts/requirements-media.txt
```

本地从 ROM 提取小样本：

```bash
python Scripts/acnh303_villager_rom_extract.py \
  --root . --wimgt /path/to/wimgt --pilot 3
```

自动从游标继续处理：

```bash
python Scripts/acnh303_villager_rom_extract.py \
  --root . --wimgt /path/to/wimgt \
  --pilot 0 --offset auto --limit 500
```

[GitHub Actions 入口](../.github/workflows/acnh303-villager-rom-extract.yml) 支持手动运行、批次持久化、可复核来源 SHA，以及在并行提交期间 fetch/rebase 后非强制重试。任务在源列表处理完毕后不会继续创建空批次提交；定时检查仅提供失败恢复途径，不代表每次都产生新图像。

## 边界与后续验收

1. **原始数据**：只读 `.zs`，以 Git 仓库真实原始文件路径及 SHA-256 追溯；每个 BNTX 至少完成真实 BRTI 解码。
2. **PNG**：仅一张内部 BRTI、解码器也返回一张纹理、且原 BRTI 名等于输出基本文件名时，才直接采用该原版命名。多 BRTI 文件将改为分开的候选纹理，绝不伪造完整图标。
3. **CDN 无关**：原版照片与 `assets/images/items/` 下此前的社区图标分开放置；仅当完成像素来源比对才考虑覆盖现有文件。
4. **失败重试**：每批来源、错误和输出文件 SHA 单独记录；少量坏源不会阻塞其他真实 ROM 文件，但绝不记为已成功转换。
5. **尚未宣称**：全套 8 种照片框重制组合、原版游戏 UI 像素级合成一致、或 Library ZIP 与全量原 ROM 文件位级一致。
