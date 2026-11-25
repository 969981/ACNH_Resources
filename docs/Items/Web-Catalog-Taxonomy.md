---
title: 网页商品分类规划
aliases: [Web Catalog Taxonomy, 商品导航]
tags: [acnh, item, classification, web]
version: "3.0.3"
status: proposed
---
# 网页商品分类规划

返回 [首页](../README.md) · [原生物品分类](Item-Classification.md) · [原生家具用途分类](Native-UI-Furniture-Category.md) · [家具空间属性](../Furniture/Furniture-Spatial.md)。

## 研究证据

原版 ItemUIFurnitureCategory.bcsv 实读 256 条定义；有家具功能、服装、墙纸/地板/地毯、植物、联名等混合维度。不能直接当作扁平网站菜单。对应 ItemParam 字段关联尚未完成；ItemUICategory.bcsv 在本次指定目录未找到。NHSE 以 ItemKind 枚举及按 ID 索引的二进制分类表提供修改器逻辑。PokerCore Filter.Designer.cs 共有 32 个非空物品快捷筛选 Tag（不含 Clear、语言切换），Filter.cs 把 Tag 传给过滤器；真假艺术品在 BuildDictionary 中合并。见 [PokerCore Filter.Designer.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Map/Filter.Designer.cs)、[NHSE ItemKind](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Core/Structures/Item/ItemKind.cs)、[Nookipedia furniture](https://nookipedia.com/wiki/Furniture/New_Horizons)、[GenACNH catalog](https://genacnh.com/catalog)。

## 推荐导航 v0.1（待用户确认）

| 稳定 key | 一级 | 二级候选 |
| --- | --- | --- |
| furniture | 家具装饰 | 椅凳、沙发长椅、桌子书桌、床、收纳展示、屏风拱门、灯具、家电数码、厨房餐具、卫浴美容、乐器、植物装饰、玩具运动、户外设施、其他装饰 |
| clothing | 服装配饰 | 上衣、下装、连身服、帽子头饰、配饰、袜子、鞋靴、背包、雨伞、潜水服 |
| renovation | 装修建材 | 墙纸、地板、地毯、栅栏、隔断/柱子/吧台、门饰 |
| plants | 植物 | 树木、树苗、灌木、花卉、蔬菜苗、藤蔓、发光苔藓、杂草 |
| materials | 材料货币 | 木材矿石、季节素材、果实蔬菜、星星碎片、改造工具包、铃钱、里数旅行券、票券 |
| creatures | 生物 | 鱼、昆虫、海洋生物 |
| art | 艺术品 | 绘画、雕塑；真伪筛选 |
| collectibles | 收藏品 | 化石、未鉴定化石、音乐、照片、海报、俑俑及碎片 |
| tools | 工具 | 钓竿、捕虫网、铲子、斧头、浇水壶、弹弓、梯子、撑杆、魔法棒、其他手持物 |
| food | 料理饮品 | 料理、饮品、食用素材（主类材料，支持交叉入口） |
| recipes | DIY/料理配方 | 家具、工具、装修、服装、料理等配方产物分类 |
| misc | 其他 | 任务物品、包装、特殊物品；内部/不可售不直接展示 |

一级导航只有一个主归属；主题/联名/系列、摆放层、占地、承载、颜色、可改造、来源、版本、真伪、可制作/可订购是独立筛选或集合，避免类别爆炸。艺术品真假保留原始值，照片与海报独立；食用素材可交叉检索但不重复商品身份。村民采用独立图鉴/服务入口，不作为普通 ItemID 分类。

## 数据与协议

保留 native_kind、native_ui_furniture_category（原生标签/ID/原始值）、nhse_kind、poker_kind、legacy_category；website_category_id 与 tag 关系独立版本化。订单接口仍发送原有机器人协议字段；未回归验收不宣称兼容。ItemID/变体身份不依赖网页分类或翻译。

先建立原生逐 ID 映射和审计：有效 ID、未匹配、重复、类别覆盖、每个商品唯一主类别、可见/不可售规则、14 locale 标签覆盖、旧订单序列化回归。当前未实际进行 11178 物品全量归类，不提供虚构数量。

多语言：分类稳定 key 与 locale label 分离，原生 MSBT 与人工导航翻译分别记录来源；原版 256 类不等于 224 条 STR_CategoryName 标签，待逐 label 对账。

## 网页布局
桌面：一级导航 + 左侧二级/属性筛选 + 商品卡片；移动端：横向一级导航与筛选抽屉；选中系列/联名仅改变筛选，不改变订单字段。家具卡片可展示占地与承载（有证据时），详情保留改造、款式、数量与原版 ID。
