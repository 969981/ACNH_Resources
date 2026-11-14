
void FUN_01be26e0(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  byte bVar14;
  undefined2 uVar15;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  char *pcVar26;
  byte *pbVar27;
  long lVar28;
  uint uVar29;
  undefined *local_288;
  undefined1 auStack_280 [16];
  undefined *local_270;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *local_240;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined *local_78;
  undefined *puStack_70;
  
  puVar12 = PTR_DAT_04bb6448;
  lVar28 = *(long *)PTR_DAT_04bb2208;
  uVar29 = *(uint *)(lVar28 + 0x1d40);
  if (((int)uVar29 < 1) &&
     (((*(long *)(lVar28 + 0x1c30) == 0 ||
       (puVar24 = *(uint **)(*(long *)(lVar28 + 0x1c30) + 8), puVar24 == (uint *)0x0)) ||
      (uVar29 = *puVar24, uVar29 == 0)))) {
    return;
  }
  uVar23 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bb6b18 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar4 = PTR_DAT_04bb2d80 + 0x10;
  puVar5 = PTR_DAT_04bc07e8 + 0x10;
  pcVar26 = PTR_DAT_04bb6440;
LAB_01be27fc:
  if ((int)*(uint *)(lVar28 + 0x1d40) < 1) {
    if (((((*(long *)(lVar28 + 0x1c30) != 0) &&
          (puVar24 = *(uint **)(*(long *)(lVar28 + 0x1c30) + 8), puVar24 != (uint *)0x0)) &&
         ((*(uint *)(lVar28 + 0x1c48) <= uVar23 ||
          (*(char *)(*(long *)(lVar28 + 0x1c50) + (long)(int)uVar23) != '\0')))) &&
        ((uVar23 < *puVar24 && (puVar24[1] != 0)))) && ((ushort)puVar24[2] != 0)) {
      iVar21 = 0xc;
      if (*(char *)((long)puVar24 + 10) != '\0') {
        iVar21 = 0x1c;
      }
      puVar24 = (uint *)((ulong)(puVar24[1] * uVar23 + (uint)(ushort)puVar24[2] * 8 + iVar21) +
                        (long)puVar24);
      goto joined_r0x01be2940;
    }
  }
  else if (uVar23 < *(uint *)(lVar28 + 0x1d40)) {
    uVar17 = uVar23;
    if (*(uint *)(lVar28 + 0x1d30) <= uVar23) {
      uVar17 = 0;
    }
    puVar24 = *(uint **)(*(long *)(lVar28 + 0x1d38) + (ulong)uVar17 * 8);
joined_r0x01be2940:
    if ((puVar24 != (uint *)0x0) && (*puVar24 != 0)) {
      cVar16 = *pcVar26;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          *pcVar26 = '\x01';
          *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar12 + 0x4c);
          if (-1 < (int)uVar17) {
            if (((byte *)((ulong)uVar17 + (long)puVar24) != (byte *)0x0) &&
               (uVar17 = (uint)*(byte *)((ulong)uVar17 + (long)puVar24), uVar17 != 0)) {
              uVar25 = 1;
              goto LAB_01be2aa8;
            }
            break;
          }
          if (uVar17 != 0xffffffff) break;
        }
        lVar10 = (long)puVar24 - (ulong)*puVar24;
        if ((*puVar24 == 0) || (lVar10 == 0)) break;
        lVar7 = 0xc;
        if (*(char *)(lVar10 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        if (lVar7 + lVar10 == 0) break;
        uVar18 = (ulong)*(ushort *)(lVar10 + 8);
        *(undefined4 *)(puVar12 + 0x4c) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar20 = (int *)(lVar7 + lVar10 + 4);
        while (piVar20[-1] != 0x1be772f0) {
          piVar20 = piVar20 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_01be27f0;
        }
        iVar21 = 0;
        if (*piVar20 != -1) {
          iVar21 = *piVar20;
        }
        *(int *)(puVar12 + 0x4c) = iVar21;
        if (*puVar24 == 0) break;
      } while( true );
    }
  }
  goto LAB_01be27f0;
LAB_01be2aa8:
  do {
    uVar18 = FUN_0279be70(param_2,puVar24,uVar25);
    if ((uVar18 & 1) != 0) {
      if (param_1[1] <= *param_1) break;
      pbVar22 = *(byte **)(param_1 + 4);
      if (pbVar22 != (byte *)0x0) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)pbVar22;
      }
      pbVar22[0x28] = 0xff;
      pbVar22[0x29] = 0xff;
      pbVar22[0x2a] = 0xff;
      pbVar22[0x2b] = 0xff;
      pbVar22[0x2c] = 0;
      pbVar22[0x2d] = 0;
      pbVar22[0x2e] = 0;
      pbVar22[0x2f] = 0;
      pbVar22[0x30] = 0;
      pbVar22[0x31] = 0;
      pbVar22[0x32] = 0;
      pbVar22[0x33] = 0;
      pbVar22[0x34] = 0xff;
      pbVar22[0x35] = 0xff;
      pbVar22[0x36] = 0xff;
      pbVar22[0x37] = 0xff;
      pbVar22[0x54] = 0;
      *(undefined **)(pbVar22 + 0x40) = puVar1;
      *(byte **)(pbVar22 + 0x48) = pbVar22 + 0x54;
      *(byte **)(pbVar22 + 0xa0) = pbVar22 + 0xac;
      *pbVar22 = 0;
      pbVar22[2] = 0;
      pbVar22[3] = 0;
      pbVar22[4] = 0;
      pbVar22[5] = 0;
      pbVar22[8] = 0;
      pbVar22[9] = 0;
      pbVar22[10] = 0;
      pbVar22[0xb] = 0;
      *(byte **)(pbVar22 + 0x18) = pbVar22 + 0xf0;
      pbVar22[0x20] = 0x40;
      pbVar22[0x21] = 0;
      pbVar22[0x22] = 0;
      pbVar22[0x23] = 0;
      pbVar22[0x24] = 0;
      pbVar22[0x38] = 0xff;
      pbVar22[0x39] = 0xff;
      pbVar22[0x3a] = 0xff;
      pbVar22[0x3b] = 0xff;
      pbVar22[0x50] = 0x40;
      pbVar22[0x51] = 0;
      pbVar22[0x52] = 0;
      pbVar22[0x53] = 0;
      pbVar27 = pbVar22 + 0x10;
      *(undefined **)pbVar27 = puVar2;
      pbVar6 = pbVar22 + 0x170;
      pbVar8 = pbVar6;
      if (pbVar6 <= pbVar22 + 0xf2) {
        pbVar8 = pbVar22 + 0xf2;
      }
      pbVar22[0x93] = 0;
      pbVar22[0xa8] = 0x40;
      pbVar22[0xa9] = 0;
      pbVar22[0xaa] = 0;
      pbVar22[0xab] = 0;
      pbVar22[0xeb] = 0;
      pbVar22[0xac] = 0;
      *(undefined **)(pbVar22 + 0x98) = puVar1;
      pbVar22[0xf0] = 0;
      pbVar22[0xf1] = 0;
      pbVar22[0xf2] = 0;
      pbVar22[0xf3] = 0;
      pbVar22[0xf4] = 0;
      pbVar22[0xf5] = 0;
      pbVar22[0xf6] = 0;
      pbVar22[0xf7] = 0;
      pbVar22[0xf8] = 0;
      pbVar22[0xf9] = 0;
      pbVar22[0xfa] = 0;
      pbVar22[0xfb] = 0;
      pbVar22[0xfc] = 0;
      pbVar22[0xfd] = 0;
      pbVar22[0xfe] = 0;
      pbVar22[0xff] = 0;
      pbVar22[0x160] = 0;
      pbVar22[0x161] = 0;
      pbVar22[0x162] = 0;
      pbVar22[0x163] = 0;
      pbVar22[0x164] = 0;
      pbVar22[0x165] = 0;
      pbVar22[0x166] = 0;
      pbVar22[0x167] = 0;
      pbVar22[0x168] = 0;
      pbVar22[0x169] = 0;
      pbVar22[0x16a] = 0;
      pbVar22[0x16b] = 0;
      pbVar22[0x16c] = 0;
      pbVar22[0x16d] = 0;
      pbVar22[0x16e] = 0;
      pbVar22[0x16f] = 0;
      pbVar22[0x150] = 0;
      pbVar22[0x151] = 0;
      pbVar22[0x152] = 0;
      pbVar22[0x153] = 0;
      pbVar22[0x154] = 0;
      pbVar22[0x155] = 0;
      pbVar22[0x156] = 0;
      pbVar22[0x157] = 0;
      pbVar22[0x158] = 0;
      pbVar22[0x159] = 0;
      pbVar22[0x15a] = 0;
      pbVar22[0x15b] = 0;
      pbVar22[0x15c] = 0;
      pbVar22[0x15d] = 0;
      pbVar22[0x15e] = 0;
      pbVar22[0x15f] = 0;
      pbVar22[0x140] = 0;
      pbVar22[0x141] = 0;
      pbVar22[0x142] = 0;
      pbVar22[0x143] = 0;
      pbVar22[0x144] = 0;
      pbVar22[0x145] = 0;
      pbVar22[0x146] = 0;
      pbVar22[0x147] = 0;
      pbVar22[0x148] = 0;
      pbVar22[0x149] = 0;
      pbVar22[0x14a] = 0;
      pbVar22[0x14b] = 0;
      pbVar22[0x14c] = 0;
      pbVar22[0x14d] = 0;
      pbVar22[0x14e] = 0;
      pbVar22[0x14f] = 0;
      pbVar22[0x130] = 0;
      pbVar22[0x131] = 0;
      pbVar22[0x132] = 0;
      pbVar22[0x133] = 0;
      pbVar22[0x134] = 0;
      pbVar22[0x135] = 0;
      pbVar22[0x136] = 0;
      pbVar22[0x137] = 0;
      pbVar22[0x138] = 0;
      pbVar22[0x139] = 0;
      pbVar22[0x13a] = 0;
      pbVar22[0x13b] = 0;
      pbVar22[0x13c] = 0;
      pbVar22[0x13d] = 0;
      pbVar22[0x13e] = 0;
      pbVar22[0x13f] = 0;
      pbVar22[0x120] = 0;
      pbVar22[0x121] = 0;
      pbVar22[0x122] = 0;
      pbVar22[0x123] = 0;
      pbVar22[0x124] = 0;
      pbVar22[0x125] = 0;
      pbVar22[0x126] = 0;
      pbVar22[0x127] = 0;
      pbVar22[0x128] = 0;
      pbVar22[0x129] = 0;
      pbVar22[0x12a] = 0;
      pbVar22[299] = 0;
      pbVar22[300] = 0;
      pbVar22[0x12d] = 0;
      pbVar22[0x12e] = 0;
      pbVar22[0x12f] = 0;
      pbVar22[0x110] = 0;
      pbVar22[0x111] = 0;
      pbVar22[0x112] = 0;
      pbVar22[0x113] = 0;
      pbVar22[0x114] = 0;
      pbVar22[0x115] = 0;
      pbVar22[0x116] = 0;
      pbVar22[0x117] = 0;
      pbVar22[0x118] = 0;
      pbVar22[0x119] = 0;
      pbVar22[0x11a] = 0;
      pbVar22[0x11b] = 0;
      pbVar22[0x11c] = 0;
      pbVar22[0x11d] = 0;
      pbVar22[0x11e] = 0;
      pbVar22[0x11f] = 0;
      pbVar22[0x100] = 0;
      pbVar22[0x101] = 0;
      pbVar22[0x102] = 0;
      pbVar22[0x103] = 0;
      pbVar22[0x104] = 0;
      pbVar22[0x105] = 0;
      pbVar22[0x106] = 0;
      pbVar22[0x107] = 0;
      pbVar22[0x108] = 0;
      pbVar22[0x109] = 0;
      pbVar22[0x10a] = 0;
      pbVar22[0x10b] = 0;
      pbVar22[0x10c] = 0;
      pbVar22[0x10d] = 0;
      pbVar22[0x10e] = 0;
      pbVar22[0x10f] = 0;
      memset(pbVar22 + 0xf0,0,((ulong)(pbVar8 + (-0xe1 - (long)pbVar27)) & 0xfffffffffffffffe) + 2);
      pbVar22[0x184] = 0;
      pbVar22[0x188] = 0xff;
      pbVar22[0x189] = 0xff;
      pbVar22[0x18a] = 0xff;
      pbVar22[0x18b] = 0xff;
      pbVar22[0x18c] = 0;
      pbVar22[0x18d] = 0;
      pbVar22[0x18e] = 0;
      pbVar22[399] = 0;
      pbVar22[400] = 0;
      pbVar22[0x191] = 0;
      pbVar22[0x192] = 0;
      pbVar22[0x193] = 0;
      pbVar22[0x194] = 0xff;
      pbVar22[0x195] = 0xff;
      pbVar22[0x196] = 0xff;
      pbVar22[0x197] = 0xff;
      pbVar22[0x1b4] = 0;
      *(undefined **)(pbVar22 + 0x1a0) = puVar1;
      *(byte **)(pbVar22 + 0x1a8) = pbVar22 + 0x1b4;
      pbVar22[0x20c] = 0;
      pbVar22[0x180] = 0x40;
      pbVar22[0x181] = 0;
      pbVar22[0x182] = 0;
      pbVar22[0x183] = 0;
      pbVar22[0x1b0] = 0x40;
      pbVar22[0x1b1] = 0;
      pbVar22[0x1b2] = 0;
      pbVar22[0x1b3] = 0;
      pbVar22[0x208] = 0x40;
      pbVar22[0x209] = 0;
      pbVar22[0x20a] = 0;
      pbVar22[0x20b] = 0;
      pbVar22[0x198] = 0xff;
      pbVar22[0x199] = 0xff;
      pbVar22[0x19a] = 0xff;
      pbVar22[0x19b] = 0xff;
      pbVar22[499] = 0;
      pbVar22[0x24b] = 0;
      pbVar22[0x2c8] = 0;
      pbVar22[0x2c9] = 0;
      pbVar22[0x2ca] = 0;
      pbVar22[0x2cb] = 0;
      pbVar22[0x2cc] = 0;
      pbVar22[0x2cd] = 0;
      pbVar22[0x2ce] = 0;
      pbVar22[0x2cf] = 0;
      pbVar22[0x2c0] = 0;
      pbVar22[0x2c1] = 0;
      pbVar22[0x2c2] = 0;
      pbVar22[0x2c3] = 0;
      pbVar22[0x2c4] = 0;
      pbVar22[0x2c5] = 0;
      pbVar22[0x2c6] = 0;
      pbVar22[0x2c7] = 0;
      pbVar22[0x2b8] = 0;
      pbVar22[0x2b9] = 0;
      pbVar22[0x2ba] = 0;
      pbVar22[699] = 0;
      pbVar22[700] = 0;
      pbVar22[0x2bd] = 0;
      pbVar22[0x2be] = 0;
      pbVar22[0x2bf] = 0;
      pbVar22[0x2b0] = 0;
      pbVar22[0x2b1] = 0;
      pbVar22[0x2b2] = 0;
      pbVar22[0x2b3] = 0;
      pbVar22[0x2b4] = 0;
      pbVar22[0x2b5] = 0;
      pbVar22[0x2b6] = 0;
      pbVar22[0x2b7] = 0;
      pbVar22[0x2a8] = 0;
      pbVar22[0x2a9] = 0;
      pbVar22[0x2aa] = 0;
      pbVar22[0x2ab] = 0;
      pbVar22[0x2ac] = 0;
      pbVar22[0x2ad] = 0;
      pbVar22[0x2ae] = 0;
      pbVar22[0x2af] = 0;
      pbVar22[0x2a0] = 0;
      pbVar22[0x2a1] = 0;
      pbVar22[0x2a2] = 0;
      pbVar22[0x2a3] = 0;
      pbVar22[0x2a4] = 0;
      pbVar22[0x2a5] = 0;
      pbVar22[0x2a6] = 0;
      pbVar22[0x2a7] = 0;
      pbVar22[0x298] = 0;
      pbVar22[0x299] = 0;
      pbVar22[0x29a] = 0;
      pbVar22[0x29b] = 0;
      pbVar22[0x29c] = 0;
      pbVar22[0x29d] = 0;
      pbVar22[0x29e] = 0;
      pbVar22[0x29f] = 0;
      pbVar22[0x290] = 0;
      pbVar22[0x291] = 0;
      pbVar22[0x292] = 0;
      pbVar22[0x293] = 0;
      pbVar22[0x294] = 0;
      pbVar22[0x295] = 0;
      pbVar22[0x296] = 0;
      pbVar22[0x297] = 0;
      pbVar22[0x288] = 0;
      pbVar22[0x289] = 0;
      pbVar22[0x28a] = 0;
      pbVar22[0x28b] = 0;
      pbVar22[0x28c] = 0;
      pbVar22[0x28d] = 0;
      pbVar22[0x28e] = 0;
      pbVar22[0x28f] = 0;
      pbVar22[0x280] = 0;
      pbVar22[0x281] = 0;
      pbVar22[0x282] = 0;
      pbVar22[0x283] = 0;
      pbVar22[0x284] = 0;
      pbVar22[0x285] = 0;
      pbVar22[0x286] = 0;
      pbVar22[0x287] = 0;
      pbVar22[0x278] = 0;
      pbVar22[0x279] = 0;
      pbVar22[0x27a] = 0;
      pbVar22[0x27b] = 0;
      pbVar22[0x27c] = 0;
      pbVar22[0x27d] = 0;
      pbVar22[0x27e] = 0;
      pbVar22[0x27f] = 0;
      pbVar22[0x270] = 0;
      pbVar22[0x271] = 0;
      pbVar22[0x272] = 0;
      pbVar22[0x273] = 0;
      pbVar22[0x274] = 0;
      pbVar22[0x275] = 0;
      pbVar22[0x276] = 0;
      pbVar22[0x277] = 0;
      pbVar22[0x268] = 0;
      pbVar22[0x269] = 0;
      pbVar22[0x26a] = 0;
      pbVar22[0x26b] = 0;
      pbVar22[0x26c] = 0;
      pbVar22[0x26d] = 0;
      pbVar22[0x26e] = 0;
      pbVar22[0x26f] = 0;
      pbVar22[0x260] = 0;
      pbVar22[0x261] = 0;
      pbVar22[0x262] = 0;
      pbVar22[0x263] = 0;
      pbVar22[0x264] = 0;
      pbVar22[0x265] = 0;
      pbVar22[0x266] = 0;
      pbVar22[0x267] = 0;
      pbVar22[600] = 0;
      pbVar22[0x259] = 0;
      pbVar22[0x25a] = 0;
      pbVar22[0x25b] = 0;
      pbVar22[0x25c] = 0;
      pbVar22[0x25d] = 0;
      pbVar22[0x25e] = 0;
      pbVar22[0x25f] = 0;
      pbVar22[0x250] = 0;
      pbVar22[0x251] = 0;
      pbVar22[0x252] = 0;
      pbVar22[0x253] = 0;
      pbVar22[0x254] = 0;
      pbVar22[0x255] = 0;
      pbVar22[0x256] = 0;
      pbVar22[599] = 0;
      *(undefined **)(pbVar22 + 0x1f8) = puVar1;
      *(byte **)(pbVar22 + 0x200) = pbVar22 + 0x20c;
      *(undefined **)(pbVar22 + 0x170) = puVar2;
      *(byte **)(pbVar22 + 0x178) = pbVar22 + 0x250;
      pbVar8 = pbVar22 + 0x2d0;
      if (pbVar22 + 0x2d0 <= pbVar22 + 0x252) {
        pbVar8 = pbVar22 + 0x252;
      }
      memset(pbVar22 + 0x250,0,((ulong)(pbVar8 + (-0xe1 - (long)pbVar6)) & 0xfffffffffffffffe) + 2);
      if (*param_1 < param_1[1]) {
        *(byte **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = pbVar22;
        *param_1 = *param_1 + 1;
      }
      if (*puVar24 == 0) {
        uVar15 = 0;
      }
      else {
        cVar16 = *PTR_DAT_04bb6440;
LAB_01be2cc4:
        puVar11 = PTR_DAT_04bb6440;
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar12 = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
          *puVar11 = 1;
          *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
LAB_01be2d04:
          puVar19 = (uint *)(ulong)*puVar24;
          uVar15 = 0;
          if ((*puVar24 == 0) || (puVar24 == puVar19)) goto LAB_01be2974;
          lVar10 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar24 + (lVar10 - (long)puVar19);
          if (lVar10 == 0) goto LAB_01be2970;
          uVar18 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
          *(undefined4 *)(puVar12 + 0x3c) = 0xfffffffe;
          if (uVar18 == 0) goto LAB_01be2970;
          piVar20 = (int *)(lVar10 + 4);
          while (piVar20[-1] != 0x54706054) {
            piVar20 = piVar20 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_01be2970;
          }
          iVar21 = 0;
          if (*piVar20 != -1) {
            iVar21 = *piVar20;
          }
          *(int *)(puVar12 + 0x3c) = iVar21;
          if (*puVar24 == 0) goto LAB_01be2970;
          goto LAB_01be2cc4;
        }
        uVar9 = *(uint *)(puVar12 + 0x3c);
        if ((int)uVar9 < 0) {
          if (uVar9 != 0xffffffff) goto LAB_01be2970;
          goto LAB_01be2d04;
        }
        if ((undefined2 *)((ulong)uVar9 + (long)puVar24) != (undefined2 *)0x0) {
          uVar15 = *(undefined2 *)((ulong)uVar9 + (long)puVar24);
          goto LAB_01be2974;
        }
LAB_01be2970:
        uVar15 = 0;
      }
LAB_01be2974:
      *(undefined2 *)(pbVar22 + 4) = uVar15;
      puStack_70 = PTR_s_NookMilage_Keyword_Modifier_04c485f0;
      *(uint *)(pbVar22 + 8) = uVar25;
      local_78 = puVar3;
      FUN_006d8678(&local_288,"%03d_%02d",uVar15,uVar25 - 1);
      FUN_006f50a0(pbVar27,&local_78,&local_288,0);
      memset(auStack_280,0,0x1e0);
      local_250 = 0;
      uStack_248 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_84 = 0;
      local_7c = 0;
      local_288 = puVar5;
      local_270 = puVar4;
      local_240 = puVar4;
      local_210 = puVar4;
      local_1e0 = puVar4;
      local_1b0 = puVar4;
      local_180 = puVar4;
      local_150 = puVar4;
      local_120 = puVar4;
      local_f0 = puVar4;
      local_c0 = puVar4;
      bVar14 = FUN_01ba3894(&local_288,0x55,3,pbVar27);
      *pbVar22 = bVar14 & 1;
      pcVar26 = PTR_DAT_04bb6440;
    }
    bVar13 = uVar25 != uVar17;
    uVar25 = uVar25 + 1;
  } while (bVar13);
LAB_01be27f0:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar29) {
    return;
  }
  goto LAB_01be27fc;
}

