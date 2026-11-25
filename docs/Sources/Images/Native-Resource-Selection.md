# 特殊道具原生资源选择、共享改造图标与模型渲染输入

返回 [图片专题](README.md) · [图片映射](Image-File-Mapping.md) · [改造款式](../../Items/Native-Variants.md) · [知识库首页](../../README.md)。

## 原生消费证据

FUN_01adf970：读取 ItemParam hash 48EF0398 (ResName)，只有 FUN_01ae59b0 返回真且字符串空时使用 TemplateDummyFurniture1x1；不能对所有空 ResName 自动使用占位模型。FUN_01ae59b0 查类别索引缓存及 90BC0855，并受 wrapper+10 bit5 影响，不能简化为无条件 CanFtr。

FUN_01afe3e0 / 01afeef4 生成本体/布料名；0152dba0 预加载，01530c60 查实际资源并经 01664b40 更新材质纹理绑定。照片有单独的 FtrBromideFrame/Wall 分支。该路径证明模型材质选择，不证明 UI 图标选择。

## 53 个特殊物品

| ItemID | 名称 | Kind | 菜单图标引用 | 菜单 ZS | 证据 |
| --- | --- | --- | --- | --- | --- |
| 774 | 包裹 | DummyCardboard | 3396613271 | [Layout_MenuIcon_HotelCardboard.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_HotelCardboard.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 906 | 梦境搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 909 | 梦境桥梁建设工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 910 | 梦境坡道建设工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2374 | 遗失物 | LostQuest | 3350770355 | [Layout_MenuIcon_Porch.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Porch.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2375 | 遗失物 | LostQuest | 1809255439 | [Layout_MenuIcon_Book.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Book.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2381 | 通信装置零件 | JohnnyQuest | 1942036018 | [Layout_MenuIcon_JohnyParts.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_JohnyParts.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2546 | 这是什么来着？ | TreasureQuestDust | 1619911986 | [Layout_MenuIcon_Present2.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Present2.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2563 |  | MyDesignTexture | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2750 | 帐篷 | HousingKit | 2267135278 | [Layout_MenuIcon_Tent.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Tent.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2755 | 傅达帐篷用地 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2756 | 商店的施工告示牌 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 2757 | 的帐篷 | HousingKit | 2267135278 | [Layout_MenuIcon_Tent.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Tent.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 3077 | メモ | SequenceOnly | 3079482895 | [Layout_MenuIcon_YellowPaperBag.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_YellowPaperBag.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 3349 | 盖房子工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4245 | 邮寄箱 | QuestWrapping | 1619911986 | [Layout_MenuIcon_Present2.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Present2.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4310 | 桥梁用地工具组 | HousingKitBirdge | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4311 | 坡道用地工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4411 | 裁缝屋的施工告示牌 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4480 | 礼物 | DummyPresentbox | 838965131 | [Layout_MenuIcon_Present.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Present.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 4645 | 包裹 | DummyCardboard | 1806818141 | [Layout_MenuIcon_Cardboard.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Cardboard.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5357 | 搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5358 | 搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5359 | 裁缝屋搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5360 | 商店搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5361 | 博物馆搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5426 | 遗失物 | LostQuest | 422116432 | [Layout_MenuIcon_LostQuestMemo.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_LostQuestMemo.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5776 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5777 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5778 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5779 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5780 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5790 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5791 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5792 |  | NnpcRoomMarker | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5793 | 瓶中信 | MessageBottle | 73464273 | [Layout_MenuIcon_BottleRecipe.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_BottleRecipe.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5827 | 盖房子工具组·1号地 | HousingKitRcoQuest | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5828 | 盖房子工具组·2号地 | HousingKitRcoQuest | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 5829 | 盖房子工具组·3号地 | HousingKitRcoQuest | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 6058 | ちず | SequenceOnly | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 6841 | 露营地搬迁工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 6895 |  | SequenceOnly | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 6896 | ー | SequenceOnly | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 9283 | 汎用布地 | SequenceOnly | 3079482895 | [Layout_MenuIcon_YellowPaperBag.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_YellowPaperBag.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 11094 |  | DummyFtr | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 12212 | デモ用たぬきマイルカード | SequenceOnly | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 13346 | 转移工具组 | HousingKit | 1605027801 | [Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_TentWhite.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 13869 | 某人的礼物 | QuestChristmasPresentbox | 838965131 | [Layout_MenuIcon_Present.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Present.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 14042 | 春节红包 | DummyWrappingOtoshidama | 1814489784 | [Layout_MenuIcon_OtoshidamaSealCh.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_OtoshidamaSealCh.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 14043 | 韩国新年红包 | DummyWrappingOtoshidama | 1503500746 | [Layout_MenuIcon_OtoshidamaSealKr.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_OtoshidamaSealKr.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 14044 | 日式红包 | DummyWrappingOtoshidama | 2928200103 | [Layout_MenuIcon_OtoshidamaSealJp.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_OtoshidamaSealJp.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 14774 | ポキ袋 | SequenceOnly | 1722658777 | [Layout_MenuIcon_Leaf.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_Leaf.Nin_NX_NVN.zs) | exact_Label_CRC32 |
| 14873 | 包裹 | DummyCardboard | 33521212 | [Layout_MenuIcon_OneroomCardboard.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/Layout_MenuIcon_OneroomCardboard.Nin_NX_NVN.zs) | exact_Label_CRC32 |

菜单图标是库存/UI 符号候选，不是物品完整外观，未输出冒充商品的 PNG。

## 共享 RemakeID 对账

| 状态 | 数量 |
| --- | ---: |
| direct_icon_missing | 3824 |
| same_original_path | 4 |

以下为真实原版路径不同且历史 PNG SHA 集合不相交的反例。哈希差异不单独证明视觉差异，但足以拒绝字节等价假设。

| ItemID | 代表物品 | 款式 | 自身 ZS | 代表 ZS |
| --- | --- | --- | --- | --- |

## 10 个模型渲染试验输入

| ItemID | Body/Fabric | 基础模型 | 本体 | 布料 |
| --- | --- | --- | --- | --- |
| 14735 | 0/0 | [FtrWherearenParasol.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/FtrWherearenParasol.Nin_NX_NVN.zs) | [FtrWherearenParasolReBody0.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/FtrWherearenParasolReBody0.Nin_NX_NVN.zs) | — |
| 14735 | 1/0 | [FtrWherearenParasol.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/FtrWherearenParasol.Nin_NX_NVN.zs) | [FtrWherearenParasolReBody1.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/FtrWherearenParasolReBody1.Nin_NX_NVN.zs) | — |
| 5397 | 0/0 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric0.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric0.Nin_NX_NVN.zs) |
| 5397 | 0/1 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric1.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric1.Nin_NX_NVN.zs) |
| 5397 | 0/2 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric2.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric2.Nin_NX_NVN.zs) |
| 5397 | 0/3 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric3.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric3.Nin_NX_NVN.zs) |
| 5397 | 0/4 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric4.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric4.Nin_NX_NVN.zs) |
| 5397 | 0/5 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric5.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric5.Nin_NX_NVN.zs) |
| 5397 | 0/6 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric6.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric6.Nin_NX_NVN.zs) |
| 5397 | 0/7 | [ToolSmartphoneNormal.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormal.Nin_NX_NVN.zs) | — | [ToolSmartphoneNormalReFabric7.Nin_NX_NVN.zs](https://github.com/969981/ACNH_Resources/blob/f09e15460d02790060a374b2ad6ba569ba9b97ed/e10617820db06889e1638499478da0de_NCA/1/Model/ToolSmartphoneNormalReFabric7.Nin_NX_NVN.zs) |

原版模型实际解压与纹理描述读取，不等于已完成 FMDL 顶点/索引、FMAT shader、骨骼、色彩空间、相机、光照和透明背景的渲染。FMDL/FMAT magic 命中仅为定位线索。后续以已存在的 Babybed 原版图标为基准校准相机和渲染；生成 PNG 单独存储为 derived_render，不覆盖原版。

[数据及完整证据](https://github.com/969981/ACNH_Resources/tree/research/research/image-mapping/native-selection)。

实际汇总：

~~~json
{
  "special_items": 53,
  "special_empty_resname": 53,
  "menu_field": "ItemMenu",
  "menu_reference_domain": {
    "crc_unique": 11178,
    "id_unique": 0
  },
  "special_menu_paths": {
    "menu_path_crc": 53
  },
  "kind_field_hash_90bc0855": [
    [
      "CanFtr",
      "u8"
    ]
  ],
  "shared_remake_groups": 2,
  "shared_remake_items": 481,
  "representative_slot_comparisons": 3828,
  "comparison": {
    "direct_icon_missing": 3824,
    "same_original_path": 4
  },
  "render_model_sources": 12,
  "render_texture_descriptors": 25,
  "render_cases": 10,
  "actual_rendered_pngs": 0,
  "runtime_verified": false
}
~~~
