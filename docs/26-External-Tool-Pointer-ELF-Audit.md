# ACNH 3.0.3 — 外部工具指针候选与 ELF 证据研究

## 范围与版本门禁

本轮固定三个源码快照：[SysBot main](https://github.com/969981/SysBot.ACNHOrders/tree/11b61e8868752ba8fbd990837f90dd72104d1045)、[SysBot lowintent](https://github.com/969981/SysBot.ACNHOrders/tree/84edb50709e0f5b791e6596a75bd25796793d368)、[Poker main](https://github.com/969981/ACNHPokerCore/tree/85e50a1ad182c926b2ebd51c00abc612e0a859d5)。Poker Main.cs:40 声明 R25 for v3.0.2；SysBot 两分支 OffsetHelper.cs 的地址定义一致。共同来源不是独立运行时证据。3.0.3 不允许直接套用旧版写入位置。

目标 ELF: UnPack/0/main.elf，79,000,340 bytes，SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664，ELF64 LE AArch64 ET_DYN。原 NSO SHA256: 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1。Ghidra R100 已使用 0x100000 slide。main RVA 对应 Ghidra 地址 = RVA + 0x100000（此工程）；heap 相对地址不能如此转换。运行时 main/heap 基址必须实际获取。完整候选表见 [JSON](../derived/3.0.3/external_pointers/candidates.json)。本轮尚未取得实机指针解析证据。

## 1. 动态指针与消费者

语义 P(a)=read_u64(a)，第一个偏移加 main 基址，每个中间偏移解引用，最终偏移只相加，不再解引用。

| 名称 | RVA | 后续偏移 | Ghidra 根候选 | 消费者 |
|---|---|---|---|---|
| player_coordinate | 0x4bfae30 | 0x18 → 0x178 → 0xd0 → 0xd8 | 0x4cfae30 | SysBot OffsetHelper; Poker Teleport ends DA |
| chat | 0x5255a60 | 0x40 | 0x5355a60 | both |
| arrival_name | 0x526c708 | 0x40 → 0x170 | 0x536c708 | SysBot |
| arrival_nid | 0x526c708 | 0xd0 | 0x536c708 | SysBot |
| visitor_list | 0x59e6a60 | 0x38 → 0xe0 → 0x1ec → 0x17a | 0x5ae6a60 | SysBot |

- SysBot DodoPositionHelper.cs:72 调用 PointerAll；CrossBot.cs:1151–1153 从坐标终点读取 12 bytes，再从 +0x3C 读取 4 bytes；DodoPositionHelper.cs:165 读取 +0x20 的状态值。Poker Dodo/teleport.cs:20,104–145 手动实现指针解引用，末端 DA 与 D8 差 2，写坐标时减 2（:174,203），不是两个根。Poker 坐标记录 20+4 bytes，与 SysBot 12+4 布局不完全相同；须分别恢复字段和朝向，不应推断整块结构相同。
- 聊天：Poker Custom/Chat.cs:15 与 SysBot OffsetHelper 一致；CrossBot.cs:1278、1287 缓冲区 0x1E UTF16 单元。根槽指向的对象类型及生命周期待确认。
- 到访名称/NID：CrossBot.cs:309–311 读取 NID 8 bytes，JoiningVillagerHelper.cs:39–49 从名称位置读取 20 bytes，ID 位于 -4，岛名 -0x1C，岛 ID -0x20。共享根不证明同一子对象。VisitorListHelper.cs:66–73 列表步长 0x1C，名称长 0x14。Poker 固定 visitor 地址另列，不当作同一指针链。
- UnsafeOffsets.cs 中 Magic1/Magic2=0、OnlinePCJumps/OnlineMDCJumps 空数组、SessionEncryptionAddress=0、加解密未实现；不能当有效地址。

## 2. Heap / 固定偏移账本

Poker Utilities.cs:1062–1205、1327 的 peek/poke 与 peekMain/pokeMain 是不同命令。SysBot CrossBot 的 ReadBytesAsync 与 PointerAll/ReadBytesAbsoluteAsync 也区分地址域。以下为工具端固定 heap 候选，而非 ELF RVA。

| 数据 | 偏移 | 来源 |
|---|---|---|
| inventory | 0xB27BB758 | both |
| slot21 | 0xB27BB6A0 | Poker |
| wallet | 0xB27BB810 | SysBot |
| miles | 0xB27961C8 | SysBot |
| bank | 0xB27E8D2C | SysBot |
| player_start | 0xB2783C78 | SysBot |
| player_id | 0xB278FDB0 | SysBot |
| player_profile | 0xB27964A8 | SysBot |
| town_name_poker | 0xB278FCF8 | Poker default |
| town_name_sysbot | 0xB278FCFC | SysBot getTownNameAddress |
| player_name | 0xB278FD18 | SysBot |
| manpu | 0xB27CE40C | both reaction |
| home_storage | 0xB27BB81C | Poker |
| recycling | 0xB19C40D0 | Poker |
| recycling21 | 0xB19C4170 | Poker |
| turnip | 0xB14DBB30 | both |
| turnip_sell | 0xB14DBB3C | Poker |
| villager | 0xB104B4E0 | both |
| villager_house | 0xB14CD0E0 | both |
| villager_backup | 0xB19FC390 | SysBot |
| house_backup | 0xB1E7DF90 | SysBot |
| map_base | 0xB127A8C0 | both |
| field_layer1 | 0xB12868C0 | SysBot |
| field_layer2 | 0xB12F28C0 | SysBot |
| map_activate | 0xB13528C0 | Poker |
| custom_design | 0xB137AF08 | Poker |
| design_zero | 0xB122ED18 | Poker |
| terrain | 0xB1355EC0 | both |
| acre | 0xB137AE6C | both |
| building | 0xB137AAC0 | both |
| airport_color | 0xB15C1180 | Poker |
| weather_seed | 0xB122EAD8 | Poker |
| coordinate_legacy | 0x3E7B1288 | Poker |
| visitor_name | 0xBA0229E0 | Poker |
| visitor_island | 0xBA0229C4 | Poker |
| visitor_list_fixed | 0xBA0228C8 | Poker |
| dodo | 0xAC1B164 | both |
| online | 0x949A748 | both |
| text_speed | 0xBD9B9FC | both |
| time | 0xBD92B00 | both |
| saving | 0x45C465AC | Poker |
| poki | 0xB449E6C8 | SysBot |
| mystery_villager | 0x38CEAEA4 | Poker |
| mystery_species | 0x38CEAFB4 | Poker |
| insect | 0x406A8F98 | Poker |
| fish_river | 0x406E8728 | Poker |
| fish_sea | 0x406FE908 | Poker |
| sea_creature | 0x4066AC2C | Poker |
| stamina | 0xB9763A00 | Poker |
| max_speed | 0xBFB4F34 | Poker |
| jump_distance | 0xBFB5564 | Poker |
| dive_time | 0xBFB5BF4 | Poker |
| swim_speed | 0xBFB6104 | Poker |
| dive_speed | 0xBFB6254 | Poker |

玩家 i 基址 = inventory + i*0x131F70（i=0..7）。SysBot OffsetUtil.cs:17–30 扫描非零名字并按人数-1选择玩家，不保证空洞槽正确；空玩家集合还需防止无符号下溢。SysBot 岛名计算为 inventory-0x2BA5C，Poker 默认 inventory-0x2BA60，实际相差 4 bytes；字段边界必须实机对读。Poker OverrideAddresses :3806 将初始 town name 的减法改为加法，值得单独修复/验证。地图 FieldItemStart = VillagerAddress-0x10+0x22F3F0 = mapZero；7×6 acre，32×32 tile，若 Item.SIZE=8，则 FieldSize=0x54000；缓冲 6×32×32×8=0xC000。两层基址分别 mapZero+0xC000、mapZero+0x78000。Poker NewMapSize=0x6C000，不等同于 SysBot FieldSize，需核对外圈布局，不能盲拷贝。

## 3. 村民、好感度与现有 R95–R104 的连接

Poker Utilities.cs:33–52、GetPlayerDataVillager / SetFriendship，Friendship.cs 构造函数使用 b[70]：
```
heap + 0xB104B4E0 + villager_index*0x13230 + player_index*0x5F0 + 0x46
```
读取 0x47 bytes 中的最后一个 u8；编辑 UI 限制 0..255。此为工具端字段证据，不等于游戏逻辑允许所有值，更不等于照片概率。村民搬家字段 0x1267A/0x126AC/0x1268E，口头禅 0x10794；房屋步长 0x12E8，owner 0x1C4。SysBot VillagerHelper.cs:151–156 对村民和房屋整体同时写主/备区（差 0x9B0EB0）；Poker SetFriendship 的备份写入有被注释路径，不能假设自动同步。

原生验证应沿 R96 的 friendship level table、R100 relocation index、R102 reward query、R103 gift mode、R104 gift price 的真实回调链寻找 GSaveNpc/玩家关系对象访问：重点查 LDRB/STRB +0x46、0x5F0/0x13230 的索引形成、保存/加载拷贝和等级比较。单个结构偏移命中极常见，不能作为命名证据；照片冷却及概率保持未证实。

## 4. Main 指令与常量冲突

| 来源 | 名称 | main RVA | Ghidra VA 候选 | 工具声明的原始/正常 u32 |
|---|---|---|---|---|
| SysBot | AnimationSpeedOffset | 0x43bc3c0 | 0x44bc3c0 | 无 |
| SysBot | WalkSpeedOffset | 0x16127a0 | 0x17127a0 | 无 |
| SysBot | CollisionStateOffset | 0x155fdc0 | 0x165fdc0 | 无 |
| SysBot | TimeStateAddress | 0x328bd0 | 0x428bd0 | 无 |
| Poker | freezeTimeAddress | 0x981b28 | 0xa81b28 | F9203260 |
| Poker | wSpeedAddress | 0x2318428 | 0x2418428 | BD57BE60 |
| Poker | CollisionAddress | 0x2219120 | 0x2319120 | B95BF800 |
| Poker | ActorCollisionAddress | 0x221965c | 0x231965c | 1E2E1000 |
| Poker | aSpeedAddress | 0x43bc3c0 | 0x44bc3c0 | 3F800000 |
| Poker | ParticleScaleAddress | 0x26312b8 | 0x27312b8 | 1E2E1001 |
| Poker | PetalsAddress | 0x3327f4 | 0x4327f4 | 71000D1F |
| Poker | PetalsIntensityAddress | 0x332814 | 0x432814 | 1E2E1001 |
| Poker | LeavesAddress | 0x332c40 | 0x432c40 | 1A9F17E9 |
| Poker | ShopAddress | 0x1b063e0 | 0x1c063e0 | 2A1F03E0 |
| Poker | BGMAddress | 0x1a021b8 | 0x1b021b8 | 1E2E1001 |
| Poker | EatAllAddress | 0x1f08404 | 0x2008404 | 97C2FB0F |
| Poker | EatAll2Address | 0x1565340 | 0x1665340 | B9000268 |
| Poker | MagicAddress | 0x8afeb8 | 0x9afeb8 | 52810840 |
| Poker | MagicAddress+0x14 | 0x8afecc | 0x9afecc | 52810840 |

Poker Utilities.cs:1127–1143 PokeMainAddress 对显示字符串 Flip，因此比较 ELF 4 bytes 应使用小端 u32，而不是把文本顺序直接当文件字节。动画速度 0x43BC3C0 的正常值 0x3F800000 是浮点 1.0 候选，不应默认反汇编成指令。冻结时间、碰撞、行走速度两工具地址明显不同；SysBot 这四项只见声明，未证明当前主流程消费。Poker Main.cs:4630–4751 实际使用 collision/animation/time，wSpeed 标注 replaced，部分效果在 10504–10530 的调用已注释。匹配原字不等价于匹配函数语义，也不授权任何写入。若原字不符，不得猜测新 patch；先查看段、前后指令和调用链，再比对旧版 ELF（当前未提供）。

## 5. ELF 静态验证方法

[脚本](../Scripts/acnh303_external_pointer_audit.py) 使用 SHA256 固定的 3.0.3 ELF，以 PT_LOAD 做 VA→文件偏移转换，区分文件覆盖与 BSS；对每个根输出原始 u64、段权限及 Ghidra VA，对 Main 候选输出 u32、原字匹配、可执行段反汇编窗口；扫描全 text 的 ADR/ADRP + ADD/LDR/STR 有界数据流，给出根槽及 Main 候选的直接引用证据。命中是候选而非完整数据流；间接 GOT/重定位/跨函数传递需另接 R100 的 relocations/xrefs 索引。没有引用也不能断言不存在。

```bash
python -m pip install capstone==5.0.6
python Scripts/acnh303_external_pointer_audit.py --root . --out /tmp/acnh-pointer-audit.json
```

CI 工作流只读原版 ELF，产出 JSON artifact；源码收集与静态验证结果分开。此文提交时尚未获得新的 ELF 扫描执行结果，不能将候选当作验证通过。实机阶段应仅使用读操作获取 Build ID/main/heap、检查每级指针映射与长度、跨场景重启复验，记录真实内存字节及对应函数。禁止自动启用历史写入地址。

## 6. 源码索引

- SysBot: Bot/ACNHMobileSpawner/OffsetHelper.cs、UnsafeOffsets.cs、Bot/Helpers/Static/OffsetUtil.cs、Bot/CrossBot.cs、Bot/Helpers/DodoPositionHelper.cs、Bot/Helpers/Static/JoiningVillagerHelper.cs、Bot/Helpers/VisitorListHelper.cs、Bot/Helpers/VillagerHelper.cs。
- Poker: ACNHPokerCore/Utilities/Utilities.cs:19–284、3777–3866；Main.cs；Dodo/teleport.cs；Custom/Chat.cs；Villager/Friendship.cs。
- 本文收录上述集中定义及相关消费者；未穷举所有内联常数、配置覆盖及外部 DLL 的内存布局。
