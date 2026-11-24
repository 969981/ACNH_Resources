---
title: R117 槽位 Getter、改造描述符与赠礼组合谓词
version: "3.0.3"
status: static_partial
runtime_verified: false
tags: [ACNH, Native, Gift, Remake, R117]
---

# R117 实例级赠礼判定

## 1. R116 验收

[Actions 45338885764](https://github.com/969981/ACNH_Resources/actions/runs/45338885764) success。英文82项交互枚举、11178项物品映射、MoneyBox getter/setter 合成测试通过。真实调用：01AF0940/01AF0D8C BL 01AEB510；014542C8 BL 01AEB510；0145417C/027D2290 BL 01AEB1F0。UI +315 引用19处候选。

## 2. 槽位 Getter

Ghidra VA 030BFE5C（Main+0x2FBFE5C）六条指令：
- 030BFE5C ldrb w9,[x0,#0x2c3]
- 030BFE60 tst w9,#1
- 030BFE64 ldrb w8,[x0,#0x315]
- 030BFE68 ccmp w8,#0,#0,ne
- 030BFE6C cset w0,ne
- 030BFE70 ret

等价于 !(flags_2c3&1) || flag_315!=0。CCMP fallback NZCV=0，NE 为真。030BFE34 在 +2C3 bit0 改变时清零 +315。0319485C 写入赠礼过滤位，其他 UI 模式亦共享此字段。R117 扫描直接 BL 与指向 getter 的原版 relocation slots，后续需要确定 VTable、调用对象及确认操作。不能把 getter=true 直接命名为可确认。

## 3. 改造门禁原版数据链

01B07660 / 01B081A0 / 01B032D0 共同检查：01AFCFA0()!=0 && 01AFD600(wrapper)!=NULL && (*descriptor&0x18)==0x10 则拒绝。不是看到 RemakeID 就拒绝。

cf/01afcfa0.c：ItemParam CB5EB33F，CRC32("RemakeID s16")=CB5EB33F；-1 视无关联，按 ItemRemake ID 查行。ItemRemake 0CB402A3 offset118，实际读取 signed byte，<8 返回原值+1，否则0。原始表名义宽度2，不能误用整列宽度解读运行时指令。不存在行返回0；有效行但内部字段缺失的运行时回退需要另外区分。该字段前期 R107 已关联 fabric count。

d6/01afd600.c：读取 ItemKind 的 6 项描述符类型缓存 PTR_DAT_04BC0288，选择原始记录中不同字段。case0 返回空；case1 要求 CanFtr，返回 wrapper+0xC；case2 调用 01AE4D10；case3 Kind 0xA8 或0x61 返回 wrapper+0xC；case4 Kind0x78 返回 wrapper+0xE；case5 Kind0x9D 返回 wrapper+0xC；不匹配为空。wrapper+0xC 对应 raw+4，+0xE 对应 raw+6。不能将所有物品统一按 raw+4 判定。

3f/01a93f70.c 为实际缓存写入者：读取 ItemKind 6B749E8A offset16 width4；两种表格式使用 04A32A60/04A32AC8 六项字符串表，通过 CRC32B、排序、查找得到 index，最后按 BCSV row 写入 PTR_DAT_04BC0288+8 数组。R117 提取双表、计算完整189 Kind 覆盖并关联11178 ItemParam，待新CI验收。

## 4. 组合谓词

原版 UI wrapper 先检查查询 ID 有效，MoneyBox/CanFtr/金额非零拒绝。接下来 leaf 检查改造描述符门禁、01B085E0 包装类别门禁。CanGift runtime result 为真且非零包装状态时，普通递归调用 01B079EC 后的 leaf；生日 Kind0xB9 不递归，直接查 CanNpcBirthdayPresent。其他路径分别查 CanNpcPresent / CanNpcBirthdayPresent。包装 state3 subtype12/13/14/15 通过该层，其他 subtype 不通过；state1通过，state2拒绝（均以稳定 CanGift=true 为前提）。CanGift=false 不自动意味着不能送；01B085E0 在此返回真，随后仍查独立类别权限。

R117 gift_leaf 接收真实已解析的 runtime CanGift、remake_block、递归结果等作为输入；未知返回 None，不将静态类别许可当实机赠礼结果。MoneyBox 拒绝门禁属于外层；递归结果应独立按 leaf 求值。模型不自动生成或写入物品，也不实现改造/包装变更操作。

## 5. 新产物

Scripts/acnh303_r117_instance_predicate.py：原版 NSO 指令比对、slot getter 4项真值、relocation/direct BL 证据、6项描述符双表提取、11,178项 remake join、组合谓词的合成断言；SQLite r117_remake_item，Web gift_web_sidecar_r117.json，actual_remake_block 仍 null。新增 CI 尚未验收；GDB 未执行。PR #95 尚未合并，不能覆盖 base 并行研究。

下一阶段：验收 R117，恢复六项名称及枚举0x61/0x78/0x9D/0xA8对应 Kind，解析 01AE4D10 特例，追踪 getter VTable实际调用，继续完整原版解包归一化、F1246E5F 名称和玩家配方状态。
