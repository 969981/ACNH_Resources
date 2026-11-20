
void FUN_03f55d70(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  sVar13 = *(short *)(param_1 + 0x22e);
  *(undefined2 *)(param_1 + 0x1a) = 1;
  uVar3 = *(ushort *)(param_1 + 0x22a);
  *(undefined4 *)(param_1 + 0x23c) = 3;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(short *)(param_1 + 0x180) = *(short *)(param_1 + 0x22c);
  *(ushort *)(param_1 + 0x1a0) = uVar3;
  uVar5 = (ushort)(param_2 >> 4) & 3 | (short)uVar3 >> 0xf;
  *(short *)(param_1 + 0x80) = (short)((uint)(int)*(short *)(param_1 + 0x22c) >> 0xf);
  uVar6 = (undefined2)((ulong)(long)sVar13 >> 0xf);
  *(undefined2 *)(param_1 + 0x1c) = uVar6;
  *(undefined2 *)(param_1 + 0x60) = uVar6;
  *(ushort *)(param_1 + 0xa0) = uVar5;
  *(short *)(param_1 + 0x18) = sVar13;
  *(short *)(param_1 + 0x1e) = sVar13 << 1;
  *(ushort *)(param_1 + 0x16) = uVar3 - *(ushort *)(param_1 + 0x19e);
  *(undefined2 *)(param_1 + 0x24) = 0x3b;
  *(short *)(param_1 + 0x160) = sVar13;
  *(ushort *)(param_1 + 0x14) =
       (uVar5 - (uVar3 < *(ushort *)(param_1 + 0x19e))) - *(short *)(param_1 + 0x9e);
  FUN_03f57900();
  *(short *)(param_1 + 0x214) = *(short *)(param_1 + 0x16) + 1;
  *(short *)(param_1 + 0x114) = (short)((ulong)(long)*(short *)(param_1 + 0x14) >> 1);
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x180) - *(ushort *)(param_1 + 0x17e);
  *(undefined2 *)(param_1 + 0x24) = 0x2b;
  *(ushort *)(param_1 + 0x14) =
       (*(short *)(param_1 + 0x80) -
       (ushort)(*(ushort *)(param_1 + 0x180) < *(ushort *)(param_1 + 0x17e))) -
       *(short *)(param_1 + 0x7e);
  FUN_03f57900(param_1);
  *(short *)(param_1 + 0x212) = *(short *)(param_1 + 0x16) + 1;
  *(short *)(param_1 + 0x112) = (short)((ulong)(long)*(short *)(param_1 + 0x14) >> 1);
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x160) - *(ushort *)(param_1 + 0x15e);
  *(undefined2 *)(param_1 + 0x24) = 0x1b;
  *(ushort *)(param_1 + 0x14) =
       (*(short *)(param_1 + 0x60) -
       (ushort)(*(ushort *)(param_1 + 0x160) < *(ushort *)(param_1 + 0x15e))) -
       *(short *)(param_1 + 0x5e);
  FUN_03f57900(param_1);
  *(undefined2 *)(param_1 + 0x24) = 0xf6;
  uVar15 = *(ushort *)(param_1 + 0x16) + 1;
  uVar3 = *(ushort *)(param_1 + 0x214);
  uVar5 = *(ushort *)(param_1 + 0x212);
  iVar14 = (int)*(short *)(param_1 + 0x14) >> 1;
  if (((uint)uVar3 - (uint)uVar5 >> 0xf & 1) == 0) {
    uVar12 = uVar3 - uVar15;
    uVar18 = (uint)uVar3;
  }
  else {
    uVar12 = uVar5 - uVar15;
    uVar18 = (uint)uVar5;
  }
  uVar11 = uVar15;
  if ((uVar12 >> 0xf & 1) == 0) {
    uVar11 = uVar18;
  }
  iVar16 = uVar11 + 0x31;
  *(short *)(param_1 + 0x16) = (short)iVar16;
  sVar13 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 - (uint)uVar3 & 0x3ff) * 2);
  uVar6 = (undefined2)uVar11;
  *(undefined2 *)(param_1 + 0x214) = uVar6;
  uVar12 = (int)*(short *)(param_1 + 0x114) * (int)sVar13;
  *(short *)(param_1 + 0x114) = (short)(uVar12 >> 0xf);
  uVar12 = (int)(uVar12 * 2) >> 0xf & 0xfffffffe;
  sVar13 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 - (uint)uVar5 & 0x3ff) * 2);
  *(undefined2 *)(param_1 + 0x212) = uVar6;
  *(short *)(param_1 + 0x18) = (short)iVar14;
  uVar18 = (int)*(short *)(param_1 + 0x112) * (int)sVar13;
  uVar8 = (undefined2)(uVar18 >> 0xf);
  *(undefined2 *)(param_1 + 0x112) = uVar8;
  uVar18 = (int)(uVar18 * 2) >> 0xf & 0xfffffffe;
  sVar13 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 - uVar15 & 0x3ff) * 2);
  *(undefined2 *)(param_1 + 0x20) = uVar8;
  *(undefined2 *)(param_1 + 0x210) = uVar6;
  *(undefined2 *)(param_1 + 0x20e) = uVar6;
  *(undefined2 *)(param_1 + 0x20c) = uVar6;
  *(undefined2 *)(param_1 + 0x20a) = uVar6;
  *(undefined2 *)(param_1 + 0x26) = 0x70;
  uVar15 = iVar14 * sVar13;
  *(short *)(param_1 + 0x1a) = sVar13;
  uVar6 = (undefined2)(uVar15 >> 0xf);
  iVar14 = (int)(uVar15 * 2) >> 0x10;
  *(undefined2 *)(param_1 + 0x110) = uVar6;
  *(undefined2 *)(param_1 + 0x22) = uVar6;
  uVar15 = *(short *)(param_1 + 0xdc) * iVar14;
  iVar14 = iVar14 * 2;
  uVar7 = uVar15 >> 0xf;
  *(short *)(param_1 + 0x1e) = (short)uVar15 * 2;
  *(short *)(param_1 + 0x1c) = (short)uVar7;
  *(short *)(param_1 + 0x10c) =
       (short)(uVar18 * (int)*(short *)(param_1 + 0xfe) >> 0x10) +
       (short)(uVar12 * (int)*(short *)(param_1 + 0x11e) >> 0x10) +
       (short)((uint)(iVar14 * *(short *)(param_1 + 0xde)) >> 0x10);
  *(short *)(param_1 + 0x10e) =
       (short)(uVar18 * (int)*(short *)(param_1 + 0x100) >> 0x10) +
       (short)(uVar12 * (int)*(short *)(param_1 + 0x120) >> 0x10) +
       (short)((uint)(iVar14 * *(short *)(param_1 + 0xe0)) >> 0x10);
  uVar15 = (uVar18 * (int)*(short *)(param_1 + 0xfc) >> 0x10) +
           (uVar12 * (int)*(short *)(param_1 + 0x11c) >> 0x10) + (uVar7 & 0xffff);
  *(short *)(param_1 + 0x10a) = (short)uVar15;
  *(short *)(param_1 + 0x14) = (short)-uVar15;
  if ((uVar15 & 0xffff) == 0) {
    sVar13 = 0;
    iVar14 = 0;
LAB_03f560e0:
    *(short *)(param_1 + 0x18) = sVar13;
    *(short *)(param_1 + 0x26) = (short)(iVar14 + 0x22U);
    sVar4 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar14 + 0x22U & 0x3ff) * 2);
    *(short *)(param_1 + 0x1a) = sVar4;
    uVar18 = (int)sVar13 * (int)sVar4;
    uVar12 = uVar18 >> 0xf & 0xffff;
    uVar15 = -(uVar18 >> 0x1e & 1);
    *(short *)(param_1 + 0x1c) = (short)(uVar18 >> 0xf);
    *(short *)(param_1 + 0x1e) = (short)uVar18 * 2;
  }
  else {
    uVar15 = -uVar15;
    iVar14 = 0;
    do {
      iVar16 = iVar14;
      uVar12 = uVar15;
      sVar13 = (short)uVar12;
      uVar15 = uVar12 << 1;
      iVar14 = iVar16 + 1;
    } while ((uVar12 >> 0xe & 1) == (uVar12 & 0x8000) >> 0xf);
    iVar14 = uVar11 - iVar16;
    *(short *)(param_1 + 0x1a) = sVar13;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar16 & 0xf0;
    *(undefined2 *)(param_1 + 0x18) = 0xf;
    if ((iVar14 - 0xfU & 0xffff) == 0) {
      uVar15 = -(uVar12 >> 0xf & 1);
    }
    else {
      sVar4 = (short)(iVar14 - 0xfU);
      if (sVar4 < 0) goto LAB_03f560e0;
      *(short *)(param_1 + 0x20) = sVar4;
      uVar18 = -(uVar12 >> 0xf & 1);
      *(short *)(param_1 + 0x18) = (short)uVar18;
      *(short *)(param_1 + 0x26) = (short)(0x50U - iVar14);
      sVar4 = *(short *)(&DAT_041ea9d8 + (ulong)(0x50U - iVar14 & 0x3ff) * 2);
      uVar15 = uVar18 * (int)sVar4;
      *(short *)(param_1 + 0x1a) = sVar4;
      iVar14 = uVar15 * 2;
      uVar12 = uVar15 >> 0xf & 0xffff;
      *(short *)(param_1 + 0x1c) = (short)(uVar15 >> 0xf);
      *(short *)(param_1 + 0x1e) = (short)iVar14;
      if (iVar14 < 0) {
        if ((uVar12 != 0xffff) || (((uVar15 & 0x7fffffff) >> 0xe & 1) == 0)) {
          uVar12 = 0;
          *(undefined2 *)(param_1 + 0x16) = 0;
          uVar15 = 0x8001;
          goto LAB_03f56170;
        }
LAB_03f56144:
        *(short *)(param_1 + 0x18) = sVar13;
        uVar12 = (int)sVar13 * (int)sVar4;
        uVar11 = uVar12 >> 0xf;
        uVar12 = uVar12 * 2;
        uVar15 = (uVar18 & (int)sVar4 << 1) + iVar14 + (uVar11 & 0xffff);
        *(short *)(param_1 + 0x1c) = (short)uVar11;
        *(short *)(param_1 + 0x1e) = (short)uVar12;
      }
      else {
        if ((uVar12 == 0) && (((uVar15 & 0x7fffffff) >> 0xe & 1) == 0)) goto LAB_03f56144;
        uVar12 = 0xfffc;
        uVar15 = 0x7fff;
      }
      *(short *)(param_1 + 0x16) = (short)uVar12;
    }
  }
LAB_03f56170:
  uVar12 = (uint)*(ushort *)(param_1 + 0x1c4) + (uVar12 & 0xffff);
  *(short *)(param_1 + 0x16) = (short)uVar12;
  *(undefined2 *)(param_1 + 0x24) = 0x4e;
  uVar12 = (uVar12 >> 0x10) + (uVar15 & 0xffff) + (uint)*(ushort *)(param_1 + 0xc4);
  uVar18 = 0x7fff;
  if (uVar12 < 0x8001 || 0x7fff < (ushort)uVar15) {
    uVar18 = uVar12;
  }
  *(short *)(param_1 + 0x14) = (short)uVar18;
  FUN_03f57900(param_1);
  FUN_03f577f4(param_1);
  *(short *)(param_1 + 0x10a) = *(short *)(param_1 + 0x14);
  uVar15 = (uint)*(ushort *)(param_1 + 0x1c4);
  *(ushort *)(param_1 + 0x20a) = *(ushort *)(param_1 + 0x16);
  if (*(ushort *)(param_1 + 0x1c4) == 0) {
    sVar13 = 0;
    iVar14 = 0;
  }
  else {
    iVar16 = 0;
    do {
      iVar14 = iVar16;
      sVar13 = (short)uVar15;
      uVar12 = uVar15 & 0x8000;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar15 << 1;
      iVar16 = iVar14 + 1;
    } while ((uVar18 & 1) == uVar12 >> 0xf);
    iVar14 = 0xf - iVar14;
  }
  iVar14 = iVar14 + (uint)*(ushort *)(param_1 + 0x16);
  uVar15 = (int)*(short *)(param_1 + 0x14) * (int)sVar13;
  *(short *)(param_1 + 0x22) = (short)iVar14;
  sVar13 = (short)(uVar15 >> 0xf);
  *(short *)(param_1 + 0x20) = sVar13;
  if ((uVar15 >> 0xf & 0xffff) == 0) {
    iVar16 = 0;
LAB_03f5628c:
    sVar13 = (short)((uint)((int)sVar13 *
                           (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2)) >>
                    0xf);
  }
  else {
    uVar12 = (uVar15 & 0x7fffffff) >> 0xf;
    iVar16 = 0;
    do {
      iVar17 = iVar16;
      uVar18 = uVar12;
      sVar13 = (short)uVar18;
      uVar12 = uVar18 << 1;
      iVar16 = iVar17 + 1;
    } while ((uVar18 >> 0xe & 1) == (uVar18 & 0x8000) >> 0xf);
    iVar16 = (iVar14 + 8) - iVar17;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar17 & 0xf0;
    if ((iVar16 - 0xfU >> 0xf & 1) != 0) goto LAB_03f5628c;
    if ((short)(iVar16 - 0xfU) != 0) {
      if ((uVar18 >> 0xf & 1) == 0) {
        sVar13 = 0x7fff;
      }
      else {
        sVar13 = -0x7fff;
      }
      *(short *)(param_1 + 0x14) = sVar13;
    }
  }
  *(short *)(param_1 + 0x10a) = sVar13;
  iVar16 = (int)(uVar15 * 2) >> 0x10;
  uVar15 = iVar16 * *(short *)(param_1 + 0x10c);
  if ((uVar15 >> 0xf & 0xffff) == 0) {
    sVar13 = 0;
    iVar17 = 0;
LAB_03f5632c:
    sVar13 = (short)((uint)((int)sVar13 *
                           (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar17 + 0x22U & 0x3ff) * 2)) >>
                    0xf);
  }
  else {
    uVar15 = (uVar15 & 0x7fffffff) >> 0xf;
    iVar9 = 0;
    do {
      iVar17 = iVar9;
      sVar13 = (short)uVar15;
      uVar12 = uVar15 & 0x8000;
      uVar18 = uVar15 >> 0xe;
      uVar15 = uVar15 << 1;
      iVar9 = iVar17 + 1;
    } while ((uVar18 & 1) == uVar12 >> 0xf);
    iVar17 = ((uint)*(ushort *)(param_1 + 0x20c) + iVar14) - iVar17;
    if ((iVar17 - 0xfU >> 0xf & 1) != 0) goto LAB_03f5632c;
    if (((short)(iVar17 - 0xfU) != 0) && (bVar10 = -1 < sVar13, sVar13 = -0x7fff, bVar10)) {
      sVar13 = 0x7fff;
    }
  }
  *(short *)(param_1 + 0x10c) = sVar13;
  uVar15 = *(short *)(param_1 + 0x10e) * iVar16;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x10e);
  *(short *)(param_1 + 0x1c) = (short)(uVar15 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar15 * 2;
  if ((uVar15 >> 0xf & 0xffff) == 0) {
    sVar13 = 0;
    iVar16 = 0;
  }
  else {
    uVar15 = (uVar15 & 0x7fffffff) >> 0xf;
    iVar17 = 0;
    do {
      iVar16 = iVar17;
      uVar12 = uVar15;
      sVar13 = (short)uVar12;
      uVar15 = uVar12 << 1;
      iVar17 = iVar16 + 1;
    } while ((uVar12 >> 0xe & 1) == (uVar12 & 0x8000) >> 0xf);
    iVar16 = ((uint)*(ushort *)(param_1 + 0x20e) + iVar14) - iVar16;
    *(short *)(param_1 + 0x1a) = sVar13;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    *(short *)(param_1 + 0x14) = sVar13;
    sVar4 = (short)(iVar16 - 0xfU);
    *(short *)(param_1 + 0x16) = sVar4;
    if ((iVar16 - 0xfU >> 0xf & 1) == 0) {
      if (sVar4 != 0) {
        if ((uVar12 >> 0xf & 1) == 0) {
          uVar12 = 0x7fff;
        }
        else {
          uVar12 = 0x8001;
        }
        *(uint *)(param_1 + 0x14) = uVar12;
      }
      goto LAB_03f5641c;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(short *)(param_1 + 0x18) = sVar13;
  *(short *)(param_1 + 0x26) = (short)(iVar16 + 0x22U);
  uVar15 = (int)sVar13 * (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2);
  *(short *)(param_1 + 0x1a) = *(short *)(&DAT_041ea9d8 + (ulong)(iVar16 + 0x22U & 0x3ff) * 2);
  uVar18 = uVar15 >> 0xf;
  uVar12 = uVar18 & 0xffff;
  uVar6 = (undefined2)uVar18;
  *(undefined2 *)(param_1 + 0x1c) = uVar6;
  *(short *)(param_1 + 0x1e) = (short)uVar15 * 2;
  *(undefined2 *)(param_1 + 0x14) = uVar6;
LAB_03f5641c:
  lVar1 = param_1 + 0x240;
  *(short *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) = (short)uVar12;
  *(undefined2 *)(param_1 + 0x24) = 0x72;
  lVar2 = (long)*(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = (int)lVar2;
  *(undefined2 *)(lVar1 + lVar2 * 2) = *(undefined2 *)(param_1 + 0x10c);
  uVar3 = *(short *)(param_1 + 0x24) - 1;
  lVar2 = (long)*(int *)(param_1 + 0x250) + 1;
  *(ushort *)(param_1 + 0x24) = uVar3;
  *(int *)(param_1 + 0x250) = (int)lVar2;
  *(undefined2 *)(lVar1 + lVar2 * 2) = *(undefined2 *)(param_1 + (ulong)uVar3 * 2 + 0x28);
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

