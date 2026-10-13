# ACNH 3.0.3 — BFRES → GLB、BNTX → PNG、BWAV → WAV

2026-10-13 已在 ACNH 3.0.3 的真实 RomFS 样本上完成三种格式的解码和标准格式校验。注意：此阶段是 L3 媒体转码的实际初步交付，绝不宣称已经将全部 103,400 个 RomFS 文件转换。

## 一、实际成功并写入 Unpack 的资源

| 来源资源 | 内部格式 | 常规输出 | 验证 |
| --- | --- | --- | --- |
| Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs | Zstd → SARC → BFRES | GLB，98,592 B | 2 mesh / 2 primitive；GLB 2.0、accessors、POSITION 结构校验 |
| Layout/FooterBtn.Nin_NX_NVN.zs | Zstd → SARC → nested SARC → timg/__Combined.bntx | 2 PNG | 36×36 RGBA + 1×1；PNG CRC + Pillow.Image.load 解码真实像素 |
| Sound/Resource/Stream/AmbPlace_Cave.bwav | Nintendo DSP 4-bit ADPCM | PCM WAV，12,011,564 B | 48 kHz / 双声道 / 3,002,880 采样帧 / 62.56 秒 |

三个源文件遵循原始目录镜像，存储在 Unpack/<NCA>/1/<原始目录>/<源文件名>.converted 下。每个目录都有 _conversion_manifest.json，逐一记录原始 SHA-256、内部归档成员、真实文件输出 SHA-256、长度及解码工具返回值。

**关键验收规则**：成功解码一个 BNTX 贴图不代表同一 Layout 中的 BFLYT/BFLAN 也完成语义转换，整个源包仍可保留 partial。对多纹理 BNTX，正确识别 img000.png、img001.png 等全部文件，并逐张进行实际像素解码验证。

- [三格式初次成功测试](https://github.com/969981/ACNH_Resources/actions/runs/38410299328)
- [BNTX PNG 真实转换验证](https://github.com/969981/ACNH_Resources/actions/runs/38411507187)
- [正式 Unpack 原路径数据提交](https://github.com/969981/ACNH_Resources/actions/runs/38412299574)

## 二、36 源文件的六分片批量校准

[GitHub Actions 38412870668](https://github.com/969981/ACNH_Resources/actions/runs/38412870668) 的实测结果：

| 指标 | 数量 |
| --- | ---: |
| 分片 | 6 |
| 真实源文件 | 36 |
| 具有有效媒体产物的源文件 | 34 |
| 未找到目标 BNTX 的 Layout | 2 |
| 验证通过的 GLB | 12 |
| 验证通过的 PNG | 98 |
| 验证通过的 WAV | 12 |
| **验证通过的媒体文件总数** | **122** |
| 验证通过的媒体输出字节 | **179,376,256** |

永久分卷下载：[ACNH 3.0.3 L3 Media Calibration Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-media-l3-calibration-20261013)。六个包包含原始资源对应的产物及逐文件报告，并附 SHA256SUMS.txt。此为 **已验证的校准样本分卷**，不是所有资源的完整下载包。

持久的统计文件在 derived/3.0.3/media_calibration_summary/latest.json。原始 103,400 源文件的 L0–L2 总表不因这 36 个小批次而被篡改。

## 三、可复现调用

需要 Python 3.11+、scripts/requirements-media.txt，并有下列 native converter：
- [nintoolbox](https://github.com/quatric/nintoolbox)：验证的 nightly-20261013 x86_64 Linux 工具，获取时校验 upstream SHA256SUMS.txt。
- [vgmstream](https://github.com/vgmstream/vgmstream)：已验证 r2117 中的 vgmstream-cli。

示例（Linux/WSL2，需自行替换 native 工具路径）：

    python -m pip install -r scripts/requirements-media.txt

    python scripts/acnh303_media_l3.py --root . \
      --source Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs \
      --tool-wmdlt /path/to/wmdlt --out Unpack \
      --require bfres --fail-on-no-conversion

    python scripts/acnh303_media_l3.py --root . \
      --source Layout/FooterBtn.Nin_NX_NVN.zs \
      --tool-wimgt /path/to/wimgt --out Unpack \
      --require bntx --fail-on-no-conversion

    python scripts/acnh303_media_l3.py --root . \
      --source Sound/Resource/Stream/AmbPlace_Cave.bwav \
      --tool-vgmstream /path/to/vgmstream-cli --out Unpack \
      --require bwav --fail-on-no-conversion

### 批量路径

scripts/select_acnh303_shard.py 依据 Git tree 的路径 SHA 分组、按 --suffix 选择文件，避免使用 git ls-tree -l 导致稀疏克隆大量下载二进制文件。scripts/acnh303_media_batch.py 只对选中源执行 native tool 与输出验证，记录所有 source/leaf/output 哈希、成功数及错误原因；遇到原包未含目标媒体类型时，明确标识 no_target_leaf。

相关工作流：
- .github/workflows/acnh303-media-l3-samples.yml — BFRES/BWAV 实际样本。
- .github/workflows/acnh303-media-l3-prebuilt.yml — BNTX 多纹理解析与 PNG 像素测试。
- .github/workflows/acnh303-media-l3-publish-samples.yml — 三格式样本入 Unpack。
- .github/workflows/acnh303-media-l3-calibration.yml — 六分片真实批量兼容性测试。
- .github/workflows/acnh303-media-l3-release.yml — 将有哈希与 manifest 的验证文件分卷发布为长期 Release。

## 四、后续仍需完成的实质性工作

- **Model**：约 60,166 个原始文件，继续验证不同 BFRES 模型、骨骼、材质、动画与可能的纹理引用；GLB 需要进一步经 Khronos glTF Validator 和实际渲染检查。
- **Layout/BNTX**：约 960 个 Layout 原文件，不是每个都内含 BNTX；支持 ASTC/BCn 贴图、多 mip、数组层和材质关系的分类矩阵。
- **Sound/BWAV**：全部 1,146 个 BWAV 的分片转码与声音参数验证；BARS 索引文件不等同于音频波形。
- **交付**：正式媒体覆盖率报告 + SHA256SUMS，按 Release 分卷发布大型 GLB/PNG/WAV，而不是重复提交数 GB 二进制进 Git。不要将初步校准样本的 122 个媒体产物误写成全资源解码成功。

跟踪：总看板 [#17](https://github.com/969981/ACNH_Resources/issues/17) · BFRES [#9](https://github.com/969981/ACNH_Resources/issues/9) · BNTX [#10](https://github.com/969981/ACNH_Resources/issues/10) · BWAV [#13](https://github.com/969981/ACNH_Resources/issues/13)。
