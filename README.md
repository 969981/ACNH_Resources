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
