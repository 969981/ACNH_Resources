---
title: 选项标识来源与MSBT文本处理
version: 3.0.3
updated: 2026-11-24
status: static-partial
runtime_verified: false
tags: [ACNH, ELF, dialogue, MSBT, Choice]
---
# 选项标识来源与 MSBT 文本处理
[[32-选择态请求生产者与反向选项索引]] · [[31-选项结果记录与对话事务清理]] · [[30-对话管理器Main根与十状态业务机]]

## 1. 原版基线
[Run 45348333058](https://github.com/969981/ACNH_Resources/actions/runs/45348333058) success，head ddaccf5e27a1e5d4f7a3630fc731afb75b05761e；[artifact 14899082049](https://github.com/969981/ACNH_Resources/actions/runs/45348333058/artifacts/14899082049) 实际下载 ZIP SHA256 b885f8884a02d7660f21dd87c833f0d870c0636418c2e66fa19eea742b946765 与 GitHub digest 一致。manifest 724 anchors/92454 rows/270 gaps（含重叠）。R100 PRAGMA quick_check=ok。Ghidra VA=RVA+100000。本轮新增生产者为C证据，需后续原始指令验收。

## 2. 选项记录生成及标识来源
R=P(Main+523EC08)，B=R+8，C=P(R+28)，Q=P(C+10)。[01B9CBC0.c](../../derived/3.0.3/ghidra12.2/c/cb/01b9cbc0.c) blob 8cb346b1bda59be81a2f72a287479270ab42eb89：参数4的首int为1/2/3分别取+6/+C/+10的u8，>=24回退0，mode0返回false。mode14..22调用01B9D0E0及01B9D2D0，其他非0且排除11..13调用01B9CD50。最后读取Q+A88，若mask 0x8A9554命中对应mode，写Q+A8C=count-1，并为合法末项设置Q+17C+i*180的bit0；返回count>0。模式11..13不执行生成函数，不推断它们一定清空已有记录。
[01B9CD50.c](../../derived/3.0.3/ghidra12.2/c/cd/01b9cd50.c) blob 191c3718ee305d16a7fdeed0127e08bfa2694daf：清七组记录与count；模式1/2产生2项，3/4→3，5/6→4，7/8→5，9/10→6，23→7；其他switch分支见原C（14..22在正常分发中走pool路径）。源描述符+4/+8为两个s32。标签格式：第一个s32不为-1时，第二个为-1/0则%03d_%c，否则%03d_%02d_%c；字母从a起。调用01B970F0、01B9735C获得属性结构A，写记录首u32 = U32(U16(A+4)) if U32(A)==1 else 0。Q+A88每次递增。
[01B9D0E0.c](../../derived/3.0.3/ghidra12.2/c/d0/01b9d0e0.c) blob c5056a5ca3e701b7fb5d2c8d368edaf38d09132d：扫描a..z后缀，对03D53DB0找到的msbt使用038F40B0查标签，非负索引加入bitmap；可选取最后一个有效后缀，从bitmap删除并保存给调用者。
[01B9D2D0.c](../../derived/3.0.3/ghidra12.2/c/d2/01b9d2d0.c) blob 75691f467de3a534936684ebcb5c40631f4080e7：按模式计算目标数量，以TLS PRNG选择bitmap中某个位置并移除，防止同一后缀重复选取；可追加保留的末项。写记录首u32的值同样来自schema1属性u16。该分支含原生随机性，不等于所有语言的选项固定排列。
|记录相对偏移|宽度|C证据语义|
|---|---|---|
|0|4|schema1属性+4的u16扩展，其他schema写0，清理FFFFFFFF|
|8|内嵌对象|文本/字符串接口|
|168|4|源后缀的零基序号|
|16C|4|生成时清零|
|170|4|01B97400辅助枚举|
|174|4|标志；部分mode末项OR1|
01B9BE60（blob 201c9bd9e21997446852dfc8d4eeacb13a2ec420）取资源名/标签，通过006F50A0加载文本，进行文本片段选择及复制；原生结果首字段不由此函数生成。保留“消息属性标识”研究名，不能直接命名ChatId或EventFlow分支ID。

## 3. MSBT 属性和文本查找
01B970F0（blob 015390502d808681d6f5fb7e55081bf802f46bdd）通过01BE5D00识别资源分类，再映射属性schema；STR_Select_Talk/CmnSubWin强制schema6，NookMilage_Keyword_Modifier/NookMilage_Keyword_Noun强制schema7。01B9735C（blob 7d1465678eedb9d0b6334fbd03f0d4f11d2b4dac）按schema1/2/3/5/6/7分发到01B977E0/01B97A90/01B97D40/01B97FF0/01B982A0/01B98550。
01B977E0（blob 3003262893ec9b6a24fce8960a69d4eba73485a7）读取资源名，构造%s.msbt，遍历挂载archive，03D54360查询文件；检查属性stride<=8、标签存在，按标签索引找到属性记录并memcpy到A+4。038F40B0（blob 941232a3e8d9235480f9bf54c972c6b8b3f61ce9）标签查找使用u32 hash=hash*0x492+byte（1170），按bucket数取模，比较长度和字节，返回条目u32索引；缺标签FFFFFFFF，无标签区FFFFFFFE。不能将此索引与记录首u32等同。
R100重定位证据：slot RVA4AB2718 -> target RVA59F83F0 (RELR/data→bss)，slot RVA4AB28F8 -> 523EC08，slot RVA4AB43E0 -> 48122B0 (data→data)。设 A=P(Main+59F83F0), F=P(A+408), L=P(F+8)，归档列表哨兵L+8、尾L+10、node adjustment L+1C。该根与UI/消息业务根不同，尚未验收根构造生命周期。
01BE5D00（blob 9a8fb1685d795cce1b94fd295641310acfd44e7f；258/0）调用038CEFC4取语言ID，比较Message/%s_%s.sarc.zs，12类归档，未命中返回12。类别名称指针表及语言后缀需原字节枚举。03D53DB0（blob d46201d81c505eeed0c883148dd16fb0a4ed4235）查%s.msbt；006F50A0（blob c4c44a6296fd82d0e190c6a5ec80b249f97fe667）调用03D4CD40（blob 4695c2da076bae43754bc5b81eb45b997b607528）获取标签文本，保留两段资源名/标签字符串。输出为16bit单位相关缓冲，未确定完整文本编码/控制码语义。

## 4. 文本Worker状态
W=Q+22F0+i*3B8。01BEA210（blob 55fb38568848414b3ee2ab319083c2b7ddfdb7f6）从资源名与标签初始化W+2E8/+340字符串指针对应缓冲，设置状态1；01BEA4E8从文本对象初始化状态2或4，失败为12。01BEA9C8（blob d902836fc68a353c5532e15d2f9da0b972163c8a，617/1）状态在W+C。
|状态|C级语义与路径|
|---:|---|
|1|查找原始消息，成功2，失败12|
|2|格式化处理，包括RubyOff/WordwrapOn，成功3，失败12|
|3|01C08808中间处理，转4|
|4|可选变换，继续5|
|5|初始化W+10=1、W+14=0，转6|
|6|01BA8E98处理；W+8为0或s32(W+14)>59或s32(W+10)==2时转7|
|7|准备最终缓冲，有辅助对象时额外处理，成功8，失败12|
|8|更新显示文本，转9|
|9|根据W+3B0是否为空选择10或12|
|10|后续转移尚未恢复，不凭相邻状态推定|
|11|辅助对象完成检查及显示更新，完成则12|
|12|清理三个可选缓冲F8/1E0/2C8、注销有效资源handle W+398（W+39C非零），转13|
|13|Worker终态；不是NPC事务完成|
01BA8E98（blob e857ca93ac450a4de8f44d6b737cb6a7b836a332）在内部状态非0时递增+4，即W+14计数。59/60只是条件性处理次数，不等价于文本速度或帧数。
现有认证机器码：
|VA|bytes|instruction|
|---|---|---|
|01BEADA8|090d0051|sub w9,w8,#3|
|01BEADAC|3f0d0071|cmp w9,#3|
|01BEADB0|08180054|b.hi #1aeb0b0|
|01BEADB4|682c01d0|adrp x8,#4078000|
|01BEADB8|08c50991|add x8,x8,#271|
|01BEADBC|8a000010|adr x10,#1aeadcc|
|01BEADC0|0b696938|ldrb w11,[x8,x9]|
|01BEADC4|4a090b8b|add x10,x10,x11,lsl #2|
|01BEADC8|40011fd6|br x10|
|01BEB620|a8018052|mov w8,#0xd|
|01BEB624|680e00b9|str w8,[x19,#0xc]|
跳转表RVA4078271，4个u8项，基RVA1AEADCC；commit cb03c5098a528e0d5f56bc05f23cccdafe0f93d2 添加完整36字节签名和双源表字节认证，待CI核对目标及新增回调覆盖。12→13终态写入已取得证据。

## 5. 下一步
新增25个导出入口，含属性6种解析分支、选项生成、标签哈希、文本Worker处理函数及全text直接B/BL候选。后续对生成器的真实u32 store逐项认证；复核归档类别与16语言后缀表；将属性语义与原版资源样本关联；追踪01B9CBC0实际调用者/业务结果消费者，恢复状态10退出者及NPC EventFlow最终通知。旧ChatId/TextSpeed/IsChatEnded和0x7000差异仍未验证，production_eligible=false，实机待执行。


## 6. 同轮追加验收
[Run 45350667508](https://github.com/969981/ACNH_Resources/actions/runs/45350667508) success，[artifact 14899827903](https://github.com/969981/ACNH_Resources/actions/runs/45350667508/artifacts/14899827903) 实际下载 SHA256 6fdaf7c70fe0bf8d49dfa4611095ac0174dcf353bb4f38f03ac647b7864ce739 一致。749 anchors / 96158 rows / 274 gaps（含重叠）。
01BEA9C8 806/0，switch RVA4078271 bytes 0036a4a8，状态3/4/5/6分别到VA01BEADCC/01BEAEA4/01BEB05C/01BEB06C。01BEB060 7f1600b9清W+14，01BEB064 2800c0f2设置高32位1，01BEB068 68c200f8将0x100000006写W+C。01BEB61C 9958ff97调用01BC1880，01BEB624 680e00b9写终态13。完整update CFG闭合不意味着状态10外部生产者/消费者闭合。
01B9CBC0 100/0，01B9D0E0 124/0，01B9CD50 213/1，01B9D2D0 396/1，01B970F0 155/0，01B9735C 18/1，01B977E0 171/0，01B97400 58/1，01B9BE60 236/0，038F40B0 65/0，03D53DB0 54/0，006F50A0 121/0，01BA8E98 155/0。
|写入路径|schema比较|u16读取|选择指令|实际store|
|---|---|---|---|---|
|顺序|01B9CF7C cmp w8,#1|01B9CF80 ldrh w9,[sp,#3c]|01B9CF94 csel w25,w9,wzr,eq|01B9CFD0 590300b9 str w25,[x26]|
|池内记录|01B9D520 cmp w8,#1|01B9D524 ldrh w9,[sp,#8c]|01B9D530 csel w27,w9,wzr,eq|01B9D570 9b0300b9 str w27,[x28]|
|保留末项|01B9D820 cmp w8,#1|01B9D828 ldrh w9,[sp,#8c]|01B9D838 csel w24,w9,wzr,eq|01B9D874 980200b9 str w24,[x20]|
三个路径均明确为属性schema1的u16零扩展、否则0。每次先写FFFFFFFF并调用记录+8.vcall38，再写实际标识及其他字段。具体属性业务名仍未验证。
新增commit df22d334b06b6bd2b3c8662e108c9bc94aaaff3c 对四个剩余有界跳转表追加双源认证：01B9CD50 mode1..23 byte表RVA4077C8C；01B9D2D0 mode1..22 halfword表RVA4077CA4；01B9735C schema1..7 byte表RVA4077B6B；01B97400 schema1..6 byte表RVA4077B72。待独立CI验收，不宣称已展开。
