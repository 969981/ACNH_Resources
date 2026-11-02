---
title: ACNH 3.0.3 原版道具 PNG 图标提取
aliases:
  - ROM 道具图标
  - FtrIcon 原版 PNG
tags:
  - ACNH
  - 3.0.3
  - RomFS
  - BNTX
  - 原始素材
---

# 原版 Layout 图标：从 RomFS 直接转换 PNG

> [!important] 来源分层
> **原版图片来源**：`e10617820db06889e1638499478da0de_NCA/1/Model/Layout_*Icon_*.Nin_NX_NVN.zs`。
> **社区 CDN 来源**：`acnhcdn.com` / `img.iswitchplus.com`。
> 两种来源不能混同。对已有社区文件不会覆盖，ROM 版本存入 `assets/images/items-rom/` 并进行像素差异审计。

## 真实源文件清单和覆盖率

原版 `Model` Git tree 共计 60,166 个条目，实测包含：

| 原版路径类型 | 源文件数 |
|---|---:|
| `Layout_FtrIcon_*.Nin_NX_NVN.zs` | 25,794 |
| `Layout_ClosetIcon_*.Nin_NX_NVN.zs` | 5,480 |
| `Layout_NpcIcon_*.Nin_NX_NVN.zs` | 488 |
| `Layout_FtrIcon_FtrBabybed_Remake_X_Y.Nin_NX_NVN.zs`（前者子集）| 56 |

按 Library 的 `assets/catalog/expected-png-names.txt` **27,531 个不同名字**逐一查找同名 Layout FtrIcon、ClosetIcon、NpcIcon：

- **26,277** 个可直接匹配到真实 ROM 文件（约 **95.4%**），这代表来源定位，**不是** PNG 已转换数量。
- **1,254** 个未按上述三种命名规则匹配：其中可额外发现 344 个 `_Remake_0_0` 原始文件候选，但仍须验证名称映射后方可采用；不少 `NpcNml*` 属于已单独处理的 `Layout_NpcBromide_*` 照片类。
- 对有两套候选源的服装类图片，优先选择 `Layout_FtrIcon_`，额外记录 `Layout_ClosetIcon_` 路径，不把这两种尺寸和用途混同。

## 已验证样例（原始 ROM，不从网络抓图）

[原版图标试运行 Run #41392108047](https://github.com/969981/ACNH_Resources/actions/runs/41392108047) 中 5 个原始 `.zs` 源全部解压、解析 BNTX、核对 BRTI 原生纹理名、转换 PNG 并校验成功：

- `10000Bell.png`：128×128，ROM 与已有 CDN 图像存在最大 1/255 的 RGBA 数值差异，保留两份。
- `FtrBabybed_Remake_0_0.png`、`FtrBabybed_Remake_7_6.png`：均在原版 `Layout_FtrIcon_` 有独立来源，128×128，先前不必借助模型材质重建的 **完整成品图标**。
- `TopsTexMarinesuitNormalLNook0.png`：ROM 中 128×128 的 FtrIcon，已新增到 `assets/images/items/`。
- `BromideNpcNmlAnt00_Remake_0_0.png`：照片道具图标，ROM 中 128×128，已新增到 `assets/images/items/`。

**注意**：前期解析的 `FtrBabybed` 模型是 37 张分离材质纹理，和新定位的 56 张 `Layout_FtrIcon` 成品道具图标是不同资源；现在已实际找到正确的图标源。

## 代码与证据

- `Scripts/acnh303_rom_item_icons.py`：`plan` 枚举 Git 原始 tree 找同名原始源，只下载实际要转换的 `.zs`；`export` 执行真实 BNTX→PNG、完整像素/CRC/SHA 验证，禁止伪造无源图片。
- [GitHub Actions](../.github/workflows/acnh303-rom-item-icons.yml)：使用稀疏检出和固定 SHA 校验的 `wimgt`，分批处理，单文件记录原始 `.zs` SHA-256 和 PNG SHA-256，支持断点续跑。
- `assets/evidence/rom-items/`：所有批次报告及游标 `next-offset.json`。
- `assets/images/items/`：之前不存在的同名 PNG，可以加入实际来自 ROM 的原始图标。
- `assets/images/items-rom/`：如 `assets/images/items/` 已含 CDN PNG，则保留原文件和新 ROM 版本，并记录数值差异，不直接覆盖。
- `assets/textures/items-rom/`：如果一个源有多 BRTI 或 BRTI 名称不匹配，将解码纹理隔离存放，**不把组件称为完整图标**。

原始资源与 PNG 的字节来源、真实 BRTI 名称、像素核验结果的声明严格独立于游戏运行时 UI 层。确切的“已转换”图片数，应以各次 CI 提交后的 `assets/evidence/rom-items/batch-*.json` 为准，而不是上述 26,277 的静态映射数量。
