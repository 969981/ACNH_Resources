# ACNH 3.0.3 — R15 standalone BWAV L3 扩容

状态：**工作流与选择器已提交；尚未取得本轮 GitHub Actions 完成结果。**

## 与 R14 的关系

- 原始 RomFS 基线 103,400 个文件不变，L0–L2 不重新宣称转换完成。
- R14 累计媒体已测试 1,336 个原始源；其中 Sound .bwav 已测 684/1,146，剩余 462。
- 本轮新增独立工作分支 `feat/acnh303-round15-bwav-unpack`，以 R14 的 `source_manifest.jsonl.gz` 为排除集，不再使用 R10 旧基线。
- 本轮计划 12 shards × 每 shard 20 个此前未测源 = 240 个。验收通过后 BWAV 将为 924/1,146，未测 222。

## 工作流

`.github/workflows/acnh303-round15-bwav.yml` 支持手动 workflow_dispatch，在当前 R15 分支运行。GitHub Actions 页面选择对应工作流和分支后运行。注意 API 提交文件并不保证自动触发推送工作流。

每 shard 执行：

1. 从 Git tree 读取 Sound/*.bwav 路径，按文件路径 SHA-256 的前八字节取模分区。
2. 通过 R14 累计原始源 manifest 排除已测资源；只对新选中的 20 个路径做 sparse checkout。
3. 使用固定 vgmstream r2117 执行真实 BWAV → PCM WAV 转换。
4. 检查原始源 SHA-256、实际存在的 WAV 文件 SHA-256、PCM frames、源数和唯一性。
5. 上传报告及 WAV Actions Artifacts，不能把上传视为永久发布。
6. 独立审计合并到 R14 累计 1,336 源，在完整 103,400 源库存下检查路径、大小、格式、输出类型、重复来源和失败状态。
7. 审计通过后才生成 `derived/3.0.3/media_round15_cumulative/`，由 CI 提交覆盖和索引；不直接提交大体积 WAV。

## 验收门槛

- 12 份来源互不重复的完整 shard 报告；
- 精确 240 个新增 Sound 原始文件，输出精确 240 个已验证 PCM WAV；
- 累计 Sound 已测 924，仍未测 222；
- 不修改 `3.0.3`；新数据有 SHA-256 与来源路径映射；
- 失败时保留失败原始报告，不能把选中数当成功数。

## 尚未完成

- **实际 GitHub Actions 转码与审计验证**：需以对应运行页面和真实工件为证，不能根据提交脚本宣称完成。
- **长期 Release**：本工作流只上传临时 Actions 工件，尚未生成持久 Release 和 Release 下载回验。
- 剩余的 222 个 BWAV 以及 59,826 Model、648 Layout、1,576 BARS 的后续 L3 专用测试。
- BARS/AMTA v5、BDLI/LBLI、EventFlow、BFLAN/Shader 等语义闭环仍单独列为研究任务。

## 排错

若选择器报告可用候选不足，确认 R14 累计清单与完整 Git tree 已 checkout，且 12 分片的路径哈希分布可以支持每片 20 个。若 native vgmstream 或 WAV 验证失败，应保持报告中的失败状态，不跳过失败文件继续声称 240/240 成功。
