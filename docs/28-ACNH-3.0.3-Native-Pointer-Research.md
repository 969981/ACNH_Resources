# ACNH 3.0.3 Native 指针研究 · 合订版

此文件为 Obsidian 笔记合订版；使用 ZIP 获得完整双链、原始证据和脚本。

# ACNH 3.0.3 · Native 指针研究（MOC）

> [!summary] 本轮结论
> 真实 ELF 审计已成功。4 个 BSS 根槽、5 条工具链、977 条直接引用记录、19 条 Main 地址记录、54 条 Heap 候选。15 条存在原始值的 Main 记录中仅 3 条吻合；12 条不吻合。此次新增 Ghidra C 交叉核对，发现两处真实全局对象注册、坐标相关消费函数及时间函数的明确 SDK 调用。尚无完整实机链或新的已验证 Heap→Main 链。

## 导航
- [[01-ELF地址空间与证据等级]]
- [[02-全局根槽与Native对象]]
- [[03-Main逐行反汇编与伪代码]]
- [[04-Heap到Main根指针与存档结构]]
- [[05-R100重定位与后续验收]]
- [[06-完整根槽引用逐行索引]]

## 原始证据
- [CI 45313390861](https://github.com/969981/ACNH_Resources/actions/runs/45313390861)，job 138174300351，artifact 14884541105。
- [上一轮仓库提交 99537c6](https://github.com/969981/ACNH_Resources/commit/99537c6d2fd62012d1bdfb40cdcb7f89af9f0f3b)，[研究文档提交 cabf8e6](https://github.com/969981/ACNH_Resources/commit/cabf8e61251b990007b66ff448eed59b67c4c789)。
- [Ghidra 导出进度](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/progress.json)：59,997 函数，59,971 成功反编译，26 失败。
- [[Evidence/external-pointer-audit.json|原始 JSON]]；`Scripts/trace_native.py` 为本次附带的本地追踪工具。

## 使用方法
将整个目录放入任意 Obsidian Vault，打开本页。所有内部笔记可通过双链跳转。研究以只读、本人授权的离线测试环境为边界。代码示例为分析用伪代码，不是游戏补丁。


---

# ELF 地址空间与证据等级

## 1. 原始身份
- canonical ELF: `e10617820db06889e1638499478da0de_NCA/0/main.elf`
- SHA-256: `145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664`
- 镜像 SHA-256: `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`（不一致，不作为分析输入）
- 原 NSO SHA-256: `68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1`（来自既有审计文档）。
- ELF64 LE AArch64 ET_DYN；Ghidra 工程 slide = `0x100000`；Build ID 本轮未从 NSO 头重新读取，保留 null。

## 2. PT_LOAD
|权限|RVA 起点|文件偏移|文件覆盖终点（不含）|内存终点（不含）|
|---|---|---|---|---|
|RX|`0x0`|`0x9F8`|`0x3F06DF0`|`0x3F06DF0`|
|R|`0x3F07000`|`0x3F077E8`|`0x47241FC`|`0x47241FC`|
|RW|`0x4725000`|`0x47249E4`|`0x4B57930`|`0x5A06000`|

```text
RuntimeVA = main_base + RVA
GhidraVA  = 0x100000 + RVA
FileOffset = PT_LOAD.p_offset + RVA - PT_LOAD.p_vaddr
```
最后一个公式仅在文件覆盖范围内成立。BSS 没有实际 ELF 初始指针字节；加载后通常为零，随后由代码写入或重定位处理。Heap 偏移不能代入该公式。

## 3. 证据标签
|标签|含义|
|---|---|
|source_only|外部工具源码中的历史地址或链|
|elf_mapped|确认在目标 ELF 的段内|
|word_match / word_mismatch|原始 u32 与源码预期一致/不一致|
|xref_candidate|有限静态数据流能形成目标地址|
|decompiler_corroborated|独立 Ghidra 导出确认局部对象或字段语义|
|native_semantic_verified|完整函数和消费者语义得到验证；需逐项记录范围|
|runtime_verified|实际 Build ID、运行时指针及目标字段一致；本轮全部 false|

> [!warning] 不可用同一个 confidence 概括所有证据。一个根槽可以已确认注册，但工具声称的子链仍未经验证。函数索引的 nearest entry 不等于包含该地址：byte_count 是函数体字节数量，可能不连续，需 Ghidra FunctionManager.getFunctionContaining 或真实 body range 验收。

## 4. 源快照
- [SysBot main](https://github.com/969981/SysBot.ACNHOrders/tree/11b61e8868752ba8fbd990837f90dd72104d1045)
- [SysBot lowintent](https://github.com/969981/SysBot.ACNHOrders/tree/84edb50709e0f5b791e6596a75bd25796793d368)
- [Poker main](https://github.com/969981/ACNHPokerCore/tree/85e50a1ad182c926b2ebd51c00abc612e0a859d5)
- [docs/26-External-Tool-Pointer-ELF-Audit.md](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/docs/26-External-Tool-Pointer-ELF-Audit.md)


---

# 全局根槽与 Native 对象

## 1. 根槽统计
|工具命名|RVA|Ghidra VA|地址形成|读取|写入|状态|
|---|---|---|---:|---:|---:|---|
|玩家坐标相关|`0x4bfae30`|`0x4CFAE30`|177|175|0|BSS / xref_candidate|
|聊天相关|`0x5255a60`|`0x5355A60`|118|118|0|BSS / xref_candidate|
|到访状态机|`0x526c708`|`0x536C708`|3|0|3|BSS / xref_candidate|
|访客相关管理器|`0x59e6a60`|`0x5AE6A60`|190|189|4|BSS / xref_candidate|

## 2. 到访相关根槽：`main+0x526C708`

**新增证据：** [FUN_01d3e72c.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/e7/01d3e72c.c)；入口 Ghidra VA `0x01D3E72C` / RVA `0x01C3E72C`，索引 29295。C 导出直接确认全局赋值与状态机初始化。

### 2.1 已观察到的 ELF 指令（不连续）
```asm
01C3E7DC  add x8, x8, #0x708   ; 将页地址与低12位合成根槽地址（扫描器追踪的 x8）
; 省略中间未提供的真实 ELF 指令，不补造
01C3E7F8  stp x19, x9, [x8]    ; 根槽和相邻+8分别写入两个64位值
01C3EAD8  add x8, x8, #0x708   ; 形成根槽地址
01C3EADC  stp xzr, xzr, [x8]   ; 清零两相邻槽
01C3EB60  add x8, x8, #0x708   ; 形成根槽地址
01C3EB64  stp xzr, xzr, [x8]   ; 第二条清零路径
```

### 2.2 Ghidra 伪代码交叉证据（按字节偏移整理）
```cpp
// Ghidra 中原始全局名为 DAT_0536c708 / 710 / 718。
void initialize_01d3e72c(Object* self) {
    self->vtable_candidate = &PTR_LAB_04a555b8;
    FUN_01d3c31c((byte*)self + 8);        // 子对象初始化
    U64(self, 0x488) = 0; U64(self, 0x480) = 0;
    U32(self, 0x490) = 0xffffffff;
    FUN_038e18e4((byte*)self + 0x4b8);
    U16(self, 0x4f8) = 0;
    // 0x494/49c/4a4/4ac 各写 0xffffffffffffffff；其余字段初始化略。
    DAT_0536c718 = 0;
    DAT_0536c710 = &LAB_01d3ea78;        // 已确认是代码地址标签，不是长度
    DAT_0536c708 = self;                 // 全局注册，和 STP 的对象写入交叉吻合
    FUN_03ebac90((byte*)self + 0x500, 7, 0, 0, 0);
    // 原始字符串逐一注册：
    // 0 Invalid, 1 Startup, 2 Ready, 3 Matching, 4 Active, 5 Leave, 6 Cleanup
    // 状态记录步长 0x40；对象指针位于每条记录 +8。
    U8(self, 0x521) = 1;
    // 末尾迁移状态索引，并在非空时调用状态对象的虚表函数。
}
```
原 C 中 `param_1` 类型是 `undefined8*`，`param_1[0xa0]` 是字节偏移 `0x500`，不能误读为 `0xa0`。`DAT_0536c710` 是 `LAB_01d3ea78`，比上一轮“未知相邻字段”更明确；是否为回调/析构登记还需追踪调用者。两处清零的具体函数边界未确认：最近入口是 `01D3E72C`，但不能凭索引推断都属于它。

### 2.3 状态记录表（来自实际 C 导出）
|索引|原始状态字符串|记录偏移|记录 +0x10|记录 +0x20|
|---:|---|---|---|---|
|0|State::cInvalid|0x0|0x10|0x18|
|1|State::cStartup|0x40|0x20|0x28|
|2|State::cReady|0x80|0x30|0x38|
|3|State::cMatching|0xC0|0x40|0x48|
|4|State::cActive|0x100|0x50|0x58|
|5|State::cLeave|0x140|0x68|0x70|
|6|State::cCleanup|0x180|0x78|0x80|

工具历史链：`P(P(M+0x526C708)+0x40)+0x170` 与 `P(M+0x526C708)+0xD0`；目前仅根槽注册和状态机获得 Ghidra 证据，子对象和字段未验证；不记录任何真实访客个人数据。

## 3. 访客相关管理器：`main+0x59E6A60`

**新增证据：** [FUN_0387e200.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/e2/0387e200.c)，RVA `0x377E200`，索引 50612。反编译明确 `DAT_05ae6a60 = param_1`。

```asm
0377E25C  str x0, [x8, #0xa60] ; 写入对象指针到全局槽
037801F4  str xzr, [x8, #0xa60]; 清零全局槽
0379E2D4  str xzr, [x8]        ; 清零全局槽（数据流追踪 x8）
0379E320  str xzr, [x8]        ; 另一清零路径
```

```cpp
void initialize_0387e200(Manager* self) {
    U32(self,0xa4)=0;
    self->vtable_candidate=&PTR_LAB_04b60680;
    // +8 至 +0x88 多个 64 位槽归零
    DAT_05ae6a60=self;
    // 分配器优先从 PTR_DAT_04bb2698 / TLS 获取，否则 malloc。
    auto a=allocate(0x2f0,8); FUN_038802e0();
    U64(a,0)=&PTR_LAB_04b607a8; U32(a,0x2bc)=1;
    U64(self,0x18)=a;
    auto b=allocate(0x30,8); U64(b,0)=&PTR_LAB_04b60868;
    U64(self,0x20)=b;
    auto c=allocate(0x10,8); U64(c,0)=&PTR_LAB_04b60898;
    U64(self,0x10)=c;
    auto e=allocate(0x268,8); FUN_0389d5e0(e);
    // e 内多个自引用链表哨兵和表指针初始化
    U64(self,0x8)=e;
}
```
`allocate` 为归纳出的伪代码辅助函数，不是已恢复原始符号。四种子对象大小是 Ghidra 实际反编译证据。

|管理器偏移|分配大小|状态|
|---|---:|---|
|+0x08|0x268|Ghidra 构造证据|
|+0x10|0x10|Ghidra 构造证据|
|+0x18|0x2F0|Ghidra 构造证据|
|+0x20|0x30|Ghidra 构造证据|
|+0x38|未知|工具链首跳，构造时清零，后续赋值未确定|
|+0x88|未知|消费函数中实际读取|

### 3.1 已恢复另一个消费者
[FUN_006d5fb0.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/5f/006d5fb0.c)，RVA `0x5D5FB0`。
```asm
005D5FCC  add x8,x8,#0xa60 ; 形成根槽
005D5FD0  ldr x8,[x8]      ; 读取管理器指针
```
```cpp
bool consumer_006d5fb0(Object* arg) {
    int id=I32(arg,0x44);
    if(id==0) return false;
    auto sub=P(DAT_05ae6a60+0x88);
    LockMutex(sub+0x330);
    // 访问 +0x128 当前索引、+0x110 两组数组；查找 id。
    // 若命中返回 false；否则继续检查 +0x130/+0x138/+0x140 链表。
    // 所有已观察返回路径先 UnlockMutex。
    return result;
}
```
证明该根确为拥有容器和同步对象的管理结构；不能因此将 `+0x38 → +0xE0 → +0x1EC → +0x17A` 自动认定为已验证。

## 4. 玩家坐标相关：`main+0x4BFAE30`

```asm
00608BCC  add x8,x8,#0xe30 ; 合成根槽地址
00608BD0  ldr x20,[x8]     ; 读取全局对象指针
```
[FUN_00708bb8.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/8b/00708bb8.c)，RVA `0x608BB8`，直接证明坐标相关消费：
```cpp
void consumer_00708bb8(Object* a) {
    auto manager=DAT_04cfae30;
    if(!manager || !(U8(a,0x178)&1)) return;
    auto q=P(a+0x278);
    virtual_call(q,0x60);
    if(!U8(a,0x289)) return;
    FUN_0097e550(manager+8,q);
    if(!(U8(q,0x18)&2) || !U8(a,0x288)) return;
    auto t=P(a+0x48); if(!t) return;
    auto entity=virtual_call(P(t+0x68),0xe8,U32(a,0x284));
    if(!entity) return;
    auto pos=virtual_call(entity,0x130);
    Vec3 target=read_vec3(pos)+read_vec3(q+0x1c);
    if(any_nan(target)) return;
    auto sub=P(t+0xa0);
    if(!sub) virtual_call(entity,0x128,&target);
    else copy_3floats(sub+0x5078,q+0x1c);
}
```
该函数使用 root、3 个浮点、NaN 检查与虚函数，坐标关联性较强；注意 `param_1+0x178` 不等同于历史链的第二跳 `P(P(root)+0x18)+0x178`，不能把两个同名偏移混为一谈。

工具链（历史）：`P(P(P(P(M+0x4BFAE30)+0x18)+0x178)+0xD0)+0xD8`。末端 DA 与 D8 差 2 的工具差异需单独验证。

## 5. 聊天相关：`main+0x5255A60`
```asm
02B1A2D4 add x8,x8,#0xa60 ; 形成根槽
02B1A2D8 ldr x8,[x8]      ; 读对象
02B1D7DC add x8,x8,#0xa60 ; 另一引用入口
02B1D7E0 ldr x8,[x8]      ; 读对象
```
工具链为 `P(M+0x5255A60)+0x40`，UTF-16 0x1E 单元来自源码。已知 118 读候选，没有直接写候选。索引最近函数 `02C19614`、`02C1B3D0` 距离较大，不能宣称是包含函数。需要对实际 ELF 窗口与 Ghidra body range 交叉验证。

## 6. 完整性说明
以上 root 指令仅来自审计 JSON 中的 977 条实际引用记录，不是连续反汇编。完整上下文提取工具见 `Scripts/trace_native.py`，其运行需真实 ELF。[[06-完整根槽引用逐行索引]] 提供全部记录。


---

# Main 地址逐行反汇编与伪代码

> [!important] 下面所有指令和原始字节来自成功 CI 的 JSON。每个可执行站点最多 17 行（目标 ±32 字节），不等于完整函数。每条注释解释机器操作；控制流/寄存器来源未确认时保留未知。R 段数据不作反汇编。错误地址只记录当前实际指令语义，不给出新补丁。

## 1. 总览
|工具|名称|RVA|ELF u32|预期 u32|结果|
|---|---|---|---|---|---|
|SysBot|AnimationSpeedOffset|`0x43bc3c0`|`0x24`|`—`|unknown|
|SysBot|WalkSpeedOffset|`0x16127a0`|`0xf868d928`|`—`|unknown|
|SysBot|CollisionStateOffset|`0x155fdc0`|`0xb900058d`|`—`|unknown|
|SysBot|TimeStateAddress|`0x328bd0`|`0xa490569`|`—`|unknown|
|Poker|freezeTimeAddress|`0x981b28`|`0xf9203260`|`F9203260`|match|
|Poker|wSpeedAddress|`0x2318428`|`0xa94a5ff8`|`BD57BE60`|mismatch|
|Poker|CollisionAddress|`0x2219120`|`0xb95bf800`|`B95BF800`|match|
|Poker|ActorCollisionAddress|`0x221965c`|`0x1e2e1000`|`1E2E1000`|match|
|Poker|aSpeedAddress|`0x43bc3c0`|`0x24`|`3F800000`|mismatch|
|Poker|ParticleScaleAddress|`0x26312b8`|`0xf9402be0`|`1E2E1001`|mismatch|
|Poker|PetalsAddress|`0x3327f4`|`0xf9000268`|`71000D1F`|mismatch|
|Poker|PetalsIntensityAddress|`0x332814`|`0xa9017bfd`|`1E2E1001`|mismatch|
|Poker|LeavesAddress|`0x332c40`|`0xa8c24ff4`|`1A9F17E9`|mismatch|
|Poker|ShopAddress|`0x1b063e0`|`0xa9005837`|`2A1F03E0`|mismatch|
|Poker|BGMAddress|`0x1a021b8`|`0x540007e0`|`1E2E1001`|mismatch|
|Poker|EatAllAddress|`0x1f08404`|`0xd0015dc0`|`97C2FB0F`|mismatch|
|Poker|EatAll2Address|`0x1565340`|`0x911e4108`|`B9000268`|mismatch|
|Poker|MagicAddress|`0x8afeb8`|`0x3cc282c0`|`52810840`|mismatch|
|Poker|MagicAddress+0x14|`0x8afecc`|`0x9a8e3273`|`52810840`|mismatch|

## 2. SysBot · AnimationSpeedOffset
RVA `0x43bc3c0`；Ghidra VA `0x44bc3c0`；原始文件字节 `24000000`。

R 段 4 字节数据，实际 `0x00000024`；不是预期 `0x3F800000`（float 1.0）。禁止将其作为指令或动画速度变量解释。

## 3. SysBot · WalkSpeedOffset
RVA `0x16127a0`；Ghidra VA `0x17127a0`；原始文件字节 `28d968f8`。

```asm
01612780  d1ab4194  bl #0x267d6c4                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
01612784  a9f24379  ldrh w9, [x21, #0x1f8]                 ; 从内存加载至 w9；地址/扩展/回写见原指令
01612788  083c0012  and w8, w0, #0xffff                    ; w8 = AND(w0, #0xffff)
0161278C  0801094b  sub w8, w8, w9                         ; w8 = SUB(w8, w9)
01612790  a9da41b9  ldr w9, [x21, #0x1d8]                  ; 从内存加载至 w9；地址/扩展/回写见原指令
01612794  1f01096b  cmp w8, w9                             ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
01612798  a2000054  b.hs #0x16127ac                        ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0161279C  a9f240f9  ldr x9, [x21, #0x1e0]                  ; 从内存加载至 x9；地址/扩展/回写见原指令
016127A0  28d968f8  ldr x8, [x9, w8, sxtw #3]              ; [目标] 从内存加载至 x8；地址/扩展/回写见原指令
016127A4  480000b4  cbz x8, #0x16127ac                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
016127A8  e80b00f9  str x8, [sp, #0x10]                    ; 将x8写入内存；地址/回写见原指令
016127AC  e0030091  mov x0, sp                             ; 设置 x0 为 sp（按指令规定的宽度/位模式）
016127B0  a12300d1  sub x1, x29, #8                        ; x1 = SUB(x29, #8)
016127B4  bf831f78  sturh wzr, [x29, #-8]                  ; 将wzr写入内存；地址/回写见原指令
016127B8  b42300d1  sub x20, x29, #8                       ; x20 = SUB(x29, #8)
016127BC  e5200f94  bl #0x19dab50                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
016127C0  e8031f2a  mov w8, wzr                            ; 设置 w8 为 wzr（按指令规定的宽度/位模式）
```

局部伪代码：`从内存加载至 x8；地址/扩展/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 4. SysBot · CollisionStateOffset
RVA `0x155fdc0`；Ghidra VA `0x165fdc0`；原始文件字节 `8d0500b9`。

```asm
0155FDA0  0d0140b9  ldr w13, [x8]                          ; 从内存加载至 w13；地址/扩展/回写见原指令
0155FDA4  4a1100d1  sub x10, x10, #4                       ; x10 = SUB(x10, #4)
0155FDA8  7f010aeb  cmp x11, x10                           ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
0155FDAC  8d811fb8  stur w13, [x12, #-8]                   ; 将w13写入内存；地址/回写见原指令
0155FDB0  0d4140f8  ldur x13, [x8, #4]                     ; 从内存加载至 x13；地址/扩展/回写见原指令
0155FDB4  8dc11ff8  stur x13, [x12, #-4]                   ; 将x13写入内存；地址/回写见原指令
0155FDB8  0d0d40b9  ldr w13, [x8, #0xc]                    ; 从内存加载至 w13；地址/扩展/回写见原指令
0155FDBC  08410091  add x8, x8, #0x10                      ; x8 = ADD(x8, #0x10)
0155FDC0  8d0500b9  str w13, [x12, #4]                     ; [目标] 将w13写入内存；地址/回写见原指令
0155FDC4  8c410091  add x12, x12, #0x10                    ; x12 = ADD(x12, #0x10)
0155FDC8  c1feff54  b.ne #0x155fda0                        ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0155FDCC  ea030acb  neg x10, x10                           ; x10 = NEG(x10)
0155FDD0  bc5a0190  adrp x28, #0x40b3000                   ; x28 = PC 相对页地址
0155FDD4  9c331c91  add x28, x28, #0x70c                   ; x28 = ADD(x28, #0x70c)
0155FDD8  490100b4  cbz x9, #0x155fe00                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0155FDDC  cbf27dd3  lsl x11, x22, #3                       ; x11 = LSL(x22, #3)
0155FDE0  6a090a8b  add x10, x11, x10, lsl #2              ; x10 = ADD(x11, x10, lsl #2)
```

局部伪代码：`将w13写入内存；地址/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 5. SysBot · TimeStateAddress
RVA `0x328bd0`；Ghidra VA `0x428bd0`；原始文件字节 `6905490a`。

```asm
00328BB0  3f011cea  tst x9, x28                            ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
00328BB4  61000054  b.ne #0x328bc0                         ; 条件分支；根据条件标志、寄存器零值或指定位跳转
00328BB8  080540f9  ldr x8, [x8, #8]                       ; 从内存加载至 x8；地址/扩展/回写见原指令
00328BBC  68ffffb5  cbnz x8, #0x328ba8                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
00328BC0  e1031faa  mov x1, xzr                            ; 设置 x1 为 xzr（按指令规定的宽度/位模式）
00328BC4  11000014  b #0x328c08                            ; 无条件跳转，不能把后续线性字节视为必然执行
00328BC8  abaa8252  mov w11, #0x1555                       ; 设置 w11 为 #0x1555（按指令规定的宽度/位模式）
00328BCC  2a390012  and w10, w9, #0x7fff                   ; w10 = AND(w9, #0x7fff)
00328BD0  6905490a  and w9, w11, w9, lsr #1                ; [目标] w9 = AND(w11, w9, lsr #1)
00328BD4  ebe70032  mov w11, #0x33333333                   ; 设置 w11 为 #0x33333333（按指令规定的宽度/位模式）
00328BD8  4901094b  sub w9, w10, w9                        ; w9 = SUB(w10, w9)
00328BDC  2a010b0a  and w10, w9, w11                       ; w10 = AND(w9, w11)
00328BE0  6909490a  and w9, w11, w9, lsr #2                ; w9 = AND(w11, w9, lsr #2)
00328BE4  29010a0b  add w9, w9, w10                        ; w9 = ADD(w9, w10)
00328BE8  eacf0032  mov w10, #0xf0f0f0f                    ; 设置 w10 为 #0xf0f0f0f（按指令规定的宽度/位模式）
00328BEC  2911490b  add w9, w9, w9, lsr #4                 ; w9 = ADD(w9, w9, lsr #4)
00328BF0  29010a0a  and w9, w9, w10                        ; w9 = AND(w9, w10)
```

局部伪代码：`w9 = AND(w11, w9, lsr #1)`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 6. Poker · freezeTimeAddress
RVA `0x981b28`；Ghidra VA `0xa81b28`；原始文件字节 `603220f9`。

```asm
00981B08  e1030091  mov x1, sp                             ; 设置 x1 为 sp（按指令规定的宽度/位模式）
00981B0C  e20314aa  mov x2, x20                            ; 设置 x2 为 x20（按指令规定的宽度/位模式）
00981B10  b406d694  bl #0x3f035e0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
00981B14  e00314aa  mov x0, x20                            ; 设置 x0 为 x20（按指令规定的宽度/位模式）
00981B18  c206d694  bl #0x3f03620                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
00981B1C  f40300aa  mov x20, x0                            ; 设置 x20 为 x0（按指令规定的宽度/位模式）
00981B20  a0831ff8  stur x0, [x29, #-8]                    ; 将x0写入内存；地址/回写见原指令
00981B24  d73e4092  and x23, x22, #0xffff                  ; x23 = AND(x22, #0xffff)
00981B28  603220f9  str x0, [x19, #0x4060]                 ; [目标] 将x0写入内存；地址/回写见原指令
00981B2C  6505d694  bl #0x3f030c0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
00981B30  d70200b4  cbz x23, #0x981b88                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
00981B34  c8de4092  and x8, x22, #0xffffffffffffff         ; x8 = AND(x22, #0xffffffffffffff)
00981B38  89de4092  and x9, x20, #0xffffffffffffff         ; x9 = AND(x20, #0xffffffffffffff)
00981B3C  3f0108eb  cmp x9, x8                             ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
00981B40  41020054  b.ne #0x981b88                         ; 条件分支；根据条件标志、寄存器零值或指定位跳转
00981B44  683e60f9  ldr x8, [x19, #0x4078]                 ; 从内存加载至 x8；地址/扩展/回写见原指令
00981B48  000008cb  sub x0, x0, x8                         ; x0 = SUB(x0, x8)
```

已交叉核对 [FUN_00a818cc.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/18/00a818cc.c)。确认为时钟更新逻辑，不再仅凭减法猜测。`nn::time::AdjustableUserSystemClock::GetCurrentTime`、`ToCalendarTimeInUtc`、`nn::os::GetSystemTick`、`ConvertToTimeSpan` 均见真实 C。+0x4060 为 UTC 日历打包值，+0x4078 为基准 tick，+0x4080 为 0..999 的时间子字段（单位仍需核对）。
```cpp
old=U64(self,0x4060);
// 更新 Posix 时间；若需要，校验/转换日历输入
now=nn::time::ToCalendarTimeInUtc(self+0x18);
U64(self,0x4060)=now;
tick=nn::os::GetSystemTick();
if((old&0xffff)==0 || (now&0xffffffffffffff)!=(old&0xffffffffffffff)) {
    U64(self,0x4078)=tick; U32(self,0x4080)=0;
} else {
    U32(self,0x4080)=clamp(convert_tick_delta(tick-U64(self,0x4078)),0,999);
}
```
`convert_tick_delta` 是伪代码归纳，不是原符号。命中的是时钟写入位置，不证明旧工具的补丁行为安全。

## 7. Poker · wSpeedAddress
RVA `0x2318428`；Ghidra VA `0x2418428`；原始文件字节 `f85f4aa9`。

```asm
02318408  24008052  mov w4, #1                             ; 设置 w4 为 #1（按指令规定的宽度/位模式）
0231840C  61becb97  bl #0x1607d90                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
02318410  e923476d  ldp d9, d8, [sp, #0x70]                ; 从内存加载一对寄存器；地址/扩展/回写见原指令
02318414  e003142a  mov w0, w20                            ; 设置 w0 为 w20（按指令规定的宽度/位模式）
02318418  eb2b466d  ldp d11, d10, [sp, #0x60]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
0231841C  f94b40f9  ldr x25, [sp, #0x90]                   ; 从内存加载至 x25；地址/扩展/回写见原指令
02318420  f44f4ca9  ldp x20, x19, [sp, #0xc0]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
02318424  f6574ba9  ldp x22, x21, [sp, #0xb0]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
02318428  f85f4aa9  ldp x24, x23, [sp, #0xa0]              ; [目标] 从内存加载一对寄存器；地址/扩展/回写见原指令
0231842C  fd7b48a9  ldp x29, x30, [sp, #0x80]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
02318430  ff430391  add sp, sp, #0xd0                      ; sp = ADD(sp, #0xd0)
02318434  c0035fd6  ret                                    ; 返回至链接寄存器指定的地址
02318438  607101d0  adrp x0, #0x5146000                    ; x0 = PC 相对页地址
0231843C  00000791  add x0, x0, #0x1c0                     ; x0 = ADD(x0, #0x1c0)
02318440  24ab6f94  bl #0x3f030d0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
02318444  54710190  adrp x20, #0x5140000                   ; x20 = PC 相对页地址
02318448  94020a91  add x20, x20, #0x280                   ; x20 = ADD(x20, #0x280)
```

局部伪代码：`从内存加载一对寄存器；地址/扩展/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 8. Poker · CollisionAddress
RVA `0x2219120`；Ghidra VA `0x2319120`；原始文件字节 `00f85bb9`。

```asm
02219100  df0200f9  str xzr, [x22]                         ; 将xzr写入内存；地址/回写见原指令
02219104  f7a77394  bl #0x3f030e0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
02219108  05feff17  b #0x221891c                           ; 无条件跳转，不能把后续线性字节视为必然执行
0221910C  ffc300d1  sub sp, sp, #0x30                      ; sp = SUB(sp, #0x30)
02219110  fd7b01a9  stp x29, x30, [sp, #0x10]              ; 将一对寄存器写入内存；地址/回写见原指令
02219114  f44f02a9  stp x20, x19, [sp, #0x20]              ; 将一对寄存器写入内存；地址/回写见原指令
02219118  fd430091  add x29, sp, #0x10                     ; x29 = ADD(sp, #0x10)
0221911C  f30300aa  mov x19, x0                            ; 设置 x19 为 x0（按指令规定的宽度/位模式）
02219120  00f85bb9  ldr w0, [x0, #0x1bf8]                  ; [目标] 从内存加载至 w0；地址/扩展/回写见原指令
02219124  684662b9  ldr w8, [x19, #0x2244]                 ; 从内存加载至 w8；地址/扩展/回写见原指令
02219128  28010034  cbz w8, #0x221914c                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0221912C  a8008052  mov w8, #5                             ; 设置 w8 为 #5（按指令规定的宽度/位模式）
02219130  a8c31fb8  stur w8, [x29, #-4]                    ; 将w8写入内存；地址/回写见原指令
02219134  683a40f9  ldr x8, [x19, #0x70]                   ; 从内存加载至 x8；地址/扩展/回写见原指令
02219138  e80000b4  cbz x8, #0x2219154                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0221913C  098142b9  ldr w9, [x8, #0x280]                   ; 从内存加载至 w9；地址/扩展/回写见原指令
02219140  3f210571  cmp w9, #0x148                         ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
```

已交叉核对 [FUN_0231910c.c](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/91/0231910c.c)。实际读取 +0x1BF8，按 +0x2244、子对象 +0x280 枚举和 +0x1810 等分支返回不同值。
```cpp
u32 base=U32(self,0x1bf8);
auto child=P(self+0x70);
u32 kind=child && U32(child,0x280)<0x149 ? U32(child,0x280) : 0;
if(U32(self,0x2244)!=0 && kind==5) return 3;
if(kind==0x19 || kind==0x2a || kind==0x2b)
    return (U32(self,0x1810)&0xfffffff7)==1 ? 0 : base;
// 后续另含 0xf4、0x47、0x48 分支与浮点字段 +0x1bf0/+0x1bf4。
```
目前语义为状态选择；实际碰撞处理消费者仍需验证。

## 9. Poker · ActorCollisionAddress
RVA `0x221965c`；Ghidra VA `0x231965c`；原始文件字节 `00102e1e`。

```asm
0221963C  e802889a  csel x8, x23, x8, eq                   ; x8 = CSEL(x23, x8, eq)
02219640  00e10991  add x0, x8, #0x278                     ; x0 = ADD(x8, #0x278)
02219644  8a3fcf97  bl #0x15e946c                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
02219648  a0000036  tbz w0, #0, #0x221965c                 ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0221964C  68b89e52  mov w8, #0xf5c3                        ; 设置 w8 为 #0xf5c3（按指令规定的宽度/位模式）
02219650  08d5a772  movk w8, #0x3ea8, lsl #16              ; 更新 w8 的指定16位片段，保留其余位
02219654  0001271e  fmov s0, w8                            ; 设置 s0 为 w8（按指令规定的宽度/位模式）
02219658  49000014  b #0x221977c                           ; 无条件跳转，不能把后续线性字节视为必然执行
0221965C  00102e1e  fmov s0, #1.00000000                   ; [目标] 设置 s0 为 #1.00000000（按指令规定的宽度/位模式）
02219660  b00240b9  ldr w16, [x21]                         ; 从内存加载至 w16；地址/扩展/回写见原指令
02219664  0140201e  fmov s1, s0                            ; 设置 s1 为 s0（按指令规定的宽度/位模式）
02219668  90070034  cbz w16, #0x2219758                    ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0221966C  484501b0  adrp x8, #0x4ac2000                    ; x8 = PC 相对页地址
02219670  494501b0  adrp x9, #0x4ac2000                    ; x9 = PC 相对页地址
02219674  08f147f9  ldr x8, [x8, #0xfe0]                   ; 从内存加载至 x8；地址/扩展/回写见原指令
02219678  29f547f9  ldr x9, [x9, #0xfe8]                   ; 从内存加载至 x9；地址/扩展/回写见原指令
0221967C  0a008092  mov x10, #-1                           ; 设置 x10 为 #-1（按指令规定的宽度/位模式）
```

局部证据：条件调用后的两个分支分别形成约 `0.33f` 与 `1.0f`，随后传递浮点寄存器。最近 Ghidra 入口 `0231910c` 的 byte_count 572，而目标距入口 1360 字节，不能认定属于同一个函数。
```cpp
// 仅局部等价，谓词、函数归属未确定。
float f = (call_result & 1) ? bit_cast_float(0x3ea8f5c3) : 1.0f;
```


## 10. Poker · aSpeedAddress
RVA `0x43bc3c0`；Ghidra VA `0x44bc3c0`；原始文件字节 `24000000`。

R 段 4 字节数据，实际 `0x00000024`；不是预期 `0x3F800000`（float 1.0）。禁止将其作为指令或动画速度变量解释。

## 11. Poker · ParticleScaleAddress
RVA `0x26312b8`；Ghidra VA `0x27312b8`；原始文件字节 `e02b40f9`。

```asm
02631298  0ad941b9  ldr w10, [x8, #0x1d8]                  ; 从内存加载至 w10；地址/扩展/回写见原指令
0263129C  3f010a6b  cmp w9, w10                            ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
026312A0  22080054  b.hs #0x26313a4                        ; 条件分支；根据条件标志、寄存器零值或指定位跳转
026312A4  08f140f9  ldr x8, [x8, #0x1e0]                   ; 从内存加载至 x8；地址/扩展/回写见原指令
026312A8  08d969f8  ldr x8, [x8, w9, sxtw #3]              ; 从内存加载至 x8；地址/扩展/回写见原指令
026312AC  c80700b4  cbz x8, #0x26313a4                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
026312B0  281801b0  adrp x8, #0x4936000                    ; x8 = PC 相对页地址
026312B4  08012d91  add x8, x8, #0xb40                     ; x8 = ADD(x8, #0xb40)
026312B8  e02b40f9  ldr x0, [sp, #0x50]                    ; [目标] 从内存加载至 x0；地址/扩展/回写见原指令
026312BC  08410091  add x8, x8, #0x10                      ; x8 = ADD(x8, #0x10)
026312C0  e83b00f9  str x8, [sp, #0x70]                    ; 将x8写入内存；地址/回写见原指令
026312C4  48034079  ldrh w8, [x26]                         ; 从内存加载至 w8；地址/扩展/回写见原指令
026312C8  e8f30079  strh w8, [sp, #0x78]                   ; 将w8写入内存；地址/回写见原指令
026312CC  480b4039  ldrb w8, [x26, #2]                     ; 从内存加载至 w8；地址/扩展/回写见原指令
026312D0  e8eb0139  strb w8, [sp, #0x7a]                   ; 将w8写入内存；地址/回写见原指令
026312D4  480f4039  ldrb w8, [x26, #3]                     ; 从内存加载至 w8；地址/扩展/回写见原指令
026312D8  e8ef0139  strb w8, [sp, #0x7b]                   ; 将w8写入内存；地址/回写见原指令
```

局部伪代码：`从内存加载至 x0；地址/扩展/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 12. Poker · PetalsAddress
RVA `0x3327f4`；Ghidra VA `0x4327f4`；原始文件字节 `680200f9`。

```asm
003327D4  68024039  ldrb w8, [x19]                         ; 从内存加载至 w8；地址/扩展/回写见原指令
003327D8  08010037  tbnz w8, #0, #0x3327f8                 ; 条件分支；根据条件标志、寄存器零值或指定位跳转
003327DC  203d02b0  adrp x0, #0x4ad7000                    ; x0 = PC 相对页地址
003327E0  213d02b0  adrp x1, #0x4ad7000                    ; x1 = PC 相对页地址
003327E4  000844f9  ldr x0, [x0, #0x810]                   ; 从内存加载至 x0；地址/扩展/回写见原指令
003327E8  210c44f9  ldr x1, [x1, #0x818]                   ; 从内存加载至 x1；地址/扩展/回写见原指令
003327EC  31510094  bl #0x346cb0                           ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
003327F0  e8030032  mov w8, #1                             ; 设置 w8 为 #1（按指令规定的宽度/位模式）
003327F4  680200f9  str x8, [x19]                          ; [目标] 将x8写入内存；地址/回写见原指令
003327F8  fd7b41a9  ldp x29, x30, [sp, #0x10]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
003327FC  f30742f8  ldr x19, [sp], #0x20                   ; 从内存加载至 x19；地址/扩展/回写见原指令
00332800  c0035fd6  ret                                    ; 返回至链接寄存器指定的地址
00332804  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332808  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
0033280C  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332810  f30f1ef8  str x19, [sp, #-0x20]!                 ; 将x19写入内存；地址/回写见原指令
00332814  fd7b01a9  stp x29, x30, [sp, #0x10]              ; 将一对寄存器写入内存；地址/回写见原指令
```

局部伪代码：`将x8写入内存；地址/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 13. Poker · PetalsIntensityAddress
RVA `0x332814`；Ghidra VA `0x432814`；原始文件字节 `fd7b01a9`。

```asm
003327F4  680200f9  str x8, [x19]                          ; 将x8写入内存；地址/回写见原指令
003327F8  fd7b41a9  ldp x29, x30, [sp, #0x10]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
003327FC  f30742f8  ldr x19, [sp], #0x20                   ; 从内存加载至 x19；地址/扩展/回写见原指令
00332800  c0035fd6  ret                                    ; 返回至链接寄存器指定的地址
00332804  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332808  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
0033280C  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332810  f30f1ef8  str x19, [sp, #-0x20]!                 ; 将x19写入内存；地址/回写见原指令
00332814  fd7b01a9  stp x29, x30, [sp, #0x10]              ; [目标] 将一对寄存器写入内存；地址/回写见原指令
00332818  fd430091  add x29, sp, #0x10                     ; x29 = ADD(sp, #0x10)
0033281C  333d0290  adrp x19, #0x4ad6000                   ; x19 = PC 相对页地址
00332820  73ee45f9  ldr x19, [x19, #0xbd8]                 ; 从内存加载至 x19；地址/扩展/回写见原指令
00332824  68024039  ldrb w8, [x19]                         ; 从内存加载至 w8；地址/扩展/回写见原指令
00332828  08010037  tbnz w8, #0, #0x332848                 ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0033282C  203d02b0  adrp x0, #0x4ad7000                    ; x0 = PC 相对页地址
00332830  213d02b0  adrp x1, #0x4ad7000                    ; x1 = PC 相对页地址
00332834  000044f9  ldr x0, [x0, #0x800]                   ; 从内存加载至 x0；地址/扩展/回写见原指令
```

局部伪代码：`将一对寄存器写入内存；地址/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 14. Poker · LeavesAddress
RVA `0x332c40`；Ghidra VA `0x432c40`；原始文件字节 `f44fc2a8`。

```asm
00332C20  80220610  adr x0, #0x33f070                      ; x0 = PC 相对地址
00332C24  22200290  adrp x2, #0x4736000                    ; x2 = PC 相对页地址
00332C28  42800591  add x2, x2, #0x160                     ; x2 = ADD(x2, #0x160)
00332C2C  e10313aa  mov x1, x19                            ; 设置 x1 为 x19（按指令规定的宽度/位模式）
00332C30  6835f397  bl #0x1d0                              ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
00332C34  e8030032  mov w8, #1                             ; 设置 w8 为 #1（按指令规定的宽度/位模式）
00332C38  880200f9  str x8, [x20]                          ; 将x8写入内存；地址/回写见原指令
00332C3C  fd7b41a9  ldp x29, x30, [sp, #0x10]              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
00332C40  f44fc2a8  ldp x20, x19, [sp], #0x20              ; [目标] 从内存加载一对寄存器；地址/扩展/回写见原指令
00332C44  c0035fd6  ret                                    ; 返回至链接寄存器指定的地址
00332C48  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332C4C  00000000  udf #0                                 ; 保留真实指令；本注释未对该操作作额外语义推断
00332C50  ff4301d1  sub sp, sp, #0x50                      ; sp = SUB(sp, #0x50)
00332C54  f65702a9  stp x22, x21, [sp, #0x20]              ; 将一对寄存器写入内存；地址/回写见原指令
00332C58  f44f03a9  stp x20, x19, [sp, #0x30]              ; 将一对寄存器写入内存；地址/回写见原指令
00332C5C  fd7b04a9  stp x29, x30, [sp, #0x40]              ; 将一对寄存器写入内存；地址/回写见原指令
00332C60  fd030191  add x29, sp, #0x40                     ; x29 = ADD(sp, #0x40)
```

局部伪代码：`从内存加载一对寄存器；地址/扩展/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 15. Poker · ShopAddress
RVA `0x1b063e0`；Ghidra VA `0x1c063e0`；原始文件字节 `375800a9`。

```asm
01B063C0  e1b901d0  adrp x1, #0x5244000                    ; x1 = PC 相对页地址
01B063C4  21c00391  add x1, x1, #0xf0                      ; x1 = ADD(x1, #0xf0)
01B063C8  167100a9  stp x22, x28, [x8]                     ; 将一对寄存器写入内存；地址/回写见原指令
01B063CC  e80f80d2  mov x8, #0x7f                          ; 设置 x8 为 #0x7f（按指令规定的宽度/位模式）
01B063D0  a810c0f2  movk x8, #0x85, lsl #32                ; 更新 x8 的指定16位片段，保留其余位
01B063D4  281000f9  str x8, [x1, #0x20]                    ; 将x8写入内存；地址/回写见原指令
01B063D8  e00314aa  mov x0, x20                            ; 设置 x0 为 x20（按指令规定的宽度/位模式）
01B063DC  e20313aa  mov x2, x19                            ; 设置 x2 为 x19（按指令规定的宽度/位模式）
01B063E0  375800a9  stp x23, x22, [x1]                     ; [目标] 将一对寄存器写入内存；地址/回写见原指令
01B063E4  3c5801a9  stp x28, x22, [x1, #0x10]              ; 将一对寄存器写入内存；地址/回写见原指令
01B063E8  7ae79397  bl #0x1d0                              ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
01B063EC  e8b901d0  adrp x8, #0x5244000                    ; x8 = PC 相对页地址
01B063F0  08610491  add x8, x8, #0x118                     ; x8 = ADD(x8, #0x118)
01B063F4  e1b901d0  adrp x1, #0x5244000                    ; x1 = PC 相对页地址
01B063F8  21a00491  add x1, x1, #0x128                     ; x1 = ADD(x1, #0x128)
01B063FC  3a6400a9  stp x26, x25, [x1]                     ; 将一对寄存器写入内存；地址/回写见原指令
01B06400  e9031cb2  mov x9, #0x1000000010                  ; 设置 x9 为 #0x1000000010（按指令规定的宽度/位模式）
```

局部伪代码：`将一对寄存器写入内存；地址/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 16. Poker · BGMAddress
RVA `0x1a021b8`；Ghidra VA `0x1b021b8`；原始文件字节 `e0070054`。

```asm
01A02198  d9020039  strb w25, [x22]                        ; 将w25写入内存；地址/回写见原指令
01A0219C  e11f8052  mov w1, #0xff                          ; 设置 w1 为 #0xff（按指令规定的宽度/位模式）
01A021A0  e20314aa  mov x2, x20                            ; 设置 x2 为 x20（按指令规定的宽度/位模式）
01A021A4  ab089494  bl #0x3f04450                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
01A021A8  a80240b9  ldr w8, [x21]                          ; 从内存加载至 w8；地址/扩展/回写见原指令
01A021AC  e0031f2a  mov w0, wzr                            ; 设置 w0 为 wzr（按指令规定的宽度/位模式）
01A021B0  28080034  cbz w8, #0x1a022b4                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
01A021B4  bf0208eb  cmp x21, x8                            ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
01A021B8  e0070054  b.eq #0x1a022b4                        ; [目标] 条件分支；根据条件标志、寄存器零值或指定位跳转
01A021BC  a80208cb  sub x8, x21, x8                        ; x8 = SUB(x21, x8)
01A021C0  09294039  ldrb w9, [x8, #0xa]                    ; 从内存加载至 w9；地址/扩展/回写见原指令
01A021C4  3f010071  cmp w9, #0                             ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
01A021C8  0903979a  csel x9, x24, x23, eq                  ; x9 = CSEL(x24, x23, eq)
01A021CC  290108ab  adds x9, x9, x8                        ; x9 = ADDS(x9, x8)；设置标志位
01A021D0  00070054  b.eq #0x1a022b0                        ; 条件分支；根据条件标志、寄存器零值或指定位跳转
01A021D4  08114079  ldrh w8, [x8, #8]                      ; 从内存加载至 w8；地址/扩展/回写见原指令
01A021D8  7a1601b9  str w26, [x19, #0x114]                 ; 将w26写入内存；地址/回写见原指令
```

局部伪代码：`条件分支；根据条件标志、寄存器零值或指定位跳转`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 17. Poker · EatAllAddress
RVA `0x1f08404`；Ghidra VA `0x2008404`；原始文件字节 `c05d01d0`。

```asm
01F083E4  e10740f9  ldr x1, [sp, #8]                       ; 从内存加载至 x1；地址/扩展/回写见原指令
01F083E8  e4ffff17  b #0x1f08378                           ; 无条件跳转，不能把后续线性字节视为必然执行
01F083EC  fd7bbfa9  stp x29, x30, [sp, #-0x10]!            ; 将一对寄存器写入内存；地址/回写见原指令
01F083F0  fd030091  mov x29, sp                            ; 设置 x29 为 sp（按指令规定的宽度/位模式）
01F083F4  c85d01d0  adrp x8, #0x4ac2000                    ; x8 = PC 相对页地址
01F083F8  085d40f9  ldr x8, [x8, #0xb8]                    ; 从内存加载至 x8；地址/扩展/回写见原指令
01F083FC  08fddf08  ldarb w8, [x8]                         ; 保留真实指令；本注释未对该操作作额外语义推断
01F08400  a8000036  tbz w8, #0, #0x1f08414                 ; 条件分支；根据条件标志、寄存器零值或指定位跳转
01F08404  c05d01d0  adrp x0, #0x4ac2000                    ; [目标] x0 = PC 相对页地址
01F08408  005840f9  ldr x0, [x0, #0xb0]                    ; 从内存加载至 x0；地址/扩展/回写见原指令
01F0840C  fd7bc1a8  ldp x29, x30, [sp], #0x10              ; 从内存加载一对寄存器；地址/扩展/回写见原指令
01F08410  c0035fd6  ret                                    ; 返回至链接寄存器指定的地址
01F08414  c05d01d0  adrp x0, #0x4ac2000                    ; x0 = PC 相对页地址
01F08418  005c40f9  ldr x0, [x0, #0xb8]                    ; 从内存加载至 x0；地址/扩展/回写见原指令
01F0841C  2deb7f94  bl #0x3f030d0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
01F08420  20ffff34  cbz w0, #0x1f08404                     ; 条件分支；根据条件标志、寄存器零值或指定位跳转
01F08424  c85d01d0  adrp x8, #0x4ac2000                    ; x8 = PC 相对页地址
```

局部伪代码：`x0 = PC 相对页地址`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 18. Poker · EatAll2Address
RVA `0x1565340`；Ghidra VA `0x1665340`；原始文件字节 `08411e91`。

```asm
01565320  f30b00f9  str x19, [sp, #0x10]                   ; 将x19写入内存；地址/回写见原指令
01565324  fd030091  mov x29, sp                            ; 设置 x29 为 sp（按指令规定的宽度/位模式）
01565328  082402d0  adrp x8, #0x59e7000                    ; x8 = PC 相对页地址
0156532C  08011891  add x8, x8, #0x600                     ; x8 = ADD(x8, #0x600)
01565330  130140f9  ldr x19, [x8]                          ; 从内存加载至 x19；地址/扩展/回写见原指令
01565334  730200b4  cbz x19, #0x1565380                    ; 条件分支；根据条件标志、寄存器零值或指定位跳转
01565338  600100b5  cbnz x0, #0x1565364                    ; 条件分支；根据条件标志、寄存器零值或指定位跳转
0156533C  082402d0  adrp x8, #0x59e7000                    ; x8 = PC 相对页地址
01565340  08411e91  add x8, x8, #0x790                     ; [目标] x8 = ADD(x8, #0x790)
01565344  080140f9  ldr x8, [x8]                           ; 从内存加载至 x8；地址/扩展/回写见原指令
01565348  006940b9  ldr w0, [x8, #0x68]                    ; 从内存加载至 w0；地址/扩展/回写见原指令
0156534C  1578a694  bl #0x3f033a0                          ; 调用直接目标；LR 保存返回地址，返回值通常在 x0/w0 或浮点寄存器
01565350  08a00291  add x8, x0, #0xa8                      ; x8 = ADD(x0, #0xa8)
01565354  69220091  add x9, x19, #8                        ; x9 = ADD(x19, #8)
01565358  1f0000f1  cmp x0, #0                             ; 比较/测试操作数，更新条件标志（条件比较遵循原指令）
0156535C  2801889a  csel x8, x9, x8, eq                    ; x8 = CSEL(x9, x8, eq)
01565360  000140f9  ldr x0, [x8]                           ; 从内存加载至 x0；地址/扩展/回写见原指令
```

局部伪代码：`x8 = ADD(x8, #0x790)`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 19. Poker · MagicAddress
RVA `0x8afeb8`；Ghidra VA `0x9afeb8`；原始文件字节 `c082c23c`。

```asm
008AFE98  c01640bd  ldr s0, [x22, #0x14]                   ; 从内存加载至 s0；地址/扩展/回写见原指令
008AFE9C  7332839a  csel x19, x19, x3, lo                  ; x19 = CSEL(x19, x3, lo)
008AFEA0  600200bd  str s0, [x19]                          ; 将s0写入内存；地址/回写见原指令
008AFEA4  93e30291  add x19, x28, #0xb8                    ; x19 = ADD(x28, #0xb8)
008AFEA8  c082c13c  ldur q0, [x22, #0x18]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFEAC  73328a9a  csel x19, x19, x10, lo                 ; x19 = CSEL(x19, x10, lo)
008AFEB0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFEB4  93230391  add x19, x28, #0xc8                    ; x19 = ADD(x28, #0xc8)
008AFEB8  c082c23c  ldur q0, [x22, #0x28]                  ; [目标] 从内存加载至 q0；地址/扩展/回写见原指令
008AFEBC  73328d9a  csel x19, x19, x13, lo                 ; x19 = CSEL(x19, x13, lo)
008AFEC0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFEC4  93630391  add x19, x28, #0xd8                    ; x19 = ADD(x28, #0xd8)
008AFEC8  c082c33c  ldur q0, [x22, #0x38]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFECC  73328e9a  csel x19, x19, x14, lo                 ; x19 = CSEL(x19, x14, lo)
008AFED0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFED4  93a30391  add x19, x28, #0xe8                    ; x19 = ADD(x28, #0xe8)
008AFED8  c082c43c  ldur q0, [x22, #0x48]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
```

局部伪代码：`从内存加载至 q0；地址/扩展/回写见原指令`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。

## 20. Poker · MagicAddress+0x14
RVA `0x8afecc`；Ghidra VA `0x9afecc`；原始文件字节 `73328e9a`。

```asm
008AFEAC  73328a9a  csel x19, x19, x10, lo                 ; x19 = CSEL(x19, x10, lo)
008AFEB0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFEB4  93230391  add x19, x28, #0xc8                    ; x19 = ADD(x28, #0xc8)
008AFEB8  c082c23c  ldur q0, [x22, #0x28]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFEBC  73328d9a  csel x19, x19, x13, lo                 ; x19 = CSEL(x19, x13, lo)
008AFEC0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFEC4  93630391  add x19, x28, #0xd8                    ; x19 = ADD(x28, #0xd8)
008AFEC8  c082c33c  ldur q0, [x22, #0x38]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFECC  73328e9a  csel x19, x19, x14, lo                 ; [目标] x19 = CSEL(x19, x14, lo)
008AFED0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFED4  93a30391  add x19, x28, #0xe8                    ; x19 = ADD(x28, #0xe8)
008AFED8  c082c43c  ldur q0, [x22, #0x48]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFEDC  7332909a  csel x19, x19, x16, lo                 ; x19 = CSEL(x19, x16, lo)
008AFEE0  6002803d  str q0, [x19]                          ; 将q0写入内存；地址/回写见原指令
008AFEE4  93e30391  add x19, x28, #0xf8                    ; x19 = ADD(x28, #0xf8)
008AFEE8  c082c53c  ldur q0, [x22, #0x58]                  ; 从内存加载至 q0；地址/扩展/回写见原指令
008AFEEC  7332919a  csel x19, x19, x17, lo                 ; x19 = CSEL(x19, x17, lo)
```

局部伪代码：`x19 = CSEL(x19, x14, lo)`。该指令只证明当前机器操作，不能从旧工具名称反推其新版本功能。


---

# Heap → Main 根指针与存档结构

> [!warning] 本轮没有运行时 heap 镜像，没有找到已验证的 GSavePlayer/GSaveNpc Main 根。所有 54 条固定 Heap 记录仍是历史候选；下面的分组关系是源码算术，不是 Native 新指针。

## 1. 两种不同的地址模型
```text
A = heap_base + historical_offset
B = P(P(main_base + root_rva) + offset1) + final_offset
```
当 A 与 B 在同一时刻、同一 Build ID、同一玩家/岛屿状态下相等，并且 B 在重启和存档加载后仍指向正确对象，才可认为动态链替代固定偏移。单纯 `A-main_base` 不是 main 指针。

## 2. 结构关系计算（工具端证据）
|结构|历史基址|字段/步长|追踪目标|
|---|---|---|---|
|玩家|`0xB2783C78`|玩家步长 `0x131F70`|候选保存管理器、玩家对象选择函数|
|背包|`0xB27BB758`|相对玩家起点 `+0x37AE0`|背包槽数组与容量检查|
|村民|`0xB104B4E0`|`0x13230`|村民表和有效槽位检查|
|房屋|`0xB14CD0E0`|`0x12E8`|房屋表及 owner +0x1C4|
|关系|村民记录内|`0x5F0`, friendship +0x46|NpcMemory 访问器|
|地图|`0xB127A8C0`|地图层 `+0xC000`, `+0x78000`|GSaveLand / FieldItem 相关对象候选|
|主备份|村民/房屋两块|差 `0x9B0EB0`|序列化、加载或镜像复制链|

```cpp
// 外部工具公式，不是 Native 反编译结果。
addr_inventory = H + 0xB27BB758 + player_index * 0x131F70;
addr_friendship = H + 0xB104B4E0 + npc_index * 0x13230
                  + player_index * 0x5F0 + 0x46;
```
R92 的原版 `EventFlagsNpcMemoryParam` 存在 `Friendship` 定义，字段上限 255，与工具 8-bit 字段口径相容；**不等价于证明 +0x46 是 Native 存储位置**。`NpcSave`、`NpcMemory`、`NpcTemp`、`PlayerActivity` 四种作用域应分别追踪。来源：[R92 原始定义与保存证据](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/docs/25-R92-Villager-Encyclopedia-Recruitment-Save-Evidence.md)。

## 3. 追踪顺序

1. **静态侧**：在认证 ELF 中筛选数组步长 `0x131F70 / 0x13230 / 0x5F0 / 0x12E8` 的 MOVZ/MOVK 组合或 MADD、移位加法，追上游对象。单个常数命中不够；保存/加载函数、索引范围、访问宽度、调用者至少两类独立证据。
2. **字段侧**：从 R96/R102–R104 好感度、赠礼回调，追 `LDRB/STRB` 或通用事件标志访问器、内联位提取；确认 `+0x46` 是否真实关系结构的直接偏移。不要漏掉乘法优化、非直接字节字段或序列化描述符。
3. **运行时侧**：在本人离线测试的只读内存快照中确定实际目标地址，搜索 main RW 段中保存该地址或对象基址的 64 位槽；若无，反向搜索已映射 Heap 中指向对象的槽位，再找 Main 持有者。每条链记录 dereference 和 final add，限制深度、偏移范围和分支数。
4. **交叉验证**：确认槽的 RVA 对应 R100/Ghidra 交叉引用，至少两个重启/加载快照上复算指针。Main 静态表可能只指向 Heap 分配器而非保存对象本身；不得把分配器当作 GSavePlayer 根。

### 3.1 本轮新增的可用线索
- `FUN_0387e200` 的 `PTR_DAT_04bb2698`、`PTR_DAT_04bb3350` 与 TLS 分配器路径确实涉及 heap 分配，但目前无证据证明它们管理玩家、村民或地图存档。
- `DAT_0536c708`、`DAT_05ae6a60` 已有对象注册证据，属于可供运行时验证的 Main 根，**不等于**上面的固定 Heap 保存地址。
- `FUN_00708bb8` 能访问三维坐标消费者，坐标对象与保存对象可能不同；不可直接用坐标根替代 GSavePlayer 根。

## 4. 完整 Heap 候选账本
|名称|Heap 相对偏移|源码|Native Main 根|
|---|---|---|---|
|inventory|`0xB27BB758`|both|未验证|
|slot21|`0xB27BB6A0`|Poker|未验证|
|wallet|`0xB27BB810`|SysBot|未验证|
|miles|`0xB27961C8`|SysBot|未验证|
|bank|`0xB27E8D2C`|SysBot|未验证|
|player_start|`0xB2783C78`|SysBot|未验证|
|player_id|`0xB278FDB0`|SysBot|未验证|
|player_profile|`0xB27964A8`|SysBot|未验证|
|town_name_poker|`0xB278FCF8`|Poker default|未验证|
|player_name|`0xB278FD18`|SysBot|未验证|
|manpu|`0xB27CE40C`|both reaction|未验证|
|home_storage|`0xB27BB81C`|Poker|未验证|
|recycling|`0xB19C40D0`|Poker|未验证|
|recycling21|`0xB19C4170`|Poker|未验证|
|turnip|`0xB14DBB30`|both|未验证|
|turnip_sell|`0xB14DBB3C`|Poker|未验证|
|villager|`0xB104B4E0`|both|未验证|
|villager_house|`0xB14CD0E0`|both|未验证|
|villager_backup|`0xB19FC390`|SysBot|未验证|
|house_backup|`0xB1E7DF90`|SysBot|未验证|
|map_base|`0xB127A8C0`|both|未验证|
|field_layer1|`0xB12868C0`|SysBot|未验证|
|field_layer2|`0xB12F28C0`|SysBot|未验证|
|map_activate|`0xB13528C0`|Poker|未验证|
|custom_design|`0xB137AF08`|Poker|未验证|
|design_zero|`0xB122ED18`|Poker|未验证|
|terrain|`0xB1355EC0`|both|未验证|
|acre|`0xB137AE6C`|both|未验证|
|building|`0xB137AAC0`|both|未验证|
|airport_color|`0xB15C1180`|Poker|未验证|
|weather_seed|`0xB122EAD8`|Poker|未验证|
|coordinate_legacy|`0x3E7B1288`|Poker|未验证|
|visitor_name|`0xBA0229E0`|Poker|未验证|
|visitor_island|`0xBA0229C4`|Poker|未验证|
|visitor_list_fixed|`0xBA0228C8`|Poker|未验证|
|dodo|`0xAC1B164`|both|未验证|
|online|`0x949A748`|both|未验证|
|text_speed|`0xBD9B9FC`|both|未验证|
|time|`0xBD92B00`|both|未验证|
|saving|`0x45C465AC`|Poker|未验证|
|poki|`0xB449E6C8`|SysBot|未验证|
|mystery_villager|`0x38CEAEA4`|Poker|未验证|
|mystery_species|`0x38CEAFB4`|Poker|未验证|
|insect|`0x406A8F98`|Poker|未验证|
|fish_river|`0x406E8728`|Poker|未验证|
|fish_sea|`0x406FE908`|Poker|未验证|
|sea_creature|`0x4066AC2C`|Poker|未验证|
|stamina|`0xB9763A00`|Poker|未验证|
|max_speed|`0xBFB4F34`|Poker|未验证|
|jump_distance|`0xBFB5564`|Poker|未验证|
|dive_time|`0xBFB5BF4`|Poker|未验证|
|swim_speed|`0xBFB6104`|Poker|未验证|
|dive_speed|`0xBFB6254`|Poker|未验证|
|town_name_sysbot|`0xB278FCFC`|SysBot getTownNameAddress|未验证|

## 5. 建议记录格式
```json
{
  "build_id": null,
  "elf_sha256": "145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664",
  "name": "inventory",
  "historical_heap_offset": "0xB27BB758",
  "main_root_rva": null,
  "chain_offsets": null,
  "native_function_rva": null,
  "runtime_verified": false,
  "evidence": ["source_only"]
}
```
使用 `Scripts/heap_to_main.py` 可在已有的离线内存快照上生成直接 Main 槽候选。它不连接游戏、不写内存、不获取访客个人数据；它仅找直接指针和内含偏移，不能代替完整多级追踪。

### 本地只读命令示例
```powershell
py Scripts/heap_to_main.py --main-rw-dump main-rw.bin --dump-base 0xMAIN_RW_ABSOLUTE --main-base 0xMAIN_BASE --heap-base 0xHEAP_BASE --build-id YOUR_BUILD_ID --out heap-main-candidates.json
```
上述 `0xMAIN_*` / `0xHEAP_BASE` 是占位符，需换成真实十六进制地址，Build ID 同理。输入为已采集的 Main RW 映射的连续字节文件，不是 ELF 文件。脚本只扫 8 字节对齐槽位并验证槽位位于认证 ELF 的 RW 内存段；默认只接受与历史目标相差 0..0x400 的候选，不能覆盖任意多级指针。已通过合成快照的 direct+offset 测试；未使用游戏实际快照。


---

# R100 重定位与下一阶段验收

## 1. 已确认的 R100 数据库接口
来源：[R100 脚本](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/Scripts/acnh303_r100_relocation_index.py)、[R100 workflow](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/.github/workflows/acnh303-r100-relocation-index.yml)。R100 脚本要求 380,793 条重定位，生成 `acnh303_relocations.sqlite3`、`factory_xrefs.json`、`init_review.json` 等；SQLite 中 `relocations` 含 slot_va、slot_ghidra、target_va、target_ghidra、table_name 等列。元数据包含 Build ID、NSO/ELF SHA、Ghidra slide。数据库真实二进制本轮未取得，不能宣称已经执行对四个根槽的 R100 全量 join。

```sql
SELECT * FROM metadata;
SELECT slot_va, slot_ghidra, target_va, target_ghidra, table_name, type
FROM relocations
WHERE target_va IN (0x4BFAE30, 0x5255A60, 0x526C708, 0x59E6A60)
   OR slot_va IN (0x4BFAE30, 0x5255A60, 0x526C708, 0x526C710, 0x59E6A60)
ORDER BY slot_va;
```
还要反向追踪命中 relocation slot 的 xrefs；静态重定位可能指向 BSS 槽地址，而不会把运行时 Heap 对象地址写入 ELF 文件。无匹配不能说明该根无效。

## 2. 使用本地真实 ELF 提取完整根槽上下文

在 ACNH_Resources 根目录（Windows PowerShell）：
```powershell
py -m pip install capstone==5.0.6
py Scripts/acnh303_r100_relocation_index.py --root . --out artifacts/acnh303-r100-native
py D:/Notes/ACNH-3.0.3-Obsidian/Scripts/trace_native.py --root . --out artifacts/native-trace --r100 artifacts/acnh303-r100-native/acnh303_relocations.sqlite3
```
第二条为仓库已有脚本，须具备原始 NSO、ELF 和其依赖资源。第三条为本笔记附带脚本；实际执行时替换 `D:/Notes`。它严格校验 ELF SHA，按 PT_LOAD 提取根槽写入/读取附近实际原始指令，输出 `native-windows.md` 和 `r100-roots.json`（仅传入 DB 时）。Ghidra `FunctionManager.getFunctionContaining` 才可恢复函数准确归属；另附 `NativeRootTrace.java`，可在已导入、地址 slide 为 0x100000 的 Ghidra 工程中运行，输出完整函数体、交叉引用和 Ghidra C。Java 脚本未在本轮 Ghidra 环境执行。

## 3. 已执行的 Ghidra 导出核对

|Ghidra 函数|RVA|原始证据|当前结论|
|---|---|---|---|
|FUN_01d3e72c|0x1C3E72C|全局赋值、七个状态字符串|初始化语义已交叉验证；清理边界待定|
|FUN_0387e200|0x377E200|全局赋值、四类堆分配|构造/注册语义已交叉验证；注销待定|
|FUN_00708bb8|0x608BB8|根读取、Vec3 浮点运算|坐标消费已交叉验证；历史链未验|
|FUN_006d5fb0|0x5D5FB0|根 +0x88、mutex、容器搜索|管理对象消费者已交叉验证|
|FUN_00a818cc|0x9818CC|nn::time/nn::os 调用|时钟更新字段已交叉验证|
|FUN_0231910c|0x221910C|对象状态字段与分支|状态选择逻辑已交叉验证|

## 4. 后续优先级与可验收条件
|优先级|任务|本轮状态|验收|
|---|---|---|---|
|P0|0x526C708 初始化/清理|注册已证实；相邻 +8 为代码标签|清零函数准确边界、调用者、相邻 +0x10 字段语义|
|P0|0x59E6A60 构造/注销|构造已证实、分配尺寸明确|四条赋值/清零对应的函数体及销毁路径|
|P0|完整坐标链|已找到真实三维坐标消费者|逐跳偏移、实际对象布局及运行时读取|
|P0|R100 全局对象|数据库接口已确认，实际 join 未执行|重定位原始记录及槽→消费者索引|
|P0|GSavePlayer Main 根|未找到|动态根、玩家步长、背包字段与两次快照|
|P0|GSaveNpc Main 根|未找到|动态根、村民/关系索引与保存加载链|
|P0|Friendship +0x46|原始定义 + 源码字段|真实 Native LDRB/STRB 或通用访问器及运行时字段|
|P1|12 条不匹配地址|全部原字已验收|3.0.2 ELF、函数级 CFG 和交叉引用映射；没有旧 ELF 不输出迁移地址|
|P1|聊天结构|118 读候选|输入缓冲对象、+0x40、UTF16 单元长度|
|P1|生物生成表|仅固定 Heap 候选|原始参数、Native 加载器、容器和记录步长|
|P1|版本迁移规则|方法设计|真实双版本 ELF 和 Build ID，结构/函数签名交叉验证|
|P2|统一指针数据库|附源 JSON 与格式建议|版本键、证据类型、运行时状态、消费者、完整原始字节|

## 5. 原字迁移策略
1. 旧 ELF 的函数体、原指令及调用关系必须先认证；匹配常量不够。
2. 对旧函数建立 CFG、调用者/被调者、字符串、对象成员偏移和非地址相关指令签名。
3. 在新版本候选函数中交叉比较结构与控制流，排除同原字的无关函数。
4. 只读验证原始字节和功能语义；不根据单条命中自动更新旧补丁。

## 6. 未完成事项
本轮没有完整 canonical ELF 本地副本，不能把根槽引用之间缺失的机器指令编造为逐行反汇编。提供的 17 行 Main 窗口来自实际成功 CI；根槽 977 条引用来自同一实际 JSON；六个 Native 函数的局部伪代码来自已读取 Ghidra C 导出。后续脚本用于补充真实连续代码段与准确函数边界。未执行实机读取和写入。


---

# 完整根槽引用逐行索引

每行来自审计 JSON；原始机器字节在该引用列表中未保存。地址形成记录不是一次额外内存访问。根槽名称是工具命名。以下为所有 977 条，未填充缺失指令；连续反汇编请运行 `trace_native.py`。

## 玩家坐标相关 `0x4bfae30`

|指令 RVA|Ghidra VA|类型|实际指令|局部注释|
|---|---|---|---|---|
|`0x5cb598`|`0x6cb598`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x5cb59c`|`0x6cb59c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x608bcc`|`0x708bcc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x608bd0`|`0x708bd0`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x671810`|`0x771810`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x671814`|`0x771814`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x7cc5f4`|`0x8cc5f4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x7cc600`|`0x8cc600`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x7ccf58`|`0x8ccf58`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x7ccf5c`|`0x8ccf5c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x8373b8`|`0x9373b8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x8373bc`|`0x9373bc`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x838c50`|`0x938c50`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x838c54`|`0x938c54`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x838d7c`|`0x938d7c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x838d80`|`0x938d80`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83e864`|`0x93e864`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83e868`|`0x93e868`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83e8e4`|`0x93e8e4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83e8e8`|`0x93e8e8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83ec04`|`0x93ec04`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83ec08`|`0x93ec08`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83ecb0`|`0x93ecb0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83ecb4`|`0x93ecb4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83efd4`|`0x93efd4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83efdc`|`0x93efdc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83f068`|`0x93f068`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83f070`|`0x93f070`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x83f1a8`|`0x93f1a8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x83f1ac`|`0x93f1ac`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x848f04`|`0x948f04`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x848f08`|`0x948f08`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x85aea0`|`0x95aea0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x85aea4`|`0x95aea4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x860acc`|`0x960acc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x860ad0`|`0x960ad0`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x860b84`|`0x960b84`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x860b88`|`0x960b88`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x861590`|`0x961590`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x861594`|`0x961594`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x86164c`|`0x96164c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x861650`|`0x961650`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x861e04`|`0x961e04`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x861e08`|`0x961e08`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x8654ec`|`0x9654ec`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x8654f0`|`0x9654f0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x865aa4`|`0x965aa4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x865aa8`|`0x965aa8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x865fb4`|`0x965fb4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x865fb8`|`0x965fb8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x86657c`|`0x96657c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x866580`|`0x966580`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x875b74`|`0x975b74`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x875b78`|`0x975b78`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x875c04`|`0x975c04`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x875c08`|`0x975c08`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x875c94`|`0x975c94`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x875c98`|`0x975c98`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x87637c`|`0x97637c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x876380`|`0x976380`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x876838`|`0x976838`|address|`add x21, x21, #0xe30`|x21 = ADD(x21, #0xe30)|
|`0x876840`|`0x976840`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x876c3c`|`0x976c3c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x876c40`|`0x976c40`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x876ce4`|`0x976ce4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x876ce8`|`0x976ce8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x876dec`|`0x976dec`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x876df0`|`0x976df0`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x8770ec`|`0x9770ec`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x8770f0`|`0x9770f0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x878b9c`|`0x978b9c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x878ba0`|`0x978ba0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x878be4`|`0x978be4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x878be8`|`0x978be8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87a504`|`0x97a504`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87a508`|`0x97a508`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87a904`|`0x97a904`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87a908`|`0x97a908`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87a944`|`0x97a944`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87a948`|`0x97a948`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87aa10`|`0x97aa10`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87aa14`|`0x97aa14`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87ab74`|`0x97ab74`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87ab78`|`0x97ab78`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87b474`|`0x97b474`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x87b478`|`0x97b478`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87be44`|`0x97be44`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87be48`|`0x97be48`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x87ce64`|`0x97ce64`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87ce68`|`0x97ce68`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87cff4`|`0x97cff4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87cff8`|`0x97cff8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87d6c4`|`0x97d6c4`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x87d6c8`|`0x97d6c8`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x87d8a4`|`0x97d8a4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87d8a8`|`0x97d8a8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87d8e4`|`0x97d8e4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x87d8e8`|`0x97d8e8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x87e274`|`0x97e274`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x87e278`|`0x97e278`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x88a4c8`|`0x98a4c8`|read_candidate|`ldr x0, [x20, #0xe30]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x88a5ec`|`0x98a5ec`|read_candidate|`ldr x20, [x22, #0xe30]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0xbaee1c`|`0xcaee1c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0xbaee20`|`0xcaee20`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0xf2513c`|`0x102513c`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0xf25144`|`0x1025144`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x10cf644`|`0x11cf644`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x10cf6cc`|`0x11cf6cc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x10cf6e8`|`0x11cf6e8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x10deb34`|`0x11deb34`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x10deb50`|`0x11deb50`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x112b5e4`|`0x122b5e4`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x112b604`|`0x122b604`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x114fca8`|`0x124fca8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x114fcb4`|`0x124fcb4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x11fc808`|`0x12fc808`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x11fc80c`|`0x12fc80c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x11fc988`|`0x12fc988`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x11fc98c`|`0x12fc98c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x121db24`|`0x131db24`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x121db28`|`0x131db28`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x128ddb0`|`0x138ddb0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x128ddb4`|`0x138ddb4`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x128e2c0`|`0x138e2c0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x128e2c4`|`0x138e2c4`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x128e364`|`0x138e364`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x128e368`|`0x138e368`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x12b7384`|`0x13b7384`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x12b7390`|`0x13b7390`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x12d37b4`|`0x13d37b4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x12d37bc`|`0x13d37bc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x12d4b58`|`0x13d4b58`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x12d4b80`|`0x13d4b80`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x12d4d68`|`0x13d4d68`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x12d4d88`|`0x13d4d88`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x13ab9f4`|`0x14ab9f4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x13ab9f8`|`0x14ab9f8`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x13ac084`|`0x14ac084`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x13ac088`|`0x14ac088`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x13ac384`|`0x14ac384`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x13ac388`|`0x14ac388`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x13aca14`|`0x14aca14`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x13aca18`|`0x14aca18`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x141162c`|`0x151162c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1411630`|`0x1511630`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x146a5cc`|`0x156a5cc`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x146a5d0`|`0x156a5d0`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x14b97e8`|`0x15b97e8`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x14b97ec`|`0x15b97ec`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x14cb964`|`0x15cb964`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x14cb968`|`0x15cb968`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x14cb9cc`|`0x15cb9cc`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x14cb9d4`|`0x15cb9d4`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x15768ac`|`0x16768ac`|address|`add x25, x25, #0xe30`|x25 = ADD(x25, #0xe30)|
|`0x15768b0`|`0x16768b0`|read_candidate|`ldr x12, [x25]`|从内存加载至 x12；地址/扩展/回写见原指令|
|`0x1576c38`|`0x1676c38`|address|`add x25, x25, #0xe30`|x25 = ADD(x25, #0xe30)|
|`0x15e807c`|`0x16e807c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x15e8080`|`0x16e8080`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x15e82cc`|`0x16e82cc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x15e82d0`|`0x16e82d0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x15e9c2c`|`0x16e9c2c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x15e9c30`|`0x16e9c30`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x15eafb4`|`0x16eafb4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x15eafb8`|`0x16eafb8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x15eb158`|`0x16eb158`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x15eb15c`|`0x16eb15c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x164f6e4`|`0x174f6e4`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x164f6e8`|`0x174f6e8`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x164f770`|`0x174f770`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x164f774`|`0x174f774`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x16eacf4`|`0x17eacf4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x16eacf8`|`0x17eacf8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17130cc`|`0x18130cc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17130d0`|`0x18130d0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17132bc`|`0x18132bc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17132c0`|`0x18132c0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1716960`|`0x1816960`|address|`add x23, x23, #0xe30`|x23 = ADD(x23, #0xe30)|
|`0x1721074`|`0x1821074`|address|`add x21, x21, #0xe30`|x21 = ADD(x21, #0xe30)|
|`0x1721078`|`0x1821078`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x172e7b8`|`0x182e7b8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x172e7bc`|`0x182e7bc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17324f8`|`0x18324f8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17324fc`|`0x18324fc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17348f8`|`0x18348f8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1734910`|`0x1834910`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17356e0`|`0x18356e0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17356e4`|`0x18356e4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1741564`|`0x1841564`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1741568`|`0x1841568`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1741f40`|`0x1841f40`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1741f44`|`0x1841f44`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1742d94`|`0x1842d94`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1742d98`|`0x1842d98`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1744438`|`0x1844438`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x174443c`|`0x184443c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1744b58`|`0x1844b58`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1744b5c`|`0x1844b5c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1745844`|`0x1845844`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1745848`|`0x1845848`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1752590`|`0x1852590`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1752594`|`0x1852594`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1753d0c`|`0x1853d0c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1753d10`|`0x1853d10`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x175ab3c`|`0x185ab3c`|address|`add x22, x22, #0xe30`|x22 = ADD(x22, #0xe30)|
|`0x175ab40`|`0x185ab40`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1762538`|`0x1862538`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x176253c`|`0x186253c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17633f8`|`0x18633f8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17633fc`|`0x18633fc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1766164`|`0x1866164`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1766168`|`0x1866168`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1777318`|`0x1877318`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x177731c`|`0x187731c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1777800`|`0x1877800`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1777808`|`0x1877808`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1778cf0`|`0x1878cf0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1778cf4`|`0x1878cf4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17793c0`|`0x18793c0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x17793c4`|`0x18793c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1779abc`|`0x1879abc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1779ac0`|`0x1879ac0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x177f6c4`|`0x187f6c4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x177f6c8`|`0x187f6c8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x17bcf00`|`0x18bcf00`|address|`add x22, x22, #0xe30`|x22 = ADD(x22, #0xe30)|
|`0x17bcf04`|`0x18bcf04`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x191a7b8`|`0x1a1a7b8`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x191a7bc`|`0x1a1a7bc`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x191aa78`|`0x1a1aa78`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x191aa7c`|`0x1a1aa7c`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x191b040`|`0x1a1b040`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x191b044`|`0x1a1b044`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x191b2ec`|`0x1a1b2ec`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x191b2f0`|`0x1a1b2f0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x191d8e4`|`0x1a1d8e4`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x191d8e8`|`0x1a1d8e8`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x191d974`|`0x1a1d974`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x191d978`|`0x1a1d978`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x191dd8c`|`0x1a1dd8c`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x191dd90`|`0x1a1dd90`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1de0360`|`0x1ee0360`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1de0364`|`0x1ee0364`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ded530`|`0x1eed530`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1ded534`|`0x1eed534`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1e27464`|`0x1f27464`|address|`add x10, x10, #0xe30`|x10 = ADD(x10, #0xe30)|
|`0x1e27490`|`0x1f27490`|read_candidate|`ldr x10, [x10]`|从内存加载至 x10；地址/扩展/回写见原指令|
|`0x1e29068`|`0x1f29068`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1e2906c`|`0x1f2906c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1e7a7a0`|`0x1f7a7a0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1e7a7a4`|`0x1f7a7a4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1e93e44`|`0x1f93e44`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x1e93e48`|`0x1f93e48`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2044004`|`0x2144004`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2044008`|`0x2144008`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x20447c0`|`0x21447c0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x20447c4`|`0x21447c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2044ad0`|`0x2144ad0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2044ad4`|`0x2144ad4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2044db8`|`0x2144db8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2044dbc`|`0x2144dbc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2045bac`|`0x2145bac`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2045bb0`|`0x2145bb0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x20f4c74`|`0x21f4c74`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x20f4c78`|`0x21f4c78`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x20feb40`|`0x21feb40`|address|`add x13, x13, #0xe30`|x13 = ADD(x13, #0xe30)|
|`0x20feb64`|`0x21feb64`|read_candidate|`ldr x13, [x13]`|从内存加载至 x13；地址/扩展/回写见原指令|
|`0x20fef14`|`0x21fef14`|address|`add x10, x10, #0xe30`|x10 = ADD(x10, #0xe30)|
|`0x20fef44`|`0x21fef44`|read_candidate|`ldr x10, [x10]`|从内存加载至 x10；地址/扩展/回写见原指令|
|`0x20ff680`|`0x21ff680`|address|`add x11, x11, #0xe30`|x11 = ADD(x11, #0xe30)|
|`0x20ff6b0`|`0x21ff6b0`|read_candidate|`ldr x11, [x11]`|从内存加载至 x11；地址/扩展/回写见原指令|
|`0x211cf50`|`0x221cf50`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x211cf54`|`0x221cf54`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x212faac`|`0x222faac`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x212fab0`|`0x222fab0`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x212feb8`|`0x222feb8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x212febc`|`0x222febc`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x214bbf4`|`0x224bbf4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x214bbfc`|`0x224bbfc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x214c7b8`|`0x224c7b8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x214c7bc`|`0x224c7bc`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x214cc18`|`0x224cc18`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x214cc1c`|`0x224cc1c`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x2186c44`|`0x2286c44`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2186c4c`|`0x2286c4c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2194794`|`0x2294794`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2194798`|`0x2294798`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21a6708`|`0x22a6708`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21a670c`|`0x22a670c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21b78e0`|`0x22b78e0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21b78e4`|`0x22b78e4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21bccd4`|`0x22bccd4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21bccd8`|`0x22bccd8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21bd920`|`0x22bd920`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21bd92c`|`0x22bd92c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21ebf50`|`0x22ebf50`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21ebf54`|`0x22ebf54`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x21ef7c4`|`0x22ef7c4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x21ef7c8`|`0x22ef7c8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x22ce8b4`|`0x23ce8b4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x22ce8b8`|`0x23ce8b8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2317588`|`0x2417588`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x231758c`|`0x241758c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x23b3520`|`0x24b3520`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x23b3524`|`0x24b3524`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x23d25d4`|`0x24d25d4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x23d25d8`|`0x24d25d8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x23e4ff0`|`0x24e4ff0`|address|`add x23, x23, #0xe30`|x23 = ADD(x23, #0xe30)|
|`0x23e4ff4`|`0x24e4ff4`|read_candidate|`ldr x8, [x23]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x23e50f0`|`0x24e50f0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x23e50f4`|`0x24e50f4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2808190`|`0x2908190`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2808194`|`0x2908194`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x2965210`|`0x2a65210`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2965214`|`0x2a65214`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x2967b10`|`0x2a67b10`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2967b14`|`0x2a67b14`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2969490`|`0x2a69490`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x29694a0`|`0x2a694a0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x296b9ac`|`0x2a6b9ac`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x296b9b0`|`0x2a6b9b0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x298b640`|`0x2a8b640`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x298b644`|`0x2a8b644`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a12f88`|`0x2b12f88`|address|`add x24, x24, #0xe30`|x24 = ADD(x24, #0xe30)|
|`0x2a12f8c`|`0x2b12f8c`|read_candidate|`ldr x8, [x24]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a26048`|`0x2b26048`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2a2604c`|`0x2b2604c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a45ea8`|`0x2b45ea8`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2a45eac`|`0x2b45eac`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a83ed4`|`0x2b83ed4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2a83ed8`|`0x2b83ed8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a84030`|`0x2b84030`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2a84034`|`0x2b84034`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a86154`|`0x2b86154`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x2a86158`|`0x2b86158`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2a874b0`|`0x2b874b0`|address|`add x9, x9, #0xe30`|x9 = ADD(x9, #0xe30)|
|`0x2a874b4`|`0x2b874b4`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x34aa550`|`0x35aa550`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x34aa554`|`0x35aa554`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x34aeb94`|`0x35aeb94`|address|`add x20, x20, #0xe30`|x20 = ADD(x20, #0xe30)|
|`0x34aeb98`|`0x35aeb98`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x36c4bdc`|`0x37c4bdc`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x36c4be0`|`0x37c4be0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x36cdfc4`|`0x37cdfc4`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x36cdfc8`|`0x37cdfc8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x36f7a28`|`0x37f7a28`|address|`add x26, x26, #0xe30`|x26 = ADD(x26, #0xe30)|
|`0x36f7a2c`|`0x37f7a2c`|read_candidate|`ldr x8, [x26]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x370263c`|`0x380263c`|address|`add x26, x26, #0xe30`|x26 = ADD(x26, #0xe30)|
|`0x3702dcc`|`0x3802dcc`|address|`add x22, x22, #0xe30`|x22 = ADD(x22, #0xe30)|
|`0x3702dd0`|`0x3802dd0`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37202c0`|`0x38202c0`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x37202c4`|`0x38202c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3727700`|`0x3827700`|address|`add x8, x8, #0xe30`|x8 = ADD(x8, #0xe30)|
|`0x3727704`|`0x3827704`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|

## 聊天相关 `0x5255a60`

|指令 RVA|Ghidra VA|类型|实际指令|局部注释|
|---|---|---|---|---|
|`0x2b1a2d4`|`0x2c1a2d4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2b1a2d8`|`0x2c1a2d8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2b1d7dc`|`0x2c1d7dc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2b1d7e0`|`0x2c1d7e0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2b1da64`|`0x2c1da64`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2b1da68`|`0x2c1da68`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2b77d54`|`0x2c77d54`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2b77d58`|`0x2c77d58`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2bf2414`|`0x2cf2414`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x2bf2418`|`0x2cf2418`|read_candidate|`ldr x21, [x20]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x2ca7914`|`0x2da7914`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ca7918`|`0x2da7918`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x2ca8184`|`0x2da8184`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ca8188`|`0x2da8188`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2ca829c`|`0x2da829c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ca82a0`|`0x2da82a0`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x2d4e070`|`0x2e4e070`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2d4e074`|`0x2e4e074`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2d4e140`|`0x2e4e140`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x2d4e144`|`0x2e4e144`|read_candidate|`ldr x21, [x20]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x2db6644`|`0x2eb6644`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x2db6648`|`0x2eb6648`|read_candidate|`ldr x21, [x20]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x2de0274`|`0x2ee0274`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2de0278`|`0x2ee0278`|read_candidate|`ldr x23, [x8]`|从内存加载至 x23；地址/扩展/回写见原指令|
|`0x2de0394`|`0x2ee0394`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2de03a0`|`0x2ee03a0`|read_candidate|`ldr x23, [x8]`|从内存加载至 x23；地址/扩展/回写见原指令|
|`0x2e4ee6c`|`0x2f4ee6c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e4ee70`|`0x2f4ee70`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2e4f608`|`0x2f4f608`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e4f60c`|`0x2f4f60c`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e4f6a8`|`0x2f4f6a8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e4f6ac`|`0x2f4f6ac`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e4f78c`|`0x2f4f78c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e4f790`|`0x2f4f790`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e4f88c`|`0x2f4f88c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e4f890`|`0x2f4f890`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x2e655e4`|`0x2f655e4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e655e8`|`0x2f655e8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2e6732c`|`0x2f6732c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e67330`|`0x2f67330`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e67788`|`0x2f67788`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e6778c`|`0x2f6778c`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e7098c`|`0x2f7098c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e70990`|`0x2f70990`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2e7298c`|`0x2f7298c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e72990`|`0x2f72990`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e72e64`|`0x2f72e64`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e72e68`|`0x2f72e68`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e733c4`|`0x2f733c4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e733c8`|`0x2f733c8`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e738e4`|`0x2f738e4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e738e8`|`0x2f738e8`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x2e81fd0`|`0x2f81fd0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2e81fd4`|`0x2f81fd4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2ec8ad8`|`0x2fc8ad8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ec8adc`|`0x2fc8adc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2ec8e58`|`0x2fc8e58`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ec8e5c`|`0x2fc8e5c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2ec8f08`|`0x2fc8f08`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ec8f0c`|`0x2fc8f0c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2ec8f44`|`0x2fc8f44`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ec8f48`|`0x2fc8f48`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2ecb91c`|`0x2fcb91c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2ecb920`|`0x2fcb920`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2f11f44`|`0x3011f44`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2f11f48`|`0x3011f48`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x2f4f0d0`|`0x304f0d0`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x2f4f0d4`|`0x304f0d4`|read_candidate|`ldr x21, [x20]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x2f9ee64`|`0x309ee64`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x2f9ee68`|`0x309ee68`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x300422c`|`0x310422c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3004230`|`0x3104230`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3004340`|`0x3104340`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3004344`|`0x3104344`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e4de8`|`0x32e4de8`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x31e4dec`|`0x32e4dec`|read_candidate|`ldr x21, [x9]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x31e4f8c`|`0x32e4f8c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e4f90`|`0x32e4f90`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e63b0`|`0x32e63b0`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x31e63b4`|`0x32e63b4`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e6d48`|`0x32e6d48`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e6d4c`|`0x32e6d4c`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x31e750c`|`0x32e750c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e7510`|`0x32e7510`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e764c`|`0x32e764c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e7650`|`0x32e7650`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e7f28`|`0x32e7f28`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e7f2c`|`0x32e7f2c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31e9ea0`|`0x32e9ea0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31e9ea4`|`0x32e9ea4`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x31eb7e0`|`0x32eb7e0`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x31eb7e4`|`0x32eb7e4`|read_candidate|`ldr x22, [x9]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x31ed17c`|`0x32ed17c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31ed180`|`0x32ed180`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31ed754`|`0x32ed754`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31ed758`|`0x32ed758`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x31fe780`|`0x32fe780`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31fe784`|`0x32fe784`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x31ffa34`|`0x32ffa34`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x31ffa40`|`0x32ffa40`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3201910`|`0x3301910`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3201914`|`0x3301914`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x3201db4`|`0x3301db4`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x3201db8`|`0x3301db8`|read_candidate|`ldr x0, [x9]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3201eb4`|`0x3301eb4`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x3201eb8`|`0x3301eb8`|read_candidate|`ldr x0, [x9]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x32021fc`|`0x33021fc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3202200`|`0x3302200`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3205ca8`|`0x3305ca8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3205cac`|`0x3305cac`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3206144`|`0x3306144`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3206148`|`0x3306148`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x320715c`|`0x330715c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3207160`|`0x3307160`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3209550`|`0x3309550`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3209554`|`0x3309554`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3211774`|`0x3311774`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3211778`|`0x3311778`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3214900`|`0x3314900`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x3214904`|`0x3314904`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3218074`|`0x3318074`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3218078`|`0x3318078`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x321e80c`|`0x331e80c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x321e818`|`0x331e818`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x32213fc`|`0x33213fc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3221400`|`0x3321400`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3221468`|`0x3321468`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x322146c`|`0x332146c`|read_candidate|`ldr x23, [x8]`|从内存加载至 x23；地址/扩展/回写见原指令|
|`0x3221a8c`|`0x3321a8c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3221a90`|`0x3321a90`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3222ddc`|`0x3322ddc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3222de0`|`0x3322de0`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x32233a8`|`0x33233a8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x32233ac`|`0x33233ac`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3223434`|`0x3323434`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3223438`|`0x3323438`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3223834`|`0x3323834`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x3223838`|`0x3323838`|read_candidate|`ldr x9, [x20]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x3223b34`|`0x3323b34`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3223b38`|`0x3323b38`|read_candidate|`ldr x9, [x8]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x3223ec4`|`0x3323ec4`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x3223ec8`|`0x3323ec8`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x32244c4`|`0x33244c4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x32244c8`|`0x33244c8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3224c58`|`0x3324c58`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3224c5c`|`0x3324c5c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3224e04`|`0x3324e04`|address|`add x10, x10, #0xa60`|x10 = ADD(x10, #0xa60)|
|`0x3224e08`|`0x3324e08`|read_candidate|`ldr x10, [x10]`|从内存加载至 x10；地址/扩展/回写见原指令|
|`0x322853c`|`0x332853c`|address|`add x24, x24, #0xa60`|x24 = ADD(x24, #0xa60)|
|`0x3228540`|`0x3328540`|read_candidate|`ldr x8, [x24]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x322f9c4`|`0x332f9c4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x322f9c8`|`0x332f9c8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3231954`|`0x3331954`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3231958`|`0x3331958`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3237b14`|`0x3337b14`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3237b18`|`0x3337b18`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3238060`|`0x3338060`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3238064`|`0x3338064`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3238844`|`0x3338844`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3238848`|`0x3338848`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x323a48c`|`0x333a48c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x323a490`|`0x333a490`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x323a59c`|`0x333a59c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x323a5a0`|`0x333a5a0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x323b9a4`|`0x333b9a4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x323b9a8`|`0x333b9a8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x323de1c`|`0x333de1c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x323de20`|`0x333de20`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3242bc8`|`0x3342bc8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3242bcc`|`0x3342bcc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3246664`|`0x3346664`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x324666c`|`0x334666c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x32479e8`|`0x33479e8`|address|`add x10, x10, #0xa60`|x10 = ADD(x10, #0xa60)|
|`0x32479ec`|`0x33479ec`|read_candidate|`ldr x25, [x10]`|从内存加载至 x25；地址/扩展/回写见原指令|
|`0x3248968`|`0x3348968`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x324896c`|`0x334896c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3248a0c`|`0x3348a0c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3248a14`|`0x3348a14`|read_candidate|`ldr x13, [x8]`|从内存加载至 x13；地址/扩展/回写见原指令|
|`0x3249fe0`|`0x3349fe0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3249fe8`|`0x3349fe8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x324a3d8`|`0x334a3d8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x324a3dc`|`0x334a3dc`|read_candidate|`ldr x9, [x8]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x324abe8`|`0x334abe8`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x324ac0c`|`0x334ac0c`|read_candidate|`ldr x23, [x22]`|从内存加载至 x23；地址/扩展/回写见原指令|
|`0x3250e70`|`0x3350e70`|address|`add x10, x10, #0xa60`|x10 = ADD(x10, #0xa60)|
|`0x3250e74`|`0x3350e74`|read_candidate|`ldr x10, [x10]`|从内存加载至 x10；地址/扩展/回写见原指令|
|`0x3251120`|`0x3351120`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3251124`|`0x3351124`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3251c5c`|`0x3351c5c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3251c64`|`0x3351c64`|read_candidate|`ldr x14, [x8]`|从内存加载至 x14；地址/扩展/回写见原指令|
|`0x32526d4`|`0x33526d4`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x32526dc`|`0x33526dc`|read_candidate|`ldr x8, [x9]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3257364`|`0x3357364`|address|`add x10, x10, #0xa60`|x10 = ADD(x10, #0xa60)|
|`0x3257368`|`0x3357368`|read_candidate|`ldr x25, [x10]`|从内存加载至 x25；地址/扩展/回写见原指令|
|`0x32583d0`|`0x33583d0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x32583d4`|`0x33583d4`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3258bf4`|`0x3358bf4`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x3258bfc`|`0x3358bfc`|read_candidate|`ldr x8, [x9]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3261c98`|`0x3361c98`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x3261c9c`|`0x3361c9c`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x3261cd4`|`0x3361cd4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3261cd8`|`0x3361cd8`|read_candidate|`ldr x10, [x8]`|从内存加载至 x10；地址/扩展/回写见原指令|
|`0x32633f4`|`0x33633f4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x32633f8`|`0x33633f8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3266e48`|`0x3366e48`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3266e4c`|`0x3366e4c`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x32675ec`|`0x33675ec`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x32675f0`|`0x33675f0`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x326e0bc`|`0x336e0bc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x326e0c0`|`0x336e0c0`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x326ed2c`|`0x336ed2c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x326ed30`|`0x336ed30`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x326ee2c`|`0x336ee2c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x326ee30`|`0x336ee30`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x326eec8`|`0x336eec8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x326eecc`|`0x336eecc`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3272084`|`0x3372084`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3272088`|`0x3372088`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3272604`|`0x3372604`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3272608`|`0x3372608`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x327271c`|`0x337271c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3272720`|`0x3372720`|read_candidate|`ldr x0, [x8]`|从内存加载至 x0；地址/扩展/回写见原指令|
|`0x3273dd4`|`0x3373dd4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3273dd8`|`0x3373dd8`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x3273ef4`|`0x3373ef4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3273ef8`|`0x3373ef8`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x3347ee4`|`0x3447ee4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3347ee8`|`0x3447ee8`|read_candidate|`ldr x22, [x8]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x33480a4`|`0x34480a4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x33480a8`|`0x34480a8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x33481c0`|`0x34481c0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x33481c4`|`0x34481c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3348264`|`0x3448264`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3348268`|`0x3448268`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x3348474`|`0x3448474`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3348478`|`0x3448478`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|

## 到访状态机 `0x526c708`

|指令 RVA|Ghidra VA|类型|实际指令|局部注释|
|---|---|---|---|---|
|`0x1c3e7dc`|`0x1d3e7dc`|address|`add x8, x8, #0x708`|x8 = ADD(x8, #0x708)|
|`0x1c3e7f8`|`0x1d3e7f8`|write_candidate|`stp x19, x9, [x8]`|将一对寄存器写入内存；地址/回写见原指令|
|`0x1c3ead8`|`0x1d3ead8`|address|`add x8, x8, #0x708`|x8 = ADD(x8, #0x708)|
|`0x1c3eadc`|`0x1d3eadc`|write_candidate|`stp xzr, xzr, [x8]`|将一对寄存器写入内存；地址/回写见原指令|
|`0x1c3eb60`|`0x1d3eb60`|address|`add x8, x8, #0x708`|x8 = ADD(x8, #0x708)|
|`0x1c3eb64`|`0x1d3eb64`|write_candidate|`stp xzr, xzr, [x8]`|将一对寄存器写入内存；地址/回写见原指令|

## 访客相关管理器 `0x59e6a60`

|指令 RVA|Ghidra VA|类型|实际指令|局部注释|
|---|---|---|---|---|
|`0x5d5fcc`|`0x6d5fcc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5d5fd0`|`0x6d5fd0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5de5e0`|`0x6de5e0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5de5e4`|`0x6de5e4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5de640`|`0x6de640`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5de644`|`0x6de644`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5e6b34`|`0x6e6b34`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5e6b38`|`0x6e6b38`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5e6b94`|`0x6e6b94`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5e6b98`|`0x6e6b98`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5e6bf4`|`0x6e6bf4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5e6bf8`|`0x6e6bf8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x5e6c54`|`0x6e6c54`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x5e6c58`|`0x6e6c58`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0xc77008`|`0xd77008`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0xc7700c`|`0xd7700c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b85300`|`0x1c85300`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1b85304`|`0x1c85304`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b8b270`|`0x1c8b270`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1b8b274`|`0x1c8b274`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b918e0`|`0x1c918e0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b918e4`|`0x1c918e4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b92504`|`0x1c92504`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b92508`|`0x1c92508`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b93be0`|`0x1c93be0`|address|`add x24, x24, #0xa60`|x24 = ADD(x24, #0xa60)|
|`0x1b93be4`|`0x1c93be4`|read_candidate|`ldr x8, [x24]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b94590`|`0x1c94590`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b94594`|`0x1c94594`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b94c48`|`0x1c94c48`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b94c50`|`0x1c94c50`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b95650`|`0x1c95650`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1b95654`|`0x1c95654`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b96900`|`0x1c96900`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1b96904`|`0x1c96904`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b99094`|`0x1c99094`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9909c`|`0x1c9909c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9e2f4`|`0x1c9e2f4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9e2f8`|`0x1c9e2f8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9e498`|`0x1c9e498`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9e49c`|`0x1c9e49c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9e770`|`0x1c9e770`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9e77c`|`0x1c9e77c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9e7ec`|`0x1c9e7ec`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9e7f0`|`0x1c9e7f0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9e970`|`0x1c9e970`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9e974`|`0x1c9e974`|read_candidate|`ldr x21, [x8]`|从内存加载至 x21；地址/扩展/回写见原指令|
|`0x1b9f240`|`0x1c9f240`|address|`add x11, x11, #0xa60`|x11 = ADD(x11, #0xa60)|
|`0x1b9f244`|`0x1c9f244`|read_candidate|`ldr x11, [x11]`|从内存加载至 x11；地址/扩展/回写见原指令|
|`0x1b9f258`|`0x1c9f258`|address|`add x11, x11, #0xa60`|x11 = ADD(x11, #0xa60)|
|`0x1b9f25c`|`0x1c9f25c`|read_candidate|`ldr x11, [x11]`|从内存加载至 x11；地址/扩展/回写见原指令|
|`0x1b9f270`|`0x1c9f270`|address|`add x11, x11, #0xa60`|x11 = ADD(x11, #0xa60)|
|`0x1b9f274`|`0x1c9f274`|read_candidate|`ldr x11, [x11]`|从内存加载至 x11；地址/扩展/回写见原指令|
|`0x1b9f2e8`|`0x1c9f2e8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f2ec`|`0x1c9f2ec`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9f300`|`0x1c9f300`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f304`|`0x1c9f304`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9f57c`|`0x1c9f57c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f580`|`0x1c9f580`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9f6f4`|`0x1c9f6f4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f6f8`|`0x1c9f6f8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9f70c`|`0x1c9f70c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f710`|`0x1c9f710`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9f724`|`0x1c9f724`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9f728`|`0x1c9f728`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9fab0`|`0x1c9fab0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9fab4`|`0x1c9fab4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9fac8`|`0x1c9fac8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9facc`|`0x1c9facc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9fae0`|`0x1c9fae0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1b9fae4`|`0x1c9fae4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1b9fdd8`|`0x1c9fdd8`|address|`add x9, x9, #0xa60`|x9 = ADD(x9, #0xa60)|
|`0x1b9fddc`|`0x1c9fddc`|read_candidate|`ldr x9, [x9]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x1ba0388`|`0x1ca0388`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba038c`|`0x1ca038c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba0754`|`0x1ca0754`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba0758`|`0x1ca0758`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba43b0`|`0x1ca43b0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba43bc`|`0x1ca43bc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba44d8`|`0x1ca44d8`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1ba44dc`|`0x1ca44dc`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba47f4`|`0x1ca47f4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba47f8`|`0x1ca47f8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba5048`|`0x1ca5048`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba504c`|`0x1ca504c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba5060`|`0x1ca5060`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba5064`|`0x1ca5064`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba5078`|`0x1ca5078`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba507c`|`0x1ca507c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba52e8`|`0x1ca52e8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba52ec`|`0x1ca52ec`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba5300`|`0x1ca5300`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba5304`|`0x1ca5304`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba5318`|`0x1ca5318`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ba531c`|`0x1ca531c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ba6190`|`0x1ca6190`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1ba6194`|`0x1ca6194`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bac5f4`|`0x1cac5f4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bac5f8`|`0x1cac5f8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bacda0`|`0x1cacda0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bacda4`|`0x1cacda4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bace44`|`0x1cace44`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bace58`|`0x1cace58`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bacf24`|`0x1cacf24`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bacf38`|`0x1cacf38`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bad260`|`0x1cad260`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bad274`|`0x1cad274`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bad340`|`0x1cad340`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bad354`|`0x1cad354`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bad55c`|`0x1cad55c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bad570`|`0x1cad570`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1bad63c`|`0x1cad63c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1bad650`|`0x1cad650`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c577b0`|`0x1d577b0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c577b4`|`0x1d577b4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c579c0`|`0x1d579c0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c579c4`|`0x1d579c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c6a278`|`0x1d6a278`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c6a27c`|`0x1d6a27c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c7cd94`|`0x1d7cd94`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c7cd98`|`0x1d7cd98`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c7f980`|`0x1d7f980`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c7f984`|`0x1d7f984`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c80dd4`|`0x1d80dd4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c80dd8`|`0x1d80dd8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c8ac90`|`0x1d8ac90`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1c8ac94`|`0x1d8ac94`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1c9f7ac`|`0x1d9f7ac`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1c9f7b0`|`0x1d9f7b0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cafdb8`|`0x1dafdb8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cafdbc`|`0x1dafdbc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cb09d0`|`0x1db09d0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cb09d4`|`0x1db09d4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cb188c`|`0x1db188c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cb1890`|`0x1db1890`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cb1ecc`|`0x1db1ecc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cb1ed0`|`0x1db1ed0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cbcf54`|`0x1dbcf54`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cbcf58`|`0x1dbcf58`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cbfae0`|`0x1dbfae0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cbfae4`|`0x1dbfae4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ccc900`|`0x1dcc900`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ccc90c`|`0x1dcc90c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cd9194`|`0x1dd9194`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cd9198`|`0x1dd9198`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cd9368`|`0x1dd9368`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cd936c`|`0x1dd936c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cd9854`|`0x1dd9854`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cd9858`|`0x1dd9858`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cd9d60`|`0x1dd9d60`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cd9d64`|`0x1dd9d64`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ce6508`|`0x1de6508`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ce6510`|`0x1de6510`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ce6744`|`0x1de6744`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ce6748`|`0x1de6748`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ce67a4`|`0x1de67a4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ce67a8`|`0x1de67a8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ce6a30`|`0x1de6a30`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ce6a34`|`0x1de6a34`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1ce6f40`|`0x1de6f40`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1ce6f44`|`0x1de6f44`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf2eec`|`0x1df2eec`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cf2ef0`|`0x1df2ef0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf2fcc`|`0x1df2fcc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cf2fd0`|`0x1df2fd0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf8414`|`0x1df8414`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cf8418`|`0x1df8418`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf8434`|`0x1df8434`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cf8438`|`0x1df8438`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf8448`|`0x1df8448`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cf844c`|`0x1df844c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf8bb8`|`0x1df8bb8`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x1cf8bbc`|`0x1df8bbc`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cf8cfc`|`0x1df8cfc`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x1cf8d00`|`0x1df8d00`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x1cfa2e8`|`0x1dfa2e8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x1cfa2ec`|`0x1dfa2ec`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3770a2c`|`0x3870a2c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3770a30`|`0x3870a30`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37740b0`|`0x38740b0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37740b4`|`0x38740b4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3774154`|`0x3874154`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3774158`|`0x3874158`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37742e4`|`0x38742e4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37742ec`|`0x38742ec`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37744d0`|`0x38744d0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37744d4`|`0x38744d4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3774568`|`0x3874568`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377456c`|`0x387456c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377471c`|`0x387471c`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3774720`|`0x3874720`|read_candidate|`ldr x25, [x21]`|从内存加载至 x25；地址/扩展/回写见原指令|
|`0x37751ec`|`0x38751ec`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37751f0`|`0x38751f0`|read_candidate|`ldr x20, [x8]`|从内存加载至 x20；地址/扩展/回写见原指令|
|`0x37758b4`|`0x38758b4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37758b8`|`0x38758b8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37759f8`|`0x38759f8`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x37759fc`|`0x38759fc`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3776e54`|`0x3876e54`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3776e58`|`0x3876e58`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377737c`|`0x387737c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377738c`|`0x387738c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37774c4`|`0x38774c4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37774d4`|`0x38774d4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37776c0`|`0x38776c0`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x37776c4`|`0x38776c4`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37790bc`|`0x38790bc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37790c0`|`0x38790c0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377914c`|`0x387914c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3779150`|`0x3879150`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37792bc`|`0x38792bc`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x37792c0`|`0x38792c0`|read_candidate|`ldr x25, [x21]`|从内存加载至 x25；地址/扩展/回写见原指令|
|`0x37798c8`|`0x38798c8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37798cc`|`0x38798cc`|read_candidate|`ldr x19, [x8]`|从内存加载至 x19；地址/扩展/回写见原指令|
|`0x37799b8`|`0x38799b8`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x37799bc`|`0x38799bc`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377a978`|`0x387a978`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x377a97c`|`0x387a97c`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377aac4`|`0x387aac4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377aac8`|`0x387aac8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377c8dc`|`0x387c8dc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377c8e0`|`0x387c8e0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377cd00`|`0x387cd00`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377cd04`|`0x387cd04`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377cf78`|`0x387cf78`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377cf7c`|`0x387cf7c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377d130`|`0x387d130`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x377d134`|`0x387d134`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x377e25c`|`0x387e25c`|write_candidate|`str x0, [x8, #0xa60]`|将x0写入内存；地址/回写见原指令|
|`0x377fa40`|`0x387fa40`|read_candidate|`ldr x8, [x8, #0xa60]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37801f4`|`0x38801f4`|write_candidate|`str xzr, [x8, #0xa60]`|将xzr写入内存；地址/回写见原指令|
|`0x37816c4`|`0x38816c4`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x37816c8`|`0x38816c8`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3781bdc`|`0x3881bdc`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3781be0`|`0x3881be0`|read_candidate|`ldr x22, [x21]`|从内存加载至 x22；地址/扩展/回写见原指令|
|`0x3781dd4`|`0x3881dd4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3781dd8`|`0x3881dd8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3781e78`|`0x3881e78`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3781e7c`|`0x3881e7c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3782064`|`0x3882064`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3782068`|`0x3882068`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3782780`|`0x3882780`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x3782784`|`0x3882784`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3782850`|`0x3882850`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3782854`|`0x3882854`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37837b8`|`0x38837b8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37837c4`|`0x38837c4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3783b74`|`0x3883b74`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3783b78`|`0x3883b78`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3783bb8`|`0x3883bb8`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x3783bbc`|`0x3883bbc`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3783e6c`|`0x3883e6c`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x3783e70`|`0x3883e70`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3785e80`|`0x3885e80`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3785e84`|`0x3885e84`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3787bb0`|`0x3887bb0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3787bb4`|`0x3887bb4`|read_candidate|`ldr x16, [x8]`|从内存加载至 x16；地址/扩展/回写见原指令|
|`0x3789224`|`0x3889224`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3789228`|`0x3889228`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3789c44`|`0x3889c44`|address|`add x25, x25, #0xa60`|x25 = ADD(x25, #0xa60)|
|`0x3789c48`|`0x3889c48`|read_candidate|`ldr x8, [x25]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378ac08`|`0x388ac08`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x378ac0c`|`0x388ac0c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378b49c`|`0x388b49c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x378b4a0`|`0x388b4a0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378bbd8`|`0x388bbd8`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x378bbdc`|`0x388bbdc`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378d378`|`0x388d378`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x378d37c`|`0x388d37c`|read_candidate|`ldr x9, [x8]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x378f258`|`0x388f258`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x378f25c`|`0x388f25c`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378f974`|`0x388f974`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x378f978`|`0x388f978`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x378fbd0`|`0x388fbd0`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x378fbd4`|`0x388fbd4`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3792434`|`0x3892434`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3792438`|`0x3892438`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37930cc`|`0x38930cc`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x37930d0`|`0x38930d0`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3793eb8`|`0x3893eb8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3793ebc`|`0x3893ebc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37940c4`|`0x38940c4`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x37940c8`|`0x38940c8`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3794390`|`0x3894390`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3794394`|`0x3894394`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3795490`|`0x3895490`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x3795494`|`0x3895494`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3796720`|`0x3896720`|address|`add x22, x22, #0xa60`|x22 = ADD(x22, #0xa60)|
|`0x3796724`|`0x3896724`|read_candidate|`ldr x8, [x22]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3796a88`|`0x3896a88`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3796a8c`|`0x3896a8c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37972d4`|`0x38972d4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37972d8`|`0x38972d8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3797678`|`0x3897678`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x379767c`|`0x389767c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37977e0`|`0x38977e0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37977e4`|`0x38977e4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x379b16c`|`0x389b16c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x379b170`|`0x389b170`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x379dc08`|`0x389dc08`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x379dc0c`|`0x389dc0c`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x379dd4c`|`0x389dd4c`|address|`add x21, x21, #0xa60`|x21 = ADD(x21, #0xa60)|
|`0x379dd50`|`0x389dd50`|read_candidate|`ldr x8, [x21]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x379e2cc`|`0x389e2cc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x379e2d4`|`0x389e2d4`|write_candidate|`str xzr, [x8]`|将xzr写入内存；地址/回写见原指令|
|`0x379e31c`|`0x389e31c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x379e320`|`0x389e320`|write_candidate|`str xzr, [x8]`|将xzr写入内存；地址/回写见原指令|
|`0x37a17a0`|`0x38a17a0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37a17a4`|`0x38a17a4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37a193c`|`0x38a193c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37a1944`|`0x38a1944`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37a19cc`|`0x38a19cc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37a19d0`|`0x38a19d0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37a3230`|`0x38a3230`|address|`add x14, x14, #0xa60`|x14 = ADD(x14, #0xa60)|
|`0x37a3238`|`0x38a3238`|read_candidate|`ldr x8, [x14]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37a34b0`|`0x38a34b0`|address|`add x14, x14, #0xa60`|x14 = ADD(x14, #0xa60)|
|`0x37a34b8`|`0x38a34b8`|read_candidate|`ldr x8, [x14]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x37a3fc4`|`0x38a3fc4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x37a3fc8`|`0x38a3fc8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af7b3c`|`0x3bf7b3c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af7b40`|`0x3bf7b40`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af7c84`|`0x3bf7c84`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af7c88`|`0x3bf7c88`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af7ff4`|`0x3bf7ff4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af7ff8`|`0x3bf7ff8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af83e4`|`0x3bf83e4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af83e8`|`0x3bf83e8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af8a54`|`0x3bf8a54`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af8a58`|`0x3bf8a58`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af9618`|`0x3bf9618`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3af962c`|`0x3bf962c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3af967c`|`0x3bf967c`|address|`add x20, x20, #0xa60`|x20 = ADD(x20, #0xa60)|
|`0x3af9680`|`0x3bf9680`|read_candidate|`ldr x8, [x20]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afaa88`|`0x3bfaa88`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afaa8c`|`0x3bfaa8c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afac04`|`0x3bfac04`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afac08`|`0x3bfac08`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afac24`|`0x3bfac24`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afac28`|`0x3bfac28`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afacb4`|`0x3bfacb4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afacb8`|`0x3bfacb8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afbe38`|`0x3bfbe38`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afbe3c`|`0x3bfbe3c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afc2b4`|`0x3bfc2b4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afc2b8`|`0x3bfc2b8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afc370`|`0x3bfc370`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afc374`|`0x3bfc374`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afc3b8`|`0x3bfc3b8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afc3bc`|`0x3bfc3bc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afc7a0`|`0x3bfc7a0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afc7a4`|`0x3bfc7a4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3afd688`|`0x3bfd688`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3afd68c`|`0x3bfd68c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3aff040`|`0x3bff040`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3aff044`|`0x3bff044`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3aff0dc`|`0x3bff0dc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3aff0e0`|`0x3bff0e0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3aff150`|`0x3bff150`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3aff154`|`0x3bff154`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b000c8`|`0x3c000c8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b000cc`|`0x3c000cc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b00ab4`|`0x3c00ab4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b00ab8`|`0x3c00ab8`|read_candidate|`ldr x9, [x8]`|从内存加载至 x9；地址/扩展/回写见原指令|
|`0x3b09b74`|`0x3c09b74`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09b78`|`0x3c09b78`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09ba4`|`0x3c09ba4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09ba8`|`0x3c09ba8`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09be0`|`0x3c09be0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09be4`|`0x3c09be4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09bf8`|`0x3c09bf8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09bfc`|`0x3c09bfc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09c10`|`0x3c09c10`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09c14`|`0x3c09c14`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09c8c`|`0x3c09c8c`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09c90`|`0x3c09c90`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09cc0`|`0x3c09cc0`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09cc4`|`0x3c09cc4`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09cdc`|`0x3c09cdc`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09ce0`|`0x3c09ce0`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3b09cf8`|`0x3c09cf8`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3b09cfc`|`0x3c09cfc`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3db65e4`|`0x3eb65e4`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3db65ec`|`0x3eb65ec`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|
|`0x3db6708`|`0x3eb6708`|address|`add x8, x8, #0xa60`|x8 = ADD(x8, #0xa60)|
|`0x3db670c`|`0x3eb670c`|read_candidate|`ldr x8, [x8]`|从内存加载至 x8；地址/扩展/回写见原指令|


---

