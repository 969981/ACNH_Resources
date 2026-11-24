---
title: "R112 · 迁移转发函数与保存后端完整 0x40 布局"
tags: [acnh, native, eventflags, r112]
game_version: "3.0.3"
status: static-partial
---

# R112

R111 [CI](https://github.com/969981/ACNH_Resources/actions/runs/45322501013/job/138204140774) 成功。实际读取并校验 R111 ZIP 14888082289、R105 CFG、R109 binding、R100 SQLite、原版后端 ELF 窗口。下述为已取得的静态证据；新的R112原版CFG扫描仍待验收。

## 迁移分发闭合（条件化）
028BD090五条指令：020440f9 ldr x2,[x0,#8]；620000b4 cbz x2,028BD0A0；20000012 and w0,w1,#1；40001fd6 br x2；c0035fd6 ret。007BAF6C STP x9,x8,[x21] 将04A92260、028BCB18分别写+0/+8；007BAF78发布055B2618；007BDEB4绑定05358908的+F98子对象+58；01DE6438读取，01DE6450从父+2078取byte，01DE645C经vptr首槽028BD090转发bit0。相同初始化对象且字段未变化时，静态链闭合，非实时确认。

## StageChange
三组普通/替换路径共享04BB46B0->05574040。02912070加载X21，至029127BC无重新赋值；X21跨调用为callee-saved。三组均按+453 bit0选择T[0]或T[0x130]，两次LDR读vptr/+38h，普通返回非空加70h、替换直接用。六个条件化目标如下：
- land_first: 029120D8 -> 0270BD50 / 02912100 -> 02725C40
- land_second: 02912220 -> 0270BD50 / 029122A4 -> 02725C40
- npc: 02912798 -> 0270BD50 / 029127BC -> 02725C40
与R111已验收getter相同，依赖实际后端身份正确。加上R109三个局部目标，共9/38具备局部或条件化静态关系；其余29未解析，且02913B14/B2C非空分支未闭合。0个实机目标。

## 0x40对象布局
| offset | role | ordinary | replacement |
|---|---|---|---|
| 0 | vptr | 04A89728 | 04A8A730 |
| 8 | allocator | manager+8 | manager+8 |
| 10h | buffer A | 9B0E90h | 5B3C40h |
| 18h | buffer B | 9B0E90h | 5B3C40h |
| 20h | descriptor | 2913C0h | 276C40h |
| 28h | auxiliary context | 28h bytes | 28h bytes |
| 30h | pointer queue | 28h bytes | 28h bytes |
| 38h | copy descriptor | 1050h bytes | 1050h bytes |
C构造原文锚点：026F9460 lines 541–551,615,687,1326–1405；026FD710 lines 51–65,73,91,110–215。+28h辅助对象五指针来自manager+3D0/+3F0/+410/+430及backend+30h。+38h对象VTable分别04A8A020/04A8A790，+8/+10绑定buffer A/B，正是026F5030复制描述对象。原版RELR +28h/+30h：ordinary 02723410/0272341C，replacement 02725FD0/02725FDC。下一CI提取函数指令，内部语义尚未完整恢复。字段名均研究命名。

## 三个026F5030调用者
01D59094与01D5D73C共有条件[object+AA0]!=3，成功后+AB7=1；后一处还注册00822F90参数3（04BB4FD0），不是00822C10。01D94D3C之后+12C=1并调用026EEC4C。R100登记入口候选01D58FF4..01D597C4及01D5D6A0..01D5D7E8，第三处无相邻可靠登记入口（搜索范围01D93310..01D96840）。新增CFG验证及prologue候选扫描，不把近邻地址视为已证owner。

## cRollback后续
01DE6B08尾B 0273E2D0；01DE6B24尾B 03EBB160，后续处理仍待恢复。原始原因名、5140E4B4、LifeSupport前E98、NewAchievement、GDB未取得。
## 复现
```powershell
python -m pip install capstone==5.0.6 lz4==4.4.4
python Scripts/acnh303_r112_migration_thunk.py --root . --r111 r111.zip --r105 r105.zip --r109 r109.zip --r100 r100.zip --out artifacts/r112
```
四个artifact由CI按SHA256下载，结合认证原版NSO及源blob。新CI待验收。
