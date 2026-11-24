---
title: "R109 · GrowUp 构造候选、Stage 栈对象与迁移分发"
tags: [acnh, native, eventflags, r109]
game_version: "3.0.3"
status: static-partial
---

# R109

[R108 CI](https://github.com/969981/ACNH_Resources/actions/runs/45315969227/job/138182768057) 成功，38点分类、15个重定位、5个C blob、3处VTable写入与迁移绑定通过。实际读取 R107/R108 ZIP、R105 CFG 及 R100 SQLite（380793条）。

## 构造候选
原版49 7B6C8 -> 01106A2C；下一登记01106B50，VTable写入01106AE4位于0x124字节区间内。不能仅凭指针登记宣称完整函数。另两处Rollback注册候选：049490D0->00CE99C4（到00CE9AA8），04A58108->01D56930（到01D569E8）。另两个引用01C72778、01D952DC保留窗口，不使用最近登记推断owner。

## Stage局部目标
029139F0写vptr；029139F4直接BL到0259B18C（C仅return 0xb）；随后02913A00/08从栈对象读vptr/+20h，02913A0C BLR。与R108的原版relocation槽04A85788一致。CFG前驱检查证明这段调用前没有其他入口。新脚本以原版leaf指令mov w0,#0xb;ret作为最终验证门禁。
02913AF4写第二个vptr，02913AF8 CBZ X0 到02913B0C，X0来自[SP+50h]。若为null，绕过嵌套对象02913B04 BLR。沿该分支02913B14、02913B2C候选目标025FD104（C同样仅return 0xb）；非空分支未知，不全称已解决。0259ABC8/025FCC34的独立C原文写入对应vptr，并执行清理流程。8个source blob保留。

## 保存管理器
结合已合并 docs/Native-Pointer-Research-3.0.3/08-保存管理器生命周期与Friendship静态验收.md，026EE1B0分配0x558并注册DAT_05574040；026EE288初始化vptr04A895A8、清零+0x10，含State::cCreateReplaceableSaveDataBuffer。0264D510使用+0x453 bit0选择后端普通+38h或者+130h子对象+38h。此表为管理器而非后端表，六处访问器实际目标仍未知。

## 迁移
使用正确00DB8278入口（原C包含0281CB30），到下一登记00DB8664进行CFG验收。007BDEB4已证实绑定+58h，其父对象来自+F98h；新增原版扫描寻找LDR +F98h后读取+58h的局部候选，跟踪寄存器覆盖，遇分支/调用停止（允许同寄存器CBZ的非空fall-through）。不将相同偏移误认成相同类型；结果须再做全局根与间接分发确认。

## 验收
```powershell
python -m pip install capstone==5.0.6 lz4==4.4.4
python Scripts/acnh303_r109_constructor_dispatch.py --root . --prior github-actions-artifact-14883517767.zip --out artifacts/r109
```
新CI待运行，报告区分 bounded CFG、局部路径与真实GDB。5140E4B4原名、LifeSupport前E98h、NewAchievement枚举、运行时状态无新证据。
