
void FUN_03f547c4(long param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  
  uVar6 = (uint)*(short *)(param_1 + 0x22a);
  uVar8 = uVar6;
  if ((int)uVar6 < 0) {
    if (uVar6 == 0xffff8000) {
      uVar8 = 0;
      sVar7 = -0x8000;
      goto LAB_03f5486c;
    }
    uVar8 = -uVar6;
  }
  iVar3 = (int)(uVar8 << 0x10) >> 0x18;
  *(undefined2 *)(param_1 + 0x22) = 0x80;
  sVar2 = *(short *)(&DAT_041ea9d8 + ((ulong)(iVar3 + 0x118) & 0xffff) * 2);
  uVar1 = iVar3 + 0x198;
  *(short *)(param_1 + 0x26) = (short)uVar1;
  *(short *)(param_1 + 0x20) = sVar2;
  uVar8 = (uVar8 & 0xff) * 0x32440 >> 0xf & 0x7fe;
  iVar4 = (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) -
          ((int)(uVar8 * (int)sVar2) >> 0x10);
  iVar3 = -0x7fff;
  if (-0x8001 < iVar4) {
    iVar3 = iVar4;
  }
  sVar7 = (short)iVar3;
  uVar8 = (int)sVar2 +
          (uVar8 * (int)*(short *)(&DAT_041ea9d8 + ((ulong)uVar1 & 0xffff) * 2) >> 0x10) & 0xffff;
  if (0x7ffe < uVar8) {
    uVar8 = 0x7fff;
  }
  uVar1 = -uVar8;
  if (-1 < (int)uVar6) {
    uVar1 = uVar8;
  }
  uVar8 = -(uVar1 >> 0xf & 1) & 0xfffe0000 | (uVar1 & 0xffff) << 1;
LAB_03f5486c:
  sVar2 = *(short *)(param_1 + 0x22c);
  *(short *)(param_1 + 0x18) = sVar7;
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xf0;
  *(undefined4 *)(param_1 + 0x23c) = 2;
  uVar6 = (int)sVar7 * (int)sVar2;
  *(short *)(param_1 + 0x1a) = sVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar5 = (undefined2)(uVar6 >> 0xf);
  *(undefined4 *)(param_1 + 0x250) = 2;
  *(undefined2 *)(param_1 + 0x1c) = uVar5;
  *(short *)(param_1 + 0x1e) = (short)uVar6 * 2;
  *(short *)(param_1 + 0x240) = (short)(uVar8 * (int)sVar2 >> 0x10);
  *(undefined2 *)(param_1 + 0x242) = uVar5;
  return;
}

