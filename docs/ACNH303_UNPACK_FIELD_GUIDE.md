# ACNH 3.0.3 详细解包实操指南（Windows 11 + WSL2 / GitHub Actions）

> 本文以仓库 `969981/ACNH_Resources` 的 `3.0.3` 分支为唯一原始版本，不与《动森》其它更新版本混用。按源文件格式进行真实解码，原始 RomFS **只读**。适用于从通用表格、消息到 BFRES、BNTX、BFLYT、BFLAN、FCPX、BWAV 的分层解包。

## 一、仓库结构与交付文件的位置

```text
ACNH_Resources/
├─ e10617820db06889e1638499478da0de_NCA/
│  ├─ 0/                                      # ExeFS，不参与本流程
│  └─ 1/                                      # 原始 RomFS，绝不能覆盖
│     ├─ Bcsv/  Stage/  Message/  Layout/  Model/  Sound/ ...
├─ scripts/
│  ├─ unpack_acnh.py                          # L0–L2 通用解包
│  ├─ acnh303_media_l3.py                     # L3 原生媒体 GLB/PNG/WAV
│  ├─ acnh303_media_batch.py                  # 选定分片的媒体批量处理
│  ├─ acnh303_layout_semantic_shard.py        # 通用 Layout → FLYT/FLAN/FCPX JSON
│  ├─ acnh303_ui2d_parser.py                  # Layout 和动画
│  ├─ acnh303_fcpx_font.py                    # 字体引用记录，不是字形文件
│  ├─ select_acnh303_shard.py                 # 无需下载全镜像的哈希分片
│  └─ acnh303_media_incremental_audit.py     # 避免重复的完整源哈希审计
├─ Unpack/                                    # L0–L2
├─ Unpack_L3_Batch/                           # 自行运行单批示例输出
├─ Unpack_UI2D_Batch/                         # 同一 Layout 的结构 JSON
└─ derived/3.0.3/                             # 校验清单、分批状态、错误记录
```

**原文件**在 `<NCA>/1/` 内，**转换产物**在 `Unpack*/<NCA>/1/` 内，**审计和报告**统一在 `derived/3.0.3/`。不要为了减小仓库直接提交未压缩数 GB 的 WAV；使用 Action Artifact 临时中转和 Release 分卷发布。

## 二、首次安装与测试

### A. Windows PowerShell 7：通用表格与归档 L0–L2

仓库已经含 `e10617820db06889e1638499478da0de_NCA/1` 原始文件的本地完整克隆：

```powershell
Set-Location E:\Test\ACNH\ACNH_Resources   # 换为实际本机仓库路径
git switch 3.0.3
py -3 -m pip install -r scripts/requirements.txt

# 先测试，确认没有破坏解析器
py -3 -m unittest discover -s scripts -p "test_acnh_unpack.py" -v

# Dry-run 只读扫描：不写输出
py -3 scripts/unpack_acnh.py --root . --out Unpack --dry-run

# 先处理最容易验证的真实结构数据
py -3 scripts/unpack_acnh.py --root . --out Unpack --kind tables --resume
py -3 scripts/unpack_acnh.py --root . --out Unpack --kind byml --resume

# 全源结构层扫描 + 安全提取成员（受程序大小上限保护）
py -3 scripts/unpack_acnh.py --root . --out Unpack --all --resume --extract-members

# 逐文件 SHA-256 验证已经生成的原文件/输出清单
py -3 scripts/unpack_acnh.py --root . --out Unpack --verify --strict
```

注意 `--all` 完成的只是该脚本当时支持的原生结构层，不代表已生成全部 PNG/GLB/WAV，更不代表恢复 BFLAN 运行时动画。

### B. WSL2 Ubuntu：L3 原生媒体与 UI2D

推荐新建**工作克隆**，避免 `select_acnh303_shard.py` 运行 `git sparse-checkout set` 改动已有完整工作树的 sparse 规则。

```bash
sudo apt update
sudo apt install -y git curl unzip python3 python3-venv ca-certificates tar
mkdir -p ~/research && cd ~/research
git clone --filter=blob:none --sparse --branch 3.0.3 \
  https://github.com/969981/ACNH_Resources.git ACNH_Resources
cd ACNH_Resources
git sparse-checkout set scripts derived

python3 -m venv .venv
source .venv/bin/activate
python -m pip install -r scripts/requirements-media.txt

python -m unittest discover -s scripts -p 'test_acnh303_media_l3.py' -v
python -m unittest discover -s scripts -p 'test_acnh303_ui2d_parser.py' -v
python -m unittest discover -s scripts -p 'test_acnh303_fcpx_font.py' -v
```

如 WSL 工作目录位于 `/mnt/e/`，也可以直接操作该目录，但大量小文件 Git checkout 更适合 WSL 的 ext4 文件系统。**不要执行任何 NCA 解密或 DRM 绕过操作**；这里处理的是已经合法取得的、可读取的原始 RomFS 文件。

### C. 安装转换器

这三个外部命令承担真实媒体格式解码：

- `wmdlt`：Switch BFRES 中确实有网格时导出 GLB。
- `wimgt`：实际 BNTX 纹理解码成 PNG。
- `vgmstream-cli`：实际 BWAV 音频转 PCM WAV。

仓库 Actions 使用受限版本，而非下载“最新版”不加验证：

```bash
mkdir -p /tmp/acnh-tools/nintoolbox /tmp/acnh-tools/vgmstream
url=https://github.com/quatric/nintoolbox/releases/download/nightly-20261013
curl -fLsS "$url/nintoolbox-linux-x86_64.tar.gz" -o /tmp/acnh-tools/nintoolbox.tar.gz
curl -fLsS "$url/SHA256SUMS.txt" -o /tmp/acnh-tools/SHA256SUMS.txt
(
  cd /tmp/acnh-tools
  grep 'nintoolbox-linux-x86_64.tar.gz$' SHA256SUMS.txt | \
    sed 's/nintoolbox-linux-x86_64.tar.gz/nintoolbox.tar.gz/' | sha256sum -c -
)
tar -xzf /tmp/acnh-tools/nintoolbox.tar.gz -C /tmp/acnh-tools/nintoolbox

curl -fLsS \
  https://github.com/vgmstream/vgmstream/releases/download/r2117/vgmstream-linux.zip \
  -o /tmp/acnh-tools/vgmstream.zip
unzip -q /tmp/acnh-tools/vgmstream.zip -d /tmp/acnh-tools/vgmstream

WIMGT=$(find /tmp/acnh-tools/nintoolbox -type f -name wimgt | head -n1)
WMDLT=$(find /tmp/acnh-tools/nintoolbox -type f -name wmdlt | head -n1)
VGMSTREAM=$(find /tmp/acnh-tools/vgmstream -type f -name 'vgmstream-cli*' | head -n1)
chmod +x "$WIMGT" "$WMDLT" "$VGMSTREAM"
printf 'wimgt=%s\nwmdlt=%s\nvgmstream=%s\n' "$WIMGT" "$WMDLT" "$VGMSTREAM"
```

如果上游 Release URL 改变、校验文件缺失、可执行文件不存在，应该直接停止并确认可信来源，**不要忽略 SHA256SUMS 或使用未核验的替代二进制**。

## 三、按格式实际解包：从单个文件开始

### 3.1 BCSV / BYML / MSBT / SARC

```powershell
py -3 scripts/unpack_acnh.py --root . --out Unpack --file "Bcsv/AITag.bcsv"
py -3 scripts/unpack_acnh.py --root . --out Unpack --file "Stage/commonPlayerHouse.byml"
py -3 scripts/unpack_acnh.py --root . --out Unpack --file "Message/Dialog_CNzh.sarc.zs" --extract-members
```

原生类型无法解释的字段保留原始 CRC32/offset，而不是填写人为“猜出来”的键名。结构 JSON 的字段名和文件名相似，不代表原版引擎已经证明对应功能。

### 3.2 按稳定 Git 哈希选择一批 Model / Layout / Sound

**该命令会修改当前克隆的 sparse-checkout 并创建 `selection.json`，请在上述专用工作克隆里运行**。

```bash
# 示例：Layout 第 2/8 分片，跳过前 50 个原始源，处理 10 个
python scripts/select_acnh303_shard.py \
  --category Layout --shard 2 --shards 8 --suffix .zs \
  --skip-count 50 --max-count 10

# 输出 selection.json，里面含原始相对路径列表
python scripts/acnh303_media_batch.py \
  --root . --selection selection.json \
  --out Unpack_L3_Batch --report-dir derived/3.0.3/local_media \
  --tool-wmdlt "$WMDLT" --tool-wimgt "$WIMGT" \
  --tool-vgmstream "$VGMSTREAM"

# 再从完全相同的原始 Layout 源中提取 FLYT、FLAN、FCPX
python scripts/acnh303_layout_semantic_shard.py \
  --root . --selection selection.json \
  --output Unpack_UI2D_Batch \
  --report-dir derived/3.0.3/local_ui2d
```

生成：

```text
Unpack_L3_Batch/<NCA>/1/Layout/<原始文件>.zs.converted/
  leaf_00000-name.img000.png
  ...
  _conversion_manifest.json

Unpack_UI2D_Batch/<NCA>/1/Layout/<原始文件>.zs.ui2d/
  000-name.bflyt.json
  001-name.bflan.json
  002-name.fcpx.fontrefs.json
  _ui2d_source_manifest.json

derived/3.0.3/local_media/Layout/002-of-008/
  manifest.json
  summary.json

derived/3.0.3/local_ui2d/Layout/002-of-008/
  semantic_manifest.json
```

并非每个原始 Layout 都有 PNG、FLYT、FLAN 和 FCPX 四种资源：是否产生该类型必须以每个真实成员为准。纯 BFLYT 的文件可以只有 JSON，而没有 PNG，`no_target_leaf` 针对媒体目标是**准确且有用的状态**，但必须同时检查 UI2D 结构报告才知道是否还有语义产物。

### 3.3 继续处理 BWAV

```bash
# 选择 Sound 第 3/8 分片；请先对照累计审计确认 skip_count 不重复！
python scripts/select_acnh303_shard.py \
  --category Sound --shard 3 --shards 8 --suffix .bwav \
  --skip-count 55 --max-count 15

python scripts/acnh303_media_batch.py \
  --root . --selection selection.json \
  --out Unpack_BWAV_Batch --report-dir derived/3.0.3/local_bwav \
  --tool-wimgt "$WIMGT" --tool-wmdlt "$WMDLT" \
  --tool-vgmstream "$VGMSTREAM"
```

以上 `skip-count 55` 属于**第七轮起点**（当时共有 332 个已测 BWAV，媒体累计 452 WAV 前的分片位置）。**如果第八轮已合并／已经执行过，不能继续使用这个 skip_count，否则必然抽到之前相同的原始源。** 应先看最新 `coverage.json` 和审计 `source_manifest.jsonl.gz`，再由 Git Tree 重新选择尚未出现过的路径。

生成 WAV 需要真实采样数据和 PCM 音频头。只写入空 RIFF 头、或者把原始 .bwav 重命名为 .wav 都不属于转换成功。

## 四、GitHub Actions 批量自动化与无需下载整块 10GB 原镜像

生产批量流水线：

```text
Actions blob:none checkout
   ↓ git ls-tree -rz HEAD / source origin
   ↓ SHA256(source relative Git path) → modulo 分片号
   ↓ skip-count / max-count → 精确源文件列表
   ↓ git sparse-checkout 只取有限源
   ↓ 真实 zstd/SARC/内嵌格式
   ├─ Layout BNTX → decoded PNG
   ├─ Layout FLYT/FLAN/FCPX → structural JSON
   └─ BWAV → decoded PCM WAV
   ↓ 原文件 SHA256 + 每个输出 SHA256
   ↓ 分格式报告 / 问题名单 / 非重复累计审计
   ↓ GitHub Release 压缩分卷 + SHA256SUMS
```

第八轮实跑工作流：

[.github/workflows/acnh303-l3-round8.yml](../.github/workflows/acnh303-l3-round8.yml)

设计处理 **8×10 个以前未测的 Layout 源 + 8×15 个以前未测的 BWAV**，以此前 **912 个媒体源**作为 SHA 基准，汇总为累计 1112 个不重复原始源。Layout JSON 单独审计，不会虚增 GLB/PNG/WAV。**实际成功率、PNG 张数、FLYT/FLAN/FCPX 产物数量以 Actions 完成后的 JSON 为准**，不能拿设计分片数代替真实转换数。

在 GitHub 网页上：打开 **Actions**，选择工作流 `ACNH 3.0.3 L3 Round 8 Layout+BWAV Real Data and UI2D Semantics`，查看 `tests`、16 个 `decode` 和 `reconcile` 任务状态；找到需要的媒体和 UI2D 数据包或前往对应的长期 Release。使用 GitHub CLI 可运行：

```powershell
gh workflow run acnh303-l3-round8.yml --repo 969981/ACNH_Resources --ref 3.0.3
gh run list --repo 969981/ACNH_Resources --workflow acnh303-l3-round8.yml --limit 5
gh run view <实际运行 ID> --repo 969981/ACNH_Resources --json status,conclusion
```

`gh workflow run` 需要工作流已经合并在目标 `--ref` 分支。若第八轮仍在 PR 特性分支，可指定实际的 `feat/acnh303-l3-round8-guide-layout-audio`，不要填不存在的分支名。GitHub Actions 会生成临时 Artifact，其保留期有限；要长期共享转换过的二进制，另发布压缩 Release，记得校验清单。

## 五、合并累计源／输出审计（防止重复计数）

```bash
python scripts/acnh303_media_incremental_audit.py \
  --inventory derived/3.0.3/inventory/source_manifest.csv.gz \
  --baseline derived/3.0.3/media_bwav360_cumulative/source_manifest.jsonl.gz \
  --new-reports collected/derived/3.0.3/media_round8 \
  --expected-new-shards 16 --expected-baseline 912 \
  --out derived/3.0.3/media_round8_cumulative
```

`collected/` 必须包含全部 16 个从实际 Actions 下载的分片 manifest。脚本负责拒绝重复路径、输入大小异常、媒体 MIME/实际格式不匹配、假“已转换”记录。旧的 912 个源保留，新的 200 个与其逐路径对照去重；独立 UI2D JSON 汇总在 `layout_semantic_round8_cumulative/`，不要当成媒体输出重复相加。

## 六、核验与常见故障

| 现象 | 原因与应对 |
| --- | --- |
| BFRES `wmdlt ERROR #36` | 检查 FMDL/FSHP/FVTX。BottomsTex 纯纹理 FRES 必须改走结构校验过的 embedded BNTX→PNG；不能凭 ERROR #36 就标损坏 |
| Layout 结果 `no_target_leaf` | 该源没有本轮指定的 BNTX PNG 目标，**继续检查 FLYT/FLAN/FCPX** |
| `FCPX` 没有字体图片 | 它是字体引用配置；当前只恢复 40 字节记录、文件名链接，不含实际字形曲线 |
| `mat1` 数据有材料名但无显示颜色 | 只恢复真实字段；还需要纹理、GPU shader 和 blending 才能证实绘制颜色 |
| BFLAN 数学曲线与界面动作不同 | 必须采集游戏 3.0.3 原生帧属性并通过运行时 comparator 验证；否则 `NOT_TESTED` |
| Git sparse-checkout 后找不到原文件 | Git tree 的 hash source list、`--skip-count`、当前 Git 分支检查；避免在全量工作树意外执行 selection |
| 新源统计多出重复 | 检查 `source_manifest.jsonl.gz`，本轮 `--expected-baseline` 必须对应真实已测原始源数 |
| External decoder 超时或产生 0 字节 | 记录失败，不改名伪造输出；限制输入大小，保留 stderr/exit code |
| Actions Artifact 到期 | 核查实际 Release 分卷、SHA256SUMS；没有实际长期 Release 时不得说已长期发布 |

## 七、下一步该做什么，而不是盲目重复跑

继续探索仍未恢复的专有容器 `*.bfbs`、`*.prmb`、`*.bnsh`、`*.bnk`、`*.pck` 以及资源中尚未确认的字段。优先查看 [技术规范](ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md) 和最新未转换清单，不要因文件名相似就把独立格式交给 BNTX、BFRES 或 BWAV 解码器。

高价值验证顺序是：原始字节／Magic → header 和偏移／长度 → 数据结构和引用语义 → 真实 CSV/JSON/媒体输出 → SHA256/格式加载 → 如有必要，原版 ELF Native 调用链和实机观察。不能跳过任意一级直接宣布“全解包”。
