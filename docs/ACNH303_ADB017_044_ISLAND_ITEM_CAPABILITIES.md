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
