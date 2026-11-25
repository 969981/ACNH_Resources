# ACNH 3.0.3 — native furniture placement arithmetic

返回 [知识库首页](README.md) · [专题索引](Furniture/Furniture-Spatial.md) · [研究路线](Research/Research-Roadmap.md)。
## Actual validation
Draft PR #126, research branch, no merge. CI 45569318860 job 139051761948 success, artifact 15001960447. Original NSO SHA256 68c7fbeda353f8e4a283eac6a9b99e713e72a327048214bf6a4e7214616b87c1. Original ARM64 code mapped into Unicorn 2.1.4 with native relative relocations; controlled dependency stubs for valid item, ID, placement type, dimensions, axis mode and size enum; synthetic singleton/table for bounds. No game runtime, physics engine or full object graph emulation. Support function receives footprint stub independently checked by native bounds replay.
- 01AFB7FC: 28 sizes ×4 directions ×2 axis modes =224 successful original instruction replays. Normal mode swaps dimensions for odd directions; axisMode=1 retains dimensions. Inclusive rectangle [0,0,w-1,h-1] in half-cell units.
- 01500520: 42 actually occurring (size enum, placement enum) combinations ×4 directions=168 replays; 36 accepted, 132 rejected. 9 accepted groups cover 406 original item rows, 1624 item-direction associations. For enum6 requires size enum2 (2x2). Origin was (10,20), exported offset relative to origin. No claim of actual placement acceptance.
- Overlay independently built using prior artifact 15000592353 and replay 15001960447: 11178 items, 224 footprint rules, 168 support rules, 44712 item_support view rows, 1624 accepted support rectangle rows, 89424 item_footprint rows (two axis modes). Integrity and foreign key check passed. Unknown actual axis mode per object, collision and height left untouched.
## Actual examples, direction0, relative inclusive half-cell coordinates
|Type|Size|Min X,Z|Max X,Z|
|---|---|---|---|
|Floor_Downer|1x1|0,0|1,1|
|Floor_Downer|2x1|0,0|3,1|
|Floor_Downer|2x2|0,0|3,3|
|Floor_DownerLeft|2x1|0,0|1,1|
|Floor_DownerRight|2x1|2,0|3,1|
|Floor_DownerRight|2x2|2,0|3,3|
|Floor_DownerFront|2x2|0,2|3,3|
|Floor_DownerUpper|1x1|0,0|1,1|
|Floor_DownerCenter|2x2|1,1|2,2|
For left 2x1, rotations 0/1/2/3 respectively: [0,0,1,1], [0,2,1,3], [2,0,3,1], [0,0,1,1]. For center all four identical. No cardinal direction label inferred. Real items: ironwood kitchen3270 left, ice counter3505 right, kitchen island998 front, altar13520 center.
## Native placement call chain (static decompiled evidence)
0148E51C validates item and candidate, map boundaries, special category conditions; normal upper path requested layer value1 requires type5/7, fetches lower object via 01A5033C layer0, validates it, invokes 01500520 and tests inclusive containment on both axes. If flag param_2+0x36 nonzero, may search adjusted placements, otherwise rejects. Scans lower support region via 01A50240 layer1 and counts FUN_0277DA10 boolean; rejects count>3 in that path. Do not interpret as number of distinct objects or universal max stack layers. Successful result9 consumed by 0152015C and other callers; rejected result1 in numerous conditions, invalid item0. Special item0x2b56 has separate path. 022ACC00 checks every upper cell empty (sentinel -2), finds lower valid object, checks placement type1..6, support rectangle containment, orientation predicate 01AEF228 and further spatial checks. Calls 022AB224 with2, but this is not proof of layer2 stacking. 0148BF70 performs secondary layer1 query for types5/7 under certain flags. Native occupancy grid bitset candidate in 0148BF70 bounded 0x120×0x100; scope not yet authenticated as room occupancy.
01500808 computes four corner centers using 5.0*x+2.5, calls 017BA18C for each; special wall modes transform coordinates via 0153E6B0. 017BA18C reads room boundary singleton, checks X/Z ranges or wall vertical 0..40 and invokes 017F90E0. 0148C3F0 uses 10.0 full-cell and 5.0 half-cell coordinate conversion. This is room boundary/grid logic, not verified physical collision mesh. 01490640/014903E0 dispatch 0149A6F0/0149BE24 through scene-object virtual lookup. Height remains unresolved; no global maximum stacking height/count asserted.
## Next
Decode actual 01AEF228 direction restrictions, 0277DA10 predicate and 01A50240 layer storage; trace 0149A6F0/0149BE24, support Y producers and physical collision data. Keep placement result codes and grid checks separate from model bounds. Do not promote original static fields to final in-game booleans. 
