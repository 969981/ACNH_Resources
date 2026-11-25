# BCSV 业务解析层

返回 [全量目录](Full-Catalog.md) · [全量表索引](Generated/README.md)。

# BCSV decoded 业务解析层

第三层数据，raw/named 永远保留。decoded/tables 为 234 张候选类型解码表；按原始 BCSV 字节、签名声明宽度解码，而非把 unsigned CSV 强制转换。非有限浮点、无效字符串、未知字段、非零额外字节保留 hex；枚举 CRC 原值保留，独立 __label 仅在候选一致时填充。不将 CRC 匹配当作运行时证明。

- schema/ 逐表字段证据与解码统计。
- enum-values.csv 按字段 Hash 的 HeavenTool CRC 枚举及 SmallGenre 研究候选，固定 blob 校验。未引入全局碰撞猜测或 Murmur/位域标签推断。
- reference-values.csv 50 项候选关系按源值聚合，目标 ID、标签、匹配状态；并非已确认外键。
- item-taxonomy.csv ItemParam 8221388C → UI 定义 → SmallGenre；逐 ItemID 保留原值、目标 ID 和名称候选。
- locales/ ItemParam.csv、Npc.csv：复用固定 R82 原生多语言 SQLite，验证 SHA、ItemID/历史标签字段、14 locale 记录数及原始关联状态。没有新增翻译；原版类别文本 STR_CategoryName 尚未关联。NPC 按 npc_type/source_index 关联，不是 ItemID。
- manifest.json、summary.json：产物摘要和校验值。

复现：`uv run --script Scripts/bcsv/decode.py --upstream upstream-heaven --archive historical/assets/evidence/rom-database --out out/bcsv-decoded`。外部输入的固定 commit 见 [workflow](https://github.com/969981/ACNH_Resources/blob/research/.github/workflows/acnh303-bcsv-decoded.yml)。

原版数值与业务解释分层，不改变机器人订单协议；CSV 不等于数据库已创建。旧字段 FC275E86 的签名是 CapturePreset，5270EB75 是 ItemKind；历史 locale identity 使用原有标签与 CapturePreset 值进行对账，不把 CapturePreset 当作 ItemKind。
