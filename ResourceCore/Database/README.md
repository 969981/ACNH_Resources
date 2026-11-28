# ACNHResourceCore V1 — Research Preview
Status: CI pending at initial submission; not a production delivery authorization database.

CategoryCore baseline: CI 46157182093 passed, archive commit 9062d31dddabd009b8d45b16dc706b1d64a9cacd, SQLite SHA256 c3737b30829273c0c706af758f324c43a385f5f032eb6684a85841b76fa04c07.

## Overlay tables
- furniture_group_candidate / furniture_group_member: 56 raw CRC groups / 701 items; original enum name remains NULL. No inference from names.
- dlc_catalog_link: original WherearenCatalogOpen rows 251, 128 distinct first IDs, 48 second IDs, 250 distinct pairs, 49 self rows. Both fields read as u16 by 036DB890, including signed hash -0x1e040125 = E1FBFEDB. Item existence tested independently; direction and unlock conditions remain pending.
- dlc_wherearen_raw: 11178 rows × 44 hashed fields, no UniqueID field in schema. No positional join asserted. Preserve row identity separately.
- dlc_acquisition_candidate: OneRoom source route only; DLC acquire, receive and use permissions all NULL.
- capability_static_kind: 189 ItemKind raw rules; distinguish positive raw stack, zero candidate and signed special encoding.
- capability_context: six contexts × all 11178 items; runtime observations NULL. Never automatically permit delivery.
- capability_evidence: pinned local Ghidra C file SHA256 and VA/RVA; not reverified machine code.
- item_capability_core: queryable joined static rules and nullable runtime fields.

## Native research anchors
- 025579BC calls 0232697C and inverts its result in the valid item path. Actual callers 0231C94C, 0242EE64, 024BFB68 set player+0x17CC bit 0x40 when 025579BC returns 1. This is a state update, not yet proof of pickup success or denial. Trace readers of bit 0x40, full-pocket/replace branch, field removal and save.
- 027FAA50 inventory write result does not establish atomic ground object removal.
- 01B04F00 -> 0277C210 -> 02813DF0 -> 02818BC0 -> 028BCB18 remains a player data filtering/lifecycle chain. Do not use CantTakeOver alone as an ordinary cross-island gate.
- 036DB890 constructs item records and checks catalog bits after consuming the two DLC link fields; resolve consumer branch and DLC entitlement separately.
- 5270EB75, 8221388C, DB1A2F07 and D61205D0 direct text XREF searches did not resolve consumers. Full ELF/XREF and relocation work pending.

## Reproduce
python ResourceCore/Database/build.py --root . --out artifacts/resource-core

CI builds a new SQLite copy from the immutable CategoryCore gzip, checks SHA/row counts/integrity/FKs and exports CSV plus manifest. Source ROM, CategoryCore outputs, and production web/bot code are untouched. No runtime result is manufactured.

## Next acceptance gates
ADB-003K: name the 56 group CRCs from original enums and localizations, verify native consumer.
ADB-014B: establish independent item identity for WherearenItemKind and distinguish catalog open from DLC permission.
ADB-006: trace host/guest pickup, capacity, field removal and save.
ADB-008: trace normal airport departure/return and persistence separately from migration.
ADB-010–013/017: integrate villager and recipe cores after separate source validation.
Release V1.0 only after scope and evidence gate review; preview can support catalog browsing, not automatic delivery decisions.

## 2026-11-28 — second acceptance and identity recovery

- CI 46159467208 built/uploaded artifact 15269197397 successfully; archive push rejected (fetch first) because documentation advanced the branch. Downloaded artifact ZIP SHA256 ff62a403981642f21cd27b091f41cfa16fd9d20c489efc366d1cea6a44f797bd and all manifest hashes match; SQLite integrity and FK checks pass. Fixed guarded rebase, CI 46161129904 success.
- 456 DLC acquisition-route candidates; 251/251 catalog links resolve both item IDs; 252 items positive stack raw, 118 special signed stack, 10808 zero-single candidates. Runtime permissions remain NULL.
- WherearenItemKind field FD9AF1E1 equals CRC32("ItemUniqueID u16"); 11178 unique IDs exactly match ItemParam, 0 matches by positional row. Explicit ID join now generated, no inferred positional association. 01242C70 and 0123EF30 consume signed hash -0x2650e1f; latter compares result against FUN_0277D6C4(param_2). Exact table binding and field-specific semantics still require original ELF validation.
- 51/56 raw group CRC keys (657/701 members) match candidate ASCII strings by CRC32. Remaining groups 71879236 (5),1109759743 (5),2154119502 (17),2337948507 (7),2541425820 (10). Candidate labels are not proof of recovered native enum definitions. No per-item manual tag assignment.
- 024B9644 reads player+17CC bit6; when valid item and bit set, converts record through 016E49E4 and calls 026738B0. This connects the state bit to an inventory insertion path, not yet a ground removal or save transaction proof. 02426E2C passes bit6 to 022BBADC and further descriptor; 024C46BC sets/clears bit6. Additional native C paths: derived/3.0.3/ghidra12.2/c/96/024b9644.c, /6e/02426e2c.c, /46/024c46bc.c, /2c/01242c70.c, /ef/0123ef30.c.
- Build commit 92c74d95c0161c931dbb1fbb8c6f5cc5bce443be adds unique DLC item identity view, CSV and 51 CRC key candidates. This supersedes the earlier row identity unresolved note once CI passes. No runtime verification or default branch merge.
