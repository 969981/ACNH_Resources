# UnPack conversion metadata

- `model_migration.json`: 27 earlier-verified Model source samples, repathed to 105 real GLB/PNG outputs with preserved Git blob SHA.
- Prior 3.0.3 converter outputs (BCSV, BYML, UI, sound, messages and more) are reused by Git tree SHA and remain genuine binaries/text, not placeholders.
- `run_log.jsonl` is created locally by `Scripts/mirror_unpack.py` as additional files are decoded.
- Do not mistake `.gitkeep` directory markers or a 103,400-file source inventory for completed L3 semantic conversion.
- Legacy conversion manifests are archived on the source branch: https://github.com/969981/ACNH_Resources/tree/3.0.3/Unpack/_meta
- The current media migration records Git blob SHA identifiers, **not** SHA-256 checksums; original validated L3 manifests carry byte-level SHA-256.
