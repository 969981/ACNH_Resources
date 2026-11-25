# HASH-008J 邮件附件原生分类完整转换字典

返回 [知识库首页](README.md) · [专题索引](Research/Native-Research.md) · [研究路线](Research/Research-Roadmap.md)。

[[ACNH303_HASH008I_MAIL_NPC_NATIVE]] · [[ACNH303_HASH008H_RESIDUAL_DICTIONARY]]

## 实际验收基线

[CI 45570889696](https://github.com/969981/ACNH_Resources/actions/runs/45570889696), job 139056959013 PASS. 以下79行直接从该次实际原版提取日志 CATEGORY_NAMES 转存，非推测。原始指针表 ELF 0x0491EB10/Ghidra 0x04A1EB10；所有指针通过重定位，名称经 NSO/ELF 字节对账。79 个名称、79 个唯一 Murmur3（seed 0）、79 个唯一 CRC32。原始拼写（例如 UiniqueFtr）保留。

| Index | Name | CRC32 | Murmur3 | ItemParam rows |
|---:|---|---|---|---:|
| 0 | None | DFA2AFF1 | B6EEDE09 | 8139 |
| 1 | BabyFtr | F9DAF17A | F26F9234 | 6 |
| 2 | ToyFtr | AAC7B958 | D6862BFA | 9 |
| 3 | CostumeClothes | 9F20026D | BA7FFE7C | 20 |
| 4 | BorderClothes | 6C08DE4B | CE185541 | 11 |
| 5 | FitnessFtr | 6DF3D6A8 | 2904FEF6 | 5 |
| 6 | SportsFtr | CE057CA6 | A2559986 | 10 |
| 7 | SchoolFtr | 599484FF | 7EA3F1F7 | 13 |
| 8 | SportClothes | 7A1965CA | DFC4D82C | 22 |
| 9 | OutdoorFtr | C3552DC9 | 3C1B420B | 12 |
| 10 | LongsleeveClothes | B576ECB9 | F46CAE44 | 17 |
| 11 | DarumaFtr | 3A59C5FA | 1ADDEBA9 | 1 |
| 12 | CoolHats | 8F444C19 | 95E8982F | 9 |
| 13 | CoolShoes | 193933D8 | F394970C | 12 |
| 14 | CoolUmbrella | EAFE61B5 | D0640C36 | 9 |
| 15 | CoolClothes | 62F73810 | 383A055C | 18 |
| 16 | TeatimeFtr | 8209697D | 119F4766 | 7 |
| 17 | StationeryFtr | 9C51E63C | B7457C67 | 2 |
| 18 | TidyClothes | 5E2A388D | 41E26C40 | 10 |
| 19 | KitchenFtr | 0897C266 | 58318A66 | 11 |
| 20 | AdultGlasses | 1640C778 | 59A41CE1 | 20 |
| 21 | LightFtr | DC9F68C8 | CBDDB5DF | 8 |
| 22 | BathGoods | F42C8731 | 5F93AC1F | 4 |
| 23 | CardiganClothes | 180820B0 | 401F1A9C | 11 |
| 24 | PlantsFtr | F8B7DDBA | 439ADDBF | 7 |
| 25 | FlowerSeeds | D140AA0E | B23EBC47 | 0 |
| 26 | CuteUmbrella | D54A31BE | 6A7719DB | 0 |
| 27 | CuteClothes | 63A1EEB6 | 469D9A43 | 20 |
| 28 | TeddyFtr | 056F6F50 | E130BE17 | 5 |
| 29 | CuteFtr | 32853046 | 1DF0848E | 4 |
| 30 | DailyFtr | 01752277 | 9BD94F1A | 0 |
| 31 | BadClothes | 04D4D623 | 75E48FE9 | 15 |
| 32 | MusicFtr | D8A298F7 | 1FC3DD9F | 5 |
| 33 | RockFtr | 637EBA60 | 34EB0AC3 | 8 |
| 34 | HHA1 | B9D10DC8 | F6FD380E | 0 |
| 35 | HHA2 | 20D85C72 | 8AEDFAF8 | 3 |
| 36 | HHA3 | 57DF6CE4 | 7DF58AE6 | 3 |
| 37 | HHA4 | C9BBF947 | BE986212 | 3 |
| 38 | HHA5_1 | 57BF63A8 | 5B8F9AA7 | 1 |
| 39 | HHA5_2 | CEB63212 | 18445B71 | 1 |
| 40 | HHA5_3 | B9B10284 | F9C5FAD7 | 1 |
| 41 | HHA6 | 27B5986B | 7E2ADC57 | 3 |
| 42 | HHA7 | 50B2A8FD | D071CE3E | 3 |
| 43 | HHA3_NPC | 763FD4F0 | 3998FCAC | 3 |
| 44 | HHA4_NPC | C41F08E0 | 8C37B3EE | 3 |
| 45 | HHA5_1_NPC | C95C1FEF | B0ED7721 | 1 |
| 46 | HHA5_2_NPC | 8EFC653F | 8B0FFE34 | 1 |
| 47 | HHA5_3_NPC | B39C4C8F | F17DA80C | 1 |
| 48 | HHA6_NPC | BEDF5B80 | FC26341F | 3 |
| 49 | HHA_FixesPoints1 | F0026737 | A3137B77 | 1 |
| 50 | HHA_FixesPoints2 | 690B368D | 9227DA3A | 1 |
| 51 | HHA_FixesPoints3 | 1E0C061B | 9D6657A7 | 1 |
| 52 | HHA_FixesPoints4 | 806893B8 | FB76B1AF | 1 |
| 53 | HHA_FixesPoints5 | F76FA32E | 6B692E3C | 1 |
| 54 | HHA_FixesPoints6 | 6E66F294 | 91D078B3 | 1 |
| 55 | HHA_FixesPoints7 | 1961C202 | 28C32A27 | 1 |
| 56 | CoolFurniture | 5FA78220 | 048BCE2B | 16 |
| 57 | Clock | 7FBA9196 | 5A5EC3F6 | 7 |
| 58 | LittleFtr | 48EA242F | 9B654F84 | 10 |
| 59 | RoughShoes | 809B4950 | 51484805 | 5 |
| 60 | UiniqueFtr | EBC34240 | BEBD7169 | 5 |
| 61 | ColorfulClothes | 3DFC47E5 | B216F90F | 14 |
| 62 | ShoulderBag | BC389388 | 1C9F68C1 | 9 |
| 63 | NormalGlasses | F8A1D035 | 70C5B38D | 13 |
| 64 | KoDoll | 158EF13F | 60AF0CD1 | 2 |
| 65 | JuicyEquip | 7C61D3CD | 03A4CA8C | 15 |
| 66 | BathItem | 84C77BCF | 0AAA5D4B | 11 |
| 67 | BeachFtr | B5F32AA5 | 7AD6139F | 6 |
| 68 | FairyShoes | B064F563 | 98257ACD | 12 |
| 69 | RockBottoms | 1B3B9A12 | 4E02F6C8 | 12 |
| 70 | RockBoots | EBA99ABD | F556CF92 | 13 |
| 71 | Fossil | ACA78CA8 | 78AC5F9A | 11 |
| 72 | SleepGoods | 43D986E5 | 0C79E4CF | 10 |
| 73 | ToolItem | F2BD6CA6 | D4A4F10D | 10 |
| 74 | PlayAtHome | BD8E4A67 | 03E93CDA | 10 |
| 75 | Handicraft | 82E283B1 | 2472D23B | 9 |
| 76 | LivingFtr | B0F4BFA8 | 3119E9B4 | 13 |
| 77 | Headgear | C3CEE486 | 54F6223E | 12 |
| 78 | OneRoom_Party | DB562C99 | 6BBF0B0A | 14 |

## 原版分组

| ID | Group | Categories | Bitmap (10 bytes) | Exact CRC item matches |
|---:|---|---|---|---:|
| 0 | None | None | 01000000000000000000 | 8139 |
| 3 | HHAHobby | HHA5_1, HHA5_2, HHA5_3 | 00000000c00100000000 | 3 |
| 4 | NNpcSPANDailyFtr | HHA2, HHA4 | 00000000280000000000 | 6 |

## ItemParam coverage

11,178 items, 76 distinct raw category values; 75 of 79 native category names used (four unused: FlowerSeeds, CuteUmbrella, DailyFtr, HHA1). 8,726 rows match CRC32, including 8,139 None and 587 other matched rows. 2,452 rows share one unmapped raw value; do not equate it with None before checking the actual distribution. No direct Murmur3 match. Group 0 count is category correspondence, not proof that all those items are eligible mail gifts. Group 3 matches three items and group 4 six; downstream reward selection conditions not yet analyzed.

## Machine-readable deliverables

- research/hash008j/mail_category_dictionary.json: actual 79 names and 3 group bitmaps.
- research/hash008j/mail_category_dictionary.csv: native conversion table.
- Scripts/acnh303_hash008j.py: rerun original extraction, assert pinned dictionary, export all 11178 per-item rows, unknown raw value distribution, group item IDs, and SQLite normalized tables/views. New CI pending. Original field E4361C86 name remains unknown; business semantics validated. No original header count change.
