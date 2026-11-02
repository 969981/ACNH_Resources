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


## R44 实际验收结果与新取得的 Native 结构证据（2026-11-02）

**全流程已通过**：[GitHub Actions #41373476854](https://github.com/969981/ACNH_Resources/actions/runs/41373476854)；[Release acnh303-r44-2560-model-fmaa-aal-20261102](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r44-2560-model-fmaa-aal-20261102) 有 **70 个真实附件**（64 个 Model 转换数据分卷，coverage/native/source/release SHA 共 6 个报告）。
- R44 2,560 个全新原始 Model 已通过来源 SHA 验证：**373 GLB、3,475 PNG**，总 3,848 个有效媒体对象；2,521 个原始源产生媒体，37 个无对应目标媒体，2 个转换失败（均保留证据，不伪称转换成功）。
- Model L3 源测试从 **4,788/60,166** 提升至 **7,348/60,166**；剩余 **52,818**。BARS 1,696/1,696（L3 源测试），Layout 960/960，独立 BWAV 1,146/1,146 的既有源测试状态未变化。
- 证据：`derived/3.0.3/r44_cumulative/coverage.json`、`unified_coverage.json`、`source_delta.jsonl.gz`、`native_gap_matrix.json`；Release 二次重新计算全部媒体的 SHA256，附 `r44-release-verification.json` 和 `SHA256SUMS.txt`。

### FMAA 不再只是魔数：验证两条动画对象的真实头部字段

[轻量独立 Actions #41374089096](https://github.com/969981/ACNH_Resources/actions/runs/41374089096) 成功，输出 `derived/3.0.3/r44_fmaa_deep/cedar_native_FMAA_headers.json`。其真实原始压缩源 SHA 为
`3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f`，内层 FRES SHA
`6fe0ae7dbefc86e1fb5971f391f79343f330266716b4c791696ab70908ca6f4e`。

原生 FRES+0x68 的 material animation array pointer=**0xF0**，FRES+0xE4 的 material animation count=**2**，FRES+0x70 dictionary pointer=**0x1D0**（目前该位置首四字节为零，字典**不能**据此认定已完成解析）。真实 FMAA 成员从 `0xF0` 和 `0x160` 开始，每条 header 0x70 字节，数组边界与成员 Magic 均验证。

| 动画名称（原始 NW 字符串） | 帧数 | Flags | 材质 | Curve | ShaderParam | TexturePattern |
| --- | ---: | --- | ---: | ---: | ---: | ---: |
| `PltTreeCedarDecoA` | 100 | 0x4 (Looping) | 2 | 2 | 4 | 0 |
| `PltTreeCedarDecoB` | 100 | 0x4 (Looping) | 2 | 2 | 4 | 0 |

动画名字来自原始 NW 长度前缀字符串（17 字节），并保留每条名字的 SHA。头部 `+0x20` 的 BindIndices pointer 分别是 520/848，`+0x28` 的 MaterialAnimData 数组 pointer 是 528/856，均在 FRES 范围内。这显著推进了**结构层**的语义还原，但**尚未解出 MaterialAnimData 内 2 条 Curve 的逐帧 key 值、ShaderParam 数据绑定，也未证明原版游戏运行时材质颜色/纹理随帧变化**。

上面的字段顺序依据 [BfresLibrary MaterialAnim.Load](https://github.com/KillzXGaming/BfresLibrary/blob/master/BfresLibrary/Shared/MaterialAnim/MaterialAnim.cs)；`MaterialAnimFlags.Looping = 1<<2`，所以 0x4 在该解析器中是循环标志。下一个静态解析目标是 `MaterialAnimData.cs` 的 0x40-byte material entry / ShaderParam pointer / AnimCurve frame-key arrays，所有 offset 与 count 必须独立验证，不可仅按预设长度强行读曲线。

### AAL：读取链的已证实节点和下一步原版运行时捕获

- **已证实数据层**：R37/R38 的 873 个 CRC-name 匹配 Stream/BWAV 真正原始文件（原始字节合计 1,724,328,411 B、SHA、BWAV channel/header/payload 检查），但 R39 的 OneRoom 18 个未匹配全量 BWAV 源仍没有得到原始文件样本。
- R43 最后 3 个短头（`Event_SNPC_kpp`、`NpcSP_fox`、`Event_Obj_Cafe_Telephone`）CRC 未落入 873 条已证实 Stream 匹配中；不能将这三条伪配到 873 个候选之一。
- **已证实静态 ELF 链**（原版 3.0.3 ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180`）：`0x290F258` ADRP + `0x290F25C` ADD 构造 `Bgm_Base` 字符串指针 `0x3FFADB9`；`0x290F260` 写入 `SP+0x38`，调用 `0x290F278 → 0x373167C`；后续静态链有 `0x37316FC → 0x3E45184`，以及 `0x3E451FC / 0x3E45218` 虚表间接调用。这些函数均**尚未证明是 FileOpen**。依据 [R39 Native 反汇编报告](https://github.com/969981/ACNH_Resources/blob/feat/acnh303-round43-bars-complete-model-scaleout/docs/ACNH303_ROUND39_BOOKOPEN_BASEDATA_AAL_MANAGER_ONEROOM_SOURCE_FORENSICS.md)。
- 动态取证顺序：在同一份实际 3.0.3 进程中记录 ModuleBase + PC/RVA、`SP` 和 `x0..x7`，在 `0x290F278` 验证 `[x1+0x18]` 的真实名称和返回对象；跟踪 `0x373167C` 后续对象地址与 `X21+0xA8` 的实际虚表目标；只有实际观测 `Sound/Resource/Stream/...` 文件路径、FileOpen 返回句柄、FileRead offset/count/返回缓冲 SHA、FileClose 与对应 BWAV PCM，才把 `runtime_AAL_file_IO_trace_verified` 改为 true。无同次会话原始日志必须继续显示 `NOT_CAPTURED`，不能用模拟日志或只有 CRC 的文件名代替。

截至此时，**FMAA 有原始动画头部/名字/帧数/轨道计数证据；AAL 有原始 Stream 文件级证据但无真实运行时读取闭环**。BDLI、EventFlow、Shader 依旧是单独的 Native 验收项目。
