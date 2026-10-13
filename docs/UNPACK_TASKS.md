# ACNH 3.0.3 — 可执行任务清单（U00–U13）

此文件与 GitHub Issues 对应；变更状态必须附真实验证证据。详细验收规则见 [UNPACK_MASTER_PLAN.md](UNPACK_MASTER_PLAN.md)。

| ID | Priority | 输入/格式 | 独立交付 | 通过判据 | 前置 |
| --- | --- | --- | --- | --- | --- |
| U00 | P0 | RomFS/ExeFS Git tree | `inventory_acnh303.py`、全量路径/大小/扩展名分布、哈希基线 | 资源 100% 枚举，大小写冲突可查 | 无 |
| U01 | P0 | 全分组/Actions | 统一 CLI、稳定分片、resume/verify、聚合报告 | 同输入幂等；不重复或漏统计，失败可恢复 | U00 |
| U02 | P0 | Zstd/Yaz0/SARC/PACK/嵌套 | 按魔数递归展开、成员清单、原始成员与安全限额 | 所有有效容器均能完整枚举，可校验并取回 | U01 |
| U03 | P1 | BCSV/BYML/Param/AnimationSequence/ASB | CSV/JSON，CRC32 字段字典，语义仅已证实者标注 | 全部表格/参数真实解析、结构计数对齐 | U01,U02 |
| U04 | P1 | Message/MSBT/MSBP | 多语言文本/标签/控制码结构、CSV 与语言对照表 | 已识别语言全部覆盖，无错误解码 | U02 |
| U05 | P1 | EventFlow/*.bfevfl（及实际 bfevtm） | graph JSON + 可读反编译文本 + 事件交叉索引 | 节点/边/Actor/入口/参数完整，引用闭合 | U01 |
| U06 | P2 | Model/BFRES | Mesh/Bone/Material/Animation JSON，GLB/glTF | 几何/骨骼/法线/UV 索引正确，标准 glTF 校验通过 | U02 |
| U07 | P2 | BNTX/各压缩贴图 | 纹理清单、PNG/KTX2、mipmap/array/format 元数据 | RGBA/BCn/ASTC 等按能力矩阵逐格式验证 | U02,U06 |
| U08 | P2 | Layout/BFLYT/BFLAN | UI 树 JSON、动画轨道 JSON、资源引用 | Pane/Material/动画目标与成员关联可验证 | U02,U07 |
| U09 | P3 | Effect/ELink2/Shader/PTCL/SHARC/BNSH | 特效/着色器结构信息、引用图、可导出叶子 | 偏移/参数/依赖真实，不能生成假的 GLSL/PTCL 画面 | U02 |
| U10 | P2 | Sound/BARS/流媒体/波形 | 关联清单，真实可解码声音为 WAV/FLAC | 每种 codec 播放/长度/采样率实测通过 | U02 |
| U11 | P3 | Movie/Font/VTrigDict/Swkbd/System/其余 | unknown 格式字典、专用转换器、原始叶子提取 | 每类均有完整清单、真实解析或明确缺口 | U00,U02 |
| U12 | P0 | 全量输出与 manifest | `coverage.json`、`missing/failed/unsupported.csv`、断点恢复 | 源覆盖 100%；failed/missing/冲突/哈希不符为零 | U03–U11 |
| U13 | P3 | 持久发布/交付 | Git 可读小文件、GitHub Releases 分卷、大文件索引 | 用户可长期下载并核验；非过期 Actions Artifact | U12 |

## 推荐实施批次

**Batch A（立刻）**：U00 → U01。跑当前 19-shard Actions，核对真实输入/输出数量，修复失败、增量重新运行。

**Batch B（重点先出可用内容）**：U02 → U05。归档递归，全部 BCSV/BYML/MSBT/事件图、CSV，并形成跨文本/事件引用表。

**Batch C（游戏资产）**：U06 → U07 → U08。优先同一模型的一套 BFRES 骨架＋真实 PNG，再扩到所有 Model/Layout。遇到 ASTC/BC7 等逐像素格式拆出子任务。

**Batch D（专有资源）**：U10 → U09 → U11。Sound、特效、Shader、Movie/Font/ASB 等格式，避免全用单一 "unsupported" 标签。

**Batch E（全量最终验收）**：U12 → U13。合并所有批次结果、证明每个源文件和成员映射、发布可下载成果。

## 不允许的"完成"

- 只有魔数和前 16 字节的 JSON，却把 BFRES/BNTX 标记为 converted。
- 只发布索引而没有可提取的多层档案成员，却称为归档全解。
- 只有 GitHub Actions URL，未记录生成物 SHA-256，或使用 14 天后过期工件当最终发布。
- 一个目录里的前 1,000 个 GitHub API 返回文件当成该目录的文件总数。
- 将 ExeFS 的 ELF/NSO 强行按 RomFS 素材格式解包；ExeFS 另走逆向技术文档线。
