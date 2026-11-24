---
title: PutUnitIcon 物品资格与放置结果边界
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, Native, PocketMenu, ItemKind, PutUnitIcon]
status: static-partial
runtime_verified: false
---
# PutUnitIcon 物品资格与放置结果边界

[[28-菜单名称指针表与Native编号]] · [[24-菜单命令对象与PutUnitIcon结果事务边界]]

## 1. 原始证据及边界

重新读取上一轮 [CI 45342402691 artifact 14897290528](https://github.com/969981/ACNH_Resources/actions/runs/45342402691/artifacts/14897290528)，本地 ZIP SHA256 b5efabf9a32f07a9b7552e09810576ff4b2024f4ddcf38442aabe8e1fab332f3。Ghidra VA=Main RVA+100000。R100 SQLite实际查询以下重定位。未做实机，不能把菜单可见、请求通过、通知派发、背包变更和Field持久化混为一个成功标志。

## 2. 0277E688资格判断（C证据）

[0277E688 C](../../derived/3.0.3/ghidra12.2/c/e6/0277e688.c) blob b14949b22675406a3d6401c4212ff6afbfb9e4c5；[0277D6C4](../../derived/3.0.3/ghidra12.2/c/d6/0277d6c4.c) blob 5b75dfb5c3b94f70bf9d26e18fb4935646fb1a47；[01B04850](../../derived/3.0.3/ghidra12.2/c/48/01b04850.c) blob 4101fd01dc988fd5de6b771a741dd63904bac776。

0277E688先调用0277D6C4取得有效资源编号，验证资源管理器+57E58中的+1F8起始ID、+1D8数量及+1E0指针表；复制8字节物品记录构建临时对象，初始化+10资源记录指针，条件满足时从另一个已发布的资源根取指针，调用01B04850，最后返回bit0。0277D6C4依据u16原始编号和记录byte+3低2位等解析目录编号，不是无条件原始ID。01B04850由资源行反查行号，经u16映射获取类别索引，再访问ItemKind；字段CRC32 5D389FBF的列偏移缓存为全局05326DB4+40，最终读取一字节并测试非零。

|GOT VA|重定位目标 VA|依据|
|---|---|---|
|04BB43C0|053274A0|资源管理器|
|04BC0428|0532A768|管理器+57E58发布的资源|
|04BC0438|0532A778|管理器+57E68发布的ItemKind资源|
|04BC00C8|05326EC0|类别索引映射对象|
|04BBFEB8|05326DB4|ItemKind字段偏移缓存|
|04BBC218|051A9970|放置状态辅助记录目录|

资源构造器01A5A3E8 C明确把名称_ItemKind、配置数量0xBD(189)的对象保存到管理器+57E68。01A59500 C将其通过GOT04BC0438发布到全局0532A778。这与01B04850读取的全局根相符。资源字段名未正式恢复，不擅自命名。01B04850中的缺失值、默认索引及类别映射失败分支必须保留；此处只做语义归类，不提供直接写内存或绕过判定的实现。

## 3. 189项ItemKind原版资源对账

[CSV](../../UnPack/1/Bcsv/ItemKind.csv) blob bee0408c96266c5b21f27d43bfe9d44a598aad7c；[元数据](../../UnPack/1/Bcsv/ItemKind.json) blob 6a265de30eafb474ade9172a5d7a9b16315f5d44。189行，5D389FBF列offset41、width_hint1；130项为1，59项为0。该属性是普通地面放置候选的条件之一，不等于可拾取、跨岛携带、任意场景放置或持久化成功。

|CSV行|54706054字段|类别名称|5D389FBF|
|---:|---:|---|---:|
|0|5|Ftr|1|
|1|156|Dishes|1|
|2|297|Drink|1|
|3|296|CookingMaterial|1|
|4|228|RoomWall|1|
|5|229|RoomFloor|1|
|6|174|Rug|1|
|7|258|RugMyDesign|1|
|8|130|TopsDefault|0|
|9|6|Tops|1|
|10|7|OnePiece|1|
|11|8|MarineSuit|1|
|12|131|BottomsDefault|0|
|13|9|Bottoms|1|
|14|10|Socks|1|
|15|11|Shoes|1|
|16|12|Cap|1|
|17|190|Helmet|1|
|18|13|Accessory|1|
|19|148|Bag|1|
|20|25|Umbrella|1|
|21|270|FtrWall|0|
|22|278|Counter|0|
|23|279|Pillar|0|
|24|16|FishingRod|1|
|25|15|Net|1|
|26|17|Shovel|1|
|27|14|Axe|1|
|28|19|Watering|1|
|29|18|Slingshot|1|
|30|151|ChangeStick|1|
|31|217|WoodenStickTool|1|
|32|155|Ladder|1|
|33|152|GroundMaker|0|
|34|203|RiverMaker|0|
|35|153|CliffMaker|0|
|36|319|SpeakerMegaphone|1|
|37|309|HandBag|1|
|38|26|PartyPopper|1|
|39|224|Ocarina|1|
|40|225|Panflute|1|
|41|226|Tambourine|1|
|42|289|MaracasCarnival|1|
|43|219|StickLight|1|
|44|306|StickLightColorful|1|
|45|220|Uchiwa|1|
|46|313|SubToolSensu|1|
|47|221|Windmill|1|
|48|223|Partyhorn|1|
|49|222|BlowBubble|1|
|50|218|FierworkHand|1|
|51|227|Balloon|1|
|52|274|HandheldPennant|1|
|53|282|BigbagPresent|0|
|54|283|JuiceFuzzyapple|1|
|55|287|Megaphone|1|
|56|286|SoySet|1|
|57|294|FlowerShower|1|
|58|311|Candyfloss|1|
|59|317|SubToolDonut|1|
|60|303|SubToolEat|1|
|61|305|SubToolEatRemakeable|1|
|62|312|Tapioca|1|
|63|314|SubToolCan|1|
|64|310|Icecandy|1|
|65|315|SubToolIcecream|1|
|66|316|SubToolIcesoft|1|
|67|304|SubToolEatDrop|1|
|68|301|SubToolGeneric|1|
|69|308|Basket|1|
|70|307|Lantern|1|
|71|302|SubToolRemakeable|1|
|72|22|Timer|1|
|73|46|Gyroid|1|
|74|295|GyroidScrap|1|
|75|162|TreeSeedling|1|
|76|161|Tree|0|
|77|164|BushSeedling|1|
|78|163|Bush|0|
|79|166|VegeSeedling|1|
|80|198|VegeTree|0|
|81|165|Vegetable|1|
|82|187|Weed|1|
|83|318|WeedLight|1|
|84|54|FlowerSeed|1|
|85|167|FlowerBud|0|
|86|64|Flower|1|
|87|51|Fruit|1|
|88|62|Mushroom|1|
|89|57|Turnip|1|
|90|168|TurnipExpired|1|
|91|213|FishBait|1|
|92|177|PitFallSeed|1|
|93|74|Medicine|1|
|94|169|CraftMaterial|1|
|95|173|CraftRemake|1|
|96|66|Ore|1|
|97|256|CraftPhoneCase|1|
|98|160|Honeycomb|1|
|99|61|Trash|1|
|100|38|SnowCrystal|1|
|101|251|AutumnLeaf|1|
|102|242|Sakurapetal|1|
|103|183|XmasDeco|1|
|104|245|StarPiece|1|
|105|36|Insect|0|
|106|39|Fish|0|
|107|40|DiveFish|0|
|108|60|ShellDrift|1|
|109|181|ShellFish|0|
|110|263|FishToy|1|
|111|264|InsectToy|1|
|112|44|Fossil|1|
|113|176|FossilUnknown|1|
|114|47|Music|1|
|115|239|MusicMiss|0|
|116|214|Bromide|1|
|117|262|Poster|1|
|118|93|HousePost|0|
|119|193|DoorDeco|1|
|120|194|Fence|1|
|121|189|DummyRecipe|0|
|122|259|DummyDIYRecipe|0|
|123|260|DummyHowtoBook|0|
|124|257|LicenseItem|0|
|125|232|BridgeItem|0|
|126|231|SlopeItem|0|
|127|237|MessageBottle|0|
|128|253|WrappingPaper|1|
|129|291|Otoshidama|1|
|130|195|HousingKit|0|
|131|240|HousingKitRcoQuest|0|
|132|248|HousingKitBirdge|0|
|133|320|Transceiver|0|
|134|2|Money|1|
|135|24|FireworkM|1|
|136|196|BdayCupcake|1|
|137|216|YutaroWisp|0|
|138|149|JohnnyQuest|0|
|139|150|JohnnyQuestDust|1|
|140|273|PirateQuest|0|
|141|207|QuestWrapping|0|
|142|281|QuestChristmasPresentbox|0|
|143|78|LostQuest|0|
|144|79|LostQuestDust|1|
|145|243|TailorTicket|1|
|146|178|TreasureQuest|0|
|147|179|TreasureQuestDust|1|
|148|241|MilePlaneTicket|1|
|149|261|RollanTicket|1|
|150|101|EasterEgg|1|
|151|266|LoveCrystal|1|
|152|82|Candy|1|
|153|280|HarvestDish|0|
|154|37|Feather|1|
|155|288|RainbowFeather|1|
|156|267|Vine|1|
|157|268|SettingLadder|1|
|158|269|SincerityTowel|0|
|159|272|SouvenirChocolate|1|
|160|208|Giftbox|0|
|161|200|PinataStick|0|
|162|202|NpcOutfit|0|
|163|246|PlayerDemoOutfit|0|
|164|84|Picture|1|
|165|88|Sculpture|1|
|166|184|PictureFake|1|
|167|185|SculptureFake|1|
|168|230|SmartPhone|0|
|169|206|DummyFtr|0|
|170|201|SequenceOnly|0|
|171|209|MyDesignObject|0|
|172|180|MyDesignTexture|0|
|173|298|CommonFabricRug|1|
|174|299|CommonFabricObject|0|
|175|300|CommonFabricTexture|0|
|176|271|OneRoomBox|0|
|177|238|DIYRecipe|1|
|178|211|DummyWrapping|1|
|179|212|DummyPresentbox|0|
|180|215|DummyCardboard|0|
|181|234|EventObjFtr|0|
|182|236|NnpcRoomMarker|0|
|183|255|PhotoStudioList|1|
|184|277|ShopTorso|0|
|185|292|DummyWrappingOtoshidama|1|
|186|293|GardenEditList|0|
|187|321|DreamGold|0|
|188|147|None|0|

## 4. 放置结果处理（原始指令）

03457060有124条匹配指令，1个外部tail边03455E58，不是未解内部跳转。身份字段+4C选择0x740记录，边界>=8回退记录0；record+0C=2；调用01392D64(record+B0)，把结果写record+8，record+A8自增。01392D64原始113/0，C blob c83a91d8d783a0c769e1fb85a00f1cede62aecf8，按辅助目录找到0x518记录+2C，调用对象virtual+20，返回值1→1、3→3、其余→2；若virtual返回2还调用013964CC。此为业务结果分类，虚函数实际业务实现待定位。

|VA|bytes|instruction|
|---|---|---|
|034570B8|2bef7c97|bl #0x1292d64|
|034570C0|c00a00b9|str w0,[x22,#8]|
|034570CC|c8aa00b9|str w8,[x22,#0xa8]|
|034570D4|1f090071|cmp w8,#2|
|034570D8|c0010054|b.eq #0x3357110|
|034570DC|1f050071|cmp w8,#1|
|034570E0|a10a0054|b.ne #0x3357234|
|03457130|4afbff17|b #0x3355e58|
|03457180|684a00b9|str w8,[x19,#0x48]|
|034571F0|fd968197|bl #0x13bcde4|
|03457214|272f8297|bl #0x13e2eb0|
|03457224|778f8197|bl #0x13bb000|
|03457230|cc8f2994|bl #0x3dbb160|

03455E58原始176/1(外部state切换尾转移)，C blob f179eada7169e18cb3716bda629d48fba9cf4919。根据场景、位置和格子属性产生错误原因1/5/6/7，写FSM+84；设置+48=3，切换state8。结果1路径还可能在03457108调用01393458(307/0)或0345716C调用02542D18；03457180先写+48=1，再构建临时记录和派发，最后切换state0。

## 5. 通知与背包变更边界

014BB000原始130/0，C blob 6eb66f4abc6873044449a276a5428f56965a2696：条件满足时更新全局对象+121C/+1220/+1224坐标，遍历注册器+B88数量、+B90数组并派发临时记录；另一支调用016B43B4(366/0)。014BDA70 C blob b658f0319dde40007cf51d04d394365d6956d6bc：查询动态Actor目录，验证身份及类型后调用01FA5530。后者C blob 1f01edc7b131ce9f095d8b30cb3c86ff30ca8bfc，含Actor virtual+540、物品匹配、01FB20F0/01FB29B0资格判定、Actor+AFB0标志OR40000、+AF9C等状态字段更新；未见直接Field持久物品数组写入。Ghidra对参数识别有不一致，不能将该C签名当作正式ABI。通知路径不等于持久化生产者。

0317513C调用FSM更新后读取结果：
|VA|bytes|instruction|
|---|---|---|
|0317527C|fb173594|bl #0x3dbb268|
|03175280|c80240b9|ldr w8,[x22]|
|03175284|1f0d0071|cmp w8,#3|
|03175288|e0079f1a|cset w0,ne|
|0317528C|1f050071|cmp w8,#1|
|03175290|a1000054|b.ne #0x30752a4|
|0317529C|17810094|bl #0x30956f8|

结果1才走031956F8背包记录处理；结果3返回0，其他终态不应直接认作成功。静态调用时序是状态结果和同步通知在前、返回上层后处理背包在后；Field写入者和真实持久化时点仍未证实。

## 6. 新增原始指令研究

commit cfa6197be1f385da5bd8ac83c7689e27de41d1e4 添加资格函数及Actor通知消费者导出；031808D8的25项u16跳转表已新增完整签名认证：08050051 1f610071 e88b0054 29800090 29890491 8a000010 2b796878 4a090b8b 40011fd6，table RVA04084122，index0..24，base RVA030808DC，目标=base+4*uint16(table[index])。需CI真实取表字节并验证后才能升级为已恢复。新增CI 45343034553 最后查询运行中。生产派送代码与正式Build ID库保持不变。

## 7. 下一步

验收0277E688与01B04850原始指令；验证25项表；追踪01392D64 virtual+20及0x518记录的构造/实际类型，独立研究Field写入及持久化事务。实机只读观察正常操作前后数据，区分资源条件、场景条件、通知、库存与保存；不以UI成功标志代替实际结果。

## 8. 原始CI实际验收

[CI 45343034553 / artifact 14897421344](https://github.com/969981/ACNH_Resources/actions/runs/45343034553/artifacts/14897421344) head cfa6197be1f385da5bd8ac83c7689e27de41d1e4，success。实际下载复算ZIP SHA256 5e93b2992195d32f33e14b92f672d4c1df5565dacf36d436d05390876d534259，与公布摘要一致。555入口/锚点，70808匹配记录，205 gap（全产物，可重叠）。NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1，ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664，Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。

|VA|rows|gap|备注|
|---|---:|---:|---|
|0277E688|61|1|预算截断于0277E77C，主要判断与返回bit0已取得|
|0277D6C4|60|0|资源编号解析|
|01B04850|152|0|ItemKind布尔字段读取|
|014BDA70|124|0|Actor通知消费者|
|01FA5530|148|0|Actor状态标志处理|
|01FB20F0|234|1|内部BR VA01FB2478，未恢复|
|01FB29B0|226|0|类别条件查询|
|0317E7E0|3237|1|外部排序尾跳03181D14|

0277E688原始指令：0277E6AC/708/734三次BL 0277D6C4；0277E6B4/B8构造0x57E58，0277E6C4 LDRH W20,[X8,#1F8]、0277E6C8 LDR W21,[X8,#1D8]、0277E6D8 LDR X22,[X8,#1E0]；0277E6F0/F8复制8字节；0277E75C保存资源指针，0277E764 3b18ce97 BL 01B04850；0277E774 00000012 AND W0,W0,#1。01B04954 f0f79352 MOV W16,#9FBF，01B04958 10a7ab72 MOVK W16,#5D38,LSL#16；01B04A9C 08014039 LDRB W8,[X8]，01B04AA0 1f010071 CMP W8,#0，01B04AA4 e0079f1a CSET W0,NE。C语义与原始字节交叉一致。

031808D8实际双镜像table bytes：
000026004d009500bc0036015101580476019101b901bd015804e00158040202060224025804430245027d0258045804a202
25项u16，目标VA依序为031808DC,03180974,03180A10,03180B30,03180BCC,03180DB4,03180E20,03181A3C,03180EB4,03180F20,03180FC0,03180FD0,03181A3C,0318105C,03181A3C,031810E4,031810F4,0318116C,03181A3C,031811E8,031811F0,031812D0,03181A3C,03181A3C,03181364。全部在预算内，间接跳转缺口消除；03181D14外部排序尾转移仍作为outside_bound报告。

01FA5564 MOV W8,#AF98，01FA5614 ORR W8,W8,#40000，01FA5618 STR W8,[X21,#18]（对应Actor+AFB0）；01FA56F0、5704、5728其他局部状态写入已取得，非Field数组写入证据。01392E24 LDR W1,[X8,#2C]，01392E30 LDR X8,[X19]，01392E38 LDR X8,[X8,#20]，01392E3C BLR X8；该虚函数具体目标仍是下一轮优先研究点。当前仅确认分类及通知、背包处理的静态顺序，未确认实际持久化。

