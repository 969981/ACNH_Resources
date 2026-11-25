# BCSV 剩余 CRC 枚举与关系证据审计

返回 [全量结构索引](Generated/README.md) · [全量数据字典](Full-Catalog.md)。

上一轮基线：234 表、58,349 行、2,898 字段位置；CRC 枚举 5,713/5,870 个表-字段-码值组合已有标签，157 个未映射。此数与 28 个未知原始字段名无关。

## 复现

```powershell
python Scripts/bcsv/relation_audit.py
```

[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-bcsv-relations.yml) 生成独立 artifact，未验收前不回填原字典。

| 产物 | 证据内容 |
| --- | --- |
| enum-residual.json | 逐项剩余 CRC、行数、同字段候选、关联目标字符串、全局字符串与碰撞状态 |
| field-profiles.json | 全量字段偏移、跨度、SHA256、候选类型、数值域、0/1 候选及逐位出现次数 |
| key-candidates.json | 全量唯一且名称匹配 ID/Label 等规则的候选键 |
| numeric-reference-candidates.json | 名称匹配、目标唯一、至少 3 个匹配值、行与去重覆盖均 >=80% 的数值关联 |
| existing-native-evidence.json | 现有 hash008h 原生证据，不等于新增分析 |
| summary.json | 分母、分子、候选与未解决状态 |

不把低基数视为枚举、不把位分布视为业务位掩码、不把唯一性视为原生主键、不把数值重叠视为真实外键；0 和全 1 不自动转换 NULL。额外非零字节不截断。仅当前表、字段、偏移、原生消费者读写及条件均有证据时升级业务结论。

下一阶段：人工与原生函数逐项验证，恢复缺失枚举；独立研究 MurmurHash3、复合键、字符串外键和消费者索引；在确认语义后生成 ER 图与 PostgreSQL DDL。原版 NCA 和机器人协议不修改。

## 首轮实际验收（2026-11-25）

[CI #45574462546](https://github.com/969981/ACNH_Resources/actions/runs/45574462546) 成功；[完整 6 文件产物](https://github.com/969981/ACNH_Resources/actions/runs/45574462546/artifacts/15002224934)；[永久 CI 摘要](../../../research/bcsv-relations/ci-baseline.json)。234 表、58,349 行、2,898 字段位置通过 SHA 和字段结构对账。157 个残余码值中 85 项有同字段或关联目标证据，14 项只有全局字符串候选，58 项未解决。新增 46 个数值外键候选，450 个唯一键候选，394 个 0/1 值域候选；完整数值字段 1,979 个。新增原生函数语义确认 0，仍未回填 99 个候选。候选潜在覆盖 5,812/5,870（99.01%）。
