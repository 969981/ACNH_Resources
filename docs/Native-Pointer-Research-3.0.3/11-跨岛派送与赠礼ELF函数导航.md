---
title: 跨岛派送与赠礼 ELF 函数导航
tags: [acnh, elf, pointers, obsidian, R109]
game_version: "3.0.3"
runtime_verified: false
status: partial-static
---
# 跨岛派送与赠礼 ELF 函数导航

[[README]] · [[10-跨岛派送指针与Native交付链]] · [[09-保存后端析构与玩家Payload]]

## 证据边界

本笔记索引已有跨岛源码/历史 ELF 证据及赠礼 PR #95，不声称本轮完成原版字节重验。跨岛历史报告 ELF SHA 为 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180，R100 解码器的 ELF SHA 为 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；不能直接认定二者完全相同。新导出要求 NSO 与 ELF 每一条指令字节相同，并记录两个 SHA、NSO 完整 Build ID。没有实际字节则明确记 gap。旧 Heap 偏移、Main RVA、Ghidra VA、结构偏移四类不可混用。

## 指针 → 函数导航

完整 19 项旧 Heap、9 项 Main 根和跨岛 C# 方法/行号见 [[10-跨岛派送指针与Native交付链#3. 指针清单（旧 Heap，不等于已证明的稳定根）]]。

|对象/字段|地址空间与位置|关联 ELF / 证据|
|---|---|---|
|SaveDataMgr|Main+0x5474040|[[09-保存后端析构与玩家Payload]]|
|Mode3 owner|storage+0x1A0|[[10-跨岛派送指针与Native交付链#4. Mode3 在线 Field 生命周期（P0）]]|
|Inventory|Heap+0xB27BB758（旧）|[[10-跨岛派送指针与Native交付链#13. 本轮继续研究：Inventory 消费者与 Native 背包变更链实读]]|
|Actor registry|Main+0x4BFAE30|[[10-跨岛派送指针与Native交付链#6. SelfActor 与光标 UI（P0）]]|
|背包光标|Heap+0x43E0599C（旧）|UI owner 与原生 getter/writer 未确认|
|Online owner/machine/match|Main+0x527D558 / 0x526C708 / 0x59E6A60|[[10-跨岛派送指针与Native交付链#7. 机场、联机会话与返岛（P0/P1）]]|
|机场 UI / Pia|Main+0x4AA9CD8 候选 / 0x4B60F48|机场根未闭合；密码与身份字段不得混用|
|Item/Terrain/Building/Acre|Mode3 Field 内四区|[[10-跨岛派送指针与Native交付链#8. 地图四层与投放点（P1/P2）]]|
|DropItem|未知|正常 UI handler → 背包 → Field → 同步；未证明|
|Gift VTable|Ghidra VA 0x0495B730 +0x60|[R109 audit](https://github.com/969981/ACNH_Resources/blob/67ea217c75d99c73212b48d17303636e26e82a9f/derived/3.0.3/npc_event_flags/r108/R109_Gift_Dispatch_Audit.md)|
|Style2 count/data|Ghidra VA 0x05326C78/80|FUN_01AE0C40；写入锚点 01A77904|
|BCF5D17A|ItemParam+0x10A u16|FUN_01AE6420；原始名字未知|

## 已有历史 ELF 逐指令注释示例

下表是历史报告中的真实指令文本，不补写没有读取过的 opcode，不视为完整 CFG。

|Main RVA|指令|数据流解释|
|---|---|---|
|026046F8|MOV W21,#0xC618|构造分配大小低半字|
|026046FC|MOVK W21,#0x14,LSL#16|保留低半字并形成 0x14C618|
|02604724|BL 0x2478C0|分配调用，前置参数需完整追踪|
|0260472C|BL 0x25D8DC0|历史报告的 auxiliary 构造调用|
|02604734|STR X22,[X20,#0x10]|将对象引用写入 slot 成员|
|02604F78|LDR X8,[X23,#0x10]|取得 storage 引用|
|02604F80|STR X20,[X8,#0x1A0]|发布 mode3 slot|
|02605178|LDR X0,[X20,#0x1A0]|读取待清理 slot|
|02605210|BLR X8|间接析构，依赖 vtable 证据|
|02605214|STR XZR,[X20,#0x1A0]|清除已发布引用|

原始字节与全分支由新生成器输出，不将上表 10 行称为完整函数。背包消费者的 C 导出直接复核： [FUN_026759E0](https://github.com/969981/ACNH_Resources/blob/fd0693ea69c958fda25a43843e2af8ec0931394a/derived/3.0.3/ghidra12.2/c/59/026759e0.c)。先取描述符（必要时 fallback），再取得两个载荷分量之和，按实际 count 选择物品区，后续检查 catalog 与 guard；完整 C 及详细伪代码见生成页和既有第 13 节。

## R109 赠礼闭合

现有 PR #95 为独立研究分支。最新审计说明：前次两套风格和 189 项提取运行到 CRC 集合断言失败；修正保留原始 CRC 与歧义，不宣称 189/189 已验收。

|任务|状态/下一证据|
|---|---|
|双七项风格|待 CI 新结果；枚举 CRC/字符串/消费者逐项一致|
|VTable +0x60|原始 relocation→目标 CFG；未证明实际分发|
|cGiftToNpc|未闭合；FilterType 实参与回调选择必须追踪|
|189 Native ItemKind|差异及别名待验；精确唯一关联之外 NULL|
|第二风格|01AE0C40 读，01A77904 STRH 写；原始字段未证|
|BCF5D17A|u16 位图 index 候选，0x800 上限；初始化及业务名称未知|
|01B03610|三个全局比较映射 1/2/3；值未验证|
|01B079EC|包装归一化分支；实例条件、默认记录身份待证|
|SQLite/Web|R109 sidecar 脚本已存在；不覆盖正式数据，动态结果 NULL|
|真实存档/GDB|未完成；只读观察正常操作|

赠礼与跨岛共享 ItemKind、实例解析与背包消费者，但没有证据表明 gift predicate 等于跨岛携带或 DropItem predicate。

## 可复现 Obsidian 生成

运行（合法自有原始资源，读取不修改游戏）：

```bash
python -m pip install lz4==4.4.4 capstone==5.0.6
python Scripts/acnh303_delivery_gift_obsidian.py --root . --out artifacts/acnh303-delivery-gift-obsidian
```

输出 README、Functions/FUN_*.md、同名 JSON、manifest。每个页列 VA/RVA/4B opcode/助记符/初步注释、直接调用 wiki 跳转、完整已遍历 CFG edge JSON、未解析间接分支/边界、可取得的 Ghidra C 全文。自动注释只描述指令机制；高级业务注释须人工证据闭合。入口为 interior anchor 时只提供有界窗口，不能冒充函数起点。输出文件为运行产物，不在缺少真实原始输入时预填。

验收：原始 SHA 匹配、每条 ELF/NSO 字节相等、无未解释 gap 才有资格称对应函数静态闭合；间接调用需另证、运行时仍未验证。跨岛身份/模式/物品正常交付需自有测试岛及同意的协作对端，记录匿名化事务证据。
