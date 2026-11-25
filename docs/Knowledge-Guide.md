---
title: 知识库维护规范
tags: [acnh, guide]
---
# 知识库维护规范

返回 [知识库首页](README.md)。

## 组织方式

- README 是 MOC（Map of Content），每个领域保留稳定的专题入口。
- 专题笔记记录长期结论；Research 下记录过程和待验证事项。更新已有知识优先于重复创建。
- 新笔记使用英文短横线文件名，中文标题与 aliases 支持中文搜索。
- Markdown 链接采用相对路径和 .md 后缀，例如 [原版尺寸定义](Furniture/Item-Size.md)，避免仅 GitHub 或仅 Obsidian 可识别的链接格式。跨专题添加反向链接。
- 二进制资源保持在原目录；不把大文件或运行产物复制到 docs。外部源码使用固定 commit 链接。
- 证据区分原始字节、第三方源码、历史版本数据、推测与待验收；不得把候选字段标为已确认。
- 研究工具、CI、机器可读结果在 research 分支演进；3.0.3/docs 保存可复用的知识与来源。

## Obsidian

已提供共享 app.json：使用 Markdown 链接、相对路径、新链接自动更新。个人 workspace、缓存和插件安装不提交。图谱和反向链接使用 Obsidian 核心功能即可。

模板：[专题研究模板](Templates/Research-Note.md)。
