---
title: 研究来源与复核清单
tags: [evidence, references]
---
# 证据与研究链接

- [原 3.0.3 研究进度](https://github.com/969981/ACNH_Resources/blob/3.0.3/docs/UNPACK_PROGRESS.md)
- [详细解包指南（原分支）](https://github.com/969981/ACNH_Resources/blob/3.0.3/docs/ACNH303_UNPACK_FIELD_GUIDE.md)
- [原生格式技术参考](https://github.com/969981/ACNH_Resources/blob/3.0.3/docs/ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md)
- [原分支真实产物和哈希记录](https://github.com/969981/ACNH_Resources/tree/3.0.3/Unpack)
- [原分支大规模审计结果](https://github.com/969981/ACNH_Resources/tree/3.0.3/derived/3.0.3)
- [已有媒体 Releases](https://github.com/969981/ACNH_Resources/releases)

## 每份新格式笔记模板
```yaml
---
title: 格式名
source_path:
input_sha256:
magic_and_offset:
parser:
output_path:
output_sha256:
verification_level: L0
status: investigatory
---
```
正文应写**可复现的十六进制字段、偏移、端序、边界检查、测试用例和实际执行日志**。相互链接，不将推测视为证据。