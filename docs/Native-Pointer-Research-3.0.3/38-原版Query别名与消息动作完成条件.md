---
title: 原版Query别名与消息动作完成条件
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, EventFlow, ELF, BindInfo, Query]
---
# 原版 Query 别名与消息动作完成条件
[[37-EventFlow动作工厂与消息业务桥接]] · [[36-机场EventFlow消息关联与显式退出]]

## 1. 原版回调验收
[Run 45373852854](https://github.com/969981/ACNH_Resources/actions/runs/45373852854) success；[artifact 14910358270](https://github.com/969981/ACNH_Resources/actions/runs/45373852854/artifacts/14910358270) ZIP实测SHA256 e40894ca4a996e61b3a0f720033cced0400cb44d14503e9e937c248c30814f1e，与GitHub digest一致。828 anchors/109057 rows/278 gaps（含重叠）。ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664，NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1，Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。R100 SQLite quick_check=ok。VA=RVA+100000。
00AD8904 351/0，00AD8E80 327/0，00AD8794 92/0，00AD8430 212/0，00ADA684 2/0，00AD948C 2/0。00ADA684和00AD948C均为mov w0,#1;ret（20008052 c0035fd6）。修正R37：前者不是读取完成状态的谓词，而是恒真虚方法。

## 2. 原版业务桥接机器码
|VA|bytes|instruction|
|---|---|---|
|00AD886C|680640f9|ldr x8,[x19,#8]|
|00AD8870|084941f9|ldr x8,[x8,#290]|
|00AD8874|150940f9|ldr x21,[x8,#10]|
|00AD8878|d50000b5|cbnz x21,0x9d8890|
|00AD887C|081140f9|ldr x8,[x8,#20]|
|00AD88D8|888e8452|mov w8,#2474|
|00AD88DC|a0020191|add x0,x21,#40|
|00AD88E0|21008052|mov w1,#1|
|00AD88E4|bf6a2838|strb wzr,[x21,x8]|
|00AD88E8|1e8acf94|bl 0x3dbb160|
O为Action对象，E=P(O+8)，X=P(E+290)，B'=P(X+10)或P(P(X+20))。00AD87F8调用01BE5840、00AD8854调用01C01FF0；最终清B'+2474并03EBB160(B'+40,1)。静态桥接已机器码验收；B'与全局R+8的实机同一性未验收。

## 3. 实际完成状态写入
O+B0为u32字段。三处原始写入均为68b200b9 str w8,[x19,#b0]（w8=1）：
- 00AD8B8C：入口前置条件或资源解析不满足；
- 00AD8F9C：Dialog路径完成条件通过；
- 00AD9114：普通消息更新路径相应条件通过。
00AD8FA4 284965b9 ldr w8,[x9,#2548]；00AD8FA8 1f050071 cmp w8,#1；00AD8FAC 294d65b9 ldr w9,[x9,#254c]；00AD8FB0 29050051 sub w9,w9,#1；00AD8FB4 2209423a ccmn w9,#2,#2,eq；00AD8FB8 e8279f1a cset w8,lo。该组计算结果有效谓词（state1且value非0/FFFFFFFF）；随后检查B'+48状态0/7/8及O.vcall70、68等条件。需保留完整条件，不将O+B0==1等同玩家选择成功（入口失败也写1）。
R100 VTable RVA4833A58从+0至+70的目标为00ADA528,00ADA628,00ADA3C4,00ADA3D8,00AD948C,00AD9494,00AD9498,00ADA684,00AD8904,00AD8E80,00AD94A8,00AD94AC,00ADA450,00AD94B0,00ADA68C。消费者仍待查证。

## 4. 原版BindInfo别名（直接二进制解析）
原版 e10617820db06889e1638499478da0de_NCA/1/EventFlow/Info/BindInfo.byml，blob 847e758da4fc0ab68ddef0876ec19548d49f9719，9460B，magic YB、version3、little endian。独立读取header偏移4/8/12的key/value字符串表及root偏移，递归解析C0数组、C1字典、A0字符串索引，与UnPack/1/EventFlow/Info/BindInfo.json（blob c360bec4524dd8367992a46ee67c974e029a8ff2）tree.root完整相等。50 ActionBindData、77 QueryBindData。
GeneralTalkChoice2..7及NpcGeneralTalkChoice全部映射EventFlowQueryGeneralChoice；SubflowResultChoice2..10全部映射EventFlowQueryCheckSubflowResult。MurmurHash3 x86_32 seed0 canonical hash分别7CB4E1B6/48CE8C2B。R37按别名查工厂无结果不能据此认为无实现。
011848C0 C blob ffff5493506155a53536881d01d64b37fe5238d3 读取EventFlow/Info/BindInfo.byml的QueryBindData，按0xD8字节节点分配，读取Key/Value，调用010F6E30(&DAT_050B8DF8,key,value)。01184470 128/0：01184658 884240f9 ldr x8,[x20,#80]；0118465C 680a00f9 str x8,[x19,#10]，确认匹配后替换wrapper名称指针。01184700 C blob 3d9bdfeb8472942366951170a270d4ff9e60497b 将wrapper+8作为名字对象传0070FB10，后者hash查Query对象表并0070FCAC BLR vtable+30。该路径静态成立；GeneralChoice实际构造/回调需新扫描。
 
## 5. 事件调度间接跳转
0068D480当前51/1。原始地址形成0068D4D0 ced501f0 adrp x14,#4048000；0068D4D4 ce111391 add x14,x14,#4c4。0068D538 a8224039 ldrb w8,[x21,#8]；0068D53C 1f110071 cmp w8,#4；0068D540 08feff54 b.hi default；0068D544 89000010 adr x9,#58d554；0068D548 ca696838 ldrb w10,[x14,x8]；0068D54C 29090a8b add x9,x9,x10,lsl#2；0068D550 20011fd6 br x9。
新增commit 1c285629612ef0578d0a972fed63331b819c0af7 检查上述签名及RVA40484C4五项byte表双源一致，范围0..4，目标base58D554；同时新增两canonical名字扫描及Query alias loader/wrapper入口。CI [45379456038](https://github.com/969981/ACNH_Resources/actions/runs/45379456038) 进行中，尚未宣称跳转表展开或canonical构造已验收。
runtime_verified=false，production_eligible=false。
