# R85 · 道具分类与村民接走资格静态审计

本目录包含：
- `itemkind_categories_189.csv`：原版 189 个 ItemKind 标签、原版日文注释、s16 堆叠字节、18 种类别标志
- `normal_npc_eligibility_unknown_417.csv`：417 个普通村民的原版身份和出生日期；四种邀请资格字段全部空/未知
- `invitation_eventflow_graphs.json`：12 个原版 BFEVFL 事件图、958 个节点、340 个查询分支；保留 case、params 和源 SHA
- `item_npc_static_summary.json`：失败状态字段、两个 Ghidra 静态候选地址、AmiiboData 数字交集与明确证据边界

脚本 `Scripts/acnh303_r85_item_npc_static_audit.py` 可从此分支的已解包 `UnPack/1/Bcsv/*.csv`、`UnPack/1/EventFlow/*.json` 重新生成分析；它另外生成未跟随 Git 的 11,178 件物品类别关联明细。请运行 `python Scripts/acnh303_r85_item_npc_static_audit.py --repo-root . --out ./r85-output`。

严禁将原版静态标签等同游戏最终运行时能力。R85 还没有证明任何村民固定的「可以被接走」资格。
