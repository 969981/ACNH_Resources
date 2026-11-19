
undefined8 FUN_03914e80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *local_b8;
  byte *local_b0;
  undefined *local_a8;
  byte *local_a0;
  int local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined *local_70;
  undefined1 *local_68;
  
  puVar7 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar10 = malloc(0xcc8);
  }
  else {
    plVar8 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 8);
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_039158c4;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xcc8,8);
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[9] = 0;
    uVar3 = crc32b(0xffffffff,100,0x4c11db7);
    *(undefined1 *)(puVar10 + 10) = 0;
    puVar10[0xd] = 0;
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    *(undefined1 *)((long)puVar10 + 0xa3) = 0;
    uVar3 = crc32b(uVar3,0x66,0x4c11db7);
    *(undefined1 *)((long)puVar10 + 0x84) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[1] = &PTR_LAB_04b66170;
    *puVar10 = 8;
    *(undefined4 *)(puVar10 + 0x10) = 0x20;
    puVar10[0xb] = &PTR_LAB_04b664e8;
    uVar3 = crc32b(uVar3,0x75,0x4c11db7);
    puVar10[6] = 0;
    puVar10[7] = &PTR_LAB_04b661c8;
    puVar10[0xf] = (undefined1 *)((long)puVar10 + 0x84);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar17 = crc32b(uVar3,0x74,0x4c11db7);
    uVar17 = ~uVar17;
    *(uint *)(puVar10 + 8) = uVar17;
    *(uint *)(puVar10 + 0xc) = uVar17;
    *(undefined1 *)((long)puVar10 + 0xd4) = 0;
    puVar1 = PTR_DAT_04bb2028;
    puVar10[0x2b] = 0x3f80000000000000;
    puVar10[0x34] = &PTR_LAB_04b66170;
    puVar10[0x3a] = &PTR_LAB_04b661c8;
    *(undefined4 *)(puVar10 + 0x1a) = 0x20;
    *(undefined4 *)(puVar10 + 0x43) = 0x20;
    *(undefined4 *)(puVar10 + 0x4d) = 0x20;
    puVar1 = puVar1 + 0x10;
    puVar10[0x3c] = 0;
    puVar10[0x3e] = &PTR_LAB_04b664e8;
    puVar10[0x40] = 0;
    puVar10[0x42] = (long)puVar10 + 0x21c;
    puVar10[0x4a] = 0;
    puVar10[0x4c] = (long)puVar10 + 0x26c;
    *(undefined4 *)(puVar10 + 0x76) = 0x20;
    *(undefined4 *)(puVar10 + 0x80) = 0x20;
    *(undefined4 *)(puVar10 + 0xa9) = 0x20;
    puVar10[0x41] = puVar1;
    puVar10[0x54] = 0;
    puVar10[0x48] = &PTR_LAB_04b664e8;
    puVar10[0x4b] = puVar1;
    puVar10[0x58] = 0;
    puVar10[0x52] = &PTR_LAB_04b66268;
    puVar10[0x56] = &PTR_LAB_04b66268;
    puVar10[0x5c] = 0;
    puVar10[0x5a] = &PTR_LAB_04b66448;
    puVar10[0x5d] = 0;
    puVar10[0x61] = 0;
    puVar10[0x5e] = 0x3f80000000000000;
    puVar10[0x5f] = &PTR_LAB_04b66268;
    puVar10[0x65] = 0;
    puVar10[99] = &PTR_LAB_04b66308;
    puVar10[0x67] = &PTR_LAB_04b66170;
    puVar10[0x6c] = 0;
    puVar10[0x6d] = &PTR_LAB_04b661c8;
    puVar10[0x71] = &PTR_LAB_04b664e8;
    puVar10[0x6b] = 0;
    puVar10[0x74] = puVar1;
    puVar10[0x7b] = &PTR_LAB_04b664e8;
    puVar10[0x68] = 0;
    puVar10[0x7e] = puVar1;
    puVar10[0x85] = &PTR_LAB_04b66268;
    puVar10[0x6a] = 0;
    puVar10[0x89] = &PTR_LAB_04b66268;
    puVar10[0x8d] = &PTR_LAB_04b66448;
    puVar10[0x6f] = 0;
    puVar10[0x90] = 0;
    puVar10[0x91] = 0x3f80000000000000;
    puVar10[0x69] = 0;
    puVar10[0x73] = 0;
    puVar10[0x92] = &PTR_LAB_04b66268;
    puVar10[0x75] = (long)puVar10 + 0x3b4;
    puVar10[0x96] = &PTR_LAB_04b66308;
    puVar10[0x7d] = 0;
    puVar10[0x9a] = &PTR_LAB_04b66170;
    puVar10[0x7f] = (long)puVar10 + 0x404;
    puVar10[0xa0] = &PTR_LAB_04b661c8;
    puVar10[0x87] = 0;
    puVar10[0xa4] = &PTR_LAB_04b664e8;
    puVar10[0x8b] = 0;
    puVar10[0xa7] = puVar1;
    puVar10[0x8f] = 0;
    puVar10[0xae] = &PTR_LAB_04b664e8;
    puVar10[0x94] = 0;
    puVar10[0xb1] = puVar1;
    puVar10[0x98] = 0;
    puVar10[0x9f] = 0;
    puVar10[0xb8] = &PTR_LAB_04b66268;
    puVar10[0x9e] = 0;
    puVar10[0x9b] = 0;
    puVar10[0xbc] = &PTR_LAB_04b66268;
    puVar10[0x9d] = 0;
    puVar10[0xa2] = 0;
    puVar10[0xc0] = &PTR_LAB_04b66448;
    puVar10[0x9c] = 0;
    puVar10[0xa6] = 0;
    puVar10[0xc3] = 0;
    puVar10[0xa8] = (long)puVar10 + 0x54c;
    puVar10[0xc4] = 0x3f80000000000000;
    puVar10[0xb0] = 0;
    puVar10[0xc5] = &PTR_LAB_04b66268;
    puVar10[0xb2] = (long)puVar10 + 0x59c;
    puVar10[0xc9] = &PTR_LAB_04b66308;
    puVar10[0xba] = 0;
    puVar10[0xcd] = &PTR_LAB_04b66170;
    puVar10[0xbe] = 0;
    puVar10[0xd3] = &PTR_LAB_04b661c8;
    puVar10[0xc2] = 0;
    puVar10[0xd7] = &PTR_LAB_04b664e8;
    puVar10[199] = 0;
    puVar10[0xda] = puVar1;
    puVar10[0xcb] = 0;
    puVar10[0xd2] = 0;
    puVar10[0xe1] = &PTR_LAB_04b664e8;
    puVar10[0xd1] = 0;
    puVar10[0xce] = 0;
    puVar10[0xe4] = puVar1;
    puVar10[0xd0] = 0;
    puVar10[0xd5] = 0;
    puVar10[0xeb] = &PTR_LAB_04b66268;
    puVar10[0xcf] = 0;
    puVar10[0xd9] = 0;
    puVar10[0xef] = &PTR_LAB_04b66268;
    puVar10[0xdb] = (long)puVar10 + 0x6e4;
    puVar10[0xf3] = &PTR_LAB_04b66448;
    puVar10[0xe3] = 0;
    puVar10[0xf6] = 0;
    puVar10[0xe5] = (long)puVar10 + 0x734;
    puVar10[0xf7] = 0x3f80000000000000;
    puVar10[0xed] = 0;
    puVar10[0xf8] = &PTR_LAB_04b66268;
    puVar10[0xf1] = 0;
    puVar10[0xfc] = &PTR_LAB_04b66308;
    puVar10[0xf5] = 0;
    puVar10[0x100] = &PTR_LAB_04b66170;
    puVar10[0xfa] = 0;
    puVar10[0x106] = &PTR_LAB_04b661c8;
    puVar10[0xfe] = 0;
    puVar10[0x105] = 0;
    puVar10[0x10a] = &PTR_LAB_04b664e8;
    puVar10[0x104] = 0;
    puVar10[0x101] = 0;
    puVar10[0x10d] = puVar1;
    puVar10[0x103] = 0;
    puVar10[0x108] = 0;
    puVar10[0x114] = &PTR_LAB_04b664e8;
    puVar10[0x102] = 0;
    puVar10[0x10c] = 0;
    puVar10[0x117] = puVar1;
    puVar10[0x10e] = (long)puVar10 + 0x87c;
    puVar10[0x11e] = &PTR_LAB_04b66268;
    puVar10[0x116] = 0;
    puVar10[0x122] = &PTR_LAB_04b66268;
    puVar10[0x118] = (long)puVar10 + 0x8cc;
    puVar10[0x126] = &PTR_LAB_04b66448;
    puVar10[0x120] = 0;
    puVar10[0x129] = 0;
    puVar10[0x124] = 0;
    puVar10[0x12a] = 0x3f80000000000000;
    puVar10[0x128] = 0;
    puVar10[299] = &PTR_LAB_04b66268;
    puVar10[0x12d] = 0;
    puVar10[0x12f] = &PTR_LAB_04b66308;
    puVar10[0x131] = 0;
    puVar10[0x138] = 0;
    puVar10[0x133] = &PTR_LAB_04b66170;
    puVar10[0x137] = 0;
    puVar10[0x134] = 0;
    puVar10[0x139] = &PTR_LAB_04b661c8;
    puVar10[0x136] = 0;
    puVar10[0x13b] = 0;
    puVar10[0x13d] = &PTR_LAB_04b664e8;
    puVar10[0x135] = 0;
    puVar10[0x13f] = 0;
    puVar10[0x140] = puVar1;
    puVar10[0x141] = (long)puVar10 + 0xa14;
    puVar10[0x147] = &PTR_LAB_04b664e8;
    puVar10[0x14b] = (long)puVar10 + 0xa64;
    puVar10[0x151] = &PTR_LAB_04b66268;
    puVar10[0x155] = &PTR_LAB_04b66268;
    puVar10[0x159] = &PTR_LAB_04b66448;
    puVar10[0x15c] = 0;
    puVar10[0x15d] = 0x3f80000000000000;
    puVar10[0x15e] = &PTR_LAB_04b66268;
    puVar10[0x162] = &PTR_LAB_04b66308;
    puVar10[0x166] = &PTR_LAB_04b66170;
    puVar10[0x16c] = &PTR_LAB_04b661c8;
    puVar10[0x170] = &PTR_LAB_04b664e8;
    puVar10[0x149] = 0;
    puVar10[0x173] = puVar1;
    puVar10[0x14a] = puVar1;
    puVar10[0x17a] = &PTR_LAB_04b664e8;
    puVar10[0x153] = 0;
    puVar10[0x17d] = puVar1;
    puVar10[0x157] = 0;
    puVar10[0x184] = &PTR_LAB_04b66268;
    puVar10[0x15b] = 0;
    puVar10[0x188] = &PTR_LAB_04b66268;
    *(undefined4 *)(puVar10 + 0xb3) = 0x20;
    *(undefined4 *)(puVar10 + 0xdc) = 0x20;
    *(undefined4 *)(puVar10 + 0xe6) = 0x20;
    *(undefined4 *)(puVar10 + 0x10f) = 0x20;
    *(undefined4 *)(puVar10 + 0x119) = 0x20;
    *(undefined4 *)(puVar10 + 0x142) = 0x20;
    *(undefined4 *)(puVar10 + 0x14c) = 0x20;
    puVar10[0x16b] = 0;
    puVar10[0x16e] = 0;
    puVar10[0x172] = 0;
    *(undefined4 *)(puVar10 + 0x175) = 0x20;
    *(undefined4 *)(puVar10 + 0x17f) = 0x20;
    puVar10[0x18c] = &PTR_LAB_04b66448;
    puVar10[0x160] = 0;
    puVar10[0x16a] = 0;
    puVar10[0x174] = (long)puVar10 + 0xbac;
    puVar10[0x186] = 0;
    *(undefined4 *)((long)puVar10 + 0xc84) = 0x3f800000;
    puVar10[0x15] = &PTR_LAB_04b664e8;
    puVar10[0x1f] = &PTR_LAB_04b66268;
    puVar10[0x23] = &PTR_LAB_04b66268;
    puVar10[0x27] = &PTR_LAB_04b66448;
    puVar10[0x2c] = &PTR_LAB_04b66268;
    puVar10[0x164] = 0;
    puVar10[0x169] = 0;
    puVar10[0x17c] = 0;
    puVar10[0x18a] = 0;
    puVar10[0x191] = &PTR_LAB_04b66268;
    puVar10[0xe] = puVar1;
    puVar10[0x17] = 0;
    *(uint *)(puVar10 + 0x16) = uVar17;
    puVar10[0x19] = (undefined1 *)((long)puVar10 + 0xd4);
    *(undefined1 *)((long)puVar10 + 0xf3) = 0;
    puVar10[0x18] = puVar1;
    puVar10[0x21] = 0;
    *(uint *)(puVar10 + 0x20) = uVar17;
    *(undefined4 *)(puVar10 + 0x22) = 0;
    puVar10[0x25] = 0;
    *(uint *)(puVar10 + 0x24) = uVar17;
    *(undefined4 *)(puVar10 + 0x26) = 0;
    puVar10[0x29] = 0;
    *(uint *)(puVar10 + 0x28) = uVar17;
    puVar10[0x2a] = 0;
    puVar10[0x2e] = 0;
    *(uint *)(puVar10 + 0x2d) = uVar17;
    *(undefined4 *)(puVar10 + 0x2f) = 0;
    puVar10[0x32] = 0;
    *(uint *)(puVar10 + 0x31) = uVar17;
    puVar10[0x30] = &PTR_LAB_04b66308;
    *(undefined4 *)(puVar10 + 0x33) = 0;
    puVar10[0x35] = 0;
    puVar10[0x36] = 0;
    puVar10[0x37] = 0;
    puVar10[0x38] = 0;
    puVar10[0x39] = 0;
    *(uint *)(puVar10 + 0x3b) = uVar17;
    *(undefined1 *)(puVar10 + 0x3d) = 0;
    *(uint *)(puVar10 + 0x3f) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x23b) = 0;
    *(undefined1 *)((long)puVar10 + 0x21c) = 0;
    *(uint *)(puVar10 + 0x49) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x28b) = 0;
    *(undefined1 *)((long)puVar10 + 0x26c) = 0;
    *(uint *)(puVar10 + 0x53) = uVar17;
    *(undefined4 *)(puVar10 + 0x55) = 0;
    *(uint *)(puVar10 + 0x57) = uVar17;
    *(undefined4 *)(puVar10 + 0x59) = 0;
    *(uint *)(puVar10 + 0x5b) = uVar17;
    *(uint *)(puVar10 + 0x60) = uVar17;
    *(undefined4 *)(puVar10 + 0x62) = 0;
    *(uint *)(puVar10 + 100) = uVar17;
    *(undefined4 *)(puVar10 + 0x66) = 0;
    *(uint *)(puVar10 + 0x6e) = uVar17;
    *(undefined1 *)(puVar10 + 0x70) = 0;
    *(uint *)(puVar10 + 0x72) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x3d3) = 0;
    *(undefined1 *)((long)puVar10 + 0x3b4) = 0;
    *(uint *)(puVar10 + 0x7c) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x423) = 0;
    *(undefined1 *)((long)puVar10 + 0x404) = 0;
    *(uint *)(puVar10 + 0x86) = uVar17;
    *(undefined4 *)(puVar10 + 0x88) = 0;
    *(uint *)(puVar10 + 0x8a) = uVar17;
    *(undefined4 *)(puVar10 + 0x8c) = 0;
    *(uint *)(puVar10 + 0x8e) = uVar17;
    *(uint *)(puVar10 + 0x93) = uVar17;
    *(undefined4 *)(puVar10 + 0x95) = 0;
    *(uint *)(puVar10 + 0x97) = uVar17;
    *(undefined4 *)(puVar10 + 0x99) = 0;
    *(uint *)(puVar10 + 0xa1) = uVar17;
    *(undefined1 *)(puVar10 + 0xa3) = 0;
    *(uint *)(puVar10 + 0xa5) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x56b) = 0;
    *(undefined1 *)((long)puVar10 + 0x54c) = 0;
    *(uint *)(puVar10 + 0xaf) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x5bb) = 0;
    *(undefined1 *)((long)puVar10 + 0x59c) = 0;
    *(uint *)(puVar10 + 0xb9) = uVar17;
    *(undefined4 *)(puVar10 + 0xbb) = 0;
    *(uint *)(puVar10 + 0xbd) = uVar17;
    *(undefined4 *)(puVar10 + 0xbf) = 0;
    *(uint *)(puVar10 + 0xc1) = uVar17;
    *(uint *)(puVar10 + 0xc6) = uVar17;
    *(undefined4 *)(puVar10 + 200) = 0;
    *(uint *)(puVar10 + 0xca) = uVar17;
    *(undefined4 *)(puVar10 + 0xcc) = 0;
    *(uint *)(puVar10 + 0xd4) = uVar17;
    *(undefined1 *)(puVar10 + 0xd6) = 0;
    *(uint *)(puVar10 + 0xd8) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x703) = 0;
    *(undefined1 *)((long)puVar10 + 0x6e4) = 0;
    *(uint *)(puVar10 + 0xe2) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x753) = 0;
    *(undefined1 *)((long)puVar10 + 0x734) = 0;
    *(uint *)(puVar10 + 0xec) = uVar17;
    *(undefined4 *)(puVar10 + 0xee) = 0;
    *(uint *)(puVar10 + 0xf0) = uVar17;
    *(undefined4 *)(puVar10 + 0xf2) = 0;
    *(uint *)(puVar10 + 0xf4) = uVar17;
    *(uint *)(puVar10 + 0xf9) = uVar17;
    *(undefined4 *)(puVar10 + 0xfb) = 0;
    *(uint *)(puVar10 + 0xfd) = uVar17;
    *(undefined4 *)(puVar10 + 0xff) = 0;
    *(uint *)(puVar10 + 0x107) = uVar17;
    *(undefined1 *)(puVar10 + 0x109) = 0;
    *(uint *)(puVar10 + 0x10b) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x89b) = 0;
    *(undefined1 *)((long)puVar10 + 0x87c) = 0;
    *(uint *)(puVar10 + 0x115) = uVar17;
    *(undefined1 *)((long)puVar10 + 0x8eb) = 0;
    *(undefined1 *)((long)puVar10 + 0x8cc) = 0;
    *(uint *)(puVar10 + 0x11f) = uVar17;
    *(undefined4 *)(puVar10 + 0x121) = 0;
    *(uint *)(puVar10 + 0x123) = uVar17;
    *(undefined4 *)(puVar10 + 0x125) = 0;
    *(uint *)(puVar10 + 0x127) = uVar17;
    *(uint *)(puVar10 + 300) = uVar17;
    *(undefined4 *)(puVar10 + 0x12e) = 0;
    *(uint *)(puVar10 + 0x130) = uVar17;
    *(undefined4 *)(puVar10 + 0x132) = 0;
    *(uint *)(puVar10 + 0x13a) = uVar17;
    *(undefined1 *)(puVar10 + 0x13c) = 0;
    *(uint *)(puVar10 + 0x13e) = uVar17;
    *(undefined1 *)((long)puVar10 + 0xa33) = 0;
    *(undefined1 *)((long)puVar10 + 0xa14) = 0;
    *(uint *)(puVar10 + 0x148) = uVar17;
    *(undefined1 *)((long)puVar10 + 0xa83) = 0;
    *(undefined1 *)((long)puVar10 + 0xa64) = 0;
    *(uint *)(puVar10 + 0x152) = uVar17;
    *(undefined4 *)(puVar10 + 0x154) = 0;
    *(uint *)(puVar10 + 0x156) = uVar17;
    *(undefined4 *)(puVar10 + 0x158) = 0;
    *(uint *)(puVar10 + 0x15a) = uVar17;
    *(uint *)(puVar10 + 0x15f) = uVar17;
    *(undefined4 *)(puVar10 + 0x161) = 0;
    *(uint *)(puVar10 + 0x163) = uVar17;
    *(undefined4 *)(puVar10 + 0x165) = 0;
    puVar10[0x168] = 0;
    puVar10[0x167] = 0;
    *(uint *)(puVar10 + 0x16d) = uVar17;
    *(undefined1 *)(puVar10 + 0x16f) = 0;
    *(uint *)(puVar10 + 0x171) = uVar17;
    *(undefined1 *)((long)puVar10 + 0xbcb) = 0;
    *(undefined1 *)((long)puVar10 + 0xbac) = 0;
    *(uint *)(puVar10 + 0x17b) = uVar17;
    puVar10[0x17e] = (long)puVar10 + 0xbfc;
    *(undefined1 *)((long)puVar10 + 0xc1b) = 0;
    *(undefined1 *)((long)puVar10 + 0xbfc) = 0;
    *(uint *)(puVar10 + 0x185) = uVar17;
    *(undefined4 *)(puVar10 + 0x187) = 0;
    *(uint *)(puVar10 + 0x189) = uVar17;
    *(undefined4 *)(puVar10 + 0x18b) = 0;
    puVar10[0x18e] = 0;
    *(uint *)(puVar10 + 0x18d) = uVar17;
    *(undefined4 *)(puVar10 + 399) = 0;
    *(undefined8 *)((long)puVar10 + 0xc7c) = 0;
    puVar10[0x193] = 0;
    *(uint *)(puVar10 + 0x192) = uVar17;
    *(undefined4 *)(puVar10 + 0x194) = 0;
    puVar10[0x197] = 0;
    *(uint *)(puVar10 + 0x196) = uVar17;
    puVar10[0x195] = &PTR_LAB_04b66308;
    *(undefined4 *)(puVar10 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x2a60) = 8;
    *(undefined8 **)(param_1 + 0x2a68) = puVar10 + 1;
  }
LAB_039158c4:
  uVar17 = 0;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  do {
    lVar15 = *(long *)(param_1 + 0x2a68);
    uVar12 = uVar17;
    if (*(uint *)(param_1 + 0x2a60) <= uVar17) {
      uVar12 = 0;
    }
    uVar16 = (ulong)uVar12;
    FUN_006d8678(&local_a8,"illuminantinfo_%d",uVar17);
    uVar11 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar11 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a8);
    }
    lVar9 = lVar15 + uVar16 * 0x198;
    *(undefined8 *)(lVar9 + 0x28) = uVar11;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    *(uint *)(lVar9 + 0x1c) = uVar12;
    plVar8 = (long *)(param_1 + 0x110);
    if (*(long *)(param_1 + 0x118) != 0) {
      plVar8 = (long *)(*(long *)(param_1 + 0x118) + 0x20);
    }
    *plVar8 = lVar9;
    *(long *)(param_1 + 0x118) = lVar9;
    lVar18 = lVar15 + uVar16 * 0x198;
    local_a0 = (byte *)0x40f8111;
    *(undefined8 *)(lVar18 + 0x40) = 0;
    local_a8 = puVar7 + 0x10;
    (**(code **)(puVar7 + 0x28))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    plVar8 = (long *)(lVar9 + 8);
    lVar20 = lVar15 + uVar16 * 0x198;
    *(uint *)(lVar18 + 0x38) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar18 + 0x30;
    *(long *)(lVar9 + 0x10) = lVar18 + 0x30;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    *(undefined1 *)(lVar20 + 0x48) = 1;
    local_75 = 0;
    local_98 = 0x20;
    local_a8 = puVar1;
    local_a0 = local_94;
    (**(code **)(local_70 + 0x18))(&local_70);
    puVar19 = local_68;
    if (local_94 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_03915b1c;
        if (local_68[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03915b1c;
        }
        if (local_68[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03915b1c;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03915b1c:
      iVar4 = (int)lVar18;
      if (local_98 <= (int)lVar18) {
        iVar4 = local_98 + -1;
      }
      memcpy(local_94,puVar19,(long)iVar4);
      local_94[iVar4] = 0;
    }
    puVar21 = PTR_DAT_04bb2020;
    local_b8 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = (byte *)0x40d1923;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    local_a8 = puVar2;
    (**(code **)(puVar21 + 0x28))(&local_b8);
    uVar12 = (uint)*local_b0;
    if (*local_b0 != 0) {
      uVar13 = 0xffffffff;
      pbVar14 = local_b0;
      do {
        pbVar14 = pbVar14 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*pbVar14;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    *(uint *)(lVar20 + 0x58) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar20 + 0x50;
    *(long *)(lVar9 + 0x10) = lVar20 + 0x50;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    puVar19 = *(undefined1 **)(lVar15 + uVar16 * 0x198 + 0x70);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    pbVar14 = local_a0;
    if (puVar19 != local_a0) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar18 = 0;
      do {
        if (local_a0[lVar18] == '\0') goto LAB_03915c50;
        if (local_a0[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03915c50;
        }
        if (local_a0[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03915c50;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03915c50:
      iVar6 = *(int *)(lVar15 + uVar16 * 0x198 + 0x78);
      iVar4 = (int)lVar18;
      if (iVar6 <= (int)lVar18) {
        iVar4 = iVar6 + -1;
      }
      memcpy(puVar19,pbVar14,(long)iVar4);
      puVar19[iVar4] = 0;
      puVar21 = PTR_DAT_04bb2020;
    }
    local_75 = 0;
    local_98 = 0x20;
    local_a8 = PTR_DAT_04bb2a08 + 0x10;
    local_a0 = local_94;
    (**(code **)(local_70 + 0x18))(&local_70);
    puVar19 = local_68;
    if (local_94 != local_68) {
      (**(code **)(local_70 + 0x18))(&local_70);
      lVar18 = 0;
      do {
        if (local_68[lVar18] == '\0') goto LAB_03915d1c;
        if (local_68[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03915d1c;
        }
        if (local_68[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03915d1c;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03915d1c:
      iVar4 = (int)lVar18;
      if (local_98 <= (int)lVar18) {
        iVar4 = local_98 + -1;
      }
      memcpy(local_94,puVar19,(long)iVar4);
      local_94[iVar4] = 0;
    }
    lVar18 = lVar15 + uVar16 * 0x198;
    local_a8 = PTR_DAT_04bb2028 + 0x10;
    local_b8 = puVar21 + 0x10;
    local_b0 = (byte *)0x40dc3e0;
    *(undefined8 *)(lVar18 + 0xb0) = 0;
    (**(code **)(puVar21 + 0x28))(&local_b8);
    uVar12 = (uint)*local_b0;
    if (*local_b0 != 0) {
      uVar13 = 0xffffffff;
      pbVar14 = local_b0;
      do {
        pbVar14 = pbVar14 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*pbVar14;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    *(uint *)(lVar18 + 0xa8) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar18 + 0xa0;
    *(long *)(lVar9 + 0x10) = lVar18 + 0xa0;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    puVar19 = *(undefined1 **)(lVar15 + uVar16 * 0x198 + 0xc0);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    pbVar14 = local_a0;
    if (puVar19 != local_a0) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar18 = 0;
      do {
        if (local_a0[lVar18] == '\0') goto LAB_03915e50;
        if (local_a0[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03915e50;
        }
        if (local_a0[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03915e50;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03915e50:
      iVar6 = *(int *)(lVar15 + uVar16 * 0x198 + 200);
      iVar4 = (int)lVar18;
      if (iVar6 <= (int)lVar18) {
        iVar4 = iVar6 + -1;
      }
      memcpy(puVar19,pbVar14,(long)iVar4);
      puVar19[iVar4] = 0;
      puVar21 = PTR_DAT_04bb2020;
    }
    lVar18 = lVar15 + uVar16 * 0x198;
    local_a0 = (byte *)0x407ffac;
    *(undefined8 *)(lVar18 + 0x100) = 0;
    local_a8 = puVar21 + 0x10;
    (**(code **)(puVar21 + 0x28))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    lVar20 = lVar15 + uVar16 * 0x198;
    *(uint *)(lVar18 + 0xf8) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar18 + 0xf0;
    *(long *)(lVar9 + 0x10) = lVar18 + 0xf0;
    *(undefined4 *)(lVar20 + 0x108) = 0;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    local_a0 = (byte *)0x4094d59;
    *(undefined8 *)(lVar20 + 0x120) = 0;
    local_a8 = puVar21 + 0x10;
    (**(code **)(puVar21 + 0x28))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    lVar18 = lVar15 + uVar16 * 0x198;
    *(uint *)(lVar20 + 0x118) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar20 + 0x110;
    *(long *)(lVar9 + 0x10) = lVar20 + 0x110;
    *(undefined4 *)(lVar18 + 0x128) = 0;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    local_a0 = (byte *)0x40b926a;
    *(undefined8 *)(lVar18 + 0x140) = 0;
    local_a8 = puVar21 + 0x10;
    (**(code **)(puVar21 + 0x28))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    lVar20 = lVar15 + uVar16 * 0x198;
    *(uint *)(lVar18 + 0x138) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar18 + 0x130;
    *(long *)(lVar9 + 0x10) = lVar18 + 0x130;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    *(undefined1 **)(lVar20 + 0x148) = &DAT_3f8000003f800000;
    *(undefined1 **)(lVar20 + 0x150) = &DAT_3f8000003f800000;
    local_a0 = (byte *)0x40f17c0;
    *(undefined8 *)(lVar20 + 0x188) = 0;
    local_a8 = puVar21 + 0x10;
    (**(code **)(puVar21 + 0x28))(&local_a8);
    uVar12 = (uint)*local_a0;
    if (*local_a0 != 0) {
      uVar13 = 0xffffffff;
      do {
        local_a0 = local_a0 + 1;
        uVar13 = crc32b(uVar13,uVar12,0x4c11db7);
        uVar12 = (uint)*local_a0;
      } while (uVar12 != 0);
      uVar12 = ~uVar13;
    }
    lVar18 = lVar15 + uVar16 * 0x198;
    *(uint *)(lVar20 + 0x180) = uVar12;
    plVar5 = plVar8;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *plVar5 = lVar20 + 0x178;
    *(long *)(lVar9 + 0x10) = lVar20 + 0x178;
    local_a8 = puVar21 + 0x10;
    *(undefined4 *)(lVar18 + 400) = 0;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    local_a0 = (byte *)0x40e2e60;
    *(undefined8 *)(lVar18 + 0x168) = 0;
    (**(code **)(puVar21 + 0x28))(&local_a8);
    uVar13 = (uint)*local_a0;
    uVar12 = 0;
    if (*local_a0 != 0) {
      uVar12 = 0xffffffff;
      pbVar14 = local_a0;
      do {
        pbVar14 = pbVar14 + 1;
        uVar12 = crc32b(uVar12,uVar13,0x4c11db7);
        uVar13 = (uint)*pbVar14;
      } while (uVar13 != 0);
      uVar12 = ~uVar12;
    }
    uVar17 = uVar17 + 1;
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar8 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
    }
    *(uint *)(lVar18 + 0x160) = uVar12;
    *plVar8 = lVar18 + 0x158;
    *(long *)(lVar9 + 0x10) = lVar18 + 0x158;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    *(undefined4 *)(lVar15 + uVar16 * 0x198 + 0x170) = 0x453b8000;
    if (uVar17 == 8) {
      return 1;
    }
  } while( true );
}

