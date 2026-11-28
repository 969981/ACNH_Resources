---
title: ACNH 3.0.3 道具岛拾取、背包资格与派送研究 ADB-017~044
tags: [ACNH, ItemKind, ItemParam, Pickup, TreasureIsland, ItemCapabilityCore]
updated: 2026-11-28
status: source-audit-native-static-partial
runtime_verified: false
---

# 道具岛拾取与派送资格（ADB-017～044）

[[00-Home]] · [[ACNH303_SPECIAL_ITEM_CAPABILITY_RESEARCH]] · [[ACNH303_R84_RUNTIME_ITEM_RESTRICTIONS_EVIDENCE]] · [[23-Web-14Locale-Item-Villager-Export]]

## 1. 目标和证据基线

派送候选以有效背包道具为主，不以原版菜单是否允许丢放为门槛。普通丢放、地图存在、拾取入包、离岛保存和商品政策是独立行为。CanSetItem 为静态候选，而不是背包合法性或捡拾成功的充分条件。CanPut=false 不排除鱼、昆虫、海洋生物和植株。未知不等于禁止，也不自动上架。

本轮通过 GitHub 读取仓库基线 3a09c2da58612560433f9b2b3a97ee3c1aa4fe5b 的已解码 CSV、元数据、R74/R84/R82 文档和现有 Ghidra C/原版 CI 研究记录。重新统计完整 189 行 ItemKind CSV；未重新解码 ROM、未下载新 ELF CI artifact、未执行实际游戏、未生成全量新数据库。以下 Git blob 为来源身份，不冒充 SHA256。

|来源|路径/身份|
|---|---|
|原版 BCSV|e10617820db06889e1638499478da0de_NCA/1/Bcsv/ItemKind.bcsv、ItemParam.bcsv、ItemFilter.bcsv、ItemAct.bcsv|
|ItemKind 解码 CSV|[ItemKind.csv](../UnPack/1/Bcsv/ItemKind.csv) blob bee0408c96266c5b21f27d43bfe9d44a598aad7c|
|结构元数据|[ItemKind.json](../UnPack/1/Bcsv/ItemKind.json) blob 6a265de30eafb474ade9172a5d7a9b16315f5d44；VSCB, 189×152 bytes, 31 hash 列|
|原版 ItemParam|R84/网页导出记录 SHA256 9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609；11178 ID、107 hash 字段、548 bytes/row；本轮未复算|
|R74 关联统计|[r74 JSON](../assets/evidence/rom-database/r74-original-item-npc-stack-schema.json) blob 6bc825b87c739f4820e7d09c58b2e871d8857d60|
|已有原版 CI|[45343034553](https://github.com/969981/ACNH_Resources/actions/runs/45343034553)、[46092064868](https://github.com/969981/ACNH_Resources/actions/runs/46092064868)；历史研究文档记载的验收，非本轮重跑|

原版字节复核沿用 R74/R84 工具。地址以下均为 Ghidra VA，Main RVA=VA-0x100000。证据层：ROM_STATIC、NATIVE_STATIC、ELF_BYTE_VERIFIED、USER_OBSERVED、RUNTIME_VERIFIED；单条行为必须有独立 evidence_id。

## 2. 原版 ItemKind 实际复核

|字段|CRC32|类型|行内 offset|
|---|---|---|---|
|UniqueID|54706054|u16|0x20|
|Label|87BF00E8|string32|0x35|
|MultiHoldMaxNum|4C9BA961|s16|0x1C|
|CanSetItem|49129B27|u8|0x30|
|CanPut|5D389FBF|u8|0x29|
|CanFtr|90BC0855|u8|0x24|
|CantTakeOver|C37A683C|u8|0x33|

本轮读取 189 个唯一 label；按 CanSetItem/CanPut/CantTakeOver 分组：

|SetItem|Put|TakeOver restriction|Kind count|
|---:|---:|---:|---:|
|1|1|0|125|
|1|0|0|19|
|1|0|1|10|
|1|1|1|2|
|0|1|0|3|
|0|0|0|30|

156 类 CanSetItem=1，130 类 CanPut=1，29 类 SetItem=1 且 Put=0。分类计数不能当成物品 ID 数。

|label|UniqueID|SetItem|Put|CantTakeOver|CanFtr|stack s16|
|---|---:|---:|---:|---:|---:|---:|
|Ftr|5|1|1|0|1|0|
|Fish|39|1|0|0|1|0|
|Insect|36|1|0|0|1|0|
|DiveFish|40|1|0|0|1|0|
|ShellFish|181|1|0|0|0|0|
|Tree|161|1|0|0|0|0|
|Bush|163|1|0|0|0|0|
|FlowerBud|167|1|0|0|0|0|
|Flower|64|1|1|0|1|10|
|Fruit|51|1|1|0|0|10|
|Ore|66|1|1|0|0|30|
|CookingMaterial|296|1|1|0|0|50|
|Turnip|57|1|1|0|0|-1|
|Money|2|1|1|0|0|-1|
|HousePost|93|1|0|1|1|0|
|LostQuest|78|1|0|1|0|0|
|ShopTorso|277|1|0|0|1|0|
|DummyWrapping|211|1|1|0|0|0|
|DummyFtr|206|0|0|0|1|0|

ShopTorso/DummyWrapping 说明不应把 SetItem=1 直接升级为可派送。Dummy 名称也不是完整禁止判据。

堆叠 s16 分布：0:142 类，3:1，5:2，10:31，30:6，50:4，99:1，-1:2。0 的单件解释为工具兼容候选，-1 为特殊值，不输出 65535 或未经验证的 10。

### ItemParam 映射缺口

R74 原始统计 6076 精确、5102 非精确（25 个细类）；现有网页导出进一步将 5050 标记为父类前缀候选，52 为未知（8 个 UnitIcon_Flw* 花卉细类）。这不是 5102 条无效道具。不能未经原版转换函数证明将候选父类 flags 继承为确定值。优先恢复 Ftr_、Top_、Onepiece_、Bottoms_、Shoes_ 和 UnitIcon_Flw* 的原版映射。

## 3. 现有原版调用证据与下一批目标

### 普通丢放与获取分离

- [01B12E40](../derived/3.0.3/ghidra12.2/c/2e/01b12e40.c) 行为分派 case 0/1 为 CanSetItem，case 5 为 CanPut。
- [01B045F0](../derived/3.0.3/ghidra12.2/c/45/01b045f0.c)、[01B04850](../derived/3.0.3/ghidra12.2/c/48/01b04850.c) 读取 CanPut；0277E688 → 0317E7E0 添加 PutUnitIcon 命令30，但有额外条件。
- [01B14730](../derived/3.0.3/ghidra12.2/c/47/01b14730.c) 读取 CanSetItem；0277E788、0277E8B4 两分区检查该 Getter。
- [0242E2CC](../derived/3.0.3/ghidra12.2/c/e2/0242e2cc.c) Player_GetDemo/Get_Pickup → [016E49E4](../derived/3.0.3/ghidra12.2/c/49/016e49e4.c) 8-byte 转换 → [026738B0](../derived/3.0.3/ghidra12.2/c/38/026738b0.c) → [02673A50](../derived/3.0.3/ghidra12.2/c/3a/02673a50.c) → [027FAA50](../derived/3.0.3/ghidra12.2/c/aa/027faa50.c) 背包写入/堆叠路径。
- 本轮重新读取 016E49E4，确认独立复制 u16、两个 u8、u32，并在目录验证及转换后存在返回路径；不能将地图记录的状态位直接视为背包状态。
- 0232697C 具有身份/场景检查及特殊分流，025579BC 对它的 bit0 反向处理；不将 0232697C 命名成单一 CanPickup。
- 待追：输入 Y → 场景对象命中 → 访客权限 → 实例转换 → 背包写入 → 地图移除 → 同步提交。已有获取链不等同完整资格链。
- 地图记录的掉落、摆放、埋藏、包装及扩展格子分别测试；外部工具约定不能当原版 3.0.3 已验证位定义。空记录 0xFFFE 已见原版分支，其他哨兵与边界需原版确认。读取扫描器应去重扩展格、记录层级及激活状态。

### 离岛与保存不是单个 CantTakeOver

既有专项第四轮 CI 文档已闭合静态链：cHostStartSave 01DE5EEC / cVisitStartSave 01DE645C → 028BD090 → 028BCB18，参数 manager+2078 最低位，且 sync+70==0 才进入回调；后者在条件满足后可进入 02818BC0 → 02813DF0 → 0277C210 → 01B04F00（读取 CantTakeOver）。普通联机是否经过该过滤、对象及条件是否满足、结果是否保存仍待证。不能断言 CantTakeOver 仅针对搬家，也不能把它简单当所有访客离岛禁令。

下一批复用已有 [XREF 工具](../Scripts/acnh303_item_capability_xrefs.py) 与 [工作流](../.github/workflows/acnh303-item-capability-xrefs.yml)。优先验收既有第五轮 save_mode_focus.json，再补拾取输入、实际 Field 移除与访客角色。原版文件、生产机器人保持不变。

## 4. ADB-017～044 统一任务台账

|ID|优先级|任务|当前证据/状态|验收|
|---|---|---|---|---|
|017|P0|ItemKind 完整解析|CSV结构复核|189 行、字段字节校验、未知 hash 保留|
|018|P0|ItemParam 映射|6076精确/5050候选/52未知|每个 ID 有关联等级；原版父类转换证据|
|019|P0|CanPut 消费|已有原版字节证据|菜单与最终地面写入分离|
|020|P0|Y 拾取|获取链部分|输入到事务的完整 CFG|
|021|P0|访客权限|待验证|host/visitor/best friend 分流|
|022|P0|FieldItem|部分结构候选|层、激活、占位、真实对象验证|
|023|P0|生物掉落|静态正候选|鱼/昆虫/海洋生物各代表项的拾取和返岛保存|
|024|P0|植株|静态正候选|种子/花朵/植株/树/灌木参数及行为|
|025|P1|特殊任务和内部|候选|逐类拒绝原因及保留异常|
|026|P1|包装|待验证|相同 ID 包装/未包装与参数保留对照|
|027|P1|联动/DLC|待验证|来源、购买解锁、接收、使用分别记录|
|028|P0|离岛保存|同步回调部分闭合|正常离岛、回滚、重新读档分别验证|
|029|P0|岛库存扫描|待实现|双层、激活、扩展格去重、不可到达另标|
|030|P0|道具行为矩阵|待生成|11178 ID、未知保留 NULL|
|031|P0|实机报告|未进行|同版本 Build ID、授权本地测试、可重放记录|
|032|P0|网站/机器人接入|待实施|按 ID 关联、兼容现有 v2、业务策略独立|
|033|P0|背包资格|CanSetItem Getter 部分证实|目录与分区完整校验|
|034|P0|ItemKind 分类|同017/018|复用结果，不重复造表|
|035|P0|地图生成语义|同019/022|区分地图态和背包态|
|036|P0|访客Y拾取|同020/021|角色路径与真实背包变化|
|037|P0|包装限制|同026|正负样本和异常原因|
|038|P0|内部及危险项|同025|逐项证据，不按名称全禁|
|039|P0|最大堆叠|189类 s16 分布复核|特殊值及原版数量消费|
|040|P0|FreeParam|8字节复制已确认|分类参数解释、范围、变体、配方|
|041|P1|任务派送|同025|受限场景及离岛结果|
|042|P0|返岛保留|同028|正常离岛/保存/重载|
|043|P0|11178行为矩阵|同030|完整覆盖、不伪造实测|
|044|P0|网站商品数据库|同032|候选/已验证/禁止区分；生成独立导出|

## 5. 数据库与网站发布契约（设计，未实施）

- item_identity：沿用 v2 的 id、kind_raw、base_kind、base_kind_evidence。
- item_kind_rule：189 行，全部原始哈希、flag、原始 s16、来源。
- item_capability：item_id + game_version + capability + context_id；result 可空，evidence_id；能力包括 inventory, native_drop, native_place, field_dropped, visitor_pickup, take_home, safe_wrap, discard, storage, stack。
- item_observation：build_id、item_id、原始8字节及转换后8字节、角色、场景、包装、背包容量、结果、地图移除、正常离岛和重新载入、trace SHA256。
- item_delivery_policy：candidate / review / enabled / blocked；reason、evidence_id、policy_version。静态资格为 candidate，未知为 review，不将任何类别直接定为实机成功。
- item_business_category：原版类别与业务一级/二级分类独立；DLC、三丽鸥、马力欧、季节、活动作为多对多标签。区分来源与领取权限。
- 产物规划：item_capabilities_v1.json、item_delivery_catalog_v1.json、acnh_item_behavior.sqlite3、manifest.json；按 ID 与现有 items_core_v2.json、语言分片连接，不覆盖旧商城。
- 商品上架条件：有受支持的具体实例参数、拾取与返岛保存的正证据（可采用有原版等价类证据的覆盖方式），无明确危险条件。测试环境对未知保持待验证，不直接进入生产订单。

建议先用分层样本矩阵验证普通家具、生物、植株、任务/包装、联动/DLC、内部对象；角色/场景/正常离岛及重新读档为独立维度。满包失败不能当道具不合法。所有测试必须使用获授权的环境，保留备份；不以强制写入成功代替真正拾取或保存。

## 6. 本轮统计复现

在默认分支实际 checkout 后执行下列仅只读 CSV 审计；无外部依赖。该片段用于复现本轮 GitHub CSV 统计，本轮未在 CI 执行 Python。

```python
import csv, collections, hashlib
from pathlib import Path
p = Path("UnPack/1/Bcsv/ItemKind.csv")
with p.open(encoding="utf-8-sig", newline="") as f:
    rows = list(csv.DictReader(f))
assert len(rows) == len({r["hash_87BF00E8"] for r in rows}) == 189
def s16(v):
    n = int(v)
    assert 0 <= n <= 65535
    return n - 65536 if n >= 32768 else n
flags = ("hash_49129B27", "hash_5D389FBF", "hash_C37A683C")
assert all(r[k] in ("0", "1") for r in rows for k in flags)
print("sha256", hashlib.sha256(p.read_bytes()).hexdigest())
print("flags", collections.Counter(tuple(int(r[k]) for k in flags) for r in rows))
print("stack", collections.Counter(s16(r["hash_4C9BA961"]) for r in rows))
```

原版行为仍处于部分静态证据阶段；本轮没有重跑历史 CI、没有实机拾取记录、没有更改原版资源、网站或机器人。下一阶段先验收已有 save_mode_focus，再闭合 Y 输入/拾取、Field 移除以及 25 个 ItemKind 细类映射。


## 7. 第二轮：全量静态资格、原版索引消费者、ItemCapabilityCore V1 实现

2026-11-28。实际重新读取 R74 全量 CSV（blob 01889b01d0087759c7f85720c6d710fb8d3cd6ad）和 ItemKind.csv（blob bee0408c96266c5b21f27d43bfe9d44a598aad7c），CSV 解析、ID 去重和精确 label join 全部 11178 行。不是新实机报告。

|CanSetItem/CanPut/CantTakeOver|item count|
|---|---:|
|1/1/0|4987|
|1/0/0|548|
|1/0/1|64|
|1/1/1|4|
|0/0/0|454|
|0/1/0|19|
|未证明类别转换|5102|

5603 个精确关联道具具备静态 SetItem 正候选；473 个静态值为0；5102 未知。548 个 1/0/0 中 Fish80、Insect80、DiveFish40、FlowerBud184、Tree50、Bush39、其余75。不是 5603 个已确认商品。

### 7.1 细分类转换的真正消费者

|候选父类|原版子类数量|item 数量|证据|
|---|---:|---:|---|
|Ftr|5|1376|前缀候选|
|Tops|3|1330|前缀候选|
|OnePiece|4|1071|前缀候选|
|Bottoms|3|765|前缀候选|
|Shoes|2|508|前缀候选|
|UnitIcon_Flw*|8|52|未知|
|合计|25|5102|原版映射尚未闭合|

8 个花类通过真实内部名可关联品种但不能推断其行为类别：Cosmos6、Tulip7、Pansy6、Rose8、Lily6、Anemone6、Hyacinth7、Mum6。示例 2304 FlwCosmosRed、2931 FlwRoseWhite、5175 FlwMumGreen。不能因名称包含 Flw 自动套用 Flower 或 FlowerBud。

重新读取 [01B14730](../derived/3.0.3/ghidra12.2/c/47/01b14730.c)（blob 3f80f8540d94c5cd4fdc90fdbc3a85ec2d71418e）：
- param_1+10 为空时类别索引 0xBC；非空时依据原版 BCSV 行头回指、记录大小和行首地址求行序号，再查 PTR_DAT_04BC00C8 处 count 及 +8 指针的 u16 映射，限制 <0xBD（189）；失败有类别0回退。与 CSV 行号相等、类别 UniqueID 或 label 字符串映射都尚未证明。
- 依据 DAT_0532A778 的 +1C0 状态选择直接 BCSV / 缓存行指针路径，含行有效性门控。
- 字段查找哈希 49129B27，缓存 PTR_DAT_04BBFEB8+5C；缺失字段与无效行可返回 false。不能简化为只读 ItemKind CSV 字节。
- 0232697C 另用 DAT_05326EC0/05326EC8 的 u16 表；是否与 04BC00C8 为别名尚待原版重定位验证。下一阶段直接找这两组数组的分配、写入者和来源，而不是继续按字符串猜测。

### 7.2 背包与 Field 转换

[0277E788](../derived/3.0.3/ghidra12.2/c/e7/0277e788.c)（4dfc633c219bdf53257ab889d719607697bab82d）、[0277E8B4](../derived/3.0.3/ghidra12.2/c/e8/0277e8b4.c)（6e8ff297babe59027a18bd08ee0d8c86d4bb9dac）分别在目录校验后构造 8-byte 记录上下文并调用 01B14730；0xFFFE 空记录直接返回1，因此这两个函数的 true 不能直接等于可发货物品。文本索引另找到 0277E9E0 调用 01B14730 后进行额外条件判断。待原始 B/BL 以及间接引用扫描。

[016E49E4](../derived/3.0.3/ghidra12.2/c/49/016e49e4.c)（b39926808aa48accb427fc7322d1d3c0109dc4be）复制 u16/u8/u8/u32，调用 [0277E56C](../derived/3.0.3/ghidra12.2/c/e5/0277e56c.c)（02f15445ea1a17f97f2f57692f821fdc9afb0ca4），再次验证转换后目录；失败使用 PTR_DAT_04BB37E0 默认记录。0277E56C 存在两条目录路径：
- [0124C1E8](../derived/3.0.3/ghidra12.2/c/c1/0124c1e8.c)（f5bfc7868127ae7cf046c320acb9db8a5542cf8c）带 param_2 & 1；内含 0124C4C0/0124C70C、类别 0x21/0x22、特殊结果 0x8A5。目标 ID 语义待验证。
- [01B09000](../derived/3.0.3/ghidra12.2/c/90/01b09000.c)（e03ff1d09b355e63896070df6f755d2e80d8af6d）含第一 u32 AND 0xFFDFFFFF（清 bit21，即记录 byte+2 的 bit5）与后四字节 AND 0xFFFEFFFF 的条件路径；不能把所有分支简化为统一清位操作。包装、特殊物品及转换前后 ID/参数需分别确认。

### 7.3 访客资格与堆叠

[0232697C](../derived/3.0.3/ghidra12.2/c/69/0232697c.c)（9ca51194b7d2f9202215829a4bb960d811957256）先经过 016E6498、场景位、玩家索引（>7规范为0xFF）、016E49E4、0277E788，后经类别0x86特殊路径0267BA70或02677890。失败路径返回1；[025579BC](../derived/3.0.3/ghidra12.2/c/79/025579bc.c)（df2b9208bd569844590ec4e32080e920e15c2f12）反向消费 bit0，并对无效目录/40槽容量另行判断。尚未确认最终输入动作、玩家角色身份来源及场景全部条件；不能把返回1称作成功捡拾。

[01AF0020](../derived/3.0.3/ghidra12.2/c/00/01af0020.c)（e962dfd528ba5223e6b18f05052c08a0c32bec77）消费 MultiHoldMaxNum 及额外分支；[01AF02D0](../derived/3.0.3/ghidra12.2/c/02/01af02d0.c)（741c21c7605fea9dcd23928fd81d02290d180832）先调用 01AF0020，否返回1；否则计算 (u16 at context+0xC +1)&0xFF，再与类别 s16 上限比较，超出返回1。这里 context+0xC 为包装上下文中的偏移，需独立核实实际 8-byte FreeParam 位置，不把它直接描述为所有记录的计数。负值 Money/Turnip 必须追踪特殊路径。未证包装语义与所有 FreeParam 变体。

### 7.4 已提交的可执行实现及 CI

- [ItemCapabilityCore 生成器](../Scripts/acnh303_item_capability_core.py)，commit a2503ec3c0263da3f2ca12cb05e82ee2f16385f4：标准库 Python；检查原版 BCSV 记录与解码 CSV 的 ID、label、kind、name、堆叠值、18 flags，保存逐行 SHA256；全量 SQLite（source、kind、identity、capability、policy、observation）、JSON 和 manifest。精确静态字段与候选类别独立；全部运行时行为保持 null，enabled=0；CanPut=0 不是排除条件。实际全量生成需 CI 验收。
- [构建工作流](../.github/workflows/acnh303-item-capability-core.yml)，commit 1acd9cf316efcf7ffe6feffc01584f32db26dbf2；输出 artifact acnh303-item-capability-core-v1。运行 python Scripts/acnh303_item_capability_core.py --selftest 及 python Scripts/acnh303_item_capability_core.py --root . --out artifacts/item-capability-core。
- [原版分类与拾取专项 XREF](../Scripts/acnh303_adb_native_xrefs.py)，commit 54d6e76b63125c562ef0aeec523b539e75ac85e7：复用 R100 原版 NSO/ELF text 逐页比对；18 个函数 B/BL，3 个分类全局及重定位别名，ADR/ADRP ADD/LDR/STR 窗口。只输出候选，不把窗口中的 STR 或线性地址形成当完整数据流。
- [原版专项工作流](../.github/workflows/acnh303-adb-native-xrefs.yml)，commit 0da25841e523430e87f04c650b16f876d6257845，输出 adb_native_xrefs.json / adb_native_summary.json。两条 CI 均设 push 与手动触发；本轮未获取成功产物，不宣称新 SQLite 已实际生成或 ELF 新扫描成功。
- 后续验收：核对两个工作流真实运行及 artifact SHA；先恢复原版索引表生产者，闭合 25 个细类，再进行访客权限、Field 原子移除、特殊包装及同步存档。未修改原版 ROM、现有 v2 导出或生产派送代码。


## 8. 第三轮：ItemKind CRC32 全量闭合、特殊数量模型及拾取容量条件（2026-11-28）

实际读取完整 ItemParam.csv（Git blob 00592e4add3f85c0c6518d2eb6864b93b1fd8efd，11178行×107 hash字段）与 ItemKind.csv（bee0408c96266c5b21f27d43bfe9d44a598aad7c，189类）。通过逐列比对发现：

```python
kind_index = {zlib.crc32(k["hash_87BF00E8"].encode("utf-8")) & 0xffffffff: k for k in kinds}
assert len(kind_index) == 189
rule = kind_index[int(item["hash_5270EB75"])]
```

hash_5270EB75 为原版 ItemParam 行内 offset 112、宽4的数值字段；实际官方字段名仍待恢复，不把自定义别名冒充 Nintendo 字段名。hash_FC275E86 是细粒度字符串，不能当唯一行为类别。189个 Label 的 CRC32 无冲突；全部11178个 ID 命中；6076条已有精确字符串关联全部与 CRC32 一致；另外5102条恢复，0未匹配，实际使用186个原版类别（未使用 None、SubToolEat、XmasDeco）。本轮已经对完整 CSV 做实际计算，不是把历史候选当证实；新的原始 BCSV 字节逐条核验 CI 尚未验收，运行时映射表生产者尚未闭合。

### 8.1 25个原版细类映射（全部由 CRC32 数据关联恢复）

|细分类|原版规则关联|数量|
|---|---|---:|
|Ftr_1x1_Floor|Ftr|857|
|Ftr_2x2_Floor|Ftr|115|
|Ftr_2x1_Floor|Ftr|275|
|Ftr_2x1_Bed|Ftr|31|
|Ftr_1x1_Chair|Ftr|98|
|Top_Short|Tops445 / TopsDefault1|446|
|Top_Middle|Tops|561|
|Top_Long|Tops|323|
|Onepiece_Long|OnePiece522 / MarineSuit9|531|
|Onepiece_Dress|OnePiece|49|
|Onepiece_Middle|OnePiece|432|
|Onepiece_Short|OnePiece|59|
|Bottoms_Middle|Bottoms|271|
|Bottoms_Long|Bottoms429 / BottomsDefault1|430|
|Bottoms_Short|Bottoms|64|
|Shoes_Boots|Shoes|310|
|Shoes_Pumps|Shoes|198|
|UnitIcon_FlwCosmos|Flower|6|
|UnitIcon_FlwTulip|Flower|7|
|UnitIcon_FlwPansy|Flower|6|
|UnitIcon_FlwRose|Flower|8|
|UnitIcon_FlwLily|Flower|6|
|UnitIcon_FlwAnemone|Flower|6|
|UnitIcon_FlwHyacinth|Flower|7|
|UnitIcon_FlwMum|Flower|6|

9个 MarineSuit ID：12970、12981、12986、13098–13103；其原版 CRC32=947132273。普通 OnePiece CRC32=1426486595。2302、2303分别为 TopsDefault、BottomsDefault，原版 SetItem=0、Put=0，修正旧前缀假设。1323 FtrLampLeaf 对应 Ftr，旧网站未收录。8个花卉细类共52条全部关联 Flower（CRC32=2692465900），不是 FlowerBud；加上原已精确关联的2963 FlwRoseGold 合计53个 Flower，原版静态 stack=10、CanSetItem=1、CanPut=1、CantTakeOver=0。ItemUnitIcon.csv 中8个花种的 label 与花瓣图标（另有金玫瑰）提供独立的图标上下文旁证，不直接当拾取证据。

### 8.2 最新全量行为规则统计（替代前文候选计数）

|CanSetItem/CanPut/CantTakeOver|数量|
|---|---:|
|1/1/0|10087|
|1/0/0|548|
|1/0/1|64|
|1/1/1|4|
|0/0/0|456|
|0/1/0|19|

10703个 CanSetItem=1，其中10635个 CantTakeOver=0，68个 CantTakeOver=1；475个 CanSetItem=0；未知类别0。10635仅静态研究集合（含特殊面额和其他须审核对象），非正式商城可派送数。CanPut=0且SetItem=1且CantTakeOver=0的548个数量不变；不把它们当实机通过。

原版堆叠 s16：0=10808，3=4，5=2，10=183，30=26，50=36，99=1，-1=118；未知0。0仍为单件候选，正数为类别静态容量，实例包装、参数及实际行为独立验证。

### 8.3 118个特殊面额记录

108个 Money（ID2105–2212，100至99000铃钱）、10个 Turnip（ID2632–2641，10至100棵，每10棵一个ID）；实际完整名称和数值逐项比较，与原版 hash_718B024D（已在 R103 复核为 CRC32("Price s32")）全部相等。Price 字段是价格/价值字段，不称为通用 FreeParam 数量。它与原始内部名一起提供面额旁证。
- 01AF0020 C 读取 s16 MultiHoldMaxNum，小于2直接走 false；01AF02D0 在该普通堆叠资格为false时返回1。所以 -1 绝不能替代普通堆叠10。
- ItemKind 第89行 Turnip：01AEDD20（blob 6aec385c2f1b6bb9d861a0cd50e5fa88ef477c62）对索引0x59读取Price；01AF0964（411d820b7904078abd5cd2f113f427cf3c117ecd）读同字段再乘调用参数。说明 Turnip 特殊数值消费，尚未证全部数量组合/拆分与 FreeParam。
- ItemKind 第134行 Money：0232697C 在类别0x86时且 mode!=1分流至0267BA70；其进一步调用027FE840（45ce690b0b1e892c8b37cf5ad87bf72b01476795），后者读取01AED730价值、99999常量及背包状态，说明独立钱币/容量分支，具体钱包与背包规则需新原始指令及调用边确认。
- 数据库新增 quantity_model=denomination_item_id、nominal_amount、nominal_unit；max_stack、FreeParam运行时语义保持NULL，独立于普通物品堆叠。策略保持review，不直接上架。订购的面额和订单所需记录数量分别建模。

### 8.4 548个特殊掉落与玩家背包容量

重新读取02677890（blob 0e3fd74ea5c29c3dba4e6e9fd03420feea565d8f）、0267BA70（6bada513ae8d15d838b943b27b054971590a5cde）、02677C70（6f787eeb88b5f4159666bec084ad92e1bac17ea1）：
- 以玩家索引<8、02582D8C返回索引<8、记录stride0x13F0的+13D4/+13D6门控及 player+194B0 的资源选择；当前不能命名为 host、visitor 或 best friend 单一判断。
- 02677890 有两组资源路径：02805B60→02806344 和 027FC440。后者（ddb064047e94949c45fafb5b4c2c4a26110573ca）读取普通堆叠资格、兼容性与剩余容量；02806344（be231be514080c0325152f20fdeb48a118058d7c）比较重复记录、数量与剩余容量。
- 02677C70 明确分别扫描两组最多20槽，8字节步长，空ID=0xFFFE，第二组返回索引+20。025579BC 有单独容量与反向返回位路径，必须结合调用者理解，不以返回值单独宣称成功捡拾。
- 0277E9E0（eba2d36e5e25b68e22a05e7a7f3fae0f915c2fd3）在 CanSetItem 成立后再调用01B14990。继续追此 Getter 与实际地图移除及访客同步链。
- 548条具体 ID 已纳入静态证据清单，实际拾取、离岛保存字段全部NULL。原版输入、地图对象状态与正常退出事务仍未实机验证。

### 8.5 实际提交、验收边界

- [ItemCapabilityCore V1.1](../Scripts/acnh303_item_capability_core.py)，commit 17a7e02a8eff36ddfb13d10a8be00c678998d5ea：用真实 CRC32 关联替代前缀；CI对原始 BCSV 字段字节、189类无冲突、11178唯一ID、6076交叉一致、5102恢复、52花朵、118面额、最新flags及stack统计设置断言。新增 item_kind_subtype_mapping.json、item_special_denominations.json 及SQLite字段。所有runtime字段维持NULL。
- [原版 XREF 扩展](../Scripts/acnh303_adb_native_xrefs.py)，commit cabf381d369304635c66a903b3b6ecf00e51d260：增加 hash_5270EB75 MOVZ/MOVK同寄存器候选、12个附加函数，检查原版 NSO/ELF 一致性。扫描窗口仍不是完整数据流。
- [本轮已实际生成的静态审计证据](../assets/evidence/rom-database/adb-crc32-static-audit-v1.json)，commit 11c65b68f5789c078bfb3f70a21417756790987d：189类别/186使用、全部25细类、全量flags及stack计数、118面额记录、548条特殊掉落记录。来源为完整 Git CSV（不是本轮新原始字节CI产物），raw_bcsv_byte_verification_in_this_run=false、runtime_verified=false。
- 已有历史原版文档 29-PutUnitIcon物品资格与放置结果边界明确 GOT 04BC00C8 RELR→05326EC0（已闭合别名），05326EC8为其+8，修正此前将二者作为独立表的保守表述。后续重点在动态数组实际初始化及写入。
- 未修改原版资源、现有 v2 网站导出、生产机器人；新 CI 尚未获得可确认运行编号或产物，不能宣称新SQLite已实际构建通过。下一轮先验收 V1.1 CI，再集中恢复548特殊实例的场景/访客/拾取/保存闭环及面额的拆分和合并。


## 9. 第四轮：V1.1 CI 验收与原版容量消费者复核（2026-11-28）

本轮直接读取 GitHub Actions 的实际 job steps、完整日志及 artifact metadata，非依据工作流配置推定。以下验收替代前文“尚未取得 CI 产物”的历史状态。

|工作流|实际运行|结论|Artifact|
|---|---|---|---|
|ItemCapabilityCore V1.1|[46158985091](https://github.com/969981/ACNH_Resources/actions/runs/46158985091)，17a7e02|success；Python 编译、自测、完整原始 BCSV 核验、SQLite 生成及上传均通过|[15269255776](https://github.com/969981/ACNH_Resources/actions/runs/46158985091/artifacts/15269255776)，1933536 bytes|
|ADB native XREF|[46159022145](https://github.com/969981/ACNH_Resources/actions/runs/46159022145)，cabf381|success；原版静态扫描及上传通过|[15268303126](https://github.com/969981/ACNH_Resources/actions/runs/46159022145/artifacts/15268303126)，2516247 bytes|

日志中的 manifest：11178 ID、189 类、186 使用、6076 精确及5102 CRC32 恢复、0未关联；candidate=10486、review=692、enabled=0；runtime_verified=false、全部运行时能力字段为NULL。源 BCSV SHA256：ItemKind=5c0f6c574422ddd71e26d7fcc5b8ec80305c606d8f7d4216ea3d2a74f28ce9df，ItemParam=9f31230158ab9ace881fe6e5c64579e206f5318646d8d77d8ac7c197abed3609。SQLite SHA256=cbc942968d0b8d81b3f5f39e08a3d60e375d92c97460b3367b0127d75c2556c7；ZIP SHA256=4b56ceba3c60489aa9b001a205abdba795e0c5f5785269bc0157ddfd917fcbe2。XREF ZIP SHA256=84a32fc6d715bab1a6454a4b058f59c7e13d411ec653a28a7a5b2b8c6dfc8ab6。日志与 artifact metadata 一致；本轮未独立解包 ZIP 或重新运行 SQLite 查询，完整性、外键与运行时 NULL 断言由已成功的生成器执行。

XREF 实际 summary：address_candidates=1868、direct_branches=14544、kind_hash_materialization_candidates=1、direct_store_candidates=0；Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。唯一 hash 物化候选仍需函数级数据流核实，零直接写候选不代表没有间接写入者。

### 9.1 ADB-072～075 静态消费者增量

- [01B14990](../derived/3.0.3/ghidra12.2/c/49/01b14990.c) 读取 ItemKind CRC32 DAE27694（反编译有符号常量 -0x251D896C）。本轮实际计算 CRC32("CanSetChest u8")=DAE27694，且 ItemKind.json 显示 offset 45、宽1。与 [0277E9E0](../derived/3.0.3/ghidra12.2/c/e9/0277e9e0.c) 结合，非空正常路径是 CanSetItem 后再检查 CanSetChest；空 0xFFFE 可直接返回1。此为独立能力消费者，不得当成所有访客拾取或最终入仓的充分条件。
- [027FE840](../derived/3.0.3/ghidra12.2/c/e8/027fe840.c) 仅作容量返回，不在函数内写入钱包或背包记录；默认可用量99999，满足钱包字段校验时改用解码表达式计算的量。与 [01AED730](../derived/3.0.3/ghidra12.2/c/d7/01aed730.c) 的价值比较，若可用量足够则 true，否则扫描两组各至多20槽寻找 0xFFFE，返回有效槽位判据。由 [0267BA70](../derived/3.0.3/ghidra12.2/c/ba/0267ba70.c) 在角色资源门控后调用。钱包不够与背包无空位须分开；此处尚未证余额写入、找零、面额重新分配或拆分。
- [01AED730](../derived/3.0.3/ghidra12.2/c/d7/01aed730.c) 读取 Price CRC32 718B024D，普通堆叠路径使用01AF02D0的计数，否则乘1；另有类别0x57的特殊价值调整，不能将整个函数命名为仅铃钱金额 getter。
- [01AEDD20](../derived/3.0.3/ghidra12.2/c/dd/01aedd20.c) 与 [01AF0964](../derived/3.0.3/ghidra12.2/c/09/01af0964.c) 均限制原版行索引0x59并读取 Price，后一函数在有效路径返回 Price×param_2。未确定调用者的数量参数语义、面额ID选取及真正写入事务。ADB-073仍为部分静态。
- [027FC440](../derived/3.0.3/ghidra12.2/c/c4/027fc440.c) 先扫描两组空槽；满包时检查普通堆叠资格，依模式选择20/30/40槽扫描上限，依 [01AF28AC](../derived/3.0.3/ghidra12.2/c/28/01af28ac.c) 判定实例兼容，使用 [01AF2610](../derived/3.0.3/ghidra12.2/c/26/01af2610.c) 读取的 signed MultiHoldMaxNum 和01AF02D0 数量更新剩余需求。反编译累计式需原始指令再核对，不将其直接移植为生产堆叠算法。
- [01AF28AC](../derived/3.0.3/ghidra12.2/c/28/01af28ac.c) 两个记录都须满足普通堆叠资格；存在01B032D0与记录 byte3低2位门控、0277D7B4比较及类别0x78的附加参数比较，因此相同ID不充分。byte3和类别特殊位的完整语义仍待恢复。
- [02806344](../derived/3.0.3/ghidra12.2/c/63/02806344.c) 首先调用02805B60，之后扫描0x100字节共32条8字节记录进行0277D7B4匹配，进一步按01AF2E60、02806010及01AF02D0做容量比较。01AF2E60读取另一个 u16 字段0CE69142（offset30），不同于 MultiHoldMaxNum；不把这条32记录路径与普通40槽背包混为一谈。

本节是实际重新阅读仓库已有 Ghidra C 后的静态复核，不是新实机验证，也未独立对每条函数做本轮 ELF 字节级核验。未改变运行时行为字段或生产策略。

### 9.2 状态与下一轮验收

|任务|状态|剩余验收|
|---|---|---|
|ADB-068～071|原始 BCSV CI 验收通过|动态索引初始化另行研究|
|ADB-072|部分静态|真实铃钱拆分、合并、溢出与记录提交|
|ADB-073|部分静态|面额转换、调用参数、拆分合并和实际记录写入|
|ADB-074|部分静态|548 ID 按角色、场景、背包、实例状态验证|
|ADB-075|部分静态|角色字段来源、访客与好友权限完整分支|
|ADB-076|待研究|地图移除及事务回滚|
|ADB-077|待深入|正常离岛、存档及重新加载|
|ADB-078|CI通过|可选独立解包复核 SHA 与 SQLite 查询|
|ADB-079|待实施|版本锁定、只读预览接入、正式上架保持关闭|

下一轮优先从 XREF 产物中定位唯一 hash 物化候选及间接写入者，再完成容量/拆分的写入消费者和地图移除提交链。不要把候选扫描计数当作闭合调用证据。本轮仅更新研究文档，不修改原版资源、生产商城、机器人或数据库生成器。
