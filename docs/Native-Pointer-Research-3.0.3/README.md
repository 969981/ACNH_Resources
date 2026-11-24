---
title: ACNH 3.0.3 Native 指针研究
tags: [ACNH, ELF, AArch64, Ghidra, Native, Pointer]
version: 3.0.3
updated: 2026-11-24
---

# ACNH 3.0.3 Native 指针研究 · MOC

本目录根据本轮原始研究合订版拆分；[原始合订版](../28-ACNH-3.0.3-Native-Pointer-Research.md)保留历史原文。本目录为研究与技术资料，不是已经通过实机验收的地址库。

## 研究与技术文档

1. [[01-ELF地址空间与证据等级]] · [GitHub 阅读](01-ELF地址空间与证据等级.md)
2. [[02-全局根槽与Native对象]] · [GitHub 阅读](02-全局根槽与Native对象.md)
3. [[03-Main逐行反汇编与伪代码]] · [GitHub 阅读](03-Main逐行反汇编与伪代码.md)
4. [[04-Heap到Main根指针与存档结构]] · [GitHub 阅读](04-Heap到Main根指针与存档结构.md)
5. [[05-R100重定位与后续验收]] · [GitHub 阅读](05-R100重定位与后续验收.md)
6. [[06-完整根槽引用逐行索引]] · [GitHub 阅读](06-完整根槽引用逐行索引.md)

7. [[07-保存管理器与玩家村民动态根]] · [GitHub 阅读](07-保存管理器与玩家村民动态根.md)

8. [[08-保存管理器生命周期与Friendship静态验收]] · [GitHub 阅读](08-保存管理器生命周期与Friendship静态验收.md)

9. [[09-保存后端析构与玩家Payload]] · [GitHub 阅读](09-保存后端析构与玩家Payload.md)
10. [[10-跨岛派送指针与Native交付链]] · [GitHub 阅读](10-跨岛派送指针与Native交付链.md)
11. [[11-跨岛派送与赠礼ELF函数导航]] · [GitHub 阅读](11-跨岛派送与赠礼ELF函数导航.md)
12. [[12-R109赠礼实例判定与字段消费者]] · [GitHub 阅读](12-R109赠礼实例判定与字段消费者.md)
13. [[13-Heap动态根与中文语言偏移对账]] · [GitHub 阅读](13-Heap动态根与中文语言偏移对账.md)

13. [[13-跨岛派送背包扣减与道具环证据]] · [GitHub 阅读](13-跨岛派送背包扣减与道具环证据.md)

14. [[14-旅馆交易与DIY材料消费排除审计]] · [GitHub 阅读](14-旅馆交易与DIY材料消费排除审计.md)

15. [[15-PocketMenu与PutUnitIcon原生状态机]] · [GitHub 阅读](15-PocketMenu与PutUnitIcon原生状态机.md)

## 上游证据及可复现工具

- [外部工具指针原始审计](../26-External-Tool-Pointer-ELF-Audit.md)
- [ELF 审计执行结果](../27-External-Pointer-ELF-Audit-Results.md)
- [候选地址数据库](../../derived/3.0.3/external_pointers/candidates.json)
- [ELF 审计脚本](../../Scripts/acnh303_external_pointer_audit.py)
- [R100 重定位索引脚本](../../Scripts/acnh303_r100_relocation_index.py)
- [R100 保存根与生命周期结构化证据](../../derived/3.0.3/external_pointers/save_root_r100_evidence.json)
- [R100 实际 SQLite 构建产物](https://github.com/969981/ACNH_Resources/actions/runs/45308001227/artifacts/14881442847)
- [ELF 审计 CI 45313390861](https://github.com/969981/ACNH_Resources/actions/runs/45313390861)
- [Build ID 指针数据库 JSON](../../derived/3.0.3/external_pointers/build_id_pointer_index.json)
- [保存后端 ELF CI](https://github.com/969981/ACNH_Resources/actions/runs/45320066579)
- [离线快照比对工具](../../Scripts/acnh303_save_snapshot_compare.py)
- [Ghidra 导出进度](../../derived/3.0.3/ghidra12.2/progress.json)

原始合订版提到的独立 ZIP、Evidence/external-pointer-audit.json、trace_native.py、heap_to_main.py、NativeRootTrace.java 未在本次同步中取得原文件，故仅保留其来源、设计和命令说明；不宣称已提交或重新执行。已有仓库脚本与上述本地附带脚本是不同交付物。

## 当前研究台账

|优先级|任务|证据状态|下一步验收|
|---|---|---|---|
|P0|0x526C708 初始化|注册与状态机逻辑已恢复|核对相邻槽及回调语义|
|P0|0x526C708 清理|两处清零指令|确定函数边界与调用者|
|P0|0x59E6A60 构造|四类子对象分配|补全子对象类型与生命周期|
|P0|0x59E6A60 注销|清零指令已定位|核对析构路径|
|P0|玩家坐标|已恢复消费者|逐跳确认五级链及 XYZ|
|P0|R100 关联|真实 SQLite 通过完整性检查；确认保存根及其他 6 条 RELR|扩展 ELF 指令引用与后端虚表定位|
|P0|GSavePlayer 根|双后端 getter 原始指令及背包、铃钱、里数、仓库描述符已恢复|真实载荷、持久化偏移与固定 Heap 对照|
|P0|GSaveNpc 根|共享全局根 RELR 已确认；B+0xa8 描述符到十条 NPC 原生载荷已恢复|实机载荷及保存文件对照|
|P0|保存管理器根|RVA 0x5474040 BSS 已确认；注册/初始化/条件注销及主体首虚函数目标已恢复|两种 +0x38 与主体析构入口原字已核对；继续真实快照验收|
|P0|Friendship +0x46|原始字段索引 10 + Native 0x3c = 0x46 静态确认|实际载荷与存档值对照|
|P1|游戏时间|时间计算逻辑已恢复|时间对象根与生命周期|
|P1|碰撞相关对象|状态选择逻辑已恢复|调用链与对象布局|
|P1|12 条原字不匹配 Main 地址|原始指令已对账|真实 3.0.2 ELF 双版本匹配|
|P1|聊天对象|118 条读取候选|缓冲区字段和长度|
|P1|生物生成率|待研究|参数加载器与原生消费者|
|P1|3.0.2 → 3.0.3|缺双版本 ELF 证据|身份校验、CFG 与语义对照|
|P2|Build ID 指针数据库|已生成 Build ID JSON 注册表和 SQLite 构建工具|真实快照与版本迁移复验|

## 验收规则

- 静态证据、运行时证据、工具历史声明分别记录。
- ELF 文件身份、RVA、Ghidra VA、运行时绝对地址和 heap 相对地址不可混用。
- 未确定的函数边界、根槽、每跳偏移或 Build ID 不填入已验证字段。
- 以授权离线只读分析为边界；历史写入地址默认禁用。
