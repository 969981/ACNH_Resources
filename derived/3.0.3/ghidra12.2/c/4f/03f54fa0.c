
void FUN_03f54fa0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  
  uVar5 = (ushort)(param_2 >> 4) & 3;
  *(ushort *)(param_1 + 0xc6) = uVar5;
  *(ushort *)(param_1 + 0xc4) = uVar5;
  sVar11 = *(short *)(param_1 + 0x230);
  sVar7 = *(short *)(param_1 + 0x232);
  *(undefined4 *)(param_1 + 0x250) = 0;
  uVar17 = (uint)*(short *)(param_1 + 0x234);
  *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x22c);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_1 + 0x22e);
  *(short *)(param_1 + 0x9c) = *(short *)(param_1 + 0x22a);
  *(short *)(param_1 + 0x1c6) = sVar11;
  *(short *)(param_1 + 0x1c4) = sVar7;
  uVar13 = uVar17;
  if ((int)uVar17 < 0) {
    if (uVar17 != 0xffff8000) {
      uVar13 = -uVar17;
      goto LAB_03f55024;
    }
    uVar18 = 0;
    uVar13 = 0x8000;
  }
  else {
LAB_03f55024:
    iVar14 = (int)(uVar13 << 0x10) >> 0x18;
    uVar21 = (uVar13 & 0xff) * 0x32440;
    *(undefined2 *)(param_1 + 0x22) = 0x80;
    uVar13 = iVar14 + 0x198;
    *(short *)(param_1 + 0x18) = (short)(uVar21 >> 0x10);
    iVar19 = (uVar21 >> 0x10) * 2;
    sVar15 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar13;
    sVar3 = *(short *)(&DAT_041ea9d8 + ((ulong)uVar13 & 0xffff) * 2);
    uVar21 = iVar19 * sVar3;
    *(short *)(param_1 + 0x1a) = sVar3;
    *(short *)(param_1 + 0x1e) = (short)uVar21;
    uVar18 = (int)sVar3 - (iVar19 * sVar15 >> 0x10);
    *(short *)(param_1 + 0x1c) = (short)(uVar21 >> 0x10);
    uVar13 = 0xffff8001;
    if (-0x8001 < (int)uVar18) {
      uVar13 = uVar18;
    }
    uVar21 = (int)sVar15 + (uVar21 >> 0x10) & 0xffff;
    *(short *)(param_1 + 0x14) = (short)uVar13;
    if (0x7ffe < uVar21) {
      uVar21 = 0x7fff;
    }
    uVar18 = -uVar21;
    if (-1 < (int)uVar17) {
      uVar18 = uVar21;
    }
  }
  uVar21 = (uint)*(short *)(param_1 + 0x236);
  *(undefined2 *)(param_1 + 0x24) = 0x7d;
  *(undefined2 *)(param_1 + 0x16) = 0x76;
  sVar15 = (short)uVar18;
  *(short *)(param_1 + 0x20) = sVar15;
  *(undefined4 *)(param_1 + 0x23c) = 7;
  *(short *)(param_1 + 0x126) = (short)uVar13;
  *(undefined2 *)(param_1 + 0x28) = 0x65;
  *(short *)(param_1 + 0x124) = (short)-uVar18;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x102) = 0;
  *(short *)(param_1 + 0x104) = (short)uVar13;
  *(short *)(param_1 + 0x106) = sVar15;
  *(undefined2 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x7fff;
  *(undefined2 *)(param_1 + 0x114) = 0x7fff;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar17 = uVar21;
  if ((int)uVar21 < 0) {
    if (uVar21 != 0xffff8000) {
      uVar17 = -uVar21;
      goto LAB_03f55128;
    }
    uVar20 = 0;
    iVar19 = 0x8000;
  }
  else {
LAB_03f55128:
    iVar14 = (int)(uVar17 << 0x10) >> 0x18;
    uVar17 = (uVar17 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    iVar8 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x198) & 0xffff) * 2) -
            ((int)(uVar17 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2))
            >> 0x10);
    iVar19 = -0x7fff;
    if (-0x8001 < iVar8) {
      iVar19 = iVar8;
    }
    uVar17 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2) +
             (uVar17 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x198) & 0xffff) * 2) >>
             0x10) & 0xffff;
    if (0x7ffe < uVar17) {
      uVar17 = 0x7fff;
    }
    uVar20 = -uVar17;
    if (-1 < (int)uVar21) {
      uVar20 = uVar17;
    }
  }
  uVar17 = -(uVar13 >> 0xf & 1) & 0xfffe0000 | (uVar13 & 0xffff) << 1;
  sVar3 = (short)uVar20;
  *(short *)(param_1 + 0xf0) = sVar3;
  uVar4 = -(-uVar18 >> 0xf & 1) & 0xfffe0000 | uVar18 * -2 & 0x1fffe;
  *(short *)(param_1 + 0xba) = sVar3;
  *(short *)(param_1 + 0x20) = sVar11;
  *(short *)(param_1 + 0x120) = (short)(uVar13 * 0x10000 - uVar17 >> 0x10);
  sVar6 = (short)iVar19;
  iVar14 = uVar4 * (int)sVar3;
  *(short *)(param_1 + 0x22) = sVar7;
  *(short *)(param_1 + 0xf2) = sVar6;
  *(short *)(param_1 + 0xd0) = sVar6;
  *(short *)(param_1 + 0xd2) = -sVar3;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(short *)(param_1 + 0x11e) = (short)(uVar4 * (int)sVar6 >> 0x10);
  uVar13 = iVar14 >> 0xf & 0xfffffffe;
  iVar12 = (int)sVar11;
  iVar8 = (int)sVar7;
  sVar7 = *(short *)(param_1 + 0x22a) + (short)(uVar13 * iVar12 >> 0x10);
  *(short *)(param_1 + 0x11c) = (short)((uint)iVar14 >> 0x10);
  *(short *)(param_1 + 0x100) = (short)(uVar18 * 0x10000 + sVar15 * -2 >> 0x10);
  sVar11 = sVar7 - (short)(uVar13 * iVar8 >> 0x10);
  *(short *)(param_1 + 0x19c) = sVar7;
  *(short *)(param_1 + 0xfe) = (short)(uVar17 * (int)sVar6 >> 0x10);
  iVar14 = uVar17 * (int)sVar3;
  *(short *)(param_1 + 0x19e) = sVar11;
  *(short *)(param_1 + 0x9c) = (short)((uint)(int)sVar7 >> 0xf);
  *(undefined4 *)(param_1 + 0x24) = 0x32b005a;
  *(short *)(param_1 + 0x9e) = (short)((uint)(int)sVar11 >> 0xf);
  uVar13 = iVar14 >> 0xf & 0xfffffffe;
  *(short *)(param_1 + 0xfc) = (short)((uint)iVar14 >> 0x10);
  sVar7 = *(short *)(param_1 + 0x7c) + (short)(uVar13 * iVar12 >> 0x10);
  *(short *)(param_1 + 0xde) = (short)(uVar20 * -0x10000 + -sVar3 * -2 >> 0x10);
  *(undefined2 *)(param_1 + 0x1a) = 0x7fff;
  sVar11 = sVar7 - (short)(uVar13 * iVar8 >> 0x10);
  iVar19 = iVar19 * 0x10000 + sVar6 * -2;
  *(short *)(param_1 + 0x17c) = sVar7;
  *(short *)(param_1 + 0x17e) = sVar11;
  *(short *)(param_1 + 0x7c) = (short)((uint)(int)sVar7 >> 0xf);
  uVar17 = iVar19 >> 0xf & 0xfffffffe;
  *(short *)(param_1 + 0xdc) = (short)((uint)iVar19 >> 0x10);
  *(short *)(param_1 + 0x7e) = (short)((uint)(int)sVar11 >> 0xf);
  uVar13 = (uint)*(ushort *)(param_1 + 0x5c) + (uVar17 * iVar12 >> 0x10);
  sVar11 = (short)uVar13;
  sVar7 = sVar11 - (short)(uVar17 * iVar8 >> 0x10);
  *(short *)(param_1 + 0x15c) = sVar11;
  *(short *)(param_1 + 0x5c) = (short)((uint)(int)sVar11 >> 0xf);
  *(short *)(param_1 + 0x18) = sVar7;
  *(short *)(param_1 + 0x15e) = sVar7;
  *(short *)(param_1 + 0x1e) = sVar7 * 2;
  uVar10 = (undefined2)((uint)(int)sVar7 >> 0xf);
  *(undefined2 *)(param_1 + 0x1c) = uVar10;
  *(undefined2 *)(param_1 + 0x5e) = uVar10;
  if ((uVar13 & 0xffff) == 0) {
    iVar19 = 0;
    uVar10 = 0;
  }
  else {
    iVar14 = 0;
    do {
      iVar19 = iVar14;
      uVar10 = (undefined2)uVar13;
      uVar17 = uVar13 & 0x8000;
      uVar18 = uVar13 >> 0xe;
      uVar13 = uVar13 << 1;
      iVar14 = iVar19 + 1;
    } while ((uVar18 & 1) == uVar17 >> 0xf);
    iVar19 = 0xf - iVar19;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar10;
  uVar13 = iVar19 + 0x1200;
  *(short *)(param_1 + 0x1c0) = (short)iVar19;
  *(short *)(param_1 + 0x14) = (short)uVar13;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(short *)(param_1 + 0x1a) = (short)uVar13;
  if ((uVar13 & 0xffff) == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar16 = uVar5;
      uVar17 = uVar13;
      uVar13 = uVar17 << 1;
      uVar5 = uVar16 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar17;
    *(short *)(param_1 + 0x14) = (short)uVar17;
    *(ushort *)(param_1 + 0x16) = -0xb - uVar16;
    *(ushort *)(param_1 + 0x24) = uVar16 & 0xf0;
  }
  FUN_03f577f4(param_1);
  if (*(ushort *)(param_1 + 0x14) == 0) {
    sVar11 = 0;
    iVar19 = 0;
LAB_03f55434:
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(short *)(param_1 + 0x26) = (short)(iVar19 + 0x22U);
    uVar17 = (uint)((int)sVar11 *
                   (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar19 + 0x22U & 0x3ff) * 2)) >> 0xf &
             0xffff;
  }
  else {
    uVar13 = (uint)*(ushort *)(param_1 + 0x14);
    iVar19 = 0;
    do {
      iVar14 = iVar19;
      uVar17 = uVar13;
      sVar11 = (short)uVar17;
      uVar13 = uVar17 << 1;
      iVar19 = iVar14 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    iVar19 = (uint)*(ushort *)(param_1 + 0x16) - iVar14;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar14 & 0xf0;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    if ((iVar19 - 0xfU >> 0xf & 1) != 0) goto LAB_03f55434;
    if ((short)(iVar19 - 0xfU) != 0) {
      *(undefined2 *)(param_1 + 0x16) = 0;
      uVar17 = 0xffff8001;
      if (-1 < sVar11) {
        uVar17 = 0x7fff;
      }
    }
  }
  sVar11 = (short)uVar17;
  *(short *)(param_1 + 0x20) = sVar11;
  *(short *)(param_1 + 0x18) = sVar11;
  *(short *)(param_1 + 0x1c) = -sVar11;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  if ((uVar21 - uVar17 >> 0xf & 1) == 0) {
    sVar11 = (short)(uVar21 - uVar17);
    *(short *)(param_1 + 0x18) = sVar11;
    *(short *)(param_1 + 0x1c) = -sVar11;
    sVar11 = sVar11 * -4;
    uVar21 = uVar17;
  }
  else {
    sVar11 = 0;
  }
  *(short *)(param_1 + 0xa8) = sVar11;
  sVar11 = (short)uVar21;
  if ((uVar21 >> 0xf & 1) == 0) {
LAB_03f554b8:
    iVar14 = (int)(uVar21 << 0x10) >> 0x18;
    uVar17 = (uVar21 & 0xff) * 0x32440;
    *(undefined4 *)(param_1 + 0x22) = 0x80;
    uVar13 = iVar14 + 0x198;
    *(short *)(param_1 + 0x18) = (short)(uVar17 >> 0x10);
    iVar19 = (uVar17 >> 0x10) * 2;
    sVar7 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar13;
    *(short *)(param_1 + 0x20) = sVar7;
    sVar15 = *(short *)(&DAT_041ea9d8 + ((ulong)uVar13 & 0xffff) * 2);
    uVar17 = iVar19 * sVar15;
    *(short *)(param_1 + 0x1e) = (short)uVar17;
    uVar21 = (int)sVar15 - (iVar19 * sVar7 >> 0x10);
    *(short *)(param_1 + 0x1c) = (short)(uVar17 >> 0x10);
    uVar13 = 0xffff8001;
    if (-0x8001 < (int)uVar21) {
      uVar13 = uVar21;
    }
    uVar17 = (int)sVar7 + (uVar17 >> 0x10);
    sVar7 = (short)uVar17;
    uVar10 = (undefined2)uVar13;
    *(undefined2 *)(param_1 + 0x14) = uVar10;
    *(undefined2 *)(param_1 + 0xb8) = uVar10;
    *(undefined2 *)(param_1 + 0x1a) = uVar10;
    if (0x7ffe < (uVar17 & 0xffff)) {
      sVar7 = 0x7fff;
    }
    sVar15 = -sVar7;
    if (-1 < sVar11) {
      sVar15 = sVar7;
    }
    *(short *)(param_1 + 0x1ba) = sVar15;
    if ((uVar13 & 0xffff) != 0) goto LAB_03f55554;
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    if ((uVar21 & 0xffff) != 0x8000) {
      uVar21 = -uVar21;
      goto LAB_03f554b8;
    }
    *(short *)(param_1 + 0xb8) = sVar11;
    *(undefined2 *)(param_1 + 0x1ba) = 0;
    uVar13 = 0x8000;
LAB_03f55554:
    uVar5 = 0;
    do {
      uVar16 = uVar5;
      uVar17 = uVar13;
      uVar13 = uVar17 << 1;
      uVar5 = uVar16 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar17;
    *(short *)(param_1 + 0x14) = (short)uVar17;
    *(ushort *)(param_1 + 0x16) = -uVar16;
    *(ushort *)(param_1 + 0x24) = uVar16 & 0xf0;
  }
  FUN_03f577f4(param_1);
  sVar11 = *(short *)(param_1 + 0xa8);
  iVar19 = sVar11 * 2;
  uVar13 = iVar19 * sVar11 >> 0xf & 0xfffffffe;
  iVar8 = ((int)(uVar13 * 0xa26 + 0x277a0000) >> 0x10) * uVar13;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x14);
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x1c4);
  iVar14 = *(short *)(param_1 + 0x1c4) * 2;
  *(undefined2 *)(param_1 + 0x1bc) = *(undefined2 *)(param_1 + 0x16);
  *(short *)(param_1 + 0x16) = (short)((uint)iVar8 >> 0x10);
  *(short *)(param_1 + 0x40) =
       -(short)((uint)((((sVar11 * 0x2958 >> 0x10) * iVar19 + 0x64880000 >> 0x10) * iVar19 >> 0x10)
                      * iVar14) >> 0x10);
  uVar13 = (int)*(short *)(param_1 + 0xb8) +
           ((uint)((int)*(short *)(param_1 + 0xb8) * (iVar8 >> 0x10)) >> 0xf);
  sVar11 = (short)uVar13;
  *(short *)(param_1 + 0x14) = sVar11;
  *(short *)(param_1 + 0x1a) = sVar11;
  iVar14 = iVar14 * sVar11;
  *(short *)(param_1 + 0x1e) = (short)iVar14;
  uVar10 = (undefined2)((uint)iVar14 >> 0x10);
  *(undefined2 *)(param_1 + 0x1c) = uVar10;
  *(undefined2 *)(param_1 + 0x1b8) = uVar10;
  *(undefined4 *)(param_1 + 0x24) = 0x3230000;
  if ((uVar13 & 0xffff) == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar16 = uVar5;
      uVar17 = uVar13;
      uVar13 = uVar17 << 1;
      uVar5 = uVar16 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar17;
    *(short *)(param_1 + 0x14) = (short)uVar17;
    *(ushort *)(param_1 + 0x16) = -uVar16;
    *(ushort *)(param_1 + 0x24) = uVar16 & 0xf0;
  }
  FUN_03f577f4(param_1);
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x14);
  uVar5 = *(ushort *)(param_1 + 0x1ba);
  *(undefined2 *)(param_1 + 0x1be) = *(undefined2 *)(param_1 + 0x16);
  *(ushort *)(param_1 + 0x14) = uVar5;
  *(ushort *)(param_1 + 0x1a) = uVar5;
  if (uVar5 == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar13 = (uint)uVar5;
    uVar5 = 0;
    do {
      uVar16 = uVar5;
      uVar17 = uVar13;
      uVar13 = uVar17 << 1;
      uVar5 = uVar16 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar17;
    *(short *)(param_1 + 0x14) = (short)uVar17;
    *(ushort *)(param_1 + 0x16) = -0xf - uVar16;
    *(ushort *)(param_1 + 0x24) = uVar16 & 0xf0;
  }
  FUN_03f577f4(param_1);
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x14);
  uVar13 = (uint)*(ushort *)(param_1 + 0x1b8);
  if (*(ushort *)(param_1 + 0x1b8) == 0) {
    sVar11 = 0;
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    do {
      iVar14 = iVar19;
      sVar11 = (short)uVar13;
      uVar17 = uVar13 & 0x8000;
      uVar21 = uVar13 >> 0xe;
      uVar13 = uVar13 << 1;
      iVar19 = iVar14 + 1;
    } while ((uVar21 & 1) == uVar17 >> 0xf);
    iVar19 = (uint)*(ushort *)(param_1 + 0x16) - iVar14;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar14 & 0xf0;
  }
  *(short *)(param_1 + 0x1a) = sVar11;
  uVar13 = (int)*(short *)(param_1 + 0x14) * (int)sVar11;
  if ((uVar13 >> 0xf & 0xffff) == 0) {
    iVar19 = 0;
    sVar11 = 0;
LAB_03f557ec:
    *(short *)(param_1 + 0x18) = sVar11;
    sVar15 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar19 + 0x22U & 0x3ff) * 2);
    sVar7 = (short)((uint)((int)sVar11 * (int)sVar15) >> 0xf);
    *(short *)(param_1 + 0x1c) = sVar7;
    *(short *)(param_1 + 0x1e) = (short)((int)sVar11 * (int)sVar15) * 2;
  }
  else {
    uVar13 = -((uVar13 & 0x7fffffff) >> 0xf);
    iVar14 = 0;
    do {
      iVar8 = iVar14;
      sVar11 = (short)uVar13;
      uVar17 = uVar13 & 0x8000;
      uVar21 = uVar13 >> 0xe;
      uVar13 = uVar13 << 1;
      iVar14 = iVar8 + 1;
    } while ((uVar21 & 1) == uVar17 >> 0xf);
    iVar19 = iVar19 - iVar8;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar8 & 0xf0;
    if ((iVar19 - 0xfU >> 0xf & 1) != 0) goto LAB_03f557ec;
    sVar15 = -0x7fff;
    if (-1 < sVar11) {
      sVar15 = 0x7fff;
    }
    sVar7 = sVar11;
    if ((short)(iVar19 - 0xfU) != 0) {
      sVar7 = sVar15;
    }
  }
  uVar13 = (uint)*(ushort *)(param_1 + 0x15c);
  *(short *)(param_1 + 0x20) = sVar7;
  if (*(ushort *)(param_1 + 0x15c) == 0) {
    sVar11 = 0;
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    do {
      iVar14 = iVar19;
      sVar11 = (short)uVar13;
      uVar17 = uVar13 & 0x8000;
      uVar21 = uVar13 >> 0xe;
      uVar13 = uVar13 << 1;
      iVar19 = iVar14 + 1;
    } while ((uVar21 & 1) == uVar17 >> 0xf);
    *(short *)(param_1 + 0x1a) = sVar11;
    iVar19 = 0xf - iVar14;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar14 & 0xf0;
  }
  uVar13 = (int)sVar11 * (int)*(short *)(param_1 + 0xbc);
  if ((uVar13 >> 0xf & 0xffff) == 0) {
    iVar14 = 0;
    sVar11 = 0;
  }
  else {
    uVar13 = (uVar13 & 0x7fffffff) >> 0xf;
    iVar8 = 0;
    do {
      iVar14 = iVar8;
      uVar17 = uVar13;
      sVar11 = (short)uVar17;
      uVar13 = uVar17 << 1;
      iVar8 = iVar14 + 1;
    } while ((uVar17 >> 0xe & 1) == (uVar17 & 0x8000) >> 0xf);
    iVar14 = ((uint)*(ushort *)(param_1 + 0x1bc) + iVar19) - iVar14;
    *(short *)(param_1 + 0x14) = sVar11;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    sVar7 = (short)(iVar14 - 0xfU);
    *(short *)(param_1 + 0x16) = sVar7;
    if ((iVar14 - 0xfU >> 0xf & 1) == 0) {
      if (sVar7 != 0) {
        if ((uVar17 >> 0xf & 1) == 0) {
          uVar9 = 0x7fff;
        }
        else {
          uVar9 = 0x8001;
        }
        *(undefined4 *)(param_1 + 0x14) = uVar9;
      }
      goto LAB_03f55918;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(short *)(param_1 + 0x26) = (short)(iVar14 + 0x22U);
  *(short *)(param_1 + 0x14) =
       (short)((uint)((int)sVar11 *
                     (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar14 + 0x22U & 0x3ff) * 2)) >> 0xf);
LAB_03f55918:
  lVar1 = param_1 + 0x240;
  *(undefined2 *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) = *(undefined2 *)(param_1 + 0x40);
  lVar2 = (long)*(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = (int)lVar2;
  *(undefined2 *)(lVar1 + lVar2 * 2) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x24) = 0xb9;
  uVar13 = (int)*(short *)(param_1 + 0x1ba) * (int)*(short *)(param_1 + 0x14);
  iVar19 = (int)(uVar13 * 2) >> 0x10;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x126);
  uVar17 = *(short *)(param_1 + 0x126) * iVar19;
  *(short *)(param_1 + 0x1a) = (short)(uVar13 >> 0xf);
  sVar11 = *(short *)(param_1 + 0x19c) +
           (short)((*(short *)(param_1 + 0x106) * iVar19 & 0x7fffffffU) >> 0xf);
  *(short *)(param_1 + 0x1c) = (short)(uVar17 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar17 * 2;
  *(short *)(param_1 + 0x14) = sVar11;
  lVar2 = (long)*(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = (int)lVar2;
  *(short *)(lVar1 + lVar2 * 2) = sVar11;
  uVar16 = *(ushort *)(param_1 + 0x24);
  uVar5 = uVar16 ^ 0x10;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  lVar2 = param_1 + 0x28;
  *(ushort *)(param_1 + 0x24) = uVar5;
  *(undefined2 *)(lVar2 + (ulong)uVar16 * 2) = *(undefined2 *)(param_1 + 0x14);
  sVar11 = *(short *)(lVar2 + (ulong)(ushort)(uVar5 + 1) * 2) - *(short *)(param_1 + 0x1c);
  *(short *)(param_1 + 0x14) = sVar11;
  *(short *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) = sVar11;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  *(undefined2 *)(lVar2 + (ulong)*(ushort *)(param_1 + 0x24) * 2) = *(undefined2 *)(param_1 + 0x14);
  return;
}

