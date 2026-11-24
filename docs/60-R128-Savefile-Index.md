---
title: ACNH 3.0.3 R128 - Save file name index
tags: [ACNH, ARM64, save, R128]
---

# R128 保存文件名初始化及 Profile 条件调度

关联 [[59-R127-Streaming-Dispatch]]。固定 R127 Artifact 14897256721，SHA256 cd6f24fed4a3a3540c61ef197dc0cb6ef0e06188fcf346a15a917110725bb23b。

## 原版名称初始化
026ED290 (_INIT_6142) 写入 05573E38 起始、stride 0x10 名称表；05573F48 起始、stride 4 类型标识表。原始文件名基干及类型如下。

|Index|Name|Type|
|---:|---|---|
|0|main|::Game::SaveMain|
|1|personal|::Game::SavePersonal|
|2|postbox|::Game::SavePostBox|
|3|photo_studio_island|::Game::SavePhotoStudioIsland|
|4|profile|::Game::SaveProfile|
|5|mvoption|::Game::SaveMovePlayerOption|
|6|wherearen|::Game::SaveWherearenIslands|
|7|cloud_island_s|::Game::SaveCloudIslandS|
|8|cloud_island_m|::Game::SaveCloudIslandM|
|9|cloud_island_l|::Game::SaveCloudIslandL|

02701270 追加 name + ".dat"；027014C0 追加 name + "Header" + ".dat"。越界 index 回退 0。02701810 mode1 生成 Villager%d（slot<8），mode2 生成 Moved，其他 mode 置空前缀。不能把 mode 的通用路径规则当成 CloudIsland 实际文件位置的证据。028CB2A0 是通用文件事务入口；当前还未证实索引7..9调用该入口。

## Profile
028C29B0 mode2 根据 context+0x1A9/AA/AB 的三个 byte 分支，对 0x110/0x23130/0x46150 的三个块选择 hash 或 memset 0；每块0x23020。mode1 对 slot 对应的 0x188+slot*4+1..3 使用内联 hash。mode2 三个 02842D10 直接调用及 028420C0 外层 hash 是原版窗口研究目标。

## 验收
固定六份 C blob；检查 20 个原版 rodata 字面量（含 main 精确地址），提取初始化器有界窗口及三个 Profile 内层调用窗口。源码索引不等于运行时 I/O 证据；下一步按原版指令对 mode2 局部仿真。未写入任何存档。

`python Scripts/acnh303_r128_savefile_index.py --r127 r127-final.zip --out artifacts/r128`
