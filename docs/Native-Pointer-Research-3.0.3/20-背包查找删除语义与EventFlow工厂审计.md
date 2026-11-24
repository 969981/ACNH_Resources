---
title: 背包查找删除语义与 EventFlow 工厂审计
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, Native, Inventory, EventFlow, PocketMenu, RELR]
status: static-and-prior-byte-evidence
runtime_verified: false
---
# 背包查找删除语义与 EventFlow 工厂审计

[[19-共享选择结果对象与扣减回调重定位]] · [[18-背包扣减调用者与UI生命周期原始证据]] · [[17-UI全局根与PutUnitIcon重定位审计]]

## 1. 证据范围

本轮实际重新读取下列 Ghidra C，并复核前轮 CI artifact 14891905542 的 00DA8F70 原始指令 JSON；实际计算 ZIP SHA256 为 7625e9b80b91b475b89d154fb227c95133a38b38e2f1b3203f762bb162573fd8。重新解压 R100 artifact 14881442847 的 SQLite 并查询原始重定位记录。所有 VA 为 Ghidra VA，Main RVA=VA-0x100000。新增函数原始字节导出和工厂扫描已提交 CI，完成情况见后续验收。没有运行时验证。

## 2. Inventory 查找与删除不是同一操作

### 2.1 02675B70

[02675B70](../../derived/3.0.3/ghidra12.2/c/5b/02675b70.c) blob fcc1259cdd918487a88de900af9e967f88c17d83。身份小于8，经02582D8C映射、步长0x13F0记录的13D4/13D6字段检查，再调用02674700(identity,slot,PTR_DAT_04BB37E0,1,0)。R100 实查 GOT 04BB37E0 -> 05586008 (BSS)。默认物品记录初始字节还未由构造写入证明；独立调用02326130在输入物品首短字为-2时选择此函数，支持空槽清理语义。函数不向上层返回成功值（C为void）；不可用调用结束当成功凭证。

[02674700](../../derived/3.0.3/ghidra12.2/c/47/02674700.c) blob e8b6795650443e39aca0ec60854ef3826ba38ca2。使用02583354(DAT_055021A0,identity,1)取得玩家对象；目录存在时调用02648C90；描述符取 player+194B0 或 SaveDataMgr+20。原绑定数组按动态第一分区容量取 +15C/+A4；校验描述符回调，构造0x17C描述符并调用027FA2DC(payload,index,item,aux)。返回位0成功后按mode=2调用02674040，mode=1调用02673DE0，最后02674420。与02674A80共享后段，但身份解析和前置消费者不同。不能直接推断写入是原子事务。

### 2.2 026788F0

[026788F0](../../derived/3.0.3/ghidra12.2/c/88/026788f0.c) blob df00068501b8051ebb8a8305589c8c1d2dec5938。身份检查相近，025830C0取得player，描述符及guard同类。循环容量由[027F9664](../../derived/3.0.3/ghidra12.2/c/96/027f9664.c) blob 5e384936aea8c4db29a9568a36f86bb24ae659eb 决定：UpgradePocket40->40，否则UpgradePocket30->30，否则20（player未找到亦返回20）。遍历动态B区+0xB8及A区+0；空槽首short=-2走直接记录路径，非空校验目录，失败使用默认记录。0277D7B4匹配后返回逻辑槽位；未找到返回 *PTR_DAT_04BB4E20，R100实际目标0559BC2C (BSS)。不猜静态缺省值；独立消费者以<40判定索引有效。guard可能有副作用，但未观察到直接写物品记录。

[0277D7B4](../../derived/3.0.3/ghidra12.2/c/d7/0277d7b4.c) blob b7c430ebf42db52f791d269cc145bfbe52d426aa。先比较0277D6C4结果，目录有效时还依据01B032D0及记录掩码0x03000000有条件比较byte+3。因此不是8字节memcmp；物品ID相同不代表数量、全部变体等完整实例相同。

### 2.3 00DA8F70 原始字节复核

上一轮四项跳转表已通过原始字节验收，本轮重读 cProgram 分支的已认证 JSON：

|VA|bytes|instruction|
|---|---|---|
|00DA9394|e00314aa|mov x0,x20|
|00DA9398|e10313aa|mov x1,x19|
|00DA939C|553d6394|bl #0x25788f0|
|00DA93A0|e103002a|mov w1,w0|
|00DA93A4|e00314aa|mov x0,x20|
|00DA93A8|f2316394|bl #0x2575b70|
|00DA93AC|c2000014|b #0xca96b4|

查询返回索引直接传至替换包装器。另 cItemWindow 的可达分支于00DA9478 (be316394) 调02675B70。cItemWindowSub 对应数量扣减，cUIItemSub 对应物品匹配数量扣减。以上是系统物品删除的候选业务路径，非 Field 写入、非投放成功证据。

## 3. PocketMenu 物品 UI 映射与槽位字段

[031956F8](../../derived/3.0.3/ghidra12.2/c/56/031956f8.c) blob 76086bca4223c504831a247dc4b349f6e25b5681：首先调用02675B70，随后读取自身+1C1B8[index*4]。若不是FFFFFFFF且<270，访问+268+recordIndex*1A8，清理活动展示状态+1A0，并清映射。再从自身+210布局对象取对应槽位控件（0..19为+590数组，20..39为+630数组，40..42为+6D0/+6D8/+6E0）。间接跳转0319589C 未恢复。其行为是Inventory与展示更新，不等于持久Field生产者。

[03195900](../../derived/3.0.3/ghidra12.2/c/59/03195900.c) blob c2dd16ed2f56dfd0890c68783d00f6239c45d0c3：检查02672FB0后调用02674700或026738B0，再从270条展示记录查找空闲记录并调用03412D40，写+1C1B8映射。结合03194070的映射写入，270条记录可解释为物品展示对象池，而非270个背包槽。

[0319536C](../../derived/3.0.3/ghidra12.2/c/53/0319536c.c) blob a0ae04ebac983a0d965dbed89661f2719da9f4fd：读取物品，检查目录，条件下构造数量变更结果并调用02674700或026738B0；另一分支调用031956F8。不能据其中的减10乘数断言对应普通堆叠数量。

[031742D0](../../derived/3.0.3/ghidra12.2/c/42/031742d0.c) blob 02160e5e60febcca7f22ce5e831c796be76eaad4 从self+1C514读取byte，并校验容量，作为02677EA0及0267BC10的槽位参数，再读取变更后的物品并更新展示映射。031867B0将+1C514处u32初始化为00FFFFFF。这个byte是很强的业务操作槽位候选，但031742D0的真实RELR槽为04B06740（并非已证PocketMenu address point 04B06E28内的槽）。必须证明对象类型兼容、字段实际写入者、移动光标时的动态变化，才可命名实时高亮。+1C1B8数组同样不能当作单个槽位索引。

## 4. EventFlow 工厂注册链

[0070FCD0](../../derived/3.0.3/ghidra12.2/c/fc/0070fcd0.c) blob dabd84789e8d1a8077306d650eda158f7262d8fa：根据owner+278类别，从动作类别索引与查询类别索引表取编号，选择16字节记录，将记录+0的u32与owner交给记录+8的构造回调；结果分别存owner+2D0、+2E0指针数组，再调用实例virtual+20。R100已有证据表明这些全局表需独立恢复实际内容，不得把BSS值硬当静态表地址。

|类别|Ghidra VA|
|---|---|
|Action count|04C8DED8|
|Action pointer|04C8DEE0|
|Query count|04C8DEE8|
|Query pointer|04C8DEF0|
|Action category table|04C8DEF8|
|Query category table|04C8DF68|

重新读取[BindInfo.json](../../UnPack/1/EventFlow/Info/BindInfo.json) blob c360bec4524dd8367992a46ee67c974e029a8ff2，ActionBindData 50项、QueryBindData 77项。ActionBindData 中未找到 DeletePlayerItem、ItemSelectWindow、ItemSelect、PresentItem 名称子串的显式别名。缺项不能证明该action不存在，也不证明其原生名。另 query 中存在多组选择查询别名。注册表映射仍需从原始哈希、构造回调、虚表写入与实际执行槽交叉验证。

### 4.1 六张同型表实际重定位

本轮 R100 SQL 复查每张表头候选+10..+68连续12个RELR text槽；以下为每张表独立成员；共同成员+38..+60分别为00AD9494/00ADC7A4/00AD94A0/00ADC7AC/00ADC7B0/00ADC7B4。

|header VA|alias VA|+10|+18|+20|+28|+30|+68|
|---|---|---|---|---|---|---|---|
|0493F880|04BB72C0|00C04FD8|00C05064|00C04E68|00C04E6C|00C04ECC|00C04EE0|
|04941510|04BB74A0|00C32F30|00C32FBC|00C31A74|00C31A78|00C31AD8|00C31AE0|
|04954620|04BB8708|00D98090|00D9811C|00D97DAC|00D97DBC|00D97E28|00D97E30|
|04954690|04BB8710|00D98854|00D988E0|00D9822C|00D9823C|00D982A8|00D982B0|
|049552C8|04BB87E0|00DA96D4|00DA9760|00DA8EE4|00DA8EF4|00DA8F60|00DA8F70|
|04957E80|04BB8B00|00DD7E64|00DD7EF0|00DD79E4|00DD79F4|00DD7A60|00DD7A70|

header+10是候选address point；完整RTTI、构造器及工厂绑定未验证。

## 5. 本轮新增可复现工具

[acnh303_delivery_factory_audit.py](../../Scripts/acnh303_delivery_factory_audit.py) 读取同一Build ID的NSO/ELF，匹配整个text后扫描12个指定目标的B/BL候选；以96字节有界窗口搜索6个表别名及address point；对完整名称与短名称的Murmur3/CRC32数据字做原始字节匹配并记录邻近重定位；扫描固定形式STR X [base,#D90] 和STRB [base,#D78/D79]。字段偏移相同不代表对象相同；此扫描不覆盖派生基址、STP、STUR和其他变体，不能宣称非零生产者已定位。新增原始指令导出入口包含2个Inventory函数、通用变更、比较、容量、3个Pocket展示函数、操作槽位消费者和工厂。

目前共享选择结果+0xD90的最终非零生产者、实时高亮、菜单值10映射状态3、Field及Host/Client事务仍未闭合。生产派送代码和正式Build ID数据库未修改。

## 6. 新增 CI 实际验收

[Run 45330686716 / artifact 14891242803](https://github.com/969981/ACNH_Resources/actions/runs/45330686716/artifacts/14891242803)，head eae9d6f22716f5dda82e023c1eaf1bc783da9b3b，success；已实际下载并校验 ZIP SHA256 49cb30fe944d8c7fd4900dfb2bd961d94314ff3b2c1049b32da1a711cc9080a6。156个入口/锚点、22366条匹配记录、62个gap。独立 FactoryAudit 扫描结果：34条别名/表地址引用记录（非34个独立工厂）、114条指定目标直接B/BL候选、275条指定立即数存储候选（不是275个共享对象写入者）、2个哈希数据候选。

|VA|匹配指令记录|gap|
|---|---:|---:|
|02675B70|65|1|
|026788F0|184|0|
|02674700|221|0|
|027F9664|51|0|
|0277D7B4|125|0|
|031956F8|112|1|
|0319536C|227|0|
|03195900|71|0|
|031742D0|144|0|
|0070FCD0|210|0|

直接分支候选数量：02674700 29，031956F8 26，02675B70 21，026788F0 18，0319536C 11，03195900 9；6个业务回调入口没有直接B/BL匹配，不排除间接调用。线性扫描不等同已证函数归属。

### 6.1 六套回调表的地址点写入证据

|业务入口 VA|table address point VA|写入位置 VA|原始字节|
|---|---|---|---|
|00C04EE0|0493F890|0112231C|080000f9|
|00C31AE0|04941520|01127484|080000f9|
|00D97E30|04954630|0110A980|090000f9|
|00D982B0|049546A0|0113808C|080000f9|
|00DA8F70|049552D8|01108AF8|080000f9|
|00DD7A70|04957E90|0113F634|080000f9|

六者均为向[x0]写表地址的候选，来源为96字节有界静态窗口；address point与header+10一致。执行槽相对 address point 为+58。还存在8处其他写入候选。未证所有写入者均为构造器。

### 6.2 名称哈希及相邻重定位

完整名称 EventFlowActionSystemDeletePlayerItem 的 Murmur3 seed0=2E485D5F，匹配原版数据 Ghidra VA 0497B8F0；前后实际代码重定位槽/目标分别0497B8E8/01108934、0497B8F8/011089F8、0497B908/01108B34。01108AC0实际读GOT别名04BB87E0，01108AF4形成049552D8，01108AF8写入[x0]。因此哈希邻接入口与该类地址点写入存在强候选联系，需从011089F8实际遍历证明可达并查证整个表记录语义。

EventFlowActionUIItemSelectWindowHandling 的 Murmur3 seed0=80F8F65E，匹配0497D220；邻接槽/目标0497D218/0112005C、0497D228/01120120、0497D238/011201B0。没有直接证明这组记录绑定选择结果写入。

### 6.3 新的共享选择结果生产者候选

下列来自已验收 artifact 的 FactoryAudit/factory_audit.json，匹配原版字节。它们不是仅初始化为零的存储形式；部分窗口出现LSL/ORR以及+28子对象读取。实际对象根、控制流与位索引来源仍需验证。

|写入VA|原始字节|相邻原始行为|
|---|---|---|
|03175E84|0cc906f9|03175E58 LSL X13,X13,X11；03175E60 LDR X8,[X8,#0x28]；03175E70 ORR X12,X13,X12；STR X12,[X8,#0xD90]|
|03176998|0bc906f9|0317696C LSL X13,X13,X12；03176974 LDR X8,[X8,#0x28]；03176984 ORR X11,X13,X11；STR X11,[X8,#0xD90]|
|03177590|2bc906f9|0317756C LDR X9,[X9,#0x28]；03177580 LSL X11,X13,X11；STR X11,[X9,#0xD90]|
|03177788|0cc906f9|STR X12,[X8,#0xD90]；源值定义尚未恢复|
|031788CC|0cc906f9|031788A0 LSL X13,X13,X11；031788A8 LDR X8,[X8,#0x28]；031788B8 ORR X12,X13,X12；STR X12,[X8,#0xD90]|

R100最近前驱代码重定位目标分别03175840、03176698、03177480（后两处共用最近目标）、03178514。最近目标非函数边界证明。新增提交7160e711e4f9f8856d4bfff1057e2df388f90424已将这些入口及哈希相邻构造候选纳入CFG导出器。新CI需独立验收。

正式生产派送和Build ID指针库未修改；运行时验证仍为空。
