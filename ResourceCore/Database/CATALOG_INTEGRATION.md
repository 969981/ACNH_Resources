# ACNHResourceCore V1 — catalog integration preview

Baseline CI 46161263615 succeeded, archive commit 4320cc2ad015aa8cab53ab91c647785bf15bf969; SQLite SHA256 532367ad570fbfe94fa38b92d5eab463c90fad0baffde40dfc21411dd46d8b92.
This stage extends the entire prior database; previous verified output stays intact until new CI passes. All live permissions remain NULL.

## New evidence
- Furniture group CRC32 keys Nut=2154119502 (17 members), Yumekawa=2337948507 (7 members). Candidate names 53/56, members 681/701. Remaining 71879236 (5),1109759743 (5),2541425820 (10). No invented native enum names.
- RecipeCraftParam has 924 unique recipe IDs. Item u16 CRC=89A3482C, Material1..6 u16 = 1BBFA75E/5C1FDD8E/617FF43E/D35F282E/EE3F019E/A99F7B4E. Candidate quantity fields 13A65775/54062DA5/69660415/DB46D805/E626F1B5/A1868B65. All 5,544 slots have consistent empty sentinel 65534 vs quantity zero. Non-empty counts 924,530,205,80,42,28 = 1,809. Original raw BCSV byte validation and item FK checks run in CI. Native recipe execution and quantity names not yet proven.
- Villagers: NmlNpcParam 417, exact ResName and ID join with pinned R84 14-language artifact. Reuse R92 hobby/initial-live/collaboration evidence; retain raw fields and photo/poster reference, native images, 5838 names. Adoption, invite, amiibo permissions remain NULL.
- Quantity: reuse existing ItemCapabilityCore denomination test: 108 bell + 10 turnip nominal amounts, verify raw Price s32 matches internal name, no claim on FreeParam or runtime stack operation. Counts 0:10808,3:4,5:2,10:183,30:26,50:36,99:1,-1:118.
- DLC field profile: 44 original fields, value distributions only; FD9AF1E1 exact item ID join, all other field meanings pending.

## Reproduction
python ResourceCore/Database/build_catalog.py --root . --artifact r84.zip --out artifacts/catalog
R84 source Actions artifact 14830765861 with SHA256 98874de045b29a4f937ee2c89b2264f47605d6bb5adac1496098ee0e02c38f1e.
Output: full ACNHResourceCore.sqlite3, villagers, locales, recipes, recipe materials, quantity rules, group definitions, DLC field profiles and manifest. CI archives to ResourceCore/Database/catalog-output. The previous output is preserved as immutable input.
