# R108 — gift native closure audit

从 R107 的三个入口继续。原始 NSO/ELF SHA256 认证，验证工厂记录 0487D220 RVA 的 80F8F65E 及构造 RELR。针对 01120120 逐指令可达 CFG、vptr 常量及对象写入、返回寄存器候选，导出执行槽 CFG；不以附近地址作为已证明回调。cGiftToNpc 原版字符串附近重定位指针（含内部描述符）和 ADRP 使用一并导出。

01A778E4：向前定位可能函数入口，逐个检查 CFG 是否实际包含目标；最近 C 导出仅候选。扫描 05326C78/80 与 GOT，保留直接访问证据。01ACB930 和 01A60C10 可达 CFG（间接分支、出界单列）。5270EB75 与 CanNpcPresent 等字段的 MOVZ/MOVN+MOVK 指令证据，允许中间独立指令且跟踪寄存器覆盖。仍不从 hash 形成单独推断业务语义。

原始 ItemParam 的 5270EB75 全量对账 ItemKind Key CRC32，无碰撞，11178/11178。复现 R105 SQLite，新增 r108_kind_crc_join 静态字段与 nullable actual_eligible；Web sidecar 同样保留原版 ItemID、Kind UID、静态许可、来源。该数据可用于筛选候选，不表示完整 UI 过滤器已恢复。未实机验收。

```powershell
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_r108_gift_closure.py --root . --out artifacts/acnh303-r108
```


## 首轮实际证据与补充验收

- 01120120 36条可达指令，分配0x1d8；0112019C BL 00E0FAC0，011201A0 返回 x20。真实构造函数 C 源写入最终 vptr 0495B730，注册 FilterType / ItemKindType / ItemFilterType / IsSingleSelect。首轮未找到 vptr 是因为其委派构造；第二轮直接解析真实 VTable。
- 01A778E4 GOT -> 05326C78；01A77900 加载数据指针，01A77904 STRH W8,[X10,W9,SXTW #1]。写入值先经七项枚举范围检查，BCSV row index 由 udiv 得到。实际写入者已定位；函数边界和完整字段映射仍需确认。5270EB75 在 01A74014/18 实际形成立即数。
- 01A60C10 58 条可达指令、01ACB930 453 条，均无未解析内部 BR 或出界。01A60C10 实际读取 Key (87BF00E8) 字符串；01ACB930 在 01ACBB04/2C/38 遍历固定51项指针表 (Ghidra VA 04A35AE0)，01ACBBE4 保存 CRC32 与索引，01ACBE58 返回索引。第二轮逐条解析原版 RELR 字符串并与 BCSV Key/UniqueID 对账。
- 01B07660 是已证实 CanNpcPresent 消费者，检查特殊改造、01B085E0、包装解包 01B079EC 后递归，最终读取0732BB98。01B081A0 是生日许可消费者，读取2C1B3B5B。00EFA550 调用日常许可并附加类别限制。具体 cGiftToNpc UI 分发未证实。
- 11178/11178 CRC join 通过，静态 CanNpcPresent=1:9330, =0:1848。SQLite 与 Web sidecar 已生成；动态 eligibility 仍 null。
