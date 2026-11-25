---
title: ACNH 3.0.3 知识库
aliases: [ACNH Research Hub, 动森研究总览]
tags: [acnh, moc]
version: "3.0.3"
updated: 2026-11-25
---
# ACNH 3.0.3 知识库

统一入口（MOC）。从这里进入所有研究专题、原生证据、数据字典、工具与进度；各专题保留稳定路径。原版资源在 Vault 外，只读。

## 研究总览

| 专题 | 当前基线 / 证据边界 |
| --- | --- |
| BCSV | 234 表、58,349 行、2,898 字段位置；2,047/2,075 字段名称候选 |
| 枚举与关系 | 5,713/5,870 已登记 CRC；新增 99 项候选（85 有上下文），58 项未命中；96 项关系、450 项唯一键、394 项 0/1 值域候选 |
| 商品 | 11,178 原版 ItemID；非可售商品或机器人派送清单 |
| MSBT | 14 语言、43,204 个 MSBT 成员、1,686,972 条文本；业务用途分层 |
| 家具改造 | 1,306 原版定义；款式数量与组合候选不能等同运行时权限 |
| 空间 | 28 尺寸定义；原生占用、高度、旋转与碰撞规则仍分层验证 |

[研究路线及验收状态](Research/Research-Roadmap.md) · [研究日志](Research/2026-11-25.md) · [全部 CI](https://github.com/969981/ACNH_Resources/actions)

## 01 · BCSV 原版资源与数据库

| 入口 | 内容 |
| --- | --- |
| [BCSV 专题首页](Sources/BCSV/README.md) · [资源索引](Sources/BCSV-Index.md) | 格式、核心表、原版资料 |
| [234 张表全量索引](Sources/BCSV/Generated/README.md) | 中文表名、字段、样例、枚举、关联；逐表链接 |
| [全量字段 Hash 字典](Sources/BCSV/Generated/Field-Hashes.md) · [名称恢复证据](Sources/BCSV/Field-Names.md) | CRC32 签名、中文释义、未知字段 |
| [全量数据字典](Sources/BCSV/Full-Catalog.md) · [业务解析层](Sources/BCSV/Decoded.md) | raw/named/decoded 数据层与来源 |
| [跨表引用](Sources/BCSV/Generated/References.md) · [剩余枚举与关系审计](Sources/BCSV/Relation-Audit.md) | CRC、主外键、布尔、数值、位域候选 |
| [二进制格式](Sources/BCSV/Format.md) · [工具手册](Sources/BCSV/Toolkit.md) | 解析与复现 |

核心表直达：[ItemParam](Sources/BCSV/ItemParam.md) · [ItemKind](Sources/BCSV/ItemKind.md) · [ItemSize](Sources/BCSV/ItemSize.md) · [ItemAct](Sources/BCSV/ItemAct.md) · [ItemColor](Sources/BCSV/ItemColor.md) · [ItemClothGroup](Sources/BCSV/ItemClothGroup.md) · [ItemFilter](Sources/BCSV/ItemFilter.md) · [ItemUIContextMenu](Sources/BCSV/ItemUIContextMenu.md) · [ItemUIFurnitureCategory](Sources/BCSV/ItemUIFurnitureCategory.md)。

## 02 · 商品、分类、款式与网页

| 入口 | 内容 |
| --- | --- |
| [商品专题首页](Items/README.md) | 所有商品相关研究 |
| [原版商品数据库](Items/Native-Item-Catalog.md) | ItemID、业务投影、14 语言 |
| [物品分类](Items/Item-Classification.md) | NHSE / 原版分类 |
| [原版 UI 家具分类](Items/Native-UI-Furniture-Category.md) · [分类分组](Items/Native-UI-Category-Groups.md) | 256 定义及细分类 |
| [原版家具改造款式](Items/Native-Variants.md) | 本体、布料、颜色、图标与实体字候选 |
| [网页商品分类规划](Items/Web-Catalog-Taxonomy.md) | 客户选购导航，保持旧派送协议 |

## 03 · MSBT 原版文本与多语言

| 入口 | 内容 |
| --- | --- |
| [Message 专题首页](Sources/Message/README.md) | 消息归档与语言资源 |
| [Zstandard / SARC](Sources/Message/Zstandard-SARC.md) · [MSBT](Sources/Message/MSBT.md) · [BDLI](Sources/Message/BDLI.md) | 压缩、归档、文本、索引格式 |
| [原始归档（155 个文件）](Sources/Message/Archive-Index.md) · [MSBT 原始文件中文目录（全归档）](Sources/Message/Members/README.md) | 全部内部文件、中文用途、CNzh 条数与语言覆盖 | 
| [String 133 项详细用途](Sources/Message/String-Member-Index.md) | 道具、分类、服装、款式、村民等词条 |
| [全量文本数据库](Sources/Message/Text-Database.md) | 原文、标签、控制码、CSV/SQLite |
| [业务映射](Sources/Message/Business-Mapping.md) · [原生标签生成规则](Sources/Message/Native-Label-Rules.md) | 商品、颜色、款式、村民与消费者 |

## 原版图片、图标与纹理素材

[图片素材源文件与格式专题](Sources/Images/README.md)：商品图标、服装图标、模型贴图、界面布局、BNTX/BFRES、原始路径及提取方法。

## 04 · 家具空间、碰撞、承载与模型

| 入口 | 内容 |
| --- | --- |
| [家具空间专题首页](Furniture/Furniture-Spatial.md) | 空间模型与证据等级 |
| [原版尺寸](Furniture/Item-Size.md) · [摆放与承载](Furniture/Placement-and-Stacking.md) | 半格单位、承载规则 |
| [原生空间研究](ACNH303_FURNITURE_SPACE.md) | 底层空间参数 |
| [原生摆放运行时](ACNH303_FURNITURE_PLACEMENT_RUNTIME.md) | 放置函数及原生状态 |
| [空间占用与高度](ACNH303_SPACE_OCCUPANCY_HEIGHT.md) | 8 字节记录、Height/RideHeight、3D 网格 |
| [Park/Uber 资源键](ACNH303_PARK_UBER_KEYS.md) | 原生资源查找证据 |

## 05 · 原生程序、Hash 恢复、邮件与奖励

[原生研究专题索引](Research/Native-Research.md) 汇总历史根目录专题、函数证据及邮件研究数据。

| 入口 | 内容 |
| --- | --- |
| [HASH-008D](ACNH303_HASH008D_NATIVE_EVIDENCE.md) | 原生字段证据 |
| [HASH-008E](ACNH303_HASH008E_RECIPE_PLAYER.md) | 配方与玩家 |
| [HASH-008F](ACNH303_HASH008F_HARVEST_REMAKE.md) | 收获节与改造 |
| [HASH-008G](ACNH303_HASH008G_DEFAULT_REMAKE.md) | 默认改造 |
| [HASH-008H](ACNH303_HASH008H_RESIDUAL_DICTIONARY.md) | 剩余 28 字段 Hash |
| [HASH-008I](ACNH303_HASH008I_MAIL_NPC_NATIVE.md) | 邮件、NPC 原生证据 |
| [HASH-008J](ACNH303_HASH008J_MAIL_CATEGORY_DICTIONARY.md) | 邮件分类字典 |
| [HASH-008K](ACNH303_HASH008K_MAIL_REWARD_TRADE.md) | 附件奖励与交易价格 |
| [邮件后续阶段](Research/Native-Research.md#邮件附件后续阶段) | HASH-008L/M/N 的数据与 CI 证据入口 |

## 06 · 数据、开发与知识库维护

- [研究路线](Research/Research-Roadmap.md) · [研究日志](Research/2026-11-25.md) · [全部文档索引](Research/Document-Index.md)
- [知识库维护规范](Knowledge-Guide.md) · [AI Agent 与研究技能](Agent-Guide.md) · [仓库文档规范](AGENTS.md) · [研究模板](Templates/Research-Note.md)
- [BCSV 数据](https://github.com/969981/ACNH_Resources/tree/research/research/bcsv-data) · [BCSV 目录](https://github.com/969981/ACNH_Resources/tree/research/research/bcsv-catalog) · [商品数据](https://github.com/969981/ACNH_Resources/tree/research/research/catalog) · [消息数据](https://github.com/969981/ACNH_Resources/tree/research/research/message-data) · [全部研究产物](https://github.com/969981/ACNH_Resources/tree/research/research)

## 打开方式

在 Obsidian 中选择「打开文件夹作为仓库」，打开本地 ACNH_Resources/docs，再打开 README.md。标准相对 Markdown 链接可在 GitHub 与 Obsidian 使用；无需社区插件。原版资源不复制进 Vault，个人 workspace 不提交。
