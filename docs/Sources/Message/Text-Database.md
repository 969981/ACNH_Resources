# MSBT 全量文本数据库

返回 [专题](README.md) · [业务映射](Business-Mapping.md)。

# MSBT 原版全量文本数据库

与 BCSV raw/named/decoded、Catalog 分离。原版 NCA 资源只读；不复制原始 SARC/MSBT 文件，原始字节可由 archive.path + member.path + SHA256 回溯，TXT2 每条原始字节直接保留。

| 产物 | 含义 |
| --- | --- |
| archive.csv | 155 个原始消息文件，来源、语言、SHA256 |
| member.csv | 归档成员、格式、节偏移与 SHA256、解析状态 |
| entries/*.csv.gz | 按 family_locale 分割，保留 TXT2 索引、节相对偏移、raw_hex、全部标签、可读文本候选、控制码及尾部原字节 |
| label.csv.gz | 所有 LBL1 标签、原标签字节、分组与索引（允许多标签） |
| control.csv.gz | 控制码结构候选、偏移、group/type、参数及完整原始 bytes |
| binding.csv.gz | Item/NPC/分类/颜色历史关联与本轮精确资源匹配状态 |
| summary.json / manifest.json | 实际覆盖及校验 |
| message.sqlite3 | CI artifact 内查询数据库（避免在 Git 重复提交大二进制） |

gzip 是无损 CSV 压缩，CI 对账原 CSV SHA。所有文本 JSON 转义字段可保留控制字符、引号、换行及 null。UTF-16 控制 framing 0x000E/0x000F 为结构候选，不宣称 group/type 业务语义；其他编码原始 bytes 保留且不生成臆测显示文本。普通文本候选去除控制 token 但不渲染变量；不能直接视为最终游戏 UI 显示。未知 MSBT 节保持来源偏移及 SHA、由原始成员回溯。当前 binding 复用 Catalog 已有映射，保留原状态，精确资源命中不提升业务证据等级，分类数字标签不直接当 ID。

运行：`uv run --script Scripts/message/build_message_data.py --historical historical`。historical 为固定历史解析器 f09e15460d02790060a374b2ad6ba569ba9b97ed 的工作树。运行状态及产物以实际 CI 为准。[CI](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-message-data.yml)。

[数据目录](https://github.com/969981/ACNH_Resources/tree/research/research/message-data)

## 查询示例

```sql
SELECT a.locale,m.path,l.label,e.display_text,e.status
FROM entry e JOIN label l USING(member_id,text_index)
JOIN member m ON m.id=e.member_id JOIN archive a ON a.id=m.archive_id
WHERE a.family='String' AND a.locale='CNzh' AND m.path='STR_CategoryName.msbt';
```
