
void FUN_03f577f4(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x24) & 0xf0;
  sVar5 = *(short *)(param_1 + 0x14);
  *(ushort *)(param_1 + 0x24) = uVar1;
  if (sVar5 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x2f7fff;
    return;
  }
  uVar6 = 0x7fff;
  if (sVar5 != -0x8000) {
    uVar6 = -(int)sVar5;
  }
  uVar3 = (uint)sVar5;
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = uVar6;
  }
  *(undefined2 *)(param_1 + 0x20) = 0x8000;
  uVar6 = ((int)(uVar2 << 0x10) >> 0x17) - 0x1b;
  *(short *)(param_1 + 0x26) = (short)uVar6;
  sVar5 = *(short *)(&DAT_041ea9d8 + (ulong)(uVar6 & 0x3ff) * 2);
  *(short *)(param_1 + 0x16) = 1 - *(short *)(param_1 + 0x16);
  *(short *)(param_1 + 0x22) = (short)uVar2;
  uVar2 = -(uVar2 >> 0xf & 1) & 0xfffe0000 | (uVar2 & 0xffff) << 1;
  uVar6 = ((int)(-0x80000000 - (uVar2 * (int)sVar5 & 0xffff0000)) >> 0xf) * (int)sVar5;
  uVar4 = (ushort)(uVar6 >> 0xf) & 0xfffe;
  if ((uVar6 >> 0x1e & 1) != -((int)uVar6 >> 0x1f)) {
    uVar4 = 0x7fff;
  }
  *(ushort *)(param_1 + 0x1a) = uVar4;
  sVar5 = -0x8000 - (short)(uVar2 * (int)(short)uVar4 >> 0x10);
  *(short *)(param_1 + 0x18) = sVar5;
  uVar6 = (int)sVar5 * (int)(short)uVar4;
  *(short *)(param_1 + 0x1c) = (short)(uVar6 >> 0xf);
  sVar5 = (short)((uVar6 >> 0xf & 0xffff) << 1);
  *(short *)(param_1 + 0x1e) = (short)(uVar6 * 2);
  if ((uVar6 >> 0x1d & 1) != -((int)(uVar6 * 2) >> 0x1f)) {
    sVar5 = 0x7fff;
  }
  *(short *)(param_1 + 0x14) = sVar5;
  if ((int)uVar3 < 0) {
    *(short *)(param_1 + 0x14) = -sVar5;
    *(ushort *)(param_1 + 0x24) = uVar1;
    return;
  }
  *(ushort *)(param_1 + 0x24) = uVar1;
  return;
}

