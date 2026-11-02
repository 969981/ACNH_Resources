# ACNH 3.0.3 — R44：2,560 Model 分片增量与原生 FMAA/AAL 证据闭环

2026-11-02。分支 `feat/acnh303-round44-model-fmaa-aal-provenance`，继承已成功发布的 R43。
原始 NCA 只读，所有派生转换文件可按 SHA256 复现。**R44 的计划值不能提前记为实际进度。**

## 大规模处理
- R43 后：Model 60,166 个原始源中，已进入 L3 4,788，仍有 **55,378** 未测试；BARS 1,696/1,696 的原始容器已进入 L3，仍有内部外部流媒体缺口。
- R44：64×40 = **2,560 个不与 R19/R27–R36/R41/R42/R43 重叠的 Model 原始文件**。所有源 Git tree 路径、bytes、source SHA 及实际 GLB/PNG 产物逐一校验，失败与 no_target_leaf 分开报告。
- 全部执行成功后的条件性进度：Model 已测试 7,348/60,166；剩余 **52,818**。没有增加 BARS 来源，不重新计算 BARS 100% 的 Native 语义。
- 独立动作：source selector、64 shard 转码、跨分片累计审计、真实文件二次哈希、Releases（64 分卷+审计文件）都必须真实成功。

## FMAA：从 Magic 查找升级为 Header Array Pointer + Count
Switch BFRES 原生 `ResFile`：`+0x68` 材质动画数组指针，`+0x70` 名称字典指针，`+0xE4` 材质动画计数（详见 [EPD BFRES 结构](https://epd.zeldamods.org/w/index.php?title=Bfres) 和 [BfresLibrary](https://github.com/KillzXGaming/BfresLibrary)）。新检查器 `scripts/acnh303_round44_fmaa_native.py` 重新校验 Cedar 原始 compressed SHA256 和 FRES SHA256，校验原生三字段、具体 FMAA 头部指针、候选 offset、32/64 字节字节边界、候选 qword 指针是否物理可达。这可以佐证**实际动画数组条目**，但还不能宣称 MaterialAnim 的曲线/贴图轨道、字典名、关键帧插值或游戏播放已被还原。

## AAL 外部流：原始 CRC/完整 BWAV 与 Native FileRead 严格区分
已核验的 R38 证据是 **873 个 CRC-name 匹配、SHA 核验的 Stream/BWAV 原始文件、合计 1,724,328,411 字节**，与原版 BARS 短头对应；**18 个不匹配 CRC 的 OneRoom 全量外部音频仍未提供**。R40 无同一次游戏运行的 AAL FileOpen/Read/Close 追踪。R44 将 R37/R38/R39/R40 原有报告的 SHA、873 条 filename/CRC/source SHA、R43 最后三个短头重新交叉验算。Native 真正闭环需实时原始 BARS asset/CRC → AAL provider → FileOpen 路径/句柄 → FileRead 偏移/返回长度/字节 SHA → FileClose → 播放行为，并保留同一次会话的真实日志。

## 全资源语义验收
L0=源数据完整；L1/L2=解压与成员；L3=指定媒体转换器测试 + 有效输出；Native=原版动态行为。R44 不把 source Magic/CRC 猜想升级为 Native。BDLI/LBLI、EventFlow、BNSH Shader 的 Native 验收仍单独跟踪 [#45](https://github.com/969981/ACNH_Resources/issues/45)、[#46](https://github.com/969981/ACNH_Resources/issues/46)、[#47](https://github.com/969981/ACNH_Resources/issues/47)。
