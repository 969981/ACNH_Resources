# ACNH 3.0.3 解包工具（Scripts/）

此目录从旧版 `3.0.3/scripts/` 无损复用 52 个已有文件，并增加 `mirror_unpack.py`，**注意目录名首字母大写**。

## 最常用入口

```bash
python -m pip install -r Scripts/requirements.txt
python -m unittest discover -s Scripts -p test_acnh_unpack.py -v
python Scripts/mirror_unpack.py scaffold
python Scripts/mirror_unpack.py basic --file Bcsv/AITag.bcsv
python Scripts/mirror_unpack.py basic --kind byml
python Scripts/mirror_unpack.py media --file Model/AccessoryGlassBirthday0.Nin_NX_NVN.zs
python Scripts/mirror_unpack.py audit
```

媒体 L3 需要 `Scripts/requirements-media.txt` 中的库，以及真实的 `wmdlt`、`wimgt`、`vgmstream-cli`。如果转换器不可用，请勿伪造 GLB/PNG/WAV。

- `unpack_acnh.py`：原 L0–L2 BYML、BCSV、SARC、MSBT 和压缩容器解析。
- `acnh303_media_l3.py`：真实 BFRES、BNTX、BWAV → GLB、PNG、WAV（受外部工具与格式支持限制）。
- `acnh303_asset_batch.py`、`acnh303_media_batch.py` 等：原版分片/审计研究工具。它们仍按旧版 `Unpack/<NCA>/1` 等路径构造输出；请**优先通过 mirror_unpack.py 统一映射**。
- `inventory_acnh303.py`：原始资源索引。
- `test_*.py`：原有回归测试。

`mirror_unpack.py basic` 使用暂存路径运行旧解析器，再映射到 `UnPack/1/`；`media` 只复制有 SHA-256 证据的真实转换产物。详见 [Obsidian 操作手册](../docs/03-Unpack-Workflow.md)、[命名规范](../docs/04-Output-Rules.md)。

请勿以目录已镜像代替源文件已解码；旧分支已有约 10 万原始文件，完全语义解析仍需分阶段推进。
