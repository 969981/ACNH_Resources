---
title: Heap动态根与中文语言偏移对账
game_version: "3.0.3"
status: source-crosswalk
runtime_verified: false
tags: [acnh, pointers, heap, locale, elf]
---
# Heap 动态根与中文语言偏移对账

[[README]] · [[04-Heap到Main根指针与存档结构]] · [[09-保存后端析构与玩家Payload]] · [[10-跨岛派送指针与Native交付链]] · [[11-跨岛派送与赠礼ELF函数导航]]

## 1. 本轮实际源码证据

- [Poker Utilities.cs 固定版本](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L110-L123)，blob 04529c6d3c478807d51990bc717af37a5df2edd3。
- [SysBot OffsetHelper.cs 固定版本](https://github.com/969981/SysBot.ACNHOrders.CHS/blob/5ed3009dc57d59bbfa86c31d51045d8826e64abb/Bot/ACNHMobileSpawner/OffsetHelper.cs)，blob 7475f60e2261a41033eca43199c2a3dec8903344。
- [Poker teleport.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Dodo/teleport.cs)、[Freezer.cs](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Map/Freezer.cs)、[App.config](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/App.config)。
- [八阶段历史 ELF 研究](https://github.com/969981/SysBot.ACNHOrders.CHS/blob/5ed3009dc57d59bbfa86c31d51045d8826e64abb/docs/09-reverse-engineering/acnh-3.0.3-eight-phase-pointers-and-self-actor-readonly-diagnostic.zh-CN.md)。
- [Build ID index](../../derived/3.0.3/external_pointers/build_id_pointer_index.json)。

## 2. 中文偏移：确切源码对账

Poker Utilities L121 定义 ChineseLanguageOffset=0x7000，引用只证明工具端候选，不是原生 locale 枚举或稳定地址。

|字段|Poker default Heap|default+0x7000|SysBot CHS Heap|结果|
|---|---|---|---|---|
|OnlineSession|0x0949A748|0x094A1748|0x094A1748|相等|
|TextSpeed|0x0BD9B9FC|0x0BDA29FC|0x0BDA29FC|相等|
|ReadTime|0x0BD92B00|0x0BD99B00|0x0BD99B00|相等|
|Dodo|0x0AC1B164|0x0AC22164|0x0A2A7E44|不等；分别保留候选|

Poker 源码另保留旧 Dodo 0x0AC1A164、旧 session 0x09499748、旧 text 0x0BD9A9FC、旧 time 0x0BD91B00；SysBot Dodo 注释 0x0A2A6E44、0x0AC21164。这些仅为历史注释，不据此选择实际地址。SysBot 的 0x0A2A7E44 无证据证明减 0x7000 得到非中文版本；不可自动推广到 Inventory、地图、光标、机场搜索字段等。

## 3. 原程序中文判断逻辑与缺陷

[IsChinese L4152–4182](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L4152-L4182)：读取 6B 时间（LE u16 year、month/day/hour/min 各 u8），仅默认位置超过上限时才尝试 +0x7000。第二位置未超过上限则 true。没有校验月/日下限、闰年、hour<24、minute<60；全零可能被当有效非中文数据；两个位置都合理时默认 false；无法区分简中/繁中，也无法排除分配变化。ReadTime 可由 App.config 覆盖，不能把默认常量当现场配置。

[GetDodo L3610–3626](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L3610-L3626) TCP 分支按 chi 加偏移，USB 分支只读默认；[SetTextSpeed L3658–3686](https://github.com/969981/ACNHPokerCore/blob/85e50a1ad182c926b2ebd51c00abc612e0a859d5/ACNHPokerCore/Utilities/Utilities.cs#L3658-L3686) USB 分支的 chi/非 chi 与 TCP 相反。Freezer TCP 使用 chi+0x7000；teleport CheckOnlineStatus 也根据 chi 读候选。故不能用 USB 分支作为语言地址真值。本轮仅核对源码，不改生产写入，不收集 Dodo 或第三方身份。

建议从游戏设置独立记录 locale；时间两候选进行真实日期及连续变化只读校验，两个都成立则 AMBIGUOUS，都不成立则 UNKNOWN，不能据时间推断 locale。

## 4. Main 根恢复矩阵（逐业务而非统一偏移）

|Heap 字段组|更稳定 Main RVA 或候选|证据与限制|
|---|---|---|
|Inventory/slot21/wallet/bank/miles/storage|0x5474040；重定位别名 0x4AB46B0|认证双后端、字段描述符和读取器；别名关系不是另一个独立 manager；玩家实际 identity 与快照待验|
|村民/好感度|0x5474040|已有 NPC descriptor/stride 静态布局；见 09 与 Build ID index|
|本岛地图/房屋|0x5474040 → Mode0|旧 map、backup 和 local snapshot 区域不能混同；同 epoch 地址对账|
|在线四地图层|0x5474040 → Mode3|primary +0x1E728 候选；resolver slot+0x20 与 primary slot+0x10 不同；四域同步验证|
|联机 active byte|0x527D558；0x526C708；0x59E6A60|Online owner/machine/match 有历史生命周期证据；状态值和旧 active byte 非等价|
|Dodo|0x4B60F48；0x526D370|Pia/NEX 与 UTF16 对象只是研究候选；尚未证明五字节显示码消费者|
|角色坐标|0x4BFAE30|注册表链静态；尾/prev 不是 Self 身份；见八阶段文档|
|机场对话/速度|0x4AA9CD8|旧 ChatCoordJumps 候选，不能称 UI Manager 或 text speed 根|
|ReadTime|未知|Main TimeState 代码 RVA 0x00328BD0 与 Poker freezeTimeAddress 0x00981B28 不是读取指针；需从真实日期更新消费者追 owner|
|背包光标|未知|0x43E0599C 是旧 Heap；Inventory descriptor 不等于 UI cursor|
|目标岛、访客名称、返航身份|未知|搜索 UI 与实际 session/scene owner 分开；候选 online manager 未确认 identity|
|Native DropItem|未知|02674A80 是通用背包变更消费者而非已证 DropItem|

根以 Main RVA 表示；Ghidra VA=RVA+0x100000 仅适用于已核对的导出基址。不同 ELF SHA 必须保存各自来源。Main 相对槽不是绝对 Heap 地址；物理地址相等也不自动证明语义相等。

## 5. 额外旧地址候选

SysBot OffsetHelper 注释提供 inventory player other 0xB28301B8、villager backup 0xB19FC390、house backup 0xB1E7DF90、online building 0x2487AA40 / 0xB030C9C0 / 0xB41FD6F0、online item 0xB41094F0 等历史值。现行第二 item 候选 0xB5BACD08。保留为历史证据；不是同一启动中已确认的候选，不能用于自动生产回退。Poker 与 SysBot 本岛 Field 旧局部映射也有不一致，不强行统一。

## 6. 原始 ELF 与快照验收

1. 先运行 [[11-跨岛派送与赠礼ELF函数导航]] 的认证导出；记录 ELF/NSO SHA、完整 Build ID、重定位槽、构造/发布/清零/消费者。
2. 用同一 Build ID 的自有离线快照进行 CNzh、TWzh、JPja、EUen、USen、KOko 的 cold boot 分组，至少三个独立启动，固定同存档及游戏时间；分开记录平台、配置、语言、场景、会话 epoch。
3. 每个 Heap 候选仅保留来源与只读语义，不保存实际私有字符串；匹配已确认的对象生命周期、独立时间序列与实际玩家身份。两个候选同真时输出歧义，不择其一。
4. 原始 ELF 无动态 Heap 地址；应结合重定位和只读 dump 的实际 owner 查证 Main 根。不能使用单个常数命中、原始 Heap 地址减 MainBase、或同一快照中的碰巧相等替代跨启动证明。
5. 本轮未取得新原始指令或实际快照。上轮 CI 查询未返回对应 push 工作流状态，不据此宣称失败或成功。

## 7. 优先级

P0: locale independent source + actual readTime owner；online state/角色身份；Inventory 和 Mode3 跨语言实机比对；cursor UI root。P1: Dodo UI 显示 consumer、TextSpeed owner、airport dialogue；目标岛/本岛身份。R109 赠礼原始枚举/CFG/ItemKind/位图写入者仍在 [[12-R109赠礼实例判定与字段消费者]]，不因 locale 对账而提升证据。
