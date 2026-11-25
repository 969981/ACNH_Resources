# Zstandard (.zs) 与 SARC (.sarc)

返回 [专题](README.md)。

Zstandard 是无损压缩算法。标准 Zstd frame magic 为字节 28 B5 2F FD（小端数值 0xFD2FB528）。.zs 是资源命名约定，不能仅凭后缀断言内部类型；字典压缩与异常 frame 需单独处理。先验证源 SHA，再限制解压大小。

SARC 是归档容器。实际历史解析器读取 SARC 头、BOM、文件长度、数据区偏移、SFAT 节点及 SFNT 名称区。SFAT 每节点 16 字节：名称 Hash、名称属性、相对数据区起止偏移；名称属性低24位以4字节为单位定位名称。检查越界、重复路径、路径穿越。SARC 不等于压缩算法。

String_CNzh.sarc.zs → Zstd 解压 → SARC → 133 个 MSBT 成员 → LBL1/TXT2 → 标签和文本。BDLI.zs 则解压为 BDLI，不经过 SARC。

[固定历史 Python 解析器](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/Scripts/acnh_formats.py)。依赖 zstandard，可用 uv 运行；不修改原版资源。
