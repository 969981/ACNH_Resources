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

## R41–R47 历史研究迁入

2026-11-02 本分支将 `feat/acnh303-round47-cedar-fmat-aal-io-contract` 分支中此处原来缺失的 218 个脚本，保留其原 Git Blob 内容迁入大写 `Scripts/`；未覆盖已有的 4 个不同版本脚本（README、acnh303_media_batch.py、acnh303_media_l3.py、select_acnh303_shard.py），保持新分支批次流程优先。

- `acnh303_round44_fmaa_*.py` / `acnh303_round45_fmaa_curves.py` / `acnh303_round46_texsrt_values.py` / `acnh303_round47_cedar_fmat.py`：原版 FMAA、Cedar FMDL/FMAt、tex_srt0 证据工具。
- `acnh303_round46_aal_vtable_gdb.py` / `acnh303_round47_aal_target_snapshot_gdb.py` / `acnh303_round47_aal_target_audit.py`：必须用户真实 AAL 游戏会话才会产生动态采样，不要捏造 FileOpen/Read/Close。
- `acnh303_round4*.py` 等旧批次脚本仍可能硬编码原分支小写 `scripts/`、`Unpack/`、`derived/3.0.3/`。复制 Git Blob 不等于对新目录或新流水线已经过 CI 适配。使用前检查实际路径、来源 SHA 和工作流参数；新数据批次请使用 `batch_pipeline.py` / `mirror_unpack.py`。

详见 [Obsidian 08 新阶段](../docs/08-Next-Wave-FMAA-AAL-BARS.md) 与 [R47 原始研究报告](../docs/ACNH303_ROUND47_CEDAR_FMAT_AAL_TARGET_IO_EVIDENCE.md)。
