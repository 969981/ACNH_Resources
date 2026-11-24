#!/usr/bin/env python3
"""Read-only authenticated instruction graph and Obsidian export; no runtime calls."""
import argparse, hashlib, json
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_IMM
import acnh303_r100_nso_decode as dec
from acnh303_round11_elf_xref import parse_elf, get_bytes_va

BASE = 0x100000
# Ghidra VA, bounded reachability budget (not claimed function size).
ENTRIES = {
    0x022c04e0: ("Scene item grid read/write or message dispatch; static audit", 0x190),
    0x022c0670: ("Scene item grid read/write or message dispatch; static audit", 0x1420),
    0x022c2b40: ("Scene item grid read/write or message dispatch; static audit", 0x190),
    0x022c2cd0: ("Scene item grid read/write or message dispatch; static audit", 0x710),
    0x022c3a44: ("Scene item grid read/write or message dispatch; static audit", 0x7cc),
    0x022c4210: ("Scene item grid read/write or message dispatch; static audit", 0x23c),
    0x011f3880: ("Scene item grid read/write or message dispatch; static audit", 0x300),
    0x011f3520: ("Scene item grid read/write or message dispatch; static audit", 0x360),
    0x01a50970: ("Scene item grid read/write or message dispatch; static audit", 0x174),
    0x01a50cb0: ("Scene item grid read/write or message dispatch; static audit", 0xc0),
    0x01a50ae4: ("Scene item grid read/write or message dispatch; static audit", 0x1cc),
    0x01a5033c: ("Scene item grid read/write or message dispatch; static audit", 0x108),
    0x012e5290: ("Scene item grid read/write or message dispatch; static audit", 0x2a4),
    0x012e5734: ("Scene item grid read/write or message dispatch; static audit", 0x13c),
    0x012e5870: ("Scene item grid read/write or message dispatch; static audit", 0x284),
    0x012e5af4: ("Scene item grid read/write or message dispatch; static audit", 0x32c),
    0x012e5e20: ("Scene item grid read/write or message dispatch; static audit", 0x400),
    0x012e4f58: ("Scene item grid read/write or message dispatch; static audit", 0x338),
    0x012e4578: ("Scene item grid read/write or message dispatch; static audit", 0x100),
    0x01a4f798: ("Scene item grid read/write or message dispatch; static audit", 0x300),
    0x0122a4e0: ("Scene item grid read/write or message dispatch; static audit", 0x310),
    0x01b9cbc0: ("Choice generation mode dispatcher", 0x3000),
    0x01b9cd50: ("Sequential choice record ID and text-label publication", 0x3000),
    0x01b9d0e0: ("Available MSBT choice labels bitmap", 0x3000),
    0x01b9d2d0: ("Choice record generation from available labels", 0x3000),
    0x01b970f0: ("Message attribute schema classification", 0x3000),
    0x01b9735c: ("Message attribute schema dispatch", 0x3000),
    0x01b97400: ("Message attribute auxiliary enum", 0x3000),
    0x01b977e0: ("Schema one MSBT attribute extraction", 0x3000),
    0x01b97a90: ("Schema two attribute extraction", 0x3000),
    0x01b97d40: ("Schema three attribute extraction", 0x3000),
    0x01b97ff0: ("Schema five attribute extraction", 0x3000),
    0x01b982a0: ("Schema six attribute extraction", 0x3000),
    0x01b98550: ("Schema seven attribute extraction", 0x3000),
    0x01b9be60: ("Choice record text payload materialization", 0x3000),
    0x03d53db0: ("MSBT archive resource lookup", 0x3000),
    0x038f40b0: ("MSBT label hash lookup", 0x3000),
    0x006f50a0: ("Message name and label text retrieval", 0x3000),
    0x03d4cd40: ("Message text archive lookup", 0x3000),
    0x01bea210: ("Worker resource-name and label preparation", 0x3000),
    0x01ba8e98: ("Worker bounded processing counter", 0x3000),
    0x01c08808: ("Text worker processing stage three", 0x3000),
    0x01b96f60: ("Worker secondary output processing", 0x3000),
    0x01b957f0: ("Worker auxiliary completion check", 0x3000),
    0x03b0db80: ("Message attribute label presence predicate", 0x3000),
    0x03b0d9a0: ("Message text label lookup", 0x3000),
    0x02fac174: ("SelectTalkSeq start and result sentinel reset", 0x4000),
    0x02facd58: ("SelectTalkSeq callback descriptor 0", 0x4000),
    0x02facd5c: ("SelectTalkSeq callback descriptor 1", 0x4000),
    0x02facd60: ("SelectTalkSeq callback descriptor 2", 0x4000),
    0x02faceb8: ("SelectTalkSeq callback descriptor 3", 0x4000),
    0x02fac4b4: ("Select page callback 0", 0x4000),
    0x02fac524: ("Select page callback 1", 0x4000),
    0x02fac594: ("Select page callback 2", 0x4000),
    0x02fac604: ("Select page callback 3", 0x4000),
    0x02fac674: ("Select page callback 4", 0x4000),
    0x02fac6e4: ("Select page callback 5", 0x4000),
    0x02fac754: ("Select page callback 6", 0x4000),
    0x02fae02c: ("SelectTalkSeq vtable 268", 0x4000),
    0x02fae060: ("SelectTalkSeq vtable 270", 0x4000),
    0x01bea4e8: ("Choice text worker prepare", 0x4000),
    0x01bea9c8: ("Choice text worker progression", 0x4000),
    0x01c05a98: ("Choice object vtable 40", 0x4000),
    0x01c05ae4: ("Choice object vtable 60", 0x4000),
    0x0138d104: ("Group zero candidate handler relocation target; static audit only", 0x30),
    0x0138d100: ("Group zero candidate handler relocation target; static audit only", 0x4),
    0x0138cf74: ("Group zero candidate handler relocation target; static audit only", 0x90),
    0x022c0370: ("Group zero candidate handler relocation target; static audit only", 0x300),
    0x022c543c: ("Group zero candidate handler relocation target; static audit only", 0x1b14),
    0x022c6f50: ("Group zero candidate handler relocation target; static audit only", 0x9f0),
    0x022c7940: ("Group zero candidate handler relocation target; static audit only", 0x1408),
    0x022c8d48: ("Group zero candidate handler relocation target; static audit only", 0x408),
    0x022c9150: ("Group zero candidate handler relocation target; static audit only", 0x98),
    0x022c91e8: ("Group zero candidate handler relocation target; static audit only", 0x2cc),
    0x022c94b4: ("Group zero candidate handler relocation target; static audit only", 0x600),
    0x01c04e38: ("Conversation reset seven records and seven choice components", 0x4000),
    0x03d7dd80: ("Display object property refresh", 0x4000),
    0x01bc1880: ("Message resource handle unregister", 0x4000),
    0x01bc1730: ("Message resource handle register or lookup", 0x4000),
    0x01bc1250: ("Message resource registry construction", 0x4000),
    0x01bae480: ("Message resource descriptor binding", 0x4000),
    0x01bc0860: ("Resource descriptor lookup", 0x4000),
    0x01bc09d8: ("Resource descriptor insertion", 0x4000),
    0x01b9c210: ("Seven choice record base constructor", 0x4000),
    0x01bfb6b4: ("Upper choice continuation and state selection", 0x4000),
    0x01bfd8a4: ("Choice continuation context consumer", 0x4000),
    0x01c056a0: ("Choice controller vtable +10", 0x4000),
    0x01c057f8: ("Choice controller vtable +18", 0x4000),
    0x01c05a7c: ("Choice controller vtable +28", 0x4000),
    0x01c05808: ("Choice controller vtable +20", 0x4000),
    0x01be5d00: ("Message resource category consumer", 0x4000),
    0x01be14b0: ("Message resource descriptor parse", 0x4000),
    0x01bdf2bc: ("Message text processing", 0x4000),
    0x01bf87d8: ("Upper Ready entry", 0x4000),
    0x01bf8800: ("Upper Ready update", 0x4000),
    0x01bf9cd8: ("Upper Ready exit", 0x4000),
    0x01bf9cdc: ("Upper In entry", 0x4000),
    0x01bf9d74: ("Upper In update", 0x4000),
    0x01bf9f30: ("Upper In exit", 0x4000),
    0x01bf9f74: ("Upper Play entry", 0x4000),
    0x01bf9fb0: ("Upper Play update", 0x4000),
    0x01bfa300: ("Upper Play exit", 0x4000),
    0x01bfa30c: ("Upper Fermata entry", 0x4000),
    0x01bfa310: ("Upper Fermata update", 0x4000),
    0x01bfa394: ("Upper Fermata exit", 0x4000),
    0x01bfa398: ("Upper Pause entry", 0x4000),
    0x01bfa4a4: ("Upper Pause update", 0x4000),
    0x01bfa834: ("Upper Pause exit", 0x4000),
    0x01bfaa0c: ("Upper Stand entry", 0x4000),
    0x01bfaa48: ("Upper Stand update", 0x4000),
    0x01bfab5c: ("Upper Stand exit", 0x4000),
    0x01bfab98: ("Upper Suspend entry", 0x4000),
    0x01bfab9c: ("Upper Suspend update", 0x4000),
    0x01bfabcc: ("Upper Suspend exit", 0x4000),
    0x01394338: ("Request record lifecycle or registered state callback", 0x30c),
    0x01394644: ("Request record lifecycle or registered state callback", 0x4),
    0x01394648: ("Request record lifecycle or registered state callback", 0x4),
    0x0139464c: ("Request record lifecycle or registered state callback", 0x4),
    0x01394650: ("Request record lifecycle or registered state callback", 0x4),
    0x01394654: ("Request record lifecycle or registered state callback", 0x1dc),
    0x01394830: ("Request record lifecycle or registered state callback", 0x4),
    0x01394834: ("Request record lifecycle or registered state callback", 0x4),
    0x01394838: ("Request record lifecycle or registered state callback", 0x70),
    0x013948a8: ("Request record lifecycle or registered state callback", 0x4),
    0x013948ac: ("Request record lifecycle or registered state callback", 0x4),
    0x013948b0: ("Request record lifecycle or registered state callback", 0x110),
    0x013949c0: ("Request record lifecycle or registered state callback", 0x4),
    0x013949c4: ("Request record lifecycle or registered state callback", 0x4),
    0x013949c8: ("Request record lifecycle or registered state callback", 0x384),
    0x01394d4c: ("Request record lifecycle or registered state callback", 0x4),
    0x01394d50: ("Request record lifecycle or registered state callback", 0xb4),
    0x01394e04: ("Request record lifecycle or registered state callback", 0x7c),
    0x01394e80: ("Request record lifecycle or registered state callback", 0x4),
    0x01394e84: ("Request record lifecycle or registered state callback", 0x210),
    0x01395094: ("Request record lifecycle or registered state callback", 0x12c),
    0x013951c0: ("Request record lifecycle or registered state callback", 0x18c),
    0x0139543c: ("Request record lifecycle or registered state callback", 0xac),
    0x013954e8: ("Request record lifecycle or registered state callback", 0x16c),
    0x0138f8c0: ("Request record lifecycle or registered state callback", 0x30c),
    0x0138ef70: ("Request record lifecycle or registered state callback", 0x950),
    0x013930e4: ("Request record lifecycle or registered state callback", 0x1ac),
    0x01393290: ("Request record lifecycle or registered state callback", 0x1c8),
    0x01396a60: ("Request record lifecycle or registered state callback", 0x330),
    0x01396d90: ("Request record lifecycle or registered state callback", 0xec),
    0x01396e7c: ("Request record lifecycle or registered state callback", 0x3ac),
    0x01397228: ("Request record lifecycle or registered state callback", 0x24),
    0x0139724c: ("Request record lifecycle or registered state callback", 0x84),
    0x013972d0: ("Request record lifecycle or registered state callback", 0xc),
    0x013972dc: ("Request record lifecycle or registered state callback", 0xa4),
    0x01397380: ("Request record lifecycle or registered state callback", 0x24),
    0x013973a4: ("Request record lifecycle or registered state callback", 0x30),
    0x013973d4: ("Request record lifecycle or registered state callback", 0x158),
    0x0139752c: ("Request record lifecycle or registered state callback", 0xc),
    0x01397538: ("Request record lifecycle or registered state callback", 0x24),
    0x0139755c: ("Request record lifecycle or registered state callback", 0x100),
    0x01bdff98: ("Message and conversation manager allocation and root publication", 0x2000),
    0x01bdfde4: ("Message manager root destructor", 0x800),
    0x01bf7564: ("Message manager child allocations and controller publication", 0x3000),
    0x01c03904: ("Conversation controller 0x40 construction", 0x1000),
    0x01bf83ac: ("Upper conversation ten-state registration", 0x1000),
    0x01bfc554: ("Secondary message controller 0x5ab8 construction", 0x4000),
    0x01bf7e20: ("Embedded conversation owner destruction", 0x1000),
    0x01bf7ffc: ("Upper conversation state reset", 0x1000),
    0x01ba83f4: ("Message owner active context publication", 0x1000),
    0x01bf828c: ("Message active context cleanup", 0x1000),
    0x01bf87cc: ("Upper conversation state Idle entry anchor", 0x1000),
    0x01bf87d0: ("Upper conversation state Idle update anchor", 0x1000),
    0x01bf87d4: ("Upper conversation state Idle exit anchor", 0x1000),
    0x01bfa838: ("Upper conversation state Out entry anchor", 0x1000),
    0x01bfa8e4: ("Upper conversation state Out update anchor", 0x1000),
    0x01bfa9f0: ("Upper conversation state Out exit anchor", 0x1000),
    0x01bfabd0: ("Upper conversation state Choice entry anchor", 0x1000),
    0x01bfac9c: ("Upper conversation state Choice update anchor", 0x1000),
    0x01bfb1c4: ("Upper conversation state Choice exit anchor", 0x1000),
    0x02581a1c: ("Placement request object constructor or relocation-backed virtual target", 0xe4),
    0x02581b00: ("Placement request object constructor or relocation-backed virtual target", 0x900),
    0x024f9b6c: ("Placement request object constructor or relocation-backed virtual target", 0x8e0),
    0x01393924: ("Placement request object constructor or relocation-backed virtual target", 0x84),
    0x013939a8: ("Placement request object constructor or relocation-backed virtual target", 0x60),
    0x01393a08: ("Placement request object constructor or relocation-backed virtual target", 0x218),
    0x022b9a74: ("Placement request object constructor or relocation-backed virtual target", 0xc00),
    0x01391074: ("Placement request record construction or dispatch audit", 0x114),
    0x01393c20: ("Placement request record construction or dispatch audit", 0x260),
    0x01394080: ("Placement request record construction or dispatch audit", 0x1f4),
    0x013919f8: ("Placement request record construction or dispatch audit", 0x90),
    0x01391948: ("Placement request record construction or dispatch audit", 0xb0),
    0x013964cc: ("Placement request record construction or dispatch audit", 0x11c),
    0x0139534c: ("Placement request record construction or dispatch audit", 0x140),
    0x013966b4: ("Placement request record construction or dispatch audit", 0x18c),
    0x013922f4: ("Placement request record construction or dispatch audit", 0x180),
    0x01393e80: ("Placement request record construction or dispatch audit", 0x200),
    0x022ac8a0: ("Placement request record construction or dispatch audit", 0x360),
    0x022ac180: ("Placement request record construction or dispatch audit", 0x720),
    0x022acc00: ("Placement request record construction or dispatch audit", 0x540),
    0x022ab010: ("Placement request record construction or dispatch audit", 0x214),
    0x022ab224: ("Placement request record construction or dispatch audit", 0x200),
    0x01392f28: ("Placement request record construction or dispatch audit", 0x530),
    0x01395654: ("Placement request record construction or dispatch audit", 0x780),
    0x01395dd4: ("Placement request record construction or dispatch audit", 0x3dc),
    0x013961b0: ("Placement request record construction or dispatch audit", 0x1a8),
    0x01396358: ("Placement request record construction or dispatch audit", 0x174),
    0x01396898: ("Placement request record construction or dispatch audit", 0x1c8),
    0x01391f64: ("Placement request record construction or dispatch audit", 0x120),
    0x01391740: ("Placement request record construction or dispatch audit", 0x208),
    0x0138dd70: ("Placement request record construction or dispatch audit", 0x11c),
    0x01c041a4: ("Conversation controller selects parent MessageWindow current sequence", 0x4000),
    0x01b97520: ("Conversation style selector 0..46 mapping", 0x4000),
    0x01c043c8: ("Conversation controller selected sequence presentation consumer", 0x4000),
    0x01c027a0: ("Conversation controller initialization", 0x4000),
    0x03868c7c: ("Active child component removal", 0x4000),
    0x038693c0: ("Active child component insertion", 0x4000),
    0x03869720: ("Child activation propagation", 0x4000),
    0x03869930: ("Child deactivation propagation", 0x4000),
    0x0386aeb4: ("Factory active component removal", 0x4000),
    0x0386abe0: ("Factory active component insertion", 0x4000),
    0x0277e688: ("Placement eligibility or notification consumer", 0x110),
    0x01b04850: ("Placement eligibility or notification consumer", 0x260),
    0x014bda70: ("Placement eligibility or notification consumer", 0x200),
    0x01fa5530: ("Placement eligibility or notification consumer", 0x350),
    0x01fb20f0: ("Placement eligibility or notification consumer", 0x8c0),
    0x01fb29b0: ("Placement eligibility or notification consumer", 0x394),
    0x02fa9a70: ("MessageWindow state0 update", 0x2000),
    0x02fa9a80: ("MessageWindow state1 entry", 0x2000),
    0x02fa9bec: ("MessageWindow state1 update", 0x2000),
    0x02fa9bf0: ("MessageWindow state2 entry", 0x2000),
    0x02fa9de0: ("MessageWindow state2 update", 0x2000),
    0x02fa9e84: ("MessageWindow state3 entry", 0x2000),
    0x02fa9e88: ("MessageWindow state3 update", 0x2000),
    0x02fa9e8c: ("MessageWindow state4 entry", 0x2000),
    0x02fa9ea4: ("MessageWindow state4 update", 0x2000),
    0x02fa9f28: ("MessageWindow state5 entry", 0x2000),
    0x02fa9f2c: ("MessageWindow state5 update", 0x2000),
    0x0386bc30: ("Registry prepare update and request consumption scheduler", 0x2000),
    0x0386be70: ("Registry subsequent lifecycle phase", 0x2000),
    0x0386bff0: ("Registry subsequent lifecycle phase", 0x2000),
    0x0386a980: ("Registry active factory preparation", 0x2000),
    0x0386cf04: ("Registry visitor slot20", 0x2000),
    0x0386cf08: ("Registry visitor slot48", 0x2000),
    0x0386cf0c: ("Registry visitor slot50", 0x2000),
    0x01d53240: ("Upper descriptor dispatch consumer", 0x2000),
    0x02fa88bc: ("MessageWindow +E0", 0x4000),
    0x02fa88f0: ("MessageWindow +E8 idle", 0x4000),
    0x02fa8910: ("MessageWindow +F0", 0x4000),
    0x02fa8920: ("MessageWindow +F8", 0x4000),
    0x02fa977c: ("MessageWindow +1B8", 0x4000),
    0x02fa97a0: ("MessageWindow +1C0", 0x4000),
    0x02fa97c4: ("MessageWindow +1C8", 0x4000),
    0x02fa97f4: ("MessageWindow state registration", 0x4000),
    0x02faa13c: ("MessageWindow +218", 0x4000),
    0x02faa168: ("MessageWindow +220", 0x4000),
    0x02faa194: ("MessageWindow +228", 0x4000),
    0x02faa418: ("MessageWindow +240", 0x4000),
    0x02faa4a0: ("MessageWindow +248", 0x4000),
    0x02faa244: ("MessageWindow +250", 0x4000),
    0x02faa248: ("MessageWindow +258", 0x4000),
    0x02faa4f8: ("MessageWindow +260", 0x4000),
    0x01d53060: ("Upper MessageWindow predicate consumer", 0x4000),
    0x01d52c00: ("Caller of upper UI predicate", 0x4000),
    0x033862f0: ("UI current sequence page consumer", 0x4000),
    0x01be0874: ("Upper MessageWindow acquisition", 0x4000),
    0x02fa32f4: ("TalkSeq +130", 0x4000),
    0x02fae82c: ("TalkSeq +208", 0x4000),
    0x02fae8fc: ("TalkSeq +210", 0x4000),
    0x02faf4fc: ("TalkSeq +238", 0x4000),
    0x02faf60c: ("TalkSeq +240", 0x4000),
    0x02faf9f8: ("TalkSeq +248", 0x4000),
    0x02facf70: ("SelectTalkSeq +168", 0x4000),
    0x02fad000: ("SelectTalkSeq +178", 0x4000),
    0x02fabb18: ("Select page +1B0", 0x4000),
    0x02fa2848: ("Talk page +C8 resource initialization", 0x4000),
    0x02fab618: ("Select page +C8 resource initialization", 0x4000),
    0x02fab9f0: ("Select page +D8", 0x4000),
    0x0386c170: ("Registry destructor", 0x4000),
    0x01a59500: ("Context menu resource initialization or candidate list generator", 0xee8),
    0x01a5a3e8: ("Context menu resource initialization or candidate list generator", 0x3fc8),
    0x01a60310: ("Context menu resource initialization or candidate list generator", 0x110),
    0x01ab38c0: ("Context menu resource initialization or candidate list generator", 0x350),
    0x01ab3ca4: ("Context menu resource initialization or candidate list generator", 0xc),
    0x01ab3dd0: ("Context menu resource initialization or candidate list generator", 0xd1c),
    0x01ab4d40: ("Context menu resource initialization or candidate list generator", 0x780),
    0x0317e7e0: ("Context menu resource initialization or candidate list generator", 0x3294),
    0x031821a0: ("Context menu resource initialization or candidate list generator", 0x6c),
    0x03182b0c: ("Context menu resource initialization or candidate list generator", 0x78),
    0x03182ef0: ("Context menu resource initialization or candidate list generator", 0xf8),
    0x02fa3588: ("TalkSeq VTable +1B8 request producer", 0x1800),
    0x02fa35ac: ("TalkSeq VTable +1C0 request producer", 0x1800),
    0x02fa35d0: ("TalkSeq VTable +1C8 request producer", 0x1800),
    0x02facedc: ("SelectTalkSeq VTable +1B8 request producer", 0x1800),
    0x02facf00: ("SelectTalkSeq VTable +1C0 request producer", 0x1800),
    0x02facf24: ("SelectTalkSeq VTable +1C8 request producer", 0x1800),
    0x02c0d134: ("Dialogue event reset VTable +1E8", 0x1800),
    0x02c0d120: ("Dialogue state update VTable +1A0", 0x1800),
    0x02fa41a0: ("TalkSeq VTable +250", 0x1800),
    0x02fa421c: ("TalkSeq VTable +258", 0x1800),
    0x02faf604: ("TalkSeq VTable +260", 0x1800),
    0x02faee88: ("TalkSeq VTable +230", 0x1800),
    0x02fa4210: ("TalkSeq VTable +218", 0x1800),
    0x02faedf4: ("TalkSeq VTable +228", 0x1800),
    0x02fadf5c: ("SelectTalkSeq VTable +218", 0x1800),
    0x02bf0cd4: ("Talk page +148 appearance predicate candidate", 0x1800),
    0x02bf0d00: ("Talk page +150 play predicate candidate", 0x1800),
    0x02bf0c48: ("Talk page +258 disappear request", 0x1800),
    0x02bf0bbc: ("Talk page +250 appear request", 0x1800),
    0x02bf0c18: ("SelectTalk page +128 close request", 0x1800),
    0x0386b5e4: ("Registry scheduler relocation entry", 0x3000),
    0x0386bd30: ("interior anchor: prepare permission caller", 0x1800),
    0x0386bdf0: ("interior anchor: guarded update caller", 0x1800),
    0x0386b434: ("Registry lifecycle slot", 0x1800),
    0x0386b4a0: ("Registry lifecycle slot", 0x1800),
    0x0386b510: ("Registry lifecycle slot", 0x1800),
    0x0386b580: ("Registry lifecycle slot", 0x1800),
    0x01af5b80: ("Menu resource boolean field lookup", 0x300),
    0x03868db0: ("Component gate164 computation and propagation", 0x2000),
    0x03868ae0: ("Gate164 guarded recursive component update", 0x2000),
    0x03868eb8: ("Component lifecycle finalization and gate clear", 0x2000),
    0x03868800: ("Recursive component lifecycle finalizer", 0x2000),
    0x0386a3a0: ("Factory global registration constructor", 0x2000),
    0x02c0bfcc: ("Shared UI factory allocation", 0x2000),
    0x0339a994: ("Named factory allocation and registration", 0x2000),
    0x0346ac8c: ("Videogame factory allocation", 0x2000),
    0x03869260: ("Component lifecycle registration", 0x2000),
    0x038694bc: ("Component lifecycle activation", 0x2000),
    0x0386b090: ("Factory active component registration", 0x2000),
    0x0386c6f0: ("Registry visitor traversal", 0x2000),
    0x0386c7f0: ("Registry predicate traversal", 0x2000),
    0x02fa396c: ("Talk state0 update", 0x2000),
    0x02fa3970: ("Talk state1 entry", 0x2000),
    0x02fa3b30: ("Talk state1 update", 0x2000),
    0x02fa3b34: ("Talk state2 entry", 0x2000),
    0x02fa3b70: ("Talk state2 update", 0x2000),
    0x02fa3c20: ("Talk state3 entry", 0x2000),
    0x02fa3c70: ("Talk state3 update", 0x2000),
    0x02fa3ca4: ("Talk state4 entry", 0x2000),
    0x02fa3d68: ("Talk state4 update", 0x2000),
    0x02fa3dc0: ("Talk state5 entry", 0x2000),
    0x02fa3e78: ("Talk state5 update", 0x2000),
    0x02fa3ec4: ("Talk state6 entry", 0x2000),
    0x02fa3f7c: ("Talk state6 update", 0x2000),
    0x02fa40f0: ("Talk state6 exit", 0x2000),
    0x02fad2d8: ("SelectTalk state0 update", 0x2000),
    0x02fad2e0: ("SelectTalk state1 entry", 0x2000),
    0x02fad6c8: ("SelectTalk state1 update", 0x2000),
    0x02fad6cc: ("SelectTalk state2 entry", 0x2000),
    0x02fad710: ("SelectTalk state2 update", 0x2000),
    0x02fadc84: ("SelectTalk state3 entry", 0x2000),
    0x02fadc9c: ("SelectTalk state3 update", 0x2000),
    0x02fadd30: ("SelectTalk state4 entry", 0x2000),
    0x02fadd44: ("SelectTalk state4 update", 0x2000),
    0x01af59b0: ("Menu descriptor and resource lookup audit", 0x1d0),
    0x01af5800: ("Menu descriptor and resource lookup audit", 0x1b0),
    0x03181d14: ("Menu descriptor and resource lookup audit", 0x1000),
    0x031832cc: ("Menu descriptor and resource lookup audit", 0x12c),
    0x031833f8: ("Menu descriptor and resource lookup audit", 0x300),
    0x03182fe8: ("Menu descriptor and resource lookup audit", 0x2e4),
    0x0317d8e4: ("Menu descriptor and resource lookup audit", 0xb0),
    0x02db1e74: ("Context menu state or input callback", 0x4),
    0x02db1e78: ("Context menu state or input callback", 0x4),
    0x02db1e7c: ("Context menu state or input callback", 0x10c),
    0x02db1f88: ("Context menu state or input callback", 0x8fc),
    0x02db2884: ("Context menu state or input callback", 0xc),
    0x02db2890: ("Context menu state or input callback", 0x604),
    0x02db2e94: ("Context menu state or input callback", 0xc),
    0x02db2ea0: ("Context menu state or input callback", 0xd0),
    0x02db2f70: ("Context menu state or input callback", 0xaf8),
    0x02db3a68: ("Context menu state or input callback", 0x18),
    0x02db3a80: ("Context menu state or input callback", 0x2ec),
    0x02db3d6c: ("Context menu state or input callback", 0xdc),
    0x02db3e48: ("Context menu state or input callback", 0x4c),
    0x02db3e94: ("Context menu state or input callback", 0x14),
    0x02db3ea8: ("Context menu state or input callback", 0x5c),
    0x0386c920: ("UI manager recursive component enumeration", 0x1800),
    0x03869e50: ("Component visitor dispatch and child recursion", 0x1800),
    0x02fa432c: ("Talk sequence base-type acceptance predicate", 0x1800),
    0x03868244: ("UI component base initializer and gate reset", 0x1800),
    0x03869a90: ("UI component lifecycle gate predicate", 0x1800),
    0x0386a590: ("UI component factory registry destructor", 0x1800),
    0x0386c560: ("UI factory active-list registration", 0x1800),
    0x0386d660: ("UI factory active-list removal", 0x1800),
    0x03385c50: ("UI global update dispatcher candidate", 0x1800),
    0x03386198: ("UI global lifecycle finalizer candidate", 0x1800),
    0x033b9fcc: ("Independent UI object lifecycle handler", 0x1800),
    0x02db12ec: ("Pocket context menu constructor or relocation target", 0x754),
    0x02db1a40: ("Pocket context menu constructor or relocation target", 0xc0),
    0x02db1b00: ("Pocket context menu constructor or relocation target", 0x258),
    0x02db1d58: ("Pocket context menu constructor or relocation target", 0xc),
    0x02db1d64: ("Pocket context menu constructor or relocation target", 0x34),
    0x02db1d98: ("Pocket context menu constructor or relocation target", 0x20),
    0x02db1db8: ("Pocket context menu constructor or relocation target", 0x58),
    0x02db1e10: ("Pocket context menu constructor or relocation target", 0x58),
    0x02db1e68: ("Pocket context menu constructor or relocation target", 0x150),
    0x02db1fb8: ("Pocket context menu constructor or relocation target", 0x2b8),
    0x02db2270: ("Pocket context menu constructor or relocation target", 0x2f8),
    0x02db2568: ("Pocket context menu constructor or relocation target", 0x4),
    0x02db256c: ("Pocket context menu constructor or relocation target", 0x4),
    0x02db2570: ("Pocket context menu constructor or relocation target", 0x4),
    0x02db2574: ("Pocket context menu constructor or relocation target", 0x24),
    0x02db2598: ("Pocket context menu constructor or relocation target", 0x24),
    0x02db25bc: ("Pocket context menu constructor or relocation target", 0x4c),
    0x02db2608: ("Pocket context menu constructor or relocation target", 0x18fc),
    0x02db3f04: ("Pocket context menu constructor or relocation target", 0x4),
    0x02db3f08: ("Pocket context menu constructor or relocation target", 0x20),
    0x02db3f28: ("Pocket context menu constructor or relocation target", 0x158),
    0x02db4080: ("Pocket context menu constructor or relocation target", 0x5c),
    0x02c26914: ("Pocket context menu constructor or relocation target", 0x200),
    0x0317d994: ("Pocket context menu constructor or relocation target", 0x400),
    0x03188df0: ("Pocket context menu constructor or relocation target", 0x900),
    0x022b1ec4: ("Pocket context menu constructor or relocation target", 0x350),
    0x02c0e370: ("Outer request transition and event reset caller", 0x1000),
    0x02c0e230: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e318: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e1a8: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e1b8: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e20c: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e220: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e448: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e450: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0e458: ("Adjacent UI lifecycle wrapper", 0x1000),
    0x02c0dfe4: ("Adjacent UI lifecycle constructor", 0x1000),
    0x02c0e0a0: ("Adjacent UI lifecycle constructor", 0x1000),
    0x03455b14: ("PutUnitIcon state initialization", 0x344),
    0x034552d0: ("PutFtr state initialization", 0x290),
    0x03454db0: ("Placement condition check", 0x520),
    0x022b2214: ("Shared request resolver", 0x5bc),
    0x022b27d0: ("Shared request predicate", 0x7b0),
    0x022ad160: ("Shared request fallback", 0x5000),
    0x03172680: ("Five-state callback", 0x180),
    0x03172800: ("Five-state callback", 0x160),
    0x03172960: ("Five-state callback", 0x10),
    0x03172970: ("Five-state callback", 0x5d4),
    0x03172f44: ("Five-state callback", 0x24),
    0x03172f68: ("Five-state callback", 0x18),
    0x03172f80: ("Five-state callback", 0x51c),
    0x0317349c: ("Five-state callback", 0x14),
    0x031734b0: ("Five-state callback", 0x218),
    0x02c0cef8: ("Shared UI +1D0 dispatch", 0x1800),
    0x02bb9508: ("Shared UI +1D8 predicate", 0x1800),
    0x02bb9510: ("Shared UI +1F0 predicate", 0x1800),
    0x02bb9518: ("Shared UI +1F8", 0x1800),
    0x02bb9520: ("Shared UI +200 query", 0x1800),
    0x02bb94e0: ("Shared UI +150", 0x1800),
    0x02bb94e4: ("Shared UI +158", 0x1800),
    0x02bb94e8: ("Shared UI +160", 0x1800),
    0x02bb94ec: ("Shared UI +170", 0x1800),
    0x02bb94f0: ("Shared UI +180", 0x1800),
    0x02bb94f4: ("Shared UI +188", 0x1800),
    0x02bb94f8: ("Shared UI +190", 0x1800),
    0x02bb94fc: ("Shared UI +198", 0x1800),
    0x02bb9500: ("Shared UI +1A8", 0x1800),
    0x02bb9504: ("Shared UI +1B0", 0x1800),
    0x03186cec: ("Pocket +E0 predicate", 0x1800),
    0x03186cfc: ("Pocket +E8 predicate", 0x1800),
    0x03186d1c: ("Pocket +F0 predicate", 0x1800),
    0x03186d74: ("Pocket +F8 predicate", 0x1800),
    0x0318948c: ("Pocket +168", 0x1800),
    0x03189490: ("Pocket +178", 0x1800),
    0x03189694: ("Pocket request cleanup direct callee", 0x1800),
    0x02fa3660: ("Talk native state registration", 0x1800),
    0x02fad0b0: ("SelectTalk native state registration", 0x1800),
    0x0386b2b0: ("UI lifecycle tail target", 0x1800),
    0x03ebb268: ("Generic FSM update", 0x1800),
    0x03390900: ("Shared UI manager callback", 0x1800),
    0x0386b170: ("UI registration lifecycle", 0x1800),
    0x03174518: ("PocketMenu command callback or mapping", 0x80),
    0x03174598: ("PocketMenu command callback or mapping", 0x88),
    0x03174620: ("PocketMenu command callback or mapping", 0x2c),
    0x0317464c: ("PocketMenu command callback or mapping", 0x744),
    0x03174d90: ("PocketMenu command callback or mapping", 0x3ac),
    0x0317513c: ("PocketMenu command callback or mapping", 0x184),
    0x031752c0: ("PocketMenu command callback or mapping", 0x27c),
    0x0317553c: ("PocketMenu command callback or mapping", 0x304),
    0x03175f30: ("PocketMenu command callback or mapping", 0x3d4),
    0x03176304: ("PocketMenu command callback or mapping", 0x44),
    0x03176348: ("PocketMenu command callback or mapping", 0x1e8),
    0x03176530: ("PocketMenu command callback or mapping", 0x168),
    0x03176d78: ("PocketMenu command callback or mapping", 0xbc),
    0x03176e34: ("PocketMenu command callback or mapping", 0x258),
    0x0317708c: ("PocketMenu command callback or mapping", 0x320),
    0x031773ac: ("PocketMenu command callback or mapping", 0xd4),
    0x031778f0: ("PocketMenu command callback or mapping", 0xc24),
    0x03178a08: ("PocketMenu command callback or mapping", 0xb8),
    0x03178ac0: ("PocketMenu command callback or mapping", 0x5e4),
    0x031790a4: ("PocketMenu command callback or mapping", 0x2bc),
    0x03179360: ("PocketMenu command callback or mapping", 0x224),
    0x03179584: ("PocketMenu command callback or mapping", 0x100),
    0x03179684: ("PocketMenu command callback or mapping", 0x1b4),
    0x03179838: ("PocketMenu command callback or mapping", 0x4f4),
    0x03179d2c: ("PocketMenu command callback or mapping", 0x200),
    0x03179f2c: ("PocketMenu command callback or mapping", 0x8d4),
    0x0317a800: ("PocketMenu command callback or mapping", 0x5b0),
    0x0317adb0: ("PocketMenu command callback or mapping", 0xe28),
    0x0317bbd8: ("PocketMenu command callback or mapping", 0x100),
    0x0317bcd8: ("PocketMenu command callback or mapping", 0x370),
    0x0317c048: ("PocketMenu command callback or mapping", 0x3d4),
    0x0317c41c: ("PocketMenu command callback or mapping", 0x25c),
    0x0317c678: ("PocketMenu command callback or mapping", 0x364),
    0x0317c9dc: ("PocketMenu command callback or mapping", 0x190),
    0x0317cb6c: ("PocketMenu command callback or mapping", 0x3dc),
    0x0317cf48: ("PocketMenu command callback or mapping", 0x178),
    0x0317d0c0: ("PocketMenu command callback or mapping", 0x3d0),
    0x0317d490: ("PocketMenu command callback or mapping", 0x700),
    0x0317244c: ("PocketMenu pre-table association candidate", 0x1280),
    0x031736c8: ("Pre-table callback", 0x2c),
    0x031736f4: ("Pre-table callback", 0x2c),
    0x03173720: ("Pre-table callback", 0xbb0),
    0x03189918: ("PocketMenu 20-state registration", 0x2000),
    0x03188890: ("PocketMenu lifecycle initialization", 0x4000),
    0x03184880: ("Pocket page slot resource construction", 0x4000),
    0x03184ca0: ("Pocket page input setup", 0x4000),
    0x03190450: ("PocketMenu virtual +1a0", 0x4000),
    0x03190cec: ("PocketMenu virtual +1e8", 0x4000),
    0x03189494: ("PocketMenu virtual +1b8", 0x4000),
    0x031894b8: ("PocketMenu virtual +1c0", 0x4000),
    0x031894dc: ("PocketMenu virtual +1c8", 0x4000),
    0x031979b0: ("PocketMenu virtual +220", 0x4000),
    0x03197dcc: ("Pocket FSM descriptor +0", 0x4000),
    0x03197df8: ("Pocket FSM descriptor +8", 0x4000),
    0x03197e24: ("Pocket FSM descriptor +10", 0x4000),
    0x03189ffc: ("cInit update callback", 0x4000),
    0x0318a260: ("cIdle entry callback", 0x4000),
    0x0318a7e0: ("cIdle update callback", 0x4000),
    0x0318a850: ("cAppear entry callback", 0x4000),
    0x0318a8dc: ("cAppear update callback", 0x4000),
    0x0318aa80: ("cPlay entry callback", 0x4000),
    0x0318b3f0: ("cPlay update callback", 0x4000),
    0x0318bf20: ("cDisappear entry callback", 0x4000),
    0x0318c468: ("cDisappear update callback", 0x4000),
    0x0318c4c4: ("cCommandSelect entry callback", 0x4000),
    0x0318c590: ("cCommandSelect update callback", 0x4000),
    0x0318c5c4: ("cProcCommand entry callback", 0x4000),
    0x0318c5f8: ("cProcCommand update callback", 0x4000),
    0x0318c870: ("cDrag entry callback", 0x4000),
    0x0318ca40: ("cDrag update callback", 0x4000),
    0x0318e2f8: ("cEndDrag entry callback", 0x4000),
    0x0318e3b0: ("cEndDrag update callback", 0x4000),
    0x0318e510: ("cLookPlayerInfo entry callback", 0x4000),
    0x0318eca0: ("cLookPlayerInfo update callback", 0x4000),
    0x0318f4bc: ("cPutItemForInterior entry callback", 0x4000),
    0x0318f534: ("cPutItemForInterior update callback", 0x4000),
    0x0318f5b8: ("cErrorWindow entry callback", 0x4000),
    0x0318f698: ("cErrorWindow update callback", 0x4000),
    0x0318f6e4: ("cCommonDialog entry callback", 0x4000),
    0x0318f9d4: ("cCommonDialog update callback", 0x4000),
    0x0318fb44: ("cWaitPlayerAction entry callback", 0x4000),
    0x0318fb60: ("cWaitPlayerAction update callback", 0x4000),
    0x0318fbb4: ("cChangeEditLayer entry callback", 0x4000),
    0x0318fda8: ("cChangeEditLayer update callback", 0x4000),
    0x0318fe00: ("cSellToPurchaseBox entry callback", 0x4000),
    0x0318ffb0: ("cSellToPurchaseBox update callback", 0x4000),
    0x0319001c: ("cInsectCheckWin entry callback", 0x4000),
    0x031901cc: ("cInsectCheckWin update callback", 0x4000),
    0x03187b40: ("Pocket page callback descriptor 0", 0x1800),
    0x031884a8: ("Pocket page callback descriptor 1", 0x1800),
    0x031884b0: ("Pocket page callback descriptor 2", 0x1800),
    0x03188640: ("Pocket page callback descriptor 3", 0x1800),
    0x03188650: ("Pocket page callback descriptor 4", 0x1800),
    0x031886c0: ("Pocket page callback descriptor 5", 0x1800),
    0x03188724: ("Pocket page callback descriptor 6", 0x1800),
    0x03188794: ("Pocket page callback descriptor 7", 0x1800),
    0x03186480: ("Pocket page type predicate", 0x1800),
    0x031865e4: ("Pocket page type getter", 0x1800),
    0x0318477c: ("Pocket page virtual target +10", 0x1800),
    0x03184780: ("Pocket page virtual target +18", 0x1800),
    0x03186640: ("Pocket page virtual target +20", 0x1800),
    0x03197a48: ("Pocket callback descriptor wrapper +0", 0x1800),
    0x03197a78: ("Pocket callback descriptor wrapper +8", 0x1800),
    0x02bb9854: ("Pocket callback descriptor predicate +10", 0x1800),
    0x033ba5e4: ("Shared UI out-of-bound tail target", 0x1800),
    0x03859380: ("Shared page activation propagation", 0x1800),
    0x02c0c4c8: ("Shared UI +50", 0x1000),
    0x02c0c51c: ("Shared UI +58", 0x1000),
    0x02c0c528: ("Shared UI +60", 0x1000),
    0x02c0c534: ("Shared UI +68", 0x1000),
    0x02c0c6f0: ("Shared UI +70", 0x1000),
    0x02c0c6fc: ("Shared UI +78", 0x1000),
    0x02c0c708: ("Shared UI +80", 0x1000),
    0x02c0c714: ("Shared UI +88", 0x1000),
    0x02c0c720: ("Shared UI +90", 0x1000),
    0x02c0c940: ("Shared UI +98", 0x1000),
    0x02c0c94c: ("Shared UI +A0", 0x1000),
    0x02c0c960: ("Shared UI +A8", 0x1000),
    0x02c0cb68: ("Shared UI +B0", 0x1000),
    0x02c0cce0: ("Shared UI +B8", 0x1000),
    0x02faedec: ("Talk sequence +220", 0x1000),
    0x02fadf8c: ("SelectTalk +220", 0x1000),
    0x031872a0: ("PocketMenu +C8", 0x1000),
    0x03187560: ("PocketMenu +D0", 0x1000),
    0x03194af0: ("Pocket association display index writer", 0x1000),
    0x03195a1c: ("Pocket ItemRing display consumer", 0x1000),
    0x03195c48: ("Pocket ItemRing alternate display consumer", 0x1000),
    0x033d0598: ("Player record +6B0 accessor", 0x1000),
    0x030bffe0: ("Slot presentation transition", 0x1000),
    0x030bfe80: ("Slot presentation initializer", 0x1000),
    0x031b0590: ("Dialog state predicate consumer", 0x1000),
    0x031b0858: ("Dialog state dispatcher", 0x1000),
    0x02dfa190: ("Dialog parameter setup", 0x1000),
    0x0386890c: ("Shared UI page holder setup", 0x1000),
    0x02fa32a4: ("Talk sequence +128", 0x1000),
    0x02bf0b60: ("Cursor page +120", 0x1000),
    0x02bf0c78: ("Cursor page +138", 0x1000),
    0x01108934: ("SystemDeletePlayerItem hash neighbor candidate", 0xc4),
    0x011089f8: ("SystemDeletePlayerItem constructor candidate", 0x13c),
    0x01108b34: ("SystemDeletePlayerItem adjacent factory candidate", 0x200),
    0x0110a8b4: ("Relocation-backed constructor candidate", 0x200),
    0x01122264: ("Relocation-backed constructor candidate", 0x200),
    0x01127484: ("Callback table store interior anchor", 0x100),
    0x011273cc: ("Relocation-backed constructor candidate", 0x200),
    0x01137fb0: ("Relocation-backed constructor candidate", 0x200),
    0x0113f544: ("Relocation-backed constructor candidate", 0x200),
    0x0112005c: ("UIItemSelectWindowHandling hash neighbor candidate", 0xc4),
    0x011201b0: ("UIItemSelectWindowHandling adjacent factory candidate", 0x200),
    0x03175840: ("Shared result writer relocation-backed candidate", 0x800),
    0x03176698: ("Shared result writer relocation-backed candidate", 0x700),
    0x03177480: ("Shared result writer relocation-backed candidate", 0x470),
    0x03178514: ("Shared result writer relocation-backed candidate", 0x600),
    0x02675b70: ("Default item record replacement wrapper", 0x200),
    0x026788f0: ("Item match slot lookup", 0x400),
    0x02674700: ("General slot record mutation and binding", 0x400),
    0x027f9664: ("Pocket upgrade capacity flags", 0x200),
    0x0277d7b4: ("Item matching predicate", 0x300),
    0x031956f8: ("PocketMenu slot clear and presentation map", 0x300),
    0x0319536c: ("PocketMenu quantity adjustment and clear", 0x500),
    0x03195900: ("PocketMenu slot insertion and presentation map", 0x200),
    0x031742d0: ("PocketMenu action slot consumer", 0x400),
    0x0070fcd0: ("EventFlow category factory dispatcher", 0x600),
    0x00da8f70: ("Relocation-backed candidate for remaining caller", 0x850),
    0x00c04ee0: ("Relocation-backed slot consumer", 0x200),
    0x00c31ae0: ("Relocation-backed associated slot consumer", 0x380),
    0x00d97e30: ("Relocation-backed slot and item consumer", 0x280),
    0x00d982b0: ("Relocation-backed multi-branch item consumer", 0x5a0),
    0x00dd7a70: ("Relocation-backed item record consumer", 0x400),
    0x03384e14: ("Shared UI result allocation and publication", 0x1800),
    0x0338bd60: ("Shared UI result initializer", 0x2000),
    0x03193d24: ("Pocket selection count consumer", 0x400),
    0x03194070: ("Pocket slot display consumer", 0x1800),
    0x0338b5cc: ("Shared result callback helper", 0x200),
    0x02328d9c: ("Shared result reset", 0x600),
    0x00dbec80: ("Shared result consumption and reset", 0x1000),
    0x010b9adc: ("Item select query consumer", 0x300),
    0x00ad9494: ("Common callback table member", 0x100),
    0x00adc7a4: ("Common callback table member", 0x100),
    0x00ad94a0: ("Common callback table member", 0x100),
    0x00adc7ac: ("Common callback table member", 0x100),
    0x00adc7b0: ("Common callback table member", 0x100),
    0x00adc7b4: ("Common callback table member", 0x100),
    0x02fafa00: ("TalkMessageWindowSeq vtable +0x0 target", 0x1000),
    0x02fafa8c: ("TalkMessageWindowSeq vtable +0x8 target", 0x1000),
    0x02fae7c4: ("TalkMessageWindowSeq vtable +0x10 target", 0x1000),
    0x02fae7c8: ("TalkMessageWindowSeq vtable +0x18 target", 0x1000),
    0x03868ab0: ("TalkMessageWindowSeq vtable +0x28 target", 0x1000),
    0x02c0d0e8: ("TalkMessageWindowSeq vtable +0x48 target", 0x1000),
    0x02c0c3f4: ("TalkMessageWindowSeq vtable +0xc0 target", 0x1000),
    0x02faeb50: ("TalkMessageWindowSeq vtable +0xc8 target", 0x1000),
    0x02c0d0f0: ("TalkMessageWindowSeq vtable +0xd0 target", 0x1000),
    0x02fa2dbc: ("TalkMessageWindowSeq vtable +0xe0 target", 0x1000),
    0x02fa2de4: ("TalkMessageWindowSeq vtable +0xe8 target", 0x1000),
    0x02fa2e50: ("TalkMessageWindowSeq vtable +0xf0 target", 0x1000),
    0x02fa2ea4: ("TalkMessageWindowSeq vtable +0xf8 target", 0x1000),
    0x02fa2f00: ("TalkMessageWindowSeq vtable +0x140 target", 0x1000),
    0x02fadda0: ("SelectMessageWindowTalkSeq vtable +0x0 target", 0x1000),
    0x02fadef8: ("SelectMessageWindowTalkSeq vtable +0x8 target", 0x1000),
    0x02fac08c: ("SelectMessageWindowTalkSeq vtable +0x10 target", 0x1000),
    0x02fac0dc: ("SelectMessageWindowTalkSeq vtable +0x18 target", 0x1000),
    0x02faced8: ("SelectMessageWindowTalkSeq vtable +0x48 target", 0x1000),
    0x02fac7a0: ("SelectMessageWindowTalkSeq vtable +0xc8 target", 0x1000),
    0x02faca60: ("SelectMessageWindowTalkSeq vtable +0xd0 target", 0x1000),
    0x02fadf54: ("SelectMessageWindowTalkSeq vtable +0xe0 target", 0x1000),
    0x02fac390: ("SelectMessageWindowTalkSeq vtable +0xe8 target", 0x1000),
    0x02fac3b0: ("SelectMessageWindowTalkSeq vtable +0xf0 target", 0x1000),
    0x02fac408: ("SelectMessageWindowTalkSeq vtable +0xf8 target", 0x1000),
    0x02fac460: ("SelectMessageWindowTalkSeq vtable +0x140 target", 0x1000),
    0x031ffea8: ("SelectCursorPage vtable +0x0 target", 0x1000),
    0x03200018: ("SelectCursorPage vtable +0x8 target", 0x1000),
    0x031ff6d4: ("SelectCursorPage vtable +0x10 target", 0x1000),
    0x031ff6d8: ("SelectCursorPage vtable +0x18 target", 0x1000),
    0x03d58a60: ("SelectCursorPage vtable +0x28 target", 0x1000),
    0x03d58d10: ("SelectCursorPage vtable +0x48 target", 0x1000),
    0x0385a910: ("SelectCursorPage vtable +0xc0 target", 0x1000),
    0x031ff740: ("SelectCursorPage vtable +0xc8 target", 0x1000),
    0x02bf15a8: ("SelectCursorPage vtable +0xd0 target", 0x1000),
    0x02bf1504: ("SelectCursorPage vtable +0xe0 target", 0x1000),
    0x02bf11d8: ("SelectCursorPage vtable +0xe8 target", 0x1000),
    0x02bf1220: ("SelectCursorPage vtable +0xf0 target", 0x1000),
    0x02bb1cc0: ("SelectCursorPage vtable +0xf8 target", 0x1000),
    0x02bf0ca8: ("SelectCursorPage vtable +0x140 target", 0x1000),
    0x031ff554: ("UI related C consumer", 0x1000),
    0x00ada9c4: ("UI related C consumer", 0x1000),
    0x03197688: ("UI related C consumer", 0x1000),
    0x031977ec: ("UI related C consumer", 0x1000),
    0x0338409c: ("UI root allocation and publication", 0x200),
    0x03384180: ("UI root constructor", 0x1500),
    0x03383900: ("UI root cleanup", 0x800),
    0x03384038: ("UI registration deleting wrapper", 0x100),
    0x0338852c: ("MessageWindow creation", 0x400),
    0x02fa8cc4: ("MessageWindow child sequence initialization", 0x2000),
    0x01c03bb0: ("Global MessageWindow consumer", 0x200),
    0x02fa87d4: ("MessageWindow destructor candidate", 0x100),
    0x02fa8824: ("MessageWindow deleting candidate", 0x100),
    0x03458394: ("Placement wrapper slot 0 interior anchor", 0x100),
    0x034583c0: ("Placement wrapper slot 8 interior anchor", 0x100),
    0x034583ec: ("Placement wrapper slot 16 interior anchor", 0x100),
    0x03ebb160: ("State transition", 0x300),
    0x03455e58: ("Outdoor condition and dialog transition", 0x400),
    0x01392d64: ("Result classifier", 0x300),
    0x01393458: ("Directory consumer", 0x800),
    0x014bcde4: ("Item-associated record builder", 0x400),
    0x014e2eb0: ("Temporary pool copy", 0x400),
    0x014bb000: ("Record dispatch", 0x400),
    0x016b43b4: ("Actor handle consumers", 0x600),
    0x03186ba8: ("PocketMenu destructor", 0x200),
    0x03186c88: ("PocketMenu deleting destructor", 0x100),
    0x0320034c: ("SelectCursor destructor", 0x100),
    0x0320039c: ("SelectCursor deleting destructor", 0x100),
    0x03200cac: ("SelectCursorPage allocation", 0x400),
    0x03200434: ("SelectCursorPage state consumer", 0x100),
    0x02e1ddac: ("PocketMenu type-checked lookup", 0x300),
    0x0338b130: ("UI page list consumer", 0x400),
    0x03d48a00: ("UI page consumer tail target", 0x400),
    0x01d3e72c: ("Online state registration", 0x500),
    0x01d3fc60: ("Online global static init", 0x3000),
    0x0266a0c0: ("Item and index association predicate", 0x300),
    0x02672e00: ("Pocket capacity reader", 0x400),
    0x02677ea0: ("Pocket logical slot reader", 0x400),
    0x03195e80: ("PocketMenu forty-slot filter mask", 0x400),
    0x03201990: ("SelectCursor runtime consumer", 0x300),
    0x03190d10: ("PocketMenu hint consumer", 0x3000),
    0x030ded60: ("UI hint string copy", 0x300),
    0x030deeec: ("UI KeyIcon resource update", 0x1000),
    0x03387478: ("UI component owner initialization", 0x2000),
    0x03387e08: ("PocketMenu allocation", 0x200),
    0x03387c94: ("SelectCursor allocation", 0x200),
    0x03200224: ("SelectCursor constructor", 0x1000),
    0x031867b0: ("PocketMenu constructor", 0x1000),
    0x03454a44: ("Placement state registration", 0x2000),
    0x03456b90: ("Idle record cleanup", 0x200),
    0x03457054: ("PutUnitIcon callback interior anchor", 0x800),
    0x03457060: ("PutUnitIcon callback interior anchor", 0x800),
    0x03457250: ("Interior PutUnitIcon callback interior anchor", 0x800),
    0x03457260: ("Interior PutUnitIcon callback interior anchor", 0x800),
    0x03ebac90: ("State table allocation", 0x800),
    0x03ebaf40: ("State name registration", 0x800),
    0x026776a0: ("Inventory slot consumption", 0x300),
    0x02703140: ("Mode3 owner", 0x4000),
    0x02704f78: ("Mode3 publication interior anchor", 0x800),
    0x02705178: ("Mode3 cleanup interior anchor", 0x800),
    0x0272b55c: ("Mode3 destructor candidate", 0x800),
    0x0272b60c: ("Mode3 member release", 0x1000),
    0x026eec4c: ("Player accessor", 0x1000),
    0x026eed64: ("Ordinary player accessor", 0x1000),
    0x026759e0: ("Inventory logical reader", 0x1000),
    0x02674a80: ("Inventory mutation consumer", 0x1000),
    0x027fa2dc: ("Inventory partition consumer", 0x1000),
    0x0277d6c4: ("Item catalog ID consumer", 0x800),
    0x007e2520: ("Pocket capacity consumer", 0x3000),
    0x01b01270: ("Item metadata consumer", 0x1000),
    0x0098a6b0: ("Actor registry publication interior anchor", 0x800),
    0x00938c5c: ("Actor registration interior anchor", 0x800),
    0x00938dc0: ("Actor removal interior anchor", 0x800),
    0x00df4500: ("Gift virtual dispatch interior anchor", 0x20),
    0x01120120: ("Gift window constructor candidate", 0x4000),
    0x01ae6420: ("BCF5D17A bitmap reader", 0x1000),
    0x00efa550: ("Extra gift predicate candidate", 0x2000),
    0x01b07660: ("Ordinary gift predicate candidate", 0x2000),
    0x01b081a0: ("Birthday gift predicate candidate", 0x2000),
    0x01b03610: ("Package subtype", 0x400),
    0x01b079ec: ("Package instance normalization", 0x2000),
    0x01ae0cf0: ("Style 1 reader", 0x800),
    0x01ae0c40: ("Style 2 reader", 0x800),
    0x01a778e4: ("Style 2 interior anchor", 0x200),
    0x01acb930: ("Tag registration candidate", 0x2000),
}
def annotation(i, target):
    m=i.mnemonic
    if m.startswith(("ldr","ldp","ldur")): return "读取寄存器/内存；字段语义需结合对象来源"
    if m.startswith(("str","stp","stur")): return "写入内存；记录宽度和基址，尚不等于业务字段名"
    if m=="bl": return f"直接调用 Ghidra VA 0x{target+BASE:08X}" if target is not None else "直接调用目标未知"
    if m in ("blr","br"): return "间接控制转移；实际目标未由此指令证明"
    if m=="ret": return "返回调用者"
    if m=="b" or m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"): return "控制流分支；条件语义待数据流确认"
    if m in ("adr","adrp"): return "形成 PC 相对地址；须追踪后续消费者"
    if m in ("cmp","cmn","tst"): return "比较/测试并更新条件标志"
    if m in ("add","sub","adds","subs","mov","movk","movz","and","orr","eor","lsl","lsr","asr","ubfx","sxtw","uxtw","csel"): return "寄存器计算/选择："+i.op_str
    return "指令原样保留；人工业务注释待补"
def scan_ui_lifecycle(elf, es, elfbase, code_start, code, raw, cs, out):
    """Whole text instruction-pattern scan. Candidate windows, not type-bound call proof."""
    import struct
    import collections
    counts=collections.Counter()
    hits=[]
    def word(off):
        return struct.unpack_from("<I",code,off)[0]
    def emit(kind,off,detail):
        counts[kind]+=1
        start=max(0,off-32)
        end=min(len(code),off+48)
        a=code_start+start
        b=code[start:end]
        if get_bytes_va(elf,es,a+elfbase,len(b))!=b or raw(a,len(b))!=b:
            counts["byte_mismatch"]+=1
            return
        hits.append({"kind":kind,"site_va":hex(code_start+off+BASE),"detail":detail,
                     "window":[{"va":hex(i.address+BASE),"bytes":i.bytes.hex(),
                                "instruction":i.mnemonic+" "+i.op_str} for i in cs.disasm(b,a)]})
    for idx,(w,) in enumerate(struct.iter_unpack("<I",code[:len(code)//4*4])):
        off=idx*4
        # LDR Xt,[Xn,#1E8] followed by BR/BLR Xt. No type claim.
        if w&0xffc00000==0xf9400000 and (w>>10)&0xfff==0x3d:
            rt=w&31
            for delta in range(4,21,4):
                if off+delta+4>len(code):break
                q=word(off+delta)
                if (q&0xfffffc1f) in (0xd61f0000,0xd63f0000) and (q>>5)&31==rt:
                    emit("slot_1e8_branch",off,{"branch_va":hex(code_start+off+delta+BASE),"register":rt})
                    break
        # ORR Wd,Wn,#20h/#40h bracketed by LDRH and STRH same base+offset.
        if w&0xfffffc00 in (0x321b0000,0x321a0000):
            rn=(w>>5)&31; rd=w&31
            for d1 in range(4,25,4):
                if off<d1:break
                a=word(off-d1)
                if a&0xffc00000!=0x79400000 or a&31!=rn:continue
                for d2 in range(4,25,4):
                    if off+d2+4>len(code):break
                    b=word(off+d2)
                    if b&0xffc00000==0x79000000 and b&31==rd and a&0x003fffe0==b&0x003fffe0:
                        emit("halfword_mask_20_40",off,{"mask":32 if w&0xfffffc00==0x321b0000 else 64,
                            "base_register":(a>>5)&31,"offset":((a>>10)&0xfff)*2})
                        break
                else:continue
                break
    (out/"ui_lifecycle_candidates.json").write_text(json.dumps({"scope":"whole decoded text; bounded same-register syntactic candidates, not exhaustive dataflow or runtime proof","counts":dict(counts),"hits":hits},ensure_ascii=False,indent=2),encoding="utf-8")

def export_ui_gate_and_talk(elf,es,elfbase,code_start,code,raw,cs,out):
    """Validate literal state-name bytes and direct call candidates; no runtime inference."""
    import struct
    names=[]
    for rva in (0x3f8dd64,0x3fe3b76,0x3f87a5a,0x4000077,0x3fb6384,0x3fc671a,0x3f63925,0x3fc6988,0x3f6d1a5,0x3fabb3a,0x3f776e0,0x3fb0e14,0x3fe4c66,0x3ff9e3a,0x3ff4de5,0x3fc5534,0x3fbb622,0x3fa1281):
        b=bytearray()
        for i in range(128):
            x=raw(rva+i,1)
            if len(x)!=1 or get_bytes_va(elf,es,rva+i+elfbase,1)!=x:
                raise ValueError("state-name byte mismatch: "+hex(rva+i))
            b.extend(x)
            if x==b"\x00":break
        if not b or b[-1]!=0:raise ValueError("unterminated name")
        names.append({"rva":hex(rva),"bytes":b.hex(),"name":bytes(b[:-1]).decode("ascii")})
    targets={v-BASE for v in (0x03868db0,0x03868ae0,0x03868eb8,0x03868800,0x0386a3a0,0x02c0e1b8,0x0386c920,0x01b97520,0x01c041a4,0x01c043c8,0x01c027a0,0x01c03bb0,0x01c03904,0x01be0874,0x01bdff98,0x01bf7564,0x01bf83ac,0x01bf7ffc,0x01c04e38,0x01bc1880,0x01bc1730,0x01bfb6b4,0x01c05a7c,0x01b9c210,0x01b9cbc0,0x01b9cd50,0x01b9d0e0,0x01b9d2d0,0x01b970f0,0x01b9735c,0x01b977e0,0x01bea9c8,0x01bf8800,0x01bfb6b4,0x01bfac9c)}
    hits=[]
    for idx,(w,) in enumerate(struct.iter_unpack("<I",code[:len(code)//4*4])):
        if w&0x7c000000!=0x14000000:continue
        off=idx*4; imm=w&0x3ffffff
        if imm&0x2000000:imm-=0x4000000
        dest=code_start+off+imm*4
        if dest not in targets:continue
        lo=max(0,off-32);hi=min(len(code),off+32);a=code_start+lo;b=code[lo:hi]
        if raw(a,len(b))!=b or get_bytes_va(elf,es,a+elfbase,len(b))!=b:
            raise ValueError("xref window mismatch")
        hits.append({"site_va":hex(code_start+off+BASE),"target_va":hex(dest+BASE),
            "window":[{"va":hex(i.address+BASE),"bytes":i.bytes.hex(),"instruction":i.mnemonic+" "+i.op_str} for i in cs.disasm(b,a)]})
    (out/"ui_gate_talk_evidence.json").write_text(json.dumps({"names":names,"direct_branch_candidates":hits,"runtime_verified":False},ensure_ascii=False,indent=2),encoding="utf-8")

def export_dialogue_scheduler_windows(elf,es,elfbase,code_start,code,raw,cs,out):
    """Authenticated linear windows; type and control flow require manual verification."""
    import struct
    def window(a,n):
        b=raw(a,n)
        if len(b)!=n or get_bytes_va(elf,es,a+elfbase,n)!=b:
            raise ValueError("scheduler window mismatch "+hex(a))
        return [{"va":hex(i.address+BASE),"bytes":i.bytes.hex(),"instruction":i.mnemonic+" "+i.op_str} for i in cs.disasm(b,a)]
    sched=window(0x376b800,0x800)
    hits=[]
    for idx,(w,) in enumerate(struct.iter_unpack("<I",code[:len(code)//4*4])):
        if w&0xffc00000!=0xf9400000 or ((w>>10)&0xfff)!=0xac:continue
        a=code_start+idx*4
        lo=max(code_start,a-32);hi=min(code_start+len(code),a+96)
        rows=window(lo,hi-lo)
        if any("#0x30]" in r["instruction"] for r in rows) and any(r["instruction"].startswith(("blr ","br ")) for r in rows):
            hits.append({"load_va":hex(a+BASE),"window":rows})
    (out/"dialogue_scheduler_windows.json").write_text(json.dumps({"scope":"authenticated linear instructions and syntactic +560/+30 candidates, not type-bound CFG","scheduler_window":sched,"candidate_windows":hits,"runtime_verified":False},ensure_ascii=False,indent=2),encoding="utf-8")

def export_choice_writers(elf,es,elfbase,code_start,code,raw,cs,out):
    """Byte-matched syntactic stores and branch targets, not whole-program type recovery."""
    lo,hi=0x2eac000,0x2eae100
    b=raw(lo,hi-lo)
    if len(b)!=hi-lo or get_bytes_va(elf,es,lo+elfbase,len(b))!=b:
        raise ValueError("SelectTalkSeq linear window mismatch")
    rows=[{"va":hex(i.address+BASE),"bytes":i.bytes.hex(),"instruction":i.mnemonic+" "+i.op_str}
          for i in cs.disasm(b,lo)]
    import re
    hits=[]
    for n,r in enumerate(rows):
        ins=r["instruction"]
        if re.match(r"(?:str|stur|stp) ",ins) and re.search(r"#0x(?:218|21c)\]",ins):
            hits.append({"site_va":r["va"],"window":rows[max(0,n-8):n+9]})
    (out/"choice_writer_windows.json").write_text(json.dumps({"range_rva":[hex(lo),hex(hi)],"rows":rows,"candidate_writes":hits,"scope":"syntactic candidates; object provenance and CFG require review","runtime_verified":False},ensure_ascii=False,indent=2),encoding="utf-8")

def export_message_archive_tables(elf,es,elfbase,raw,rel,out):
    """Require original NSO/ELF agreement and exact RELR targets for message tables."""
    import struct
    def matched(a,n):
        b=raw(a,n)
        if len(b)!=n or get_bytes_va(elf,es,a+elfbase,n)!=b:
            raise ValueError("message table byte mismatch "+hex(a))
        return b
    def cstring(a):
        b=bytearray()
        for i in range(256):
            x=matched(a+i,1)
            b.extend(x)
            if x==b"\x00":
                return {"rva":hex(a),"bytes":b.hex(),"text":bytes(b[:-1]).decode("ascii")}
        raise ValueError("message table string not terminated")
    def pointer_string(slot,expected):
        b=matched(slot,8)
        rr=rel.get(slot,{})
        if rr.get("type")!="RELR" or rr.get("addend")!=expected:
            raise ValueError("message table relocation mismatch "+hex(slot))
        return {"slot_rva":hex(slot),"slot_bytes":b.hex(),"relocation":rr,**cstring(expected)}
    targets=[0x3fb5ef9,0x3fc5523,0x3f67d23,0x3fc552c,0x3f97002,0x3f8fb02,0x3fc551c,0x3f7c917,0x3f7aad9,0x3f67d1e,0x3fc5116,0x3ff4ddb]
    categories=[{"id":i,**pointer_string(0x493d1a8+i*16,a)} for i,a in enumerate(targets)]
    languages=[{"id":i,**pointer_string(0x4812310+i*8,0x48122b0+i*6)} for i in range(16)]
    mapping=list(struct.unpack("<9I",matched(0x4077ba8,36)))
    schemas=[1,2,2]+mapping
    # 01B970F0 explicitly overrides archive category 10 to schema1.
    schemas[10]=1
    result={"runtime_verified":False,"archive_categories":categories,"language_suffixes":languages,
        "archive_schema_mapping_raw_3_to_11":mapping,"archive_schema_mapping_effective":schemas,
        "result_label_format":cstring(0x3f5bf91),"archive_path_format":cstring(0x3f87568),
        "unknown_language_fallback":cstring(0x3f7ebb1)}
    (out/"message_archive_tables.json").write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding="utf-8")

def main(root,out):
    elf,nso,mapped,segments,raw,tags,rel=dec.decode(root)
    es=parse_elf(elf); code_start,code=mapped[0]; code_end=code_start+len(code)
    cs=Cs(CS_ARCH_ARM64,CS_MODE_ARM); cs.detail=True
    entries=dict(ENTRIES)
    rr=rel.get(0x0495b730-BASE+0x60,{})
    t=rr.get("addend")
    if rr.get("type") in ("RELR",1027) and rr.get("symbol")==0 and isinstance(t,int) and code_start<=t<code_end:
        entries.setdefault(t+BASE,("Gift slot +0x60 relocation target",0x5000))
    out.mkdir(parents=True,exist_ok=True)
    graphdir=out/"Functions"; graphdir.mkdir(exist_ok=True)
    manifest={"elf_sha256":hashlib.sha256(elf).hexdigest(),"nso_sha256":hashlib.sha256(nso).hexdigest(),"nso_build_id":nso[0x40:0x60].hex(),"ghidra_base":hex(BASE),"runtime_verified":False,"functions":[]}
    # Determine ELF address mapping using its load segments; never silently accept byte differences.
    elfbase=min(s["vaddr"] for s in es)&~0xfff
    for gh,(role,budget) in sorted(entries.items()):
        entry=gh-BASE; todo=[entry]; rows={}; gaps=[]; calls=[]; edges=[]; authenticated_switches=[]
        while todo:
            a=todo.pop()
            if a in rows: continue
            if a%4 or not code_start<=a<code_end or not entry<=a<entry+budget:
                gaps.append({"rva":hex(a),"reason":"outside_bound"});continue
            b=raw(a,4); eb=get_bytes_va(elf,es,a+elfbase,4)
            if eb!=b:
                gaps.append({"rva":hex(a),"reason":"elf_nso_byte_mismatch_or_unmapped","nso":b.hex(),"elf":eb.hex() if eb else None});continue
            v=list(cs.disasm(b,a))
            if len(v)!=1: gaps.append({"rva":hex(a),"reason":"decode"});continue
            i=v[0];m=i.mnemonic; o=i.operands
            target=o[-1].imm if o and o[-1].type==ARM64_OP_IMM else None
            rows[a]={"rva":hex(a),"va":hex(a+BASE),"bytes":b.hex(),"instruction":m+" "+i.op_str,"annotation":annotation(i,target)}
            if m=="ret": succ=[]
            elif m=="br":
                succ=[]
                if gh==0x00da8f70 and a==0x00ca929c:
                    # Explicit bounded switch only. Check all instructions forming the table address,
                    # upper bound and target; verify raw table bytes in both source images.
                    signature=bytes.fromhex("1f0d0071 a8210054 099e0190 29d53391 aa000010 2b696838 4a090b8b b4a20a91 40011fd6")
                    first=0xca927c
                    table=0x4069cf5
                    table_bytes=raw(table,4)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==4
                        and get_bytes_va(elf,es,table+elfbase,4)==table_bytes):
                        candidate=[0xca92a0+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":3,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x03176698 and a==0x3076b34:
                    signature=bytes.fromhex("08910151 1f250071 880a0054 698000d0 29890391 8a000010 2b696838 4a090b8b 40011fd6")
                    first=0x3076b14;table=0x40840e2
                    table_bytes=raw(table,10)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==10
                        and get_bytes_va(elf,es,table+elfbase,10)==table_bytes):
                        candidate=[0x3076b38+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":9,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x02fac460 and a in range(0x2eac4b0,0x2eac751,0x70):
                    # Seven 5-entry u8 tables, observed in the byte-matched CI artifact.
                    # Match the full bound check, table base, ADR, LDRB, scaled ADD and BR.
                    offsets=("e117","f517","0918","1d18","3118","4518","5918")
                    k=(a-0x2eac4b0)//0x70
                    signature=bytes.fromhex("e90f40b93f110071e8020054aa8e00b04a"+offsets[k]+"918b0000104c6969386b090c8b60011fd6")
                    first=a-32
                    table=0x40815f8+5*k
                    table_bytes=raw(table,5)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==5
                        and get_bytes_va(elf,es,table+elfbase,5)==table_bytes):
                        candidate=[a+4+v*4 for v in table_bytes]
                        if all(a+4<=v<a+0x44 and entry<=v<entry+budget
                               and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":4,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x03188724 and a==0x03088750:
                    # Input event mode 0..3. Verify complete dispatch window and table bytes.
                    signature=bytes.fromhex("2a1040b95f0d0071c8020054eb7f00906b790591ec0000106d696a388c090d8b0870409108f113914900805280011fd6")
                    first=0x03088724
                    table=0x0408415e
                    base=0x03088754
                    table_bytes=raw(table,4)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==4
                        and get_bytes_va(elf,es,table+elfbase,4)==table_bytes):
                        candidate=[base+v*4 for v in table_bytes]
                        if all(base<=v<=0x03088784 and entry<=v<entry+budget
                               and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":3,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x03188df0 and a==0x3089428:
                    signature=bytes.fromhex("08110051 f7630039 1f0d0071 68030054 c97f00f0 29890591 8a000010 2b696838 4a090b8b 40011fd6")
                    first=0x3089404;table=0x4084162
                    table_bytes=raw(table,4)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==4
                        and get_bytes_va(elf,es,table+elfbase,4)==table_bytes):
                        candidate=[0x308942c+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":3,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x0317e7e0 and a==0x30808d8:
                    signature=bytes.fromhex("08050051 1f610071 e88b0054 29800090 29890491 8a000010 2b796878 4a090b8b 40011fd6")
                    first=0x30808b8;table=0x4084122
                    table_bytes=raw(table,50)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==50
                        and get_bytes_va(elf,es,table+elfbase,50)==table_bytes):
                        candidate=[0x30808dc+int.from_bytes(table_bytes[k:k+2],"little")*4 for k in range(0,50,2)]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":24,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x01b97520 and a==0x1a97548:
                    # Unsigned bound 0..46, ADRP+ADD table, ADR base, LDRB, scaled ADD, BR.
                    signature=bytes.fromhex("1fb90071 e8000054 092f0190 29e12d91 8a000010 2b696838 4a090b8b 40011fd6")
                    first=0x1a9752c;table=0x4077b78
                    table_bytes=raw(table,47)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==47
                        and get_bytes_va(elf,es,table+elfbase,47)==table_bytes):
                        candidate=[0x1a9754c+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":46,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                # Group-zero handler switches: require the observed full bounds/dispatch signature.
                group0_switches={
                    (0x022c543c,0x21c54b0):(0x21c5488,0x407a4cc,27,0x21c54b4,7,
                        "4b1d0051 7f690071 e8920054 acf500b0 8c311391 cd000010 8e796b78 ad090e8b f40300aa 081d0012 a0011fd6"),
                    (0x022c6f50,0x21c6f9c):(0x21c6f7c,0x407a502,6,0x21c6fa0,8,
                        "08210051 1f150071 e8340054 a9f50090 29091491 8a000010 2b796878 4a090b8b 40011fd6"),
                    (0x022c7940,0x21c7b78):(0x21c7b58,0x407a50e,35,0x21c7b7c,1,
                        "08050051 1f890071 68580054 89f500f0 29391491 8a000010 2b796878 4a090b8b 40011fd6")}
                if (gh,a) in group0_switches:
                    first,table,count,base,mode_min,sig=group0_switches[(gh,a)]
                    signature=bytes.fromhex(sig)
                    table_bytes=raw(table,2*count)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==2*count
                        and get_bytes_va(elf,es,table+elfbase,2*count)==table_bytes):
                        candidate=[base+int.from_bytes(table_bytes[k:k+2],"little")*4 for k in range(0,2*count,2)]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":count-1,
                                "mode_min":mode_min,"mode_max":mode_min+count-1,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x01bea9c8 and a==0x1aeadc8:
                    # Worker state 3..6, bounded four-entry byte dispatch.
                    signature=bytes.fromhex("090d0051 3f0d0071 08180054 682c01d0 08c50991 8a000010 0b696938 4a090b8b 40011fd6")
                    first=0x1aeada8;table=0x4078271
                    table_bytes=raw(table,4)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==4
                        and get_bytes_va(elf,es,table+elfbase,4)==table_bytes):
                        candidate=[0x1aeadcc+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":3,"index_max":6,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                choice_attribute_switches={
                    (0x01b9cd50,0x1a9cda4):(0x1a9cd70,0x4077c8c,23,1,0x1a9cda8,
                        "28040051 f30302aa e01700f9 1f590071 48020054 49008052 38008052 e92700b9 c92e01f0 29313291 8a000010 2b696838 4a090b8b 40011fd6"),
                    (0x01b9d2d0,0x1a9d32c):(0x1a9d2f4,0x4077ca4,22,2,0x1a9d330,
                        "4a040051 5f550071 e30302a9 e11f00f9 e84700b9 28300054 cb2e01d0 6b913291 ec000010 6d796a78 8c090d8b 94008052 68008052 49008052 80011fd6"),
                    (0x01b9735c,0x1a97394):(0x1a9736c,0x4077b6b,7,1,0x1a97398,
                        "08050051 1f190071 08040054 092f0190 29ad2d91 ca000010 2b696838 4a090b8b e30302aa e20301aa 40011fd6"),
                    (0x01b97400,0x1a97444):(0x1a97424,0x4077b72,6,1,0x1a97448,
                        "29050051 3f150071 a8020054 0a2f0190 4ac92d91 8b000010 4c696938 6b090c8b 60011fd6"),
                }
                if (gh,a) in choice_attribute_switches:
                    first,table,count,width,target_base,signature_hex=choice_attribute_switches[(gh,a)]
                    signature=bytes.fromhex(signature_hex)
                    table_bytes=raw(table,count*width)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==count*width
                        and get_bytes_va(elf,es,table+elfbase,count*width)==table_bytes):
                        candidate=[target_base+4*int.from_bytes(table_bytes[i*width:(i+1)*width],"little")
                                   for i in range(count)]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"entry_width":width,
                                "index_min":1,"index_max":count,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if gh==0x01bf8800 and a==0x1af958c:
                    signature=bytes.fromhex("5f150071 48030054 eb2b01f0 6b1d0e91 8c000010 6d696a38 8c090d8b 80011fd6")
                    first=0x1af9570;table=0x4078387
                    table_bytes=raw(table,6)
                    if (raw(first,len(signature))==signature
                        and get_bytes_va(elf,es,first+elfbase,len(signature))==signature
                        and len(table_bytes)==6
                        and get_bytes_va(elf,es,table+elfbase,6)==table_bytes):
                        candidate=[0x1af9590+v*4 for v in table_bytes]
                        if all(entry<=v<entry+budget and code_start<=v<code_end for v in candidate):
                            succ=candidate
                            authenticated_switches.append({"site_va":hex(a+BASE),"table_rva":hex(table),
                                "table_bytes":table_bytes.hex(),"index_min":0,"index_max":5,
                                "targets_va":[hex(v+BASE) for v in succ],
                                "status":"matched_bounded_switch_targets_not_runtime_verified"})
                if not succ:gaps.append({"rva":hex(a),"reason":"indirect_branch"})
            elif m=="b": succ=[target]
            elif m.startswith("b.") or m in ("cbz","cbnz","tbz","tbnz"):succ=[a+4,target]
            else:
                succ=[a+4]
                if m in ("bl","blr"):calls.append({"site":hex(a+BASE),"target":hex(target+BASE) if m=="bl" and target is not None else None})
            for s in succ:
                if s is not None:edges.append([hex(a+BASE),hex(s+BASE)]);todo.append(s)
        key=f"FUN_{gh:08X}"; p=graphdir/(key+".md")
        src=root/"derived/3.0.3/ghidra12.2/c"/f"{(gh>>8)&255:02x}"/f"{gh:08x}.c"
        lines=["---",f"title: {key}","runtime_verified: false","---",f"# {key} — {role}","","[[../README|函数索引]]",f"入口/锚点 Ghidra VA: 0x{gh:08X}；RVA: 0x{entry:08X}。","仅列 ELF 与 NSO 相同的可达指令；预算边界、间接分支和非入口锚点不能视为完整函数。","", "## 逐指令证据","","|Ghidra VA|Main RVA|原始字节|指令|注释|","|---|---|---|---|---|"]
        for a in sorted(rows):
            r=rows[a];lines.append("|"+"|".join(str(r[k]).replace("|","\\|") for k in ("va","rva","bytes","instruction","annotation"))+"|")
        lines+=["","## 调用与跳转"]
        for c in calls:
            t=int(c["target"],16) if c["target"] else None
            lines.append(f'- {c["site"]} → '+(f"[[FUN_{t:08X}]]" if t in entries else str(c["target"] or "未解析间接调用")))
        lines+=["","## Authenticated switch targets",json.dumps(authenticated_switches,ensure_ascii=False),"","## CFG 缺口","\x60\x60\x60json",json.dumps(gaps,ensure_ascii=False,indent=2),"\x60\x60\x60"]
        if src.is_file():lines+=["","## Ghidra C 导出（非原始源码）","\x60\x60\x60c",src.read_text("utf-8",errors="replace"),"\x60\x60\x60"]
        p.write_text("\n".join(lines)+"\n",encoding="utf-8")
        (graphdir/(key+".json")).write_text(json.dumps({"rows":[rows[a] for a in sorted(rows)],"edges":edges,"calls":calls,"gaps":gaps,"authenticated_switches":authenticated_switches},ensure_ascii=False,indent=2),encoding="utf-8")
        manifest["functions"].append({"key":key,"role":role,"rows":len(rows),"gaps":len(gaps),"entry_is_interior_anchor":"interior anchor" in role})
    (out/"manifest.json").write_text(json.dumps(manifest,ensure_ascii=False,indent=2),encoding="utf-8")
    (out/"README.md").write_text("# ACNH 3.0.3 authenticated instruction index\n\n"+"\n".join(f'- [[Functions/{r["key"]}]] — {r["role"]}：{r["rows"]} instructions, {r["gaps"]} gaps' for r in manifest["functions"])+"\n",encoding="utf-8")
    scan_ui_lifecycle(elf,es,elfbase,code_start,code,raw,cs,out)
    export_ui_gate_and_talk(elf,es,elfbase,code_start,code,raw,cs,out)
    export_dialogue_scheduler_windows(elf,es,elfbase,code_start,code,raw,cs,out)
    export_choice_writers(elf,es,elfbase,code_start,code,raw,cs,out)
    export_message_archive_tables(elf,es,elfbase,raw,rel,out)
    if any(r["rows"]==0 for r in manifest["functions"]): raise SystemExit("one or more anchors lack byte-matched evidence; inspect artifact")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();main(a.root.resolve(),a.out.resolve())
