# HASH-008H 双线恢复：原始字段名称与业务语义

返回 [知识库首页](README.md) · [专题索引](Research/Native-Research.md) · [研究路线](Research/Research-Roadmap.md)。

## 证据字典

[[ACNH303_HASH008G_DEFAULT_REMAKE]] · [[ACNH303_HASH008D_NATIVE_EVIDENCE]] · [[ACNH303_HASH008E_RECIPE_PLAYER]]

28 distinct unknown header hashes / 32 occurrences. Original-name and semantic grades are independent. `research/hash008h/residual_fields.json` retains ordinal, offset, width hint, alias, evidence grade, known native functions, and explicit null original name. No field name promoted.

| Grade | Count |
|---|---:|
| native_field_read | 5 |
| row_hypothesis | 18 |
| data_relation | 3 |
| native_slot_candidate | 1 |
| native_behavior | 1 |

## New actual evidence

HASH-008G run 45569184864 job 139051329184 PASS: actual STRH at ELF 0x0251FFE8 / 0x027AAB40 (Ghidra 0x0261FFE8 / 0x028AAB40), first masks 0xFFF8 then OR 1, second masks and OR CSET(env==1). AD0C787A static native behavior supported. Hemisphere source provenance still unknown.

630F2B53: all 10 nonempty values in 61 original CSV rows exactly join another same-table Name; unique match expected in binary CI. Not proof of runtime use: may be a planner display annotation. 8B1904B9: five mailbox values match CRC of label, 77 default unknown. E4361C86: three category lists, six hex tokens. ItemParam field 70E19913 candidate ItemMailAttachCategory.hshCstringRef at offset128; next binary join verifies counts and categories. Seven related category tables inspected without matching labels.

## Name route

Local JS actual CRC evaluations: 630F2B53 4,454,400; E4361C86 2,280,096; 8B1904B9 425,040; total 7,159,536; zero hits. Exact reproduction vocabulary and Python script committed. Repetitions counted. Existing 2,047 name candidates / 2,075 distinct hashes unchanged.

## Native binary CI

Validate original 28/32 BCSV definitions, profile all raw field spans, recompute NPC and mailbox joins, resolve mail category references against ItemParam; archive JSON and CRC search results. No dynamic verification or new original names claimed. Pending CI.
