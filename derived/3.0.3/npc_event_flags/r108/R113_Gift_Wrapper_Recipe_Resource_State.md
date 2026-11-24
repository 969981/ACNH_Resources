---
title: R113 赠礼回调前置门禁、配方资源位图和玩家状态
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, gift, DIY, R113]
---

# R113 赠礼回调与配方位图

## 1. R112 实际验收

[Actions 45330942989](https://github.com/969981/ACNH_Resources/actions/runs/45330942989) success，64 个文件上传。普通/生日回调各 116 条可达指令且无 CFG gap；00E0C778 BL 01B07660、00E0C948 BL 01B081A0 已确认。R112 的两个 +D80 消费者候选 04004B94/04006B94 均是 ADRP X16 / LDR X17 / ADD X16 / BR X17 通用跳板，不是实际 UI 参数消费者。UI Root GOT 04BB2230 -> Ghidra VA 05739190 -> Main+0x5639190，回调结构通常经 *slot 再 +0x28 指针到达 +0xD80，仍需实际消费者对象别名证明。

## 2. 回调公共前置门禁

普通 00E0C5B0，生日 00E0C780。两者首先通过 0277D6C4 获得实例查询 ID，检查物品管理器 +0x57E58 的起始 ID +0x1F8、数量 +0x1D8、行指针数组 +0x1E0。初次查找失败返回 false；后续查找失败时行指针为空，枚举回退值为 0。栈上构造 vptr +0、8 字节实例 +8、行指针 +0x10。通过 05326D48/05326D50 的 u16 枚举缓存取值，范围 <=0x51；0x49 时调用 01AEB510，若结果 >0，拒绝；否则进入各自谓词。

01AEB510 查找 ItemKind 字段 90BC0855，offset 36、u8；字段有效且非零时读取 wrapper+0xE，clamp 99。该字段原版拼写及 82 项枚举名称尚待闭合，不应与已证实的 189 项 ItemKind 混淆。

| hash | 原始名称 CRC32 精确匹配 | offset |
|---|---|---:|
| 06012035 | CanGift u8 | 37 |
| 2C1B3B5B | CanNpcBirthdayPresent u8 | 38 |
| 0732BB98 | CanNpcPresent u8 | 39 |

底层 01B07660/01B081A0 先检查改造门禁及包装状态，再依 CanGift 和非零包装状态执行 01B079EC 转换并递归；生日函数对 DummyWrappingOtoshidama(0xB9) 有特例。最终分别读取 0732BB98/2C1B3B5B。实际 instance eligibility 必须保留未知，不能直接复制静态 Kind 权限。

## 3. 物品实例查询 ID

0277D6C4 原版 C：raw id 0x16A1 / 0x3100 特例保持；state0 raw ID；state1 用 04177938 的 17 项 u32 表；state2 固定 0x1180；state3 subtype15 用表第16项，12/13/14 用 04101D00 的四项 u32 表对应索引 1/2/3；10 -> 0x306，11 -> 0x3A19，其他 -> 0x1225。R113 从原版 NSO 提取表，并用合成测试验证所有分支。它是查询 ID，不是 01B079EC 的完整解包转换。

## 4. 两套全局位图非零写入者

96/02629630.c：加载资源成功后 memset(obj+0xE98E0,0,0x300)。遍历由 obj+0xEA6A8 或 +0xEA598 后端提供的记录，用 54706054 (UniqueID) 为 bit 索引；分类缓存 DAT_05557770/count, DAT_05557778/data 中值为 1 时目标 obj+0xE99E0，否则正常路径 obj+0xE98E0。共同 LAB_02629A14 进行 OR 写入，索引 <0x800。第三套 obj+0xE9AE0 由 3CCCA419 字节设置或清除。

6b/02636b00.c：分类缓存写入者，读取 -0x164ca5 即 FFE9B35B (RecipeCraftParam offset 0x18)。英文 CRC 路径常量 DIY / Cooking，分别为 0/1；日文路径亦有两项。R113 按源表 hash 对账并输出静态预测位图，未知值保留 null，不伪造实际运行时状态。三套全局位图属于资源分类/属性索引而不是玩家学习状态；源表预测与 live bitmap 比较尚待执行。第三字段名称仍待恢复。

## 5. 玩家存档描述符

0261E658、0261E9CC：先测试全局第一套资源位图，再通过玩家对象 +0x194B0（+0x194B8 非空）或 DAT_05574040 对象 +0x20 备用路径取得 save access context。数据地址为 *(context+0x8690)+*(context+0x8698)；+0x86B0 为访问/通知相关对象。读两个独立的 256 字节区域 +0/+0x100。

0261EAE4：明确设置玩家数据 +0x100 位，写前向观察者提供 {offset,base,0x1400} 描述符；0262EC70 写 +0x200，0262F2E8 写 +0x300。0x1400 是通知覆盖范围证据，不直接证明整个 GSavePlayer 布局或全部 20 个位图的语义。

0261C330 的 +0xE9BE0 是另一套由玩家状态与资源位图交集派生的聚合结果，不能与资源位图混淆。

## 6. R113 工具与验收

Scripts/acnh303_r113_gift_semantics.py:
- 原版 NSO 认证、两个 BL 及旧 CFG 核对、排除两个 PLT 候选。
- 真实 C 导出锚点和 SHA256；位图 writer、查询 ID、玩家写入指令窗口。
- 924 配方分类值和第三属性；11,178 物品静态普通/生日/包装权限。
- SQLite r113_recipe_class / r113_gift_permission 与 Web sidecar R113。实际许可字段 NULL。
- 合成测试覆盖查询 ID 和 wrapper 前置门禁。非实机测试。

新 CI 未验收。后续优先核对 82 项枚举与 90BC0855 原始字段、完整普通与生日实例判定、真正 +D80 消费者、资源位图实际机器码与玩家描述符构造；GDB 只读快照对账，禁止将静态预测当作实机结果。

PR #95 存在合并冲突，未覆盖 base 其他研究。
