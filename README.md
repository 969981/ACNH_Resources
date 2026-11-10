# ACNH 3.0.3 — NCA raw resources & UnPack

The default branch `3.0.3_Unpack` stores the complete original source tree and a **real-output-only** decode mirror. The original source tree is read-only; not every one of the 103,400 RomFS files has reached full semantic conversion.

| Folder | Purpose |
| --- | --- |
| `e10617820db06889e1638499478da0de_NCA/0` | ExeFS source programs |
| `e10617820db06889e1638499478da0de_NCA/1` | Raw RomFS, 24 top-level categories |
| `docs/` | [Obsidian knowledge base](docs/00-Home.md): original structure, formats, unpack steps, evidence and notes |
| `Scripts/` | 52 inherited decoders/tests/tools plus [mirror_unpack.py](Scripts/mirror_unpack.py) |
| `UnPack/0` | Verified ExeFS conversion (main.elf) |
| `UnPack/1` | Original-relative decoded files; only actual verified outputs, not fabricated placeholders |
| `UnPack/_meta` | Output provenance and run logs |

```bash
python -m pip install -r Scripts/requirements.txt
python Scripts/mirror_unpack.py scaffold
python Scripts/mirror_unpack.py basic --file Bcsv/AITag.bcsv
python Scripts/mirror_unpack.py audit
```

For richer media conversion and external tool dependencies, see [workflow documentation](docs/03-Unpack-Workflow.md). The former `3.0.3` branch holds historical reports and far larger Release archives.

## Incremental conversion automation

Use [Incremental verified UnPack](.github/workflows/acnh303-incremental-unpack.yml) and [batch documentation](docs/07-Incremental-Batches.md) to process 1–24 original files at a time. Each batch records source Git blob identity, original SHA-256, actual output SHA-256 and decoder status; media has explicit real-decoder validation. New media data are committed only on a successful workflow execution; missing/unsupported formats are not invented.


## nx2elf native source and ExeFS main.elf

The complete source of nx2elf is vendored directly under
[tools/nx2elf](tools/nx2elf), not via Git submodule. It is pinned to upstream
commit a1760ba54e2aefb41444933f53b90e6e8b05c399.

Rebuild the original ACNH 3.0.3 ExeFS main to an ELF64 AArch64 file:

    python Scripts/convert_acnh_main.py --report UnPack/_meta/nx2elf-main-3.0.3.json

Output: e10617820db06889e1638499478da0de_NCA/0/main.elf

See [the ExeFS conversion guide](docs/08-ExeFS-nx2elf.md) and the
[GitHub Actions rebuild workflow](.github/workflows/acnh303-nx2elf.yml).
