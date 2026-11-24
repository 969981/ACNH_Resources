---
title: 菜单名称指针表与 Native 编号
version: 3.0.3
updated: 2026-11-24
tags: [ACNH, Native, PocketMenu, BCSV, ELF]
runtime_verified: false
status: static-name-map-verified
---
# 菜单名称指针表与 Native 编号

[[27-菜单名称索引与资源目录构建]] · [[26-菜单资源根发布与普通物品分发]] · [[23-PocketMenu命令映射与PutUnitIcon入口]]

## 1. 实际验收

[CI 45338913257 artifact 14894678210](https://github.com/969981/ACNH_Resources/actions/runs/45338913257/artifacts/14894678210)，head d42515a635eaae5fa1dd115dde6cab5b3fedff9a，success；实际下载复算SHA256 6a2ae86e5836987aa3a9e391e8fdb2cc71af55068c0313e009c6b29c338a2be9。497入口/锚点、65825指令记录、188 gap（可重叠）。01AB4D40 429/1，唯一预算边界目标VA01AB5400。原版NSO/ELF/Build ID同前章；R100重定位SQLite实查66条RELR。所有地址Ghidra VA，RVA=VA-0x100000。

## 2. 字符串池与指针表分离

此前04A34A98的66*8窗口实际为连续NUL终止ASCII字符串，不是指针表。真正的指针表在字符串池基址+2E8。

|VA|bytes|instruction|
|---|---|---|
|01AB4F10|187c0190|adrp x24,#0x4934000|
|01AB4F14|18632a91|add x24,x24,#0xa98|
|01AB4F30|5a070091|add x26,x26,#1|
|01AB4F34|5f0b01f1|cmp x26,#0x42|
|01AB4F3C|080f1a8b|add x8,x24,x26,lsl #3|
|01AB4F48|147541f9|ldr x20,[x8,#0x2e8]|

pool VA04A34A98，table VA04A34D80；slots 04A34D80..04A34F88共66个；R100实际全部RELR，目标位于pool。原始产物已验证pool前528字节，按实际重定位指针读取50个完整名称，逐项与CSV吻合。剩余16条RELR目标亦与CSV名称NUL串联长度计算的起始地址一致；不得将长度吻合替代实际末段字节证据。完整pool窗口0x2e8及指针表0x210已经加入双镜像校验脚本。

## 3. 查找算法

01AB4E60 CRC32B以FFFFFFFF开始，01AB4E6C取反，得到查询名称CRC32。初始化循环x26=0..65，对静态指针表字符串独立计算CRC32（01AB4FD0..4FDC），01AB4FF4 stp w9,w26形成(hash,index)8字节记录；01AB500C将记录指针加入排序数组。01AB50CC..522C按无符号hash排序指针，01AB5090..50C8执行二分查找，01AB5268读取记录+4的原始索引。排序不改变原始Native编号。01AB52B4..5358还存在逐名称字符串比对的回退，01AB52C4使用同一指针表，匹配时返回w19索引，01AB535C返回-1。01AB5380..5394保存hash与索引的单项缓存。CSV全部66名称独立CRC32计算无冲突；不能推广为任意输入无碰撞。剩余01AB5400初始化尾部已扩大预算，待新CI。

## 4. 66项资源编号对照

CSV blob f0a408702901d29aac0e53cc4e146554677e72c9。地址列按连续名称计算，并与已实查RELR目标逐项一致；索引0..49已实际读取原始字符串；后16项在下文最终CI补录中已全部验收。

|Native index|pointer VA|name VA|name|CRC32|CSV 54706054|证据|
|---:|---|---|---|---|---:|---|
|0|04A34D80|04A34A98|Build|7C61DDDF|2|原始字符串已核对|
|1|04A34D88|04A34A9E|StartTimer|86D0EF17|6|原始字符串已核对|
|2|04A34D90|04A34AA9|StopTimer|9E23C1B9|7|原始字符串已核对|
|3|04A34D98|04A34AB3|LearnRecipe|9219D4E0|81|原始字符串已核对|
|4|04A34DA0|04A34ABF|EquipFence|67770946|84|原始字符串已核对|
|5|04A34DA8|04A34ACA|Wear|FB6FAB3A|8|原始字符串已核对|
|6|04A34DB0|04A34ACF|HoldHand|5734163C|9|原始字符串已核对|
|7|04A34DB8|04A34AD8|Bury|76B337FD|15|原始字符串已核对|
|8|04A34DC0|04A34ADD|PlantOne|C0853125|24|原始字符串已核对|
|9|04A34DC8|04A34AE6|PlantTreeOne|EEC4B5EF|93|原始字符串已核对|
|10|04A34DD0|04A34AF3|Plant|6AC22276|23|原始字符串已核对|
|11|04A34DD8|04A34AF9|PlantTree|363AA1A6|92|原始字符串已核对|
|12|04A34DE0|04A34B03|Wallet|7BC49729|3|原始字符串已核对|
|13|04A34DE8|04A34B0A|Exchange|2A4DD22F|60|原始字符串已核对|
|14|04A34DF0|04A34B13|FishBait|2B550ABC|71|原始字符串已核对|
|15|04A34DF8|04A34B1C|ReleaseNpcGarden|0ECF52D0|106|原始字符串已核对|
|16|04A34E00|04A34B2D|Show|923C763F|5|原始字符串已核对|
|17|04A34E08|04A34B32|ReplaceWall|6B8C3150|72|原始字符串已核对|
|18|04A34E10|04A34B3E|ReplaceFloor|8188A92D|73|原始字符串已核对|
|19|04A34E18|04A34B4B|RotateReplaceFloor|A956B7A9|75|原始字符串已核对|
|20|04A34E20|04A34B5E|ReplaceAccentWall|26D12C87|107|原始字符串已核对|
|21|04A34E28|04A34B70|DefaultReplaceFloor|2D427E71|74|原始字符串已核对|
|22|04A34E30|04A34B84|PutRug|868572B6|20|原始字符串已核对|
|23|04A34E38|04A34B8B|PutFtr|E96CACB0|11|原始字符串已核对|
|24|04A34E40|04A34B92|PutWallFtr|4117736F|62|原始字符串已核对|
|25|04A34E48|04A34B9D|PutDoorFtr|DA4DCE30|88|原始字符串已核对|
|26|04A34E50|04A34BA8|PutCeilingFtr|3A6046BB|94|原始字符串已核对|
|27|04A34E58|04A34BB6|HangLadder|2F5C6297|102|原始字符串已核对|
|28|04A34E60|04A34BC1|HangVine|C4B1F738|109|原始字符串已核对|
|29|04A34E68|04A34BCA|HangVineOne|8FC2809D|108|原始字符串已核对|
|30|04A34E70|04A34BD6|PutUnitIcon|AF123BB3|10|原始字符串已核对|
|31|04A34E78|04A34BE2|CheckLost|7A273C00|22|原始字符串已核对|
|32|04A34E80|04A34BEC|OpenPresent|A486E7CA|86|原始字符串已核对|
|33|04A34E88|04A34BF8|CheckTreasure|B999EC21|87|原始字符串已核对|
|34|04A34E90|04A34C06|CheckBigbagPresent|8BD7E02F|103|原始字符串已核对|
|35|04A34E98|04A34C19|Exclude|AD3FDEE5|25|原始字符串已核对|
|36|04A34EA0|04A34C21|TakeMedicine|2E63423A|14|原始字符串已核对|
|37|04A34EA8|04A34C2E|Eat|A29E79FA|31|原始字符串已核对|
|38|04A34EB0|04A34C32|EatOne|13384A49|32|原始字符串已核对|
|39|04A34EB8|04A34C39|EatTurnip|B7020C4A|91|原始字符串已核对|
|40|04A34EC0|04A34C43|Drink|CC7F6FD5|104|原始字符串已核对|
|41|04A34EC8|04A34C49|Release|51FA3A81|17|原始字符串已核对|
|42|04A34ED0|04A34C51|Throw|8E526E33|33|原始字符串已核对|
|43|04A34ED8|04A34C57|ReleaseWeed|E5F10222|96|原始字符串已核对|
|44|04A34EE0|04A34C63|TakeBellMoneyBox|22A04C96|105|原始字符串已核对|
|45|04A34EE8|04A34C74|Wrapping|7FDD3A65|82|原始字符串已核对|
|46|04A34EF0|04A34C7D|Split|7034B515|16|原始字符串已核对|
|47|04A34EF8|04A34C83|SplitTurnip|D02EB8F8|21|原始字符串已核对|
|48|04A34F00|04A34C8F|BuryOne|3D5262E6|85|原始字符串已核对|
|49|04A34F08|04A34C97|ToStorage|C6D74B15|18|原始字符串已核对|
|50|04A34F10|04A34CA1|3Minutes|9CDA27B6|63|原始字符串及RELR已核对|
|51|04A34F18|04A34CAA|5Minutes|5AB52E31|64|原始字符串及RELR已核对|
|52|04A34F20|04A34CB3|10Minutes|A8343F03|65|原始字符串及RELR已核对|
|53|04A34F28|04A34CBD|15Minutes|E0D43167|66|原始字符串及RELR已核对|
|54|04A34F30|04A34CC7|OpenBottle|25DD6329|80|原始字符串及RELR已核对|
|55|04A34F38|04A34CD2|EntryFavorite|7A63E990|78|原始字符串及RELR已核对|
|56|04A34F40|04A34CE0|ReleaseFavorite|B34B4FD3|79|原始字符串及RELR已核对|
|57|04A34F48|04A34CF0|TakeMoneyAll|AC68A996|67|原始字符串及RELR已核对|
|58|04A34F50|04A34CFD|TakeMoney10000|2DF80919|68|原始字符串及RELR已核对|
|59|04A34F58|04A34D0C|TakeMoney1000|F58CE4E9|69|原始字符串及RELR已核对|
|60|04A34F60|04A34D1A|TakeMoney100|8C4ACE41|70|原始字符串及RELR已核对|
|61|04A34F68|04A34D27|TakeOffMannequineCorde|1A120088|110|原始字符串及RELR已核对|
|62|04A34F70|04A34D3E|CallTidyingService|93304365|112|原始字符串及RELR已核对|
|63|04A34F78|04A34D51|Invalid|3424431C|1|原始字符串及RELR已核对|
|64|04A34F80|04A34D59|PurchaseBoxSell|CE89D6B8|89|原始字符串及RELR已核对|
|65|04A34F88|04A34D69|PurchaseBoxCancel|09F8165B|90|原始字符串及RELR已核对|

PutUnitIcon位于实际槽04A34E70，RELR目标04A34BD6，原始字符串PutUnitIcon，CRC32 AF123BB3，Native index30，CSV字段10，消息0110。结合0317F838命令常量30、0317D490 command30→index10、0317513C→03455B14 state3的已验收证据，纠正原先CSV字段10直接当业务命令的假设。不同编号空间，不需要假定10→30通用算术转换。资源目录运行时实际内容和所有业务回调语义仍需独立验证。

## 5. 复现与边界

75c87e00ede142592a128e9bb69165779f8db1b1新增完整pool及66项指针双镜像、RELR、字符串与CSV名称对账；4aa7b64bd25675c977f74f3cfbaba57e66190a66扩大名称查询CFG。新的CI尚未计入已验收结果。Field持久化与Host/Client真实事务无实机证据；不修改生产派送和正式Build ID数据库。

## 6. 完整名称指针表最终验收

[CI 45342318984 / artifact 14897201743](https://github.com/969981/ACNH_Resources/actions/runs/45342318984/artifacts/14897201743)，head 75c87e00ede142592a128e9bb69165779f8db1b1，success；实际下载复算ZIP SHA256 292e3996ffc53c40597165938095445f37be0cc1995d9b28d1c4e48c8d4acbf0，与公布摘要一致。530入口/锚点、67806条匹配指令记录、199 gap（可重叠）。Build ID ff1d1c05670db6021c85b624a710b96300000000000000000000000000000000。

实读FactoryAudit/factory_audit.json中的menu_name_index_records，66条实际记录，66个不同名称CRC32，66/66与CSV行索引一致，menu_name_order_matches_csv=true。此前50/66的结论现提升为完整原版静态名称映射验收。PutUnitIcon记录 raw=d64b930400000000，slot VA04A34E70，name VA04A34BD6，CRC32 af123bb3，index30，CSV行30，字段54706054=10，message_id=0110。验证范围仅为当前原版Build ID与CSV，不代表运行时每次均已加载目录、所有候选均可用或事务已经持久化。全部66项名称映射已确认，后续应独立核查具体物品可用性和Field事务，不重复追索不存在证据的10→30算术转换。
