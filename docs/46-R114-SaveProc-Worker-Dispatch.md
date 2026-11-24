---
title: "R114 · SaveProc 899指令分区、请求标志与完成通知"
tags: [acnh, native, eventflags, r114]
game_version: "3.0.3"
status: static-partial
---

# R114

R113三项CI通过，实际下载ZIP 14890603844，SHA256 cb0cca41b9df3d66940a865b276ccd4ef039bdb2ff1d3bf9e644c9ae4619980e，逐条统计899可达指令、33 BL、26间接指令。源C 615行。下述语义由真实C及原版机器码、R100重定位支持；新CI另行复验。

## Worker 地址分区
| start | end exclusive | instructions | direct | indirect | region |
|---|---|---:|---:|---:|---|
| 0283D4C4 | 0283D680 | 111 | 1 | 5 | request init/mode selection |
| 0283D680 | 0283DD14 | 421 | 16 | 11 | migration and identity branches |
| 0283DD14 | 0283DDD8 | 49 | 6 | 1 | precheck |
| 0283DDD8 | 0283DF48 | 92 | 0 | 3 | two save selector tables |
| 0283DF48 | 0283E0A8 | 88 | 3 | 1 | additional dispatch / MovingMark |
| 0283E0A8 | 0283E1C8 | 72 | 5 | 1 | result and user identity |
| 0283E1C8 | 0283E2D0 | 66 | 2 | 4 | completion callbacks and notify |
不是线性执行顺序，迁移分支会跳转。新工具逐条保留地址、机器码、操作数、CFG后继、基本块及已知直接调用。未知间接调用不伪造目标或逐行语义。

## 请求结构、位组与模式
request+0 u64 flags; +8 u32 result; +10/+30内嵌完成回调对象; +50关联玩家索引候选; +54状态; 不声明完整尺寸。manager+38 u32模式由bit10优先得2，bit9得1，bit11得3，否则通常0，特殊条件得4。flags低4位 1..7 分发，0跳过；4..6位 1..5分发，两组阶段函数；7..8位 1..3分发；bit14调用026D189C相关处理；bit15影响前置检查；bit12影响最终提交；bit19选择026D16C0/026D17D8；mask21F0用于提交条件。原始符号名未知。
低四位表04A916E0 stride10h:
- 1: 04A916E0 -> 02833920
- 2: 04A916F0 -> 02834018
- 3: 04A91700 -> 0283405C
- 4: 04A91710 -> 028340D4
- 5: 04A91720 -> 028345E8
- 6: 04A91730 -> 02834AF4
- 7: 04A91740 -> 02835034
模式表04A91770/04A91780 stride20h:
- 0: 026F55B4 / 026F569C
- 1: 026F5738 / 026F5820
- 2: no RELR entry / no RELR entry
- 3: 026F5A40 / 026F5B28
- 4: no RELR entry / no RELR entry
0/1/3三组源码确认针对manager+380/388/3A8选择同步模式，使用+338 mutex及+308/+310资源；2/4无RELR不等于已确认原始零值，新CI读取字节。
结果0未定、1成功、4特殊迁移失败路径、7通用失败回退。只有观察语义，无原版enum名。+54 bit1前置处理已完成、bit0整体完成（并非成功标志）。

## 三个跳板目标
028BF09C：DAT_05AED670+330存在且阶段hash=758F7EAF才执行；ordinary后端+30h getter返回描述符，从+27F500/+27F508两指针求和写UTC calendar，guard+27F520。其他阶段返回1不写。缺保存根或时间根返回0。原版阶段名称仍未知。
028BEBA8/028BED14：分别T+E0/E8后端+30h返回对象，M+78/80第二头部指针。descriptor+40/+48之和及guard+60，处理长度100h；两个头部写A0002h、A0028h、u32+8=2,u16+C=2，u16+E=max(原值, PTR_DAT_04BB21A8的u16)。两个分支的具体原版文件类型待构造器关联。
028BE5F0未有对应C导出，新增有界CFG，不猜测语义。

## 完成通知链
0283E1C4写成功1（仅前值0时）；0283E200将仍未定结果设7；结果1选request+10h内嵌对象，否则+30h。先虚+10h条件检查，再首槽回调0283E234。非成功且全局055A1B78+3C非零时写+3D=1，调用02833830。0283E274 request+54 OR1，之后0283E29C依据mode调用post hook，最后0283E2AC BL 04004360 SignalLightEvent（manager+8非空），返回。不能把bit0完成当作成功。
另一个空请求路径直接同步通知，无请求状态更新。同步事件地址P(manager+8)+20h。

## CloudIslandProcess
原版5状态15登记入口已知；记录vptr04A91C70三槽RELR -> 02840B34 / 02840B60 / 02840B8C。新CI提取15个有界CFG、四个真实处理入口及七个低四位分发入口；相邻登记地址只是上界，外部跳转保留，不宣称完整业务语义。
- CloudIslandProcess::cIdle: 0283CEA0 / 0283CEC0 / 0283CF14
- CloudIslandProcess::cPreSave: 0283CF18 / 0283D010 / 0283D09C
- CloudIslandProcess::cSave: 0283D0A0 / 0283D1CC / 0283D200
- CloudIslandProcess::cPostSave: 0283D204 / 0283D2B0 / 0283D31C
- CloudIslandProcess::cLoad: 0283D320 / 0283D3D0 / 0283D400
## 验收
```powershell
python Scripts/acnh303_r114_saveproc_worker.py --root . --prior github-actions-artifact-14890603844.zip --out artifacts/r114
```
12个C blob、16个重定位、899条逐字节检查、完成通知8处指令、各有界CFG输出。未取得GDB实机、原始请求/结果/rollback enum、LifeSupport前缀、NewAchievement、5140E4B4以及29个Stage目标。
