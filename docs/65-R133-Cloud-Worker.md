---
title: ACNH 3.0.3 R133 - Cloud worker ownership
tags: [ACNH, ARM64, save, R133]
---

# R133 云岛任务执行器与数据归属
关联 [[64-R132-Cloud-Job]]。固定 R132 artifact 14900229318，SHA256 61eb0cae201b26e0c01d4e7e25236dfbd6108df9086043a25cc6bd9f5f4937d6。

## 数据登记归属
04A918A8 [1..3] 回调0283ED00/4C/9C直接读取05574040，即 SaveManager；非NULL调用0270B80C/828/844，写+0x518 pointer，+0x520 selector。NULL源指针同样被登记（与04A918E8区别）。待定位实际消费者。
## 内层类型分派
04A918C8 [1..3] 0283EDF0/EE58/EEC0，源指针非NULL时读取P(05351250)+0xB0，并从04A43108选择回调，X1=context+0x58。0xffffffff进入错误路径。本轮仅执行variant0/1且模型化内部回调，记录传入的源指针及上下文。并非磁盘、网络执行。
## Worker
01C7C808由04BC1018取得worker VTable，01C7AA90直接调用01C79ED0。提取有界窗口、邻域重定位与全text直接调用；候选字段偏移扫描仅是语法候选，不保证SaveManager归属。9份源码完整性锚点、72项登记与24项内层分派测试。

## 最终验收
首轮45356945446通过96项；第二轮45357214408通过192项。Artifact 14901988731 SHA256 8b8d80474b23e64728d91cbb2eba6e7950e5b8be54c760873e923d2cec95754d，下载ZIP重新计算一致。9份源码、1422条有界原版指令、11项worker邻域RELR、50项字段偏移候选、3个内层类型表槽。72项SaveManager登记、24项分派（12次内部回调模型）、90项cSave完成、6项worker跳转均通过。没有执行完整异步任务、实际磁盘或网络。

## Worker VTable与Hash调用闭合
04BC1018 RELR addend RVA 049433F0，VA 04A433F0；factory 01C7C808 加0x10形成真实地址点04A43400。原版RELR槽：
|slot|target|语义|
|---|---|---|
|+0x00|01C7A6E4|清理后尾调用基础析构|
|+0x08|01C7A71C|清理与释放|
|+0x10|01C7A8DC|RET|
|+0x18|01C7A8E0|任务更新|
01C7C980 源码调用当前worker +0x18；对应01C7A8E0。入口保存寄存器、分配0x4A0栈，+0x708已有子任务走另一支路；+0x50有效且+0x48类型1..6时进入跳转表。01C7A938 ADRP，01C7A93C ADD -> 04178725；01C7A940 ADR base 01C7A950；01C7A944 LDRB W11,[X9,X8]；01C7A948 ADD X10,X10,X11,LSL#2；01C7A94C BR X10。六项原版局部跳转执行通过：
|Type|byte|target|
|---|---|---|
|1|0|01C7A950|
|2|79|01C7AA8C|
|3|38|01C7A9E8|
|4|93|01C7AAC4|
|5|38|01C7A9E8|
|6|128|01C7AB50|
Type2 -> 01C7AA8C MOV X0,X19 -> 01C7AA90 BL 01C79ED0 -> 01C7AA94 TBZ W0,#0,01C7ACE8。结合R132 Type3->Type2静态提交、R129之后原版回调，现证明通用worker Type2分支直接调用已验收的seeded Hash函数。仍未执行完整提交/队列复制/worker路径，未证明实际Cloud两组输入的全来源；不能解释为磁盘Hash已闭合。

## SaveManager登记与完成清理
04A918A8 selector0 RET，1..3的三组原版回调实际读05574040，BL登记函数后写Manager+518 pointer及+520 selector（NULL pointer仍登记）。72项全对象对照。cSave更新0283D1CC读取Process+B8及+C4；若active且未完成则RET；否则切换状态3。只有active、done、manager非NULL三条件同时成立才在0283D1EC STR WZR,[X8,#0x520]；未清除+0x518。90项组合中20项清类型，70项记录状态转换，20项保持等待。03EBB160仅模型化调用与参数。
50项语法扫描发现0270FA80 LDR X8,[X19,#0x518] 与0270FA9C STR X8,[X19,#0x518] 但附近为累加逻辑，未证明是SaveManager对象；不能作为实际云岛指针消费者。0283D1EC由明确全局读取证明归属。尚无已确认的+518实际读取者。

## 内层variant表
04A43108[0]=01C74878 RET，[1]=01C7487C，[2]=01C749B4 RET。24项外层分派覆盖selector0..3、variant0/1、三个源指针值；12次内部处理器仅hook返回并记录X0三级解引用的source、X1=context+0x58；未执行内部处理器。variant1原版窗口显示读取source+0x48D9C的20字节记录，按descriptor+0x2C比较或更新到descriptor+0x0C；source+0x48DB0读取byte，超过3回退2，写descriptor+0x30。只是静态观察，具体字段意义以及其与真实Cloud buffer的关系待验证。
R134优先沿01C7487C完整原版分支及01C7AA98之后的Type2任务执行，区分服务描述符、源数据、目标数据与真正文件读写；恢复Manager+518读取者、Cloud实际两组Hash输入。无真实存档或实机结果。
