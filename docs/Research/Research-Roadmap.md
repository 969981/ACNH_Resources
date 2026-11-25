---
title: 研究路线
tags: [acnh, roadmap]
updated: 2026-11-25
---
# 研究路线

返回 [知识库首页](../README.md) · [研究日志](2026-11-25.md) · [原生研究](Native-Research.md) · [全部文档索引](Document-Index.md)。

## 当前验收与证据边界

| 专题 | 当前结果 | 验收 |
| --- | --- | --- |
| [全量 BCSV](../Sources/BCSV/Full-Catalog.md) | 234 表，58,349 行，2,898 字段位置 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45573360473) |
| [字段名称](../Sources/BCSV/Generated/Field-Hashes.md) | 2,047/2,075 CRC 候选，28 未恢复 | 名称候选，不等于明文 |
| [枚举与关系](../Sources/BCSV/Relation-Audit.md) | 5,713/5,870 已登记，85 上下文 +14 全局候选，58 未命中；96 关联、450 唯一键、394 布尔候选 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45574462546) |
| [业务解析层](../Sources/BCSV/Decoded.md) | raw/named/decoded 与候选关系 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45571610003) |
| [商品数据](../Items/Native-Item-Catalog.md) | 11,178 原版 ItemID，14 语言，业务映射保留证据等级 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45571966606) |
| [MSBT 文本库](../Sources/Message/Text-Database.md) | 14 语言，原文本、标签及控制码 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45574483135) |
| [MSBT 标签规则](../Sources/Message/Native-Label-Rules.md) | 原生标签生成规则与候选映射 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45573999603) |
| [家具款式](../Items/Native-Variants.md) | 1,306 定义，数量与普通实体字候选 | [CI success](https://github.com/969981/ACNH_Resources/actions/runs/45574390450) |
| [家具空间](../Furniture/Furniture-Spatial.md) | 28 尺寸定义，空间占用及高度已有证据；完整运行时规则未闭合 | [占用 CI 曾失败](https://github.com/969981/ACNH_Resources/actions/runs/45571717924)，本轮未复验 |
| [邮件及奖励](Native-Research.md) | HASH-008L/M/N 已有运行记录 | [008N CI success](https://github.com/969981/ACNH_Resources/actions/runs/45574933713)，语义证据另审 |

以上 CI success 表示对应工作流运行成功；本次导航整理仅复验运行状态，除已归档关系审计外不重新宣称各产物逐项通过。

## 下一阶段优先级

| 优先级 | 任务 | 验收目标 |
| --- | --- | --- |
| P0 | CRC 枚举候选 | 逐项核验 85+14 候选，研究 58 未命中，回填后重新全量对账 |
| P0 | 原生主外键、数值、布尔及位域 | 96 关系、450 键、394 布尔候选逐步验证消费者 |
| P0 | 234 表业务用途 | 已有 9 专题，其他 225 张需独立证据 |
| P0 | 原生邮件 | 处理函数、位图、ItemID 与实体构造 |
| P0 | 家具空间 | 占用、碰撞、旋转、承载坐标及高度验证 |
| P0 | MSBT / 改造 | 分类、颜色、款式生成规则与实际实体写入 |
| P1 | MurmurHash3、复合键、中文术语 | 字典与独立证据 |
| P1 | 订单协议兼容 | 网页导航与旧派送字段分离 |
| P1 | ER 关系图 | 按证据等级展示关联 |
| P2 | PostgreSQL DDL、2D/3D 家具布局 | 建立在确认的语义之上 |

## 历史验收记录

[首轮 234 表验收 #45569991407](https://github.com/969981/ACNH_Resources/actions/runs/45569991407) · [九张核心表 #45569451957](https://github.com/969981/ACNH_Resources/actions/runs/45569451957) · [关系审计永久记录](https://github.com/969981/ACNH_Resources/blob/research/research/bcsv-relations/ci-baseline.json)。

每次研究先补充专题结论与固定证据，再更新首页、路线和日志；未知保留原值。

## 图片素材

[图片素材源文件与格式](../Sources/Images/README.md)：原始路径、容器格式、BNTX 元数据、图标与材质区分；新增全量路径清点及抽样解析 CI，像素与运行时选择待验证。

### 原始图片素材验收

61,646 个候选源文件；11 个实际容器样本通过，[清点 CI](https://github.com/969981/ACNH_Resources/actions/runs/45613881319)。[BNTX/BRTI 字典](../Sources/Images/BNTX-BRTI.md) 已编写；[全量分类与关系候选](../Sources/Images/Source-Catalog.md) 由 CI 生成。像素、运行时图标选择、UI 消费者及浏览器仍待验证。

### 图片 ZS 关联

[ZS 原始文件与道具、村民图片映射](../Sources/Images/Image-File-Mapping.md) 已创建；历史证据归并、全量生成由 [CI #45626594837](https://github.com/969981/ACNH_Resources/actions/runs/45626594837) 验收。运行时图标选择与本轮像素复验仍未完成。

[全量映射目录](../Sources/Images/Mapping/README.md) 已由 [CI #45626758180](https://github.com/969981/ACNH_Resources/actions/runs/45626758180) 成功生成并归档：34,127 个历史关联记录，32,638 个原始源、375 份明细；NPC 重复身份保持歧义。实际 PNG 路径为历史固定提交，未复制图片。

### 图片缺口补充关联

[补充关联](../Sources/Images/Mapping/Residual.md) [CI #45627289031](https://github.com/969981/ACNH_Resources/actions/runs/45627289031) 成功：3,242/3,625 个道具缺口、4,039/4,049 个改造缺口存在历史 PNG 候选。候选不是运行时选图；仍无成品 PNG 383/10。NPC 共享身份、造型及通用头像独立处理。
第三轮 [CI #45627442407](https://github.com/969981/ACNH_Resources/actions/runs/45627442407) 已生成并归档，新增 330 道具及 10 款式的模型候选、6 张 NPC 的共享资源候选；仍待 53 项道具精确模型、383/10 成品 PNG 及运行时选择机制。
