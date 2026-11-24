---
title: ACNH 3.0.3 R132 - Cloud async job
tags: [ACNH, ARM64, save, R132]
---

# R132 云岛下游任务

关联 [[63-R131-Cloud-Process]]，固定 R131 Artifact 14898099798 SHA256 fbedb62dccd7fcd9423cd4f14ab1ba6a91c9dd8b9a1e38481ad022955479b17c。

## Type 3 -> Type 2
01C7CF1C 拒绝 active && !done 或输入 type0。type3 从 P(05351250)+0x58 取得关联上下文，经01C7A574复制组合描述符，将 task+0x40设2、+0x48设1、清+0x54/+0x188，互斥锁保护插入队列。CloudIslandProcess内嵌task+0x70，故 Process+0xB0/B8/C0/C4/C8/1F8 对应type/active/result/done/response/response-valid。01C7C980调度器负责队列移除及结果登记；+0x50写0/1/3，+0x54置1。队列 factory01C7C808，P(05351408)，大小0x7F0，节点偏移0x1A0，+0x18 count，+0x40 mutex。01C87374直接调用01C7C980。
## 内容Hash候选
01C79ED0 源码含两个内联MurmurHash3循环，seed 0x36170E33，输入 pointer/length +0x10/+0x18 与 +0x20/+0x28，生成描述记录。当前只证明源码中的计算，不声称该函数已确认属于Cloud实际worker或磁盘校验器；待提取原版指令并局部验收。
## 验收
10份C源码锚点、六个原版有界窗口、七组RELR候选表；48项04A918E8描述符写入/NULL、32项01C7A574拷贝、拒绝分支矩阵。原版局部执行，不执行真实网络、磁盘或完整任务。

## 最终专项验收
首轮45352454361在04A918E8测试中失败：合成fixture多解引用一层。原版 X0->wrapper->descriptor，直接写descriptor+0/+8；6b7b768纠正预期，未改原版指令。第二轮45352647865通过。Artifact 14900229318 SHA256 61eb0cae201b26e0c01d4e7e25236dfbd6108df9086043a25cc6bd9f5f4937d6，下载ZIP重新计算一致。10份C blob，1265条有界指令，28项RELR。48项描述符、32项组合复制、17项提交拒绝、34项Hash片段（17个长度×2）共131项全部通过；report.total_cases=97仅计前三组，hash_slice_cases另计34。未执行完整任务/文件/网络。
## 描述符原版ABI
04A918E8[0] 0283EF28 RET；[1..3] 0283EF2C/54/7C，X1读取源指针；NULL返回；X0解引用为wrapper，再解引用为descriptor；写descriptor+0指针、+8长度0xA2458/0xC6788/0x14C618。48项矩阵为4选择器×4指针×3初始模式，全fixture逐字节对照。01C7A574 X1=dst,X2=src；复制+0..0x27、byte+0x28，若src+0x38非零则复制+0x30 qword并置dst+0x38=1，否则清零两字段。32项全缓冲对照。01C7CF1C guard拒绝17项（type0或active且未完成），返回0且任务/输入不变；接受路径仍为静态源码证据。
## 两段原版Hash
01C79F5C..01C79F7C初始化种子/乘数；01C79FC0..01C7A0C8与01C7A274..01C7A3A8局部原版执行（终点不含），synthetic worker、SP/FP寄存器与两组pointer/length；独立参考 hash32(payload,0x36170E33)。覆盖0..4、5、7、8、31、32、33、255、256、257、三种云岛完整长度。第一段 STR W8 [FP-0x40]实际为 STUR，VA01C7A0C4；第二段 STR W8 [SP+0x22C] VA01C7A3A4。两段各17项相等、输入数据不变。仅Hash指令slice，无实际worker完整执行，不能据此认定磁盘Hash或云岛实际调用链。
全text直接调用 01C79ED0：01C7AA90。01C7CF1C 7处：01C73A1C, 01C73B90, 01C74170, 01C76AA0, 0283D190, 02D83544, 02D8514C。01C7C980 调用点01C8792C（上层01C87374）；01C7A574直接调用01C7D1E0。
## 进一步登记候选
04A918A8三有效类型由0283ED3C/0283ED8C/0283EDDC调用0270B80C/828/844，C源码显示双层指针取得目标，写+0x518指针及+0x520 selector1/2/3。三份补充源码SHA见registration_candidates，非本轮CI十份锚点，目标对象归属待查。R133优先定位01C7AA90所属函数、worker VTable、04A918C8实际虚调用和+0x518/+0x520读取者，明确服务任务与独立磁盘调用。仍未获得真实存档。
