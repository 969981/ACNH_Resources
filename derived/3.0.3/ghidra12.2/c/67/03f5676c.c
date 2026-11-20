
void FUN_03f5676c(long param_1,uint param_2)

{
  long lVar1;
  short *psVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  short sVar19;
  
  uVar10 = param_2 >> 4 & 3;
  *(undefined4 *)(param_1 + 0x250) = 0;
  uVar13 = 0x32e - uVar10;
  *(short *)(param_1 + 0x14) = (short)uVar10;
  *(short *)(param_1 + 0x26) = (short)uVar13;
  lVar1 = param_1 + 0x28;
  uVar3 = *(ushort *)(&DAT_041ea9d8 + (ulong)uVar13 * 2);
  *(undefined4 *)(param_1 + 0x23c) = 1;
  sVar19 = *(short *)(param_1 + 0x22a) >> 1;
  psVar2 = (short *)(lVar1 + (ulong)uVar3 * 2);
  *(short *)(param_1 + 0x16) = sVar19;
  *(ushort *)(param_1 + 0x20) = uVar3;
  uVar10 = uVar3 - 2;
  *(ushort *)(param_1 + 0x24) = uVar3 - 1;
  *psVar2 = sVar19;
  sVar15 = *(short *)(param_1 + 0x22a + (long)*(int *)(param_1 + 0x23c) * 2);
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  uVar13 = (uVar10 ^ 0x10) + 1;
  *(short *)(lVar1 + ((ulong)uVar10 & 0xffff) * 2) = sVar19;
  *(short *)(lVar1 + ((ulong)uVar13 & 0xffff) * 2) = sVar19;
  uVar13 = (uVar13 ^ 0x30) + 1;
  uVar10 = (uint)sVar15;
  *(short *)(param_1 + 0x14) = sVar15;
  *(short *)(param_1 + 0x24) = (short)uVar13;
  uVar4 = *(undefined2 *)(param_1 + 0x22a + (long)*(int *)(param_1 + 0x23c) * 2);
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  *(undefined2 *)(lVar1 + ((ulong)uVar13 & 0xffff) * 2) = uVar4;
  *(ushort *)(lVar1 + (ulong)(uVar13 & 0xf0 ^ 0xd0) * 2) = uVar3;
  iVar14 = (int)sVar15;
  if (iVar14 < 0) {
    uVar10 = -iVar14;
    *(short *)(param_1 + 0x14) = (short)uVar10;
    if (sVar15 != -0x8000) goto LAB_03f5684c;
    iVar14 = 0;
    sVar15 = -0x8000;
  }
  else {
LAB_03f5684c:
    iVar5 = (int)(uVar10 << 0x10) >> 0x18;
    *(undefined2 *)(param_1 + 0x22) = 0x80;
    uVar13 = iVar5 + 0x198;
    sVar19 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar5 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar13;
    uVar10 = (uVar10 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    *(short *)(param_1 + 0x20) = sVar19;
    iVar6 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar13 & 0xffff) * 2) -
            ((int)(uVar10 * (int)sVar19) >> 0x10);
    iVar5 = -0x7fff;
    if (-0x8001 < iVar6) {
      iVar5 = iVar6;
    }
    uVar13 = (int)sVar19 +
             (uVar10 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar13 & 0xffff) * 2) >> 0x10);
    sVar15 = (short)iVar5;
    *(short *)(param_1 + 0x14) = sVar15;
    sVar19 = (short)uVar13;
    if (0x7ffe < (uVar13 & 0xffff)) {
      sVar19 = 0x7fff;
    }
    sVar7 = -sVar19;
    if (-1 < iVar14) {
      sVar7 = sVar19;
    }
    iVar14 = (int)sVar7;
  }
  *(short *)(param_1 + 0x1a) = sVar15;
  sVar19 = *(short *)(param_1 + 0x28 + (ulong)(uVar3 | 0x40) * 2);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(ushort *)(param_1 + 0x24) = uVar3;
  *(short *)(param_1 + 0x18) = sVar19;
  iVar5 = sVar19 * 2;
  iVar6 = iVar5 * sVar15;
  *(short *)(param_1 + 0x1e) = (short)iVar6;
  *(short *)(param_1 + 0x28 + (ulong)(ushort)(uVar3 - 1) * 2) =
       (short)((uint)(iVar5 * iVar14) >> 0x10);
  sVar19 = (short)((uint)iVar6 >> 0x10);
  *(short *)(param_1 + 0x1c) = sVar19;
  uVar12 = (uint)*(short *)(param_1 + (long)*(int *)(param_1 + 0x23c) * 2 + 0x22a);
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  *psVar2 = sVar19;
  uVar13 = (uVar3 ^ 0xffffffff) & 0xf0;
  uVar10 = uVar12;
  if ((int)uVar12 < 0) {
    *(ushort *)(param_1 + 0x24) = (ushort)uVar13 | 1;
    if (uVar12 != 0xffff8000) {
      uVar10 = -uVar12;
      goto LAB_03f56950;
    }
    uVar16 = 0;
    uVar10 = 0x8000;
LAB_03f569d0:
    *(short *)(param_1 + 0x16) = (short)uVar16;
  }
  else {
LAB_03f56950:
    iVar14 = (int)(uVar10 << 0x10) >> 0x18;
    *(undefined2 *)(param_1 + 0x22) = 0x80;
    uVar16 = iVar14 + 0x198;
    sVar19 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar16;
    uVar10 = (uVar10 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    *(short *)(param_1 + 0x20) = sVar19;
    sVar15 = *(short *)(&DAT_041ea9d8 + ((ulong)uVar16 & 0xffff) * 2);
    uVar16 = uVar10 * (int)sVar15;
    *(short *)(param_1 + 0x1e) = (short)uVar16;
    uVar17 = (int)sVar15 - ((int)(uVar10 * (int)sVar19) >> 0x10);
    *(short *)(param_1 + 0x1c) = (short)(uVar16 >> 0x10);
    uVar10 = 0xffff8001;
    if (-0x8001 < (int)uVar17) {
      uVar10 = uVar17;
    }
    uVar16 = (int)sVar19 + (uVar16 >> 0x10) & 0xffff;
    *(short *)(param_1 + 0x14) = (short)uVar10;
    if (0x7ffe < uVar16) {
      uVar16 = 0x7fff;
    }
    if ((int)uVar12 < 0) {
      uVar16 = -uVar16;
      goto LAB_03f569d0;
    }
  }
  lVar1 = param_1 + 0x28;
  uVar17 = -(uVar16 >> 0xf & 1) & 0xfffe0000 | (uVar16 & 0xffff) << 1;
  uVar3 = *(ushort *)(lVar1 + (ulong)uVar13 * 2);
  uVar13 = uVar3 - 1;
  uVar12 = uVar13 ^ 0x10;
  sVar19 = *(short *)(lVar1 + ((ulong)uVar13 & 0xffff) * 2);
  *(short *)(lVar1 + ((ulong)(uVar12 + 1) & 0xffff) * 2) =
       (short)(uVar17 * (int)*(short *)(lVar1 + ((ulong)uVar3 << 1 | 0x80)) >> 0x10);
  lVar11 = ((ulong)uVar12 & 0xffff) * 2;
  sVar15 = *(short *)(lVar1 + lVar11);
  *(short *)(lVar1 + lVar11) = (short)(uVar17 * (int)sVar19 >> 0x10);
  uVar13 = (uVar12 - 1 ^ 0x10) + 1;
  uVar17 = -(uVar10 >> 0xf & 1) & 0xfffe0000 | (uVar10 & 0xffff) << 1;
  uVar8 = (uVar13 ^ 0x20) - 1;
  iVar14 = sVar15 * 2;
  *(short *)(lVar1 + ((ulong)(uVar12 - 1) & 0xffff) * 2) =
       (short)((uint)(iVar14 * (short)uVar16) >> 0x10);
  uVar12 = (uVar8 ^ 0x20) + 2;
  sVar19 = *(short *)(lVar1 + ((ulong)uVar13 & 0xffff) * 2);
  *(short *)(lVar1 + ((ulong)uVar8 & 0xffff) * 2) = (short)((uint)(iVar14 * (short)uVar10) >> 0x10);
  sVar15 = *(short *)(lVar1 + ((ulong)uVar12 & 0xffff) * 2);
  uVar12 = uVar12 ^ 0x20;
  lVar11 = ((ulong)uVar12 & 0xffff) * 2;
  uVar10 = (uint)*(short *)(lVar1 + lVar11);
  *(short *)(lVar1 + ((ulong)(uVar12 - 1) & 0xffff) * 2) = (short)(uVar17 * (int)sVar19 >> 0x10);
  *(short *)(lVar1 + lVar11) = (short)(uVar17 * (int)sVar15 >> 0x10);
  uVar13 = uVar10;
  if ((int)uVar10 < 0) {
    if (uVar10 == 0xffff8000) {
      uVar13 = 0;
      uVar10 = 0xffff0000;
      goto LAB_03f56b48;
    }
    uVar13 = -uVar10;
  }
  iVar14 = (int)(uVar13 << 0x10) >> 0x18;
  *(undefined2 *)(param_1 + 0x22) = 0x80;
  uVar16 = iVar14 + 0x198;
  sVar19 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar14 + 0x118) & 0xffff) * 2);
  *(short *)(param_1 + 0x26) = (short)uVar16;
  *(short *)(param_1 + 0x20) = sVar19;
  uVar13 = (uVar13 & 0xff) * 0x32440 >> 0xf & 0x7fe;
  uVar17 = (int)sVar19 +
           (uVar13 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar16 & 0xffff) * 2) >> 0x10) & 0xffff
  ;
  if (0x7ffe < uVar17) {
    uVar17 = 0x7fff;
  }
  uVar16 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar16 & 0xffff) * 2) -
           ((int)(uVar13 * (int)sVar19) >> 0x10);
  uVar13 = -uVar17;
  if (-1 < (int)uVar10) {
    uVar13 = uVar17;
  }
  uVar10 = 0xffff0002;
  if (-0x8001 < (int)uVar16) {
    uVar10 = -(uVar16 >> 0xf & 1) & 0xfffe0000 | uVar16 * 2 & 0x1fffe;
  }
LAB_03f56b48:
  lVar1 = param_1 + 0x28;
  *(short *)(param_1 + 0x1a) = (short)uVar13;
  uVar3 = *(ushort *)(lVar1 + (ulong)(uVar12 & 0xf0 ^ 0xd0) * 2);
  uVar12 = uVar3 - 1;
  lVar11 = ((ulong)uVar12 & 0xffff) * 2;
  uVar9 = (uVar12 ^ 0x10) - 1;
  sVar19 = *(short *)(lVar1 + lVar11);
  *(short *)(lVar1 + (ulong)uVar3 * 2) =
       (short)(uVar10 * (int)*(short *)(lVar1 + (ulong)(uVar3 | 0x40) * 2) >> 0x10);
  *(short *)(lVar1 + lVar11) = -(short)(uVar10 * (int)sVar19 >> 0x10);
  lVar11 = ((ulong)uVar9 & 0xffff) * 2;
  uVar16 = uVar9 ^ 0x30;
  lVar18 = ((ulong)uVar16 & 0xffff) * 2;
  sVar19 = *(short *)(lVar1 + lVar18);
  *(short *)(lVar1 + lVar11) = -(short)(uVar10 * (int)*(short *)(lVar1 + lVar11) >> 0x10);
  uVar8 = -(uVar13 >> 0xf & 1) & 0xfffe0000 | (uVar13 & 0xffff) << 1;
  sVar15 = *(short *)(lVar1 + ((ulong)(uVar9 ^ 0x10 | 0x40) & 0xffff) * 2);
  uVar17 = uVar16 + 1 ^ 0x30;
  *(short *)(param_1 + 0x24) = (short)(uVar16 + 2);
  uVar12 = uVar17 + 1;
  *(short *)(lVar1 + lVar18) = (short)(uVar10 * (int)sVar19 >> 0x10);
  uVar10 = uVar12 ^ 0x30;
  *(short *)(lVar1 + ((ulong)(uVar9 ^ 0x10) & 0xffff) * 2) = (short)(uVar8 * (int)sVar15 >> 0x10);
  uVar9 = uVar10 - 1;
  sVar19 = *(short *)(lVar1 + ((ulong)(uVar16 + 1) & 0xffff) * 2);
  sVar15 = *(short *)(lVar1 + ((ulong)uVar12 & 0xffff) * 2);
  uVar12 = uVar9 ^ 0x30;
  *(short *)(lVar1 + ((ulong)uVar9 & 0xffff) * 2) = sVar15 + (short)(uVar8 * (int)sVar19 >> 0x10);
  *(short *)(lVar1 + ((ulong)(uVar12 + 1) & 0xffff) * 2) =
       sVar19 + (short)(uVar8 * (int)sVar15 >> 0x10);
  sVar19 = *(short *)(lVar1 + ((ulong)uVar12 & 0xffff) * 2);
  sVar15 = *(short *)(lVar1 + ((ulong)uVar10 & 0xffff) * 2);
  uVar13 = (int)sVar15 * (int)(short)uVar13;
  *(short *)(param_1 + 0x18) = sVar15;
  sVar7 = (short)(uVar13 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar13 * 2;
  *(short *)(param_1 + 0x1c) = sVar7;
  sVar7 = sVar19 - sVar7;
  *(short *)(param_1 + 0x16) = sVar7;
  sVar15 = sVar15 - (short)(uVar8 * (int)sVar19 >> 0x10);
  *(short *)(lVar1 + ((ulong)uVar17 & 0xffff) * 2) = sVar15;
  *(short *)(param_1 + 0x14) = sVar15;
  *(short *)(lVar1 + ((ulong)(uVar16 + 2) & 0xffff) * 2) = sVar7;
  return;
}

