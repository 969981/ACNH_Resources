# 原版商品数据层

返回 [网页分类规划](Web-Catalog-Taxonomy.md) · [BCSV 业务解析](../Sources/BCSV/Decoded.md) · [知识库首页](../README.md)。

# ACNH 原版商品数据层 catalog

从已验收 decoded 表构建独立商品投影，保留 11178 个原版 ItemID，非可售商品清单。原生 UI 分类使用 CRC 精确关联；尺寸、Kind、颜色、动作均按原始 CRC 与定义标签匹配，保留状态。布局标签只支持候选承载类型，不推导碰撞、实际承载容量、运行时最大堆叠或机器人派送权限。RemakeID 按原版 UniqueID 查找，保留 ItemUniqueID 代表物品与双向状态；8+8 槽位仅为原始存储，不生成未验证的款式组合。

14 语言原始 SARC 的 SHA 按历史固定记录重新校验，提取 STR_CategoryName、STR_ItemColor、Remake/STR_Remake_BodyParts、Remake/STR_Remake_FabricColor。类别/颜色文本仅在唯一日文文本完全相等时生成多语言关联候选，数字文本标签不假定等于定义 ID；未匹配留空。原物品多语言保留 decoded 的来源及关联状态。

## 产物
item.csv、category.csv、item_locale.csv、category_locale_candidate.csv、color_locale_candidate.csv、message_text.csv、item_remake_link.csv、remake_storage_slot.csv 及原始规则定义表；summary.json、manifest.json、message-sources.json。SQLite 浏览数据库 catalog.sqlite3 由 CI 构建并校验 integrity_check，随产物下载，不重复提交二进制数据库；CSV 作为版本化权威派生数据。没有创建生产 PostgreSQL 或改动现有订单协议。

复现：`uv run --script Scripts/bcsv/build_item_catalog.py --historical historical`，历史解析器固定 f09e15460d02790060a374b2ad6ba569ba9b97ed。 [工作流](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-item-catalog.yml)。

[商品数据目录](https://github.com/969981/ACNH_Resources/tree/research/research/catalog)。

相关：[商品专题](README.md) · [原版改造款式](Native-Variants.md) · [MSBT 专题](../Sources/Message/README.md)。[商品 catalog CI #45571966606](https://github.com/969981/ACNH_Resources/actions/runs/45571966606) 工作流成功。
