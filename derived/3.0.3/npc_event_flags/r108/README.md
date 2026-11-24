# R108 — gift native closure audit

从 R107 的三个入口继续。原始 NSO/ELF SHA256 认证，验证工厂记录 0487D220 RVA 的 80F8F65E 及构造 RELR。针对 01120120 逐指令可达 CFG、vptr 常量及对象写入、返回寄存器候选，导出执行槽 CFG；不以附近地址作为已证明回调。cGiftToNpc 原版字符串附近重定位指针（含内部描述符）和 ADRP 使用一并导出。

01A778E4：向前定位可能函数入口，逐个检查 CFG 是否实际包含目标；最近 C 导出仅候选。扫描 05326C78/80 与 GOT，保留直接访问证据。01ACB930 和 01A60C10 可达 CFG（间接分支、出界单列）。5270EB75 与 CanNpcPresent 等字段的 MOVZ/MOVN+MOVK 指令证据，允许中间独立指令且跟踪寄存器覆盖。仍不从 hash 形成单独推断业务语义。

原始 ItemParam 的 5270EB75 全量对账 ItemKind Key CRC32，无碰撞，11178/11178。复现 R105 SQLite，新增 r108_kind_crc_join 静态字段与 nullable actual_eligible；Web sidecar 同样保留原版 ItemID、Kind UID、静态许可、来源。该数据可用于筛选候选，不表示完整 UI 过滤器已恢复。未实机验收。

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r108_gift_closure.py --root . --out artifacts/acnh303-r108
```
