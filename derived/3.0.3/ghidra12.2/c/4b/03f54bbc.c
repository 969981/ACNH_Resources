
void FUN_03f54bbc(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  
  uVar6 = (uint)*(short *)(param_1 + 0x22a);
  *(short *)(param_1 + 0xa8) = *(short *)(param_1 + 0x22c);
  uVar9 = uVar6;
  if ((int)uVar6 < 0) {
    if (uVar6 == 0xffff8000) {
      iVar7 = 0;
      sVar8 = -0x8000;
      goto LAB_03f54c64;
    }
    uVar9 = -uVar6;
  }
  iVar7 = (int)(uVar9 << 0x10) >> 0x18;
  *(undefined2 *)(param_1 + 0x22) = 0x80;
  sVar10 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar7 + 0x118) & 0xffff) * 2);
  uVar1 = iVar7 + 0x198;
  *(short *)(param_1 + 0x26) = (short)uVar1;
  uVar9 = (uVar9 & 0xff) * 0x32440 >> 0xf & 0x7fe;
  iVar2 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) -
          ((int)(uVar9 * (int)sVar10) >> 0x10);
  iVar7 = -0x7fff;
  if (-0x8001 < iVar2) {
    iVar7 = iVar2;
  }
  sVar8 = (short)iVar7;
  uVar9 = (int)sVar10 +
          (uVar9 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) >> 0x10);
  sVar10 = (short)uVar9;
  if (0x7ffe < (uVar9 & 0xffff)) {
    sVar10 = 0x7fff;
  }
  sVar5 = -sVar10;
  if (-1 < (int)uVar6) {
    sVar5 = sVar10;
  }
  iVar7 = (int)sVar5;
LAB_03f54c64:
  *(short *)(param_1 + 0x20) = sVar8;
  *(short *)(param_1 + 0x1a) = sVar8;
  iVar2 = *(short *)(param_1 + 0x22c) * 2;
  *(undefined2 *)(param_1 + 0x24) = 0x40;
  iVar3 = *(short *)(param_1 + 0x22e) * 2;
  *(undefined4 *)(param_1 + 0x23c) = 3;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x22e);
  iVar4 = iVar3 * sVar8;
  *(short *)(param_1 + 0x1e) = (short)iVar4;
  sVar5 = (short)((uint)iVar4 >> 0x10);
  sVar10 = sVar5 - (short)((uint)(iVar7 * iVar2) >> 0x10);
  sVar8 = (short)((uint)(iVar3 * iVar7) >> 0x10) + (short)((uint)(iVar2 * sVar8) >> 0x10);
  *(short *)(param_1 + 0x1c) = sVar5;
  *(short *)(param_1 + 0x16) = sVar10;
  *(short *)(param_1 + 0x242) = sVar10;
  *(short *)(param_1 + 0x14) = sVar8;
  *(short *)(param_1 + 0x240) = sVar8;
  *(undefined4 *)(param_1 + 0x250) = 2;
  return;
}

