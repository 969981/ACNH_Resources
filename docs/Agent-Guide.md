---
title: AI Agent 与研究技能
tags: [acnh, agents, guide]
---
# AI Agent 与研究技能

返回 [知识库首页](README.md) · [知识库维护规范](Knowledge-Guide.md) · [研究路线](Research/Research-Roadmap.md)。

仓库根 AGENTS.md 定义通用规则，docs/AGENTS.md 定义知识库局部规则，.agents/skills 为按任务调用的项目技能。研究分支同步同一套根规则与技能；原始资源只读。

| 技能 | 使用场景 |
| --- | --- |
| acnh-bcsv-hash | BCSV、Hash、字段字典 |
| acnh-item-classification | ItemKind、NHSE、PokerCore 与网站 |
| acnh-furniture-spatial | 尺寸、承载、碰撞、旋转 |
| acnh-native-research | NSO/ELF、Ghidra、调用链 |
| acnh-assets-localization | 图标、模型、材质、MSBT |
| acnh-evidence-validation | CI、全量审计、证据验收 |
| acnh-knowledge-maintenance | Obsidian、MOC、归档 |

仓库链接：[AGENTS.md](https://github.com/969981/ACNH_Resources/blob/3.0.3/AGENTS.md) · [Skills](https://github.com/969981/ACNH_Resources/tree/3.0.3/.agents/skills)。

从仓库根启动支持项目 Skills 的 Codex，可选择对应技能；仅打开 docs Vault 不会加载根目录技能。其他 Agent 客户端须按其发现机制配置。技能是项目工作流说明，不会自动授予执行权限。

## 示例

- 使用 acnh-bcsv-hash 验证 ItemLayout 候选 Hash，并输出字段证据。
- 使用 acnh-furniture-spatial 和 acnh-evidence-validation 研究半格家具承载规则，实际验收后归档。
- 使用 acnh-knowledge-maintenance 更新已有专题和路线，检查 Markdown 链接。
