# ACNH Resources — Agent 工作规范

## 项目目标
围绕 ACNH 3.0.3 原版资源，建立可复现的字段、物品、空间、模型、图标、语言与运行时证据知识库。默认中文沟通，代码标识及原生字段保持原名。

## 分支与不可变资源
- 3.0.3：原版资源基线、长期知识库 docs/、Agent 规则和 Skills。原始 NCA 目录只读，不修改、重打包、删除或复制其内容。原始树基线 75e065bbf08561e762f944d6db73e8cc1ed12153。
- research：研究脚本、可复现导出、实验、CI；不直接合并全部研究产物至 3.0.3。归档仅选择经过证据核对的文档和明确标注的候选结论。
- 先读取实际分支、HEAD、相关文档与代码，检查工作树；不假定旧聊天、默认分支或历史路径仍有效。不得擅自删除、强推、重置分支或改写已有用户工作。

## 工作流程
1. 定位主题与已有证据，选择下方 Skill；先复用现有研究，避免重复。
2. 固定版本、commit、文件路径、SHA256、原始偏移和类型；将原生值与第三方派生值分离。
3. 优先机器可复现、全量对账、差异报告；先用样本验证解析，再扩大覆盖。
4. 验收区分已提交、已触发、已运行、已通过、待验证；没有实际日志/产物不得宣称通过。未知保留原值。
5. 更新专题文档、首页/索引、研究路线及必要日志；相对 Markdown 链接必须能解析。
6. 交付报告包含实际 commit、CI 链接、计数、差异、限制和下一步。没有写入权限或运行环境则说明，不伪造提交。

## Skills 路由
使用 .agents/skills 下的 SKILL.md；只加载当前任务相关技能，可组合使用。完整列表见 [.agents/README.md](.agents/README.md)。

| 任务 | Skill |
| --- | --- |
| BCSV、字段 Hash、枚举 | acnh-bcsv-hash |
| ItemID 分类、NHSE/PokerCore | acnh-item-classification |
| 尺寸、碰撞、承载、旋转 | acnh-furniture-spatial |
| NSO/ELF、Ghidra、运行时字段证据 | acnh-native-research |
| 图标、模型、材质、纹理、多语言 | acnh-assets-localization |
| 全量数据对账、CI 和验收 | acnh-evidence-validation |
| Obsidian、Markdown、归档与去重 | acnh-knowledge-maintenance |

## 兼容性及安全
网站导航字段不能替换旧机器人分类协议。不要凭名称或大小猜测行为；不要提交凭据、密钥、机器绝对路径、个人 Obsidian 工作区、未经许可的新增游戏资源。项目规范不替代执行环境的权限和安全规则。
