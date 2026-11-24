# R107 — gift-filter / style2 / AITag native audit

补回 R106 未落库的静态许可、AITag 业务分组、Body/Fabric 数量证据。本分支独立于生命周期研究的同名轮次。

- cGiftToNpc: NNPC_Select_Present #1 选择过滤器。使用 R101 2214 条原版工厂注册记录定位 UIItemSelectWindowHandling；扫描 NSO 字符串后缀、CRC32/Murmur3 MOVZ/MOVK 候选。ItemKind 静态许可按确切 label 和原始 CRC 字段候选分别保留；actual_eligible=null。
- style2: 020D9E80 Case 0x15 从 PTR_DAT_04BC0100 的 u16 数组读取 0..6，非零值经 DAT_041797D0 六项映射。此为新增的明确消费证据；还不是写入者。01A63910 分配/清零。使用 RELR/RELA 解析同目标别名及地址+8，扫描 ADR/ADRP 使用和指令上下文。六项原始映射字节单独导出，不凭数字直接猜风格名。
- AITag: 01A5A3E8 注册 _AITagBitEnum count51，callback 01A60C10 和关联处理 01ACB930，保存原版指令窗口及直接分支。01ACAAC0 literal CRC32 链验证 Season=0, MinorSeries=1, Purpose=2, None=3。Native bit index 仍 null，不能等于 UniqueID 或未经证明的 row ordinal。
- 01AD7260 / 01AFCFA0 原版数量消费者确认 B0304B0D / 0CB402A3 signed8+1；-1 表示普通槽数量0，特殊模式另计。
- 所有地址使用 Ghidra VA，NSO module RVA=VA-0x100000。扫描得到的地址形成和哈希相等仅候选；未证明运行时数据流时不升级 eligibility、风格名和标签位索引。

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r107_gift_native.py --root . --out artifacts/acnh303-r107
```
