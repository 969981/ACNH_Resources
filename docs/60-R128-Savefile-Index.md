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

## 最终验收
第一轮 Run 45343900479 通过，第二轮 Run 45344070890 通过。Artifact 14897705515，SHA256 a039bf0d6c14b50e460e237f0aafe1cf6036997af6f53ea55320d84421c9d62d，已下载并重新计算一致。六份源码 blob 验收、20个 rodata 字面量、10个名称表项实际写入、72项路径拼接、10项 Profile mode2 条件测试全部成功。原版初始化 tail 026EDE58..026EDF78（不含终点）采用合成输入 VTable 寄存器；未执行初始化器此前部分及后续类型标识注册。字符串拼接仅模型化虚表验证及外部 memcpy，原版索引选择、追加、终止符和容量判断指令执行；测试输入容量128，不宣称所有容量边界覆盖。
|index|name pointer VA|basename|header|
|---|---|---|---|
|0|040A9AF5|main.dat|mainHeader.dat|
|1|0408BD44|personal.dat|personalHeader.dat|
|2|04092D71|postbox.dat|postboxHeader.dat|
|3|040FABD9|photo_studio_island.dat|photo_studio_islandHeader.dat|
|4|040F0494|profile.dat|profileHeader.dat|
|5|040E045A|mvoption.dat|mvoptionHeader.dat|
|6|040633C6|wherearen.dat|wherearenHeader.dat|
|7|04097A52|cloud_island_s.dat|cloud_island_sHeader.dat|
|8|040BC153|cloud_island_m.dat|cloud_island_mHeader.dat|
|9|0406DCF9|cloud_island_l.dat|cloud_island_lHeader.dat|
原版 STP 写入对应全局槽位，特别是 S 026EDEC4（slot +0x70），M 026EDED0（+0x80），L 026EDED4（+0x90）。真实调用的文件目录仍需独立确认。

## Profile mode2 局部原版仿真
起点028C7DF4，终点028C7E94（不含终点），X23=合成 Profile 数据，X28=合成 context，X0=数据+0x110。三个 byte 0/1 的8个组合，另加 (FF,FF,FF) 与 (0,80,1)，共10种。原版 02842D10/028420C0 哈希函数执行；仅将 04004450 外部 memset 导入模型化，检查目标、值、长度。对整个 0x69560 字节缓冲区与独立 MurmurHash3 参考逐字节对照，全部一致。每块非零 flag 清零0x23020（含 hash 字段），零 flag 计算 payload 0x2301C 的 hash；全部完成后计算外层 0x100 hash，范围 [0x104,0x69560)。mode1 未执行，完整 028C29B0 未执行。下一条通用文件事务 BL 028C7EB4 被排除，不执行磁盘。
|flag offset|block start|clear call|hash call|
|---|---|---|---|
|0x1A9|0x110|028C7E08|028C7E38|
|0x1AA|0x23130|028C7E58|028C7E60|
|0x1AB|0x46150|028C7E80|028C7E88|
外层 hash BL 028C7E90，文件事务 BL 028C7EB4 (mode2,index4,slot=-1)。后一事务仅静态指令证据。

## 通用读取链源码补充
028C8370 根据输入 mode,index 拼装数据名并调用 026D0CF0/026D0950 查询文件存在/长度；028C8500 根据输入 mode,index 拼装 Header 名称，使用 026D0950 获取大小，分配缓冲区并调用 026CF750 读取，读取至少8字节时取前两个 u32。028C1800 中找到这两个函数的上层调用，但当前 C 证据主要关联普通文件，不能证明 CloudIsland 7..9 的磁盘消费者。三份新源码补充记录在 evidence.json generic_read_sources，未纳入本轮 CI 源码锚点检查。下一轮追踪通用读取、028C8A30、028C871C 以及 Cloud 具体调用者。云岛内容校验与真实磁盘仍未验证。
