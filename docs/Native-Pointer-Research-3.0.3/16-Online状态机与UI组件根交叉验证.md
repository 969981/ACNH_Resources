---
title: Online状态机与UI组件根交叉验证
version: 3.0.3
tags: [ACNH, Native, UI, Online, Pointer]
status: decompiler-cross-check
runtime_verified: false
---
# Online状态机与UI组件根交叉验证

[[14-Language与Time原生根恢复]] · [[15-PocketMenu与PutUnitIcon原生状态机]] · [[13-Heap动态根与中文语言偏移对账]] · [[09-保存后端析构与玩家Payload]]

本轮新读取的 Ghidra C 证据如下；未取得原始 ELF 字节或真实进程快照，不能提升为已验收生产地址。Main RVA = Ghidra VA - 0x100000。

## 1. UI 组件 owner 交叉确认

03387478 创建并登记下列组件；03201990 (blob 6ae456937a5c0ba6e540522185b1b2be123bad6a) 实际通过 PTR_DAT_04BB2230 取对象，再读 +0xD0，写子对象 +0x26C 的 byte 和 +0x264 的 u32。两个独立函数的 +0xD0 与 SelectCursor 关联是强静态候选；仍需认证 relocation 将别名绑定到实际 Main BSS 槽，并验证两者 owner identity。

|组件|owner offset|创建入口 VA|
|---|---|---|
|SelectCursor|0xD0|03387C94|
|PocketMenu|0x88|03387E08|
|MenuDevice|0x90|03387F84|
|CommonWipe|0x98|033880F8|
|CommonBG|0xA0|03388320|
|MessageWindow|0x48|0338852C|
|CommonDialog|0x68|03388754|
|SystemDialog|0xB0|033888C8|

来源：[03387478](../../derived/3.0.3/ghidra12.2/c/74/03387478.c) 行22–55；[03201990](../../derived/3.0.3/ghidra12.2/c/19/03201990.c)。Ghidra 04BB2230 即 Main RVA 04AB2230，是重定位别名候选，不是最终 owner 根；不要少做一层 dereference 或凭相邻全局猜测最终 BSS。

SelectCursor 03200224（blob 62e27be4aa650362729f7727f14f016e233945a9）对象大小0x288，+0x1F8 身份字段、+0x1FC 配置 u32、+0x264 初始化0、+0x26C 初始化 u16 0。03201990 对 +0x264、+0x26C 的写入证明其为运行时字段，但未证明为背包槽位光标，亦未证明旧 Heap 0x43E0599C 的物理 alias。MessageWindow 仅确认 owner component slot，不代表 ChatId/TextSpeed 已恢复。

## 2. PocketMenu 数据消费链

[03195E80](../../derived/3.0.3/ghidra12.2/c/5e/03195e80.c) blob 9ee0437430a89c2b2ae3c328dd05d6ec5b2167f0：从 PocketMenu+0x1F8 读玩家身份候选，对 0..39 调 02672E00 得容量、02677EA0 得物品记录，按实例回调以及 0266A0C0 条件形成 +0x1C4F0 的 u64 bitmap。空槽 s16=-2 与过滤回调共同影响该位，不能把它称为 cursor 或简单空槽掩码。

[02672E00](../../derived/3.0.3/ghidra12.2/c/2e/02672e00.c) blob aa3707043e4e33d9bcd1519cee2a6a775878825b：经 02582D8C 身份索引与 PTR_DAT_04BB4FB8 表校验（步长0x13F0）；025830C0 取 player，descriptor player+0x194B0，必要时 fallback SaveDataMgr+0x20。I=P(D+0x78)+P(D+0x80)，容量=min(U32(I+0x158),20)+min(U32(I+0xA0),20)。guard D+0x98 的前后回调保留。

[02677EA0](../../derived/3.0.3/ghidra12.2/c/7e/02677ea0.c) blob ed37ea32c2303e741b71aaa3a09f5b554e262aa1：先选 I+0xB8 的 count1 区，再选 I+0 的 count2 区，8B stride；空槽直接返回，非空 catalog 校验；失败时返回静态候选记录 05586008 或其他 fallback。不能把任意返回地址当可写玩家物品。

[0266A0C0](../../derived/3.0.3/ghidra12.2/c/a0/0266a0c0.c) blob 1cc68620b0651b5f86e14ae84ac254d4226506a3：独立 player 描述符 +0x1A80/+0x1A88 与 +0x1AA0 guard，02816430 返回记录候选，0277D7B4 比较，028169A0 返回 index 后与传入 index 比较；具体业务名尚不明。它是物品/index 关联判断候选，不是 UI 高亮索引。

## 3. Online state machine

[01D3E72C](../../derived/3.0.3/ghidra12.2/c/e7/01d3e72c.c) blob 0d03573bdc7cd3a5d4a3f814d91d423db619e911。全局 DAT_0536C708 = self；0536C710 = LAB_01D3EA78，0536C718=0。以 self+0x500 调 03EBAC90 分配状态数组。注册 0 Invalid / 1 Startup / 2 Ready / 3 Matching / 4 Active / 5 Leave / 6 Cleanup。状态名字只是索引，不证明状态转换图。

|self offset|观察|
|---|---|
|0x508/0x50C|状态索引及相邻值|
|0x510/0x514|迁移时保存旧值|
|0x518|待迁移索引，复制到0x508|
|0x51C|请求数量|
|0x521|初始化标志候选|
|0x528|记录容量|
|0x530|记录表指针|
|0x538/0x540|名称表容量和指针|

[03EBAC90](../../derived/3.0.3/ghidra12.2/c/ac/03ebac90.c) 按 count*0x40 分配状态记录、count*0x10+8 分配名称表。03EBAF40 将 :: 后缀写入名称表。7 项记录共0x1C0，名称表申请0x78。共享回调包装 VA 04A556A0，Active record +0x10/+0x20/+0x30 分别为0x50/0x58/0x60，伴随 +0x18/+0x28/+0x38=1；这些数值是编码回调字段候选，不是直接函数 RVA。

[01D3FC60](../../derived/3.0.3/ghidra12.2/c/fc/01d3fc60.c) blob d309482cbc55b0d028cbca8e372a39d02ce4258e 是 _INIT_5379，末尾清根。它证明静态初始化，不是运行中退出联机的析构函数。不得把初始化清零当作 Leave/ Cleanup 实际回调。Host/Client 区别和旧 active byte 语义映射尚待实测。

## 4. 后续原始证据和验收

认证 ELF 导出器已包含部分 UI 构造和状态机，本轮应扩展 03201990、03195E80、02672E00、02677EA0、0266A0C0、01D3E72C/01D3FC60 等入口。重定位数据库查 04AB2230、04AB4FB8、04AB4F78 的真实 target；区分 slot、目标全局、实例字段，未读取原字保持 candidate。

Language/Time 工作流的现有查询仅返回 pull-request 运行，push workflow 结果尚不能验收。原生 66/18 项表不预填。0x7000 原因需自有离线多语言快照与分配顺序；没有快照不宣称已归因。对同一存档、版本、平台分别做 CNzh/TWzh/JPja/USen/EUen/KRko 三次独立启动，记录对象创建序列与分配器、请求大小、对齐、真实相对地址，并区分同一对象的地址漂移与不同对象的误匹配。所有历史候选保留，生产写路径不变。
