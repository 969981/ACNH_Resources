# ResourceCore V1 — behavior evidence preview
Baseline catalog CI 46161843409 passed, archive 779aec16998c8abfa8e71e48776fad5f188d1137. Base SQLite SHA256 a9232c5b82fa8ff33f62cedd4712e1ea2271692979cf7fd77bcd5f109fd989cb. 924 recipe outputs and 1809 material links all resolve; 417 villagers, 5838 names, 1668 image references.

## Quantity
01AF0020 reads signed MultiHoldMaxNum and requires >=2 plus instance-state checks. 01AF02D0 returns 1 if guard false, otherwise (u16 at wrapper +0xC +1)&255, falls back to 1 if above signed limit. This expression alone does not exclude wrap-to-zero; wrapper and raw-record mapping and valid instance range require independent verification. 01AEDD20/01AEDF10 use runtime category 0x59 and Price 718B024D, lookup exact requested amount, clear trailing fields, fallback 0xA48. CSV row 0x59 is Turnip, row 0x86 Money; runtime index binding not assumed solely from CSV order. 01AED4B8 dispatches 0x86 to 01AED730, which uses price times quantity with conditional /5 branch. Do not conflate item value and arbitrary denomination encoding. No runtime verification.

## Villager
Original NNPC_Reaction_Moving blob 0bb4e5859add49c6ca4872cd34152a154ee69298. Enumerate all case edges and same-flow subflows: node 111 case0/1 neither reaches node62 NpcFixedInducement; node112 case0 ->109 -> Free_Moveout no reach, case1 ->90 reaches node62; node113 case0 ->93 no reach, case1 ->23 reaches node62. Case value polarity requires actual native query implementation; **do not assume case1 means true** or derive live eligibility. This is graph reachability, not a proof that all conditions pass. 5 contexts per villager, eligibility NULL. Campsite and DLC amiibo remain separate.

## Pickup
024B9644 bit6 path calls 026738B0 then sets player-related state 0x80000, without inspecting call return on that path. 02673A50 checks 027FAA50 success before 02649BF0 / 02674040 or 02673DE0 / 02674420 and returns the success bit. Thus inventory result exists but field deletion and network persistence not proven; do not treat animation state as transactional success. Need inspect downstream field/replication and actual save. Source-checked evidence exported with SHA256, static only.

## Build
python ResourceCore/Database/build_behavior.py --root . --out artifacts/behavior
New output ResourceCore/Database/behavior-output, previous catalog remains fixed. All item and villager runtime permissions remain NULL. No production changes.
