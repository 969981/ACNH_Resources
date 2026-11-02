---
title: 解包与复现步骤
tags: [tools, howto]
---
# Windows/WSL2 工具使用

使用 Python 3.10+、当前 `3.0.3_Unpack` 分支，原始 `e10617820db06889e1638499478da0de_NCA/` 必须存在。脚本全部放在大写的 `Scripts/` 中，不需要原分支小写的 `scripts/`。

```powershell
git switch 3.0.3_Unpack
py -3 -m pip install -r Scripts/requirements.txt
py -3 -m unittest discover -s Scripts -p "test_acnh_unpack.py" -v

# 只建立对应源目录结构，不生成伪装的解包文件
py -3 Scripts/mirror_unpack.py scaffold

# 对指定真实文件执行解析并写入 UnPack/1
py -3 Scripts/mirror_unpack.py basic --file Bcsv/AITag.bcsv
py -3 Scripts/mirror_unpack.py basic --file AnimationInfo/NpcNmlAnt.byml

# 批量处理表格或 BYML；可断点执行，完成后需重新校验
py -3 Scripts/mirror_unpack.py basic --kind tables
py -3 Scripts/mirror_unpack.py basic --kind byml

# 校验产物映射及输入输出路径
py -3 Scripts/mirror_unpack.py audit
```

媒体 L3 需要安装经实际验证的 `wmdlt`、`wimgt`、`vgmstream-cli`，还须满足 `Scripts/requirements-media.txt`。针对某个模型运行：

```bash
python Scripts/mirror_unpack.py media --file Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs
```

该封装工具调用已有 `Scripts/unpack_acnh.py`、`Scripts/acnh303_media_l3.py`，先在独立暂存目录生成结果，**只把实际输出**按源路径映射到 `UnPack/1`，避免原生旧程序默认附加 `<NCA>/1/` 前缀。内部单次媒体输出为 `.converted/leaf_...`，封装器转换为以源名命名的 GLB/PNG/WAV；多输出会加上叶子/图像编号，防止重名覆盖。

仅处理已提取出的可读取文件。不要对未经确认的格式瞎改后缀或生成空白结果。大规模媒体建议分片运行、保留 SHA-256 和 Release 归档，不要一次把数 GB 的 WAV 提交 GitHub。

参考 [[02-Format-Catalog]]、[[04-Output-Rules]]。