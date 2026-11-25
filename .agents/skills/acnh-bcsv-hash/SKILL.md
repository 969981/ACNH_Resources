---
name: acnh-bcsv-hash
description: "解析 ACNH BCSV、恢复字段和枚举 Hash、生成字段字典；用于 ItemParam、ItemKind、ItemSize 等原版表。"
---
# acnh-bcsv-hash

## 输入与步骤
1. 定位实际原版文件和版本，记录 SHA256、路径、blob、文件长度。
2. 读取头部、行数、行长、字段数、字段偏移和原始切片；检查边界、重复 ID、字段宽度、记录总长度，不默认为旧版布局。
3. 基于已知源码、原版字符串、历史字典生成 CRC32 候选；计算精确字节编码并检测碰撞。名称匹配只证明 Hash 对应候选，语义需样本、消费函数或原版定义证据。
4. 区分字段名 Hash、枚举值 Hash、原始字符串、数值；未知保留十六进制，禁止默认为零。
5. 输出版本化字段字典（JSON/CSV/Markdown）、候选/冲突清单、偏移和样本证据；可复现命令与测试。
## 验收
总行数与唯一 ID 统计、字段边界检查、原始切片比对、未知比例；运行实际全量审计后才宣称通过。参见根 AGENTS.md 和 acnh-evidence-validation。
