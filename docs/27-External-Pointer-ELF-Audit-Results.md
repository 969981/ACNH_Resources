# ACNH 3.0.3 外部指针 ELF 审计结果与 Native 追踪入口

## 1. 可复现证据

- 分支：3.0.3_Unpack；扫描提交 [99537c6](https://github.com/969981/ACNH_Resources/commit/99537c6d2fd62012d1bdfb40cdcb7f89af9f0f3b)
- [成功 CI 45313390861](https://github.com/969981/ACNH_Resources/actions/runs/45313390861)，job 138174300351，[原始 JSON artifact 14884541105](https://github.com/969981/ACNH_Resources/actions/runs/45313390861/artifacts/14884541105)
- 2026-11-24 02:34 UTC；canonical ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；镜像 SHA256 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180（不一致，不作为分析输入）。
- 输入地址和工具端消费者见 [26](26-External-Tool-Pointer-ELF-Audit.md)。本次下载并解析实际 CI JSON，不把源码声明当作原生证据。
- 5 条链对应 4 个根槽；19 条 Main 记录中 3 条原字匹配、12 条不匹配、4 条无预期原字；977 条去重的静态引用记录；54 条 heap 候选未获运行时验证。没有一个完整指针链已通过实机验证。

## 2. ELF 地址空间和根槽

PT_LOAD（RVA，半开区间）：

| 权限 | 起点 | 文件长度 | 内存长度 |
|---|---:|---:|---:|
| RX | 0x0 | 66088432 | 66088432 |
| R | 0x3f07000 | 8507900 | 8507900 |
| RW | 0x4725000 | 4401456 | 19795968 |

RW 文件覆盖终点 0x4B57930，内存终点 0x5A06000。四个根槽在 BSS；不存在可直接读取的初始 ELF 指针字节。Ghidra R100 工程 VA=RVA+0x100000；运行时 main base 不等于该 slide。

| 根槽 RVA | Ghidra VA | 地址形成 | 读取候选 | 写入候选 | 合计 |
|---|---|---:|---:|---:|---:|
| 0x4BFAE30 | 0x4CFAE30 | 177 | 175 | 0 | 352 |
| 0x5255A60 | 0x5355A60 | 118 | 118 | 0 | 236 |
| 0x526C708 | 0x536C708 | 3 | 0 | 3 | 6 |
| 0x59E6A60 | 0x5AE6A60 | 190 | 189 | 4 | 383 |
| 合计 | | 488 | 482 | 7 | 977 |

计数是 (site,target,kind,instruction) 去重的记录，不是独立函数或所有调用者。扫描仅跟踪 96 字节窗口内的直接 ADR/ADRP 和有限 ADD/MOV/内存操作，跨基本块、调用、GOT、重定位、别名和全局表间接引用可能遗漏；零命中不是不存在的证明。

### 2.1 到访信息相关根槽（工具命名，非已恢复原始类名）

| 指令 RVA | Ghidra VA | 指令 |
|---|---|---|
| 0x1C3E7F8 | 0x1D3E7F8 | stp x19, x9, [x8] |
| 0x1C3EADC | 0x1D3EADC | stp xzr, xzr, [x8] |
| 0x1C3EB64 | 0x1D3EB64 | stp xzr, xzr, [x8] |

成对 store 覆盖目标槽与相邻 +8；可能是成对全局状态，不能先验把第二字段命名为长度、所有权等。逆向入口：追 x19/x9 reaching definitions、相邻槽的引用、三处所在函数边界和调用者；检查清零前后是否释放对象。名称链和另一条工具端到访字段链共享根但对象语义未证明。仅使用离线/本人授权测试环境。

### 2.2 访客列表相关根槽

| 指令 RVA | Ghidra VA | 指令 |
|---|---|---|
| 0x377E25C | 0x387E25C | str x0, [x8, #0xa60] |
| 0x37801F4 | 0x38801F4 | str xzr, [x8, #0xa60] |
| 0x379E2D4 | 0x389E2D4 | str xzr, [x8] |
| 0x379E320 | 0x389E320 | str xzr, [x8] |

赋值与清零候选说明存在根槽状态变化。优先追 x0 的调用返回值或参数来源，核对构造器、分配器、注销函数；读入口例如 0x5D5FD0、0x5DE5E4、0x5DE644、0x5E6B38（均 ldr x8,[x8]）。没有完成 +0x38/+0xE0/+0x1EC/+0x17A 子链验证。

### 2.3 玩家坐标与聊天相关根槽

坐标读入口：0x5CB59C (ldr x8,[x8])、0x608BD0 (ldr x20,[x8])、0x671814、0x7CC600。选择读入口追 +0x18/+0x178/+0xD0/+0xD8 数据流，尤其终点三连 float 访问及 +0x3C 的独立字段；Poker DA 与 SysBot D8 差 2 的源码操作见文档 26。不能仅凭根槽读取命中断定坐标对象。

聊天读入口：0x2B1A2D8、0x2B1D7E0、0x2B1DA68（ldr x8,[x8]）、0x2B77D58（ldr x20,[x8]）。验证 +0x40、UTF16 长度 0x1E、输入与发送生命周期。两组未找到直接写入候选，下一轮接 R100 relocation/GOT、跨调用传播及全局注册表。

## 3. Main 19 条记录逐项验收

| 来源/名称 | RVA | ELF LE u32 | 预期 | 状态 | 原生指令或数据 |
|---|---|---|---|---|---|---|
| SysBot AnimationSpeedOffset | 43BC3C0 | 00000024 | — | unknown | R 段数据 |
| SysBot WalkSpeedOffset | 16127A0 | F868D928 | — | unknown | ldr x8,[x9,w8,sxtw #3] |
| SysBot CollisionStateOffset | 155FDC0 | B900058D | — | unknown | str w13,[x12,#4] |
| SysBot TimeStateAddress | 328BD0 | 0A490569 | — | unknown | and w9,w11,w9,lsr #1 |
| Poker freezeTimeAddress | 981B28 | F9203260 | F9203260 | match | str x0,[x19,#0x4060] |
| Poker wSpeedAddress | 2318428 | A94A5FF8 | BD57BE60 | mismatch | ldp x24,x23,[sp,#0xa0] |
| Poker CollisionAddress | 2219120 | B95BF800 | B95BF800 | match | ldr w0,[x0,#0x1bf8] |
| Poker ActorCollisionAddress | 221965C | 1E2E1000 | 1E2E1000 | match | fmov s0,#1.0 |
| Poker aSpeedAddress | 43BC3C0 | 00000024 | 3F800000 | mismatch | R 段数据 |
| Poker ParticleScaleAddress | 26312B8 | F9402BE0 | 1E2E1001 | mismatch | ldr x0,[sp,#0x50] |
| Poker PetalsAddress | 3327F4 | F9000268 | 71000D1F | mismatch | str x8,[x19] |
| Poker PetalsIntensityAddress | 332814 | A9017BFD | 1E2E1001 | mismatch | stp x29,x30,[sp,#0x10] |
| Poker LeavesAddress | 332C40 | A8C24FF4 | 1A9F17E9 | mismatch | ldp x20,x19,[sp],#0x20 |
| Poker ShopAddress | 1B063E0 | A9005837 | 2A1F03E0 | mismatch | stp x23,x22,[x1] |
| Poker BGMAddress | 1A021B8 | 540007E0 | 1E2E1001 | mismatch | b.eq #0x1a022b4 |
| Poker EatAllAddress | 1F08404 | D0015DC0 | 97C2FB0F | mismatch | adrp x0,#0x4ac2000 |
| Poker EatAll2Address | 1565340 | 911E4108 | B9000268 | mismatch | add x8,x8,#0x790 |
| Poker MagicAddress | 8AFEB8 | 3CC282C0 | 52810840 | mismatch | ldur q0,[x22,#0x28] |
| Poker MagicAddress+0x14 | 8AFECC | 9A8E3273 | 52810840 | mismatch | csel x19,x19,x14,lo |

19 条为记录而非独立地址（动画速度重复）。原字不匹配：禁止直接沿用旧版替换或恢复字。尤其 wSpeed 是栈恢复型指令，PetalsIntensity 是栈帧保存，Leaves 是栈恢复，错误写入可破坏寄存器/控制流。动画速度地址在 R 段，原始 0x24 并不是浮点 1.0。unknown 也不等于通过。

### 3.1 匹配项的局部语义（不是最终功能验证）

- freezeTime 0x981B28：0x981B18 bl 0x3F03620；0x981B1C mov x20,x0；0x981B20 stur x0,[x29,#-8]；目标 str x0,[x19,#0x4060]；0x981B2C bl 0x3F030C0；0x981B44 ldr x8,[x19,#0x4078]；0x981B48 sub x0,x0,x8。证明对象 +0x4060 的 64 位写入及附近 +0x4078 读取，疑似时间相关值；必须追两个被调用函数和 x19 来源，不能将局部减法直接命名为游戏时钟。
- Collision 0x2219120：候选函数序言 0x221910C sub sp,sp,#0x30；0x221911C mov x19,x0；目标 ldr w0,[x0,#0x1bf8]；随后 ldr w8,[x19,#0x2244]、cbz；0x2219134 ldr x8,[x19,#0x70]；0x221913C ldr w9,[x8,#0x280]；cmp w9,#0x148。恢复四个候选成员，需交叉引用构造器和调用链验证碰撞语义。
- ActorCollision 0x221965C：0x2219644 bl 0x15E946C，0x2219648 tbz w0,#0,0x221965c；另一分支 mov/movk 构造 0x3EA8F5C3 并 fmov s0,w8，约 0.33；目标分支 fmov s0,#1.0；0x2219664 fmov s1,s0。证明条件控制浮点参数，不能单独证明物理碰撞半径/系数。需识别谓词和浮点消费者。

## 4. Heap 指针与村民关系

工具端历史公式为 heap+0xB104B4E0+n*0x13230+p*0x5F0+0x46。此地址不能映射到 ELF PT_LOAD。后续在 R96/R102–R104 好感度和赠礼调用链中追踪 LDRB/STRB 0x46、索引步长或乘加等价形式及对象来源；仅匹配偏移不足以识别类型。优先找保存对象根、主/备份复制链和真实字段范围，再接照片概率研究。固定 heap 候选与 Build ID 绑定前不得标为已验证。

## 5. 下一轮验收清单

- [ ] 四个根槽：函数边界、调用者、初始化/注册/清零链，接入 R100 重定位与 Ghidra 函数索引。
- [ ] 每条指针链：逐跳记录 ARM64 访问宽度、结构偏移、上下游函数、空指针保护及实机只读结果。
- [ ] 三个匹配 Main 字：证明对象类型、字段语义和实际功能；十二个不匹配项用 3.0.2 ELF 函数级 CFG/常量/调用关系映射到 3.0.3；禁止仅搜索相同原字。
- [ ] 恢复保存对象的动态根与 heap 固定地址关系，优先 GSavePlayer/GSaveNpc/地图和好友关系字段。
- [ ] 建立版本/Build ID/ELF hash/地址域/源码 SHA/原始字节/函数与 xref/运行时状态数据库。区分 source_only、elf_mapped、word_match、xref_candidate、native_semantic_verified、runtime_verified 等证据层级，不将这些层级混为一谈。

当前停止点：已完成真实 ELF 扫描结果解析、全部 Main 原字验收、四个根槽引用分类和若干局部 Native 入口分析。未恢复完整函数、原始类名、全部子链、3.0.2→3.0.3 替换地址或运行时验证。

## 后续研究（2026-11-24）

- [Native 指针研究知识库 / Obsidian MOC](Native-Pointer-Research-3.0.3/README.md)
- [完整研究合订版](28-ACNH-3.0.3-Native-Pointer-Research.md)

后续新增 Ghidra C 交叉核对、根槽引用逐行索引、Main 反汇编与伪代码，以及 Heap→Main、R100 关联和动态根验收方案。原有历史审计结论保留；最新证据状态以知识库台账为准。GSavePlayer、GSaveNpc 与保存管理器动态根、完整实机链、Friendship 原生字段访问和双版本迁移仍待验证。
