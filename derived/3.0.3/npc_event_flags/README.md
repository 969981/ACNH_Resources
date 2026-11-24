# ACNH 3.0.3 · R93 NPC EventFlags 原始文件、逐表处理与整合包

这是一份 **371 条状态参数定义**的可复现只读导出，不包含任意真实玩家或岛屿的存档状态。
原始资源维持不变；本目录 raw/ 和 decoded/ 使用相同 Git blob，便于完整下载与溯源。

| 原版参数表 | 定义数 | 原始列数 | 原始行长 |
| --- | ---: | ---: | ---: |
| EventFlagsNpcMemoryParam | 167 | 10 | 208 |
| EventFlagsNpcSaveParam | 65 | 7 | 208 |
| EventFlagsNpcTempParam | 72 | 8 | 208 |
| EventFlagsPlayerActivityParam | 67 | 8 | 208 |
| 合计 | 371 | | |

## 文件结构
- [raw/](./raw/)：四个完整原版 BCSV，保持与 NCA 提取文件同一 Git blob。
- [decoded/](./decoded/)：四张既有 CSV、四张列 hash/偏移/宽度 JSON 元数据，无损保留。
- [processed/](./processed/)：四个逐表 JSON，统一 table、scope、UniqueID、key、日文注释、行索引、原始偏移、全部 raw_fields。
- [integrated/eventflag_definitions_371.json](./integrated/eventflag_definitions_371.json) 和 [CSV](./integrated/eventflag_definitions_371.csv)：全部 371 条原始定义，联合键为 (table, unique_id)；同名字段跨表绝不折叠。
- [source_manifest.json](./source_manifest.json)：原始路径、Git blob SHA1、文件大小和表维度；原版 hash 列不自行猜测 signed/unsigned 或字段含义。
- [R93 Python 导出器](../../../Scripts/acnh303_r93_npc_eventflags_bundle.py) 和 [Actions](../../../.github/workflows/acnh303-r93-npc-eventflags.yml)。

## 复现（仓库根目录）
```powershell
python Scripts/acnh303_r93_npc_eventflags_bundle.py --root . --out artifacts/acnh303-r93-npc-eventflags --verify-committed
```

CI 自动重新从四个 NCA 原始 BCSV 字节解码，使用 parse_bcsv 核对已有 CSV 和 JSON 元数据、每条行偏移和每个原始字段值；对比仓库提交的逐表与合并快照；发布完整 Artifact（raw、decoded、processed、integrated、source_manifest、verification_report）。verification_report 含 SHA256、每表原始字节数、逐字段校验量及输出清单。支持 push / pull_request / workflow_dispatch。

**边界**：定义中的范围、默认值、字段名称不等同于实际存档数值。所有 actual_value 均为 null。NPC Memory、Npc Save、Npc Temp、Player Activity 分开保留；目前没有任何具体居民好感度、装箱、跨岛招募运行时结果，也没有验证这些定义的 Native 存档位布局。
