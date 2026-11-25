# BCSV 与 MSBT 业务映射

返回 [专题](README.md) · [商品数据库](../../Items/Native-Item-Catalog.md)。

| BCSV/实体 | MSBT资源 | 关联证据及限制 |
| --- | --- | --- |
| ItemParam | Item/STR_ItemName_*.msbt | 原版ID后缀、资源名或代表物品候选，保留关联状态 |
| ItemUIFurnitureCategory / SmallGenre | STR_CategoryName.msbt | 256定义、60组、224标签为不同域；实际catalog唯一日文等值候选2定义、歧义2、未匹配252 |
| ItemColor | STR_ItemColor.msbt、STR_Common_Color.msbt | 15定义与14文本；6个唯一日文候选，9未匹配 |
| ItemRemake | Remake/BodyColor、BodyParts、FabricParts、FabricColor | RemakeID、部件及槽位标签待验证 |
| ItemClothGroup | Outfit/GroupName、GroupColor | 组与颜色名称，不能作为单件ItemID |
| NmlNpcParam | Npc/STR_NNpcName.msbt、STR_NNpcPhrase.msbt | 普通村民名称已有历史验证，口头禅单独验证 |
| SpNpcParam | Npc/STR_SNpcName.msbt 等 | 特殊NPC关联有缺失 |

建议数据库分为 message_archive、message_member、message_entry、message_binding，保留原始标签、语言、SHA、目标与证据等级。网页人工翻译单独存储，不能冒充原版译名。[实际Catalog统计](https://github.com/969981/ACNH_Resources/blob/research/research/catalog/summary.json)。
