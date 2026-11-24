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
    if any(r["rows"]==0 for r in manifest["functions"]): raise SystemExit("one or more anchors lack byte-matched evidence; inspect artifact")
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--out",type=Path,required=True)
    a=p.parse_args();main(a.root.resolve(),a.out.resolve())
