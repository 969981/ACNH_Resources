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
