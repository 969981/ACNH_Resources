# ACNH 3.0.3 第七轮：FCPX 字体记录指针、mat1 原始渲染参数与 BFLAN 原生验证门槛

> 2026-10-14。全部数据基于游戏 3.0.3 原始资源，原始来源和 JSON/WAV 输出均有 SHA-256 审计。明确区分：原生字节结构已证实、运行时语义未证实、数学预览非任天堂原生播放。

## 1. FCPX 真实 0x28 字节字体记录（重点突破）

在第六轮识别的两个**真正不同**的原始 FCPX 里：

| 内容 | SystemB_00 | Normal_00 |
| --- | ---: | ---: |
| FCPX 二进制字节 | 704 | 892 |
| 原归档成员数 | 11 | 1 |
| FCPX 版本 | 0x09030000 | 0x09030000 |
| 字体记录数 | 9 | 11 |
| 字体记录表起点（文件绝对偏移） | 0x40 | 0x40 |
| 单个字体记录步长 | **0x28（40 字节）** | **0x28（40 字节）** |
| 记录中的字体名偏移字段 | record + **0x04** | record + **0x04** |
| 字体名实际文件偏移 | **读取字段值 + 0x18** | **读取字段值 + 0x18** |
| 字体名链接成功 | **9/9** | **11/11** |

该结论来自真实的原始 FCPX 全字节对照，而非猜测字段语义或从文件里搜索文本再推测指针。每条 40 字节记录的 10 个小端 u32 现全部保存，仍未知的数值不强行赋予语言、优先级或替换条件等意义。

- `scripts/acnh303_fcpx_font.py` 已改成 **逐条 record 指针解码**，拒绝损坏的文件长度、指针越界、与原始字符串扫描不一致，以及遗漏／重复的名字。
- `scripts/test_acnh303_fcpx_font.py` 测试正常记录、无效偏移、数量不匹配、未引用字符串等情况。
- 所有 41 个 Layout 原始源再次运行，全量输出 12 份 FCPX 字体引用 JSON，0 个解析失败。真实 [Actions #38491264367](https://github.com/969981/ACNH_Resources/actions/runs/38491264367)。
- [20 条原生 FCPX 字体记录矩阵](../derived/3.0.3/ui2d_native_v7/font_reference_record_matrix.csv)：不同文件索引、记录偏移、指针绝对位置、名称和 10 个未知原始字段。
- [FCPX 原始完整字节证据](../derived/3.0.3/ui2d_native_v7/raw_evidence.json)：两份不同内容、41 源全部 SHA 证据和 Native UI2D 关键区块样本。

**边界：** 字体记录的**物理顺序不等于经官方证明的 fallback 顺序**。部分名称明确包含语言标识（`zh-cn`、`zh-tw`、`ko`），但尚缺运行时选择逻辑来证明某个地区、语言或字符实际调用哪个字体。font-family、替换阈值、字形文件映射和渲染均不能只靠二进制名字判断。

## 2. BFLYT `mat1` 原始材料参数已恢复，而非完整 Shader

6 个真实 `mat1` 区块包含 **22 条材料记录**，每条都是 **44 字节**：28 字节材料名 + 4 个小端 u32。

| 材料记录内偏移 | 22 个真实样本验证 |
| --- | --- |
| 0x00～0x1B | 字符串材料名 |
| 0x1C | 第 1 个原始 u32（当前样本为 0） |
| 0x20 | 第 2 个原始 u32：**22/22 都是 `0x08040200`** |
| 0x24 | 第 3 个原始 u32（当前样本为 0） |
| 0x28 | 第 4 个原始 u32（颜色/色调候选） |

末尾字段的真实取值分布如下（注意：原始小端整数，不是经 UI Shader 验证过的屏幕像素）：

| 候选色调原始 u32 | 记录数 |
| --- | ---: |
| `0xFFFFFFFF` | 9 |
| `0xFF7AC0C5` | 7 |
| `0xFFE6FFFA` | 4 |
| `0xFF93CBCF` | 2 |

改进 `scripts/acnh303_ui2d_semantics.py`：导出全部 u32 十六进制数值和原始末尾四字节颜色候选，不生成未经证实的 shader/blend 规则；22 条全部有原来源和材料记录 SHA-256。

[22 条材料参数 CSV](../derived/3.0.3/ui2d_native_v7/material_native_words.csv)、[字段统计](../derived/3.0.3/ui2d_native_v7/record_matrix_summary.json)。

这批样本主要是没有独立 BNTX 的 Layout，不能由此推断其它带纹理材质的 v9 FLYT 均使用同样结构。真实材质绘制还需要原生渲染器的状态与纹理绑定链证据。

## 3. BFLAN 求值：现有数学曲线与运行时一致性未证实，增加证据门槛

当前 41 Layout 中有 21 个 BFLAN，已解析 50 个曲线轨道和 134 个原始关键帧，离线公式产生 956 个预览值。

新增 `scripts/acnh303_bflan_runtime_compare.py`，可将运行时按相同动画、目标、tag、index、frame 采集的浮点数和离线模型逐帧比较；支持严格的目标身份匹配、容差、未知目标、重复采样、非有限数拒绝与偏差清单。

提供真实采样后使用：

```bash
python scripts/acnh303_bflan_runtime_compare.py \
  --native-capture real_acnh303_ui2d_trace.csv \
  --capture-provenance "ACNH 3.0.3 main build-id=... / emulator or Switch / runtime function=... / capture method=..."
```

捕获文件列：

```csv
source,animation_member,target,info_tag,raw_target_index,curve,frame,value
```

**关键事实：截至此次执行，没有完成原生运行时帧值采样，也没有证据证明当前 Hermite 公式与 ACNH 游戏 Native 求值器完全一致。**

因此自动生成的 [运行时一致性报告](../derived/3.0.3/ui2d_runtime_validation_v7/report.json) 明确为：

- `runtime_parity: "NOT_TESTED"`
- `capture_exists: false`
- `expected_math_samples: 956`

不能把通过普通单元测试或 BFLAN 名称交叉引用等同于 `runtime_parity=true`。新增回归测试验证提供实测时的匹配、偏差和未知身份会分别报告。[严格验证工作流](https://github.com/969981/ACNH_Resources/actions/runs/38491479968)。

下一阶段要做到原生一致性，必须先定位实际 3.0.3 游戏 ELF 中 `nn::ui2d` 的 FLAN 曲线求值函数，或通过运行时调试获得应用曲线前后的目标属性，核对同一对象、同一动画和同一帧。**未见可靠的可用 ACNH 3.0.3 ELF 运行时证据之前，绝不声称这个闭环完成。**

## 4. 第七轮音频：再 120 个 BWAV 实际转换为 WAV

稳定哈希分片 **8 × 15** 个，全量 SHA 验证通过，追加新 120 个原始 BWAV，和第 1–6 轮原始文件无重复。

[真实 GitHub Actions #38490843322](https://github.com/969981/ACNH_Resources/actions/runs/38490843322)、[累计审计](../derived/3.0.3/media_bwav360_cumulative/coverage.json)。

| 实际 L3 统计 | 第六轮 | 第七轮 |
| --- | ---: | ---: |
| 累计已测试源文件 | 792 | **912** |
| GLB | 214 | 214 |
| PNG | 1,354 | 1,354 |
| WAV | 332 | **452** |
| 累计有效媒体输出 | 1,900 | **2,020** |
| 尚未测试 BWAV | 814 | **694** |

累计有效媒体原始输出字节：**3,134,300,704**（约 3.13 GB），不是第七轮 WAV 下载包压缩大小。8 个真正包含新 WAV 的长期压缩分卷与 SHA256SUMS 已发布到 [ACNH BWAV 第七轮 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-bwav-360-total-20261014)，共有 13 个附件，压缩总计约 461 MB。这个 Release **仅包含本轮新 120 WAV**，“360 Total”表示第 5–7 轮追加 360 个 WAV（另有以前已测 92 个）。

## 5. 尚需真正突破的研究问题

1. **字体选择/替换**：沿 FCPX 每条 40 字节记录的剩余字段，建立不同系统语言、字符集的运行时选择观测；不可把记录顺序直接当优先级。
2. **材质与真实渲染**：从 `mat1` 记录尾部 4 个原始字段反查 Native UI2D Material/Shader setter，建立从属性到屏幕像素的对照，尤其是混合、纹理采样和字体颜色。
3. **动画求值一致性**：拿到同一 ACNH 3.0.3 build 的实际动画对象和采样 trace 后，运行严格 comparator；只有这样才能从数学预览推进到 native 证实。
4. **BWAV 剩余 694 个**：可继续复制第七轮 8 分片并增加 skip-count；必须保留源 SHA、不重复与逐文件有效 WAV 验证。
5. 103,400 个原始资源的 L0–L2 全源结构记录与 **912 个已做媒体格式 L3 实测**属于不同阶段，不可将其混为全量 GLB/PNG/WAV/动画语义转换成功。

相关：[FCPX Issue #25](https://github.com/969981/ACNH_Resources/issues/25) · [EPD BFLYT](https://epd.zeldamods.org/wiki/Bflyt) · [EPD BFLAN](https://epd.zeldamods.org/wiki/Bflan) · [第六轮](UNPACK_FCPX_UI2D_BWAV_ROUND6.md)。
