---
title: 选项属性分发与Ready消息续接
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, ELF, dialogue, MSBT, Choice]
---
# 选项属性分发与 Ready 消息续接
[[33-选项标识来源与MSBT文本处理]] · [[32-选择态请求生产者与反向选项索引]] · [[30-对话管理器Main根与十状态业务机]]

## 1. 原版验收
[Run 45350982470](https://github.com/969981/ACNH_Resources/actions/runs/45350982470) success；[artifact 14900003050](https://github.com/969981/ACNH_Resources/actions/runs/45350982470/artifacts/14900003050) 实际下载 SHA256 c459f716515ecbbabf607bd323f51988c0937c5be100407ebafb2fc1059ea9ce 与 GitHub digest 一致。770 anchors/99641 rows/276 gaps（含重叠）；R100 PRAGMA quick_check=ok。VA=RVA+100000。
|函数VA|表RVA|索引|宽度|原始表字节|rows/gaps|
|---|---|---|---:|---|---|
|01B9CD50|4077C8C|1..23|1|0d0d00000202040406060808080d0d000002020d00020b|223/0|
|01B9D2D0|4077CA4|1..22|2|0000000004000400120012007301730175017501770177017701000000000400040008000800000011007b01|402/0|
|01B9735C|4077B6B|1..7|1|000408170c1014|41/0|
|01B97400|4077B72|1..6|1|0002040e0608|72/0|
四表合计58项，所有目标已按双源字节认证展开；不表示运行时输入必定有效。R33三个实际标识store仍成立。

## 2. 属性schema分发及辅助属性枚举
设属性对象A，A+0为schema。01B9735C：01B97368 ldr w8,[x0]；01B9736C sub w8,w8,#1；01B97370 cmp w8,#6；01B97374 b.hi 默认；01B9738C mov x3,x2；01B97390 mov x2,x1。资源名称与标签在调用各reader时保留。
|schema|输出偏移|reader VA|调用VA|
|---:|---:|---|---|
|1|4|01B977E0|01B973A0|
|2|C|01B97A90|01B973B0|
|3|10|01B97D40|01B973C0|
|4|无|直接返回|无|
|5|13|01B97FF0|01B973D0|
|6|15|01B982A0|01B973E0|
|7|18|01B98550|01B973F0|
01B97400辅助属性提取：schema1/2/3/5/6分别读A+8/E/11/14/15的u8；大于10回退0，其他schema默认0；RVA5236F90表经guard初始化。01B974E4清+28、01B974EC和01B97500两次STP写0..7、01B97510写8及0，因此11项精确为[0,1,2,3,4,5,6,7,8,0,0]。这不是已确认TextSpeed枚举。
01B9CBC0全text直接B/BL扫描仅1个候选01BF96BC→01B9CBC0，位于Ready函数地址范围但原CFG尚有01BF958C间接跳转，新增认证后再绑定。

## 3. 选项标识用于下一段消息的证据
R=P(Main+523EC08), B=R+8。01BFAC9C已验收330/0。01BFAD24读取记录首u32到w2；01BFAD3C写B+254C；01BFAD44写B+2548=1。01BFAD38 cmn w2,#1；01BFAD48 b.eq跳过格式化；01BFAD4C mov w8,#2560；01BFAD50/54生成format RVA3F5BF91；01BFAD58 add x0,x19,x8；01BFAD5C BL038D1270。参数w2是记录标识；非FFFFFFFF时格式化到B+2560内嵌字符串对象，缓冲P(B+2568)。格式文本待新CI直接提取，不猜测具体格式。
01BF8800 Ready update 1315/1：
|VA|bytes|意义|
|---|---|---|
|01BF8904|684a65b9|读B+2548|
|01BF8908|68da24b9|写B+24D8|
|01BF890C|684e65b9|读B+254C|
|01BF8914|68de24b9|写B+24DC|
|01BF8918|68aa52f9|读B+2550 qword|
|01BF891C|687212f9|写B+24E0|
|01BF8920|685a65b9|读B+2558|
|01BF8924|68ea24b9|写B+24E8|
此分支受P(B+2488)首字节非零门禁。另一分支01BF9038..9050检查结果state==1且u32(value-1)<FFFFFFFE（排除0和FFFFFFFF），01BF9054写B+24DC、01BF9060写B+24D8=1。随后把结果字符串复制到P(B+24F8)，容量B+2500，进行NUL终止。01BF8B58/60与01BF911C/28复制B+24DC到B+2614，整组字段复制B+24D8..24E8到B+2610..2620，字符串再复制到P(B+2630)。这些是原始数据流而非正式结构名称。
01BF8DD0/8DD8/8DE0/8DE4清原结果字段及字符串；01BF8DF4 ldr x1,[sp,#88]（B+2480资源名对象）；01BF8DF8 add x0,sp,#2F8；01BF8E00 ldr x2,[sp,#B8]（B+24F0标签对象）；01BF8E04 BL006F50A0加载消息。后续01BF922C BL01B970F0、01BF923C BL01B9735C，再次按资源/标签解析属性。由此证明业务结果与后续消息查找之间存在实际原版数据流，但尚未证明NPC EventFlow最终通知。原始结果清零不等于对话结束。
另在cState_Play 01BF9FB0中01BFA270/27C读取同一结果，01BFA280..288判定valid，和P(B+28)+21AC、其他标志共同决定是否请求Pause(5)。不能将valid条件单独等同业务状态。

## 4. 原版语言与归档证据
R100：归档类别表12个指针槽从RVA493D1A8起stride10；目标分别3FB5EF9,3FC5523,3F67D23,3FC552C,3F97002,3F8FB02,3FC551C,3F7C917,3F7AAD9,3F67D1E,3FC5116,3FF4DDB。语言后缀表16槽RVA4812310+i*8→48122B0+i*6，RELR别名4AB43E0→48122B0。01BE5D00 01BE5F1C ldr x19,[x8,#60] 读取后缀，类别路径比较使用01BE5F4C ldr x2,[x22,x8]，x8=id*16。新增script将逐字符串检查ELF/NSO一致及RELR addend。
已有R75原版资源清单 assets/evidence/rom-database/r75-original-14-language-archives-and-npc-names.json（blob f0c64de17de2ee4a21c28b9c4c4e8a80d5ac5135）确认14种String归档，每个133个成员、每个包含STR_Select_Talk.msbt；没有原版ATR1解析记录，不能将资源清单当属性样本。下一步需要按Talk归档及标签提取实际属性字节，进行跨语言对账。

## 5. 下一轮验收
commit 0b4062e76b0ac8033b60dd3b7577ba57851ebca4 新增Ready剩余6项跳转表、12类消息归档名、16项语言后缀、9个类别schema原始映射、结果格式字面值提取。CI Run 45351601376 待验收。结构化证据 dialogue_controller_evidence.json 已更新。runtime_verified=false、production_eligible=false，旧ChatId/TextSpeed/IsChatEnded以及EventFlow完成通知仍待确认。