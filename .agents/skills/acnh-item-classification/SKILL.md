---
name: acnh-item-classification
description: "研究 ItemID、ItemKind、NHSE item_kind.bin、PokerCore 分类、网站分类与多语言类别；用于分类生成、商品导航和协议兼容。"
---
# acnh-item-classification

## 步骤
1. 读取 ItemParam 原版有效 ID 集合、ItemKind 规则和已知字段；NHSE 固定源码读取 0x54706054 与 0xFC275E86，仍需原版验证。
2. 固定 NHSE、PokerCore commit，解析各自枚举/映射，按有效 ItemID 对账；bin 零槽可能是未使用 ID，也可能是 Bottoms_Long。
3. 分离 native_kind、nhse_kind、poker_kind、web_category、legacy_category；保留艺术品真假及原生 ID；PokerCore 的 Fake 合并只用于兼容。
4. 关联 STR_CategoryName 和原版 UI 字段候选；区分官方文本、人工翻译、未匹配；不得将历史版本候选直接当作 3.0.3 结论。
5. 输出逐 ID 表、类别分布、缺口、差异、映射版本和协议回归测试；未知单列，不隐式填充。
## 验收
每个有效 ID 恰好一条原生记录；重复/缺失/未映射显式统计；订单序列化保持旧协议，未运行测试不宣称兼容。
