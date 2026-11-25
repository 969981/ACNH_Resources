# ACNH Project Skills

本目录是项目内维护的 Agent Skills，采用每个目录一个 SKILL.md，name/description YAML frontmatter。主要面向支持 .agents/skills 的 Codex；其他客户端按自身发现机制加载，不保证自动发现。不是 ChatGPT 账户级插件。

| Skill | 入口 |
| --- | --- |
| acnh-bcsv-hash | [SKILL.md](skills/acnh-bcsv-hash/SKILL.md) |
| acnh-item-classification | [SKILL.md](skills/acnh-item-classification/SKILL.md) |
| acnh-furniture-spatial | [SKILL.md](skills/acnh-furniture-spatial/SKILL.md) |
| acnh-native-research | [SKILL.md](skills/acnh-native-research/SKILL.md) |
| acnh-assets-localization | [SKILL.md](skills/acnh-assets-localization/SKILL.md) |
| acnh-evidence-validation | [SKILL.md](skills/acnh-evidence-validation/SKILL.md) |
| acnh-knowledge-maintenance | [SKILL.md](skills/acnh-knowledge-maintenance/SKILL.md) |

原则：项目规则见 [AGENTS.md](../AGENTS.md)，技能按任务加载；共享规则只在 AGENTS.md 定义，技能保留步骤、交付物和验收。上游文档：[Agent Skills](https://learn.chatgpt.com/docs/build-skills)、[Agent Skills specification](https://agentskills.io/specification)。本次为项目自建技能，不复制未审计外部脚本，不添加网络安装器。

若用户要求引入第三方 Skill，先审查许可证、版本、完整内容和脚本权限，固定 commit，记录来源；未经明确需要不添加依赖。
