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

[[README|研究知识库导航]] · [GitHub 导航](README.md) · [研究合订版](../28-ACNH-3.0.3-Native-Pointer-Research.md)
