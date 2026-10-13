# ACNH 3.0.3 — L3 第四轮扩大源文件转换（2026-10-14）

## 真实执行与结果

[GitHub Actions #38427348253](https://github.com/969981/ACNH_Resources/actions/runs/38427348253) 的单元测试、12 个新源文件分片和覆盖率审计全部成功；新增 **300 个不重复原始源文件**，与此前 252 个源合并，累计 **552 个源文件**的 L3 结果。

| 来源 | 本轮新测源 | 有有效媒体输出源 | 新输出文件 | 未找到目标媒体 |
| --- | ---: | ---: | --- | ---: |
| Model，BFRES→GLB / meshless FRES→BNTX→PNG | 200 | 200 | 132 GLB、272 PNG | 0 |
| Layout，BNTX→PNG | 60 | 47 | 337 PNG | 13 |
| Sound，BWAV→WAV | 40 | 40 | 40 WAV | 0 |
| **总计** | **300** | **287** | **781 个文件** | **13** |

其中 Model 的 200 个新源文件里有 **132 个含真实模型几何**，另外 **68 个属于可解压独立 BNTX 的无网格 FRES**，分别产生 PNG 纹理。导出 PNG 的资源没有被错误算成 GLB。

### 本轮之后的累计实际覆盖

| 来源 | 累计实测原源 | 有有效媒体源 | 真实媒体输出 | 尚未实测源 |
| --- | ---: | ---: | --- | ---: |
| Model | 308 | 308 | 214 GLB + 376 PNG | 59,858 |
| Layout | 152 | 111 | 978 PNG | 808 |
| BWAV | 92 | 92 | 92 WAV | 1,054 |
| **合计** | **552** | **511** | **1,660 个** | **61,720** |

全部 1,660 个经过格式校验的媒体文件原始数据量为 **1,244,272,410 字节（1.24 GB）**。41 个已经实测的 Layout 源没有独立 BNTX 目标，保留 no_target_leaf；不代表整个文件没有其他布局或动画信息。

**成功率只针对实测文件有效，绝对不能将上述数字误写成 103,400 个原始 RomFS 文件的全量 L3 解码完成。**

## 实际产物及验证

[长期分卷 Release：ACNH 3.0.3 L3 Iteration 4](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-l3-iteration4-20261014) 已上传并验证，17 个附件、约 350.3 MB：
- 12 个分组 tar.gz，包含新生成的实际 GLB、PNG、WAV 媒体文件、源路径镜像、逐源转换记录及错误；
- SHA256SUMS.txt，验证全部下载附件；
- coverage.json，累计来源候选总数、实测成功率、尚未测试数量；
- media_index.csv，列出全部 1,660 个媒体文件对应的源路径与 SHA-256；
- source_manifest.jsonl.gz，全部 552 个源文件的原始哈希、输出与转换状态；
- remaining.csv，仍没有媒体转换结果或部分转换的源文件与原因。

仓库里有完整且持久的元数据：
- [累计状态](../derived/3.0.3/media_iteration4_cumulative/coverage.json)
- [每个已验证 GLB／PNG／WAV 的 SHA-256](../derived/3.0.3/media_iteration4_cumulative/media_index.csv)
- [未转换清单](../derived/3.0.3/media_iteration4_cumulative/remaining.csv)
- [所有已测源记录](../derived/3.0.3/media_iteration4_cumulative/source_manifest.jsonl.gz)

本次引入 [累计审计器](../scripts/acnh303_media_incremental_audit.py)，它对照原始 103,400 路径及大小，拒绝重复源文件、输出类型不匹配和声称成功却没有真实输出的记录。Model 资源严格区分具有三角形的 GLB 和纯纹理 PNG，不会虚构模型。

## 下一阶段

1. Model：仍有 59,858 个源文件未测，继续按原始 Git tree 的 hash 分片处理，但需单独补齐 glTF 材质、骨骼、实际渲染和纹理引用忠实度。
2. Layout：152 个已测源中有 41 个没有可独立转换的 BNTX，优先深入 BFLYT / BFLAN 原生节点、动画和资源引用；对 no_target_leaf 反复调用 PNG 工具没有价值。
3. Sound：BWAV 还有 1,054 个未测源；后续保持每批体积限制和格式验证，打包 Release 而不是把几 GB WAV 塞进 Git 历史。
4. Shader / Effect / 未支持专用容器仍未解决。整体 103,400 文件 L0–L2 覆盖不等于已经生成常规 L3 格式。

前序：[L3 基础](UNPACK_MEDIA_L3.md) · [第二轮扩容](UNPACK_MEDIA_L3_SCALEOUT.md) · [BottomsTex 无网格 FRES 解析](BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md)。
