# HASH-008K 邮件附件与 DIY 交易券价格

[[ACNH303_HASH008J_MAIL_CATEGORY_DICTIONARY]] · [[ACNH303_HASH008H_RESIDUAL_DICTIONARY]]

## Accepted baseline
CI 45571223068 job 139058071235 PASS. 11178 item rows, 8726 match native CRC32 categories, 2452 share F4DBDF21. Native enum 79/79 and group bitmap 6/6 confirmed. SQLite integrity and foreign keys PASS.

## Two exact value-name matches
Actual CRC32("0")=F4DBDF21; CRC32("Unknown")=629B9E5B. The first is outside the 79-name native enum, the second occurs in 77/82 ItemAct rows, with five other MailBoxTypeA-E values confirmed by row labels. Keep "0" and "Unknown" as value-name candidates, not original header names, until native fallback/dispatch is observed. Do not merge "0" with "None".

## HHA attachment configuration
Original archived CSVs MessageCardSelectPresent (125 rows) and MessageCardSelectPresentSp (19 rows) contain ItemCategory u32 (368210C4), ItemCategoryGroup u32 (128A3D9B), TextKey stringMurmurHash (37571146), ProgramHandlingType u16 (E060D3CD), ItemRemakeType u8 (C233727B). Explicit special direct categories 34,35,36,37,41,42,49..55 and one group selector 1. Normal table uses group selector 2 once. Original group table rows 0/1/2 have unique IDs 0/3/4. Therefore group selectors 1/2 are row-index candidates, not ID3/4 proven. HHAHobby 3 matching items; NNpcSPANDailyFtr 6. Runtime item filtering, RNG, unlock gates not established. New script exports the exact nine item IDs/model names and 144 config rows, scans original ELF direct branch edges, adjacent MOVZ/MOVN+MOVK materializations and group descriptor references. All candidate references remain bounded static evidence. New CI pending.

## EFA5DDA4
[026253E0](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/53/026253e0.c) blob b489c41a1c2ae8f8e150eaebbd6a6fe8c21333aa: six material slots, amount multiplied by unit price, special unit price 400, else TradeBasePrice u16 or helper 01AED730. Select material sum when special material flag observed; otherwise TradeTicketBasePrice u32. Exact CRC32 of both known signatures checked. [02626600](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/66/02626600.c) calls calculator, valid result <=1000 returns true, >1000 returns EFA5DDA4 !=0. Invalid/missing false. Name alias TradeTicketAbove1000Condition, not original signature. Caller business context still pending. Raw preset price matrix: flag1 113 above1000, 0 <=1000; flag0 808 above1000, 3 <=1000. Raw preset is not necessarily dynamic calculated price. Local targeted CRC search 3087920 evaluations, no match. No original header names recovered; 28 residual hashes unchanged.
