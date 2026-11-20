
void FUN_03f549f0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  
  *(undefined4 *)(param_1 + 0x23c) = 3;
  *(undefined4 *)(param_1 + 0x250) = 0;
  uVar3 = (int)*(short *)(param_1 + 0x22a) * (int)*(short *)(param_1 + 0x22a);
  uVar4 = (int)*(short *)(param_1 + 0x22c) * (int)*(short *)(param_1 + 0x22c);
  uVar1 = (uVar4 * 2 & 0xfffe) + (uVar3 * 2 & 0xfffe);
  sVar11 = *(short *)(param_1 + 0x22e);
  uVar5 = (int)sVar11 * (int)sVar11;
  *(short *)(param_1 + 0x18) = sVar11;
  *(short *)(param_1 + 0x1a) = sVar11;
  uVar9 = uVar5 * 2;
  sVar11 = (short)(uVar5 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar9;
  *(short *)(param_1 + 0x1c) = sVar11;
  iVar10 = (uVar1 & 0xfffe) + (uVar9 & 0xfffe);
  *(short *)(param_1 + 0x16) = (short)iVar10;
  *(short *)(param_1 + 0x14) =
       (short)(uVar4 >> 0xf) + (short)(uVar3 >> 0xf) + sVar11 + (short)(uVar1 >> 0x10) +
       (short)((uint)iVar10 >> 0x10);
  FUN_03f57900();
  uVar3 = *(ushort *)(param_1 + 0x16) - 1;
  uVar1 = uVar3 & 1;
  uVar9 = (int)*(short *)(param_1 + 0x14) >> uVar1;
  iVar10 = uVar1 + ((int)(short)uVar3 >> 1);
  *(short *)(param_1 + 0x22) = (short)iVar10;
  *(short *)(param_1 + 0x18) = (short)(uVar9 << 6);
  sVar11 = *(short *)(&DAT_041ea9d8 + ((ulong)(((int)uVar9 >> 9) + 0xd6) & 0xffff) * 2);
  uVar2 = *(ushort *)(&DAT_041ea9d8 + ((ulong)(((int)uVar9 >> 9) + 0xd5) & 0xffff) * 2);
  *(undefined2 *)(param_1 + 0x24) = 0;
  uVar9 = (-(uVar9 >> 9 & 1) & 0xfffe0000 | (uVar9 & 0x3ff) << 7) * (int)(short)(sVar11 - uVar2);
  *(short *)(param_1 + 0x1e) = (short)uVar9;
  uVar1 = (uint)uVar2 + (uVar9 >> 0x10);
  *(short *)(param_1 + 0x1c) = (short)(uVar9 >> 0x10);
  if ((uVar1 & 0xffff) == 0) {
    iVar10 = 0;
    sVar11 = 0;
  }
  else {
    iVar8 = 0;
    do {
      iVar12 = iVar8;
      uVar9 = uVar1;
      sVar11 = (short)uVar9;
      uVar1 = uVar9 << 1;
      iVar8 = iVar12 + 1;
    } while ((uVar9 >> 0xe & 1) == (uVar9 & 0x8000) >> 0xf);
    iVar10 = iVar10 - iVar12;
    *(short *)(param_1 + 0x1a) = sVar11;
    *(ushort *)(param_1 + 0x24) = (ushort)iVar12 & 0xf0;
    *(short *)(param_1 + 0x14) = sVar11;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    sVar6 = (short)(iVar10 - 0xfU);
    *(short *)(param_1 + 0x16) = sVar6;
    if ((iVar10 - 0xfU >> 0xf & 1) == 0) {
      if (sVar6 != 0) {
        if ((uVar9 >> 0xf & 1) == 0) {
          uVar9 = 0x7fff;
        }
        else {
          uVar9 = 0x8001;
        }
        *(uint *)(param_1 + 0x14) = uVar9;
      }
      goto LAB_03f54b98;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(short *)(param_1 + 0x18) = sVar11;
  *(short *)(param_1 + 0x26) = (short)(iVar10 + 0x22U);
  uVar1 = (int)sVar11 * (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar10 + 0x22U & 0x3ff) * 2);
  *(short *)(param_1 + 0x1a) = *(short *)(&DAT_041ea9d8 + (ulong)(iVar10 + 0x22U & 0x3ff) * 2);
  uVar3 = uVar1 >> 0xf;
  uVar9 = uVar3 & 0xffff;
  uVar7 = (undefined2)uVar3;
  *(undefined2 *)(param_1 + 0x1c) = uVar7;
  *(short *)(param_1 + 0x1e) = (short)uVar1 * 2;
  *(undefined2 *)(param_1 + 0x14) = uVar7;
LAB_03f54b98:
  *(short *)(param_1 + (long)*(int *)(param_1 + 0x250) * 2 + 0x240) = (short)uVar9;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

