---
title: 物品分类与兼容映射
aliases: [ItemKind, 商品分类]
tags: [acnh, item, classification]
version: "3.0.3"
status: partial
---
# 物品分类与兼容映射

返回 [首页](../README.md) · [BCSV 数据索引](../Sources/BCSV-Index.md) · [家具空间属性](../Furniture/Furniture-Spatial.md)。

## 已确认的第三方源码证据

NHSE 从 ItemParam 的 0x54706054（ItemID）及 0xFC275E86（ItemKind）生成 item_kind.bin。数组索引为 ItemID，未使用槽位为零，零同时代表 Bottoms_Long；必须先建立原生有效 ID 集合。

固定 NHSE 版本 cb0745415945776f73375bf0a434a8babf059307；实读分类表 14987 字节，4239 个零槽位；207 个普通枚举成员，另有 Unknown=255。数值不等于游戏原生编码。

PokerCore 的 BuildDictionary 按文本读取分类，并将 Kind_ 分类中的 Fake 删除。网站分类不得替换现有机器人协议分类。

| 层 | 字段建议 |
| --- | --- |
| 原生 | native_kind |
| NHSE | nhse_kind |
| PokerCore | poker_kind |
| 网站 | web_category |
| 旧机器人 | legacy_category |

## 相关资料

[NHSE GameBCSVDumper](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/GameBCSVDumper.cs) · [PokerCore Utilities](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L442-L464) · [全量分类审计工具](https://github.com/969981/ACNH_Resources/blob/e6ca08582c8aff198f53073c44a9f54d88ea6bc0/research/item-classification/audit_native_kind.py)。

全量逐 ID 对账及 STR_CategoryName 的 14 语言关联待验收。网站家具用途分类候选来源需原始字段和样本证明，不能直接将历史版本字段视为 3.0.3 证据。

## 网页导航研究

[原版 UI 家具分类定义](Native-UI-Furniture-Category.md) · [网页商品分类规划](Web-Catalog-Taxonomy.md)。原版定义表已读取 256 条，逐物品关联待验收。
