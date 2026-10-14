# ACNH 3.0.3 第六轮：FCPX 字体配置、UI2D 结构关联与 BWAV（2026-10-14）

## 1. FCPX 已确认实际用途，不是界面布局或字形图像

此前 [Issue #25](https://github.com/969981/ACNH_Resources/issues/25) 记录 41 个没有 BNTX 的 Layout 源中的 12 个未知 `.bfcpx` 叶子，全部重新从真实 Zstd/SARC 归档解析并逐源校验 SHA-256。

- **12 个 FCPX 文件只有 2 个不同 SHA-256 内容**。
- `SystemB_00.bfcpx`：相同内容出现 11 次，704 字节，Switch FCPX v`0x09030000`，内部有 **9 个字体文件名引用**。
- `Normal_00.bfcpx`：出现 1 次，892 字节，同一版本，内部有 **11 个字体文件名引用**。
- 均有有效的 `FCPX` magic、小端 BOM、20 字节头和与真实文件一致的长度；位置 `+0x24` 的声明字体数量分别是 9、11，均与实际提取到的以 NUL 结束的字体名数量一致。
- 引用包括 `ParkExt.bfttf`、`nintendoP_Seurat-B.bfttf`、`nintendo_udsg-r_ext_zh-cn_003.bfttf` 和 `FOT-NewRodinPro-EB_Park.bfotf` 等名称。**导出的只是文件名引用，不是原始字体文件、字体曲线、字形或 Unicode 字符映射。**

实际字节头／字符串位置／全部原始叶子 SHA：[FCPX probe evidence](../derived/3.0.3/fcpx_font_probe/evidence.json)，执行 [Actions 38489387669](https://github.com/969981/ACNH_Resources/actions/runs/38489387669)。Nintendo Switch 社区将 `.bfcpx` 归类为字体资源，参照 [TotK resource research](https://github.com/TotkMods/Research/blob/main/Readme.md)。

实现 `scripts/acnh303_fcpx_font.py`，严格验证 FCPX magic、BOM、长度、版本、字体数及名字边界；`scripts/test_acnh303_fcpx_font.py` 做计数和损坏长度回归。完整 41 源内的 12 个 FCPX 均已导出独立 `*.fcpx.fontrefs.json`，并保存原始源／叶子／JSON 输出的 SHA；**字体替换条件及所有二进制字段语义尚未恢复**，Issue #25 仍保持开放。

## 2. BFLYT 原生材质、部件、字体、控制数据

此次修复了此前 `fnl1` 字体名表解析的**真实偏移错误**。该表名字偏移是相对于 offset array 的起点（section + 0x0C），而不是整个 section 的起点。修正后，`BirthdayMessage.bflyt` 能得到 `Normal_00.fcpx` 和 `SystemB_00.fcpx`，并准确关联到同个 Layout 归档里的 `.bfcpx` 文件名索引。

新增 `scripts/acnh303_ui2d_semantics.py`，按 NintendoWare FLYT v9 结构逐区块读取，所有字段在真正的原生二进制中进行边界检查：

- `mat1`：材料数量、名字、索引、偏移、原始记录长度和 SHA-256；**不伪造纹理采样、透明混合和着色器行为**。
- `prt1`：部件名称、使用标志、放大倍率、嵌入记录的候选偏移和有效性判断；无法直接等同实际游戏的自动布局。
- `cnt1`：控制面板数量、名称指针与参数表偏移；底层控制类和交互逻辑仍需研究。
- `usd1`：只保留未解析用户数据的长度、原始 SHA，以便继续反查，不声称已恢复业务语义。

真实 41 个 Layout 的统计：

| 恢复对象 | 结果 |
| --- | ---: |
| BFLYT 结构 JSON | 41 |
| BFLAN 动画 JSON | 21 |
| FCPX 字体引用 JSON | 12 |
| 布局 Pane 节点 | 254 |
| `mat1` 材料条目 | 22 |
| `prt1` 部件条目 | 57 |
| `cnt1` 控制区块 | 22 |
| 字体引用 → 对应归档 FCPX 匹配 | **6/6** |
| 静态动画目标 → 布局 Pane 匹配 | **29/29** |
| 全 41 个源的材料/部件/控制边界异常 | **0** |

完整结果已保存在 [41 源新结构数据](../derived/3.0.3/ui2d_font_41/summary.json) 和 [跨资源引用表](../derived/3.0.3/ui2d_crossref_v6/crossrefs.json)，另有 [动画绑定 CSV](../derived/3.0.3/ui2d_crossref_v6/animation_bindings.csv)。

实跑测试：
- [Actions 38489785153](https://github.com/969981/ACNH_Resources/actions/runs/38489785153)：41 FLYT、21 FLAN、12 FCPX 的真实 JSON 导出成功
- [Actions 38489943154](https://github.com/969981/ACNH_Resources/actions/runs/38489943154)：跨布局字体、材料和动画引用的逐源 SHA 核查成功

## 3. BFLAN 时间轴：建立可检索的离线采样，但不称为任天堂原生播放

在已恢复的 21 个 FLAN 中，**29 个动画目标、50 个动画轨道、134 个实际关键帧**已解析。现新增 `scripts/acnh303_bflan_timeline.py`，以明确标记的非原生数学采样方式对有效的 constant、step、Hermite 曲线取样。

本批次产生 **956 个采样帧值，0 个未支持取样记录**，生成 [timeline_values.csv](../derived/3.0.3/ui2d_timeline_v6/timeline_values.csv) 与 [摘要](../derived/3.0.3/ui2d_timeline_v6/summary.json)；[Actions 38490101221](https://github.com/969981/ACNH_Resources/actions/runs/38490101221) 实跑成功。

*限制：* Hermite 使用标准数学插值，尚没有经过 ACNH 3.0.3 ELF 原生求值器／实机 UI 帧画面对照；`FLPA` 的字段索引保留原始值，未经证实的坐标映射不做主观解释。此 CSV 是辅助研究与曲线诊断，不是“游戏原版界面已经恢复可播放”。

## 4. BWAV 再推进 120 个新的音频源

[Actions 38489425068](https://github.com/969981/ACNH_Resources/actions/runs/38489425068) 通过 8 个已验证的稳定 SHA 分片继续处理源文件，采用适当的 skip-count 避免重复前 212 个 BWAV。新 120 个全部得到真实 PCM WAV 并完成输入与输出 SHA-256 校验，未擅自把源文件扫描数写成实际音频转换数。

| 指标 | 上轮 | 当前 |
| --- | ---: | ---: |
| BWAV 已测试源文件 | 212 | **332** |
| 尚未测试 BWAV | 934 | **814** |
| 累计唯一媒体原始源 | 672 | **792** |
| 累计 GLB | 214 | 214 |
| 累计 PNG | 1,354 | 1,354 |
| 累计 WAV | 212 | **332** |
| 累计有效媒体文件 | 1,780 | **1,900** |

媒体输出合计 **2,559,147,310 字节**。 [本轮累计审计](../derived/3.0.3/media_bwav240_cumulative/coverage.json)、[所有 792 源哈希](../derived/3.0.3/media_bwav240_cumulative/source_manifest.jsonl.gz)、[全部 1,900 输出哈希](../derived/3.0.3/media_bwav240_cumulative/media_index.csv)。

新增 120 个 WAV 的 8 个永久可下载分卷 + SHA256SUMS 已由 [Actions 38489829766](https://github.com/969981/ACNH_Resources/actions/runs/38489829766) 发布：

[ACNH 3.0.3 BWAV 240 Total — 第六轮 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-240-total-20261014)。

该 Release 只包含本轮 **120 个新增 WAV**；标签“240 Total”表示第 5、6 轮连续处理了 240 个 BWAV，此外还包含此前 92 个历史 WAV。Release 有 13 个附件，压缩合计约 459 MB。

## 5. 下一步仍未闭合

1. FCPX 只能确认“字体配置 + 引用索引”，替换优先级、各语言/地区字体映射和实际可用字体文件的查找仍未恢复。**不上传、分发或伪造字体文件。**
2. UI2D 已有材质名称、部件记录、控制偏移与节点/动画静态绑定，但 shader blending、纹理绑定和原生运行时动画求值仍需要 ELF 或实机读数的证据。
3. 814 个 BWAV 尚未经过 L3 PCM 验证，不能从已经实测的 332/332 推断剩下都成功。
4. 103,400 个 RomFS 源文件的原始资源扫描和本阶段 792 个已测媒体源是**不同覆盖层级**，不能混为全部资源已完成语义解包。

参考格式说明：[Bflyt](https://epd.zeldamods.org/wiki/Bflyt) / [Bflan](https://epd.zeldamods.org/wiki/Bflan)。
