---
title: ACNH 3.0.3 分片增量转换与 SHA-256 审计
tags: [unpack, batch, provenance, github-actions]
status: active
---
# 分片解码和自动发布

> [!important] 原始文件完整性
> 所有输入来自本分支 `e10617820db06889e1638499478da0de_NCA/1/`，仅使用 Git Tree 列表选取有限源文件，**绝不修改原始文件**。目前的已迁移输出不代表全部资源已解包。失败文件仍记录失败，但不能算完成。

## 分层与格式
- `Bcsv/*.bcsv`：原解码器生成同名 CSV + JSON（原始列哈希/类型不被猜测替换）。
- `AnimationInfo/*.byml`、`Stage/*.byml`、`Param/**/*.byml`：原解码器生成 JSON。
- `Model/*.zs`：从真实载荷获取 BFRES（几何）或 BNTX（纯纹理）后，尝试 GLB / PNG。
- `Layout/*.zs`：从真实载荷取得可核验的 BNTX 纹理并导出 PNG；布局可编辑语义的更深研究不等同 PNG。
- `Sound/**/*.bwav`：固定工具版本的 vgmstream 将真实 BWAV 转 PCM WAV。

## 一键开始
[GitHub Actions / Incremental verified UnPack](https://github.com/969981/ACNH_Resources/actions/workflows/acnh303-incremental-unpack.yml) 可以手动 Run workflow，指定 category、shard、shards、skip_count、max_count。

推送本工作流本身也会触发 **首次 Sound、shard=0/8、skip=0、max=8 的真实试运行**。后续对其它分片使用 workflow_dispatch；不会因提交解包产物再次触发，避免死循环。

### 本地选择与执行（仓库完整克隆）
```powershell
python -m pip install -r Scripts/requirements-media.txt
python -m unittest discover -s Scripts -p "test_batch_pipeline.py" -v
python Scripts/batch_pipeline.py select --category Sound --shard 0 --shards 8 --skip-count 0 --max-count 8
python Scripts/batch_pipeline.py run --vgmstream "C:\tools\vgmstream-cli.exe"
python Scripts/batch_pipeline.py verify
```
如果是 blobless sparse checkout，先执行 `git sparse-checkout set --no-cone --stdin < batch_sparse_patterns.txt` 再运行解码。Sound 需要可执行的 vgmstream，Model/Layout 还需要 wmdlt/wimgt。命令行示例仅在转换器已经安装时可用。

### 后续连续批次
把 `skip_count` 改为 8、16、24……即可继续当前 shard；每个 shard 由 SHA-256(path bytes) 前 8 字节取模，路径排序稳定。同一个原文件若改名将被视为新路径，需要独立审计。每次最多 24 个源文件，防止一次塞入巨量媒体资源。

### 命名
源 `Sound/Resource/X.bwav` → `UnPack/1/Sound/Resource/X.wav`。源 `Model/X.Nin_NX_NVN.zs` → `UnPack/1/Model/X.Nin_NX_NVN.glb`，多张纹理加 `.imgNNN.png`。基本解析器输出同名 `.csv`/`.json`。

## 证据结构
每次执行记录在：
`UnPack/_meta/batches/{category}/s{shard}-of-{shards}/actions-{run_id}-{attempt}.json`。

记录包括：
- 来源 Git blob SHA（定位对象身份，并非 SHA-256）。
- 源文件路径、byte 数、**源 SHA-256**。
- 每个已验证输出路径、字节数、**产物 SHA-256**。
- 解码器退出状态、结果 `converted`/`partial`/`no_output`/`failed`。
- 选择时的 shard、跳过数量、批次容量和实际成员清单。

`batch_pipeline.py verify` 重新计算源/产物哈希。多文件/多源碰撞则拒绝覆盖已有不同内容。没有证据的转换不能报成功。GitHub Actions 先保存可下载报告，再把 `UnPack/1/{category}` 和 `UnPack/_meta` 提交回本分支。

## 已知限制
- 对超过 90 MiB 的单个输出拒绝入 Git（GitHub 100 MiB 硬限制）；大规模 L3 媒体另走 Release/分卷。
- 目前只支持已知的 BCSV、BYML、BWAV、BFRES 和 BNTX 真实解析；BDLI、FMAA、AAL、复杂 EventFlow、Shader 仍需研究，不得错误标记为已全解。
- 初次 Push 触发只代表 **安排了 GitHub Actions 任务**；以 Actions 的成功状态、报告和目标分支上的实际提交为完成依据。
- GitHub 的工作流 token 必须具有 repository contents: write，仓库如果配置更严格的规则需要额外授权。

相关 [[03-Unpack-Workflow]]、[[04-Output-Rules]]、[[05-Progress]]、[[06-Evidence]]。
