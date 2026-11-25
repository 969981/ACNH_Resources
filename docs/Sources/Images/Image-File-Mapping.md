---
title: ZS 原始文件与道具、村民图片映射字典
aliases: [原版图片文件映射, ZS到PNG, 村民图片索引]
tags: [acnh, image, mapping, bcsv, msbt]
version: "3.0.3"
---
# ZS 原始文件与道具、村民图片映射字典

返回 [图片专题](README.md) · [知识库首页](../../README.md) · [款式数据库](../../Items/Native-Variants.md)。

本专题从游戏原始 ZS、历史 BNTX/BRTI 与 PNG 导出证据出发，连接当前 BCSV ItemID、RemakeID、NPC ResName 和已有关联的简中名称。保留所有不同图标族与候选，绝不将文件名相同视为同一图像或运行时选择已验证。

## 全量映射入口（375 份明细文档）

[进入全量映射总目录](Mapping/README.md) · [原始 ZS → PNG](Mapping/Source.md) · [道具](Mapping/Item.md) · [改造组合](Mapping/Variant.md) · [本体/布料材质](Mapping/Material.md) · [村民图片](Mapping/NPC.md) · [NPC 名册](Mapping/NPC-Roster.md)。

[机器可读 CSV/JSON](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping) · [实际成功构建及归档 #45626758180](https://github.com/969981/ACNH_Resources/actions/runs/45626758180)。共 34,127 个历史源图关联记录、32,638 个独立原始源、7,553 个有历史 PNG 的 ItemID、13,135 个有历史 PNG 的静态改造组合、1,934 个村民图，其中 1,905 个关联到唯一 NPC 身份。2 个非空 ResName 重复组，4 张图片歧义保留；不自动匹配。原始 Model tree 与历史一致；本轮没有重新解码。

## 映射规则

| 类型 | 原始文件（Model/ 下，统一追加 .Nin_NX_NVN.zs） | BRTI / PNG 名称 |
| --- | --- | --- |
| 普通道具 | Layout_FtrIcon_10000Bell | 10000Bell / 10000Bell.png |
| 改造图标 | Layout_FtrIcon_FtrBabybed_Remake_7_6 | FtrBabybed_Remake_7_6 / FtrBabybed_Remake_7_6.png |
| 衣柜 | Layout_ClosetIcon_TopsTexMarinesuitNormalLNook0 | TopsTexMarinesuitNormalLNook0 / 同名 PNG |
| 村民照片 | Layout_NpcBromide_NpcNmlAnt00 | NpcNmlAnt00 / NpcNmlAnt00.png |
| 村民头像 | Layout_NpcIcon_ant00 | ant00 / ant00.png |
| 海报道具 | Layout_FtrIcon_PosterNpcNmlAnt00 | PosterNpcNmlAnt00 / 同名 PNG |
| 照片道具 | Layout_FtrIcon_BromideNpcNmlAnt00_Remake_0_0 | BromideNpcNmlAnt00_Remake_0_0 / 同名 PNG |
| 本体 | FtrBabybedReBody0 | mReBody_Alb 等多个材质纹理；不是商品图标 |
| 布料 | FtrBabybedReFabric0 | mReFabric_Alb；不是商品图标 |

实际每行须回查历史批次中的 BRTI 与 PNG SHA256；上表不代替逐文件证据。完整路径根为 `e10617820db06889e1638499478da0de_NCA/1/`。

## 示例：NPC 与道具同时关联

当前 NmlNpcParam 第 0 行 ResName=NpcNmlAnt00，UniqueID=1（普通 NPC 域），BromideItemID=6426、PosterItemID=10323。头像由唯一 NPC key ant00 精确关联；照片直接用 ResName；海报去 Poster 前缀；照片道具去 Bromide 前缀和 _Remake_0_0 后缀。不自动删除 _2 等造型后缀。

| 类型 | 历史实际 PNG |
| --- | --- |
| 照片 | [NpcNmlAnt00.png](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/photos/NpcNmlAnt00.png) |
| 头像 | [ant00.png](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/icons/ant00.png) |
| 海报 | [PosterNpcNmlAnt00.png](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/posters/PosterNpcNmlAnt00.png) |
| 照片道具 | [BromideNpcNmlAnt00_Remake_0_0.png](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/images/villager/bromide-items/BromideNpcNmlAnt00_Remake_0_0.png) |

照片的原始 ZS SHA256 为 93b5030c4a9b6d9f248754d6f7e14871737b44819a389a8b97ee1e426a36ed34；PNG SHA256 为 dff6a3e3fdae2ed08176fde134de7f0164b7ba7dd43c5a3df0cffc5810a2abf8。BRTI 为 NpcNmlAnt00，256×256，BC1 sRGB，9 mip。

[原始 NPC 表（当前解码 CSV）](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-data/named/NmlNpcParam.csv) · [历史逐图报告](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-villager/batch-0000-0250.json)。

## 数据结构与证据

- source-png.csv：每个历史原始 ZS 与 PNG 输出的证据行（同一源的多个实际输出均保留），含原始和 PNG SHA256/Git Blob、BRTI、尺寸、可取得的格式与 mip、历史提交及报告路径。
- item-image.csv：当前 ItemID/ResName/简中名称的静态关联候选，以及关联路径的历史 PNG；缺失保留空值。
- variant-image.csv：RemakeID、本体/布料/模式、实际与预期 ZS、历史 PNG；不是运行时选图。
- variant-material.csv：本体及布料素材路径；不冒充成品图标。
- npc-image.csv：四类历史图片与当前 NPC 身份，保留未关联项、海报及照片道具的 BCSV ItemID。
- npc.csv：原版正常及特殊 NPC 名册，ID 按 npc_type 分域。

当前 research 原始资源不变；历史 PNG 继续通过固定提交访问，不搬运数万张图片。映射构建时核对原始 Model Git tree 与历史版本一致、每个原始路径及 PNG 路径确实存在；不宣称本轮重新校验像素字节或原生 UI 合成。

[映射生成器](https://github.com/969981/ACNH_Resources/blob/research/Scripts/image_mapping.py) · [实际运行](https://github.com/969981/ACNH_Resources/actions/runs/45626594837)。

详细历史流程：[道具提取](Item-Extraction.md) · [村民提取](Villager-Extraction.md) · [BNTX 字典](BNTX-BRTI.md)。

## 剩余关联第二轮

[补充关联 CI #45627289031](https://github.com/969981/ACNH_Resources/actions/runs/45627289031) 使用 ItemParam.Label、ResName、默认款式、ItemRemake 代表物品、NPC 原版海报/照片道具 ID 和保留造型后缀的候选关联；不覆盖第一轮直接匹配，不替换不同颜色的图像。未找到原版图标的记录不得标记为已导出。通用头像不归属某个具体 NPC，重复 ResName 使用多身份候选。

[剩余关联明细](Mapping/Residual.md) 已验收：3,242 个原缺口 ItemID、4,039 个原缺口改造组合存在历史 PNG 候选；383 个道具及 10 个组合仍无已验证成品 PNG。NPC 29 张缺口分为 4 共享身份、18 候选、1 通用头像、6 尚未关联。第三轮 [CI #45627442407](https://github.com/969981/ACNH_Resources/actions/runs/45627442407) 进一步核对原始模型及 NPC 跨家族证据。
