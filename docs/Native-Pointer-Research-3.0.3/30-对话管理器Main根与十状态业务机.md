---
title: 对话管理器Main根与十状态业务机
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, ELF, MessageWindow, dialogue, FSM]
---
# 对话管理器 Main 根与十状态业务机

[[29-父窗口子序列协调与选项状态]] · [[28-父窗口空闲谓词与UI调度顺序]] · [[26-对话原生状态与关闭谓词]]

## 1. 原始证据验收

[Run 45343056901](https://github.com/969981/ACNH_Resources/actions/runs/45343056901) success，head e4bda9abd4121dcf8c847f9237d2d1cf7ba6236c；[artifact 14896044668](https://github.com/969981/ACNH_Resources/actions/runs/45343056901/artifacts/14896044668)。实际下载 ZIP SHA256 fd03a12f70f12aeae5a58487bcd9c8c597fc723e793465087c2bd18a54b104a4 与 GitHub digest 一致。565 anchors / 72360 rows / 213 gaps（含重叠）；R100 SQLite quick_check=ok。ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664；Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。Ghidra VA=RVA+100000。逐指令证据见 artifact Functions/FUN_<VA>.md/json。

## 2. 上层管理器与控制器构造（C+RELR，构造机器码待CI）

[01BDFF98.c](../../derived/3.0.3/ghidra12.2/c/ff/01bdff98.c) blob 1c77000c6571ecba9c59ef3a1dac85cb0d7c6a28：全局DAT_0533EC08为空时申请89A0h，038C69F0注册对象+8980，安装VA04A3CFB8并发布DAT_0533EC00，调用01BF7564(R+8)，初始化资源MsgARes、MsgVoice及NGwordCheck，最后发布全局对象。R100唯一对应别名 slot RVA04AB28F8→target RVA0523EC08，RELR bss；命名“消息与对话管理器”为研究描述名，非已恢复C++类型名。
[01BDFDE4.c](../../derived/3.0.3/ghidra12.2/c/fd/01bdfde4.c) blob 8a8193d85a6246c23117deafa428af4a9759104e：仅注册对象身份与DAT_0533EC00相等时清该注册全局，调用资源和内嵌owner析构，最终清DAT_0533EC08。
[01BF7564.c](../../derived/3.0.3/ghidra12.2/c/75/01bf7564.c) blob 4fc1a1ea6c413fcb73a194aa160da8b53d68723c：令B=R+8（内嵌owner，不进行指针解引用），分配460h对象写B+0；分配10h写B+8，78h写B+10，8h写B+18，40h写B+20，5AB8h写B+28，210h写B+30。40h对象经01C03904(C,B,P(B+10))初始化，即C=P(R+28)。5AB8h对象经01BFC554初始化，存R+30。
[01C03904.c](../../derived/3.0.3/ghidra12.2/c/39/01c03904.c) blob 3052c98c1ed60ff40c165d8d904d052da8d1409e：C+0=B，C+8/18各分配10h对象，C+10分配3CF8h并调用01B9C210，安装VA04A3EE18，写子对象+22D8=param3；C+20=NULL，C+28..37初始化，C+38清16bit。注意C本身开头是owner回指针，不是VTable。不得将子对象VTable当作C的VTable。

## 3. 实际窗口绑定与动态链

[01C03BB0.c](../../derived/3.0.3/ghidra12.2/c/3b/01c03bb0.c) blob 376bb50ed779b82f2e9599a4d2cf2ada0e10c91e，84/0。取P(P(Main+5639190)+48)，经原生类型检查后发布到C+20；检查M所属Factory活动链，必要时0386B090。随后复制到*P(C+8)、P(C+10)+22E0和*P(C+18)的首个指针槽。
|Ghidra VA|bytes|instruction|
|---|---|---|
|01C03C30|761200f9|str x22,[x19,#20]|
|01C03CB0|097111f9|str x9,[x8,#22e0]|
调用者[01BE0874.c](../../derived/3.0.3/ghidra12.2/c/08/01be0874.c) blob 23aadcfb145cd329e76fc9d4810a23e6d1cc1663，74/1（跨函数tail）；先设置语言相关字符表及Ruby_00.fcpx资源，再于01BE098C 601640f9 ldr x0,[x19,#28]，尾调用01C03BB0。证实调用参数是管理器+28的控制对象。
只读候选链：R=P(Main+0523EC08)，C=P(R+28)，M=P(C+20)。独立UI链M_ui=P(P(Main+05639190)+48)。构造和绑定建立静态同源关系；运行时应检查每级非空、类型一致、M==M_ui、快照稳定。未经实机不加入生产指针表。

## 4. 当前对话序列写入指令（已验收）

01C041A4 137/0；01C043C8 95/0；01C027A0 339/0。01C041A4的D=P(C)=R+8，D+8C模式1/2/3选D+96/9B/9E；相对R分别为94/9E/A3/A6。输入超过46回退0，调用01B97520。
|VA|bytes|instruction|
|---|---|---|
|01C04214|3fb90071|cmp w9,#2e|
|01C0422C|bd4cfe97|bl #1a97520|
|01C04258|154502b9|str w21,[x8,#244]|
|01C0428C|090901f9|str x9,[x8,#210]|
|01C04350|161903b9|str w22,[x8,#318]|
|01C04360|171503b9|str w23,[x8,#314]|
|01C04364|091103b9|str w9,[x8,#310]|
|01C0436C|75da0529|stp w21,w22,[x19,#2c]|
|01C04370|773600b9|str w23,[x19,#34]|
|01C04378|7f720079|strh wzr,[x19,#38]|
映射type 0/1/2→M+218/220/228。若type0、C+38非零、C+39为零且映射+8<3，则参数加3；C+28==2时跳过TalkSeq参数更新。Notice分支写序列+310并将值转换float用于资源属性调用。无证据命名为ChatId或TextSpeed。

## 5. 47种配置映射原版跳转表与C预测
01B97520 15 rows/1 gap（原始间接BR）。VA01B9752C cmp w8,#2e；01B97530 b.hi default；01B97534/38 ADRP+ADD表RVA04077B78；01B9753C ADR目标基RVA01A9754C；01B97540 LDRB；01B97544 scaled ADD；01B97548 BR。47个u8索引，目标=01A9754C+4*table[id]。默认路径清22字节（STUR XZR +E，STP XZR/XZR +0）。新增脚本分支只在完整32字节指令签名与47表字节均ELF/NSO匹配时展开目标。
已逐项转录C预期输出到 [dialogue_controller_evidence.json](../../derived/3.0.3/external_pointers/dialogue_controller_evidence.json)，字段[+0,+4,+8,+C,+10,+14]宽度[4,4,4,4,4,2]，47项按+0分类：Talk 31、Notice 10、Monologue 6。该表为C预期输出，不是已经验收的原版逐分支执行结果。下一步需将47索引与认证目标及写入指令逐项对账，不因C预测就消除CFG缺口。

## 6. 上层业务状态机首次恢复（C证据）
[01BF83AC.c](../../derived/3.0.3/ghidra12.2/c/83/01bf83ac.c) blob 6ad92af90914590502726a7ce0833f90bbd17157；01BDFF98以R+8调用该函数。共享FSM base B+40=R+48；current B+48=R+50，count B+68=R+70，records B+70=R+78。每记录40h，包装VA04A3E338，owner=B。以下原名/回调来自反编译C，待字节级验收。
|ID|名称|entry VA|update VA|exit VA|
|---:|---|---|---|---|
|0|cState_Idle|01BF87CC|01BF87D0|01BF87D4|
|1|cState_Ready|01BF87D8|01BF8800|01BF9CD8|
|2|cState_In|01BF9CDC|01BF9D74|01BF9F30|
|3|cState_Play|01BF9F74|01BF9FB0|01BFA300|
|4|cState_Fermata|01BFA30C|01BFA310|01BFA394|
|5|cState_Pause|01BFA398|01BFA4A4|01BFA834|
|6|cState_Out|01BFA838|01BFA8E4|01BFA9F0|
|7|cState_Stand|01BFAA0C|01BFAA48|01BFAB5C|
|8|cState_Suspend|01BFAB98|01BFAB9C|01BFABCC|
|9|cState_Choice|01BFABD0|01BFAC9C|01BFB1C4|

与UI MessageWindow的6状态、TalkSeq的7状态、SelectTalkSeq的5状态为独立状态域。上层cState_Out/Idle与UI关闭的关系、cState_Choice与UI cChoice生产者、NPC EventFlow通知需实际回调证据；不因名称相似就认定。01BF7FFC/01BF828C/01BA83F4等已加入验收入口。

## 7. 下一步与边界
commit ee0bf415bad62c631986900b358f71d25505e4d8新增19入口、47项跳转表认证和全text直接B/BL候选扩展。旧IsChatEnded、ChatId、TextSpeed、0x7000差异、NPC EventFlow完成均未闭合。继续核验manager构造/析构原指令、10状态注册、Out/Idle/Choice回调、47项映射。runtime_verified=false、production_eligible=false。
