# HASH-008I 邮件附件分类及 NPC 互动目标原生消费者

[[ACNH303_HASH008H_RESIDUAL_DICTIONARY]]

## Accepted baseline
CI 45570433861 job 139055461173 PASS: 28 hashes/32 occurrences/23 source tables; 10 exact NPC target joins; 5 mailbox enum labels; 7159536 CRC evaluations, zero header hits. Direct mail list hex token -> ItemParam 70E19913 raw value join 0/6, disproves direct equality hypothesis.

## 630F2B53
Pinned archived Ghidra source acabc03099dff264184465c7fd9c3b298dd1fcda:
- [FUN_01FD5450](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/54/01fd5450.c), blob 61275e9a95154f554dfd6b1f78790891b39c9931: cache pointer PTR_DAT_04BC23C8, slot15 (+0x3C). Reads string then compares against 61 entries at PTR_DAT_04BC23B8+0x938+8*i, uses resulting index in NPC search callback, outputs result.
- [FUN_01FEAB40](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/ab/01feab40.c), blob 7633ac0accccec0de42a2d29731a749a35e512a9: same slot, same string-to-index lookup, compares target object +0x123BC against matched index and calls FUN_01FE5990 on equality.
- Static semantic behavior: NPC interaction target action name resolved at runtime, not a planner-only note. 10/10 original string relations authenticated by CI. Original header name unknown; target index table's actual pointers still to authenticate.

## E4361C86
- [FUN_01ABA7E0](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/a7/01aba7e0.c), blob 7705adf231999ab3e7f1362c3ca0bd261b67d4e8: descriptor hash E4361C86; cache slot1 at Ghidra 0x05300748, cache base 0x05300744; clears 10-byte record, splits at pipe, uses formatter DAT_04067CC6 and FUN_038D2C30 to parse numeric token, passes value to FUN_01ABAEE0.
- [FUN_01ABAEE0](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/ae/01abaee0.c), blob 7265b680b39571d7e4ce487191083da9a8a89261: 79 names at Ghidra 0x04A1EB10, computes FUN_006BD550(name,0), maps value to original index, sets bit index%8 in byte index/8 of 10-byte record.
- [FUN_006BD550](https://github.com/969981/ACNH_Resources/blob/acabc03099dff264184465c7fd9c3b298dd1fcda/derived/3.0.3/ghidra12.2/c/d5/006bd550.c): MurmurHash3 x86_32 seed0, constants match. Local actual calculation Murmur3("None",0)=B6EEDE09, equals original group0 token. Thus these are not ordinary CRC32 value labels. Field headers still CRC32.
- New CI recovers 79 names directly from authenticated NSO relocation pointer table and compares ELF/NSO bytes, checks both CRC32 and Murmur3 category values against ItemParam 70E19913. Actual 79-name extraction, 6 token joins and reconstructed bitmap outputs pending CI. Numeric formatter literal and exact parser input are not yet machine-verified.
- E4361C86 semantic alias MailAttachmentCategoryMurmurHashList; native behavior supported. Original name remains unknown.

No new header signature promoted. Mailbox dispatch remains open. Next use original 79 category names and NPC table to drive targeted name reconstruction and verify bitmap consumers.
