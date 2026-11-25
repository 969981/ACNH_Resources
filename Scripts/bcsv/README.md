# ACNH BCSV toolkit (uv / Python)

Python >=3.11, standard library only. From repository root on research:

```powershell
uv run --script Scripts/bcsv/extract.py --verify-303
uv run --script Scripts/bcsv/extract.py --table ItemUIFurnitureCategory --verify-303
uv run --script Scripts/bcsv/extract.py --all --out out/bcsv-all
uv run --no-project --python 3.12 python -m unittest discover -s Scripts/bcsv -p "test_*.py"
```

Default output out/bcsv: schema JSON (offsets, widths, source SHA256 and Git blob SHA), CSV and JSONL (raw hex, explicit typed values, row prefix), category-groups.json and manifest.json. All paths are read-only inputs. Unknown columns retain raw byte hex; known schema types are table-specific, and reference fields are labeled raw until joined/validated. --verify-303 verifies pinned source shapes and Git blobs for nine supported tables; other tables only get structural checks. Strict exact-length and increasing-offset assumptions follow current samples; unsupported variants fail rather than silently producing incorrect data. Existing specialist scripts are not replaced.

Knowledge base: [BCSV documentation](https://github.com/969981/ACNH_Resources/tree/3.0.3/docs/Sources/BCSV).
