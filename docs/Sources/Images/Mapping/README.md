# ZS、道具、款式与村民 PNG 全量映射

返回 [图片专题](../README.md) · [知识库首页](../../../README.md)。

原始 Model Git 树与固定历史提交完全一致。每条 PNG 来源来自历史原版提取报告，并检查历史 Git 中真实 PNG 路径；本轮未重解码、未验证运行时选图。

| 入口 | 范围 |
| --- | --- |
| [ZS → PNG](Source.md) | 原始文件、BRTI、真实导出图、尺寸、格式 |
| [道具 → PNG](Item.md) | ItemID、简中名、ResName、资源族 |
| [改造组合](Variant.md) | body/fabric、组合图标、缺失候选 |
| [改造材质](Material.md) | ReBody/ReFabric，非成品图标 |
| [村民图片](NPC.md) | 四类村民图片与原始身份 |
| [原版 NPC 名册](NPC-Roster.md) | 491 条身份，包含无匹配记录 |

CSV/JSON：[机器可读映射](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping)。

## 实际构建统计

| 指标 | 数量 |
| --- | ---: |
| historical_source_png_rows | 34127 |
| unique_original_sources | 32638 |
| four_family_sources | 32145 |
| villager_image_rows | 1934 |
| npc_count | 491 |
| npc_linked_images | 1905 |
| npc_with_link | 482 |
| duplicate_nonempty_resnames | 2 |
| ambiguous_npc_images | 4 |
| item_rows | 17271 |
| items_with_historical_png | 7553 |
| variant_rows | 17184 |
| variant_candidates_with_historical_png | 13135 |
| material_slots | 11985 |
| generated_detail_pages | 375 |

## 补充关联

[剩余道具、改造及 NPC 图片关联](Residual.md)：第二轮 3,242 道具及 4,039 改造候选；保留未关联项和原始证据。
