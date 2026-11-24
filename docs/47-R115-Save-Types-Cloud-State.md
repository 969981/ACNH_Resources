---
title: "R115 · SaveProc 文件类别、提交与 CloudIslandProcess"
tags: [acnh, native, eventflags, r115]
game_version: "3.0.3"
status: static-partial
---

# R115

R114 [CI](https://github.com/969981/ACNH_Resources/actions/runs/45330113052/job/138229041240) 全部通过。实际下载 [artifact 14892055136](https://github.com/969981/ACNH_Resources/actions/runs/45330113052/artifacts/14892055136)，SHA256 1e7b7bae455c299c47a1a44132c47b66352c6ae5eca3252fb7462896579f98a7；899 worker 指令、211 leaders、16 RELR、4个零值mode hook、完成顺序确认。

## 文件类别
026ED290 登记10类原版类型字符串与文件基名；02701270 / 027014C0 按索引访问05573E38/05573E40 stride10h，拼接数据/头部后缀。索引0基名来自040A9AF5，新CI读取原始字符串，不凭SaveMain类型猜测原始字面量。
- 0: base-name pending raw string / ::Game::SaveMain
- 1: personal / ::Game::SavePersonal
- 2: postbox / ::Game::SavePostBox
- 3: photo_studio_island / ::Game::SavePhotoStudioIsland
- 4: profile / ::Game::SaveProfile
- 5: mvoption / ::Game::SaveMovePlayerOption
- 6: wherearen / ::Game::SaveWherearenIslands
- 7: cloud_island_s / ::Game::SaveCloudIslandS
- 8: cloud_island_m / ::Game::SaveCloudIslandM
- 9: cloud_island_l / ::Game::SaveCloudIslandL

## 七种低四位操作
| value | entry | instructions | role |
|---|---|---:|---|
| 1 | 02833920 | 446 | main plus selected player group |
| 2 | 02834018 | 17 | main read |
| 3 | 0283405C | 30 | selected player group |
| 4 | 028340D4 | 325 | photo_studio_island |
| 5 | 028345E8 | 323 | profile |
| 6 | 02834AF4 | 336 | mvoption and player group |
| 7 | 02835034 | 323 | wherearen |
1/2通过028367F0加载主文件，1另调用02836B14多次处理玩家；3检查request+50<8并调用同一玩家组读取helper。02836B14实际涵盖personal/postbox/photo_studio_island/profile/wherearen等分支。4/5/6/7在原版BL路径分别传路径索引3/4/5/6，均调用0283BFFC成对文件验证；4/5/7前置026F3AD0/026F3DE0/026F27C0分别初始化T+E0/E8/188后端及M+78/80/88头部，6用02836B14参数2,-1并处理T+180/M+4C0。命名是恢复语义而非原版操作enum。
0283BFFC先检查两个文件及大小（第二个0x300），再调用读取/验证回调。结果6对应尺寸/格式/验证不匹配的多个路径，4对应两文件缺失等路径，7通用失败，1成功。不要将内部结果码与文件系统原始结果完全等同。

## 028BE5F0
366条原版有界CFG，首先找M+94..CC首个值2的玩家槽（8项 stride8），T+60+index*8读对象；更新多处描述符头部。要求M+114==2后call028BEBA8、M+11C==2后call028BED14；成功尾B 028BF25C，后者C确认T+180、M+4C0版本头部处理。其间间接目标未全闭合。尾目标有82行C，新增CFG。

## 最终提交与失败路径
026D16C0: 锁+20，+44非零才commit；+45决定两种调用参数；026D17D8显式传CommitOption。SDK返回非0则结果7，不清dirty；成功或原无待提交返回1。成功清+44，原dirty且+40==0且+45非零时Unmount并清+45。026D189C是另一路清理，引用计数不为0有断言调用，不等同提交。
02833830: TLS非空时调用对象+20的虚+18两次，线程名称非SceneLoad则调用TLS对象vtable+60/+58(0x1f)，进入SleepThread无限循环。非所有失败都会进入；SaveProc完成位写入位于其后，不能保证失败后总有完成通知。

## CloudIslandProcess 15个回调
| state | record offset | entry | instructions | observed |
|---|---|---|---:|---|
| cIdle | +10h | 0283CEA0 | 8 | signal if previous state exists and sync nonnull |
| cIdle | +20h | 0283CEC0 | 21 | request+18 indexed dispatch |
| cIdle | +30h | 0283CF14 | 1 | ret |
| cPreSave | +10h | 0283CF18 | 62 | reset progress and enqueue +268 |
| cPreSave | +20h | 0283D010 | 35 | +288 0 waits; 1 dispatch then state2; otherwise state3 |
| cPreSave | +30h | 0283D09C | 1 | ret |
| cSave | +10h | 0283D0A0 | 75 | two indexed callbacks and conditional 01C7CF1C |
| cSave | +20h | 0283D1CC | 13 | conditional state3, optional manager+520 clear |
| cSave | +30h | 0283D200 | 1 | ret |
| cPostSave | +10h | 0283D204 | 43 | enqueue +2A0 |
| cPostSave | +20h | 0283D2B0 | 27 | +2C0==1 then result 1/7/8; clear +68 and state0 |
| cPostSave | +30h | 0283D31C | 1 | ret |
| cLoad | +10h | 0283D320 | 44 | clear +2E8 and enqueue +2C8 |
| cLoad | +20h | 0283D3D0 | 12 | +2E8 nonzero then result 1 or7; clear +68 and state0 |
| cLoad | +30h | 0283D400 | 1 | ret |
五个+30h回调均单条RET。状态机位于manager+220h；请求指针+68h，结果写请求+20h（不是普通SaveProc请求+8h）。PreSave入队+268h，PostSave+2A0h，Load+2C8h，三个原版队列标签由新CI读取。PostSave仅+2C0==1时结束，Load仅+2E8非零时结束，写结果后清+68并切Idle；PostSave观察到结果8，不能并入普通SaveProc原始枚举。PreSave +288==1进入Save，否则非零进入PostSave。Save +B8/+C4控制进入PostSave，可能清普通保存管理器+520。
三个vtable wrapper 02840B34/60/8C由真实RELR确认，新CI生成有界CFG，尚不声明全部最终分发语义。

## 验收
16个C blob锚点；复验1800低位指令及15回调全部原版字节、三个wrapper slot、四号处理器尾跳，提取3 wrapper与6补充CFG及4字符串。R115 CI待验收。剩余29个StageChange、Rollback enum、LifeSupport前E98、NewAchievement、5140E4B4、真实GDB均未完成。
