# MSBT 消息文本格式

返回 [专题](README.md) · [文件索引](String-Member-Index.md)。

MSBT（Message Studio Binary Text）存储名称、选项、消息等文本。MSBP（Message Studio Binary Project）为消息工程相关资源；App.msbp 已在原版目录发现，本轮未解析其工程结构。

| 头部偏移 | 说明 |
| --- | --- |
| 0x00 | 8字节 MsgStdBn |
| 0x08 | BOM：FF FE 小端，FE FF 大端 |
| 0x0C | 文本编码标志，当前解析器支持 UTF-8/UTF-16 |
| 0x0E | u16 节数 |
| 0x20 | 首个节头，每节头16字节 |

节按16字节对齐。LBL1：标签分组、标签长度、名称、文本索引；TXT2：文本条数及相对节起点偏移；ATR1：属性数据，具体语义待逐文件验证。MSBT 内可包含控制码及参数，不能直接当作纯显示文本；当前历史解析器的字符串解码不是无损重建。

主键采用 (locale, archive_family, member_path, label)，保留 text_index 与 member SHA。数字标签如 0001 必须保留前导零；不可将 TXT2 索引、LBL1 标签和 ItemID 混为一谈。[历史 R76 验收](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/assets/evidence/rom-database/r76-msbt-14-language-probe.json)。
