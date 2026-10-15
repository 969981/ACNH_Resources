# AGENTS.md — ACNH 3.0.3 Resource Unpack

Scope: repository 3.0.3 and work derived from it. Read README.md and scripts/README.md before changing conversion code.

## Objectives

- Input is e10617820db06889e1638499478da0de_NCA/1 (RomFS).
- e10617820db06889e1638499478da0de_NCA/0 is ExeFS and must not be treated as RomFS.
- Produce reproducible, read-only conversions under Unpack/<NCA>/1/, retaining the original relative directories and file stems wherever possible.
- Preserve original assets untouched. Do not rename, delete, modify or rewrite source files.
- Publish a verified subset when possible; do not claim that a successful script commit equals a completed 6 GB repository-wide conversion.

## Mandatory rules for agents and maintainers

1. Every conversion must be backed by a real parser, not guessed column names, enum meanings, texture pixels or dialogue content. Unknown is a valid result.
2. ACNH BCSV column identifiers are CRC32 hashes. The resource does not encode field types; unsigned numeric storage and field widths are NOT confirmed semantic types. Preserve hash, raw column widths and row indices.
3. BYML is parsed as Nintendo Binary YAML with explicit types and recursion limits; unsupported node types fail visibly.
4. .zs streams are Zstandard, .szs commonly Yaz0; always detect the magic rather than trusting a suffix. SARC member names require path safety validation and case-insensitive collision checks.
5. Keep the archive member hierarchy. Preserve exact member bytes before exporting any interpreted JSON or CSV. Never rewrite the archive.
6. Distinguish converted, partial, unsupported and failed. BFEVFL, BFRES, BNTX, graphics/shaders/audio and MSBP are currently only header-identified unless their dedicated parser has been verified.
7. Every manifest record must include original path, size, SHA-256, detected format, parser version, status and SHA-256/size for every generated output. Verify source and output again before saying complete.
8. Enforce strict bounds on input/output sizes, decompression, recursion and member counts. Do not follow symlinks or allow path traversal, overwriting untracked outputs or output path collisions.
9. Use UTF-8 JSON/CSV and deterministic sorting; only summary timestamps may differ between runs. Use atomic file writes. Re-run regression tests against the real small 3.0.3 resource fixtures.
10. Submissions must state the actual files converted, tests executed, unsupported formats and any CI limitations. No fake all-success report. Never commit large generated model/audio assets merely to inflate coverage.

## Workflow

Python 3.10+; optional dependency zstandard for .zs.

~~~powershell
python -m pip install -r scripts/requirements.txt
python -m unittest discover -s scripts -p "test_*.py" -v
python scripts/unpack_acnh.py --root . --out Unpack --dry-run
python scripts/unpack_acnh.py --root . --out Unpack --kind tables --resume
python scripts/unpack_acnh.py --root . --out Unpack --all --resume --extract-members
python scripts/unpack_acnh.py --root . --out Unpack --verify --strict
~~~

Do not edit the raw NCA directories. Full conversion should run locally against the checked-out Git/LFS assets; Actions smoke tests and temporary artifacts do not prove full coverage.

## Format support in this initial implementation

- BCSV: CSV of real row storage values and JSON schema of hashed column identifiers; semantics unknown.
- BYML: recursively parsed typed JSON.
- MSBT: section-aware JSON of labels/text when actual MSBT structure validates.
- Yaz0/Zstandard: decompress with an explicit expansion limit; inspect contents by magic.
- SARC: member index and optional original member extraction with bounded handling.
- BFEVFL/MSBP/BFRES/BNTX/FLYT/FLAN: only container/header metadata, status partial.
- Unknown blobs: unsupported. No fictional PNG, JSON fields, executable models or labels.

Contributors may add full formats only with specifications, unit tests, and real 3.0.3 samples. Provenance and reverse mapping between source and output are required.

## 2026-10-13 master unpack milestones

The authoritative complete-unpack roadmap is [docs/UNPACK_MASTER_PLAN.md](docs/UNPACK_MASTER_PLAN.md) and its 15 tracked U00–U14 tasks are [docs/UNPACK_TASKS.md](docs/UNPACK_TASKS.md). The current phase tracker is [docs/UNPACK_PROGRESS.md](docs/UNPACK_PROGRESS.md).

**Never use `git ls-tree -l` or `git cat-file -s` to enumerate blob sizes on a `blob:none` partial clone:** these may download multi-GB original binary files. Instead query the Git tree SHA with GitHub's Git Trees REST API (which returns blob `size`) and recursively resolve any `truncated` reply. Hash original bytes with SHA-256 only when the relevant shard is actually processed.

Completion must be measured separately for L0 complete source inventory, L1 decompression, L2 recursive archive extraction and L3 genuine semantic/media conversion. A raw binary copy or 16-byte header JSON is never equivalent to a validated PNG, GLB or WAV. Treat every large Actions artifact as transient unless a durable release location is published.


## Media L3 converters (2026-10-13)

See [docs/UNPACK_MEDIA_L3.md](docs/UNPACK_MEDIA_L3.md). The dedicated scripts are
`scripts/acnh303_media_l3.py`, `scripts/acnh303_media_batch.py` and
`scripts/test_acnh303_media_l3.py`, with `scripts/requirements-media.txt`.
Use nintoolbox for Nintendo BFRES/BNTX conversion and vgmstream for BWAV;
pin their tested release versions and verify downloaded archives/checksums.

Strict acceptance: GLB needs real mesh primitive POSITION accessors; PNG needs
CRC, IEND and **actual Pillow raster decoding**; WAV must have readable PCM
samples, valid channels/rate/frame count. Record source, archive member, decoded
output SHA-256 and error messages. A native converter returning exit code 0 but
no tangible output **MUST NOT** mark a file converted. Native BNTX often emits
multiple `.imgNNN.png` outputs per input, each requiring independent checks.
Conversion of a BNTX leaf does not imply its parent Layout's other BFLYT/BFLAN
leaves are decoded. Prefer persistent Release archives with SHA-256 mapping for
large output sets; never substitute expiring Actions artifacts as final delivery.

## ACNH 3.0.3 media scaleout / cumulative coverage

See [docs/UNPACK_MEDIA_L3_SCALEOUT.md](docs/UNPACK_MEDIA_L3_SCALEOUT.md) and [scripts/acnh303_media_audit.py](scripts/acnh303_media_audit.py). The audited 2026-10-13 scaleout covers 216 additional source files; together with the previous 36 files it reports **252 unique sources, 775 validated GLB/PNG/WAV files**. Every result must join the original source Git tree inventory with path/size; never extrapolate the sampled success percentages to the untested files.

IMPORTANT: the 26 BottomsTex BFRES native decoder ERROR #36 files are still failures, not converted or proven texture-only. The 28 Layout no_target_leaf files lack an independent BNTX and must not be counted as successful PNG conversions. Follow [Issue #21](https://github.com/969981/ACNH_Resources/issues/21). Use the bounded on-demand workflow with --skip-count for nonoverlapping future source slices; preserve SHA-256 reports and split large WAV output into GitHub Releases, not Git history.


## Switch FRES texture-only model subgroup

See docs/BOTTOMSTEX_FRES_TEXTURE_ONLY_20261013.md. The exact 26 real 3.0.3
BottomsTex cases have FRES v9 + FRES+0x28 first model pointer 0,
no FMDL/FSHP/FVTX, and a standalone valid BNTX at FRES+0x1000. wmdlt
ERROR #36 is expected when asked to generate geometry GLB from these.
scripts/acnh303_media_l3.py now has strict field/bounds/texture-count
checks before dispatching such *meshless* FRES to wimgt PNG.
Do not call texture-only FRES a corrupt model or invent GLB geometry.
No FMDL/FSHP/FVTX + BNTX does not generalize to every FRES version.
The existing 82 valid model GLB sources remain on BFRES->GLB path.
The 26 former wmdlt errors became 104 genuinely verified PNGs; the
corrected 252-source census has 879 files (82 GLB, 745 PNG, 52 WAV),
not 108 GLBs. Old failure report is immutable history; cumulative
corrected report lives under derived/3.0.3/media_bottomstex_corrected/.


## ACNH 3.0.3 L3 iteration-4 media reality checks

[docs/UNPACK_MEDIA_L3_ITERATION4.md](docs/UNPACK_MEDIA_L3_ITERATION4.md) describes 300 more original source files processed in 12 distinct hash shards, 781 verified GLB/PNG/WAV outputs and 552 cumulative nonoverlapping original sources. Metadata in derived/3.0.3/media_iteration4_cumulative/ holds every source/output SHA-256, validated format, 41 true Layout no_target_leaf cases and the as-yet untested candidate denominators.

Use scripts/acnh303_media_incremental_audit.py to merge another run with the **corrected** original 252-source ledger, rejecting repeated source paths, source sizes that disagree with immutable RomFS tree inventory, and outputs without proper format proof. Model PNG means embedded texture-only FRES BNTX and MUST NOT be counted as GLB geometry. Every new output shard should be archived as a named, hashed GitHub Release. These sample L3 conversions DO NOT mean 103400 source assets are fully unpacked.


## L3 native UI2D / FCPX / BWAV seventh iteration

Actual ACNH 3.0.3 FCPX font index is a 0x28-byte stride record array starting at file+0x40, with name pointer at record+0x04 and name absolute address = pointer+0x18. 20 real records validated across two unique FCPX blobs. Each native record now exports 10 raw u32; **do NOT claim these words prove language fallback priority**. 22 real v9 `mat1` 44B records expose four 32-bit native fields after 28-byte name, +0x20 = 0x08040200 in all samples, four distinct candidate RGBA-like last words; **GPU shading unverified**.

See docs/UNPACK_NATIVE_UI2D_BWAV_ROUND7.md and `derived/3.0.3/ui2d_native_v7/`. BFLAN's 956 mathematical curve preview samples do **not** prove native runtime parity: `derived/3.0.3/ui2d_runtime_validation_v7/report.json` deliberately contains NOT_TESTED when no real trace is available. Use scripts/acnh303_bflan_runtime_compare.py with explicitly sourced in-game captures and identity-matched animation/object/frame values.

New 120 SHA-audited BWAV→PCM WAV files, cumulative 912 unique L3 media origins, 2020 verified outputs (214 GLB, 1354 PNG, 452 WAV), 694 BWAV still untested. Raw 103400-source L0–L2 inventory coverage is not L3 semantic completion.


## ACNH 3.0.3 L3 round 8: mandatory evidence and unpack guides

Read docs/ACNH303_NATIVE_UNPACK_TECHNICAL_REFERENCE.md and docs/ACNH303_UNPACK_FIELD_GUIDE.md before touching native unpack code. Round 8 actually decoded 80 new Layout original files (520 raster-verified BNTX PNG, 80 FLYT JSON, 333 FLAN JSON, 73 FCPX fontref JSON) and 120 new standalone BWAV into PCM WAV. Cumulative core-media census: 1112 unique source files / 2660 media outputs (214 GLB, 1874 PNG, 572 WAV). Use derived/3.0.3/media_round8_cumulative and layout_semantic_round8_cumulative; 3 Layout new sources had real UI2D structures even without a BNTX media target.

New scripts/acnh303_layout_semantic_shard.py handles UI2D leaves in any Layout .zs archive whether or not it has BNTX. Always keep media and semantics separate. scripts/acnh303_layout_semantic_reconcile.py cross-checks input source SHA against core media census. Round8 first aggregator expected a wrong download-artifact root and was repaired by standalone audit workflow 38492923121 (all 16 conversion jobs had passed). Release has sixteen genuine data shards, SHA checksums, manifests.

New scripts/acnh303_bars_probe.py and scripts/acnh303_bars_audio_l3.py support initial real AAL BARS audio container structure and extracted BWAV->PCM WAV. Of 8 BARS originals, 7 yielded 42 true playable PCM WAVs, one BWAV member failed; one source had one extra byte beyond declared BARS length which is reported, never silently rewritten. Evidence: derived/3.0.3/bars_audio_round8/report.json and separate durable Release tag acnh303-bars-first8-42wav-20261014. These 42 WAV are a **separate audit**, NOT part of the 2660 standalone-BWAV based media output census. 1696 BARS original candidates exist, 1688 untested.

Source-format triage derived/3.0.3/unmeasured_queue_round8/queue.json finds 36708 BDLI .zs and 875 BFEVFL sources etc. Absence from a MEDIA-only census must NOT imply missing L0-L2 typed unpack; keep levels distinct. Native FCPX fallback order, material rendering, FLAN runtime parity still not verified.


## Round 9 verified native audio and LBLI extraction (2026-10-14)

Read docs/ACNH303_ROUND9_BARS_AMTA_BDLI_GUIDE.md for exact commands and evidence. Verified Actions run 38496462710 processes 32 new BARS and 32 BDLI, exporting 186 playable PCM WAV, 208 lossless AMTA v5 metadata files and 4210 bounded nonempty LBLI section binaries. All artifacts have source/member/output SHA evidence in derived/3.0.3/round9_cumulative; temporary artifacts are not permanent releases. **Never merge these three output categories into a single count of fully semantic media.** BARS cumulative is 40 tested source archives and 228 PCM WAV separate from standalone BWAV L3 core (2660 total).

Native ACNH AMTA version is 0x0500 (v5); DO NOT decode it with v1/v3/v4 DATA/MARK/STRG offsets. scripts/acnh303_bars_amta_export.py preserves exact v5 member bytes and opaque raw header words; playback, loop and name semantics are not established. BDLI LBLI ident/count values remain raw fields; do not label the 4210 extracted sections as translated dialogue without native reader evidence. `scripts/test_acnh303_round9_native.py` tests valid/broken AMTA and LBLI byte bounds. Use the SHA-backed round9 shard workflow for new source testing.

## Round 10 immutable input exclusion and native evidence (2026-10-14)

Must read docs/ACNH303_ROUND10_NATIVE_UNPACK_TECHNICAL_GUIDE.md before next L3 operation. `scripts/acnh303_round10_select.py` uses a Git-tree path hash partition but excludes **all** previous 1112 media sources and 40 BARS native sources using committed SHA-backed manifests. Do not reuse stale skip-counts. All 24 native conversion jobs succeeded in Actions 38497229960; first reconcile failed artifact directory assumptions only, fixed by independent successful Run 38497516006. Every source and generated file passed actual SHA verification and 24 shard data archives are durably published in Release acnh303-r10-bars-layout-bwav-native-20261014.

Round10 new: **48 Layout originals → 195 validated PNG and 235 UI2D JSON; 64 standalone BWAV originals → 64 decoded PCM WAV; 64 BARS originals → 834 playable PCM WAV plus 834 exact AMTA v5 members**. Core cumulative 1224 originals / 2919 media outputs (214 GLB, 2069 PNG, 636 standalone WAV). BARS cumulative separate 104 containers / 1062 playable PCM WAV. Untested L3 remainder: BARS 1592, Layout 680, BWAV 510.

Native AMTA v5 header field survey is backed by 208 original member SHA records, at derived/3.0.3/r10_native_fields/matrix.json. LBLI original identifier evidence covers 4210 nonempty sections and 3799 different raw identifier hex values; no natural-language interpretation is proven. Twelve actual BFEVFL sources have 115 static graph nodes and validated Action/Query/Subflow symbol references; **neither Native handler addresses nor gameplay producers have been resolved**. Never label guessed u32 meanings, CRC32 names, font fallbacks, animation parity, or gameplay effects as established.

Round10 data never belongs in Git history: only publish actual media/semantics via Release assets, with SHA256SUMS and immutable source/output manifests.

## 2026-10-14 Round 11 executable evidence and strict claims

See docs/ACNH303_ROUND11_ELF_NATIVE_CONSUMERS_GUIDE.md. Use the original verified ExeFS ELF at e10617820db06889e1638499478da0de_NCA/0/ACNH3.0.3.elf (79,000,340 bytes, SHA-256 83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180). Scripts/acnh303_round11_elf_xref.py and scripts/acnh303_round11_magic_disasm.py use the real ELF64 AArch64 PT_LOAD executable/data mappings and bounded Capstone code windows, with synthetic-regression tests. Do not commit or republish original ELF binaries.

Only these selected statements are fully grounded in real native instructions: BARS magic check at 0x3ACA350..0x3ACA368, +0x0C count read, +0x10+4×count pointer formation, +0x08 BOM, +0x0A version; BDLI format path referenced at 0x1B0A014; generic EventFlow Action/Query names and other words stored in STP pairs near 0xFF5D70/0x108444C. The game-specific AMTA v5 playback attributes, LBLI count/ID semantic consumer, EventFlow actor handler function pointer/real branch effects remain unverified.

The search for AMTA, LBLI, BDLI compiled MOVZ/MOVK constant pairs returned zero for that **specific construction pattern**; absence of such matches does not imply absent native readers. Near-BL targets are not validated consumer calls; heuristic function starts are not confirmed. Strictly preserve source SHA, real ELF VA, opcodes, dataflow, and unknowns. Issue #33 remains open for runtime-backed closure.


## 2026-10-14 R14 Unpack source/missing-file reality

Read docs/ACNH303_ROUND14_UNPACK_REMAINING_GUIDE.md and the SHA-backed data under derived/3.0.3/round14_unfinished_index/ before additional L3 selection.

R14 verified 128 never-before-tested originals through 16 successful native conversion jobs and independent reconciliation run 38513944239. New actual media: 32 GLB, 161 PNG, 48 standalone PCM WAV. Separate BARS audit: 16 new sources producing 84 embedded PCM WAV and 84 exact AMTA v5 members. Layout UI2D additionally produced 32 BFLYT, 110 BFLAN and 21 FCPX structured JSON. Core-media L3 cumulative: 1336 measured originals / 3160 media (246 GLB, 2230 PNG, 684 standalone WAV); BARS cumulative separately 120 originals / 1146 PCM WAV.

The permanent verified Release is https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r14-unpack128-20261014 with 16 actual payload archives, source SHA reports, SHA256SUMS, and 103400-path source-status CSV.gz. 103400 original source inventory has 2105 converted and 101295 partial under effective L0-L2 manifests; 62512 candidate Model/Layout/BWAV/BARS originals have not been specifically L3 tested. R14 remaining counts: Model 59826, Layout 648, standalone BWAV 462, BARS 1576.

**Future selectors must exclude R14 cumulative source manifests**, not just R10, before claiming any further originals are untested. Never merge BARS WAV into core standalone BWAV counts. Actions artifacts alone are temporary; this Release contains actual rehashed bytes. Native AMTA playback, LBLI identifiers, EventFlow game dispatch, UI animation runtime effects remain unverified.


## 2026-10-15 R27 six-shard real resource extraction (latest on this branch)

Follow [docs/ACNH303_ROUND27_REMAINING_RESOURCES_REAL_EXTRACTION.md](docs/ACNH303_ROUND27_REMAINING_RESOURCES_REAL_EXTRACTION.md). GitHub Actions [#38658755903](https://github.com/969981/ACNH_Resources/actions/runs/38658755903) completed all six SHA-backed original conversion shards, reconciliation, release-byte rehash, and permanent [Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r27-real-unmeasured40-20261015). The 40 *new, SHA/path non-overlapping* originals consist of 16 Model, 12 Layout and 12 BARS, selected strictly after R19.

This round produced 4 geometry GLBs, 95 valid PNGs; separate BARS 124 actual playable PCM WAV and 124 native raw AMTA v5; 60 structured BFLYT/BFLAN JSON and 11 FCPX font reference JSON; 4 exact embedded Layout BNSH shader binaries (175632 original bytes). Of the 28 Model/Layout source files, 26 provided real media and **two no_target_leaf remain no-media**, not converted. R27 audited totals: measured Model 1828/60166, Layout 612/960, BARS 408/1696, standalone BWAV 1146/1146. R27 cumulative core media: 8081 (526 GLB/6409 PNG/1146 standalone WAV); BARS additionally 4112 PCM + 4095 AMTA lossless. Native Shader BNSH remains byte-extracted only, not decoded into runnable/modifiable shaders.

**CRITICAL NEXT SELECTION:** Do not run the old R27 selector unchanged; it excludes R19 but would reselect this round's originals. R28 or later selectors must exclude the union of R19 manifests **AND** all 40 source identities from `derived/3.0.3/r27_cumulative/source_delta.jsonl.gz`. Original source tree 103400 files unchanged. Do not count BARS WAV with standalone media WAV and do not count source-level `no_target_leaf` as fully parsed. R26 Native BNSH object consumer remains separate from AMTA/EVFL consumers.


## 2026-10-15 R28 verified original resource scaleout + native BNSH compare

R28 branch `feat/acnh303-round28-backlog-bnsh-structure` fully passed [GitHub Actions #38659968059](https://github.com/969981/ACNH_Resources/actions/runs/38659968059) and permanent [R28 Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r28-layout-bars-model-bnsh-20261015). This is the newest source-exclusion baseline. **224 source paths newly tested and SHA/path reconciled**: Model 128, Layout 48, BARS 48, none overlap R19 or R27. R28 new outputs: 22 verified GLB, 662 PNG, 591 *separate BARS* PCM WAV, 591 native raw AMTA v5, 271 BFLYT/BFLAN JSON, 51 FCPX font references, 24 byte-exact BNSH (1,118,888 bytes). Five Model/Layout sources had `no_target_leaf` and are NOT media converted. All 16 real data shards were re-downloaded and output files hashed in Release verification. Source NCA left unchanged.

After R28: Model untested **58,210**, Layout **300**, BARS **1,240**, standalone BWAV **0**. Core media total 8,765 = 548 GLB + 7,071 PNG + 1,146 standalone PCM WAV (3,762 unique source paths); BARS separately 4,703 PCM WAV and 4,686 AMTA v5. Native compared R27 four original BNSH against R28 24 actual bytes: 28 members, 20 distinct SHA, R28 17 SHA previously absent from R27. In all 28, `0x16` raw u16=0x60; `0x1C` u32 matches file byte length; `0x18` u32 remains in file bounds. These are file header/relocation candidates **NOT** full GPU shader decompilation. Full guide: [docs/ACNH303_ROUND28_BACKLOG_NATIVE_BNSH_GUIDE.md](docs/ACNH303_ROUND28_BACKLOG_NATIVE_BNSH_GUIDE.md).

**R29 MUST exclude R19 cumulative + R27 source_delta + R28 source_delta (224 new originals)**. R28 chooser by design excludes only R19+R27 and would reselect its R28 sources if reused unchanged. Do not merge BARS PCM into standalone BWAV, do not misreport FMAA/FSKA native animation, runtime texture binding, AMTA playback, BDLI localization or BFEVFL execution as complete.


## 2026-10-15 R29 real L3 source delta + Native BNSH verified results (newest baseline)

Two successful source-verified R29 CI pipelines: [real 80-source extraction #38661602702](https://github.com/969981/ACNH_Resources/actions/runs/38661602702), [expanded 38-original-BNSH native #38661854995](https://github.com/969981/ACNH_Resources/actions/runs/38661854995). Permanent R29 [80-source real media Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r29-80-real-media-bnsh-20261015) includes 6 actual payload archives and source/output SHA256SUMS. All 80 originals are disjoint from R19, R27 and R28, sourced from Git tree and validated against 103400 authoritative RomFS inventory.

R29 new originals = **Model 32, Layout 24, BARS 24**. New core media = **5 true GLB + 224 true PNG = 229**. Separate BARS **514 playable PCM WAV + 514 native raw AMTA v5**. Layout additionally exported 110 BFLYT/BFLAN structured JSON, 21 FCPX static fontrefs and 10 native lossless BNSH (360664 bytes). **One** Model/Layout original `no_target_leaf` remains no-media. Distinguish 80 new L3-tested sources from full semantic decoding.

R29 now verified **38 real original BNSH members (R27 4 / R28 24 / R29 10)** and 25 unique SHA. Every one has BNSH → 0x60 grsc → _STR linked blocks, plus _RLT relocation table. 207 real Shader Variation/Program parent links, 207 bounded Reflection links, 1014 typed _DIC resource dictionaries, 228 _RLT sections, 2941 relocation entries, 4148 bounded relocation pointer fields, 3612 nonzero file-internal targets. Actual typed Reflection names: aPosition, aTexCoord, aVertexIndex, o_Color, uTexture0/1/2, uConstantBufferForVertexShader, uConstantBufferForPixelShader, uProceduralShape. These are **not yet GPU binding slots or shader binary code disassembly**. Complete [R29 native guide](docs/ACNH303_ROUND29_BNSH_RELOCATION_VARIATION_REFLECTION.md); machine summary `derived/3.0.3/r29_native_bnsh/expanded_38_summary.json`.

Cumulative R29: core 8994 files = 553 GLB / 7295 PNG / 1146 standalone WAV, from **3818** tested media originals. BARS separately 5217 playable PCM WAV / 5200 raw AMTA. New remaining L3 unmeasured Model **58178**, Layout **276**, BARS **1216**, standalone BWAV **0**. **R30 must additionally exclude R29 80 new originals** in `derived/3.0.3/r29_cumulative/source_delta.jsonl.gz` alongside R19 cumulative, R27 and R28 deltas. Running R29 chooser unchanged would pick these 80 again. Never edit the original NCA or claim Shader Variation→runtime GPU binding or AMTA/animation/EventFlow semantic completeness without dedicated evidence.


## 2026-10-15 R30 — verified NVIDIA Shader Binary Pool + actual 48-source L3 delta (latest)

Native verified from real unchanged R27+R28+R29 BNSH Releases, 38 original members / 25 unique SHA. [R30 successful native Actions #38662766756](https://github.com/969981/ACNH_Resources/actions/runs/38662766756). All 38 grsc Binary Pool pointers and memory sizes are file-bounded; 287 magic-delimited `78 56 34 12` pool segments found. R29 207 Program/Variation/Reflection links are preserved. Program Stage `+0x10` directly resolves genuine NV-magic binary pointer and Stage `+0x18` is a bounded code byte length for ALL **207 Vertex + 207 Fragment = 414 verified static shader code links**; 365 lengths equal next NV-magic offset, 49 do not. Distinct real code SHA: 16 Vertex, 27 Fragment. Exact Program->Reflection->Stage->code linkage enables matching resource dictionary names (`aPosition`, `aTexCoord`, `aVertexIndex`, `o_Color`, `uTexture0/1/2`, `uConstantBufferForVertexShader/PixelShader`, `uProceduralShape`) to *file byte code SHA*, NOT runtime binding slots. Program `+0x68` objects are 207 zero-filled 256-byte file objects OUTSIDE Binary Pool; never treat as actual GPU executable code. NVIDIA ISA and Material->Variation runtime still unverified. Raw files unchanged. Read [docs/ACNH303_ROUND30_SHADER_BINARY_POOL_STAGE_CODE_GUIDE.md](docs/ACNH303_ROUND30_SHADER_BINARY_POOL_STAGE_CODE_GUIDE.md); inspect `derived/3.0.3/r30_native_shader_pool/`.

[R30 verified real-source extraction #38662545630](https://github.com/969981/ACNH_Resources/actions/runs/38662545630) and [permanent Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r30-48-real-media-bnsh-20261015) independently selected 48 previously UNTESTED original sources: Model 24, Layout 12, BARS 12, strictly disjoint from all R19+R27+R28+R29 histories. New valid 7 GLB, 123 PNG (all 36 Model/Layout have verified media), separate BARS 221 WAV + 221 exact raw AMTA v5, Layout 55 BFLYT/BFLAN JSON, 9 FCPX fontrefs, 8 new lossless BNSH (268568 bytes). The new eight BNSH are **not** included in the 38 historic-member R30 Native graph. Core media cumulative now **9124** = 560 GLB / 7418 PNG / 1146 standalone BWAV WAV from 3854 core source paths; BARS separately 5438 PCM WAV / 5421 AMTA. Still not L3 tested: Model **58154**, Layout **264**, BARS **1204**, independent BWAV **0**.

**R31 source selectors MUST add R30 `derived/3.0.3/r30_cumulative/source_delta.jsonl.gz` 48 new sources to R19 cumulative + R27 40 + R28 224 + R29 80 exclusions.** The R30 selector itself excludes only earlier rounds and would repeat these 48 if called again. Do not mistake magic-delimited NV chunks for proven GPU ISA, or shader dictionary name for GPU binding index. No merged changes into 3.0.3.


## 2026-10-15 R31 verified shader binary code gap audit + original ELF material candidate path (newest)

R31 branch `feat/acnh303-round31-shader-length-material-gpu`, [R31 technical evidence report](docs/ACNH303_ROUND31_SHADER_CODE_GAPS_RUNTIME_MATERIAL_PROBE.md). Actual R27–R30 BNSH Release data re-fetched and SHA verified. **46 original BNSH members / 28 unique BNSH SHA**, 237 GRSC Variation/Program, all **237 Vertex + 237 Fragment = 474 actual bounded binary-code references** with SHA and corresponding Reflection dictionary. Binary Pool 332 NV 0x12345678 magic-delimited segments; distinct code SHA 20 Vertex / 31 Fragment. **417** Stage code lengths precisely reach next marker; remaining **57** are shorter, with **194304 bytes of 100% actual 0x00 gaps**; 0 cross next NV magic. Zero gaps are observed data, not yet compiler/alignment semantic proof. Source scripts `scripts/acnh303_round31_shader_pool.py`, `scripts/acnh303_round31_code_members.py`, `scripts/acnh303_round31_stage_reflection_link.py`, `scripts/acnh303_round31_code_gap_audit.py`; machine evidence `derived/3.0.3/r31_native_shader_pool/`.

Original ACNH 3.0.3 ELF SHA `83970061788f10049e2e60d687571b8dc87e5014521889ac4611a7f6b9c6e180` reverified via [real ELF Actions #38665252046](https://github.com/969981/ACNH_Resources/actions/runs/38665252046). Direct B/BL destination counts: `0x285D10` 1; `0x285D30` 2; `0x286160` 1; `0x24E3C0` 74; `0x267B14` 117. Exact text anchors `uTexture%d` and `uConstantBufferForVertexShader` reverified in ELF. **Actual runtime Material-to-Variation ownership and GPU descriptor/bind slots are UNPROVEN**, do not turn static PC refs into runtime claims. Read `derived/3.0.3/r31_runtime_material/elf_static_shader_callgraph.json` and R31 read-only runtime probe checklist.

R31 media: [actual audited 40 new originals Actions #38665115487](https://github.com/969981/ACNH_Resources/actions/runs/38665115487) and [permanent SHA-verifiable Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r31-40-real-media-bnsh-20261015). 16 Model, 12 Layout, 12 BARS selected with strict R19 + R27 40 + R28 224 + R29 80 + R30 48 exclusions. Verified actual new 1 GLB, 122 PNG, 94 BARS PCM WAV, 94 raw AMTA v5, 61 BFLYT/BFLAN JSON, 11 FCPX fontrefs, 7 native exact BNSH (235376 bytes). 27/28 Model/Layout originals yield media; one `no_target_leaf` retained. R31 new seven BNSH have NOT been added to the 46 native source sample.

Post R31 core media **9247** = 561 GLB + 7540 PNG + 1146 standalone WAV; separate BARS **5532 playable PCM WAV + 5515 raw AMTA v5**. Remaining unmeasured **Model 58138 / Layout 252 / BARS 1192 / standalone BWAV 0**. **R32 must also exclude R31 source_delta.jsonl.gz (40 new original sources)**; using R31 selector unchanged repeats tested sources. All original NCA files untouched.


## 2026-10-15 R32 — immutable 103400 original path full backlog and verified 88 new L3 source conversions (LATEST)

Actual R32 research branch: `feat/acnh303-round32-unmeasured-native-bnsh`. [R32 complete technical guide](docs/ACNH303_ROUND32_FULL_UNTESTED_PATHS_AND_NATIVE_PROGRESS.md). Full original RomFS inventory exactly **103400 source paths in 24 directories**, verified against all R19/R27/R28/R29/R30/R31 audit source lists and original sizes. [R32 exact 59494 untested names with SHA Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-exact-remaining-source-backlog-20261015): `untested_after_r32.jsonl.gz` lists EACH untouched original `Model/.zs`, `Layout/.zs`, `Sound/.bars` path and byte count; separate `tested_without_valid_core_media.jsonl.gz` for **146 `no_target_leaf` plus one `failed` = 147 previously TESTED sources with no valid core media**. *Not tested* and *tested without media* must NEVER be conflated; BDLI/EventFlow/AMTA/BNSH deep semantics are different from source container extraction.

After actual [R32 88 fresh sources media Actions #38667751972](https://github.com/969981/ACNH_Resources/actions/runs/38667751972) and [real media Release](https://github.com/969981/ACNH_Resources/releases/tag/acnh303-r32-88-real-media-bnsh-20261015): R32 inputs **Model 40, Layout 24, BARS 24**, strict source exclusion prior R19 cumulative, R27 40, R28 224, R29 80, R30 48, R31 40. R32 actual **3 GLB, 206 PNG = 209 core**; 229 playable BARS PCM WAV + 229 native AMTA v5, 113 BFLYT/BFLAN structured JSON, 26 FCPX font refs, **11 exact original BNSH = 460976 bytes**, and **2 no_target_leaf** Model/Layout sources. Current valid core media **9456 = 564 GLB + 7746 PNG + 1146 independent WAV**, separate BARS **5761 playable WAV + 5744 raw AMTA**. Still not L3-tested source paths: Model **58098/60166**, Layout **228/960**, BARS **1168/1696**, standalone BWAV **0**; category-coverage Model **3.437%**, Layout **76.25%**, BARS **31.132%**. Note full `Sound` inventory contains 2848 assets, not all are BARS.

[R32 actual Native Actions #38667687544](https://github.com/969981/ACNH_Resources/actions/runs/38667687544) re-read immutable R27-R31 real original BNSH Release bytes: **53 source BNSH members / 31 distinct SHA**, 267 verified Variation/Program parents and Reflection, **534 bounded true Vertex/Fragment native code references**, **373 NV-magic code member candidates**, code SHA 20 Vertex / 32 Fragment, **469 exact length matches**, **65 real all-zero gaps totaling 219392 bytes**. GPU ISA, compiler alignment semantics, true runtime Material → Shader Variation → GPU descriptor slot remain UNPROVEN. This newly verifies R31's **7** BNSH, not R32's new **11** BNSH (save them for R33 Native).

**R33 must also exclude all 88 original paths in `derived/3.0.3/r32_cumulative/source_delta.jsonl.gz` from its selection**, in addition to R19/R27–R31 source histories. Do not rerun R32 chooser unchanged and claim fresh sources. Use `derived/3.0.3/r32_backlog/untested_after_r32.jsonl.gz` as exact starting list; category/source_size audit must be retained. The original NCA and branch `3.0.3` were not edited.
