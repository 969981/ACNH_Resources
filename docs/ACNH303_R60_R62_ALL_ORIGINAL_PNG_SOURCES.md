---
title: R60–R62 ACNH 3.0.3 全部 27,531 个道具 PNG 名称来源索引
aliases: [ACNH 原版 27531 图片来源, R62 ROM PNG 索引]
tags: [ACNH, 3.0.3, BNTX, provenance, catalog, source-mapping]
status: source-coverage-verified-candidate-UI-semantics-unverified
---

# R60–R62：原始 27,531 个文件名的真实 ROM 图片来源

> [!important] 审计结论的范围
> 27,531 / 27,531 是原始清单名称的已验证来源覆盖率，不是所有原清单 PNG 已按要求名称生成、不是图片像素与其他版本完全相同、也不是任天堂游戏原版 UI 的布局和默认选图行为已验证。

## R60：单独解决 FtrSoftdrinkOrange_3.0.0.png 的 3.0.3 原版候选

- 已分别从原版 Model/Layout_FtrIcon_FtrSoftdrinkOrange.Nin_NX_NVN.zs 和 Model/Layout_CookingIcon_FtrSoftdrinkOrange.Nin_NX_NVN.zs 导出真正的 BNTX 纹理。
- FtrIcon：128×128，SHA-256 45fdd5890a672cff85c60fd24c7df279838eb8affacf56eabb624048b8805787。
- CookingIcon：256×256，SHA-256 ecb6dfd5176316fb7f7435c33574fc161e9eb675df713d34058e11e92365c967。
- 两份各自匹配原版 BRTI 名 FtrSoftdrinkOrange，原始容器和 PNG 均记录哈希。未取得独立可验证的 3.0.0 RomFS，无法证明外部文件名中 3.0.0 后缀指向的旧版图片与 3.0.3 的任一图片像素相同。
- 真实图片：assets/images/softdrink-original/FtrIcon/ 与 assets/images/softdrink-original/CookingIcon/。
- 证据：assets/evidence/rom-softdrink/report.json。Actions：#41447170201（成功）。

## R61：把全部 1,254 个待核查名称纳入同一原版候选来源表

| 原始清单类别 | 数量 | 实际原生来源 |
| --- | ---: | --- |
| 基础名称缺失 | 344 | 原版 FtrIcon 的 Remake_0_0 图片，应用侧 id/iName 由 R53 验证 |
| 村民照片 | 479 | 原版 NpcBromide |
| 其他 UI 布局名称 | 391 | 原版 GardeningIcon、DIYRecipeIcon、MenuIcon 等各自类别 |
| 服装特殊命名 | 39 | 原版 FtrIcon 真实 PNG，另保留 39 份独立 ClosetIcon |
| 带版本字样的饮料图 | 1 | 原版 3.0.3 FtrIcon 候选，并另保留 CookingIcon |
| **合计** | **1,254** | **每项有真实原版图与哈希** |

R61 重新读取每张候选原版 PNG，执行 PNG CRC 和 SHA-256 独立校验；所有 1,254 个清单名称与 1,254 个主来源一一对应。该批另外含 40 份备用 UI 家族图片，一并进行校验。没有重命名或另存为外部清单中尚未验收的请求名称。

- 来源映射：assets/catalog/original-1254-provenance-index.csv。
- 每项原始压缩源路径、SHA 和区分图像语义的机器可审计结果：assets/evidence/rom-items/r61-all-1254-original-native-sources.json。
- Actions：#41447367757（成功）。

## R62：完整 27,531 原始清单统一查询

R62 从真实 53 批原版图片提取记录中恢复 26,277 个同名且 BRTI 名称一致的 PNG，再与 R61 的 1,254 个不同名称候选记录精确合并。确保没有漏项、重复项或第三方 CDN 图片替代原版。

| 验证层级 | 项数 | 说明 |
| --- | ---: | --- |
| 同名原版来源 | 26,277 | PNG 文件名和真实 BRTI 纹理名相同，源和输出均有哈希 |
| 不同名的原版候选来源 | 1,254 | 真实原版图片可读且哈希正确，但未确认原清单名称指向的运行时像素和语义是否完全一致 |
| **总计来源记录** | **27,531** | 清单项目全部覆盖 |

原始的 26,277 张直接同名图标中：25,500 张属于新加入的原版图，775 张当时发现已有不同的社区 CDN PNG 而保留两份，2 张已有 PNG 与原版一致。后者在老批次中没有 output_path 字段，R62 经文件状态和 Git 实际路径验证后按原有文件索引，未复制图片。

R62 本轮没有重新下载 26,277 张 PNG 做新一轮逐字节 CRC 校验，而是审计此前已经成功的原版批次哈希、BRTI 名、原版源路径及 Git 文件树；1,254 张候选图片已经在 R61 新一轮校验。两者严格分开记录。

- 完整可查询 CSV：assets/catalog/original-27531-sourced-lookup.csv。
- 汇总报告：assets/evidence/rom-items/r62-all-27531-source-reconciliation.json。
- 代码：Scripts/acnh303_r62_full_catalog_lookup.py。
- Actions：#41448013770（成功）。

## 现在可以直接按原始 PNG 名称查询来源

在仓库根目录执行：

```powershell
python Scripts/acnh303_r62_full_catalog_lookup.py lookup --name CapWigZelda0_0.png
python Scripts/acnh303_r62_full_catalog_lookup.py lookup --name FtrBambooLamp.png
python Scripts/acnh303_r62_full_catalog_lookup.py lookup --name BromideNpcNmlAnt00_Remake_0_0.png
python Scripts/acnh303_r62_full_catalog_lookup.py lookup --name FtrSoftdrinkOrange_3.0.0.png
```

返回的 source_status 会区分 exact_original_name_native_png 与 verified_native_source_candidate_only。native_png_path 是实际提交的原生 PNG 文件，不是根据请求文件名生成的假路径。若已在本机取得对应原始 PNG，可追加 --verify-png 强制重新检查 PNG CRC 和 SHA-256；若本机没有检出图片，不应声称执行了即时复验。

## 仍待最后解决的语义问题

1. Nintendo 游戏运行时是否对 344 项默认调用 _Remake_0_0，以及非零 body/fabric 如何选择；客户端 ACNHPokerCore 的静态文件选择代码已经证明，但不能外推为 Nintendo 原版算法。
2. 479 份 NpcBromide 原生照片是否等同于目录下的独立照片文件语义及显示效果；不得直接将独立 UI Layout 家族冒充 FtrIcon。
3. 391 个不同 UI Layout 使用处的完整原版语义；需要运行时消费者或 UI 布局加载记录。
4. 39 个服装实例的末尾 0_0 目录名是否在特定程序中映射到已经解出的 FtrIcon/ClosetIcon；两者分辨率不同，原生 PNG 哈希不同。
5. FtrSoftdrinkOrange_3.0.0.png 文件名中版本后缀的真实来源。当前只有 3.0.3 原版资源，没有可以对比的 3.0.0 RomFS。

原始 1,254 个待核查文件名的语义状态保持不变；源文件本身全部只读，没有使用 CDN 图片冒充原版、没有覆盖本来就存在的不同 PNG。
