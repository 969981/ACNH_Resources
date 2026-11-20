
void FUN_03f56480(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 2;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(short *)(param_1 + 0x3a) = (short)((int)*(short *)(param_1 + 0x22c) << 8);
  *(ushort *)(param_1 + 0x38) = (ushort)(param_2 >> 4) & 3 | *(short *)(param_1 + 0x22a) << 8;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0xba);
  uVar11 = (int)*(short *)(param_1 + 0xba) * (int)*(short *)(param_1 + 0x22c);
  uVar13 = uVar11 >> 0xf;
  *(short *)(param_1 + 0x1c) = (short)uVar13;
  uVar13 = (uint)*(ushort *)(param_1 + 0x1b8) + (uVar13 & 0xffff);
  *(short *)(param_1 + 0x1e) = (short)uVar11 * 2;
  *(short *)(param_1 + 0x14) = (short)uVar13;
  *(short *)(param_1 + 0x1a) = (short)uVar13;
  if ((uVar13 & 0xffff) == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar6 = 0;
    do {
      uVar8 = uVar6;
      uVar11 = uVar13;
      uVar13 = uVar11 << 1;
      uVar6 = uVar8 + 1;
    } while ((uVar11 >> 0xe & 1) == (uVar11 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar11;
    *(short *)(param_1 + 0x14) = (short)uVar11;
    *(ushort *)(param_1 + 0x16) = 8 - uVar8;
    *(ushort *)(param_1 + 0x24) = uVar8 & 0xf0;
  }
  FUN_03f577f4(param_1);
  uVar13 = (int)*(short *)(param_1 + 0xc0) * (int)*(short *)(param_1 + 0x14);
  sVar9 = (short)(uVar13 >> 0xf);
  iVar2 = (uint)*(ushort *)(param_1 + 0x1c0) + (uint)*(ushort *)(param_1 + 0x16);
  if ((uVar13 >> 0xf & 0xffff) == 0) {
    iVar12 = 0;
LAB_03f565c0:
    sVar9 = (short)((uint)((int)sVar9 *
                          (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar12 + 0x22U & 0x3ff) * 2)) >>
                   0xf);
  }
  else {
    uVar11 = (uVar13 & 0x7fffffff) >> 0xf;
    iVar5 = 0;
    do {
      iVar12 = iVar5;
      sVar9 = (short)uVar11;
      uVar3 = uVar11 & 0x8000;
      uVar4 = uVar11 >> 0xe;
      uVar11 = uVar11 << 1;
      iVar5 = iVar12 + 1;
    } while ((uVar4 & 1) == uVar3 >> 0xf);
    iVar12 = iVar2 - iVar12;
    if ((iVar12 - 0xfU >> 0xf & 1) != 0) goto LAB_03f565c0;
    if (((short)(iVar12 - 0xfU) != 0) && (bVar7 = -1 < sVar9, sVar9 = -0x7fff, bVar7)) {
      sVar9 = 0x7fff;
    }
  }
  uVar13 = ((int)(uVar13 * 2) >> 0xf & 0xfffffffeU) * (int)*(short *)(param_1 + 0xbc) >> 0x10;
  if (uVar13 == 0) {
    iVar12 = 0;
    sVar10 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar12 = iVar5;
      sVar10 = (short)uVar13;
      uVar11 = uVar13 & 0x8000;
      uVar3 = uVar13 >> 0xe;
      uVar13 = uVar13 << 1;
      iVar5 = iVar12 + 1;
    } while ((uVar3 & 1) == uVar11 >> 0xf);
    iVar12 = ((uint)*(ushort *)(param_1 + 0x1bc) + iVar2) - iVar12;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    if ((iVar12 - 0xfU >> 0xf & 1) == 0) {
      if (((short)(iVar12 - 0xfU) != 0) && (bVar7 = -1 < sVar10, sVar10 = -0x7fff, bVar7)) {
        sVar10 = 0x7fff;
      }
      goto LAB_03f5667c;
    }
  }
  *(short *)(param_1 + 0x26) = (short)(iVar12 + 0x22U);
  sVar10 = (short)((uint)((int)sVar10 *
                         (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar12 + 0x22U & 0x3ff) * 2)) >>
                  0xf);
LAB_03f5667c:
  uVar13 = (int)*(short *)(param_1 + 0x38) * (int)sVar9;
  uVar11 = (int)*(short *)(param_1 + 0x3a) * (int)sVar10;
  *(short *)(param_1 + 0x20) = (short)(uVar13 >> 0xf);
  *(short *)(param_1 + 0x22) = (short)(uVar11 >> 0xf);
  uVar13 = (int)(uVar13 * 2) >> 0xf & 0xfffffffe;
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_1 + 0x17a);
  *(undefined2 *)(param_1 + 0x24) = 0x6e;
  *(short *)(param_1 + 0x1c) = (short)(uVar13 * (int)*(short *)(param_1 + 0x106) >> 0x10);
  *(short *)(param_1 + 0x240 + (long)*(int *)(param_1 + 0x250) * 2) =
       *(short *)(param_1 + 0x19a) + (short)(uVar13 * (int)*(short *)(param_1 + 0x126) >> 0x10) +
       (short)(((int)(uVar11 * 2) >> 0xf & 0xfffffffeU) * (int)*(short *)(param_1 + 0x124) >> 0x10);
  *(undefined2 *)(param_1 + 0x14) = 0;
  sVar9 = *(short *)(param_1 + 0x1c);
  lVar1 = (long)*(int *)(param_1 + 0x250) + 1;
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x22);
  *(int *)(param_1 + 0x250) = (int)lVar1;
  sVar10 = *(short *)(param_1 + ((ulong)*(ushort *)(param_1 + 0x24) << 1 | 0x80) + 0x28);
  *(short *)(param_1 + 0x18) = sVar10;
  uVar13 = (int)sVar10 * (int)*(short *)(param_1 + 0x22);
  *(uint *)(param_1 + 0x1c) = (uVar13 & 0x7fffffff) >> 0xf | uVar13 * 0x20000;
  *(short *)(param_1 + 0x240 + lVar1 * 2) =
       (*(short *)(param_1 + 0x16) - sVar9) + (short)(uVar13 >> 0xf);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

