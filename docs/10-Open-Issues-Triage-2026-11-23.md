---
title: ACNH 3.0.3 Open Issue triage (2026-11-23)
tags: [ACNH, 3.0.3, issues, triage, verification]
status: in-progress
---
# Open Issue triage — 2026-11-23

> [!important] Scope and evidence
> The default branch is \`3.0.3_Unpack\`, whereas some Issue evidence refers to historical \`3.0.3\` or \`feat/acnh303-round*\` branches. A published action run, Release, header parser, or token occurrence is **not proof** that all native gameplay/runtime semantics have been reproduced. This document is a static 2026-11-23 triage, **not** an assertion that all tests have been rerun today.
>
> At review: **24 open Issues** and Draft PR [#48](https://github.com/969981/ACNH_Resources/pull/48). No Issue in this checklist should be closed merely because an overlapping script or previous study exists.

## Immediate repair batch (this PR)

Related: [#44](https://github.com/969981/ACNH_Resources/issues/44), [#4](https://github.com/969981/ACNH_Resources/issues/4), [#9](https://github.com/969981/ACNH_Resources/issues/9), [#15](https://github.com/969981/ACNH_Resources/issues/15).

1. Route Switch FRES v9 with bounded animation magic candidates and **no first FMDL model pointer / mesh / BNTX** to \`non_geometry_fres_animation_candidate\`, never to synthetic GLB conversion. Candidate hits are not a verified animation dictionary or runtime behavior.
2. Distinguish external decoder nonzero exit, exit 0 with no output, timeout/missing executable, and post-conversion validation failure; preserve original member/source SHA and exact stderr/stdout log bytes with their SHA. Temporary-stage failures are copied to \`UnPack/_meta/media-tool-logs/\` before deleting the workspace.
3. Fix the \`Scripts/\` vs \`scripts/\` path mismatch in \`acnh303_media_batch.py\` on case-sensitive Linux filesystems.
4. Add pure synthetic negative/positive regression fixtures (the original NCA is read-only), strict log provenance tests, and PR-triggered CI.

**Validation still needed:** confirm PR CI outcome; run a separate **real original-source** regression on \`Model/PltTreeCedarDecoAnim.Nin_NX_NVN.zs\` with SHA \`3284939356d4d1a086307b0586e7f4e8995971f7c642190fc84da331767cb97f\`; check emitted manifest and no fake GLB. Historical R45 FMAA A/B curve evidence exists but this PR does not establish live-game playback or ShaderParam bindings. Do **not** close #44 solely on these static/synthetic safeguards.

## All 24 open Issues

Triage priority below is a **new proposed work order**, not a claim that GitHub priority labels already exist. "Open" is intentional; required evidence is not yet complete.

| Issue | Priority | Scope, immediate next evidence / acceptance |
| --- | --- | --- |
| [#4](https://github.com/969981/ACNH_Resources/issues/4) | P0 | Unified archive runner and resumable shards; current patch only fixes Linux script lookup, not all U01 requirements |
| [#5](https://github.com/969981/ACNH_Resources/issues/5) | P0 | Recursive compressed containers; test actual nested members, pointer bounds, bomb limits and no path traversal |
| [#15](https://github.com/969981/ACNH_Resources/issues/15) | P0 | All-source provenance reconciliation and cross-format regression with unambiguous converted/partial/unsupported states |
| [#17](https://github.com/969981/ACNH_Resources/issues/17) | Master | Track original 103,400-source inventory separately from attempted and fully decoded outputs |
| [#30](https://github.com/969981/ACNH_Resources/issues/30) | P1 | BARS: historical 1,696/1,696 source L3 attempts, but AMTA metadata and external BWAV stream playback not proven |
| [#44](https://github.com/969981/ACNH_Resources/issues/44) | P1 | Cedar meshless FRES route, tool failure logs, real-source regression; external short BWAV payload identity remains unresolved |
| [#18](https://github.com/969981/ACNH_Resources/issues/18) | P1 | BDLI original inventory/decompression/native record extraction for 36,708 sources and full traceable validation |
| [#31](https://github.com/969981/ACNH_Resources/issues/31) | P1 | BDLI cross-language structure/key/encoding checks; overlaps #18 but adds semantic mapping |
| [#45](https://github.com/969981/ACNH_Resources/issues/45) | P1 | Original BDLI/LBLI offset/label/control-code lookup, native consumers and locale-specific runtime proof |
| [#7](https://github.com/969981/ACNH_Resources/issues/7) | P1 | MSBT/MSBP Unicode and control-code exact exports; avoid inventing readable text from opaque bytes |
| [#8](https://github.com/969981/ACNH_Resources/issues/8) | P1 | BFEVFL complete graph references and proven decompiler coverage |
| [#33](https://github.com/969981/ACNH_Resources/issues/33) | P1 | Native AMTA, LBLI, BFEVFL consumers: typed offsets, argument marshaling, verified runtime effects |
| [#46](https://github.com/969981/ACNH_Resources/issues/46) | P1 | Version-matched ELF Action/Query registration → call target → state trace; static graph alone insufficient |
| [#39](https://github.com/969981/ACNH_Resources/issues/39) | P1 | Authentic FSKA/FMAA skeleton/material tracks and ELF evaluator; link R45 Cedar curves but do not equate with native playback |
| [#47](https://github.com/969981/ACNH_Resources/issues/47) | P1 | BNSH program/stage reflection, uniform/sampler/material bindings, runtime GPU evidence |
| [#25](https://github.com/969981/ACNH_Resources/issues/25) | P2 | FCPX font record parsing known; fallback/charset/font consumers still need native evidence |
| [#6](https://github.com/969981/ACNH_Resources/issues/6) | P2 | BCSV/BYML/Param/ASB: schema/raw unknown hash columns and full source coverage |
| [#9](https://github.com/969981/ACNH_Resources/issues/9) | P2 | BFRES geometry, skeleton, material and animation validation; classify animation-only separately from GLB |
| [#10](https://github.com/969981/ACNH_Resources/issues/10) | P2 | All BNTX formats→pixel-verified PNG/KTX2 and coverage manifest |
| [#11](https://github.com/969981/ACNH_Resources/issues/11) | P2 | BFLYT/BFLAN pane and animation timeline semantics; separate font runtime from static layout |
| [#12](https://github.com/969981/ACNH_Resources/issues/12) | P2 | PTCL/ELink/Shader/BNSH/SHARC bounded parsing; semantic/native shader requirements tracked in #47 |
| [#13](https://github.com/969981/ACNH_Resources/issues/13) | P2 | BARS/stream audio playable output and original hashes; distinguish header-only from actual PCM |
| [#14](https://github.com/969981/ACNH_Resources/issues/14) | P3 | Movie/Font/System/Swkbd rare formats and explicit unsupported coverage |
| [#16](https://github.com/969981/ACNH_Resources/issues/16) | P3 | Source→Release sharded artifacts with strong checksums, permanent links, and no duplicate source counting |

## Dependency graph and deduplication

- **BDLI workstream**: #18 source coverage → #31 decoded localization schema → #45 native language lookup/control codes. Same input inventory; distinct DoD.
- **EventFlow workstream**: #8 graphs → #33 native consumer lookup → #46 verified callback and game-state effect.
- **FRES/material workstream**: #9 actual geometry/animation outputs → #39 animation structures → #44 Cedar model triage → #47 shader/material consumer evidence.
- **BARS/AAL workstream**: #13 format outputs → #30 every container sampled and AMTA metadata → #44 92-byte header-only streams / real AAL file I/O evidence.
- **UI2D workstream**: #11 BFLYT/BFLAN → #25 FCPX font selection → #45 locale and dialogue runtime verification.
- **Infrastructure**: #4 and #5 are prerequisites to #15's provenance gate; #17 is the master overview; #16 publishes verified small/large outputs.

## Evidence and CI gate

New regression workflow: [acnh303-issue44-media-regressions.yml](../.github/workflows/acnh303-issue44-media-regressions.yml).

Run locally (Python 3.11+, dependencies from \`Scripts/requirements-media.txt\`):

\`\`\`bash
python -m compileall -q Scripts
python -m unittest discover -s Scripts -p 'test_acnh303_media_*.py' -v
python -m unittest discover -s Scripts -p 'test_mirror_unpack_failure_logs.py' -v
\`\`\`

Synthetic regressions **do not substitute** real ACNH 3.0.3 source SHA-verification, live GDB capture, external audio FileOpen/Read/Close, actual GPU binding, or the full 103,400-source audit.

See [[05-Progress]], [[06-Evidence]], [[08-Next-Wave-FMAA-AAL-BARS]], and [Draft PR #48](https://github.com/969981/ACNH_Resources/pull/48) for research already underway.
