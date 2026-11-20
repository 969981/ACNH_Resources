
void FUN_03f56dfc(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  *(undefined4 *)(param_1 + 0x250) = 0;
  uVar12 = 0x32e - (param_2 >> 4 & 3);
  *(short *)(param_1 + 0x26) = (short)uVar12;
  *(undefined4 *)(param_1 + 0x23c) = 1;
  sVar3 = *(short *)(param_1 + 0x22e);
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x22a);
  iVar8 = *(short *)(param_1 + 0x22a) * 2;
  uVar2 = *(ushort *)(&DAT_041ea9d8 + (ulong)uVar12 * 2);
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x22c);
  iVar9 = *(short *)(param_1 + 0x22c) * 2;
  *(short *)(param_1 + 0x22) = sVar3;
  *(short *)(param_1 + 0x1a) = sVar3;
  uVar12 = uVar2 ^ 0x20;
  lVar1 = param_1 + 0x28;
  uVar11 = uVar12 - 1;
  sVar4 = *(short *)(lVar1 + ((ulong)uVar2 << 1 | 0x80));
  *(undefined4 *)(param_1 + 0x23c) = 2;
  sVar5 = *(short *)(lVar1 + (ulong)(uVar2 & 0xffffffbf ^ 0x50) * 2);
  *(undefined4 *)(param_1 + 0x23c) = 3;
  sVar6 = *(short *)(lVar1 + (ulong)(uVar12 | 0x40) * 2);
  sVar7 = *(short *)(lVar1 + ((ulong)uVar11 & 0xffff) * 2);
  *(undefined4 *)(param_1 + 0x250) = 1;
  iVar10 = sVar3 * 2;
  *(short *)(param_1 + 0x240) =
       (short)((uint)(iVar9 * sVar5) >> 0x10) + (short)((uint)(iVar8 * sVar4) >> 0x10) +
       (short)((uint)(iVar10 * sVar6) >> 0x10);
  uVar12 = (uVar11 ^ 0x20) - 1;
  sVar4 = *(short *)(lVar1 + (ulong)(uVar11 & 0xffbf ^ 0x70) * 2);
  sVar5 = *(short *)(lVar1 + ((ulong)(uVar11 ^ 0x20 | 0x40) & 0xffff) * 2);
  sVar6 = *(short *)(lVar1 + ((ulong)uVar12 & 0xffff) * 2);
  *(undefined4 *)(param_1 + 0x250) = 2;
  *(short *)(param_1 + 0x24) = (short)(uVar12 ^ 0x20);
  *(short *)(param_1 + 0x242) =
       (short)((uint)(iVar9 * sVar4) >> 0x10) + (short)((uint)(iVar10 * sVar7) >> 0x10) +
       (short)((uint)(iVar8 * sVar5) >> 0x10);
  sVar4 = *(short *)(lVar1 + (ulong)(uVar12 & 0xffbf ^ 0x50) * 2);
  sVar5 = *(short *)(lVar1 + ((ulong)(uVar12 ^ 0x20 | 0x40) & 0xffff) * 2);
  *(undefined4 *)(param_1 + 0x250) = 3;
  *(short *)(param_1 + 0x18) = sVar5;
  uVar12 = (int)sVar5 * (int)sVar3;
  sVar3 = (short)(uVar12 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar12 * 2;
  *(short *)(param_1 + 0x1c) = sVar3;
  sVar3 = (short)((uint)(iVar9 * sVar4) >> 0x10) + (short)((uint)(iVar8 * sVar6) >> 0x10) + sVar3;
  *(short *)(param_1 + 0x16) = sVar3;
  *(short *)(param_1 + 0x244) = sVar3;
  return;
}

