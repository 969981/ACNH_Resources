# ACNH 3.0.3：26 个 BottomsTex BFRES ERROR #36 根因及正式修复

## 1. 真实文件证据，而不是猜测

2026-10-13 按 [Issue #21](https://github.com/969981/ACNH_Resources/issues/21) 从已保存的原始 SHA-256 清单重新拉取 **26 个此前失败的 BottomsTex 源文件**，以及 **2 个此前成功生成 GLB 的 AccessoryGlassBirthday 对照样本**。逐一 Zstd 解压 → SARC 提取 → BFRES v9 结构检查：

| 关键位置或结构 | 26 个 BottomsTex | 2 个成功 BFRES 模型 |
| --- | --- | --- |
| FRES magic、Switch BOM、v9 | 均有效 | 均有效 |
| FRES + 0x28，首 FMDL 指针 | **全部为 0** | 全部指向 0xF0 FMDL |
| FMDL 模型结构 | **26/26 没有** | 2/2 存在 |
| FSHP 形状结构 | **26/26 没有** | 2/2 存在 |
| FVTX 顶点结构 | **26/26 没有** | 2/2 存在 |
| FMAT 材质结构 | **26/26 没有** | 2/2 存在 |
| 内部 BNTX 标记 | 26/26 存在 | 2/2 存在 |
| BNTX 在 FRES 中的起点 | **全部 0x1000** | 有 BNTX，但同时有实际网格 |

[26 个 FRES 实体二进制结构报告](../derived/3.0.3/bottomstex_forensics/fres_preflight.json)、[真实 GitHub Actions 对照](https://github.com/969981/ACNH_Resources/actions/runs/38423054904)。

wmdlt 的 [ParseBFRESSwitch 实现](https://github.com/quatric/nintoolbox/blob/master/project/src/lib-bfres.c) 在开始读取实际顶点、材质之前，就检查 FRES + 0x28 的 FMDL 指针是否大于零、位于文件内且指向 FMDL。26 个输入全部在这一前置条件失败；因此 native ERROR #36 [INVALID DATA] 并不能用于认定资源数据损坏或需要强行重建模型。

**结论**：此处失败的 26 个 BottomsTex 是 **meshless FRES（无模型几何体、含独立内嵌 BNTX 纹理）**，不属于含网格、可以合理导出 GLB 的 BFRES。不是 3D 网格解码算法坏了，也不应该制造虚构的 GLB。

## 2. 证明内嵌纹理真正可用

在三个真实失败样本中，FRES + 0x1000 的 BNTX 具有：

- 正确的 BNTX magic、Switch little-endian BOM 0xFEFF、NX 平台头。
- 独立合法的内部文件长度和纹理数。
- 纹理容器按自己的内部偏移寻址，截取完整声明长度即可提供给 wimgt。
- 真实解码通过：3 个样本各 4 张 PNG；画面像素有效，分辨率包含 384×96、320×160、256×128，RGB／RGBA。

[3 个真实纹理解码校验](https://github.com/969981/ACNH_Resources/actions/runs/38423211239)。

## 3. 26 个源全部修复为真实 PNG

新增严格的分流而非重命名错误状态：

- **有 FMDL/FSHP/FVTX 的正常 FRES**：保持 BFRES → GLB 原路径。
- **模型指针为零、缺少这三类结构、且内含 BNTX 的 Switch FRES**：必须再次检查 BNTX 内部 BOM、NX 平台头、纹理数、长度边界、16 字节对齐，然后独立取出完整 BNTX，调用 wimgt → PNG。
- **不满足结构条件的 FRES**：原样保留未转换和错误，绝不能无条件对字节流搜索 BNTX 并认定成功。
- 归档及输出源 SHA-256、内嵌成员 SHA-256、每个 PNG SHA-256、像素解码结果于同源 `_conversion_manifest.json`。

[全 26 原始源实测](https://github.com/969981/ACNH_Resources/actions/runs/38423817541)：**26/26 有验证通过的媒体输出，实际 104 张 PNG，2,614,645 字节**；没有生成虚假 GLB。四张纹理对应每个原始 FRES（部分可能不同尺寸／通道）。

[全部 104 张 PNG 与 manifest 直接保存的原路径目录](https://github.com/969981/ACNH_Resources/tree/3.0.3/Unpack/e10617820db06889e1638499478da0de_NCA/1/Model)；[含 26 源 PNG 的长期 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bottomstex-texture-only-26-20261013)。

## 4. 累计覆盖率按实际媒体类型修正

[经源 SHA-256 对齐后的新审计](../derived/3.0.3/media_bottomstex_corrected/coverage.json)，**保留原先失败报告作历史审计，不篡改数据**：

| 来源类别 | 已测源 | 已有实际有效媒体的源 | GLB | PNG | WAV |
| --- | ---: | ---: | ---: | ---: | ---: |
| Model | 108 | **108** | 82 | 104 | — |
| Layout | 92 | 64 | — | 641 | — |
| BWAV | 52 | 52 | — | — | 52 |
| **总计** | **252** | **224** | **82** | **745** | **52** |

**实际 879 个有效媒体文件，共 773,026,137 字节**，不是「新增 26 个 GLB」。
因此 Model 的 108/108 是**已有真实 GLB 或 PNG 媒体输出**，并不表示 108/108 都有可渲染三角形。

仍有 **28 个已测 Layout** 不包含目标 BNTX；而超过六万份媒体相关候选原文件绝大部分还没有 L3 实测，不能把此轮转换推广成全量完成。

## 5. 交付与文件位置

- `scripts/acnh303_fres_forensics.py` — 原生 BFRES 结构、offset、section magic 实证工具。
- `scripts/acnh303_media_l3.py` — 新增验证过的 meshless FRES → embedded BNTX → PNG。
- `scripts/acnh303_media_batch.py` — 明确记 source_media_class，并以真实输出类型识别 Model 子资源。
- `scripts/acnh303_media_audit.py` — 只允许具备 texture-only FRES 结构证据和有效 PNG 解码的 Model→PNG，拒绝把它当 GLB。
- `scripts/test_acnh303_media_l3.py` — 正常 FRES、严格 BNTX header 和损坏输入测试。
- `scripts/acnh303_bottomstex_reconcile.py` — 根据源 SHA-256 将此前 26 个 native failure 覆盖为真实 PNG 转换结果，保留历史与完整 252 源有效状态。
- `derived/3.0.3/bottomstex_png_batch/` — 26 源、104 张 PNG 的哈希与转换日志。
- `derived/3.0.3/media_bottomstex_corrected/` — 新累计审计、原始 252 源记录与单独解决清单。
- `.github/workflows/acnh303-bottomstex-publish.yml` — 把 104 张 PNG 直接提交 Unpack 并构建 SHA256SUMS 校验 Release。

### 下一阶段

针对尚未测试的 Model 子类型继续做 meshless/geometry 分类矩阵。各型 BFRES 的二进制布局可能不同；本轮严格分流仅根据已实证的 Switch v9 meshless FRES 结构，而非凭任意包含 BNTX 的文件就推断可作为贴图处理。仍需质量级验证 GLB 材质、骨骼、贴图引用及原生资源的完整复原。