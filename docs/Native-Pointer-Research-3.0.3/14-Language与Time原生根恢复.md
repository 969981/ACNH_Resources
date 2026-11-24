---
title: Language 与 Time 原生根恢复
game_version: "3.0.3"
status: decompiler-cross-check
runtime_verified: false
tags: [acnh, native, language, time, heap, elf]
---
# Language 与 Time 原生根恢复

[[README]] · [[13-Heap动态根与中文语言偏移对账]] · [[11-跨岛派送与赠礼ELF函数导航]]

## 1. 地址与证据

Ghidra VA 减 0x100000 = Main RVA。本轮直接读取固定 ref fb58d34153d5ad67289476e9f54b08231ed75e9a 的 C 导出及 3.0.3_Unpack 的构造/析构导出；不是本轮原始 ELF 字节重验。

|对象|Ghidra VA|Main RVA|证据|
|---|---|---|---|
|语言对象槽|05AE76C0|059E76C0|038CEFC4 读取、038CDADC 清零|
|语言注册槽|05AE76B8|059E76B8|038CDADC 比较/注销|
|语言重定位别名候选|04BB4EB8|04AB4EB8|03EB8920 等间接读取；原版 relocation 待验|
|时钟对象槽|04DA6480|04CA6480|00A815CC 发布、00A81484 清零|
|时钟注册槽|04DA6478|04CA6478|00A815CC 发布 object+0x40A0|
|时钟重定位别名候选|04BB32E8|04AB32E8|0214C868 等读取；原版 relocation 待验|
|SDK 导入槽|04BE00B0|04AE00B0|040031F0 导入跳转；不是语言对象|

## 2. Language 对象

[038CEFC4](https://github.com/969981/ACNH_Resources/blob/fb58d34153d5ad67289476e9f54b08231ed75e9a/derived/3.0.3/ghidra12.2/c/ef/038cefc4.c) blob 089a93d8b0cb9f74e768305910a80491b65e3822：
- root 非空且 U8(root+0x20)!=0 时返回 U32(root+0).
- 否则分别调用 038CEB30 / 038CED70，按 group + 6*region 索引 66 项 signed byte 表 DAT_0419B5DB；索引 >65 改为0。
- 负项走 DAT_0419B620 的 5 项 int fallback，重新索引。返回非负项，仍为负则 0。
- 038CDFF0 blob ee6dfeff90a4962e78a6926116dc75e570341f51：若对象未初始化，解析允许枚举列表，默认生成 0..15，按精确矩阵值、同组 fallback、列表首项选择；写入对象+0 和 +0x20=1。该函数还处理额外文本分配及释放，未证明导致全局 0x7000 Heap 差。
- 038CDADC blob d93446d1982758f7b0ccb22e143813c2bb0186ff：对注册槽身份匹配后清注册槽，释放语言对象+0x18 指针指向的数据，清语言根；不是完整 factory。

### SDK 映射（不要混淆三套枚举）

|SDK tag|038CEB30 group|038CED70 region|032C5240 独立枚举|
|---|---:|---:|---:|
|ja|0|0|0|
|en-US|1|1|1|
|en-GB|2|1|2|
|fr-CA|1|3|3|
|fr|2|3|4|
|es-419|1|2|5|
|es|2|2|6|
|de|2|4|7|
|it|2|5|8|
|nl|2|9|9|
|ru|2|8|10|
|pt|2|7|11|
|zh-Hans|4|10|12|
|ko|3|6|13|
|zh-Hant|5|10|14|
|pt-BR|1|6|未明确分支，默认1|

原生 SDK tag 已区分 zh-Hans/zh-Hant，但 game locale ID 仍需原始 66 项矩阵字节及资源掩码验收。独立枚举不得直接当作 LanguageObject+0。资源目录 14 项为 JPja USen USfr USes EUen EUfr EUes EUde EUit EUnl EUru KRko CNzh TWzh（RegionLangMask.txt）；上一轮 KOko 是误写，统一更正为 KRko。另有 SDK 18 项表 0410DA5C（00223BA0），不等于 14 个游戏资源包。02659600 将 SDK u64 写入保存后端描述符载荷+0x30；与实时语言 root 不是同一对象。

## 3. Time 对象

[00A815CC](https://github.com/969981/ACNH_Resources/blob/3.0.3_Unpack/derived/3.0.3/ghidra12.2/c/15/00a815cc.c) blob d7aaf36bc4f42ead57051314401a6095edefcbc1：检查旧全局，分配0x40C0（malloc 或 allocator vtable+0x30），注册子对象 object+0x40A0，设置 VTable 0492EB88 / 0492EB68，初始化日期字段及状态，发布 DAT_04DA6480。00A81484 blob f33a152cad8dd191620a0a885b128150e0588190：注册身份匹配后间接析构并清两个槽。

[00A818CC](https://github.com/969981/ACNH_Resources/blob/fb58d34153d5ad67289476e9f54b08231ed75e9a/derived/3.0.3/ghidra12.2/c/18/00a818cc.c)（固定 ref 见表述，链接以 3.0.3_Unpack 路径为准）blob 420d06f7ad3d6e418d6b251c021b77e1c9aff167：
|对象偏移|类型/作用|
|---|---|
|+8/+10/+18|初始、SDK 当前、计算后 Posix 时间|
|+20/+28/+30|参与时间计算的纳秒量|
|+38|时区相关秒数|
|+3C/+60|LocationName / TimeZoneRule|
|+4060|8B 日历打包值；ToCalendarTimeInUtc 的结果，游戏时间语义|
|+4068/+4070|初始化时按 05:00 日界线处理的日历候选|
|+4078|SystemTick 基准|
|+4080|0..999 子字段|
|+4084/+4085|更新入口门禁|
|+408A..4090|待应用日期分量|
|+4094/+4098|更新模式、待处理标志候选|

只读链 calendar=P(M+0x4CA6480)+0x4060。0214C868 Countdown 等消费者通过 PTR_DAT_04BB32E8 访问 4060/4068；具体是否与历史 Heap 6 字节日期地址物理同址仍需快照。本研究不调用函数或修改时钟。038E9970 使用 SDK StandardUserSystemClock 返回计算时间，不是同一对象。

## 4. ELF 验收与跨语言矩阵

脚本 Scripts/acnh303_locale_time_native.py 使用现有认证 NSO 解码器，验证 ELF/NSO 两源 SHA、逐字节一致性，提取四张真实表、相关 relocation、直接 BL 及有界 ADRP 地址引用，输出 JSON/Markdown。地址引用候选不等于完整数据流；未解析别名令 CI 失败，不升级 runtime_verified。原始指令结果待 CI。实际 0x7000 形成原因仍未知；应在六语言 cold boot 时记录 root 所在 mapping、对象实际 Heap 相对位置和创建/释放事件，比较分配尺寸/对齐/顺序，排除版本及配置漂移。不能将两种中文 tag 映射关系当作分配原因。

## 5. 优先顺序

1. 原始 relocation 别名及语言矩阵验收，恢复 Language factory 注册写入者。
2. Time root 与 Poker 默认/CNzh 旧时间地址同会话对账，区别 4060/4068/4070。
3. Online owner/session 旧 active byte 与 Native state 生命周期对账，不把两者强制等同。
4. UI cursor / TextSpeed / Dodo / airport 消费者及 owner，分别追踪，不统一加 0x7000。
5. Inventory 与 Mode3 的跨语言只读实机验证。无实际快照不更新生产指针。
