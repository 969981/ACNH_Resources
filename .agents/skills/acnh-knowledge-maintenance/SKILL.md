---
name: acnh-knowledge-maintenance
description: "维护 ACNH 3.0.3/docs Obsidian 知识库、Markdown 相对链接、MOC、研究日志、证据索引和去重；用于长期归档。"
---
# acnh-knowledge-maintenance

## 步骤
1. 在 3.0.3 分支读取 docs/README.md、Knowledge-Guide.md、对应专题与路线；research 分支的历史 docs 不视为同一 Vault。
2. 先搜索现有专题、标题和别名，更新已有稳定文档；新增专题使用英文短横线文件名、中文标题、YAML tags/aliases/version/status。
3. 原始数据链接固定 commit；内部使用带 .md 后缀的相对 Markdown 链接，补上下级与相关专题反向链接。
4. 分开已验证结论、候选、复现步骤与待验证。日志链接专题而非重复整篇；更新 MOC 和 roadmap。
5. 验证新增或变更链接及目标文件，检查改动仅触及允许路径；不覆盖 Obsidian 私人工作区。
## 交付
提交 SHA、更新文档、实际验收结果、未验证事项。对 research → 3.0.3 仅选取相关文档归档，不整支合并。
