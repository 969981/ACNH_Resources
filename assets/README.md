# ACNH 3.0.3 assets：命名清单、真实 PNG 与纹理来源证据

> [!warning] 文件名不等于图片
> Library 的 acnh3.0.3(2).txt 是 UTF-16 的 Windows 文件目录清单，不包含 PNG 像素。不能仅凭 iName、ReBody 或 ReFabric 文件名宣称还原了原版物品缩略图。

## 文件目录

| 路径 | 作用 |
|---|---|
| catalog/expected-png-names.txt | 从 TXT 解析的 27,531 个唯一 PNG 文件名（原清单 27,601 行） |
| catalog/babybed-source-mapping.csv | Babybed 56 种组合到原始 BFRES 模型文件名及 Git Blob SHA 的映射 |
| catalog/babybed-56-combinations.csv | 原始资源探测运行时输出的 56 组合索引 |
| evidence/babybed_bntx_native.json | 从原始 16 个 ReBody/ReFabric 与基础模型中尝试解析的 BNTX/BRTI 证据 |
| evidence/babybed-png-coverage.json | 已有真 PNG / 缺失图片覆盖率 |
| images/items/*.png | 仅包含通过真实图片输入与字节完整性验证的 PNG |

ACNHPokerCore 的 variation.cs 查找的是 `{iName}_Remake_{main}_{sub}.png`，普通图片是 `{iName}.png`。它是前端图像文件查找规则，不是 BNTX 纹理的真实命名或原版运行时渲染证据。参考 [variation.cs](https://github.com/969981/ACNHPokerCore/blob/main/ACNHPokerCore/Custom/variation.cs)。

## 将实际存在的 PNG 导入 assets

需要 Python 3.10+，无须外部 PNG 库。输入必须是真实图片目录，不是 TXT：

```bash
python Scripts/acnh303_assets.py catalog --listing "/path/acnh3.0.3(2).txt" --output /tmp/catalog.txt
python Scripts/acnh303_assets.py import --images "/path/to/real/PNG"
python Scripts/acnh303_assets.py --prefix FtrBabybed_ import --images "/path/to/real/PNG"
python Scripts/acnh303_assets.py --prefix FtrBabybed_ --report assets/evidence/babybed-png-coverage.json audit
```

导入时检查 PNG 签名、IHDR、各 chunk CRC、IDAT、IEND、图片尺寸和 SHA-256。冲突的同名文件或现有目标不会被悄悄覆盖。找不到像素就不生成占位 PNG。manifest 的 native_game_icon_verified 始终为 false，直到能以原版运行时证据升级证明。

## Babybed 原始纹理探测

```bash
python -m pip install zstandard
python Scripts/probe_acnh_babybed_textures.py --root .
```

输入为 e10617820db06889e1638499478da0de_NCA/1/Model 下的 FtrBabybed.Nin_NX_NVN.zs、8 个 FtrBabybedReBody[0..7].Nin_NX_NVN.zs、7 个 FtrBabybedReFabric[0..6].Nin_NX_NVN.zs，共 16 个文件。探测器遍历 zstd/Yaz0/SARC 叶节点，尝试读取真正的 BNTX → BRTI 原始名字与尺寸，并记录原始 SHA-256。

## 证据等级（不准跨级推定）

- L0：命名规则与用户清单一致。
- L1：原版 .zs 字节及来源 SHA/Blob 得到校验。
- L2：真实 BNTX/BRTI 纹理、名称、格式被解析。
- L3：BFRES FMAT 的纹理/材质绑定、ReBody 与 ReFabric 覆盖逻辑有可重复证据。
- L4：完整物品图标来自 Nintendo 资源或游戏运行时渲染，与预期 PNG 像素比对通过。

目前 56 个组合对应的 16 份原始资源是 L0/L1 映射；BNTX 探测试图提高 L2，仍未证明 L3/L4。即使用户提供有效 PNG，也只证明有像素，不证明来自原版。

CI 在 .github/workflows/acnh303-assets.yml 中执行脚本单测、Babybed 原始源探测及覆盖率检查；不会从第三方图片网站无来源验证批量抓图或生成伪图。

## 实际运行结果（2026-11-02）

目前 16 份原始 BFRES/BNTX 资源全部完成 BRTI 解析；**37 张真实模型纹理 PNG** 已从这些资源以 wimgt 解码并经 Pillow 完整像素校验，写入 [textures/babybed/](textures/babybed/)（6 张基础纹理、24 张 ReBody 纹理、7 张 ReFabric 纹理）。

基础模型经实际 FMDL/FMAt 解析得到 **mBody、mReBody、mReFabric 三种材质**，其他 15 份变体资源只有纹理、不含 FMDL 模型；详见 [Babybed 来源与材质研究](../docs/ACNH303_BABYBED_TEXTURE_FMAT_ICON_PROVENANCE.md) 和 [FMAT 证据](evidence/babybed-fmat-candidates.json)。

**原版运行时渲染来源核验仍为 0/56**，但另已从经过联网确认的社区图片 CDN 导入 56/56 张完整 Babybed 图标到 [images/items/](images/items/)。这些真实 PNG 与上述 37 张原生 BNTX 材质纹理是两种不同来源；图标的原版像素来源尚未独立认证。

```bash
python Scripts/probe_acnh_babybed_fmat.py --root .
python Scripts/acnh303_babybed_texture_export.py --root . --wimgt /path/to/wimgt
```

## 完整图片导入：用户清单 27,531 个名称

CDN 来源取自公开的 ACNH 社区素材服务，例如 acnhcdn.com/latest/FtrIcon/ 和 img.iswitchplus.com/acnh/。它们可提供与 PokerCore 命名规则一致的真实 PNG，但**不等于原版内部素材或原版渲染链已经恢复**。所有外部图片都要求 PNG CRC、Pillow 完整像素解码、SHA-256 校验，失败或 404 不伪造。

- 脚本：[Scripts/acnh303_icon_cdn_import.py](../Scripts/acnh303_icon_cdn_import.py)
- GitHub Actions：[acnh303-icon-cdn-import.yml](../.github/workflows/acnh303-icon-cdn-import.yml)；从清单断点推进，每 3 小时最多检查 750 个名称。运行间隔、是否触发取决于 GitHub Actions。
- 第一批 56 张 Babybed 图标全部真实导入（128×128，56 个不同 SHA-256）：[evidence/icon-cdn/prefix-FtrBabybed_-000000-000056.json](evidence/icon-cdn/prefix-FtrBabybed_-000000-000056.json)
- 图片实际存放于：[images/items/](images/items/)；与原版材质 [textures/babybed/](textures/babybed/) 分开。
- 任务每批生成 `assets/evidence/icon-cdn/batch-<起止序号>.json`，包括源 URL、HTTP 获取结果、图片 SHA、已存在/缺失状态；`next-offset.json` 保存完整清单的续跑位置。
- Library 另外有 `villager.zip` 中 1,021 张 PNG，已独立生成可解压到仓库根目录的标准化导入包。这个私人 Library 压缩包并非 GitHub Actions 可访问的外部 URL，**不要因为完成本地打包就宣称已全部提交仓库**。

按需手动运行指定类别：

```bash
python -m pip install -r Scripts/requirements-media.txt
python Scripts/acnh303_icon_cdn_import.py --prefix FtrBabybed_ --max-count 56
python Scripts/acnh303_icon_cdn_import.py --offset auto --max-count 750 --delay 0.30
```

工作流不会把外部 CDN 下载计为“由原版 BFRES 渲染生成”；外部 CDN 与原版数据可能存在版本、图像裁剪或背景差异，需要后续独立像素比对。
