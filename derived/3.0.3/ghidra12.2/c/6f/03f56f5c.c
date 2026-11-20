
void FUN_03f56f5c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (param_2 >> 4 & 3) + 0x32e;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(short *)(param_1 + 0x26) = (short)uVar1;
  lVar2 = param_1 + 0x28;
  uVar4 = *(ushort *)(&DAT_041ea9d8 + (ulong)uVar1 * 2);
  *(ushort *)(param_1 + 0x24) = uVar4 - 2;
  sVar5 = *(short *)(lVar2 + ((ulong)uVar4 << 1 | 0x80));
  *(undefined4 *)(param_1 + 0x23c) = 1;
  sVar6 = *(short *)(lVar2 + (ulong)(ushort)(uVar4 - 1 | 0x40) * 2);
  *(undefined4 *)(param_1 + 0x23c) = 2;
  uVar7 = (int)sVar5 * (int)*(short *)(param_1 + 0x22a);
  sVar5 = *(short *)(lVar2 + (ulong)(ushort)(uVar4 - 2 | 0x40) * 2);
  *(undefined4 *)(param_1 + 0x250) = 1;
  uVar8 = (int)sVar6 * (int)*(short *)(param_1 + 0x22c);
  *(short *)(param_1 + 0x18) = sVar5;
  uVar1 = (uVar8 * 2 & 0xfffe) + (uVar7 * 2 & 0xfffe);
  *(undefined4 *)(param_1 + 0x23c) = 3;
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x22e);
  uVar9 = (int)sVar5 * (int)*(short *)(param_1 + 0x22e);
  sVar5 = (short)(uVar9 >> 0xf);
  uVar9 = uVar9 * 2;
  *(short *)(param_1 + 0x1e) = (short)uVar9;
  *(short *)(param_1 + 0x1c) = sVar5;
  iVar3 = (uVar9 & 0xfffe) + (uVar1 & 0xfffe);
  sVar5 = (short)(uVar8 >> 0xf) + (short)((uVar7 & 0x7fffffff) >> 0xf) + (short)(uVar1 >> 0x10) +
          sVar5 + (short)((uint)iVar3 >> 0x10);
  *(short *)(param_1 + 0x14) = (short)iVar3;
  *(short *)(param_1 + 0x16) = sVar5;
  *(short *)(param_1 + 0x240) = sVar5;
  return;
}

