# R96 · Native 表、关系状态及解密存档布局

本轮使用 3.0.3 原始 ELF SHA256 145903c25d37a7c90e8818440bcf462b3dca490e11e45cf435605ab00d709664 和 Ghidra image base 0x100000。原始数据保持不变。

## 重要突破
- BED25A86 的三个 signed constant 引用位于 027478c0、0274f840、027a5750；前者对 NPC Memory 选中项恢复默认值，后两者分别恢复另一组 u16 默认值和清零多组关联计数。11 条 NPC Memory 定义被标记；上游 02690d60、026b1100、0281a7b0 与居民记忆重置/迁移有关，027e9ff0 包含 MoveInCompletion 状态更新。原始字段名仍未知。
- 5F77B61A 与 8D401DF7 在 NPC Memory 中分别对应 mode 0/1 选择性恢复默认值（020ec6c4、020eca68）；NPC Temp 中 mode 1/2；具体场景名尚未证明。
- 027a87a4、027b5d00 证明非零日期差上下文时，若 BromideRewardSkipCount 非零则递减 1；026b7690 的特定路径置 10。不能推出照片获得概率或全部赠礼评分。
- UNK_04179ca0 六个 u32 元素按 Ghidra image base 与 ELF load base 转换直接提取，保留 raw bytes、VA 和指令地址形成候选；若无对应代码证据不得升级为完整公式。
- R95 尚未定位的 62 个状态，重新生成名单并扫描原始 ELF 精确字符串与 AArch64 地址形成候选；同时搜索两个招募 Query 原名及简名。没有完整 callback 绑定即保持未知。

## 解密 main.dat 只读读取

对照 NHSE 固定提交 [cb074541](https://github.com/kwsch/NHSE/tree/cb0745415945776f73375bf0a434a8babf059307) 的 MainSaveOffsets30、Villager2、GSaveMemory、RevisionChecker 和 FileHashRevision，居民基址 0x120、步长 0x13230、10 个居民，NPC Save 0x1267C + 2*UniqueID，完整 NPC Memory 0x3C + player*0x5F0 + UniqueID，8 个记忆槽位。实际 3.0.3 文件长度 0x9B0E90，SaveRevision 34。Native 160 个 light memory 结构保留候选，不在默认读取器输出。读取器不导出玩家身份字符串，不判定空槽就是在岛居民。

```powershell
python Scripts/acnh303_r96_save_flags.py --root . --selftest
python Scripts/acnh303_r96_save_flags.py --root . --decrypted-main main_decrypted.dat --header mainHeader.dat --out npc_flags.json
python Scripts/acnh303_r96_native_tables.py --root . --out artifacts/acnh303-r96
```

只读读取器拒绝错误大小、错误 header revision 或 19 个 Murmur3 校验区任一不匹配；不解密、不回写、不创建伪造真实存档。CI 使用合成边界测试和篡改拒绝测试，实际存档实例尚未提供。完整的字段字典仍使用 R93。所有原名未证明的 Hash 不强行命名。实际游戏行为和线上领养能力不作最终判断。
