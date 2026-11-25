---
title: 原版 UI 分类分组与 CRC32 恢复
tags: [acnh, classification, hash, bcsv]
version: "3.0.3"
status: partial
---
# 原版 UI 分类分组与 CRC32 恢复

返回 [原版 256 项分类定义](Native-UI-Furniture-Category.md) · [网页分类规划](Web-Catalog-Taxonomy.md) · [首页](../README.md)。

## 本轮结论

重新从原版 ItemUIFurnitureCategory.bcsv（blob 113a53dfdd666917e0306d79227576291666723d）读取所有 256 行；A4686E5D 在偏移 4、宽 4 字节。60 个不同值完整划分 256 个细分类；组内成员唯一。38 个组命中历史 NHSE specs 或原版细分类标签的 CRC32，19 个通过组合候选命中，3 个未恢复。命中仅证明 CRC 一致与成员语义相符，不等同于原生消费者验证，也不能将字段的正式名称视为已恢复。1.6.0 [历史定义表](https://wuffs.org/acnh/bcsv_160/html/ItemUIFurnitureCategory.html) 仅显示 ID、Label、Name；本轮 3.0.3 实际有四个字段。

CRC32 为标准 IEEE（ASCII/UTF-8，大小写敏感）。历史词典来源：[NHSE specs_130](https://github.com/kwsch/NHSE/blob/cb0745415945776f73375bf0a434a8babf059307/NHSE.Parsing/Resources/specs_130.txt)。候选由组合词搜索产生，不宣称官方翻译。机器可读清单：[Native-UI-Category-Groups.json](Native-UI-Category-Groups.json)。

## 全部 60 组

| 原始 Hash | 名称候选 | 证据 | 子类数 | 细分类标签 |
| --- | --- | --- | ---: | --- |
| 0x38741771 | MarineSuit | source_label_crc | 1 | MarineSuit |
| 0x55067543 | OnePiece | source_label_crc | 1 | OnePiece |
| 0x59691654 | Vegetable | source_label_crc | 1 | FieldVgt |
| 0x64C26B81 | Chair | source_label_crc | 2 | Chair, Sofa |
| 0x37E8A042 | Table | source_label_crc | 2 | Table, Desk |
| 0xDE0ABA1F | Bed | source_label_crc | 1 | Bed |
| 0x648674E7 | Shelf | source_label_crc | 3 | Chest, Shelf, Dresser |
| 0xE4E3185E | ScreenArch | candidate_crc | 2 | Screen, Arch |
| 0x810E8FA1 | WorkBench | source_label_crc | 2 | WorkBench, SewingTable |
| 0x251EF7A8 | Kitchen | source_label_crc | 3 | Kitchen, KitchenThings, Dining |
| 0xA761007E | DishFood | source_label_crc | 1 | DishFood |
| 0x99A9227C | DishDrink | source_label_crc | 1 | DishDrink |
| 0x39C5FD58 | Lamp | source_label_crc | 1 | Lamp |
| 0x27AB1990 | EntertainmentAppliances | candidate_crc | 5 | TV, GameConsole, Audio, TableClock, Clock |
| 0xDCEA099B | MusicalInstrument | source_label_crc | 1 | MusicalInstrument |
| 0x41CDCAAA | AirConditioning | source_label_crc | 5 | HomeAppliances, Fan, AirConditioning, Heating, Fireplace |
| 0x4971A074 | Bathroom | candidate_crc | 4 | Toilet, Bathtub, BathroomThings, Beauty |
| 0x9E1FDA64 | PlantItem | candidate_crc | 1 | Plants |
| 0x0656F735 | FacilityGoods | candidate_crc | 8 | Study, Supplies, School, Office, Hospital, Museum, Shop, SuppliesFacility |
| 0x7825A6F0 | OutdoorGoods | candidate_crc | 4 | Seaside, Space, Star, Vehicle |
| 0x4D77A660 | HobbyGoods | candidate_crc | 9 | Animal, Toy, Sports, Playground, SuppliesOutdoors, InsectSP, FishSP, Insect, Fish |
| 0xAEE59A00 | GardeningGoods | candidate_crc | 2 | Ranch, Garden |
| 0x8E2DE08D | NationalGoods | candidate_crc | 2 | JapaneseStyle, SuppliesFolkCraft |
| 0xC911A949 | EventGoods | candidate_crc | 13 | Easter, SuppliesSeason, LEGO, Sanrio1, Sanrio2, Sanrio3, Sanrio4, Sanrio5, Sanrio6, Mario, Zelda, Splatoon, Compass |
| 0x6225724B | 未恢复 | unknown | 1 | HouseDoorDeco |
| 0xC47890B4 | Art | candidate_crc | 2 | Picture, Sculpture |
| 0xA173137D | Bromide | source_label_crc | 1 | Bromide |
| 0x2ADD09C4 | Poster | source_label_crc | 1 | Posters |
| 0x7B246D38 | CeilingLamp | source_label_crc | 1 | CeilingLamp |
| 0x45F01600 | CeilingEtc | source_label_crc | 1 | CeilingEtc |
| 0xDFA2AFF1 | None | source_label_crc | 2 | None, Unnecessary |
| 0xCAB3A267 | FloorIndoor | candidate_crc | 39 | Wood, Herringbone, Country, DecoWood, ColorfulWood, PaintWood, ParquetIron, Parquet, SimpleParquet, Tatami, TatamiPanel, Japanese, Stone, Iron, Brick, ArchBrick, Tile, Argyle, Chocolate, Honeycomb, FloorKitchen, Morocco, FloorTile, TileChecker, Cloth, Dot, Panel, PuzzleMat, Rubber, SimpleCarpet, FloorSimpleGlodSilverBronze, Camouflage, AnimalFloor, Neta, Luxury, Decadence, FloorMachine, Sidewalk, FloorSports |
| 0xFD590339 | FloorOutdoor | candidate_crc | 13 | Grassland, NatureGreen, NatureFallenLeaves, Nature, NatureBrown, NatureWhite, SpNature, SpInorganic, FloorLEGO, Sanrio, FloorMario, FloorZelda, FloorSplatoon |
| 0xC0939284 | Tops | source_label_crc | 1 | Tops |
| 0x0581CE14 | Bottoms | source_label_crc | 1 | Bottoms |
| 0xA17EC151 | Cap | source_label_crc | 1 | Cap |
| 0x2340A7BF | Accessory | source_label_crc | 1 | Accessory |
| 0xDF4042C0 | Socks | source_label_crc | 1 | Socks |
| 0xD50EAE93 | Shoes | source_label_crc | 1 | Shoes |
| 0x236F2EA1 | Bag | source_label_crc | 1 | Bag |
| 0xEA635200 | Umbrella | source_label_crc | 1 | Umbrella |
| 0x91B9B8D3 | Insect | source_label_crc | 1 | LivingInsect |
| 0x9F46EB0D | Fish | source_label_crc | 1 | LivingFish |
| 0xE47038B8 | DiveFish | candidate_crc | 1 | LivingDiveFish |
| 0xD17700E9 | 未恢复 | unknown | 3 | FtrWall, Pillar, Counter |
| 0x80C191EF | Tool | source_label_crc | 2 | Tool, SubTool |
| 0xA202D920 | Plants | source_label_crc | 1 | FieldPlants |
| 0x30AFB93F | Haniwa | source_label_crc | 2 | Haniwa, HaniwaPiece |
| 0xACA78CA8 | Fossil | source_label_crc | 2 | Fossil, FossilUnknown |
| 0x0C930D4E | Music | source_label_crc | 1 | Music |
| 0x2715B2C0 | Others | source_label_crc | 12 | Etc, Etc9, Etc10, Etc11, Etc12, Etc2, Etc3, Etc4, Etc5, Etc6, Etc7, Etc8 |
| 0xAFE33FB4 | WallNormal | candidate_crc | 46 | WallWood, WallHerringbone, WallHall, WallMixPlankWood, WallPegbpard, WallPaintWood, WallPanelMold, WallStone, WallBrick, WallStucco, WallIron, WallTin, WallTile, WallTilee, WallTwoToneTile, WallMetro, WallWoodTile, WallMorocco, WallHoneycomb, WallChocolate, WallCrown, WallCloth, WallSimple, WallGoldSilverBronze, WallDot, WallHeart, WallCute, WallStripe, WallFruit, WallFlower, WallManor, WallCountry, WallRose, WallFlowerPop, WallArtDeco, WallCamouflage, WallPuzzle, WallDollhouse, WallToy, WallDiner, WallJapanese, WallTeaRoom, Asia, WallLibrary, WallFacility, WallNeta |
| 0x278E0840 | WallSpecial | candidate_crc | 10 | WallNature, WallSpNatureCool, WallSpNatureWarm, WallSpIndoor, WallSpInorganic, WallLEGO, WallSanrio, WallMario, WallZelda, WallSplatoon |
| 0xAF583246 | 未恢复 | unknown | 6 | RugSimple, RugPattern, RugPatternSlender, RugKitchen, RugSlender, RugWood |
| 0x1B8DD991 | RugRound | candidate_crc | 2 | RugRoundShaggymat, RugRoundShaggy |
| 0x20CBC83A | RugSpecial | candidate_crc | 9 | RugFruits, RugRose, RugHeart, RugStar, RugMessageMat, RugIcon, RugPark, RugLEGO, RugSanrio |
| 0x170CF1E2 | Tree | source_label_crc | 7 | FieldTreeOak, FieldTreeFruit, FieldTreeOakDeco, FieldTreeCedar, FieldTreeCedarDeco, FieldTreePalm, FieldTreeBamboo |
| 0x0518264E | Bush | source_label_crc | 1 | FieldBush |
| 0xA07BC4EC | Flower | source_label_crc | 1 | FieldFlw |
| 0x3C1965F3 | WeedStone | candidate_crc | 4 | FieldVine, FieldWeedLight, FieldWeed, FieldStone |

## 研究用途与边界

保留细分类 ID、label、group_hash 和名称证据；网站独立建立导航和多维标签。原生组的 Indoor/Outdoor 仅为候选分类名称，不能直接当作物品真实摆放限制。256 行不等于 256 个使用中的类别。下一步对 STR_CategoryName 原始 BDLI/LBLI 标识符或 MSBT 标签与分组 Hash 对账，进一步定位 ItemParam 对应字段及原生消费者；未完成逐物品关联。
