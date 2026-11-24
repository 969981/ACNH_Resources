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

[[README|研究知识库导航]] · [GitHub 导航](README.md) · [研究合订版](../28-ACNH-3.0.3-Native-Pointer-Research.md)
