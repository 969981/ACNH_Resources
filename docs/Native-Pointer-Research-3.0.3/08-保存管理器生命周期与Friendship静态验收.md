---
title: 保存管理器生命周期与 Friendship 静态偏移验收
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, Native, R100, Save, Friendship]
---

# 保存管理器生命周期与 Friendship 静态偏移验收

继承 [[07-保存管理器与玩家村民动态根]]。本轮取得 R100 实际 SQLite 并读取原始 Ghidra C、原始资源解码 CSV。未重新执行原始 ELF 反汇编，未取得实机快照，未确认两种后端虚表 +0x38 的函数目标。

## 1. 真实 R100 关联

[PR #79](https://github.com/969981/ACNH_Resources/pull/79)，[CI run 45308001227](https://github.com/969981/ACNH_Resources/actions/runs/45308001227)，artifact 14881442847。ZIP SHA-256 实际计算为 6113436624d54b104071b4aecbeaaae1d64c4f33fa8843c5448e359d1d1f03a4，与 GitHub artifact digest 一致。数据库 51,015,680 bytes，PRAGMA integrity_check = ok，380793 条 relocation。metadata：

- Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000
- ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664
- NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1
- slide 0x100000；runtime_verified=false

|slot RVA|target RVA|类型|区域|用途|
|---|---|---|---|---|
|0x4ab46b0|0x5474040|RELR|data→bss|共享保存管理器|
|0x4ab27c8|0x4bfae30|RELR|data→bss|坐标相关根|
|0x4ac1118|0x5255a60|RELR|data→bss|聊天相关根|
|0x4acb7d8|0x59e6a60|RELR|data→bss|访客管理器|
|0x4ab2208|0x4ca8a30|RELR|data→bss|字段元数据根|
|0x4ab6360|0x4ca7edc|RELR|data→bss|字段缓存|
|0x4ab6358|0x4ca7ed8|RELR|data→bss|缓存初始化标记|

所有上述记录 raw_word/addend 与 target RVA 一致；symbol_index=0，resolution=relative。0x526c708 与 0x5473f70 的 slot/target 查询无匹配（后者反向查询为空）；无重定位不能否定直接 ADRP 访问。地址为 RVA，Ghidra VA=RVA+0x100000。运行时完成重定位后 P(Main+0x4ab46b0)=Main+0x5474040。

## 2. 注册、初始化及注销

[026ee1b0](../../derived/3.0.3/ghidra12.2/c/e1/026ee1b0.c) (blob 3209e4dbb40f9e86b54e67c90bcbffc3e00bec46)：Ghidra VA 0x026ee1b0 / RVA 0x025ee1b0，检查已有 DAT_05574040，存在时直接返回；否则 malloc(0x558) 或分配器虚调用 +0x30(0x558,8)，分配器来源 PTR_DAT_04bb2698 与 TLS。注册伪代码：

```cpp
if (DAT_05574040) return DAT_05574040;
self = allocate(0x558, 8); // 归纳辅助函数
FUN_038c69f0(self + 0x538, allocator, 3);
P(self+0x538) = &PTR_FUN_04a89588;
DAT_05573f70 = self+0x538;
FUN_026ee288(self);
DAT_05574040 = self;
return self;
```

[026ee288](../../derived/3.0.3/ghidra12.2/c/e2/026ee288.c) (blob c50180527b9e8012ad94ac2f17c4aa9f5f6836ab)：主体表指针 0x04a895a8，后端 +0x10 清零，+0x90..0x108 每 8 字节的索引/状态组初始化为 u64 0x00000000ffffffff；+0x110 同样初始化。+0x3d0..0x448 内嵌回调对象，+0x458 状态机对象，状态原名 State::cIdle、State::cCreateReplaceableSaveDataBuffer，记录步长 0x40。源代码 param_1 为 undefined8*，索引必须乘 8。+0x479 设 1。构造器证实与保存数据缓冲管理相关；另有 _INIT_8675 的 SaveDataMgr 字面量，但尚未证明其注册表与此具体对象的直接映射。

[026ee068](../../derived/3.0.3/ghidra12.2/c/e0/026ee068.c) (blob 50f239bda83d22edd6e51eb28bddc6148d786d5f)：注销子对象若等于 DAT_05573f70，则先清零该槽、调用 DAT_05574040 对象首虚函数、再清零 DAT_05574040，后续链表摘除及可选互斥锁。不是所有注销路径都会清空主体槽。[026ee14c](../../derived/3.0.3/ghidra12.2/c/e1/026ee14c.c) 调用前者再执行 free 或分配器释放路径。

实际 R100 表记录（Ghidra VA）：
- 0x04a89588 → 0x026ee068
- 0x04a89590 → 0x026ee14c
- 0x04a895a8 → 0x026eeaec (exact_export=null)
- 0x04a895b0 → 0x026eeb20 (exact_export=null)
- 0x04a895b8 → 0x0270b7b4 (exact_export=null)
- 0x04a895c0 → 0x0270b7b8 (exact_export=null)
- 0x04a895c8 → 0x0270b7d4 (exact_export=null)
- 0x04a895d0 → 0x0270b7f0 (exact_export=null)

这里是主体和 +0x538 注册子对象表，不是 +0x10 的后端表。主体首虚函数目标 0x026eeaec 已从真实重定位恢复，但完整函数体未取得。严禁把主体表 +0x38 当成后端虚函数。

## 3. GSaveNpc 描述符 → 原生记录

[0276dba0](../../derived/3.0.3/ghidra12.2/c/db/0276dba0.c) (blob 715c85342cd2efa6ae302995e194a1e37e61575e) 源文件约 1059–1108 行，直接从已确认的 RELR 根读取保存后端（两种 +0x38 虚调用），得到 B，形成 D=B+0xa8。调用 FUN_027d3418(P(D+0x10)+P(D+8),context)，守卫分支还把 0x1e3388 作为范围参数传入回调。因而实际 NPC reset payload 与之前 B+i*0x10798 描述符布局之间有同一后端的直接调用证据。

[027d3418](../../derived/3.0.3/ghidra12.2/c/34/027d3418.c) (blob 55d090d1a008eda29735ec1c135272609e85ce86) 逐一检查物种及编号，处理 10 条原生记录，步长 0x13230；[026901a0](../../derived/3.0.3/ghidra12.2/c/01/026901a0.c) (blob 165c18fcd798e3180680a11f11c8ce74da27e0ff) 从每条记录 +0x3c 开始调用八组本地 u8 flag reset（间隔 0x5f0），另从 +0x2fbc 开始处理 160 组间隔 0x158 的记忆。NPC Save 的 u16 flag 区为 +0x1267c。以上均为原生 payload 相对布局，不是硬编码磁盘或 heap 绝对地址。

## 4. Friendship 元数据及偏移

原始解码 [EventFlagsNpcMemoryParam.csv](../../derived/3.0.3/npc_event_flags/decoded/EventFlagsNpcMemoryParam.csv) (blob 75be10cf81ee28870b14c8e638e581e0638fe2bc)：
```csv
_row_index,_row_offset_raw,hash_54706054,hash_5F77B61A,hash_5140E4B4,hash_BED25A86,hash_8D401DF7,hash_D55938BD,hash_FA93F14B,hash_45F320F2,hash_BD7682F5,hash_85CF1615
10,2188,10,0,0,0,0,25,1,Friendship,255,親密度
```

FUN_02746e10 通过 MurmurHash3 字符串键查找元数据，再读取列 0x54706054 的 u16 值作为小于 256 的字节索引，返回 u8；FUN_02746c30 使用同列及关系描述符；FUN_02746850 在 reset 路径使用同列和值列 0xd55938bd。0x54706054 是字段表列标识，不是 Friendship 字符串哈希。源表的字段索引为 10、默认值为 25、上限列为 255。

相对 NPC payload 的静态推导：
- 本地玩家记忆：npc*0x13230 + player*0x5f0 + 0x3c + 0x0a = npc*0x13230 + player*0x5f0 + 0x46。
- 另一组关系记录：npc*0x13230 + relation*0x158 + 0x2fbc + 0x0a = npc*0x13230 + relation*0x158 + 0x2fc6。

第二种不能套用 0x5f0 步长，关系索引须经身份映射。此处得到 Native + 原始资源静态交叉证据；未读取实际保存中的字节，不能宣称 runtime_verified 或 disk_offset_verified。旧工具的 Heap 基址仍未验证。

## 5. 下一步验收

- 后端 +0x10 写入者及 +0x130 对象构造器；查真实 ELF 的 ADRP/LDR/STR 及 BLR 数据流。
- 后端的 VTable +0x38 实际函数入口，区分普通后端及替换缓冲后端。
- 原始 ELF 逐行核对 026ee1b0、026ee288、026ee068、026eeaec，完成生命周期调用者及清零指令。
- GSavePlayer 背包 payload 的原生记录及持久化边界；GSaveNpc 已有 payload 入口，但仍需把对象地址映射到实际离线存档。
- Build ID 门禁与只读离线快照对照。现有记录均 runtime_verified=false。

[[README|研究导航]] · [[07-保存管理器与玩家村民动态根]]
