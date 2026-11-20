
void FUN_03f57040(long param_1,uint param_2)

{
  long lVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  long lVar19;
  ushort uVar20;
  ushort uVar21;
  short sVar22;
  uint uVar23;
  
  uVar21 = *(ushort *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_1 + 0x22a);
  *(ushort *)(param_1 + 0x1e8) = uVar21;
  *(undefined2 *)(param_1 + 0x1c8) = *(undefined2 *)(param_1 + 0x22e);
  uVar11 = (uint)(short)(uVar21 | (ushort)(param_2 >> 5) & 1);
  *(undefined4 *)(param_1 + 0x23c) = 5;
  *(undefined4 *)(param_1 + 0xaa) = *(undefined4 *)(param_1 + 0x230);
  uVar23 = uVar11;
  if ((short)uVar21 < 0) {
    if (uVar11 != 0xffff8000) {
      uVar23 = -uVar11;
      goto LAB_03f570c0;
    }
    *(undefined2 *)(param_1 + 0x16) = 0;
    uVar18 = 0x8000;
    *(undefined2 *)(param_1 + 0x28) = 0;
LAB_03f57158:
    uVar21 = 0;
    do {
      uVar20 = uVar21;
      uVar23 = uVar18;
      uVar18 = uVar23 << 1;
      uVar21 = uVar20 + 1;
    } while ((uVar23 >> 0xe & 1) == (uVar23 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar23;
    *(short *)(param_1 + 0x14) = (short)uVar23;
    *(ushort *)(param_1 + 0x16) = 0x10 - uVar20;
    *(ushort *)(param_1 + 0x24) = uVar20 & 0xf0;
  }
  else {
LAB_03f570c0:
    iVar16 = (int)(uVar23 << 0x10) >> 0x18;
    uVar12 = (uVar23 & 0xff) * 0x32440;
    uVar23 = iVar16 + 0x198;
    sVar22 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar16 + 0x118) & 0xffff) * 2);
    iVar16 = (uVar12 >> 0x10) * 2;
    uVar6 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar23 & 0xffff) * 2) -
            (iVar16 * sVar22 >> 0x10);
    uVar8 = iVar16 * *(short *)(&DAT_041ea9d8 + ((ulong)uVar23 & 0xffff) * 2);
    uVar18 = 0xffff8001;
    if (-0x8001 < (int)uVar6) {
      uVar18 = uVar6;
    }
    *(short *)(param_1 + 0x1a) = (short)uVar18;
    *(short *)(param_1 + 0x18) = (short)(uVar12 >> 0x10);
    *(short *)(param_1 + 0x20) = sVar22;
    *(short *)(param_1 + 0x26) = (short)uVar23;
    *(undefined4 *)(param_1 + 0x22) = 0x80;
    *(short *)(param_1 + 0x1e) = (short)uVar8;
    *(short *)(param_1 + 0x14) = (short)uVar18;
    uVar23 = (int)sVar22 + (uVar8 >> 0x10);
    *(short *)(param_1 + 0x1c) = (short)(uVar8 >> 0x10);
    sVar22 = (short)uVar23;
    if (0x7ffe < (uVar23 & 0xffff)) {
      sVar22 = 0x7fff;
    }
    sVar17 = -sVar22;
    if (-1 < (int)uVar11) {
      sVar17 = sVar22;
    }
    *(short *)(param_1 + 0x28) = sVar17;
    if ((uVar18 & 0xffff) != 0) goto LAB_03f57158;
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  FUN_03f577f4(param_1);
  uVar21 = *(ushort *)(param_1 + 0x24);
  lVar1 = param_1 + 0x28;
  *(undefined2 *)(lVar1 + ((ulong)uVar21 ^ 0x40) * 2) = *(undefined2 *)(param_1 + 0x14);
  lVar19 = (ulong)uVar21 * 2;
  sVar22 = *(short *)(param_1 + 0x16);
  uVar21 = *(ushort *)(lVar1 + lVar19);
  uVar23 = (uint)uVar21;
  *(ushort *)(param_1 + 0x1a) = uVar21;
  *(short *)(lVar1 + lVar19) = sVar22;
  if (uVar21 == 0) {
    uVar21 = 0;
    uVar11 = 0;
    sVar22 = 0;
  }
  else {
    uVar18 = 0;
    do {
      uVar11 = uVar18;
      uVar21 = (ushort)uVar23;
      uVar12 = uVar23 & 0x8000;
      uVar8 = uVar23 >> 0xe;
      uVar23 = uVar23 << 1;
      uVar18 = uVar11 + 1;
    } while ((uVar8 & 1) == uVar12 >> 0xf);
    sVar22 = sVar22 - (short)uVar11;
    uVar11 = uVar11 & 0xf0;
    *(ushort *)(param_1 + 0x1a) = uVar21;
  }
  *(ushort *)(param_1 + 0x1a) = uVar21;
  sVar17 = *(short *)(lVar1 + (ulong)(uVar11 | 0x40) * 2);
  *(short *)(lVar1 + (ulong)(uVar11 ^ 0x10) * 2) = sVar22;
  *(short *)(lVar1 + (ulong)(uVar11 ^ 0x50) * 2) =
       (short)((uint)((int)(short)uVar21 * (int)sVar17) >> 0xf);
  uVar18 = (uint)*(short *)(lVar1 + (ulong)(uVar11 ^ 0xd0) * 2);
  uVar23 = uVar18;
  if ((int)uVar18 < 0) {
    if (uVar18 != 0xffff8000) {
      uVar23 = -uVar18;
      goto LAB_03f57270;
    }
    sVar17 = 0;
    sVar15 = -0x8000;
  }
  else {
LAB_03f57270:
    iVar16 = (int)(uVar23 << 0x10) >> 0x18;
    uVar12 = iVar16 + 0x198;
    sVar22 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar16 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar12;
    uVar23 = (uVar23 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    sVar17 = *(short *)(&DAT_041ea9d8 + ((ulong)uVar12 & 0xffff) * 2);
    *(short *)(param_1 + 0x1a) = sVar17;
    iVar7 = (int)sVar17 - ((int)(uVar23 * (int)sVar22) >> 0x10);
    iVar16 = -0x7fff;
    if (-0x8001 < iVar7) {
      iVar16 = iVar7;
    }
    sVar15 = (short)iVar16;
    uVar23 = (int)sVar22 + (uVar23 * (int)sVar17 >> 0x10);
    sVar22 = (short)uVar23;
    if (0x7ffe < (uVar23 & 0xffff)) {
      sVar22 = 0x7fff;
    }
    sVar17 = -sVar22;
    if (-1 < (int)uVar18) {
      sVar17 = sVar22;
    }
  }
  *(short *)(param_1 + 0x1a) = sVar17;
  lVar1 = param_1 + 0x28;
  sVar3 = *(short *)(lVar1 + (ulong)(uVar11 | 0x41) * 2);
  uVar18 = (uVar11 ^ 0xe1) - 1;
  sVar4 = *(short *)(lVar1 + (ulong)(uVar11 | 0x42) * 2);
  lVar19 = ((ulong)uVar18 & 0xffff) * 2;
  sVar22 = *(short *)(lVar1 + lVar19);
  sVar5 = *(short *)(lVar1 + (ulong)(uVar18 & 0xb0 ^ 0xe2) * 2);
  uVar23 = (int)*(short *)(lVar1 + (ulong)(uVar11 ^ 0x41) * 2) * (int)sVar15;
  uVar8 = (int)sVar5 * (int)sVar17;
  uVar18 = uVar18 ^ 0xe2;
  uVar12 = uVar23 * 2;
  *(short *)(param_1 + 0x18) = sVar5;
  sVar5 = (short)(uVar23 >> 0xf);
  sVar9 = (short)(uVar8 >> 0xf);
  *(short *)(param_1 + 0x20) = sVar5;
  *(short *)(lVar1 + lVar19) =
       sVar22 + (short)((uint)((int)sVar17 * (int)sVar3) >> 0xf) +
       (short)((uint)((int)sVar15 * (int)sVar4) >> 0xf);
  uVar23 = uVar12 & 0xfffe;
  uVar11 = uVar8 * 2 & 0xfffe;
  *(short *)(param_1 + 0x24) = (short)uVar18;
  sVar22 = (short)uVar12;
  *(short *)(lVar1 + ((ulong)uVar18 & 0xffff) * 2) = sVar22;
  sVar17 = (short)(uVar8 * 2);
  *(short *)(lVar1 + ((ulong)(uVar18 - 1) & 0xffff) * 2) = sVar17 + sVar22;
  *(short *)(param_1 + 0x1e) = sVar17;
  *(short *)(param_1 + 0x1c) = sVar9;
  *(short *)(param_1 + 0x22) = sVar9 + sVar5 + (short)(uVar11 + uVar23 >> 0x10);
  *(short *)(param_1 + 0x16) = sVar22 + (short)uVar8 * -2;
  *(ushort *)(param_1 + 0x14) = (sVar5 - sVar9) - (ushort)(uVar23 < uVar11);
  FUN_03f57900(param_1);
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x14);
  uVar13 = ((ulong)*(ushort *)(param_1 + 0x24) & 0xf0) * 2;
  uVar21 = *(ushort *)(lVar1 + uVar13);
  sVar22 = *(short *)(lVar1 + (uVar13 | 0x80));
  uVar23 = (int)sVar22 * (int)*(short *)(param_1 + 0x14);
  *(short *)(param_1 + 0x18) = sVar22;
  *(uint *)(param_1 + 0x1c) = (uVar23 & 0x7fffffff) >> 0xf | uVar23 * 0x20000;
  if ((uVar23 >> 0xf & 0xffff) == 0) {
    iVar16 = 0;
    sVar22 = 0;
LAB_03f5747c:
    *(short *)(param_1 + 0x18) = sVar22;
    *(short *)(param_1 + 0x26) = (short)(iVar16 + 0x22U);
    sVar17 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2);
    *(short *)(param_1 + 0x1a) = sVar17;
    uVar23 = (int)sVar22 * (int)sVar17;
    sVar22 = (short)(uVar23 >> 0xf);
    *(short *)(param_1 + 0x1c) = sVar22;
    *(short *)(param_1 + 0x1e) = (short)uVar23 * 2;
  }
  else {
    uVar23 = (uVar23 & 0x7fffffff) >> 0xf;
    iVar7 = 0;
    do {
      iVar16 = iVar7;
      sVar22 = (short)uVar23;
      uVar11 = uVar23 & 0x8000;
      uVar18 = uVar23 >> 0xe;
      uVar23 = uVar23 << 1;
      iVar7 = iVar16 + 1;
    } while ((uVar18 & 1) == uVar11 >> 0xf);
    iVar16 = ((uint)uVar21 + (uint)*(ushort *)(param_1 + 0x16)) - iVar16;
    *(short *)(param_1 + 0x1a) = sVar22;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    if ((iVar16 - 0xfU >> 0xf & 1) != 0) goto LAB_03f5747c;
    if (((short)(iVar16 - 0xfU) != 0) && (bVar10 = -1 < sVar22, sVar22 = -0x7fff, bVar10)) {
      sVar22 = 0x7fff;
    }
  }
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_1 + 0x22);
  *(short *)(param_1 + 0x208) = *(short *)(param_1 + 0x208) + sVar22;
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x2a);
  FUN_03f57900(param_1);
  uVar21 = *(ushort *)(param_1 + 0x24);
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x14);
  uVar13 = ((ulong)uVar21 & 0xf0 ^ 0x10) * 2;
  uVar21 = *(ushort *)(param_1 + 0x28 + uVar13);
  sVar22 = *(short *)(param_1 + 0x28 + (uVar13 | 0x80));
  *(short *)(param_1 + 0x18) = sVar22;
  uVar23 = (int)sVar22 * (int)*(short *)(param_1 + 0x14);
  *(short *)(param_1 + 0x1c) = (short)(uVar23 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar23 * 2;
  if ((uVar23 >> 0xf & 0xffff) == 0) {
    uVar23 = 0;
    sVar22 = 0;
    iVar16 = 0;
  }
  else {
    uVar11 = -((uVar23 & 0x7fffffff) >> 0xf);
    uVar18 = 0;
    do {
      uVar23 = uVar18;
      uVar12 = uVar11;
      sVar22 = (short)uVar12;
      uVar11 = uVar12 << 1;
      uVar18 = uVar23 + 1;
    } while ((uVar12 >> 0xe & 1) == (uVar12 & 0x8000) >> 0xf);
    iVar16 = ((uint)uVar21 + (uint)*(ushort *)(param_1 + 0x16)) - uVar23;
    uVar23 = uVar23 & 0xf0;
    *(short *)(param_1 + 0x1a) = sVar22;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    *(short *)(param_1 + 0x14) = sVar22;
    *(short *)(param_1 + 0x24) = (short)uVar23;
    sVar17 = (short)(iVar16 - 0xfU);
    *(short *)(param_1 + 0x16) = sVar17;
    if ((iVar16 - 0xfU >> 0xf & 1) == 0) {
      if (sVar17 != 0) {
        if ((uVar12 >> 0xf & 1) == 0) {
          uVar12 = 0x7fff;
        }
        else {
          uVar12 = 0x8001;
        }
        *(uint *)(param_1 + 0x14) = uVar12;
      }
      goto LAB_03f575d8;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(short *)(param_1 + 0x18) = sVar22;
  *(short *)(param_1 + 0x26) = (short)(iVar16 + 0x22U);
  uVar11 = (int)sVar22 * (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2);
  *(short *)(param_1 + 0x1a) = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2);
  uVar18 = uVar11 >> 0xf;
  uVar12 = uVar18 & 0xffff;
  uVar2 = (undefined2)uVar18;
  *(undefined2 *)(param_1 + 0x1c) = uVar2;
  *(short *)(param_1 + 0x1e) = (short)uVar11 * 2;
  *(undefined2 *)(param_1 + 0x14) = uVar2;
LAB_03f575d8:
  sVar22 = *(short *)(param_1 + (long)*(int *)(param_1 + 0x23c) * 2 + 0x22a);
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  lVar1 = param_1 + 0x240;
  *(short *)(param_1 + 0x14) = sVar22 + (short)uVar12;
  uVar23 = (uVar23 ^ 0xffffffff) & 0xf0;
  lVar19 = param_1 + 0x28;
  uVar2 = *(undefined2 *)(lVar19 + (ulong)uVar23 * 2);
  *(short *)(param_1 + 0x24) = (short)uVar23;
  *(undefined2 *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) = uVar2;
  lVar14 = (long)*(int *)(param_1 + 0x250) + 1;
  uVar13 = (ulong)*(ushort *)(param_1 + 0x24) ^ 0x10;
  *(int *)(param_1 + 0x250) = (int)lVar14;
  *(short *)(param_1 + 0x24) = (short)uVar13;
  *(undefined2 *)(lVar1 + lVar14 * 2) = *(undefined2 *)(lVar19 + uVar13 * 2);
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  uVar13 = (ulong)*(ushort *)(param_1 + 0x24) ^ 0x30;
  *(short *)(param_1 + 0x24) = (short)uVar13;
  lVar14 = uVar13 * 2;
  sVar22 = *(short *)(lVar19 + lVar14) + *(short *)(param_1 + 0x14);
  *(short *)(lVar19 + lVar14) = sVar22;
  *(short *)(param_1 + 0x14) = sVar22;
  *(short *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) = sVar22;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

