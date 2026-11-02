---
title: R56–R59 ACNH 3.0.3 39 项服装图标真实原版解码
aliases: [39 张缺失服装图标, Zelda Splatoon Hotel clothing ROM]
tags: [ACNH, 3.0.3, ItemParam, ItemClothGroup, FtrIcon, ClosetIcon, BNTX, provenance]
status: native-source-and-pixels-verified-catalog-alias-runtime-unverified
---

# R56–R59：39 个原清单缺失项已在 3.0.3 ROM 中找到来源并实际解码

> [!important] 不混用不同来源和验证等级
> 原清单的文件名（如 CapWigZelda0_0.png）不是 3.0.3 ROM 的原生纹理名。Nintendo 原版的 ItemParam 实例名是 CapWigZelda0，而 ItemClothGroup 组名是 CapWigZelda。相同资源链并不等于游戏运行时证明目录生成名末尾的 _0_0 必须使用哪种 UI 图。绝不重命名原始纹理替代原目录 PNG，也不修改原始 1,254 个待核查清单状态。

## R55 探索记录：失败已定位，不能计入证据

历史 CI #41414285777 在规划阶段因 git ls-tree -r -l 请求 103,400 个 Git Blob 的对象大小，触发 blob:none 稀疏 Git 工作区读取而在 180 秒超时。不是原版 ROM 没有资源，也没有产生可验 PNG。本轮已修正脚本使用不需要对象内容的 git ls-tree -r，并将昂贵的全范围扫描改为仅手动触发；R56–R59 的更精确链路已经成功替代该失败方案。

## R56：扫描 234 份实际 BCSV 和 StaticParam.pack

成功 CI #41414655614：
- 扫描 234 份解码 CSV；
- 原始 StaticParam.pack 6,800,572 字节，SHA-256 4a3d6530d6430b6b967467f16784f91700a3cd8baad5f5b28fe3c6cfe4983298，经原版 SARC 解析得到 2,192 个成员；
- **39 / 39** 原清单名称分别通过不同标准化方法，在 ItemParam.csv 和 ItemClothGroup.csv 找到真实精确单元格（每项各 1 条记录）；
- 例如 BagBackpackInktank0_0.png 对应 ItemParam 的 BagBackpackInktank0 和 ItemClothGroup 的 BagBackpackInktank。

索引：assets/evidence/rom-items/r56-bcsv-staticparam-original-39.json / CSV。

## R57：匹配原版 ROM 模型和 Layout 文件

成功 CI #41414938867：
- 完整扫描 3.0.3 RomFS Git tree 的 103,400 个路径，其中 Model 60,166 个；
- 39 / 39 个名称拥有直接对应的实例或组名原始模型目录来源；
- 共 113 个精确匹配的模型相关文件，其中 78 个 Layout（每项 FtrIcon 与 ClosetIcon 各一份）；部分项目仅独立布局而没有同名三维模型；
- 37 项实例名是组名加一位数字；Fuka、Utsuho 两项组名和实例名一致，说明不能盲目认为所有服装都适用完全相同的字符串替换式。

例如 CapWigZelda0_0.png 对应原版：
- Model/CapWigZelda0.Nin_NX_NVN.zs
- Model/Layout_FtrIcon_CapWigZelda0.Nin_NX_NVN.zs
- Model/Layout_ClosetIcon_CapWigZelda0.Nin_NX_NVN.zs

报告：assets/evidence/rom-items/r57-original-clothing39-name-source-lookup.json / CSV。

## R58：78 个真实 ROM BNTX 的 PNG 像素提取

成功 CI #41415138970：
- 39 个原版 FtrIcon 均独立解码，原生 BRTI 名称与 ItemParam 实例名一致，39 张全为 128×128；
- 39 个原版 ClosetIcon 均独立解码，原生 BRTI 名称与 ItemParam 实例名一致，39 张全为 256×256；
- **78 / 78 单纹理 PNG 实际成功**，0 源解码失败、0 名称冲突、0 SHA 校验失败；
- 两种 UI 类别的对应 PNG 字节 SHA-256 **39 对全不一致**，因此不要把 ClosetIcon 视为简单重复的 FtrIcon。
- 全部保留原始压缩文件 SHA-256、BNTX/BRTI 元数据和真实 PNG CRC/SHA-256。

原版图片输出：
- assets/images/clothing-original-layout/FtrIcon/
- assets/images/clothing-original-layout/ClosetIcon/

证据：assets/evidence/rom-clothing-layout/reconciliation.json / CSV。

## R59：独立复核和候选别名映射清单

成功 CI #41415422766。重新读取并校验全部 78 个原版 PNG CRC 和 SHA-256，并将每个原目录名称精确连接至 ItemParam 名、ItemClothGroup 名、原版 FtrIcon 路径及原版 ClosetIcon 路径：

- assets/catalog/original-39-native-png-alias-candidates.csv
- assets/evidence/rom-clothing-layout/catalog-alias-candidates.json

特别保留三条不同验证级别：
1. 原始 ItemParam/ItemClothGroup 的名称关联：已验证。
2. 原始 FtrIcon/ClosetIcon BRTI 来源与 PNG 像素：已验证。
3. 原清单 _0_0 名称与 Nintendo 游戏 UI 运行时图像像素/布局语义等价：**未验证**。

清单只提供候选别名路径，不复制、覆盖、重命名图片；原 1,254 项待核查状态仍不变。原先 26,277 个直接同名原版道具图片、1,934 张村民图与 391 张其他 UI 原版图的独立验收统计均保留。

## 关于其他版本 RomFS 的最终证据边界

这 39 项的**真实原始图像来源已经在本仓库 3.0.3 RomFS 找到并解码**，不必再假设它们来自其他版本。另一个名为 FtrSoftdrinkOrange_3.0.0.png 的原目录项仍需证明 3.0.0 后缀所指图片与 3.0.3 FtrSoftdrinkOrange 图片是否相同；目前没有独立、可验的 3.0.0 原始 RomFS，因此不能声明版本级别的像素一致。

R53 的 344 项 ACNHPokerCore 客户端 id/iName 静态映射此前已通过，和本批原始服装纹理是两条互相兼容但不应混同的证据链。

## 如需真正完成目录名称语义验收

应在游戏或 ACNHPokerCore 实际运行的特定道具中记录 itemID、body/fabric/变体值、客户端读入 CSV 的 iName、实际选择的 PNG 路径和尺寸。只有确认 0_0 后缀所指的图像与原始 FtrIcon/ClosetIcon 其中一方一致，才可考虑更新原清单的状态或建立正式自动别名；不需要再次猜测不存在的 ROM 资源。
