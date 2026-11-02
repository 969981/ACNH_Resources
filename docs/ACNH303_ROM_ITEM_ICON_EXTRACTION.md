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


## 2026-11-02 — 批次续跑与 1,254 个未配对项审计

按 Git 提交后的真实证据核验，村民素材已独立提取：照片 481、头像 488、海报 486、照片道具款式 0_0 共 479，仓库中确有 **1,934 个 PNG 文件**。对应村民游标为 `1934/1934`，末批 `batch-1500-1934.json` 为 434/434 单纹理 PNG、0 error。这个结论**仅涉及源纹理解码，不涉及原游戏 UI 的最终渲染等价性**。参见 [[ACNH303_ROM_VILLAGER_PHOTO_EXTRACTION]]。

本轮扩容前，道具原版同名 Layout 来源已完成 `2000/26277`：
- 第 1 批 500：新原版 10、独立保留与已有社区图不同的原版 490；
- 第 2 批 500：新原版 271、独立保留不同原版 229；
- 第 3 批 500：新原版 499、已有图与原版 PNG 文件一致 1；
- 第 4 批 500：新原版 500。
以上 2,000 个已处理来源，报告中均为 0 error；**26,277 是能按名字定位源的总数，而不是已经生成的 PNG 总数**。

从当前工作流起，单次 batch 模式最多跑 12 × 500 个同名源，读取 `assets/evidence/rom-items/next-offset.json` 后继续。仅在工作流正常完成、推送已验证数据并且未达到 `26277/26277` 时，自动以 `workflow_dispatch mode=batch` 申请下一个有限批次。每次运行依然独立保存源 SHA、BRTI 名、输出 PNG SHA、不同来源像素比较与失败记录。工作流失败不能等同于源已处理完。

`Scripts/acnh303_unmatched_rom_audit.py` 用原始 ROM Git tree 重新扫描 **1,254 个无直接同名 Layout** 的目录清单项目，生成：
- `assets/evidence/rom-items/unmatched-candidate-audit.json`（逐文件候选路径与分类）。
- `assets/evidence/rom-items/unmatched-candidate-audit.csv`（人工核查友好版）。

分类包括 `villager_photo_other_family`、`variant_mapping_needed`、`model_or_base_resource_only`、`no_named_candidate_in_rom_tree`。**无论出现多少候选，它们全部保持 `pending_original_rom_source_verification`，且 `native_png_extracted_for_this_entry=false`**。例如 `NpcNmlAnt00.png` 虽有独立 `Layout_NpcBromide_` 照片源，但不能将它算作同名道具图标；某项只找到 `_Remake_0_0`，也必须先证明型号/变体映射关系，不能自行把材质贴图改名为成品图标。

审计命令：

```bash
python -m unittest discover -s Scripts -p 'test_acnh303_unmatched_rom_audit.py' -v
python Scripts/acnh303_unmatched_rom_audit.py --root . --expect-unmatched 1254
```

以上记录的数量是 **CI 扩容前的已核验基线**；新增进度必须以本分支最新游标、批次报告和对应实际 PNG 文件数量重新核实，不能预先宣称全部完成。
