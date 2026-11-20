
void FUN_03f54cd4(long param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  
  uVar7 = (uint)*(short *)(param_1 + 0x22a);
  uVar8 = (uint)*(short *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x250) = 0;
  sVar3 = *(short *)(param_1 + 0x22e);
  uVar5 = (uint)sVar3;
  *(short *)(param_1 + 0xae) = sVar3;
  uVar10 = uVar7;
  if ((int)uVar7 < 0) {
    if (uVar7 != 0xffff8000) {
      uVar10 = -uVar7;
      goto LAB_03f54d24;
    }
    sVar12 = 0;
    sVar13 = -0x8000;
  }
  else {
LAB_03f54d24:
    iVar4 = (int)(uVar10 << 0x10) >> 0x18;
    uVar1 = iVar4 + 0x198;
    sVar14 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar4 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar1;
    uVar10 = (uVar10 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    *(short *)(param_1 + 0x20) = sVar14;
    iVar6 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) -
            ((int)(uVar10 * (int)sVar14) >> 0x10);
    uVar10 = (int)sVar14 +
             (uVar10 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) >> 0x10);
    iVar4 = -0x7fff;
    if (-0x8001 < iVar6) {
      iVar4 = iVar6;
    }
    sVar13 = (short)iVar4;
    sVar14 = (short)uVar10;
    if (0x7ffe < (uVar10 & 0xffff)) {
      sVar14 = 0x7fff;
    }
    sVar12 = -sVar14;
    if (-1 < (int)uVar7) {
      sVar12 = sVar14;
    }
  }
  *(short *)(param_1 + 0x22) = sVar12;
  iVar4 = *(short *)(param_1 + 0x230) * 2;
  iVar6 = *(short *)(param_1 + 0x232) * 2;
  *(short *)(param_1 + 0x1a) = sVar13;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x230);
  uVar10 = iVar4 * sVar12;
  *(short *)(param_1 + 0x1c) = (short)(uVar10 >> 0x10);
  uVar7 = ((uint)(iVar6 * sVar13) >> 0x10) - (uVar10 >> 0x10);
  *(undefined2 *)(param_1 + 0x24) = 0x41;
  *(short *)(param_1 + 0xaa) = (short)uVar7;
  uVar10 = uVar8;
  if ((int)uVar8 < 0) {
    if (uVar8 != 0xffff8000) {
      uVar10 = -uVar8;
      goto LAB_03f54df0;
    }
    iVar11 = 0;
    iVar9 = -0x8000;
  }
  else {
LAB_03f54df0:
    iVar11 = (int)(uVar10 << 0x10) >> 0x18;
    uVar1 = iVar11 + 0x198;
    sVar14 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar11 + 0x118) & 0xffff) * 2);
    *(short *)(param_1 + 0x26) = (short)uVar1;
    uVar10 = (uVar10 & 0xff) * 0x32440 >> 0xf & 0x7fe;
    *(short *)(param_1 + 0x20) = sVar14;
    iVar11 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) -
             ((int)(uVar10 * (int)sVar14) >> 0x10);
    uVar10 = (int)sVar14 +
             (uVar10 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) >> 0x10);
    sVar14 = (short)uVar10;
    if (0x7ffe < (uVar10 & 0xffff)) {
      sVar14 = 0x7fff;
    }
    sVar2 = -sVar14;
    if (-1 < (int)uVar8) {
      sVar2 = sVar14;
    }
    iVar9 = -0x7fff;
    if (-0x8001 < iVar11) {
      iVar9 = (int)(short)iVar11;
    }
    iVar11 = (int)sVar2;
  }
  *(undefined4 *)(param_1 + 0x23c) = 6;
  uVar10 = (int)(iVar6 * sVar12 + (iVar4 * sVar13 & 0xffff0000U)) >> 0xf & 0xfffffffe;
  iVar4 = *(short *)(param_1 + 0x234) * 2;
  sVar14 = (short)(iVar9 * uVar10 >> 0x10) - (short)((uint)(iVar4 * iVar11) >> 0x10);
  uVar10 = ((uint)(iVar4 * iVar9) >> 0x10) + (uVar10 * iVar11 >> 0x10);
  *(short *)(param_1 + 0xa8) = sVar14;
  *(short *)(param_1 + 0xac) = (short)uVar10;
  if (sVar3 < 0) {
    if (sVar3 == -0x8000) {
      sVar12 = 0;
      iVar6 = -0x8000;
      goto LAB_03f54f30;
    }
    uVar5 = -(int)sVar3;
  }
  iVar4 = (int)(uVar5 << 0x10) >> 0x18;
  uVar8 = iVar4 + 0x198;
  sVar13 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar4 + 0x118) & 0xffff) * 2);
  *(short *)(param_1 + 0x26) = (short)uVar8;
  uVar5 = (uVar5 & 0xff) * 0x32440 >> 0xf & 0x7fe;
  *(short *)(param_1 + 0x20) = sVar13;
  iVar4 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar8 & 0xffff) * 2) -
          ((int)(uVar5 * (int)sVar13) >> 0x10);
  uVar5 = (int)sVar13 +
          (uVar5 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar8 & 0xffff) * 2) >> 0x10);
  sVar13 = (short)uVar5;
  if (0x7ffe < (uVar5 & 0xffff)) {
    sVar13 = 0x7fff;
  }
  sVar12 = -sVar13;
  if (-1 < sVar3) {
    sVar12 = sVar13;
  }
  iVar6 = -0x7fff;
  if (-0x8001 < iVar4) {
    iVar6 = (int)(short)iVar4;
  }
LAB_03f54f30:
  *(short *)(param_1 + 0x240) = sVar14;
  uVar10 = -(uVar10 >> 0xf & 1) & 0xfffe0000 | uVar10 * 2 & 0x1fffe;
  uVar5 = -(uVar7 >> 0xf & 1) & 0xfffe0000 | uVar7 * 2 & 0x1fffe;
  *(undefined2 *)(param_1 + 0x24) = 0x41;
  *(short *)(param_1 + 0x22) = sVar12;
  *(short *)(param_1 + 0x1a) = sVar12;
  iVar4 = uVar5 * (int)sVar12;
  *(short *)(param_1 + 0x18) = (short)uVar7;
  sVar3 = (short)(uVar10 * (int)sVar12 >> 0x10) + (short)(iVar6 * uVar5 >> 0x10);
  *(short *)(param_1 + 0x1e) = (short)iVar4;
  sVar14 = (short)((uint)iVar4 >> 0x10);
  *(short *)(param_1 + 0x1c) = sVar14;
  *(short *)(param_1 + 0x14) = sVar3;
  *(short *)(param_1 + 0x242) = sVar3;
  sVar14 = (short)(iVar6 * uVar10 >> 0x10) - sVar14;
  *(short *)(param_1 + 0x16) = sVar14;
  *(short *)(param_1 + 0x244) = sVar14;
  *(undefined4 *)(param_1 + 0x250) = 3;
  return;
}

