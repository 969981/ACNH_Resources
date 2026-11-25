# BDLI / LBLI 与 MSBT 对照

返回 [专题](README.md)。

原版 BDLI v2：20 字节头，16 字节 LBLI 节描述符，含 count、相对描述符起点偏移、identifier；零 count 可能指向目录占位。有效 payload 边界依非空起点确定。identifier 及运行时用途尚未完全验证。

CNzh 的 STR_CategoryName.bdli.zs 压缩大小3118字节，历史实读224个LBLI节；对应 String_CNzh.sarc.zs 内 STR_CategoryName.msbt 224条文本。同数量与同名不证明逐标签关联。本轮检查 CNzh 同名 BDLI 133/133，其他语言仅路径候选，未检查存在性。后续需核对 identifier、索引、实际消费者。

[历史解析器](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh303_bdli.py) · [映射CSV](https://github.com/969981/ACNH_Resources/blob/research/research/message-catalog/string-member-map.csv)。
