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
