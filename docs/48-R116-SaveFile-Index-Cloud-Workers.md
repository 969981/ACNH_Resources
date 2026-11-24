---
title: "R116 · SaveFile 对照数据库与 CloudIsland 工作器"
tags: [acnh, native, eventflags, r116]
status: static-partial
---

# R116

R115 三项CI通过；实读 R115 artifact 14891119060 与 R114 14892055136，SHA256见 evidence.json。查询原版R100 SQLite 31个连续RELR槽。未知字段保留null。

## 状态记录
02840B34/60/8C各11指令，LDP member,adjust,[record,+10/+20/+30]；bit0=adjust&1；若member|bit0==0直接RET；self=P(record+8)+(signed adjust>>1)；bit0=1则从self的VTable+member取实际函数；最终BR。第三个使用X2保留X1。0x40状态记录为vptr、owner、三组16字节成员函数记录。逐状态adjust实际值仍需对账。

## 工作器
- CloudIslandPreSave: task +268h, callback +278h -> 0283CBA8, progress +288h
- CloudIslandPostSave: task +2a0h, callback +2b0h -> 0283CC58, progress +2c0h
- CloudIslandLoad: task +2c8h, callback +2d8h -> 0283CCBC, progress +2e8h
0283C6A8真实C构造器登记三者。PreSave: 05574040为空则+288=2返回false，否则026F5738前置同步，02700EE8得到variant相关结果，04A91810按selector分发，检查+288==1，026F5820后置同步。02700EE8 C导出不完全，观察T+190/198/1A0与M+50E/50F/510关联，不能断言三种云岛尺寸和顺序。PostSave/Load未有独立C，新增有界CFG。04A91810..04A91900共31个RELR槽，04A918A8为另一索引分发锚点，不能把31项视为同一数组。

## 保存文件索引
M=P(main+5474040h), T=P(M+10h), s=匹配槽非玩家ID。数据尺寸为原版读取或分配长度，不代表实机文件验证。
| index | name | data size | backend | header | load |
|---:|---|---|---|---|---|
| 0 | main | 0x9b0e90 | T+0x00 | P(M+0x50) | 028367F0 |
| 1 | personal | 0x74a40 | T+0x60+8*s | P(M+0x60)+0x300*s | 02836B14 |
| 2 | postbox | 0x47430 | T+0xA0+8*s | P(M+0x70)+0x300*s | 02836B14 |
| 3 | photo_studio_island | 0x2f650 | T+0xE0 | P(M+0x78) | 02836B14 / 028340D4 |
| 4 | profile | 0x69560 | T+0xE8 | P(M+0x80) | 02836B14 / 028345E8 |
| 5 | mvoption | 0x74080 | T+0x180 | P(M+0x4C0) | 0283B370 / 02834AF4 |
| 6 | wherearen | 0xb8a4e0 | T+0x188 | P(M+0x88) | 02836B14 / 02835034 |
| 7 | cloud_island_s | unknown | T+0x190 (candidate) | unknown | unknown |
| 8 | cloud_island_m | unknown | T+0x198 (candidate) | unknown | unknown |
| 9 | cloud_island_l | unknown | T+0x1A0 (candidate) | unknown | unknown |
基名后缀 .dat / Header.dat，前缀取决于调用上下文。普通main文件缓冲区不同于replacement描述符。云岛映射候选，逐文件保存处理器未知。

## 02836B14
param3==1时要求param4<8，Personal M+90/+94 stride8；PostBox M+D0/+D4 stride8；两组独立匹配state1及player id。026F9208取P(P(T+60+8*s)+10)，026F9328取P(M+60)+300*s并检查s<M+58。026F34D0经T+A0+8*s虚+18，026F3708取P(M+70)+300*s并检查s<M+68。param3!=1使用026EFCA4/026EFD64/0283BF14/026EFE34。027019B0/02701A90构造路径，0283BDE0分别处理1/2/3/4和受M+50D位条件限制的6。成功后02812E10/027ECC08；归并4/6/7。新增有界CFG，边界待确认。

## 配对验证
0283BFFC比较期望数据尺寸与头部300h，双文件元数据成功后读取/验证；1成功、4缺失类、6配对不一致或验证失败、7其他失败。0283BDE0独立分类1/2/3/4由虚+18/+10/+20返回决定，2/4置结果6。原始枚举名未知。

## 验收
19个源码blob、33条wrapper、31个selector区域RELR、3个worker和31个有界selector CFG；逐文件结构化索引。新CI待验收。29个StageChange、Rollback枚举、LifeSupport前缀、NewAchievement、5140E4B4、实机GDB尚无新证据。
