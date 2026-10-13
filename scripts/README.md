# ACNH 3.0.3 decoder notes

The tools run entirely on local files. The original repository uses NCA/1 as RomFS and NCA/0 as ExeFS. ACNH does not use the same formats as Pokémon HOME.

## Evidence and limitations

- BCSV: row count u32 at 0x00, row size u32 at 0x04, column count u16 at 0x08, VSCB at 0x0C, 8-byte descriptors from 0x1C; hashes represent CRC32 of original name-plus-type strings. The file does not store the types. CSV intentionally keeps raw unsigned storage/string bytes, and JSON records field offsets/width hints.
- BYML: supports little/big endian, versioned header, string table, maps, arrays, bool, signed/unsigned ints, floats, 64-bit numeric references, null and binary byte fields. Unsupported structures are errors, not silently skipped.
- .zs: Zstandard decoder via optional zstandard Python package; .szs: native Yaz0 LZ77 decoder.
- SARC: validates header, BOM, SFAT/SFNT member bounds, relative paths and casefold uniqueness. Archive expansion remains limited; members may contain more containers which are not recursively unpacked in this initial implementation.
- MSBT: labels/text extracted from LBL1/TXT2 when the sections can be validated. Embedded styling and control codes are not claimed to be full UI rendering.
- BFEVFL: identified only. JSON from this tool is NOT executable pseudocode or a reconstructed dialogue tree.
- BFRES, BNTX and Nintendo Switch shader/audio: recognized but not converted into ordinary 3D/image/audio formats yet. Importing the HOME BNTX code without validating ACNH texture formats is not acceptable.

A failed parser should not generate a fabricated output. Records include SHA-256 of the original and every output. Use --verify to detect tampering or incomplete runs. On failure, inspect Unpack/_meta/errors.csv and fix the parser against a real source sample.

## Test cases

test_acnh_unpack.py embeds exact bytes from these original Git paths:
- Stage/commonPlayerHouse.byml (52 B)
- Bcsv/CalendarEventJuneBrideReward.bcsv (156 B)
- System/lp_resource.Nin_NX_NVN.szs (1964 B)
- Layout/Bell.Nin_NX_NVN.zs (859 B)

Fixtures allow unit tests without cloning gigabytes. With zstandard installed the zstd test runs too.

## Next priorities

1. Full BCSV conversion, verify source count, table-specific name dictionaries supported by cited sources.
2. Full BYML validation and event-flow graph decoding using a verified BFEVFL parser.
3. Message SARC member MSBT text exports and control-code preservation.
4. BFRES meshes, materials, BNTX/ASTC/BCn textures and PNG export with explicit pixel-format metadata.
5. Model and sound SARC assets and Nintendo file types (BNK/BARS/BFSAR etc.) after real samples.
6. Run full repository conversion locally; publish only reproducible subsets and SHA-256 manifests.

Reference on ACNH BCSV: https://jonbarrow.dev/works/bcsv
Nintendo BYML format: https://nintendo-formats.com/libs/common/byaml.html
Reference HOME mirror design: https://github.com/969981/PokeHome_Resources
